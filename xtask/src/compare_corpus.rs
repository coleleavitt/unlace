//! `cargo xtask compare-corpus` — IDA-vs-Unlace pattern coverage report.
//!
//! Walks `tests/golden/x86_64/` (IDA Hex-Rays reference output) and counts
//! the pseudo-C features of [`features::FEATURES`]. Then walks
//! `fixtures/*.elf`, decompiles each via the locally built `unlace` binary,
//! and counts the same features in the resulting C output.
//!
//! The two corpora are different programs, so this is a style-coverage
//! audit; `cargo xtask corpus-parity` compares the same functions when the
//! corpus binary is available.
//!
//! Emits a markdown table to stdout and to `target/corpus-compare.md`.
//! Columns: feature, IDA aggregate count, Unlace aggregate count, coverage %
//! (Unlace/IDA, capped at 100).
//!
//! This is a reporting / audit tool — it always exits 0 unless the golden
//! corpus is missing.

use std::fmt::Write as _;
use std::path::{Path, PathBuf};
use std::process::Command;

use crate::cargo_bin;
use crate::corpus_parity::features::{self, FEATURES, FeatureCounts};

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
    ida_counts: &FeatureCounts,
    unlace_counts: &FeatureCounts,
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
        "| feature | IDA aggregate count | Unlace aggregate count | coverage % |"
    );
    let _ = writeln!(
        s,
        "|---------|--------------------:|-----------------------:|-----------:|"
    );
    for (i, feature) in FEATURES.iter().enumerate() {
        let ida = ida_counts.0[i];
        let unl = unlace_counts.0[i];
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
            label = feature.label,
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

    let unlace_bin = match cargo_bin::build_unlace_bin(root) {
        Ok(p) => p,
        Err(e) => {
            eprintln!("ERROR: {e}");
            std::process::exit(1);
        }
    };
    eprintln!("using unlace binary: {}", unlace_bin.display());

    // ── Phase 1: IDA corpus ──
    let golden_files = collect_golden_files(&golden_dir);
    eprintln!("scanning {} IDA reference .c files...", golden_files.len());
    let mut ida_counts = FeatureCounts::zero();
    for path in &golden_files {
        let Ok(src) = std::fs::read_to_string(path) else {
            continue;
        };
        ida_counts.add(&features::count(&src));
    }
    let refs_compared = golden_files.len();

    // ── Phase 2: Unlace corpus ──
    let fixtures = collect_fixture_elfs(&fixtures_dir);
    eprintln!("decompiling {} fixture ELFs...", fixtures.len());
    let mut unlace_counts = FeatureCounts::zero();
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
                unlace_counts.add(&features::count(&src));
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
