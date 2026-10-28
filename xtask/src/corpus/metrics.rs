//! Text-level quality metrics for one function of decompiled C.
//!
//! These read the printed output, not unlace internals, so they stay valid
//! while the pipeline behind the printer is redesigned. Lower is better for
//! every counter.

use std::collections::{BTreeMap, BTreeSet};
use std::ops::AddAssign;
use std::sync::OnceLock;

use regex::Regex;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct OutputMetrics {
    /// Variables carrying a condition flag: declared with a flag-register
    /// role comment (`// ZF`), assigned from a flag idiom (`__OFSUB__`), or
    /// packed into an NZCV word.
    pub flag_vars: usize,
    pub gotos: usize,
    /// `{}` bodies, including `else {\n}`.
    pub empty_blocks: usize,
    /// Assignments to locals or parameters that are never read anywhere in
    /// the function.
    pub dead_stores: usize,
    /// Declarations the printer marks `// temp`.
    pub leaked_temps: usize,
    /// Declarations the printer ties to a machine register (`// rax`, `// reg?`).
    pub register_carriers: usize,
    /// `*(T *)(...)` dereferences addressed off the stack or frame pointer
    /// (or a variable standing for one).
    pub raw_stack_accesses: usize,
    /// Non-blank, non-comment lines from signature to closing brace.
    pub lines: usize,
}

impl AddAssign for OutputMetrics {
    fn add_assign(&mut self, rhs: Self) {
        self.flag_vars += rhs.flag_vars;
        self.gotos += rhs.gotos;
        self.empty_blocks += rhs.empty_blocks;
        self.dead_stores += rhs.dead_stores;
        self.leaked_temps += rhs.leaked_temps;
        self.register_carriers += rhs.register_carriers;
        self.raw_stack_accesses += rhs.raw_stack_accesses;
        self.lines += rhs.lines;
    }
}

const FLAG_REGISTERS: &[&str] = &[
    "CF", "PF", "AF", "ZF", "SF", "TF", "DF", "OF", "NF", "VF", "NG", "ZR", "CY", "OV", "NZCV",
];
const STACK_REGISTERS: &[&str] = &["rsp", "rbp", "esp", "ebp", "sp", "fp", "x29", "x31", "wsp"];

fn regex(cell: &'static OnceLock<Regex>, pattern: &str) -> &'static Regex {
    cell.get_or_init(|| Regex::new(pattern).expect("metric regex compiles"))
}

/// `TYPE NAME[...] = ...;` / `TYPE *NAME;` at statement start.
fn decl_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(
        &RE,
        r"^\s*(?:(?:const|volatile|unsigned|signed|struct|union|enum)\s+)*([A-Za-z_]\w*)(?:\s*\*+\s*|\s+)+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(=|;)",
    )
}

fn flag_idiom_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"__(?:OF|CF|SF|PF|ZF)[A-Z]*__\s*\(|__SETP__\s*\(")
}

fn nzcv_member_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"\(_DWORD\)\(([A-Za-z_]\w*)\)\s*<<\s*0x1[cdef]\b")
}

fn goto_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"\bgoto\s+[A-Za-z_]\w*\s*;")
}

fn empty_block_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"\{\s*\}")
}

fn deref_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"\*\s*\(\s*[A-Za-z_][\w\s]*\*+\s*\)\s*\(")
}

fn ident_re() -> &'static Regex {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(&RE, r"[A-Za-z_]\w*")
}

const NOT_TYPES: &[&str] = &[
    "return", "goto", "if", "else", "while", "do", "for", "switch", "case", "break", "continue",
    "default", "sizeof",
];

/// One printed line split into code and its trailing `//` or `/* */` comment.
struct Line<'a> {
    code: String,
    comment: &'a str,
}

fn split_lines(body: &str) -> Vec<Line<'_>> {
    let mut in_block = false;
    body.lines()
        .map(|line| {
            let mut code = String::new();
            let mut comment = "";
            let bytes = line.as_bytes();
            let mut i = 0;
            let mut quote = None;
            while i < bytes.len() {
                let c = bytes[i];
                if in_block {
                    if line[i..].starts_with("*/") {
                        in_block = false;
                        i += 2;
                    } else {
                        i += 1;
                    }
                    continue;
                }
                if let Some(q) = quote {
                    code.push(c as char);
                    if c == b'\\' && i + 1 < bytes.len() {
                        code.push(bytes[i + 1] as char);
                        i += 2;
                        continue;
                    }
                    if c == q {
                        quote = None;
                    }
                    i += 1;
                    continue;
                }
                if line[i..].starts_with("//") {
                    comment = line[i + 2..].trim();
                    break;
                }
                if line[i..].starts_with("/*") {
                    in_block = true;
                    i += 2;
                    continue;
                }
                if c == b'"' || c == b'\'' {
                    quote = Some(c);
                }
                code.push(c as char);
                i += 1;
            }
            Line { code, comment }
        })
        .collect()
}

#[derive(Default)]
struct Variable<'a> {
    role: Option<&'a str>,
    reads: usize,
    writes: usize,
}

/// Metrics for one function: `body` runs from the signature line through the
/// closing brace.
pub fn measure(body: &str) -> OutputMetrics {
    let lines = split_lines(body);
    let mut metrics = OutputMetrics::default();
    let mut vars: BTreeMap<String, Variable<'_>> = BTreeMap::new();
    let mut flag_vars = BTreeSet::new();

    if let Some(signature) = lines.first() {
        let params = signature.code.split_once('(').map_or("", |(_, rest)| {
            rest.rsplit_once(')').map_or(rest, |(p, _)| p)
        });
        for param in params.split(',') {
            if let Some(name) = ident_re().find_iter(param).last()
                && param.trim() != "void"
            {
                vars.entry(name.as_str().to_string()).or_default();
            }
        }
    }

    for line in lines.iter().skip(1) {
        if let Some(caps) = decl_re().captures(&line.code)
            && !NOT_TYPES.contains(&&caps[1])
        {
            let var = vars.entry(caps[2].to_string()).or_default();
            if !line.comment.is_empty() {
                var.role = Some(line.comment);
            }
        }
    }

    let code: String = lines
        .iter()
        .skip(1)
        .map(|l| l.code.as_str())
        .collect::<Vec<_>>()
        .join("\n");

    for line in lines.iter().skip(1) {
        let decl = decl_re()
            .captures(&line.code)
            .filter(|caps| !NOT_TYPES.contains(&&caps[1]));
        let decl_name = decl
            .as_ref()
            .map(|caps| caps.get(2).expect("group 2").start());
        for m in ident_re().find_iter(&line.code) {
            let Some(var) = vars.get_mut(m.as_str()) else {
                continue;
            };
            if in_string(&line.code, m.start()) {
                continue;
            }
            let after = line.code[m.end()..].trim_start();
            let before = line.code[..m.start()].trim_end();
            let assigned = after.starts_with('=') && !after.starts_with("==");
            if Some(m.start()) == decl_name {
                if assigned {
                    var.writes += 1;
                }
                continue;
            }
            let member_or_deref = before.ends_with('.')
                || before.ends_with("->")
                || before.ends_with('*')
                || before.ends_with('&');
            if assigned && !member_or_deref {
                var.writes += 1;
            } else {
                var.reads += 1;
            }
        }
        if let Some(caps) = assignment_target(&line.code)
            && flag_idiom_re().is_match(&line.code)
        {
            flag_vars.insert(caps.to_string());
        }
        for caps in nzcv_member_re().captures_iter(&line.code) {
            flag_vars.insert(caps[1].to_string());
            if let Some(target) = assignment_target(&line.code) {
                flag_vars.insert(target.to_string());
            }
        }
    }

    let stack_vars: BTreeSet<&str> = vars
        .iter()
        .filter(|(_, v)| v.role.is_some_and(|r| STACK_REGISTERS.contains(&r)))
        .map(|(name, _)| name.as_str())
        .collect();

    for (name, var) in &vars {
        match var.role {
            Some(role) if FLAG_REGISTERS.contains(&role) => {
                flag_vars.insert(name.clone());
            }
            Some("temp") => metrics.leaked_temps += 1,
            Some(role) if is_register_name(role) => metrics.register_carriers += 1,
            _ => {}
        }
        if var.reads == 0 {
            metrics.dead_stores += var.writes;
        }
    }
    metrics.flag_vars = flag_vars
        .iter()
        .filter(|name| vars.contains_key(*name))
        .count();
    metrics.gotos = goto_re().find_iter(&code).count();
    metrics.empty_blocks = empty_block_re().find_iter(&code).count();
    metrics.raw_stack_accesses = deref_re()
        .find_iter(&code)
        .filter(|m| {
            let operand = balanced_parens(&code[m.end() - 1..]);
            ident_re().find_iter(operand).any(|id| {
                STACK_REGISTERS.contains(&id.as_str()) || stack_vars.contains(id.as_str())
            })
        })
        .count();
    metrics.lines = lines.iter().filter(|l| !l.code.trim().is_empty()).count();
    metrics
}

/// `NAME` of a statement `NAME = ...` or `TYPE NAME = ...`.
fn assignment_target(code: &str) -> Option<&str> {
    let (lhs, rhs) = code.split_once('=')?;
    if rhs.starts_with('=')
        || lhs.ends_with(['!', '<', '>', '+', '-', '*', '/', '&', '|', '^', '%'])
    {
        return None;
    }
    let name = ident_re().find_iter(lhs).last()?;
    lhs[name.end()..].trim().is_empty().then_some(name.as_str())
}

fn is_register_name(role: &str) -> bool {
    static RE: OnceLock<Regex> = OnceLock::new();
    regex(
        &RE,
        r"^(?:reg\?|[re]?[abcd]x|[abcd][lh]|[re]?[sd]il?|[re]?[sb]pl?|r(?:[89]|1[0-5])[dwb]?|[xwqdsbhv]\d+|xmm\d+|ymm\d+|sp|fp|lr|wsp|xzr|wzr)$",
    )
    .is_match(role)
}

fn in_string(code: &str, pos: usize) -> bool {
    code[..pos].bytes().filter(|&b| b == b'"').count() % 2 == 1
}

/// The text inside the parenthesised group starting at `text[0] == '('`.
fn balanced_parens(text: &str) -> &str {
    let mut depth = 0usize;
    for (i, c) in text.char_indices() {
        match c {
            '(' => depth += 1,
            ')' => {
                depth -= 1;
                if depth == 0 {
                    return &text[1..i];
                }
            }
            _ => {}
        }
    }
    text
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn counts_x86_flag_carriers_temps_and_stack_derefs() {
        let body = r"int f(__int64 a1) {
    __int64 v16; // temp
    __int64 c4; // rsp
    __int64 c3 = a1; // rbx
    _BOOL c12 = !c3; // ZF
    char c10 = 0; // CF
    *(_BYTE *)(c4 + 8) = 0;
    *(_QWORD *)(rbp - 0x10) = v16;
    if (c12) {
    } else {
        goto label_1;
    }
label_1:;
    return c3;
}
";
        let m = measure(body);
        assert_eq!(m.flag_vars, 2);
        assert_eq!(m.leaked_temps, 1);
        assert_eq!(m.register_carriers, 2);
        assert_eq!(m.raw_stack_accesses, 2);
        assert_eq!(m.gotos, 1);
        assert_eq!(m.empty_blocks, 1);
        assert_eq!(m.dead_stores, 1, "c10 is written and never read");
        assert_eq!(m.lines, 15);
    }

    #[test]
    fn counts_aarch64_nzcv_pack_and_overflow_idioms() {
        let body = r"void g(void * a1) {
    __int64 c2 = 5; // r9
    _BOOL c8 = c2 == 3LL; // reg?
    char v20 = LOBYTE(c2 < 2LL); // temp
    _BOOL c9 = (_QWORD)2LL <= (_QWORD)c2; // reg?
    _BOOL c10 = __OFSUB__(c2, 2LL); // reg?
    int c11 = ((_DWORD)(v20) << 0x1f) | ((_DWORD)(c8) << 0x1e) | ((_DWORD)(c9) << 0x1d) | ((_DWORD)(c10) << 0x1c); // reg?
}
";
        let m = measure(body);
        assert_eq!(m.flag_vars, 5);
        assert_eq!(m.dead_stores, 1, "only the NZCV word is never read");
    }

    #[test]
    fn compound_assignments_and_stores_through_pointers_are_reads() {
        let body = r"int h(struct s * a1) {
    int n = 0;
    n += 2;
    a1->x = n;
    *a1 = 0;
    return 0;
}
";
        assert_eq!(measure(body).dead_stores, 0);
    }
}
