//! `cargo xtask compare-corpus` — IDA-vs-Unlace pattern coverage report.
//!
//! Walks `tests/golden/x86_64/` (IDA Hex-Rays reference output) and counts the
//! occurrences of a fixed list of stylistic / structural patterns. Then walks
//! `fixtures/*.elf`, decompiles each via the locally built `unlace` binary,
//! and counts the same patterns in the resulting C output.
//!
//! Emits a markdown table to stdout and to `target/corpus-compare.md`.
//! Columns: pattern, IDA aggregate count, Unlace aggregate count, coverage %
//! (Unlace/IDA, capped at 100).
//!
//! This is a reporting / audit tool — it always exits 0 unless the golden
//! corpus is missing.

use std::fmt::Write as _;
use std::path::{Path, PathBuf};
use std::process::Command;

/// How a pattern's needle should be matched against source text.
#[derive(Clone, Copy)]
enum PatternKind {
    /// Plain substring match.
    Substring,
    /// Whole-word identifier match (alphanumeric/`_` boundaries on both sides).
    Word,
    /// Identifier prefix: `<needle><one-or-more-digits>` as a whole word
    /// (e.g. needle="a" matches `a1`, `a23`, but not `abc`).
    IdentPrefixDigits,
    /// `switch` keyword followed by optional whitespace and `(`.
    SwitchParen,
}

struct PatternSpec {
    label: &'static str,
    needle: &'static str,
    kind: PatternKind,
}

const PATTERNS: &[PatternSpec] = &[
    PatternSpec {
        label: "__fastcall",
        needle: "__fastcall",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "__usercall",
        needle: "__usercall",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "__noreturn",
        needle: "__noreturn",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "_QWORD",
        needle: "_QWORD",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "_DWORD",
        needle: "_DWORD",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "_WORD",
        needle: "_WORD",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "_BYTE",
        needle: "_BYTE",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "__int64",
        needle: "__int64",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "aN params (a1..)",
        needle: "a",
        kind: PatternKind::IdentPrefixDigits,
    },
    PatternSpec {
        label: "vN locals (v1..)",
        needle: "v",
        kind: PatternKind::IdentPrefixDigits,
    },
    PatternSpec {
        label: "result",
        needle: "result",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "LOBYTE",
        needle: "LOBYTE",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "HIDWORD",
        needle: "HIDWORD",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "HIWORD",
        needle: "HIWORD",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "LOWORD",
        needle: "LOWORD",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "__readfsqword",
        needle: "__readfsqword",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "__readgsqword",
        needle: "__readgsqword",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "goto LABEL_",
        needle: "goto LABEL_",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "switch (",
        needle: "switch",
        kind: PatternKind::SwitchParen,
    },
    PatternSpec {
        label: "case",
        needle: "case",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "if (",
        needle: "if (",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "else",
        needle: "else",
        kind: PatternKind::Word,
    },
    PatternSpec {
        label: "for (",
        needle: "for (",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "while (",
        needle: "while (",
        kind: PatternKind::Substring,
    },
    PatternSpec {
        label: "do {",
        needle: "do {",
        kind: PatternKind::Substring,
    },
];

fn count_pattern(text: &str, spec: &PatternSpec) -> usize {
    match spec.kind {
        PatternKind::Substring => text.matches(spec.needle).count(),
        PatternKind::Word => count_word(text, spec.needle),
        PatternKind::IdentPrefixDigits => count_ident_prefix_digits(text, spec.needle),
        PatternKind::SwitchParen => count_switch_paren(text),
    }
}

fn is_ident_char(b: u8) -> bool {
    b.is_ascii_alphanumeric() || b == b'_'
}

fn count_word(text: &str, word: &str) -> usize {
    let bytes = text.as_bytes();
    let wlen = word.len();
    if wlen == 0 || bytes.len() < wlen {
        return 0;
    }
    let mut count = 0;
    let mut i = 0;
    while i + wlen <= bytes.len() {
        if let Some(pos) = text[i..].find(word) {
            let abs = i + pos;
            let before_ok = abs == 0 || !is_ident_char(bytes[abs - 1]);
            let end = abs + wlen;
            let after_ok = end >= bytes.len() || !is_ident_char(bytes[end]);
            if before_ok && after_ok {
                count += 1;
            }
            i = abs + wlen;
        } else {
            break;
        }
    }
    count
}

fn count_ident_prefix_digits(text: &str, prefix: &str) -> usize {
    let bytes = text.as_bytes();
    let plen = prefix.len();
    if plen == 0 || bytes.len() < plen + 1 {
        return 0;
    }
    let mut count = 0;
    let mut i = 0;
    while i + plen < bytes.len() {
        if let Some(pos) = text[i..].find(prefix) {
            let abs = i + pos;
            let before_ok = abs == 0 || !is_ident_char(bytes[abs - 1]);
            let mut j = abs + plen;
            let digit_start = j;
            while j < bytes.len() && bytes[j].is_ascii_digit() {
                j += 1;
            }
            let has_digits = j > digit_start;
            let after_ok = j >= bytes.len() || !is_ident_char(bytes[j]);
            if before_ok && has_digits && after_ok {
                count += 1;
            }
            i = abs + plen;
        } else {
            break;
        }
    }
    count
}

fn count_switch_paren(text: &str) -> usize {
    let bytes = text.as_bytes();
    let kw = "switch";
    let klen = kw.len();
    let mut count = 0;
    let mut i = 0;
    while i + klen <= bytes.len() {
        if let Some(pos) = text[i..].find(kw) {
            let abs = i + pos;
            let before_ok = abs == 0 || !is_ident_char(bytes[abs - 1]);
            let after = abs + klen;
            let mut j = after;
            // skip whitespace
            while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                j += 1;
            }
            let has_paren = j < bytes.len() && bytes[j] == b'(';
            let after_kw_ok = after >= bytes.len() || !is_ident_char(bytes[after]);
            if before_ok && after_kw_ok && has_paren {
                count += 1;
            }
            i = abs + klen;
        } else {
            break;
        }
    }
    count
}

fn collect_golden_files(golden_dir: &Path) -> Vec<PathBuf> {
    let mut files: Vec<PathBuf> = match std::fs::read_dir(golden_dir) {
        Ok(rd) => rd
            .filter_map(|e| e.ok())
            .map(|e| e.path())
            .filter(|p| p.extension().and_then(|x| x.to_str()) == Some("c"))
            .collect(),
        Err(_) => return Vec::new(),
    };
    files.sort();
    files
}

fn collect_fixture_elfs(fixtures_dir: &Path) -> Vec<PathBuf> {
    // Walk only x86_64-style ELFs. Restrict to a known list to keep the
    // signal high — same set used by compare-golden.
    const X86_64_FIXTURES: &[&str] = &[
        "branches",
        "calls",
        "cpp_exceptions",
        "cpp_rtti",
        "cpp_vtable",
        "debug_calls",
        "debug_hello",
        "debug_structs",
        "debug_templates",
        "empty",
        "hello_world",
        "loops",
        "medium",
        "stripped",
        "switch_table",
        "x87_math",
    ];
    let mut out: Vec<PathBuf> = Vec::new();
    for name in X86_64_FIXTURES {
        let p = fixtures_dir.join(format!("{name}.elf"));
        if p.exists() {
            out.push(p);
        }
    }
    out
}

fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| root.join("target"));
    let release = target_dir.join("release").join("unlace");
    if release.exists() {
        return Some(release);
    }
    let debug = target_dir.join("debug").join("unlace");
    if debug.exists() {
        return Some(debug);
    }
    None
}

fn decompile_elf(unlace_bin: &Path, elf_path: &Path) -> Result<String, String> {
    let output = Command::new(unlace_bin)
        .args(["decompile", "--emit", "c", "--timeout", "30"])
        .arg(elf_path)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("spawn failed: {e}"))?;
    if !output.status.success() {
        let stderr = String::from_utf8_lossy(&output.stderr);
        let first_line = stderr.lines().next().unwrap_or("unknown error");
        return Err(first_line.to_string());
    }
    String::from_utf8(output.stdout).map_err(|e| format!("non-UTF8 output: {e}"))
}

/// Build the markdown report. Returns `(report_text, refs_compared, fixtures_compared)`.
fn build_report(
    ida_counts: &[usize],
    unlace_counts: &[usize],
    refs_compared: usize,
    fixtures_compared: usize,
    fixture_failures: &[(String, String)],
) -> String {
    let mut s = String::new();
    let _ = writeln!(s, "# IDA vs Unlace — Corpus Pattern Coverage");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Reference corpus: {refs_compared} IDA Hex-Rays `.c` files under `tests/golden/x86_64/`."
    );
    let _ = writeln!(
        s,
        "Unlace corpus: {fixtures_compared} fixture ELFs under `fixtures/` decompiled by the local `unlace` binary."
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Coverage % = `min(100, 100 * Unlace / IDA)`. `n/a` when IDA count is zero."
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "| pattern | IDA aggregate count | Unlace aggregate count | coverage % |"
    );
    let _ = writeln!(
        s,
        "|---------|--------------------:|-----------------------:|-----------:|"
    );
    for (i, spec) in PATTERNS.iter().enumerate() {
        let ida = ida_counts[i];
        let unl = unlace_counts[i];
        let coverage = if ida == 0 {
            "n/a".to_string()
        } else {
            let pct = (unl as f64 / ida as f64) * 100.0;
            let capped = pct.min(100.0);
            format!("{capped:.1}")
        };
        let _ = writeln!(
            s,
            "| `{label}` | {ida} | {unl} | {coverage} |",
            label = spec.label,
        );
    }
    if !fixture_failures.is_empty() {
        let _ = writeln!(s);
        let _ = writeln!(s, "## Fixture decompile failures");
        let _ = writeln!(s);
        for (name, err) in fixture_failures {
            let _ = writeln!(s, "- `{name}`: {err}");
        }
    }
    s
}

pub fn run(root: &Path) {
    let golden_dir = root.join("tests/golden/x86_64");
    if !golden_dir.is_dir() {
        eprintln!(
            "ERROR: golden directory not found: {}",
            golden_dir.display()
        );
        std::process::exit(1);
    }
    let fixtures_dir = root.join("fixtures");
    if !fixtures_dir.is_dir() {
        eprintln!("ERROR: fixtures dir not found: {}", fixtures_dir.display());
        std::process::exit(1);
    }

    let unlace_bin = match find_unlace_binary(root) {
        Some(p) => p,
        None => {
            eprintln!("ERROR: unlace binary not found in target/{{release,debug}}/.");
            eprintln!("Run `cargo build -p unlace-cli` first.");
            std::process::exit(1);
        }
    };
    eprintln!("using unlace binary: {}", unlace_bin.display());

    // ── Phase 1: IDA corpus ──
    let golden_files = collect_golden_files(&golden_dir);
    eprintln!("scanning {} IDA reference .c files...", golden_files.len());
    let mut ida_counts: Vec<usize> = vec![0; PATTERNS.len()];
    for path in &golden_files {
        let Ok(src) = std::fs::read_to_string(path) else {
            continue;
        };
        for (i, spec) in PATTERNS.iter().enumerate() {
            ida_counts[i] += count_pattern(&src, spec);
        }
    }
    let refs_compared = golden_files.len();

    // ── Phase 2: Unlace corpus ──
    let fixtures = collect_fixture_elfs(&fixtures_dir);
    eprintln!("decompiling {} fixture ELFs...", fixtures.len());
    let mut unlace_counts: Vec<usize> = vec![0; PATTERNS.len()];
    let mut fixtures_compared = 0usize;
    let mut failures: Vec<(String, String)> = Vec::new();
    for fx in &fixtures {
        let name = fx
            .file_name()
            .map(|s| s.to_string_lossy().into_owned())
            .unwrap_or_default();
        eprint!("  {name} ... ");
        match decompile_elf(&unlace_bin, fx) {
            Ok(src) => {
                for (i, spec) in PATTERNS.iter().enumerate() {
                    unlace_counts[i] += count_pattern(&src, spec);
                }
                fixtures_compared += 1;
                eprintln!("ok ({} bytes)", src.len());
            }
            Err(e) => {
                eprintln!("FAIL: {e}");
                failures.push((name, e));
            }
        }
    }

    let report = build_report(
        &ida_counts,
        &unlace_counts,
        refs_compared,
        fixtures_compared,
        &failures,
    );

    // Write to file under target/.
    let out_path = root.join("target/corpus-compare.md");
    if let Some(parent) = out_path.parent() {
        let _ = std::fs::create_dir_all(parent);
    }
    if let Err(e) = std::fs::write(&out_path, &report) {
        eprintln!("WARN: failed to write {}: {e}", out_path.display());
    } else {
        eprintln!("wrote {}", out_path.display());
    }

    // Print to stdout.
    print!("{report}");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn word_match_basic() {
        assert_eq!(count_word("int _QWORD x;", "_QWORD"), 1);
        assert_eq!(count_word("int _QWORDS;", "_QWORD"), 0);
        assert_eq!(count_word("a _QWORD b _QWORD", "_QWORD"), 2);
    }

    #[test]
    fn ident_prefix_digits_basic() {
        assert_eq!(count_ident_prefix_digits("a1 = a2 + a23;", "a"), 3);
        assert_eq!(count_ident_prefix_digits("abc1 a1;", "a"), 1);
        assert_eq!(count_ident_prefix_digits("v1 v2 vN", "v"), 2);
    }

    #[test]
    fn switch_paren_basic() {
        assert_eq!(count_switch_paren("switch (x) {"), 1);
        assert_eq!(count_switch_paren("switch(x)"), 1);
        assert_eq!(count_switch_paren("switchx(y)"), 0);
        assert_eq!(count_switch_paren("// switch (x)"), 1);
    }
}
