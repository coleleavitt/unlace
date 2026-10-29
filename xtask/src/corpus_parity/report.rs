//! Markdown and summary-line rendering of a [`CorpusReport`].

use std::fmt::Write as _;

use crate::address_diff::Verdict;

use super::features::{FEATURES, FeatureCounts};
use super::{CorpusReport, FunctionRow};

/// Corpus-wide numbers the summary line and the markdown header share.
pub struct Totals {
    pub functions: usize,
    pub decompiled: usize,
    pub failed: usize,
    pub better: usize,
    pub equivalent: usize,
    pub worse: usize,
    /// Mean over decompiled functions, in percent.
    pub line_similarity: f64,
    pub ast_similarity: f64,
    pub reference: FeatureCounts,
    pub unlace: FeatureCounts,
    pub reference_lines: usize,
    pub unlace_lines: usize,
    pub arity_matches: usize,
    pub arity_compared: usize,
}

impl Totals {
    pub fn of(report: &CorpusReport) -> Self {
        let mut totals = Self {
            functions: report.functions.len(),
            decompiled: 0,
            failed: 0,
            better: 0,
            equivalent: 0,
            worse: 0,
            line_similarity: 0.0,
            ast_similarity: 0.0,
            reference: FeatureCounts::zero(),
            unlace: FeatureCounts::zero(),
            reference_lines: 0,
            unlace_lines: 0,
            arity_matches: 0,
            arity_compared: 0,
        };
        let mut ast_scored = 0usize;
        for row in &report.functions {
            totals.reference.add(&row.reference.features);
            totals.reference_lines += row.reference.lines;
            let Some(unlace) = &row.unlace else {
                totals.failed += 1;
                continue;
            };
            totals.decompiled += 1;
            totals.unlace.add(&unlace.features);
            totals.unlace_lines += unlace.lines;
            totals.line_similarity += row.line_similarity.unwrap_or(0.0);
            if let Some(ast) = row.ast_similarity {
                totals.ast_similarity += ast;
                ast_scored += 1;
            }
            match row.verdict {
                Some(Verdict::Better) => totals.better += 1,
                Some(Verdict::Equivalent) => totals.equivalent += 1,
                Some(Verdict::Worse) => totals.worse += 1,
                None => {}
            }
            if let (Some(a), Some(b)) = (row.reference.arity, unlace.arity) {
                totals.arity_compared += 1;
                totals.arity_matches += usize::from(a == b);
            }
        }
        if totals.decompiled > 0 {
            totals.line_similarity *= 100.0 / totals.decompiled as f64;
        }
        if ast_scored > 0 {
            totals.ast_similarity *= 100.0 / ast_scored as f64;
        }
        totals
    }
}

/// The one line `cargo xtask gate` keeps.
pub fn summary_line(report: &CorpusReport) -> String {
    let t = Totals::of(report);
    format!(
        "corpus-parity: arch={} functions={} decompiled={} failed={} line_sim={:.1}% ast_sim={:.1}% \
         better={} equivalent={} worse={} gotos={}/{} leaktemp={} lines={}/{} arity_match={}/{}",
        report.arch,
        t.functions,
        t.decompiled,
        t.failed,
        t.line_similarity,
        t.ast_similarity,
        t.better,
        t.equivalent,
        t.worse,
        t.unlace.get("goto"),
        t.reference.get("goto"),
        t.unlace.get("leaked temp"),
        t.unlace_lines,
        t.reference_lines,
        t.arity_matches,
        t.arity_compared,
    )
}

pub fn markdown(report: &CorpusReport) -> String {
    let t = Totals::of(report);
    let mut s = String::new();
    let _ = writeln!(
        s,
        "# Corpus parity: unlace vs IDA Hex-Rays ({})",
        report.arch
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Reference: `tests/golden/{}/` dumped by IDA {} from `{}`. Every reference function \
         is matched to unlace output of the same binary by start address.",
        report.arch,
        report.ida,
        report.binary.display()
    );
    let _ = writeln!(s);
    let _ = writeln!(s, "## Summary");
    let _ = writeln!(s);
    let _ = writeln!(s, "| measure | value |");
    let _ = writeln!(s, "|---|---:|");
    let _ = writeln!(s, "| reference functions | {} |", t.functions);
    let _ = writeln!(s, "| decompiled by unlace | {} |", t.decompiled);
    let _ = writeln!(s, "| failed / timed out | {} |", t.failed);
    let _ = writeln!(
        s,
        "| unmapped reference files | {} |",
        report.unmapped.len()
    );
    let _ = writeln!(
        s,
        "| references without IDA pseudocode | {} |",
        report.no_pseudocode.len()
    );
    let _ = writeln!(s, "| mean line similarity | {:.1}% |", t.line_similarity);
    let _ = writeln!(
        s,
        "| mean syntax-tree similarity | {:.1}% |",
        t.ast_similarity
    );
    let _ = writeln!(
        s,
        "| verdict better / equivalent / worse | {} / {} / {} |",
        t.better, t.equivalent, t.worse
    );
    let _ = writeln!(
        s,
        "| code lines unlace / IDA | {} / {} |",
        t.unlace_lines, t.reference_lines
    );
    let _ = writeln!(
        s,
        "| prototype arity matches | {} / {} |",
        t.arity_matches, t.arity_compared
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Line similarity is the longest-common-subsequence ratio of normalized code lines \
         (names, numeric suffixes and spacing folded). Syntax-tree similarity is the same \
         ratio over the pre-order node kinds of the tree-sitter C parse, identifiers skipped. \
         The verdict is goto count first, then line count within 10% (`xtask address-diff`)."
    );
    let _ = writeln!(s);
    let _ = writeln!(s, "## Feature counts");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Counts over the {} decompiled functions on both sides; ratio = unlace / IDA.",
        t.decompiled
    );
    let _ = writeln!(s);
    let _ = writeln!(s, "| group | feature | IDA | unlace | ratio |");
    let _ = writeln!(s, "|---|---|---:|---:|---:|");
    let reference_decompiled = decompiled_reference_counts(report);
    for (i, feature) in FEATURES.iter().enumerate() {
        let ida = reference_decompiled.0[i];
        let unlace = t.unlace.0[i];
        let ratio = if ida == 0 {
            if unlace == 0 {
                "—".to_string()
            } else {
                "∞".to_string()
            }
        } else {
            format!("{:.2}", unlace as f64 / ida as f64)
        };
        let _ = writeln!(
            s,
            "| {} | {} | {ida} | {unlace} | {ratio} |",
            feature.group, feature.label
        );
    }
    let _ = writeln!(s);
    let _ = writeln!(s, "## Functions");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "| function | IDA lines | unlace lines | IDA gotos | unlace gotos | line sim | tree sim | verdict |"
    );
    let _ = writeln!(s, "|---|---:|---:|---:|---:|---:|---:|---|");
    for row in &report.functions {
        let _ = writeln!(s, "{}", function_row(row));
    }
    let failures: Vec<&FunctionRow> = report
        .functions
        .iter()
        .filter(|row| row.error.is_some())
        .collect();
    if !failures.is_empty() {
        let _ = writeln!(s);
        let _ = writeln!(s, "## Failures");
        let _ = writeln!(s);
        for row in failures {
            let _ = writeln!(
                s,
                "- `{}` ({:#x}): {}",
                row.name,
                row.addr,
                row.error.as_deref().unwrap_or_default()
            );
        }
    }
    if !report.no_pseudocode.is_empty() {
        let _ = writeln!(s);
        let _ = writeln!(s, "## References without IDA pseudocode");
        let _ = writeln!(s);
        let _ = writeln!(
            s,
            "IDA dumped these as comment-only disassembly listings; they are not compared."
        );
        let _ = writeln!(s);
        for stem in &report.no_pseudocode {
            let _ = writeln!(s, "- `{stem}`");
        }
    }
    if !report.unmapped.is_empty() {
        let _ = writeln!(s);
        let _ = writeln!(s, "## Unmapped reference files");
        let _ = writeln!(s);
        let _ = writeln!(
            s,
            "Add their addresses to `[{}.functions]` in `tests/golden/corpus_binaries.toml`.",
            report.arch
        );
        let _ = writeln!(s);
        for stem in &report.unmapped {
            let _ = writeln!(s, "- `{stem}`");
        }
    }
    s
}

/// Reference feature counts restricted to the functions unlace decompiled,
/// so the ratio column compares the same set on both sides.
fn decompiled_reference_counts(report: &CorpusReport) -> FeatureCounts {
    let mut counts = FeatureCounts::zero();
    for row in report.functions.iter().filter(|row| row.unlace.is_some()) {
        counts.add(&row.reference.features);
    }
    counts
}

fn function_row(row: &FunctionRow) -> String {
    let pct = |v: Option<f64>| v.map_or("—".to_string(), |v| format!("{:.0}%", v * 100.0));
    match &row.unlace {
        Some(unlace) => format!(
            "| `{}` | {} | {} | {} | {} | {} | {} | {} |",
            row.name,
            row.reference.lines,
            unlace.lines,
            row.reference.gotos,
            unlace.gotos,
            pct(row.line_similarity),
            pct(row.ast_similarity),
            row.verdict.map_or("—", verdict_label),
        ),
        None => format!(
            "| `{}` | {} | — | {} | — | — | — | failed |",
            row.name, row.reference.lines, row.reference.gotos
        ),
    }
}

fn verdict_label(verdict: Verdict) -> &'static str {
    match verdict {
        Verdict::Better => "better",
        Verdict::Equivalent => "equivalent",
        Verdict::Worse => "worse",
    }
}
