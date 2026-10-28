//! `xtask golden-triage` - exact-line golden mismatch classification gate.
//!
//! This command does not update expected output. It verifies that every stored
//! fixture golden has a row-by-row triage record before reviewers consider a
//! rebaseline.

use std::collections::{BTreeMap, BTreeSet};
use std::path::Path;

use crate::fixture_outputs::{FixtureOutputs, decompile_fixtures, fixture_binary};
use serde::Deserialize;

#[derive(Debug, Deserialize)]
struct TriageManifest {
    #[serde(default)]
    fixture: Vec<TriageRow>,
}

#[derive(Debug, Deserialize)]
struct TriageRow {
    name: String,
    classification: GoldenClassification,
    reason: String,
    next_action: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Deserialize)]
#[serde(rename_all = "kebab-case")]
enum GoldenClassification {
    ExactPass,
    StaleGolden,
    ProducerBug,
    Mixed,
}

impl GoldenClassification {
    fn as_str(self) -> &'static str {
        match self {
            GoldenClassification::ExactPass => "exact-pass",
            GoldenClassification::StaleGolden => "stale-golden",
            GoldenClassification::ProducerBug => "producer-bug",
            GoldenClassification::Mixed => "mixed",
        }
    }
}

pub struct TriageSummary {
    pub pass_rows: usize,
    pub review_rows: usize,
}

#[derive(Debug, Default)]
struct DiffSummary {
    matches: bool,
    first_diff_line: Option<usize>,
    whole_diffs: usize,
    body_diffs: usize,
    prelude_diffs: usize,
    size_lines: usize,
    renum_lines: usize,
    structural_lines: usize,
}

pub fn run(root: &Path) -> i32 {
    let result = expected_golden_names(root)
        .and_then(|names| ledger(root, &decompile_fixtures(root, &names)));
    match result {
        Ok(_) => 0,
        Err(e) => {
            eprintln!("golden-triage: {e}");
            1
        }
    }
}

/// Check every stored golden against `outputs` and print the ledger.
pub fn ledger(root: &Path, outputs: &FixtureOutputs) -> Result<TriageSummary, String> {
    let manifest = read_triage_manifest(root)?;
    let rows = index_rows(manifest)?;
    let expected = expected_golden_names(root)?;

    let expected_set: BTreeSet<&str> = expected.iter().map(String::as_str).collect();
    for name in rows.keys() {
        if !expected_set.contains(name.as_str()) {
            return Err(format!(
                "triage row {name:?} has no tests/golden/expected/{name}.c"
            ));
        }
    }

    let mut pass_rows = 0usize;
    let mut review_rows = 0usize;
    println!("golden-triage: exact-line fixture ledger");
    println!();
    for name in expected {
        let row = rows
            .get(&name)
            .ok_or_else(|| format!("missing triage row for tests/golden/expected/{name}.c"))?;
        validate_row(row)?;

        let fixture = fixture_binary(root, &name);
        if !fixture.exists() {
            return Err(format!(
                "fixture missing for golden row {name}: {}",
                fixture.display()
            ));
        }
        let expected_path = root.join("tests/golden/expected").join(format!("{name}.c"));
        let expected_text = std::fs::read_to_string(&expected_path)
            .map_err(|e| format!("failed to read {}: {e}", expected_path.display()))?;
        let actual_text = match outputs.get(&name) {
            Some(Ok(text)) => text,
            Some(Err(e)) => return Err(format!("unlace failed for {name}: {e}")),
            None => return Err(format!("no decompiled output for {name}")),
        };
        let diff = DiffSummary::compare(actual_text, &expected_text);

        if diff.matches && row.classification != GoldenClassification::ExactPass {
            return Err(format!(
                "{name} now matches exactly but triage classification is {}; update tests/golden/triage.toml",
                row.classification.as_str()
            ));
        }
        if !diff.matches && row.classification == GoldenClassification::ExactPass {
            return Err(format!(
                "{name} no longer matches exactly but triage classification is exact-pass"
            ));
        }

        if diff.matches {
            pass_rows += 1;
            println!(
                "[golden-triage] PASS   {name:<18} class={} reason={}",
                row.classification.as_str(),
                row.reason
            );
        } else {
            review_rows += 1;
            println!(
                "[golden-triage] REVIEW {name:<18} class={} first_diff={} whole={} body={} prelude={} size={} renum={} structural={} next={}",
                row.classification.as_str(),
                diff.first_diff_line.unwrap_or(0),
                diff.whole_diffs,
                diff.body_diffs,
                diff.prelude_diffs,
                diff.size_lines,
                diff.renum_lines,
                diff.structural_lines,
                row.next_action
            );
        }
    }

    println!();
    println!("golden-triage: pass_rows={pass_rows} review_rows={review_rows}");
    Ok(TriageSummary {
        pass_rows,
        review_rows,
    })
}

fn read_triage_manifest(root: &Path) -> Result<TriageManifest, String> {
    let path = root.join("tests/golden/triage.toml");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    toml::from_str(&text).map_err(|e| format!("failed to parse {}: {e}", path.display()))
}

fn index_rows(manifest: TriageManifest) -> Result<BTreeMap<String, TriageRow>, String> {
    let mut rows = BTreeMap::new();
    for row in manifest.fixture {
        if rows.insert(row.name.clone(), row).is_some() {
            return Err("duplicate fixture row in tests/golden/triage.toml".to_string());
        }
    }
    Ok(rows)
}

fn validate_row(row: &TriageRow) -> Result<(), String> {
    if row.reason.trim().len() < 12 {
        return Err(format!("triage row {} needs a concrete reason", row.name));
    }
    if row.next_action.trim().len() < 12 {
        return Err(format!(
            "triage row {} needs a concrete next_action",
            row.name
        ));
    }
    Ok(())
}

pub fn expected_golden_names(root: &Path) -> Result<Vec<String>, String> {
    let dir = root.join("tests/golden/expected");
    let mut names = Vec::new();
    let entries =
        std::fs::read_dir(&dir).map_err(|e| format!("failed to read {}: {e}", dir.display()))?;
    for entry in entries {
        let entry = entry.map_err(|e| format!("failed to read {} entry: {e}", dir.display()))?;
        let path = entry.path();
        if path.extension().and_then(|ext| ext.to_str()) != Some("c") {
            continue;
        }
        let Some(stem) = path.file_stem().and_then(|stem| stem.to_str()) else {
            continue;
        };
        names.push(stem.to_string());
    }
    names.sort();
    Ok(names)
}

impl DiffSummary {
    fn compare(actual: &str, expected: &str) -> Self {
        let first_diff_line = first_diff_line(actual, expected);
        let whole_diffs = line_delta_count(actual, expected);
        let actual_body = strip_prelude(actual);
        let expected_body = strip_prelude(expected);
        let body_diffs = line_delta_count(&actual_body, &expected_body);
        let mut out = DiffSummary {
            matches: actual == expected,
            first_diff_line,
            whole_diffs,
            body_diffs,
            prelude_diffs: whole_diffs.saturating_sub(body_diffs),
            ..DiffSummary::default()
        };
        classify_changed_body_lines(&actual_body, &expected_body, &mut out);
        out
    }
}

fn first_diff_line(actual: &str, expected: &str) -> Option<usize> {
    let actual_lines: Vec<&str> = actual.lines().collect();
    let expected_lines: Vec<&str> = expected.lines().collect();
    let max_len = actual_lines.len().max(expected_lines.len());
    for idx in 0..max_len {
        if actual_lines.get(idx) != expected_lines.get(idx) {
            return Some(idx + 1);
        }
    }
    None
}

fn line_delta_count(actual: &str, expected: &str) -> usize {
    let actual_lines: Vec<&str> = actual.lines().collect();
    let expected_lines: Vec<&str> = expected.lines().collect();
    let max_len = actual_lines.len().max(expected_lines.len());
    let mut count = 0usize;
    for idx in 0..max_len {
        if actual_lines.get(idx) == expected_lines.get(idx) {
            continue;
        }
        if actual_lines.get(idx).is_some() {
            count += 1;
        }
        if expected_lines.get(idx).is_some() {
            count += 1;
        }
    }
    count
}

fn strip_prelude(text: &str) -> String {
    let lines: Vec<&str> = text.lines().collect();
    let start = lines
        .iter()
        .position(|line| line.starts_with("/* Function:"))
        .unwrap_or(0);
    lines[start..].join("\n")
}

fn classify_changed_body_lines(actual: &str, expected: &str, out: &mut DiffSummary) {
    let actual_lines: Vec<&str> = actual.lines().collect();
    let expected_lines: Vec<&str> = expected.lines().collect();
    let max_len = actual_lines.len().max(expected_lines.len());
    for idx in 0..max_len {
        if actual_lines.get(idx) == expected_lines.get(idx) {
            continue;
        }
        for line in [actual_lines.get(idx), expected_lines.get(idx)]
            .into_iter()
            .flatten()
        {
            classify_changed_line(line, out);
        }
    }
}

fn classify_changed_line(line: &str, out: &mut DiffSummary) {
    if is_size_line(line) {
        out.size_lines += 1;
    } else if contains_numbered_identifier(line) {
        out.renum_lines += 1;
    } else {
        out.structural_lines += 1;
    }
}

fn is_size_line(line: &str) -> bool {
    line.contains("Size: 0x") && line.contains(" bytes)")
}

fn contains_numbered_identifier(line: &str) -> bool {
    let bytes = line.as_bytes();
    let mut idx = 0usize;
    while idx + 1 < bytes.len() {
        let before_ok = idx == 0 || !is_ident_byte(bytes[idx - 1]);
        if before_ok && matches!(bytes[idx], b'a' | b'c' | b'v') && bytes[idx + 1].is_ascii_digit()
        {
            let mut end = idx + 2;
            while end < bytes.len() && bytes[end].is_ascii_digit() {
                end += 1;
            }
            if end == bytes.len() || !is_ident_byte(bytes[end]) {
                return true;
            }
            idx = end;
        } else {
            idx += 1;
        }
    }
    false
}

fn is_ident_byte(byte: u8) -> bool {
    byte.is_ascii_alphanumeric() || byte == b'_'
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn diff_summary_splits_prelude_and_body() {
        let expected = "typedef int old;\n/* Function: f */\n// Size: 0x1 (1 bytes)\nint f(void) {\n    v1 = 1;\n}\n";
        let actual = "typedef int new;\n/* Function: f */\n// Size: 0x2 (2 bytes)\nint f(void) {\n    v2 = 1;\n    return 0;\n}\n";
        let diff = DiffSummary::compare(actual, expected);
        assert!(!diff.matches);
        assert_eq!(diff.first_diff_line, Some(1));
        assert!(diff.prelude_diffs > 0);
        assert!(diff.body_diffs > 0);
        assert!(diff.size_lines > 0);
        assert!(diff.renum_lines > 0);
        assert!(diff.structural_lines > 0);
    }

    #[test]
    fn numbered_identifier_detection_uses_identifier_boundaries() {
        assert!(contains_numbered_identifier("    v12 = c3 + a1;"));
        assert!(!contains_numbered_identifier("    value12 = 1;"));
    }
}
