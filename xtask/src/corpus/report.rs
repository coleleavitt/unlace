//! Corpus report model, its deterministic JSON/markdown renderings, and the
//! baseline comparison used by gates.

use std::collections::BTreeMap;
use std::fmt::Write as _;

use serde::{Deserialize, Serialize};

use super::build::Config;
use super::metrics::OutputMetrics;
use super::recompile::Equivalence;

pub const SCHEMA: u32 = 1;

#[derive(Debug, Clone, Serialize)]
pub struct Report {
    pub schema: u32,
    /// Toolchain -> compiler version line; toolchains that are not
    /// installed are listed in `unavailable` instead.
    pub toolchains: BTreeMap<String, String>,
    pub unavailable: BTreeMap<String, String>,
    pub programs: Vec<ProgramInfo>,
    pub configs: Vec<ConfigReport>,
    pub external: Vec<ExternalReport>,
}

#[derive(Debug, Clone, Serialize)]
pub struct ProgramInfo {
    pub name: String,
    pub summary: String,
    pub origin: Option<String>,
}

#[derive(Debug, Clone, Serialize)]
pub struct ConfigReport {
    pub config: Config,
    pub totals: Totals,
    pub programs: Vec<ProgramReport>,
}

#[derive(Debug, Clone, Serialize)]
pub struct ProgramReport {
    pub name: String,
    /// Build or decompile failure; when set, `functions` is empty.
    pub error: Option<String>,
    pub functions: Vec<FunctionReport>,
}

#[derive(Debug, Clone, Serialize)]
pub struct FunctionReport {
    pub symbol: String,
    pub addr: String,
    /// `path:line` of the declaration.
    pub source: String,
    pub source_lines: Option<usize>,
    /// `None` when unlace printed no function at this address.
    pub metrics: Option<OutputMetrics>,
    /// `None` for compiler clones, whose ABI is not the source prototype.
    pub arity: Option<Arity>,
    /// `None` when recompilation was not attempted for this config.
    pub recompile: Option<Equivalence>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize)]
pub struct Arity {
    pub expected: usize,
    pub printed: usize,
    pub variadic: bool,
}

impl Arity {
    pub fn mismatch(self) -> bool {
        self.expected != self.printed
    }
}

/// Decompile-only metrics for a binary outside the repo (no sources).
#[derive(Debug, Clone, Serialize)]
pub struct ExternalReport {
    pub name: String,
    pub path: String,
    pub error: Option<String>,
    pub functions: usize,
    pub metrics: OutputMetrics,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct RecompileTotals {
    pub pass: usize,
    pub mismatch: usize,
    pub compile_error: usize,
    pub link_error: usize,
    pub untestable: usize,
}

impl RecompileTotals {
    fn add(&mut self, result: &Equivalence) {
        match result {
            Equivalence::Pass => self.pass += 1,
            Equivalence::Mismatch(_) => self.mismatch += 1,
            Equivalence::CompileError(_) => self.compile_error += 1,
            Equivalence::LinkError(_) => self.link_error += 1,
            Equivalence::Untestable(_) => self.untestable += 1,
        }
    }

    pub fn tested(self) -> usize {
        self.pass + self.mismatch + self.compile_error + self.link_error
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Totals {
    pub programs_failed: usize,
    pub functions: usize,
    /// Source functions unlace printed no function for.
    pub missing: usize,
    pub metrics: OutputMetrics,
    /// Source lines of the functions that were printed.
    pub source_lines: usize,
    pub arity_checked: usize,
    pub arity_mismatches: usize,
    pub recompile: RecompileTotals,
}

impl Totals {
    pub fn of<'a>(programs: impl IntoIterator<Item = &'a ProgramReport>) -> Self {
        let mut totals = Totals::default();
        for program in programs {
            if program.error.is_some() {
                totals.programs_failed += 1;
            }
            for function in &program.functions {
                totals.add(function);
            }
        }
        totals
    }

    fn add(&mut self, function: &FunctionReport) {
        self.functions += 1;
        match function.metrics {
            Some(metrics) => {
                self.metrics += metrics;
                self.source_lines += function.source_lines.unwrap_or_default();
            }
            None => self.missing += 1,
        }
        if let Some(arity) = function.arity
            && function.metrics.is_some()
        {
            self.arity_checked += 1;
            self.arity_mismatches += usize::from(arity.mismatch());
        }
        if let Some(result) = &function.recompile {
            self.recompile.add(result);
        }
    }

    /// Printed lines per source line, as a fixed two-decimal string so the
    /// JSON stays byte-stable.
    pub fn line_ratio(&self) -> String {
        ratio(self.metrics.lines, self.source_lines)
    }
}

fn ratio(num: usize, den: usize) -> String {
    if den == 0 {
        return "-".to_string();
    }
    let hundredths = (num * 100 + den / 2) / den;
    format!("{}.{:02}", hundredths / 100, hundredths % 100)
}

/// The committed `tests/corpus/baseline.json`: totals per config plus the
/// toolchain versions they were measured with.
#[derive(Debug, Clone, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Baseline {
    pub toolchains: BTreeMap<String, String>,
    pub totals: BTreeMap<String, Totals>,
}

impl Baseline {
    pub fn of(report: &Report) -> Self {
        Baseline {
            toolchains: report.toolchains.clone(),
            totals: report
                .configs
                .iter()
                .map(|c| (c.config.to_string(), c.totals))
                .collect(),
        }
    }
}

/// One counter that moved the wrong way relative to the baseline.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Regression {
    pub config: String,
    pub metric: &'static str,
    pub baseline: usize,
    pub current: usize,
}

/// What a baseline comparison found. Configs measured with a different
/// compiler version than the baseline are skipped, not compared.
#[derive(Debug, Default)]
pub struct Comparison {
    pub regressions: Vec<Regression>,
    pub skipped: Vec<String>,
}

pub fn compare(baseline: &Baseline, current: &Baseline) -> Comparison {
    let mut comparison = Comparison::default();
    for (config, now) in &current.totals {
        let Some(base) = baseline.totals.get(config) else {
            comparison
                .skipped
                .push(format!("{config}: not in baseline"));
            continue;
        };
        let toolchain = config.split('/').next().unwrap_or_default();
        if baseline.toolchains.get(toolchain) != current.toolchains.get(toolchain) {
            comparison
                .skipped
                .push(format!("{config}: compiler differs from baseline"));
            continue;
        }
        let lower_is_better = [
            ("programs_failed", base.programs_failed, now.programs_failed),
            ("missing", base.missing, now.missing),
            ("flag_vars", base.metrics.flag_vars, now.metrics.flag_vars),
            ("gotos", base.metrics.gotos, now.metrics.gotos),
            (
                "empty_blocks",
                base.metrics.empty_blocks,
                now.metrics.empty_blocks,
            ),
            (
                "dead_stores",
                base.metrics.dead_stores,
                now.metrics.dead_stores,
            ),
            (
                "leaked_temps",
                base.metrics.leaked_temps,
                now.metrics.leaked_temps,
            ),
            (
                "register_carriers",
                base.metrics.register_carriers,
                now.metrics.register_carriers,
            ),
            (
                "raw_stack_accesses",
                base.metrics.raw_stack_accesses,
                now.metrics.raw_stack_accesses,
            ),
            (
                "arity_mismatches",
                base.arity_mismatches,
                now.arity_mismatches,
            ),
        ];
        for (metric, baseline, current) in lower_is_better {
            if current > baseline {
                comparison.regressions.push(Regression {
                    config: config.clone(),
                    metric,
                    baseline,
                    current,
                });
            }
        }
        if now.recompile.pass < base.recompile.pass {
            comparison.regressions.push(Regression {
                config: config.clone(),
                metric: "recompile_pass",
                baseline: base.recompile.pass,
                current: now.recompile.pass,
            });
        }
    }
    comparison
}

const TOTALS_HEADER: &str = "| flag vars | gotos | empty blocks | dead stores | leaked temps | reg carriers | raw stack | arity mismatch | lines/src | recompile pass | mismatch | cc err | ld err | untestable |";
const TOTALS_RULE: &str = "|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|";

fn totals_cells(t: &Totals) -> String {
    let m = &t.metrics;
    let r = &t.recompile;
    format!(
        "| {} | {} | {} | {} | {} | {} | {} | {}/{} | {} | {}/{} | {} | {} | {} | {} |",
        m.flag_vars,
        m.gotos,
        m.empty_blocks,
        m.dead_stores,
        m.leaked_temps,
        m.register_carriers,
        m.raw_stack_accesses,
        t.arity_mismatches,
        t.arity_checked,
        t.line_ratio(),
        r.pass,
        r.tested(),
        r.mismatch,
        r.compile_error,
        r.link_error,
        r.untestable,
    )
}

/// The headline table: one row per build config.
pub fn totals_markdown(report: &Report) -> String {
    let mut out = String::new();
    let _ = writeln!(out, "| config | functions | missing {TOTALS_HEADER}");
    let _ = writeln!(out, "|---|---:|---:{TOTALS_RULE}");
    for config in &report.configs {
        let t = &config.totals;
        let _ = writeln!(
            out,
            "| {} | {} | {} {}",
            config.config,
            t.functions,
            t.missing,
            totals_cells(t)
        );
    }
    out
}

/// `tests/corpus/BASELINE.md`: the committed totals in readable form.
pub fn baseline_markdown(report: &Report, commit: Option<&str>) -> String {
    let mut out = String::from("# Corpus baseline\n\n");
    out.push_str("Generated by `cargo xtask corpus --update-baseline`; the gate compares against `baseline.json`. See README.md for what each column measures.\n\n");
    if let Some(commit) = commit {
        let _ = writeln!(out, "Measured at commit `{commit}`.\n");
    }
    for (toolchain, version) in &report.toolchains {
        let _ = writeln!(out, "- `{toolchain}`: {version}");
    }
    out.push('\n');
    out.push_str(&totals_markdown(report));
    out
}

pub fn markdown(report: &Report) -> String {
    let mut out = String::from("# Corpus report\n\n");
    out.push_str("Lower is better for every counter except recompile pass. `lines/src` is printed lines per source line. Generated by `cargo xtask corpus`.\n\n");
    for (toolchain, version) in &report.toolchains {
        let _ = writeln!(out, "- `{toolchain}`: {version}");
    }
    for (toolchain, reason) in &report.unavailable {
        let _ = writeln!(out, "- `{toolchain}`: unavailable ({reason})");
    }
    out.push_str("\n## Totals\n\n");
    out.push_str(&totals_markdown(report));
    out.push_str("\n## Programs\n\n");
    for program in &report.programs {
        let _ = write!(out, "- `{}`: {}", program.name, program.summary);
        if let Some(origin) = &program.origin {
            let _ = write!(out, " (vendored from {origin})");
        }
        out.push('\n');
    }

    for config in &report.configs {
        let _ = writeln!(out, "\n## {}\n", config.config);
        let _ = writeln!(out, "| program | functions | missing {TOTALS_HEADER}");
        let _ = writeln!(out, "|---|---:|---:{TOTALS_RULE}");
        for program in &config.programs {
            if let Some(error) = &program.error {
                let _ = writeln!(
                    out,
                    "| {} | error: {} |",
                    program.name,
                    error.replace('|', "\\|")
                );
                continue;
            }
            let t = Totals::of([program]);
            let _ = writeln!(
                out,
                "| {} | {} | {} {}",
                program.name,
                t.functions,
                t.missing,
                totals_cells(&t)
            );
        }
        let _ = writeln!(
            out,
            "\n<details><summary>functions</summary>\n\n| program | function | addr | flag vars | gotos | empty | dead stores | temps | regs | raw stack | arity (src/printed) | lines/src | recompile |\n|---|---|---|---:|---:|---:|---:|---:|---:|---:|---|---:|---|"
        );
        for program in &config.programs {
            for f in &program.functions {
                let arity = f.arity.map_or("clone".to_string(), |a| {
                    format!("{}/{}", a.expected, a.printed)
                });
                let recompile = f.recompile.as_ref().map_or("-".to_string(), |r| match r {
                    Equivalence::Pass => "pass".to_string(),
                    Equivalence::Mismatch(d) => format!("mismatch: {d}"),
                    Equivalence::CompileError(d) => format!("cc: {d}"),
                    Equivalence::LinkError(d) => format!("ld: {d}"),
                    Equivalence::Untestable(d) => format!("untestable: {d}"),
                });
                match f.metrics {
                    Some(m) => {
                        let _ = writeln!(
                            out,
                            "| {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
                            program.name,
                            f.symbol,
                            f.addr,
                            m.flag_vars,
                            m.gotos,
                            m.empty_blocks,
                            m.dead_stores,
                            m.leaked_temps,
                            m.register_carriers,
                            m.raw_stack_accesses,
                            arity,
                            ratio(m.lines, f.source_lines.unwrap_or_default()),
                            recompile.replace('|', "\\|"),
                        );
                    }
                    None => {
                        let _ = writeln!(
                            out,
                            "| {} | {} | {} | missing |  |  |  |  |  |  |  |  |  |",
                            program.name, f.symbol, f.addr
                        );
                    }
                }
            }
        }
        out.push_str("\n</details>\n");
    }

    if !report.external.is_empty() {
        out.push_str("\n## External binaries (decompile only)\n\n| binary | functions | flag vars | gotos | empty blocks | dead stores | leaked temps | reg carriers | raw stack | lines |\n|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|\n");
        for e in &report.external {
            if let Some(error) = &e.error {
                let _ = writeln!(out, "| {} | error: {} |", e.name, error.replace('|', "\\|"));
                continue;
            }
            let m = &e.metrics;
            let _ = writeln!(
                out,
                "| {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
                e.name,
                e.functions,
                m.flag_vars,
                m.gotos,
                m.empty_blocks,
                m.dead_stores,
                m.leaked_temps,
                m.register_carriers,
                m.raw_stack_accesses,
                m.lines
            );
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn totals(gotos: usize, pass: usize) -> Totals {
        Totals {
            metrics: OutputMetrics {
                gotos,
                ..OutputMetrics::default()
            },
            recompile: RecompileTotals {
                pass,
                ..RecompileTotals::default()
            },
            ..Totals::default()
        }
    }

    fn baseline(version: &str, gotos: usize, pass: usize) -> Baseline {
        Baseline {
            toolchains: [("gcc-x86_64".to_string(), version.to_string())].into(),
            totals: [("gcc-x86_64/stripped".to_string(), totals(gotos, pass))].into(),
        }
    }

    #[test]
    fn compare_flags_worse_counters_and_fewer_passes() {
        let cmp = compare(&baseline("gcc 15", 3, 5), &baseline("gcc 15", 4, 4));
        let metrics: Vec<_> = cmp.regressions.iter().map(|r| r.metric).collect();
        assert_eq!(metrics, ["gotos", "recompile_pass"]);
        assert!(
            compare(&baseline("gcc 15", 3, 5), &baseline("gcc 15", 2, 6))
                .regressions
                .is_empty()
        );
    }

    #[test]
    fn compare_skips_configs_built_with_another_compiler() {
        let cmp = compare(&baseline("gcc 15", 3, 5), &baseline("gcc 16", 9, 0));
        assert!(cmp.regressions.is_empty());
        assert_eq!(cmp.skipped.len(), 1);
    }

    #[test]
    fn line_ratio_is_fixed_point() {
        assert_eq!(ratio(250, 100), "2.50");
        assert_eq!(ratio(1, 3), "0.33");
        assert_eq!(ratio(5, 0), "-");
    }
}
