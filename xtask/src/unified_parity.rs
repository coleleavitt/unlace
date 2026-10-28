//! `xtask unified-parity` — one command that runs every parity / quality report
//! and prints a combined pass/fail summary.
//!
//! ROADMAP.md Phase J acceptance: "A single command emits a CLI-first parity
//! report for the IDA corpus" and "`docs/status.md` can be refreshed from the
//! same counters". This orchestrates the existing report subcommands
//! (`semantic-report`, `type-recovery-report`, `golden-triage`,
//! `compare-corpus`, `lifter-coverage`, `compare-golden`, `goto-count`) so the
//! whole quality picture comes from one invocation. Each underlying report still
//! owns its own `target/*.md` artifact; this command sequences them and
//! aggregates the gating ones into a final verdict.

use std::path::Path;

use crate::{
    compare_corpus, compare_golden, golden_triage, goto_count, lifter_coverage, semantic_report,
    type_recovery_report,
};

/// One row of the final summary.
struct Section {
    name: &'static str,
    /// `None` for non-gating informational reports; `Some(code)` for gating ones.
    code: Option<i32>,
}

pub fn run(root: &Path) -> i32 {
    let mut sections: Vec<Section> = Vec::new();

    banner("semantic-report");
    let semantic = semantic_report::run(root, &[]);
    sections.push(Section {
        name: "semantic-report",
        code: Some(semantic),
    });

    banner("type-recovery-report");
    let type_recovery = type_recovery_report::run(root, &[]);
    sections.push(Section {
        name: "type-recovery-report",
        code: Some(type_recovery),
    });

    banner("golden-triage");
    let golden = golden_triage::run(root);
    sections.push(Section {
        name: "golden-triage",
        code: Some(golden),
    });

    banner("goto-count");
    goto_count::run(root);
    sections.push(Section {
        name: "goto-count",
        code: None,
    });

    banner("compare-corpus");
    compare_corpus::run(root);
    sections.push(Section {
        name: "compare-corpus",
        code: None,
    });

    banner("lifter-coverage");
    lifter_coverage::run(root);
    sections.push(Section {
        name: "lifter-coverage",
        code: None,
    });

    banner("compare-golden");
    compare_golden::run(root);
    sections.push(Section {
        name: "compare-golden",
        code: None,
    });

    // ── Final summary ──
    println!();
    println!("════════════════════════════════════════════════════════════════");
    println!("  UNIFIED PARITY SUMMARY");
    println!("════════════════════════════════════════════════════════════════");
    println!("  {:<26} │ result", "report");
    println!("  ───────────────────────────┼──────────────");
    let mut worst = 0;
    for s in &sections {
        let result = match s.code {
            Some(0) => "PASS".to_string(),
            Some(c) => {
                worst = worst.max(c);
                format!("FAIL ({c})")
            }
            None => "(informational)".to_string(),
        };
        println!("  {:<26} │ {result}", s.name);
    }
    println!();
    if worst == 0 {
        println!("  Overall: all gating reports PASS.");
    } else {
        println!("  Overall: at least one gating report FAILED (exit {worst}).");
    }
    println!("  Artifacts: target/corpus-compare.md, target/lifter-coverage.md (+ stdout above).");
    println!();

    worst
}

fn banner(name: &str) {
    println!();
    println!("────────────────────────────────────────────────────────────────");
    println!("▶ {name}");
    println!("────────────────────────────────────────────────────────────────");
}
