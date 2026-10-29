//! Per-function similarity between a reference and a candidate rendering of
//! the same function: a line-sequence match over normalized code lines, and
//! a structural match over the C syntax tree.

use std::sync::OnceLock;

use regex::Regex;

use super::features::strip_code;

/// Longest-common-subsequence ratio `2 * lcs / (a + b)` in `0.0..=1.0`;
/// `1.0` when both sequences are empty.
pub fn lcs_ratio<T: PartialEq>(a: &[T], b: &[T]) -> f64 {
    if a.is_empty() && b.is_empty() {
        return 1.0;
    }
    let (short, long) = if a.len() <= b.len() { (a, b) } else { (b, a) };
    let mut prev = vec![0usize; short.len() + 1];
    let mut cur = vec![0usize; short.len() + 1];
    for x in long {
        for (j, y) in short.iter().enumerate() {
            cur[j + 1] = if x == y {
                prev[j] + 1
            } else {
                prev[j + 1].max(cur[j])
            };
        }
        std::mem::swap(&mut prev, &mut cur);
    }
    let lcs = prev[short.len()];
    2.0 * lcs as f64 / (a.len() + b.len()) as f64
}

/// Code lines with the spellings that legitimately differ between printers
/// folded away: comments, blank lines, brace placement, numbered variable
/// and `sub_` names, label numbers, integer radix and suffixes, and spacing.
pub fn normalized_lines(text: &str) -> Vec<String> {
    static RULES: OnceLock<(Regex, Vec<(Regex, &'static str)>)> = OnceLock::new();
    let (hex, rules) = RULES.get_or_init(|| {
        let hex =
            Regex::new(r"\b0[xX]([0-9A-Fa-f]+)(?:u|U)?(?:i64|LL|L|ll|l)?\b").expect("hex rule");
        let rules = [
            (r"\b(?:v|buf)_?\d+\b", "V"),
            (r"\ba\d+\b", "A"),
            (r"\bsub_[0-9A-Fa-f]+\b", "SUB"),
            (
                r"\b(?:byte|word|dword|qword|xmmword|off|unk)_[0-9A-Fa-f]+\b",
                "GLOBAL",
            ),
            (r"\b(?:LABEL|label)_\d+\b", "LABEL"),
            (r"\b(\d+)(?:u|U)?(?:i64|LL|L|ll|l)?\b", "$1"),
            (r"\s+", " "),
            (r" ?([()\[\]{};,]) ?", "$1"),
            (r"^(LABEL):;$", "$1:"),
        ]
        .into_iter()
        .map(|(pattern, replacement)| (Regex::new(pattern).expect("rule compiles"), replacement))
        .collect();
        (hex, rules)
    });
    // Braces on their own lines, as IDA prints them.
    let code = strip_code(text).replace('{', "\n{\n").replace('}', "\n}\n");
    code.lines()
        .filter_map(|line| {
            let line = line.trim();
            if line.is_empty() {
                return None;
            }
            let mut line = hex
                .replace_all(line, |caps: &regex::Captures<'_>| {
                    u128::from_str_radix(&caps[1], 16)
                        .map_or_else(|_| caps[0].to_string(), |n| n.to_string())
                })
                .into_owned();
            for (regex, replacement) in rules {
                line = regex.replace_all(&line, *replacement).into_owned();
            }
            Some(line.to_ascii_lowercase())
        })
        .collect()
}

/// Line-sequence similarity of two renderings, see [`normalized_lines`].
pub fn line_similarity(reference: &str, candidate: &str) -> f64 {
    lcs_ratio(&normalized_lines(reference), &normalized_lines(candidate))
}

/// Syntax-tree similarity of two renderings: the pre-order node-kind
/// sequence match of [`unlace_test_harness::ast_kinds`], or `None` when
/// either side does not parse as C at all.
pub fn ast_similarity(reference: &str, candidate: &str) -> Option<f64> {
    let a = unlace_test_harness::ast_kinds(reference)?;
    let b = unlace_test_harness::ast_kinds(candidate)?;
    Some(lcs_ratio(&a, &b))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn lcs_ratio_bounds() {
        assert_eq!(lcs_ratio::<u8>(&[], &[]), 1.0);
        assert_eq!(lcs_ratio(&[1, 2, 3], &[1, 2, 3]), 1.0);
        assert_eq!(lcs_ratio(&[1, 2, 3], &[4, 5]), 0.0);
        assert!((lcs_ratio(&[1, 2, 3, 4], &[1, 3]) - 2.0 / 3.0).abs() < 1e-9);
    }

    #[test]
    fn normalization_folds_printer_spellings() {
        let ida = "  v5 = *(_QWORD *)(a1 + 24); // rax\n  if ( v5 )\n  {\n    goto LABEL_4;\n  }\n  else\n  {\nLABEL_4:\n  }";
        let unlace = "    v_24 = *(_QWORD *)(a1 + 0x18LL);\n    if (v_24) {\n        goto label_4;\n    } else {\n    label_4:;\n    }";
        assert_eq!(normalized_lines(ida), normalized_lines(unlace));
        assert_eq!(line_similarity(ida, unlace), 1.0);
    }

    #[test]
    fn ast_similarity_ignores_names_and_sees_structure() {
        let a = "int f(int x) { if (x) return 1; return 0; }";
        let b = "int g(int y) { if (y) return 2; return 3; }";
        let c = "int g(int y) { while (y) y--; return 3; }";
        assert_eq!(ast_similarity(a, b), Some(1.0));
        assert!(ast_similarity(a, c).unwrap() < 1.0);
    }
}
