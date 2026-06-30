//! `xtask address-diff` — address-mapped structural output comparison (ROADMAP
//! Phase J.2).
//!
//! Aligns per-function decompiler output to an IDA reference by **address**
//! (the corpus stores one `sub_<addr>.c` file per function), then scores each
//! aligned pair on goto density and line count and buckets it
//! **better / equivalent / worse**. This is the address-mapped half of the
//! parity story that `compare-golden` (whole-corpus aggregate style metrics)
//! does not provide.
//!
//! Usage: `cargo xtask address-diff <reference-dir> <candidate-dir>`. Both
//! directories hold `sub_<hexaddr>.c` files; functions present in only one side
//! are reported as unmatched. The scoring core ([`compare_function`]) is a pure
//! function and unit-tested.

use std::collections::BTreeMap;
use std::path::Path;

/// Structural metrics extracted from one function's C text.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct FuncMetrics {
    pub lines: usize,
    pub gotos: usize,
    pub labels: usize,
}

impl FuncMetrics {
    /// Extract metrics from a function's C source.
    pub fn extract(source: &str) -> Self {
        let mut m = FuncMetrics::default();
        for line in source.lines() {
            let t = line.trim();
            if t.is_empty() {
                continue;
            }
            m.lines += 1;
            m.gotos += count_word(t, "goto");
            if is_label(t) {
                m.labels += 1;
            }
        }
        m
    }
}

/// How a candidate function compares to the reference.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Verdict {
    Better,
    Equivalent,
    Worse,
}

/// Compare a candidate function to the reference. Fewer gotos is the primary
/// quality axis (the roadmap's headline goal); on a goto tie, a materially
/// shorter rendering is "better" and a materially longer one "worse"; within
/// 10% line count it is "equivalent".
pub fn compare_function(reference: &FuncMetrics, candidate: &FuncMetrics) -> Verdict {
    if candidate.gotos < reference.gotos {
        return Verdict::Better;
    }
    if candidate.gotos > reference.gotos {
        return Verdict::Worse;
    }
    // Goto tie → compare line counts with a 10% dead-band.
    let r = reference.lines as f64;
    let c = candidate.lines as f64;
    if r == 0.0 {
        return Verdict::Equivalent;
    }
    let ratio = c / r;
    if ratio < 0.9 {
        Verdict::Better
    } else if ratio > 1.1 {
        Verdict::Worse
    } else {
        Verdict::Equivalent
    }
}

pub fn run(args: &[String]) -> i32 {
    let (Some(ref_dir), Some(cand_dir)) = (args.first(), args.get(1)) else {
        eprintln!("usage: xtask address-diff <reference-dir> <candidate-dir>");
        return 2;
    };
    let reference = load_functions(Path::new(ref_dir));
    let candidate = load_functions(Path::new(cand_dir));

    let mut better = 0usize;
    let mut equiv = 0usize;
    let mut worse = 0usize;
    let mut only_ref = 0usize;
    let mut only_cand = 0usize;

    println!("# address-diff");
    println!();
    println!("| function | ref gotos | cand gotos | ref lines | cand lines | verdict |");
    println!("|----------|----------:|-----------:|----------:|-----------:|---------|");

    for (name, rm) in &reference {
        match candidate.get(name) {
            Some(cm) => {
                let v = compare_function(rm, cm);
                match v {
                    Verdict::Better => better += 1,
                    Verdict::Equivalent => equiv += 1,
                    Verdict::Worse => worse += 1,
                }
                println!(
                    "| `{name}` | {} | {} | {} | {} | {:?} |",
                    rm.gotos, cm.gotos, rm.lines, cm.lines, v
                );
            }
            None => only_ref += 1,
        }
    }
    only_cand += candidate
        .keys()
        .filter(|k| !reference.contains_key(*k))
        .count();

    println!();
    println!("better={better} equivalent={equiv} worse={worse}");
    println!("unmatched: reference-only={only_ref} candidate-only={only_cand}");
    0
}

/// Load every `sub_<addr>.c` file from `dir`, keyed by file stem (the function
/// name / address).
fn load_functions(dir: &Path) -> BTreeMap<String, FuncMetrics> {
    let mut out = BTreeMap::new();
    let Ok(entries) = std::fs::read_dir(dir) else {
        eprintln!("address-diff: cannot read {}", dir.display());
        return out;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.extension().and_then(|e| e.to_str()) != Some("c") {
            continue;
        }
        let Some(stem) = path.file_stem().and_then(|s| s.to_str()) else {
            continue;
        };
        if let Ok(text) = std::fs::read_to_string(&path) {
            out.insert(stem.to_string(), FuncMetrics::extract(&text));
        }
    }
    out
}

fn count_word(line: &str, word: &str) -> usize {
    let mut n = 0;
    let bytes = line.as_bytes();
    let mut start = 0;
    while let Some(pos) = line[start..].find(word) {
        let abs = start + pos;
        let before_ok = abs == 0 || !is_ident(bytes[abs - 1]);
        let after = abs + word.len();
        let after_ok = after >= bytes.len() || !is_ident(bytes[after]);
        if before_ok && after_ok {
            n += 1;
        }
        start = abs + word.len();
    }
    n
}

fn is_ident(b: u8) -> bool {
    b.is_ascii_alphanumeric() || b == b'_'
}

fn is_label(t: &str) -> bool {
    if let Some(name) = t.strip_suffix(':') {
        !name.is_empty()
            && name.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
            && name.chars().next().is_some_and(|c| !c.is_ascii_digit())
    } else {
        false
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn extracts_gotos_labels_lines() {
        let src = "int f()\n{\n  goto end;\nend:\n  return 0;\n}\n";
        let m = FuncMetrics::extract(src);
        assert_eq!(m.gotos, 1);
        assert_eq!(m.labels, 1);
        assert_eq!(m.lines, 6);
    }

    #[test]
    fn fewer_gotos_is_better() {
        let r = FuncMetrics {
            lines: 20,
            gotos: 3,
            labels: 3,
        };
        let c = FuncMetrics {
            lines: 20,
            gotos: 1,
            labels: 1,
        };
        assert_eq!(compare_function(&r, &c), Verdict::Better);
        assert_eq!(compare_function(&c, &r), Verdict::Worse);
    }

    #[test]
    fn goto_tie_within_band_is_equivalent() {
        let r = FuncMetrics {
            lines: 100,
            gotos: 0,
            labels: 0,
        };
        let c = FuncMetrics {
            lines: 105,
            gotos: 0,
            labels: 0,
        };
        assert_eq!(compare_function(&r, &c), Verdict::Equivalent);
        let longer = FuncMetrics {
            lines: 130,
            gotos: 0,
            labels: 0,
        };
        assert_eq!(compare_function(&r, &longer), Verdict::Worse);
    }
}
