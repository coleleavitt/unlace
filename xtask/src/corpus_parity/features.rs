//! The pseudo-C feature catalogue counted on both sides of a corpus
//! comparison: IDA Hex-Rays reference text and unlace output are measured
//! with the same regular expressions over comment- and string-stripped code.

use std::sync::OnceLock;

use regex::Regex;

/// Which text a feature is counted on.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Haystack {
    /// Comments removed and string/character literals emptied.
    Code,
    /// [`Haystack::Code`] after the first `{`: the body without the prototype.
    Body,
    /// The text as printed; for declaration comments such as `// BYREF`.
    Raw,
}

/// One countable output feature.
pub struct Feature {
    pub label: &'static str,
    /// Backlog area the feature measures (`control-flow`, `expression`, ...).
    pub group: &'static str,
    /// Regex; `{T}` stands for a scalar type name ([`SCALAR_TYPE`]).
    pattern: &'static str,
    haystack: Haystack,
}

/// Pseudo-C features in report order. Labels are stable: reports and the
/// gate summary key on them.
pub const FEATURES: &[Feature] = &[
    code("switch", "control-flow", r"\bswitch\s*\("),
    code("case", "control-flow", r"\bcase\b"),
    code("break", "control-flow", r"\bbreak\s*;"),
    code("continue", "control-flow", r"\bcontinue\s*;"),
    code("if", "control-flow", r"\bif\s*\("),
    code("else", "control-flow", r"\belse\b"),
    code("for", "control-flow", r"\bfor\s*\("),
    code("while", "control-flow", r"\bwhile\s*\("),
    code("do-while", "control-flow", r"\bdo\s*\{"),
    code("goto", "control-flow", r"\bgoto\b"),
    code("label", "control-flow", r"(?m)^\s*[A-Za-z_]\w*:\s*;?\s*$"),
    code("return", "control-flow", r"\breturn\b"),
    code("ternary", "expression", r"\?"),
    code("short-circuit", "expression", r"&&|\|\|"),
    code("field access ->", "expression", r"->"),
    code("field access .", "expression", r"[A-Za-z_\)\]]\.[A-Za-z_]"),
    code("array index", "expression", r"[\w\)\]]\["),
    code("cast", "expression", r"\({T}\s*\**\s*\)"),
    code("raw deref *(T *)", "expression", r"\*\(\s*{T}\s*\*\s*\)"),
    code(
        "compound assign",
        "expression",
        r"(?:\+|-|\*|/|%|&|\||\^|<<|>>)=[^=]",
    ),
    code("inc/dec", "expression", r"\+\+|--"),
    code(
        "byte/word macro",
        "expression",
        r"\bS?(?:LOBYTE|LOWORD|LODWORD|HIBYTE|HIWORD|HIDWORD|BYTE[1-6]|WORD[1-3]|DWORD[12]|COERCE_\w+)\s*\(",
    ),
    code(
        "SIMD",
        "expression",
        r"\b(?:__m(?:64|128|256|512)[di]?|_mm\d*_\w+)\b",
    ),
    code("__readfsqword", "expression", r"\b__readfsqword\b"),
    raw("string literal", "expression", r#""(?:[^"\\]|\\.)*""#),
    body("call (named)", "symbol", NAMED_CALL),
    body("call (sub_)", "symbol", r"\bsub_[0-9A-Fa-f]+\s*\("),
    code(
        "global (qword_/dword_)",
        "symbol",
        r"\b(?:byte|word|dword|qword|xmmword|off|unk)_[0-9A-Fa-f]+\b",
    ),
    code("__fastcall", "signature", r"\b__fastcall\b"),
    code("__usercall", "signature", r"\b__usercall\b"),
    code("__noreturn", "signature", r"\b__noreturn\b"),
    code("aN param", "declaration", r"\ba\d+\b"),
    code("vN local", "declaration", r"\bv\d+\b"),
    code("result", "declaration", r"\bresult\b"),
    raw("BYREF", "declaration", r"\bBYREF\b"),
    raw("leaked temp", "declaration", r"(?m);\s*//\s*temp\s*$"),
    code(
        "stack carrier (v_N/buf_N)",
        "declaration",
        r"\b(?:v|buf)_\d+\b",
    ),
    code("_QWORD", "type", r"\b_QWORD\b"),
    code("_DWORD", "type", r"\b_DWORD\b"),
    code("_BYTE", "type", r"\b_BYTE\b"),
    code("__int64", "type", r"\b__int64\b"),
    code("function pointer", "type", r"\(\s*\*\s*\w*\s*\)\s*\("),
];

/// Scalar type spelling, with its qualifiers, as both printers write it.
const SCALAR_TYPE: &str = r"(?:unsigned |signed |const |volatile )*(?:__int(?:8|16|32|64|128)|int|char|short|long(?: long)?|float|double|bool|_BOOL\d?|_BYTE|_WORD|_DWORD|_QWORD|_OWORD|__m(?:64|128|256|512)[di]?|void)";

/// Any identifier call; [`is_named_call`] drops keywords, `sub_` names,
/// helpers, intrinsics, macros, and calls through numbered variables.
const NAMED_CALL: &str = r"\b[A-Za-z_]\w*\s*\(";

const fn code(label: &'static str, group: &'static str, pattern: &'static str) -> Feature {
    Feature {
        label,
        group,
        pattern,
        haystack: Haystack::Code,
    }
}

const fn body(label: &'static str, group: &'static str, pattern: &'static str) -> Feature {
    Feature {
        label,
        group,
        pattern,
        haystack: Haystack::Body,
    }
}

const fn raw(label: &'static str, group: &'static str, pattern: &'static str) -> Feature {
    Feature {
        label,
        group,
        pattern,
        haystack: Haystack::Raw,
    }
}

fn regexes() -> &'static [Regex] {
    static REGEXES: OnceLock<Vec<Regex>> = OnceLock::new();
    REGEXES.get_or_init(|| {
        FEATURES
            .iter()
            .map(|feature| {
                Regex::new(&feature.pattern.replace("{T}", SCALAR_TYPE))
                    .expect("feature regex compiles")
            })
            .collect()
    })
}

fn is_named_call(matched: &str) -> bool {
    const KEYWORDS: &[&str] = &[
        "if", "for", "while", "switch", "return", "sizeof", "defined",
    ];
    let name = matched.trim_end_matches('(').trim_end();
    let numbered_var = name.strip_prefix(['a', 'v']).is_some_and(|rest| {
        rest.trim_start_matches('_')
            .bytes()
            .all(|b| b.is_ascii_digit())
    });
    let macro_like = name
        .bytes()
        .all(|b| b.is_ascii_uppercase() || b.is_ascii_digit() || b == b'_');
    !(KEYWORDS.contains(&name)
        || name.starts_with("sub_")
        || name.starts_with("__")
        || name.starts_with("_mm")
        || numbered_var
        || macro_like)
}

/// Per-feature counts aligned with [`FEATURES`].
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize)]
pub struct FeatureCounts(pub Vec<usize>);

impl FeatureCounts {
    pub fn zero() -> Self {
        Self(vec![0; FEATURES.len()])
    }

    pub fn add(&mut self, other: &Self) {
        for (sum, n) in self.0.iter_mut().zip(&other.0) {
            *sum += n;
        }
    }

    pub fn get(&self, label: &str) -> usize {
        FEATURES
            .iter()
            .position(|feature| feature.label == label)
            .map_or(0, |i| self.0[i])
    }
}

/// Count every feature in `text`.
pub fn count(text: &str) -> FeatureCounts {
    let code = strip_code(text);
    let body = code.find('{').map_or("", |open| &code[open..]);
    let counts = FEATURES
        .iter()
        .zip(regexes())
        .map(|(feature, regex)| {
            let haystack = match feature.haystack {
                Haystack::Code => code.as_str(),
                Haystack::Body => body,
                Haystack::Raw => text,
            };
            let matches = regex.find_iter(haystack);
            if feature.pattern == NAMED_CALL {
                matches.filter(|m| is_named_call(m.as_str())).count()
            } else {
                matches.count()
            }
        })
        .collect();
    FeatureCounts(counts)
}

/// Remove comments and empty string and character literals, so operators
/// inside them are not counted as code.
pub fn strip_code(text: &str) -> String {
    let stripped = crate::oracle_diff::pseudo_c::strip_comments(text);
    let mut out = String::with_capacity(stripped.len());
    let mut chars = stripped.chars();
    let mut prev = ' ';
    while let Some(c) = chars.next() {
        out.push(c);
        // A `'` after an identifier is a demangled-name quote, not a literal.
        let literal = c == '"' || (c == '\'' && !(prev.is_ascii_alphanumeric() || prev == '_'));
        prev = c;
        if literal {
            let mut escaped = false;
            for n in chars.by_ref() {
                if escaped {
                    escaped = false;
                } else if n == '\\' {
                    escaped = true;
                } else if n == c {
                    break;
                }
            }
            out.push(c);
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn counts_control_flow_and_expressions() {
        let text = "int __fastcall f(int a1)\n{\n  int v1; // eax\n  _QWORD v2; // temp\n\
                    switch ( a1 )\n  {\n    case 1:\n      break;\n  }\n  do\n  {\n    v1 += 2;\n  }\n  \
                    while ( v1 && a1 );\n  if ( a1 )\n    goto LABEL_3;\nLABEL_3:\n  \
                    *(_QWORD *)(a1 + 8) = qfree(\"x?y\");\n  return v1 ? 1 : 0;\n}\n";
        let counts = count(text);
        assert_eq!(counts.get("switch"), 1);
        assert_eq!(counts.get("case"), 1);
        assert_eq!(counts.get("break"), 1);
        assert_eq!(counts.get("do-while"), 1);
        assert_eq!(counts.get("while"), 1);
        assert_eq!(counts.get("compound assign"), 1);
        assert_eq!(counts.get("short-circuit"), 1);
        assert_eq!(counts.get("goto"), 1);
        assert_eq!(counts.get("label"), 1);
        assert_eq!(
            counts.get("ternary"),
            1,
            "the `?` inside the string is not an operator"
        );
        assert_eq!(counts.get("raw deref *(T *)"), 1);
        assert_eq!(counts.get("cast"), 1);
        assert_eq!(counts.get("call (named)"), 1);
        assert_eq!(counts.get("string literal"), 1);
        assert_eq!(counts.get("leaked temp"), 1);
        assert_eq!(counts.get("__fastcall"), 1);
    }

    #[test]
    fn named_calls_skip_helpers_macros_and_sub_names() {
        assert!(is_named_call("qfree("));
        assert!(is_named_call("get_tinfo_property ("));
        assert!(!is_named_call("sub_67C50("));
        assert!(!is_named_call("LOBYTE("));
        assert!(!is_named_call("__readfsqword("));
        assert!(!is_named_call("_mm_unpacklo_epi64("));
        assert!(!is_named_call("v11("));
        assert!(!is_named_call("if ("));
    }

    #[test]
    fn strip_code_empties_literals() {
        assert_eq!(strip_code("f(\"a\\\"b\", 'c') // x"), "f(\"\", '') ");
        assert_eq!(strip_code("&`typeinfo for'x, 'y'"), "&`typeinfo for'x, ''");
    }
}
