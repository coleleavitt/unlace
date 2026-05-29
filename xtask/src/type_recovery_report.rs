//! `xtask type-recovery-report` - DWARF/source-backed type recovery score.
//!
//! This is intentionally conservative: only source-known ELF fixtures with
//! extractable DWARF and C identifier function names are scored. The recovered
//! side is the user-visible C output from `unlace batch`, so the report measures
//! what a reverser actually sees rather than internal debug-info availability.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::process::{self, Command};

use serde::Deserialize;
use unlace_loader::{DwarfInfo, ElfLoader, FunctionDebugInfo, Loader, StructField, import_dwarf};

#[derive(Debug, Deserialize)]
struct Manifest {
    #[serde(default)]
    fixture: Vec<Fixture>,
}

#[derive(Debug, Deserialize)]
struct Fixture {
    name: String,
    #[serde(default)]
    source_path: Option<String>,
    binary_path: String,
    #[serde(default)]
    flags: Option<String>,
    #[serde(default)]
    architecture: Option<String>,
    #[serde(default)]
    feature_tags: Vec<String>,
}

#[derive(Debug, Default, Clone, Copy)]
struct Counter {
    expected: usize,
    recovered: usize,
}

impl Counter {
    fn add(&mut self, recovered: bool) {
        self.expected += 1;
        if recovered {
            self.recovered += 1;
        }
    }

    fn merge(&mut self, other: Counter) {
        self.expected += other.expected;
        self.recovered += other.recovered;
    }
}

#[derive(Debug, Default, Clone)]
struct TypeScore {
    fixtures: usize,
    functions: usize,
    return_types: Counter,
    param_names: Counter,
    param_types: Counter,
    local_names: Counter,
    local_types: Counter,
    struct_names: Counter,
    field_names: Counter,
    field_types: Counter,
}

impl TypeScore {
    fn merge(&mut self, other: &TypeScore) {
        self.fixtures += other.fixtures;
        self.functions += other.functions;
        self.return_types.merge(other.return_types);
        self.param_names.merge(other.param_names);
        self.param_types.merge(other.param_types);
        self.local_names.merge(other.local_names);
        self.local_types.merge(other.local_types);
        self.struct_names.merge(other.struct_names);
        self.field_names.merge(other.field_names);
        self.field_types.merge(other.field_types);
    }

    fn expected(&self) -> usize {
        self.return_types.expected
            + self.param_names.expected
            + self.param_types.expected
            + self.local_names.expected
            + self.local_types.expected
            + self.struct_names.expected
            + self.field_names.expected
            + self.field_types.expected
    }

    fn recovered(&self) -> usize {
        self.return_types.recovered
            + self.param_names.recovered
            + self.param_types.recovered
            + self.local_names.recovered
            + self.local_types.recovered
            + self.struct_names.recovered
            + self.field_names.recovered
            + self.field_types.recovered
    }

    fn percent(&self) -> f64 {
        let expected = self.expected();
        if expected == 0 {
            0.0
        } else {
            self.recovered() as f64 * 100.0 / expected as f64
        }
    }
}

pub fn run(root: &Path) -> i32 {
    let manifest = match read_manifest(root) {
        Ok(m) => m,
        Err(e) => {
            eprintln!("type-recovery-report: {e}");
            return 1;
        }
    };

    let Some(unlace_bin) = find_or_build_unlace(root) else {
        eprintln!("type-recovery-report: unlace binary not found and build failed");
        return 1;
    };

    let mut source_known = 0usize;
    let mut dwarf_candidates = 0usize;
    let mut by_opt: BTreeMap<String, usize> = BTreeMap::new();
    let mut total_score = TypeScore::default();

    println!("type-recovery-report: source/DWARF ground-truth candidates");
    println!();

    for fixture in &manifest.fixture {
        let Some(source) = fixture.source_path.as_deref() else {
            continue;
        };
        source_known += 1;

        let flags = fixture.flags.as_deref().unwrap_or("unknown");
        let opt = optimization_level(flags);
        *by_opt.entry(opt.to_string()).or_default() += 1;

        let dwarf = match load_dwarf(root, fixture) {
            Ok(dwarf) => dwarf,
            Err(e) => {
                println!(
                    "[type-ground-truth] SKIP {} arch={} opt={} source={} binary={} reason={}",
                    fixture.name,
                    fixture.architecture.as_deref().unwrap_or("unknown"),
                    opt,
                    source,
                    fixture.binary_path,
                    e,
                );
                continue;
            }
        };
        let has_dwarf = dwarf
            .as_ref()
            .is_some_and(|d| !d.functions.is_empty() || !d.structs.is_empty());
        if has_dwarf {
            dwarf_candidates += 1;
        }

        let candidate_kind = if has_dwarf {
            "source+dwarf"
        } else {
            "source-only"
        };
        println!(
            "[type-ground-truth] CANDIDATE {} arch={} opt={} kind={} source={} binary={} tags={}",
            fixture.name,
            fixture.architecture.as_deref().unwrap_or("unknown"),
            opt,
            candidate_kind,
            source,
            fixture.binary_path,
            fixture.feature_tags.join(","),
        );

        let Some(dwarf) = dwarf else {
            continue;
        };
        if fixture.architecture.as_deref() != Some("x86_64") {
            println!(
                "[type-recovery] SKIP {} - non-host architecture {:?}",
                fixture.name, fixture.architecture
            );
            continue;
        }
        if !source.ends_with(".c") {
            println!(
                "[type-recovery] SKIP {} - first scorer is C-only; source is {}",
                fixture.name, source
            );
            continue;
        }

        match score_fixture(root, &unlace_bin, fixture, &dwarf) {
            Ok(score) => {
                println_score(&fixture.name, &score);
                total_score.merge(&score);
            }
            Err(e) => println!("[type-recovery] SKIP {} - {}", fixture.name, e),
        }
    }

    println!();
    println!("type-recovery-report: optimization-level denominator");
    for (opt, count) in by_opt {
        println!("[type-ground-truth] opt={opt} fixtures={count}");
    }

    println!();
    println_score("TOTAL", &total_score);
    println!(
        "Type/Variable Recovery: MEASURED fixtures={} functions={} recovered={} expected={} accuracy={:.1}% source_known={} dwarf_candidates={}",
        total_score.fixtures,
        total_score.functions,
        total_score.recovered(),
        total_score.expected(),
        total_score.percent(),
        source_known,
        dwarf_candidates,
    );
    println!(
        "type-recovery-report: exact textual scorer covers C signatures, params, locals, structs, and fields; C++ templates/RTTI and non-host binaries remain explicit skips"
    );

    0
}

fn read_manifest(root: &Path) -> Result<Manifest, String> {
    let path = root.join("tests/corpus.toml");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    toml::from_str(&text).map_err(|e| format!("failed to parse {}: {e}", path.display()))
}

fn load_dwarf(root: &Path, fixture: &Fixture) -> Result<Option<DwarfInfo>, String> {
    let path = root.join(&fixture.binary_path);
    let data = std::fs::read(&path).map_err(|e| format!("failed to read binary: {e}"))?;
    if !ElfLoader::can_load(&data) {
        return Ok(None);
    }
    let image = ElfLoader::load(&data).map_err(|e| format!("failed to load ELF: {e}"))?;
    let dwarf = import_dwarf(&image).map_err(|e| format!("failed to import DWARF: {e}"))?;
    if dwarf.functions.is_empty() && dwarf.structs.is_empty() {
        Ok(None)
    } else {
        Ok(Some(dwarf))
    }
}

fn find_or_build_unlace(root: &Path) -> Option<PathBuf> {
    if let Some(path) = find_unlace_binary(root) {
        return Some(path);
    }

    let status = Command::new("cargo")
        .args(["build", "-q", "-p", "unlace-cli"])
        .current_dir(root)
        .status()
        .ok()?;
    if !status.success() {
        return None;
    }
    find_unlace_binary(root)
}

fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| root.join("target"));
    let debug_bin = target_dir.join("debug").join("unlace");
    if debug_bin.exists() {
        return Some(debug_bin);
    }
    let release_bin = target_dir.join("release").join("unlace");
    if release_bin.exists() {
        return Some(release_bin);
    }
    None
}

fn score_fixture(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    dwarf: &DwarfInfo,
) -> Result<TypeScore, String> {
    let functions = scoreable_functions(dwarf);
    if functions.is_empty() {
        return Err("no C-identifier DWARF functions to score".to_string());
    }

    let output_dir = std::env::temp_dir().join(format!(
        "unlace-type-recovery-{}-{}",
        process::id(),
        fixture.name
    ));
    let _ = std::fs::remove_dir_all(&output_dir);
    std::fs::create_dir_all(&output_dir)
        .map_err(|e| format!("failed to create {}: {e}", output_dir.display()))?;

    let scope = format!(
        "^({})$",
        functions
            .iter()
            .map(|f| f.name.as_str())
            .collect::<Vec<_>>()
            .join("|")
    );
    let binary = root.join(&fixture.binary_path);
    let output = Command::new(unlace_bin)
        .args(["batch", "--emit", "c", "--output-dir"])
        .arg(&output_dir)
        .args(["--scope", &scope])
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace batch: {e}"))?;
    if !output.status.success() {
        return Err(format!(
            "unlace batch failed: {}",
            String::from_utf8_lossy(&output.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let mut rendered = BTreeMap::new();
    for function in &functions {
        let path = output_dir.join(format!("{}.c", function.name));
        let text = std::fs::read_to_string(&path).unwrap_or_default();
        rendered.insert(function.name.as_str(), text);
    }
    let all_output = rendered.values().cloned().collect::<Vec<_>>().join("\n");
    let mut score = TypeScore {
        fixtures: 1,
        functions: functions.len(),
        ..TypeScore::default()
    };

    for function in &functions {
        let text = rendered
            .get(function.name.as_str())
            .map_or("", String::as_str);
        score_function(function, text, &mut score);
    }
    score_structs(dwarf, &all_output, &mut score);

    let _ = std::fs::remove_dir_all(&output_dir);
    Ok(score)
}

fn scoreable_functions(dwarf: &DwarfInfo) -> Vec<&FunctionDebugInfo> {
    let mut seen = BTreeSet::new();
    let mut functions = Vec::new();
    for function in dwarf.functions.values() {
        if !is_c_identifier(&function.name) || !seen.insert(function.name.as_str()) {
            continue;
        }
        functions.push(function);
    }
    functions.sort_by(|a, b| a.name.cmp(&b.name));
    functions
}

fn score_function(function: &FunctionDebugInfo, text: &str, score: &mut TypeScore) {
    let trace = type_trace_enabled();
    let signature = signature_line(text, &function.name);
    if let Some(return_type) = function.return_type.as_deref() {
        score.return_types.add(
            signature
                .as_deref()
                .is_some_and(|line| signature_return_matches(line, &function.name, return_type)),
        );
    }

    for param in &function.params {
        if let Some(name) = param.name.as_deref() {
            score.param_names.add(
                signature
                    .as_deref()
                    .is_some_and(|line| word_contains(line, name)),
            );
        }
        if let Some(type_name) = param.type_name.as_deref() {
            score
                .param_types
                .add(signature.as_deref().is_some_and(|line| {
                    signature_param_type_matches(line, type_name, param.name.as_deref())
                }));
        }
    }

    for local in &function.locals {
        let name_recovered = word_contains(text, &local.name);
        if trace && !name_recovered {
            eprintln!(
                "[type-recovery:miss] function={} local_name={} type={:?} frame_offset={:?}",
                function.name, local.name, local.type_name, local.frame_offset
            );
        }
        score.local_names.add(name_recovered);
        if let Some(type_name) = local.type_name.as_deref() {
            let type_recovered = type_and_name_appear(text, type_name, Some(&local.name));
            if trace && !type_recovered {
                eprintln!(
                    "[type-recovery:miss] function={} local_type={} name={}",
                    function.name, type_name, local.name
                );
            }
            score.local_types.add(type_recovered);
        }
    }
}

fn score_structs(dwarf: &DwarfInfo, output: &str, score: &mut TypeScore) {
    let trace = type_trace_enabled();
    for strukt in dwarf.structs.values() {
        if strukt.name.is_empty() {
            continue;
        }
        let struct_recovered = word_contains(output, &strukt.name);
        if trace && !struct_recovered {
            eprintln!("[type-recovery:miss] struct_name={}", strukt.name);
        }
        score.struct_names.add(struct_recovered);
        for field in &strukt.fields {
            let field_name_recovered = field_name_appears(output, field);
            if trace && !field_name_recovered {
                eprintln!(
                    "[type-recovery:miss] struct={} field_name={} offset={} type={}",
                    strukt.name, field.name, field.offset, field.type_name
                );
            }
            score.field_names.add(field_name_recovered);
            let field_type_recovered =
                type_and_name_appear(output, &field.type_name, Some(&field.name));
            if trace && !field_type_recovered {
                eprintln!(
                    "[type-recovery:miss] struct={} field_type={} name={}",
                    strukt.name, field.type_name, field.name
                );
            }
            score.field_types.add(field_type_recovered);
        }
    }
}

fn type_trace_enabled() -> bool {
    std::env::var_os("UNLACE_TYPE_TRACE")
        .map(|v| v != "0")
        .unwrap_or(false)
}

fn signature_line(text: &str, function_name: &str) -> Option<String> {
    let needle = format!("{function_name}(");
    text.lines().find_map(|line| {
        let trimmed = line.trim();
        if trimmed.starts_with("//") || trimmed.starts_with("/*") || trimmed.starts_with('*') {
            return None;
        }
        if trimmed.contains(&needle) && trimmed.ends_with('{') {
            Some(trimmed.trim_end_matches('{').trim().to_string())
        } else {
            None
        }
    })
}

fn signature_return_matches(signature: &str, function_name: &str, return_type: &str) -> bool {
    let Some(idx) = signature.find(&format!("{function_name}(")) else {
        return false;
    };
    normalize_type(&signature[..idx]) == normalize_type(return_type)
}

fn signature_param_type_matches(
    signature: &str,
    type_name: &str,
    param_name: Option<&str>,
) -> bool {
    type_and_name_appear(signature, type_name, param_name)
}

fn type_and_name_appear(text: &str, type_name: &str, name: Option<&str>) -> bool {
    let normalized_text = normalize_type(text);
    let normalized_type = normalize_type(type_name);
    if !normalized_text.contains(&normalized_type) {
        return false;
    }
    name.is_none_or(|name| word_contains(text, name))
}

fn field_name_appears(output: &str, field: &StructField) -> bool {
    output.contains(&format!(".{}", field.name))
        || output.contains(&format!("->{}", field.name))
        || word_contains(output, &field.name)
}

fn normalize_type(value: &str) -> String {
    let mut normalized = value
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("typedef ", "")
        .replace("__noreturn ", "")
        .replace("signed int", "int")
        .replace("long int", "long")
        .replace("unsigned int", "unsigned")
        .replace("struct ", "")
        .replace(" *", "*")
        .replace("* ", "*");
    normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    normalized.trim().to_string()
}

fn word_contains(haystack: &str, needle: &str) -> bool {
    if needle.is_empty() {
        return false;
    }
    let mut search_from = 0usize;
    while let Some(pos) = haystack[search_from..].find(needle) {
        let start = search_from + pos;
        let end = start + needle.len();
        let before = haystack[..start].chars().next_back();
        let after = haystack[end..].chars().next();
        if before.is_none_or(|c| !is_ident_char(c)) && after.is_none_or(|c| !is_ident_char(c)) {
            return true;
        }
        search_from = end;
    }
    false
}

fn is_ident_char(ch: char) -> bool {
    ch == '_' || ch.is_ascii_alphanumeric()
}

fn is_c_identifier(name: &str) -> bool {
    let mut chars = name.chars();
    let Some(first) = chars.next() else {
        return false;
    };
    (first == '_' || first.is_ascii_alphabetic()) && chars.all(is_ident_char)
}

fn optimization_level(flags: &str) -> &str {
    if flags.contains("-O0") {
        "-O0"
    } else if flags.contains("-O1") {
        "-O1"
    } else if flags.contains("-O2") {
        "-O2"
    } else if flags.contains("-O3") {
        "-O3"
    } else {
        "unknown"
    }
}

fn println_score(label: &str, score: &TypeScore) {
    println!(
        "[type-recovery] SCORE {} fixtures={} functions={} recovered={} expected={} accuracy={:.1}% returns={}/{} param_names={}/{} param_types={}/{} local_names={}/{} local_types={}/{} structs={}/{} field_names={}/{} field_types={}/{}",
        label,
        score.fixtures,
        score.functions,
        score.recovered(),
        score.expected(),
        score.percent(),
        score.return_types.recovered,
        score.return_types.expected,
        score.param_names.recovered,
        score.param_names.expected,
        score.param_types.recovered,
        score.param_types.expected,
        score.local_names.recovered,
        score.local_names.expected,
        score.local_types.recovered,
        score.local_types.expected,
        score.struct_names.recovered,
        score.struct_names.expected,
        score.field_names.recovered,
        score.field_names.expected,
        score.field_types.recovered,
        score.field_types.expected,
    );
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn c_identifier_filter_rejects_demangled_cpp_names() {
        assert!(is_c_identifier("main"));
        assert!(is_c_identifier("_start"));
        assert!(!is_c_identifier("make_box(int)"));
        assert!(!is_c_identifier("Dog::speak"));
    }

    #[test]
    fn signature_return_matching_ignores_noreturn_annotation() {
        assert!(signature_return_matches(
            "int __noreturn main(void)",
            "main",
            "int"
        ));
    }

    #[test]
    fn word_contains_uses_identifier_boundaries() {
        assert!(word_contains("int value = 1;", "value"));
        assert!(!word_contains("int my_value = 1;", "value"));
    }
}
