//! Text metrics over C-like pseudocode, applied identically to Hex-Rays and
//! unlace output so the two sides are measured by the same yardstick.

use std::collections::BTreeMap;

/// CPU flag registers as they appear in declaration comments
/// (`char v5; // zf`, `_BOOL c11; // PF`).
const FLAG_REGISTERS: &[&str] = &["cf", "zf", "sf", "of", "pf", "af", "df"];

/// Helper calls that only exist to model condition flags.
const FLAG_HELPERS: &[&str] = &[
    "__OFADD__",
    "__OFSUB__",
    "__OFMUL__",
    "__CFADD__",
    "__CFSUB__",
    "__CFSHL__",
    "__CFSHR__",
    "__CFRCL__",
    "__CFRCR__",
    "__SETP__",
    "__builtin_popcount",
];

/// Calling-convention and storage keywords that are not part of a return type.
const SIGNATURE_KEYWORDS: &[&str] = &[
    "__fastcall",
    "__cdecl",
    "__stdcall",
    "__thiscall",
    "__usercall",
    "__userpurge",
    "__noreturn",
    "__golang",
    "__swiftcall",
    "static",
    "inline",
    "extern",
];

const TYPE_KEYWORDS: &[&str] = &[
    "void", "char", "short", "int", "long", "float", "double", "signed", "unsigned", "bool",
    "_Bool", "const", "volatile", "struct", "union", "enum",
];

/// Prototype shape parsed from a signature line.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Signature {
    pub return_type: String,
    pub param_types: Vec<String>,
    pub is_vararg: bool,
}

/// Measured shape of one function's pseudocode.
#[derive(Debug, Clone, Default, PartialEq, Eq, serde::Serialize)]
pub struct TextMetrics {
    pub lines: usize,
    pub lvar_decls: usize,
    pub flag_vars: usize,
    pub flag_helpers: usize,
    pub gotos: usize,
    pub labels: usize,
    pub empty_blocks: usize,
    pub raw_derefs: usize,
    pub memory_refs: usize,
    /// Declared local types by spelling (`int`, `_QWORD`, `char *`, `int[]`).
    pub decl_types: BTreeMap<String, usize>,
}

impl TextMetrics {
    pub fn add(&mut self, other: &Self) {
        self.lines += other.lines;
        self.lvar_decls += other.lvar_decls;
        self.flag_vars += other.flag_vars;
        self.flag_helpers += other.flag_helpers;
        self.gotos += other.gotos;
        self.labels += other.labels;
        self.empty_blocks += other.empty_blocks;
        self.raw_derefs += other.raw_derefs;
        self.memory_refs += other.memory_refs;
        for (ty, n) in &other.decl_types {
            *self.decl_types.entry(ty.clone()).or_default() += n;
        }
    }
}

/// Parse the prototype from the text before the body's opening brace.
pub fn parse_signature(text: &str) -> Option<Signature> {
    let head = strip_comments(text.split('{').next()?);
    let open = head.find('(')?;
    let close = matching_paren(&head, open)?;
    let before = head[..open].trim();
    let mut words: Vec<&str> = before
        .split_whitespace()
        .filter(|w| !SIGNATURE_KEYWORDS.contains(w))
        .collect();
    let name = words.pop()?;
    let mut return_type = words.join(" ");
    // `char *name(` keeps the pointer star on the name token.
    let stars = name.chars().take_while(|&c| c == '*').count();
    for _ in 0..stars {
        return_type.push_str(" *");
    }
    let params = &head[open + 1..close];
    let mut param_types = Vec::new();
    let mut is_vararg = false;
    for param in split_top_level(params) {
        let param = param.trim();
        match param {
            "" | "void" => {}
            "..." => is_vararg = true,
            _ => param_types.push(param_type(param)),
        }
    }
    Some(Signature {
        return_type: normalize_type(&return_type),
        param_types,
        is_vararg,
    })
}

/// Measure a function's pseudocode, from its signature through its closing brace.
pub fn measure(text: &str) -> TextMetrics {
    let mut metrics = TextMetrics {
        empty_blocks: count_empty_blocks(text),
        ..TextMetrics::default()
    };
    for line in text.lines() {
        let code = strip_comments(line);
        let trimmed = code.trim();
        if trimmed.is_empty() {
            continue;
        }
        metrics.lines += 1;
        if is_label(trimmed) {
            metrics.labels += 1;
        }
        metrics.gotos += count_word(&code, "goto");
        metrics.raw_derefs += count_raw_derefs(&code);
        metrics.memory_refs += code.matches("MEMORY[").count();
        metrics.flag_helpers += FLAG_HELPERS
            .iter()
            .map(|h| count_word(&code, h))
            .sum::<usize>();
        if let Some(ty) = declared_type(trimmed) {
            metrics.lvar_decls += 1;
            *metrics.decl_types.entry(ty).or_default() += 1;
            if declares_flag(line) {
                metrics.flag_vars += 1;
            }
        }
    }
    metrics
}

/// Collapse spacing so `char*`, `char *` and `char  *` compare equal.
pub fn normalize_type(ty: &str) -> String {
    let spaced = ty.replace('*', " * ").replace('&', " & ");
    let mut out = spaced.split_whitespace().collect::<Vec<_>>().join(" ");
    while out.contains("* *") {
        out = out.replace("* *", "**");
    }
    out.replace("( ", "(").replace(" )", ")")
}

fn param_type(param: &str) -> String {
    // Hex-Rays `__usercall` parameters carry `@<reg>` locations.
    let param = param.split("@<").next().unwrap_or(param).trim();
    if param.contains("(*") || param.contains("( *") {
        return normalize_type(param);
    }
    let split = param
        .rfind(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
        .map_or(0, |i| i + 1);
    let (ty, name) = param.split_at(split);
    let looks_named = !ty.trim().is_empty()
        && !name.is_empty()
        && !TYPE_KEYWORDS.contains(&name)
        && !ty.trim().ends_with(&['(', ','][..]);
    normalize_type(if looks_named { ty } else { param })
}

fn matching_paren(text: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (i, c) in text[open..].char_indices() {
        match c {
            '(' => depth += 1,
            ')' => {
                depth -= 1;
                if depth == 0 {
                    return Some(open + i);
                }
            }
            _ => {}
        }
    }
    None
}

fn split_top_level(params: &str) -> Vec<&str> {
    let mut out = Vec::new();
    let mut depth = 0i32;
    let mut start = 0;
    for (i, c) in params.char_indices() {
        match c {
            '(' | '[' | '<' => depth += 1,
            ')' | ']' | '>' => depth -= 1,
            ',' if depth == 0 => {
                out.push(&params[start..i]);
                start = i + 1;
            }
            _ => {}
        }
    }
    out.push(&params[start..]);
    out
}

/// Drop `//` and `/* */` comments outside string and character literals.
pub fn strip_comments(text: &str) -> String {
    let mut out = String::with_capacity(text.len());
    let mut chars = text.chars().peekable();
    let mut quote: Option<char> = None;
    let mut in_block = false;
    while let Some(c) = chars.next() {
        if in_block {
            if c == '*' && chars.peek() == Some(&'/') {
                chars.next();
                in_block = false;
            }
            continue;
        }
        if let Some(q) = quote {
            out.push(c);
            if c == '\\' {
                if let Some(next) = chars.next() {
                    out.push(next);
                }
            } else if c == q {
                quote = None;
            }
            continue;
        }
        match (c, chars.peek()) {
            ('/', Some('/')) => {
                while chars.peek().is_some_and(|&n| n != '\n') {
                    chars.next();
                }
            }
            ('/', Some('*')) => {
                chars.next();
                in_block = true;
            }
            ('"' | '\'', _) => {
                quote = Some(c);
                out.push(c);
            }
            _ => out.push(c),
        }
    }
    out
}

/// Net `{`/`}` balance of a line, ignoring literals and comments.
pub fn brace_delta(line: &str) -> i64 {
    let code = strip_literals(&strip_comments(line));
    code.matches('{').count() as i64 - code.matches('}').count() as i64
}

fn strip_literals(code: &str) -> String {
    let mut out = String::with_capacity(code.len());
    let mut quote: Option<char> = None;
    let mut escaped = false;
    for c in code.chars() {
        match quote {
            Some(q) => {
                if escaped {
                    escaped = false;
                } else if c == '\\' {
                    escaped = true;
                } else if c == q {
                    quote = None;
                }
            }
            None if c == '"' || c == '\'' => quote = Some(c),
            None => out.push(c),
        }
    }
    out
}

fn is_label(code: &str) -> bool {
    code.strip_suffix(':').is_some_and(|name| {
        !name.is_empty()
            && name != "default"
            && name.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
            && !name.starts_with(|c: char| c.is_ascii_digit())
    })
}

/// The declared type of `T name;`, `T *name[4];`, or `T name = init;`: two
/// adjacent words before any initializer only occur in declarations.
fn declared_type(code: &str) -> Option<String> {
    const STATEMENT_KEYWORDS: &[&str] = &["return", "goto", "case", "else", "do", "sizeof"];
    let stmt = code.strip_suffix(';')?;
    let decl = stmt.split('=').next().unwrap_or(stmt).trim();
    let allowed =
        |c: char| c.is_ascii_alphanumeric() || matches!(c, '_' | ' ' | '*' | '[' | ']' | ':');
    if !decl.chars().all(allowed) {
        return None;
    }
    let (ty, name) = decl.rsplit_once(' ')?;
    if ty.trim().is_empty() || STATEMENT_KEYWORDS.contains(&ty.split_whitespace().next()?) {
        return None;
    }
    let stars = name.chars().take_while(|&c| c == '*').count();
    let mut ty = format!("{ty}{}", "*".repeat(stars));
    if name.contains('[') {
        ty.push_str("[]");
    }
    Some(normalize_type(&ty))
}

fn is_type_word(word: &str) -> bool {
    TYPE_KEYWORDS.contains(&word)
        || word.starts_with("__int")
        || word.starts_with("_BOOL")
        || matches!(
            word,
            "_BYTE" | "_WORD" | "_DWORD" | "_QWORD" | "_OWORD" | "_TBYTE" | "_UNKNOWN"
        )
        || word.starts_with("__m128")
        || word.starts_with("__m256")
        || word.ends_with("_t")
        || word.starts_with("std::")
}

fn declares_flag(line: &str) -> bool {
    let Some((_, comment)) = line.split_once("//") else {
        return false;
    };
    let comment = comment.trim().to_ascii_lowercase();
    FLAG_REGISTERS.iter().any(|f| comment == *f)
}

fn count_word(text: &str, word: &str) -> usize {
    let bytes = text.as_bytes();
    let is_ident = |b: u8| b.is_ascii_alphanumeric() || b == b'_';
    text.match_indices(word)
        .filter(|(pos, _)| {
            let end = pos + word.len();
            (*pos == 0 || !is_ident(bytes[pos - 1]))
                && (end >= bytes.len() || !is_ident(bytes[end]))
        })
        .count()
}

/// `{}` bodies, including ones whose braces sit on separate lines.
fn count_empty_blocks(text: &str) -> usize {
    let compact: String = strip_literals(&strip_comments(text))
        .chars()
        .filter(|c| !c.is_whitespace())
        .collect();
    compact.matches("{}").count()
}

/// `*(_QWORD *)(base + off)`-style accesses through a cast pointer.
fn count_raw_derefs(code: &str) -> usize {
    let compact: String = code.chars().filter(|c| !c.is_whitespace()).collect();
    compact
        .match_indices("*(")
        .filter(|(pos, _)| {
            let rest = &compact[pos + 2..];
            rest.find(")").is_some_and(|close| {
                let cast = &rest[..close];
                cast.ends_with('*') && is_type_word(cast.trim_end_matches('*'))
            })
        })
        .count()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_hexrays_and_unlace_signatures() {
        let hr = parse_signature("__int64 __fastcall compute(int a1, char *a2, ...)\n{").unwrap();
        assert_eq!(hr.return_type, "__int64");
        assert_eq!(hr.param_types, ["int", "char *"]);
        assert!(hr.is_vararg);

        let un = parse_signature("__int64 sub_10f0(void) /* // dropped 1 param(s) */ {").unwrap();
        assert!(un.param_types.is_empty());

        let named = parse_signature("char *f_rec_power.constprop.0(_QWORD a1) {").unwrap();
        assert_eq!(named.return_type, "char *");
        assert_eq!(named.param_types, ["_QWORD"]);
    }

    #[test]
    fn measures_flags_gotos_and_raw_derefs() {
        let text = "int main(void) {\n    char c12 = 1; // ZF\n    int v1; // eax\n    if (v1) {\n    }\n    \
                    *(_QWORD *)(buf_0 + 12) = v1;\n    c12 = __OFSUB__(v1, 1);\n    goto LABEL_5;\nLABEL_5:\n    return 0;\n}";
        let m = measure(text);
        assert_eq!(m.lvar_decls, 2);
        assert_eq!(m.decl_types.get("char"), Some(&1));
        assert_eq!(m.flag_vars, 1);
        assert_eq!(m.flag_helpers, 1);
        assert_eq!(m.empty_blocks, 1);
        assert_eq!(m.raw_derefs, 1);
        assert_eq!((m.gotos, m.labels), (1, 1));
    }

    #[test]
    fn brace_delta_ignores_literals_and_comments() {
        assert_eq!(brace_delta(r#"puts("{"); // }"#), 0);
        assert_eq!(brace_delta("if (a) {"), 1);
    }
}
