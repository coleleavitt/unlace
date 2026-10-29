//! `cargo xtask gate` - every analyzer quality gate from one build.
//!
//! The golden fixtures are decompiled once, in-process and in parallel; the
//! triage ledger, stylistic score, fidelity and quality counters are all
//! computed from that single run. The semantic and type-recovery reports run
//! concurrently as child `xtask` processes against the one `unlace` build.
//! Outputs and report logs are written under `<target>/gate/`.
//!
//! `--quick` runs only the golden part (no `unlace` build, no child reports).

use std::path::Path;
use std::process::{Command, Stdio};
use std::time::{Duration, Instant};

use unlace_cli::quality;
use unlace_test_harness::fixture_metrics::{
    FidelityCounters, GOLDEN_FIXTURES, Metrics, load_reference_metrics,
};

use crate::cargo_bin;
use crate::fixture_outputs::{FixtureOutputs, decompile_fixtures, fixture_binary, map_parallel};
use crate::golden_triage;

#[derive(Clone, Copy, PartialEq, Eq)]
enum Status {
    Pass,
    Fail,
    Info,
}

impl Status {
    fn label(self) -> &'static str {
        match self {
            Status::Pass => "PASS",
            Status::Fail => "FAIL",
            Status::Info => "info",
        }
    }
}

struct Row {
    check: &'static str,
    status: Status,
    detail: String,
    elapsed: Duration,
}

impl Row {
    fn new(check: &'static str, status: Status, detail: String, elapsed: Duration) -> Self {
        Row {
            check,
            status,
            detail,
            elapsed,
        }
    }
}

/// A check run as a child process, with the line that summarizes it.
struct ChildReport {
    name: &'static str,
    command: ChildCommand,
    /// Tools that must be on `PATH`; the check is skipped without them.
    requires: &'static [&'static str],
    /// Reported as `info` when it succeeds: a measurement, not a pass/fail check.
    informational: bool,
    summary_prefix: &'static str,
    /// `key=value` fields kept from the summary line; empty keeps the line.
    summary_keys: &'static [&'static str],
}

enum ChildCommand {
    Xtask(&'static str),
    Script(&'static str),
}

const CHILD_REPORTS: [ChildReport; 5] = [
    ChildReport {
        name: "semantic-report",
        command: ChildCommand::Xtask("semantic-report"),
        requires: &[],
        informational: false,
        summary_prefix: "semantic-report: passed=",
        summary_keys: &["passed", "xfailed", "failed", "unsupported"],
    },
    ChildReport {
        name: "type-recovery-report",
        command: ChildCommand::Xtask("type-recovery-report"),
        requires: &[],
        informational: false,
        summary_prefix: "Type/Variable Recovery: MEASURED",
        summary_keys: &["recall", "precision", "raw_precision"],
    },
    ChildReport {
        name: "corpus parity",
        command: ChildCommand::Xtask("corpus-parity"),
        requires: &[],
        informational: true,
        summary_prefix: "corpus-parity:",
        summary_keys: &[
            "functions",
            "decompiled",
            "failed",
            "line_sim",
            "ast_sim",
            "worse",
            "gotos",
            "leaktemp",
            "baseline",
        ],
    },
    ChildReport {
        name: "rocq proofs",
        command: ChildCommand::Script("scripts/verify_proofs.sh"),
        requires: &["coqc"],
        informational: false,
        summary_prefix: "verify_proofs:",
        summary_keys: &[],
    },
    ChildReport {
        name: "extraction oracle",
        command: ChildCommand::Script("scripts/extraction_oracle.sh"),
        requires: &["coqc", "dune"],
        informational: false,
        summary_prefix: "extraction_oracle:",
        summary_keys: &[],
    },
];

pub fn run(root: &Path, args: &[String]) -> i32 {
    let quick = args.iter().any(|a| a == "--quick");
    let gate_dir = cargo_bin::target_dir(root).join("gate");
    if let Err(e) = std::fs::create_dir_all(gate_dir.join("decompile")) {
        eprintln!("gate: failed to create {}: {e}", gate_dir.display());
        return 1;
    }
    let started = Instant::now();

    let mut rows = Vec::new();
    if !quick {
        let t = Instant::now();
        match cargo_bin::build_unlace_bin(root) {
            Ok(path) => rows.push(Row::new(
                "build unlace",
                Status::Pass,
                path.display().to_string(),
                t.elapsed(),
            )),
            Err(e) => {
                rows.push(Row::new("build unlace", Status::Fail, e, t.elapsed()));
                print_table(&rows, started.elapsed());
                return 1;
            }
        }
    }

    std::thread::scope(|scope| {
        let children: Vec<_> = if quick {
            Vec::new()
        } else {
            CHILD_REPORTS
                .iter()
                .map(|report| scope.spawn(|| run_child_report(root, &gate_dir, report)))
                .collect()
        };

        rows.extend(golden_rows(root, &gate_dir));
        if !quick {
            rows.push(quality_row(root));
        }
        for child in children {
            rows.push(child.join().expect("child report thread panicked"));
        }
    });

    print_table(&rows, started.elapsed());
    println!("gate: outputs and logs in {}", gate_dir.display());
    if rows.iter().any(|row| row.status == Status::Fail) {
        1
    } else {
        0
    }
}

fn golden_names(root: &Path) -> Result<Vec<String>, String> {
    let mut names = golden_triage::expected_golden_names(root)?;
    for name in GOLDEN_FIXTURES {
        if !names.iter().any(|n| n == name) {
            names.push(name.to_string());
        }
    }
    names.sort();
    Ok(names)
}

fn golden_rows(root: &Path, gate_dir: &Path) -> Vec<Row> {
    let t = Instant::now();
    let names = match golden_names(root) {
        Ok(names) => names,
        Err(e) => return vec![Row::new("decompile goldens", Status::Fail, e, t.elapsed())],
    };
    let outputs = decompile_fixtures(root, &names);
    let failures: Vec<&str> = outputs
        .iter()
        .filter(|(_, out)| out.is_err())
        .map(|(name, _)| name.as_str())
        .collect();
    for (name, out) in &outputs {
        let text = match out {
            Ok(text) => text.clone(),
            Err(e) => format!("/* unlace failed: {e} */\n"),
        };
        let path = gate_dir.join("decompile").join(format!("{name}.c"));
        if let Err(e) = std::fs::write(&path, text) {
            eprintln!("gate: failed to write {}: {e}", path.display());
        }
    }
    let decompile_row = Row::new(
        "decompile goldens",
        if failures.is_empty() {
            Status::Pass
        } else {
            Status::Fail
        },
        if failures.is_empty() {
            format!("{} fixtures", outputs.len())
        } else {
            format!("failed: {}", failures.join(", "))
        },
        t.elapsed(),
    );

    let t = Instant::now();
    let triage_row = match golden_triage::ledger(root, &outputs) {
        Ok(summary) => Row::new(
            "golden triage",
            Status::Pass,
            format!(
                "pass_rows={} review_rows={}",
                summary.pass_rows, summary.review_rows
            ),
            t.elapsed(),
        ),
        Err(e) => Row::new("golden triage", Status::Fail, e, t.elapsed()),
    };

    let t = Instant::now();
    let score_row = match stylistic_parity(root, &outputs) {
        Ok(score) => Row::new(
            "stylistic score",
            Status::Info,
            format!("Stylistic Fixture Parity: {score:.1}%"),
            t.elapsed(),
        ),
        Err(e) => Row::new("stylistic score", Status::Fail, e, t.elapsed()),
    };

    let mut fidelity = FidelityCounters::default();
    for name in GOLDEN_FIXTURES {
        if let Some(Ok(text)) = outputs.get(name) {
            fidelity.add(FidelityCounters::collect(text, &Metrics::collect(text)));
        }
    }
    let fidelity_row = Row::new(
        "fidelity counters",
        Status::Info,
        format!(
            "cf={} expr={} type={} decl={} names={} memstack={} unknown={} total={}",
            fidelity.control_flow_artifacts,
            fidelity.expression_artifacts,
            fidelity.type_artifacts,
            fidelity.declaration_artifacts,
            fidelity.naming_artifacts,
            fidelity.memory_stack_artifacts,
            fidelity.unknown_helper_artifacts,
            fidelity.total(),
        ),
        Duration::ZERO,
    );

    vec![decompile_row, triage_row, score_row, fidelity_row]
}

/// Mean of the per-fixture `[score]` values the `golden_fixtures` test
/// prints: one for the actual output and one for the stored golden of every
/// fixture with a reference profile. Each value is taken at its printed
/// one-decimal precision so the mean matches the published metric.
fn stylistic_parity(root: &Path, outputs: &FixtureOutputs) -> Result<f64, String> {
    let references = load_reference_metrics(&root.join("tests/golden/reference_metrics.toml"))?;
    let printed =
        |score: f64| -> f64 { format!("{score:.1}").parse().expect("formatted f64 parses") };
    let mut scores = Vec::new();
    for name in GOLDEN_FIXTURES {
        let Some(reference) = references.get(name) else {
            continue;
        };
        if let Some(Ok(actual)) = outputs.get(name) {
            scores.push(printed(Metrics::collect(actual).score(reference)));
        }
        let golden = root.join("tests/golden/expected").join(format!("{name}.c"));
        if golden.exists() {
            let text = std::fs::read_to_string(&golden)
                .map_err(|e| format!("failed to read {}: {e}", golden.display()))?;
            scores.push(printed(Metrics::collect(&text).score(reference)));
        }
    }
    if scores.is_empty() {
        return Err("no fixture has a reference profile".to_string());
    }
    Ok(scores.iter().sum::<f64>() / scores.len() as f64)
}

fn quality_row(root: &Path) -> Row {
    let t = Instant::now();
    let names: Vec<String> = GOLDEN_FIXTURES.iter().map(|s| s.to_string()).collect();
    let reports = map_parallel(&names, |name| {
        quality::analyze_binary(&fixture_binary(root, name)).map_err(|e| format!("{name}: {e:#}"))
    });
    let mut ok = 0;
    let mut failed = 0;
    let mut totals = quality::QualityTotals::default();
    let mut errors = Vec::new();
    for report in reports.into_values() {
        match report {
            Ok(report) => {
                ok += report.functions_ok;
                failed += report.functions_failed;
                totals.unimplemented_ops += report.totals.unimplemented_ops;
                totals.callother_ops += report.totals.callother_ops;
                totals.gotos_emitted += report.totals.gotos_emitted;
                totals.unknown_types += report.totals.unknown_types;
                totals.output_leaked_temp_decls += report.totals.output_leaked_temp_decls;
            }
            Err(e) => errors.push(e),
        }
    }
    if !errors.is_empty() {
        return Row::new(
            "quality counters",
            Status::Fail,
            errors.join("; "),
            t.elapsed(),
        );
    }
    Row::new(
        "quality counters",
        Status::Info,
        format!(
            "functions ok={ok} failed={failed} unimpl={} callother={} goto={} unktype={} leaktemp={}",
            totals.unimplemented_ops,
            totals.callother_ops,
            totals.gotos_emitted,
            totals.unknown_types,
            totals.output_leaked_temp_decls,
        ),
        t.elapsed(),
    )
}

fn run_child_report(root: &Path, gate_dir: &Path, report: &ChildReport) -> Row {
    let t = Instant::now();
    if let Some(tool) = report.requires.iter().find(|tool| !on_path(tool)) {
        return Row::new(
            report.name,
            Status::Info,
            format!("skipped: {tool} not on PATH"),
            t.elapsed(),
        );
    }
    let log_path = gate_dir.join(format!("{}.log", report.name.replace(' ', "-")));
    let mut command = match report.command {
        ChildCommand::Xtask(subcommand) => match std::env::current_exe() {
            Ok(xtask) => {
                let mut command = Command::new(xtask);
                command.arg(subcommand);
                command
            }
            Err(e) => {
                let detail = format!("failed to locate xtask: {e}");
                return Row::new(report.name, Status::Fail, detail, t.elapsed());
            }
        },
        ChildCommand::Script(script) => {
            let mut command = Command::new("bash");
            command.arg(script);
            command
        }
    };
    let output = match command.current_dir(root).stdin(Stdio::null()).output() {
        Ok(output) => output,
        Err(e) => {
            let detail = format!("failed to spawn: {e}");
            return Row::new(report.name, Status::Fail, detail, t.elapsed());
        }
    };
    let mut log = output.stdout;
    log.extend_from_slice(&output.stderr);
    if let Err(e) = std::fs::write(&log_path, &log) {
        eprintln!("gate: failed to write {}: {e}", log_path.display());
    }
    let text = String::from_utf8_lossy(&log);
    let summary = text
        .lines()
        .rfind(|line| line.starts_with(report.summary_prefix))
        .map(|line| summary_fields(line, report.summary_keys))
        .unwrap_or_else(|| format!("no summary line; see {}", log_path.display()));
    let status = if !output.status.success() {
        Status::Fail
    } else if report.informational {
        Status::Info
    } else {
        Status::Pass
    };
    Row::new(report.name, status, summary, t.elapsed())
}

fn on_path(tool: &str) -> bool {
    std::env::var_os("PATH")
        .is_some_and(|paths| std::env::split_paths(&paths).any(|dir| dir.join(tool).is_file()))
}

/// The `key=value` tokens of `line` whose key is in `keys`; the whole line
/// when `keys` is empty or none of them occur (a `skipped` summary).
fn summary_fields(line: &str, keys: &[&str]) -> String {
    let fields = line
        .split_whitespace()
        .filter(|token| {
            token
                .split_once('=')
                .is_some_and(|(key, _)| keys.contains(&key))
        })
        .collect::<Vec<_>>();
    if fields.is_empty() {
        line.to_string()
    } else {
        fields.join(" ")
    }
}

fn print_table(rows: &[Row], total: Duration) {
    let width = rows.iter().map(|row| row.check.len()).max().unwrap_or(0);
    println!();
    println!("{:<width$}  status  {:>7}  detail", "check", "secs");
    for row in rows {
        println!(
            "{:<width$}  {:<6}  {:>7.1}  {}",
            row.check,
            row.status.label(),
            row.elapsed.as_secs_f64(),
            row.detail
        );
    }
    println!(
        "{:<width$}  {:<6}  {:>7.1}",
        "total",
        "",
        total.as_secs_f64()
    );
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn summary_fields_keeps_requested_keys() {
        let line = "Type/Variable Recovery: MEASURED fixtures=3 recall=100.0% precision=93.1% raw_precision=92.9%";
        assert_eq!(
            summary_fields(line, &["recall", "precision", "raw_precision"]),
            "recall=100.0% precision=93.1% raw_precision=92.9%"
        );
    }

    #[test]
    fn summary_fields_keeps_a_line_without_requested_keys() {
        let line = "corpus-parity: skipped (hexrays/ida-9.3sp1/hexx64.so not found)";
        assert_eq!(summary_fields(line, &["functions"]), line);
    }
}
