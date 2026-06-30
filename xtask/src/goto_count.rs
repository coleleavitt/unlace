//! `xtask goto-count` — measure `goto`/label density in unlace's own output.
//!
//! ROADMAP.md Phase A.1 (Goto Elimination) acceptance references this command:
//! "`xtask goto-count` reports <10 gotos for `medium.elf`". This is a reporting
//! tool — it never edits fixtures or tunes anything; it decompiles each fixture
//! ELF and counts emitted `goto` statements and label definitions so goto
//! reduction work has an objective, trendable signal.

use std::path::Path;
use std::process::Command;

use crate::cargo_bin;

/// Fixtures most relevant to control-flow structuring quality. Missing files
/// are skipped (the fixture set varies between checkouts).
const FIXTURES: &[&str] = &[
    "medium",
    "stripped",
    "loops",
    "branches",
    "switch_table",
    "calls",
    "cpp_exceptions",
    "cpp_vtable",
];

/// The Phase A.1 target for the headline fixture.
const MEDIUM_GOTO_TARGET: usize = 10;

pub fn run(root: &Path) -> i32 {
    let bin = match cargo_bin::build_unlace_bin(root) {
        Ok(p) => p,
        Err(e) => {
            eprintln!("goto-count: {e}");
            return 1;
        }
    };

    println!("# goto-count");
    println!();
    println!("Emitted `goto` statements and label definitions per fixture.");
    println!();
    println!("| fixture | gotos | labels |");
    println!("|---------|------:|-------:|");

    let mut total_gotos = 0usize;
    let mut total_labels = 0usize;
    let mut medium_gotos: Option<usize> = None;

    for name in FIXTURES {
        let elf = root.join("fixtures").join(format!("{name}.elf"));
        if !elf.exists() {
            continue;
        }
        let output = match decompile(&bin, &elf) {
            Ok(text) => text,
            Err(e) => {
                println!("| `{name}` | ERR | ERR |  {e}");
                continue;
            }
        };
        let gotos = count_gotos(&output);
        let labels = count_labels(&output);
        total_gotos += gotos;
        total_labels += labels;
        if *name == "medium" {
            medium_gotos = Some(gotos);
        }
        println!("| `{name}` | {gotos} | {labels} |");
    }

    println!("| **TOTAL** | {total_gotos} | {total_labels} |");
    println!();

    if let Some(g) = medium_gotos {
        let verdict = if g < MEDIUM_GOTO_TARGET {
            "✅ at/under target"
        } else {
            "⚠ above target"
        };
        println!("medium.elf: {g} gotos (target <{MEDIUM_GOTO_TARGET}) — {verdict}");
    } else {
        println!("medium.elf: not present in fixtures/");
    }

    // Reporting tool: always exit 0 so it can run in CI without gating on a
    // metric we are still driving down. Goto reduction work consumes this number.
    0
}

fn decompile(bin: &Path, elf: &Path) -> Result<String, String> {
    let output = Command::new(bin)
        .args(["decompile"])
        .arg(elf)
        .args(["--emit", "c", "--all"])
        .output()
        .map_err(|e| format!("spawn failed: {e}"))?;
    if !output.status.success() {
        return Err(format!("exit {}", output.status));
    }
    Ok(String::from_utf8_lossy(&output.stdout).into_owned())
}

/// Count `goto` statements (word-boundary `goto` followed by whitespace).
fn count_gotos(text: &str) -> usize {
    let mut n = 0;
    for line in text.lines() {
        let mut rest = line;
        while let Some(pos) = rest.find("goto") {
            let before_ok = pos == 0 || {
                let ch = rest.as_bytes()[pos - 1];
                !ch.is_ascii_alphanumeric() && ch != b'_'
            };
            let after = pos + 4;
            let after_ok = after < rest.len() && rest.as_bytes()[after].is_ascii_whitespace();
            if before_ok && after_ok {
                n += 1;
            }
            rest = &rest[pos + 4..];
        }
    }
    n
}

/// Count label definitions: a line that is just an identifier followed by `:`
/// (e.g. `LABEL_5:`), the targets of `goto`.
fn count_labels(text: &str) -> usize {
    text.lines()
        .filter(|line| {
            let t = line.trim();
            if let Some(name) = t.strip_suffix(':') {
                !name.is_empty()
                    && name.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
                    && name.chars().next().is_some_and(|c| !c.is_ascii_digit())
            } else {
                false
            }
        })
        .count()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn counts_goto_statements() {
        let c = "    goto LABEL_5;\n    x = gotoX;\n    if (a) goto end;\n";
        assert_eq!(count_gotos(c), 2);
    }

    #[test]
    fn counts_label_definitions() {
        let c = "LABEL_5:\n  x = 1;\nend:\n  return;\nnot a label\n";
        assert_eq!(count_labels(c), 2);
    }
}
