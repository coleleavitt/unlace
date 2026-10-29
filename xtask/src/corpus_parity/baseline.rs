//! `tests/golden/corpus_parity_baseline.json`: the corpus numbers a branch
//! must not fall below. Refresh with `cargo xtask corpus-parity
//! --update-baseline` after a reviewed improvement.

use std::collections::BTreeMap;
use std::path::Path;

use serde::{Deserialize, Serialize};

use super::report::Totals;

pub const PATH: &str = "tests/golden/corpus_parity_baseline.json";

/// Mean similarities may drop by this many percentage points before the
/// drop counts: the stored values carry one decimal.
const SIMILARITY_SLACK: f64 = 0.1;

#[derive(Debug, Clone, PartialEq, Serialize, Deserialize)]
pub struct Baseline {
    pub functions: usize,
    pub failed: usize,
    pub line_similarity_pct: f64,
    pub ast_similarity_pct: f64,
    pub gotos: usize,
    pub leaked_temps: usize,
    pub worse: usize,
}

impl Baseline {
    pub fn of(totals: &Totals) -> Self {
        let one_decimal = |v: f64| (v * 10.0).round() / 10.0;
        Self {
            functions: totals.functions,
            failed: totals.failed,
            line_similarity_pct: one_decimal(totals.line_similarity),
            ast_similarity_pct: one_decimal(totals.ast_similarity),
            gotos: totals.unlace.get("goto"),
            leaked_temps: totals.unlace.get("leaked temp"),
            worse: totals.worse,
        }
    }
}

/// One number that moved the wrong way.
#[derive(Debug, Clone, PartialEq)]
pub struct Regression {
    pub metric: &'static str,
    pub baseline: String,
    pub current: String,
}

impl std::fmt::Display for Regression {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{} {} -> {}", self.metric, self.baseline, self.current)
    }
}

/// Lower similarity, or more failures, gotos, leaked temps, or `worse`
/// verdicts than the baseline. A different function count is reported
/// too: the numbers are only comparable over the same corpus.
pub fn compare(baseline: &Baseline, current: &Baseline) -> Vec<Regression> {
    let mut regressions = Vec::new();
    if baseline.functions != current.functions {
        regressions.push(Regression {
            metric: "functions",
            baseline: baseline.functions.to_string(),
            current: current.functions.to_string(),
        });
    }
    for (metric, base, now) in [
        (
            "line_similarity_pct",
            baseline.line_similarity_pct,
            current.line_similarity_pct,
        ),
        (
            "ast_similarity_pct",
            baseline.ast_similarity_pct,
            current.ast_similarity_pct,
        ),
    ] {
        if now < base - SIMILARITY_SLACK {
            regressions.push(Regression {
                metric,
                baseline: format!("{base:.1}%"),
                current: format!("{now:.1}%"),
            });
        }
    }
    for (metric, base, now) in [
        ("failed", baseline.failed, current.failed),
        ("gotos", baseline.gotos, current.gotos),
        ("leaked_temps", baseline.leaked_temps, current.leaked_temps),
        ("worse", baseline.worse, current.worse),
    ] {
        if now > base {
            regressions.push(Regression {
                metric,
                baseline: base.to_string(),
                current: now.to_string(),
            });
        }
    }
    regressions
}

/// The baseline of `arch`, `None` when the file has no entry for it.
pub fn load(root: &Path, arch: &str) -> Result<Option<Baseline>, String> {
    let path = root.join(PATH);
    if !path.exists() {
        return Ok(None);
    }
    let text = std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))?;
    let mut entries: BTreeMap<String, Baseline> =
        serde_json::from_str(&text).map_err(|e| format!("{}: {e}", path.display()))?;
    Ok(entries.remove(arch))
}

/// Write `baseline` as the entry of `arch`, keeping the other entries.
pub fn store(root: &Path, arch: &str, baseline: &Baseline) -> Result<(), String> {
    let path = root.join(PATH);
    let mut entries: BTreeMap<String, Baseline> = match std::fs::read_to_string(&path) {
        Ok(text) => serde_json::from_str(&text).map_err(|e| format!("{}: {e}", path.display()))?,
        Err(_) => BTreeMap::new(),
    };
    entries.insert(arch.to_string(), baseline.clone());
    let mut text = serde_json::to_string_pretty(&entries).expect("baseline serializes");
    text.push('\n');
    std::fs::write(&path, text).map_err(|e| format!("{}: {e}", path.display()))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn baseline() -> Baseline {
        Baseline {
            functions: 149,
            failed: 0,
            line_similarity_pct: 35.8,
            ast_similarity_pct: 63.3,
            gotos: 286,
            leaked_temps: 184,
            worse: 82,
        }
    }

    #[test]
    fn same_or_better_numbers_pass() {
        assert!(compare(&baseline(), &baseline()).is_empty());
        let better = Baseline {
            line_similarity_pct: 40.0,
            gotos: 200,
            worse: 10,
            ..baseline()
        };
        assert!(compare(&baseline(), &better).is_empty());
        let within_slack = Baseline {
            ast_similarity_pct: 63.25,
            ..baseline()
        };
        assert!(compare(&baseline(), &within_slack).is_empty());
    }

    #[test]
    fn worse_numbers_are_regressions() {
        let worse = Baseline {
            line_similarity_pct: 35.6,
            gotos: 287,
            leaked_temps: 185,
            worse: 83,
            failed: 1,
            ..baseline()
        };
        let metrics: Vec<_> = compare(&baseline(), &worse)
            .iter()
            .map(|r| r.metric)
            .collect();
        assert_eq!(
            metrics,
            [
                "line_similarity_pct",
                "failed",
                "gotos",
                "leaked_temps",
                "worse"
            ]
        );
    }
}
