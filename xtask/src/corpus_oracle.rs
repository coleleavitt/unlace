//! Ground truth for one unstripped build: which functions the program's own
//! sources define, where they live, and their declared parameter counts.
//!
//! Read straight from the ELF symbol table and DWARF with `object`/`gimli`,
//! independent of unlace's loader, so the oracle never shares bugs with the
//! system it measures.

use std::borrow::Cow;
use std::collections::BTreeMap;
use std::path::{Component, Path, PathBuf};

use gimli::{AttributeValue, EndianSlice, RunTimeEndian, UnitOffset};
use object::{Object, ObjectSection, ObjectSymbol, SymbolKind};

type Reader<'a> = EndianSlice<'a, RunTimeEndian>;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FunctionTruth {
    pub addr: u64,
    /// ELF symbol at `addr`; compiler clones keep their suffix (`f.part.0`).
    pub symbol: String,
    /// Source-level name from DWARF (through `DW_AT_abstract_origin`).
    pub source_name: String,
    /// Program source that declares the function, relative to the corpus dir.
    pub source_file: PathBuf,
    pub decl_line: u64,
    pub params: usize,
    pub variadic: bool,
}

impl FunctionTruth {
    /// GCC/Clang clones (`.part.N`, `.constprop.N`, `.isra.N`, `.cold`) have
    /// a compiler-chosen ABI, so the source prototype does not describe them.
    pub fn is_clone(&self) -> bool {
        self.symbol.contains('.')
    }
}

#[derive(Debug, Clone, Default)]
pub struct BuildTruth {
    /// Every defined text symbol, keyed by address.
    pub symbols: BTreeMap<u64, String>,
    /// Functions declared in the program's own sources, keyed by address.
    pub functions: BTreeMap<u64, FunctionTruth>,
}

pub fn read(unstripped: &Path, sources: &[PathBuf]) -> Result<BuildTruth, String> {
    let data = std::fs::read(unstripped)
        .map_err(|e| format!("failed to read {}: {e}", unstripped.display()))?;
    let file = object::File::parse(&*data)
        .map_err(|e| format!("failed to load {}: {e}", unstripped.display()))?;
    let symbols = function_symbols(&file);
    let endian = if file.is_little_endian() {
        RunTimeEndian::Little
    } else {
        RunTimeEndian::Big
    };
    let sections = gimli::DwarfSections::load(|id| {
        let data = file
            .section_by_name(id.name())
            .and_then(|section| section.uncompressed_data().ok())
            .unwrap_or(Cow::Borrowed(&[]));
        Ok::<_, gimli::Error>(data)
    })
    .map_err(|e| format!("{}: {e}", unstripped.display()))?;
    let dwarf = sections.borrow(|section| EndianSlice::new(section, endian));
    let functions = collect(&dwarf, &symbols, sources)
        .map_err(|e| format!("{}: DWARF: {e}", unstripped.display()))?;
    Ok(BuildTruth { symbols, functions })
}

/// Defined, sized text symbols. When several names share an address the
/// lexicographically first wins, which keeps the choice deterministic.
fn function_symbols(file: &object::File<'_>) -> BTreeMap<u64, String> {
    let mut symbols = BTreeMap::new();
    for symbol in file.symbols() {
        if symbol.kind() != SymbolKind::Text || !symbol.is_definition() || symbol.size() == 0 {
            continue;
        }
        let Ok(name) = symbol.name() else {
            continue;
        };
        symbols
            .entry(symbol.address())
            .and_modify(|existing: &mut String| {
                if name < existing.as_str() {
                    *existing = name.to_string();
                }
            })
            .or_insert_with(|| name.to_string());
    }
    symbols
}

fn collect(
    dwarf: &gimli::Dwarf<Reader<'_>>,
    symbols: &BTreeMap<u64, String>,
    sources: &[PathBuf],
) -> gimli::Result<BTreeMap<u64, FunctionTruth>> {
    let mut functions = BTreeMap::new();
    let mut units = dwarf.units();
    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut entries = unit.entries();
        while let Some(entry) = entries.next_dfs()? {
            if entry.tag() != gimli::DW_TAG_subprogram {
                continue;
            }
            let mut ranges = dwarf.die_ranges(&unit, entry)?;
            let mut entry_points = Vec::new();
            while let Some(range) = ranges.next()? {
                if symbols.contains_key(&range.begin) {
                    entry_points.push(range.begin);
                }
            }
            if entry_points.is_empty() {
                continue;
            }
            let Some(decl) = Declaration::resolve(dwarf, &unit, entry.offset())? else {
                continue;
            };
            let Some(source_file) = decl
                .file
                .as_deref()
                .and_then(|path| sources.iter().find(|source| path.ends_with(source)))
            else {
                continue;
            };
            for addr in entry_points {
                functions.insert(
                    addr,
                    FunctionTruth {
                        addr,
                        symbol: symbols[&addr].clone(),
                        source_name: decl.name.clone(),
                        source_file: source_file.clone(),
                        decl_line: decl.line,
                        params: decl.params,
                        variadic: decl.variadic,
                    },
                );
            }
        }
    }
    Ok(functions)
}

/// The source declaration a concrete subprogram DIE refers to.
struct Declaration {
    name: String,
    file: Option<PathBuf>,
    line: u64,
    params: usize,
    variadic: bool,
}

impl Declaration {
    /// Follows `DW_AT_abstract_origin` / `DW_AT_specification` to the DIE
    /// that carries the name and prototype.
    fn resolve(
        dwarf: &gimli::Dwarf<Reader<'_>>,
        unit: &gimli::Unit<Reader<'_>>,
        mut offset: UnitOffset,
    ) -> gimli::Result<Option<Self>> {
        let mut file = None;
        let mut line = 0;
        for _ in 0..4 {
            let entry = unit.entry(offset)?;
            if file.is_none()
                && let Some(AttributeValue::FileIndex(index) | AttributeValue::Udata(index)) =
                    entry.attr_value(gimli::DW_AT_decl_file)
            {
                file = file_path(dwarf, unit, index)?;
            }
            if line == 0
                && let Some(value) = entry
                    .attr_value(gimli::DW_AT_decl_line)
                    .and_then(|v| v.udata_value())
            {
                line = value;
            }
            if let Some(name) = entry.attr_value(gimli::DW_AT_name) {
                let name = dwarf
                    .attr_string(unit, name)?
                    .to_string_lossy()
                    .into_owned();
                let (params, variadic) = prototype(unit, offset)?;
                return Ok(Some(Declaration {
                    name,
                    file,
                    line,
                    params,
                    variadic,
                }));
            }
            let origin = entry
                .attr_value(gimli::DW_AT_abstract_origin)
                .or_else(|| entry.attr_value(gimli::DW_AT_specification));
            match origin {
                Some(AttributeValue::UnitRef(next)) => offset = next,
                _ => return Ok(None),
            }
        }
        Ok(None)
    }
}

fn prototype(unit: &gimli::Unit<Reader<'_>>, offset: UnitOffset) -> gimli::Result<(usize, bool)> {
    let mut tree = unit.entries_tree(Some(offset))?;
    let mut children = tree.root()?.children();
    let mut params = 0;
    let mut variadic = false;
    while let Some(child) = children.next()? {
        match child.entry().tag() {
            gimli::DW_TAG_formal_parameter => params += 1,
            gimli::DW_TAG_unspecified_parameters => variadic = true,
            _ => {}
        }
    }
    Ok((params, variadic))
}

fn file_path(
    dwarf: &gimli::Dwarf<Reader<'_>>,
    unit: &gimli::Unit<Reader<'_>>,
    index: u64,
) -> gimli::Result<Option<PathBuf>> {
    let Some(program) = unit.line_program.as_ref() else {
        return Ok(None);
    };
    let header = program.header();
    let Some(file) = header.file(index) else {
        return Ok(None);
    };
    let mut path = PathBuf::new();
    if let Some(dir) = file.directory(header) {
        path.push(dwarf.attr_string(unit, dir)?.to_string_lossy().as_ref());
    }
    path.push(
        dwarf
            .attr_string(unit, file.path_name())?
            .to_string_lossy()
            .as_ref(),
    );
    Ok(Some(
        path.components()
            .filter(|c| *c != Component::CurDir)
            .collect(),
    ))
}

/// Code lines of the function whose declaration starts on `decl_line`
/// (1-based): from the declaration through its matching closing brace,
/// skipping blank and comment-only lines.
pub fn source_lines(source: &str, decl_line: u64) -> Option<usize> {
    let start = usize::try_from(decl_line).ok()?.checked_sub(1)?;
    let mut depth = 0usize;
    let mut opened = false;
    let mut count = 0;
    for line in source.lines().skip(start) {
        let trimmed = line.trim();
        if !(trimmed.is_empty()
            || trimmed.starts_with("//")
            || trimmed.starts_with("/*")
            || trimmed.starts_with('*'))
        {
            count += 1;
        }
        for c in code_chars(line) {
            match c {
                '{' => {
                    depth += 1;
                    opened = true;
                }
                '}' => depth = depth.checked_sub(1)?,
                _ => {}
            }
        }
        if opened && depth == 0 {
            return Some(count);
        }
    }
    None
}

/// Characters of `line` outside string/char literals and `//` comments.
fn code_chars(line: &str) -> impl Iterator<Item = char> + '_ {
    let mut quote = None;
    let mut escaped = false;
    let mut prev = '\0';
    let mut comment = false;
    line.chars().filter(move |&c| {
        if comment {
            return false;
        }
        if let Some(q) = quote {
            if escaped {
                escaped = false;
            } else if c == '\\' {
                escaped = true;
            } else if c == q {
                quote = None;
            }
            return false;
        }
        if c == '/' && prev == '/' {
            comment = true;
            return false;
        }
        prev = c;
        if c == '"' || c == '\'' {
            quote = Some(c);
            return false;
        }
        true
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn source_lines_counts_through_matching_brace() {
        let src = "int f(int a) {\n    // note\n\n    if (a) { return '{'; }\n    return \"}\" [0];\n}\nint g(void) { return 0; }\n";
        assert_eq!(source_lines(src, 1), Some(4));
        assert_eq!(source_lines(src, 7), Some(1));
    }

    #[test]
    fn source_lines_handles_brace_on_next_line() {
        let src = "void h(int x)\n{\n\tx++;\n}\n";
        assert_eq!(source_lines(src, 1), Some(4));
    }
}
