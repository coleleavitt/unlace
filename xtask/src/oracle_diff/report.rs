//! Deterministic markdown and JSON rendering for `oracle-diff`.

use std::fmt::Write as _;

use serde::Serialize;

use super::pseudo_c::TextMetrics;
use super::{BinaryDiff, FunctionRow};

const TOP_GAPS: usize = 15;

#[derive(Debug, Default, Serialize)]
pub struct Summary {
    pub hexrays_functions: usize,
    pub matched: usize,
    pub unlace_missing: usize,
    pub unlace_extra_starts: usize,
    pub arity_compared: usize,
    pub arity_match: usize,
    pub return_type_match: usize,
    pub param_slots: usize,
    pub param_type_match: usize,
    pub hexrays: TextMetrics,
    pub unlace: TextMetrics,
}

impl Summary {
    fn of(diff: &BinaryDiff) -> Self {
        let mut s = Self {
            hexrays_functions: diff.functions.len(),
            unlace_extra_starts: diff.unlace_extra_starts.len(),
            ..Self::default()
        };
        for row in &diff.functions {
            let Some(unlace) = &row.unlace else {
                s.unlace_missing += 1;
                continue;
            };
            s.matched += 1;
            s.hexrays.add(&row.hexrays.metrics);
            s.unlace.add(&unlace.metrics);
            if let Some(matches) = row.arity_matches() {
                s.arity_compared += 1;
                s.arity_match += usize::from(matches);
                s.return_type_match += usize::from(row.hexrays.return_type == unlace.return_type);
                s.param_slots += row.hexrays.param_types.len();
                s.param_type_match += row
                    .hexrays
                    .param_types
                    .iter()
                    .zip(&unlace.param_types)
                    .filter(|(h, u)| h == u)
                    .count();
            }
        }
        s
    }

    fn add(&mut self, other: &Self) {
        self.hexrays_functions += other.hexrays_functions;
        self.matched += other.matched;
        self.unlace_missing += other.unlace_missing;
        self.unlace_extra_starts += other.unlace_extra_starts;
        self.arity_compared += other.arity_compared;
        self.arity_match += other.arity_match;
        self.return_type_match += other.return_type_match;
        self.param_slots += other.param_slots;
        self.param_type_match += other.param_type_match;
        self.hexrays.add(&other.hexrays);
        self.unlace.add(&other.unlace);
    }
}

fn pct(n: usize, d: usize) -> String {
    if d == 0 {
        "-".to_string()
    } else {
        format!("{:.0}%", 100.0 * n as f64 / d as f64)
    }
}

fn pair(h: usize, u: usize) -> String {
    format!("{h} / {u}")
}

fn summary_row(name: &str, s: &Summary) -> String {
    format!(
        "| {name} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |\n",
        s.hexrays_functions,
        s.matched,
        s.unlace_extra_starts,
        pct(s.arity_match, s.arity_compared),
        pct(s.return_type_match, s.arity_compared),
        pct(s.param_type_match, s.param_slots),
        pair(s.hexrays.flag_vars, s.unlace.flag_vars),
        pair(s.hexrays.flag_helpers, s.unlace.flag_helpers),
        pair(s.hexrays.gotos, s.unlace.gotos),
        pair(s.hexrays.lvar_decls, s.unlace.lvar_decls),
        pair(s.hexrays.lines, s.unlace.lines),
        pair(
            s.hexrays.raw_derefs + s.hexrays.memory_refs,
            s.unlace.raw_derefs + s.unlace.memory_refs
        ),
        pair(s.hexrays.empty_blocks, s.unlace.empty_blocks),
    )
}

/// Per-binary table with a total row; metric pairs are `Hex-Rays / unlace`
/// summed over functions both sides printed.
pub fn summary_table(diffs: &[BinaryDiff]) -> String {
    let mut out = String::from(
        "| binary | HR fns | matched | extra starts | arity | ret type | arg types | flag vars | flag helpers | gotos | lvars | lines | raw mem | empty blocks |\n\
         |---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|\n",
    );
    let mut total = Summary::default();
    for diff in diffs {
        let s = Summary::of(diff);
        out.push_str(&summary_row(&format!("`{}`", diff.key), &s));
        total.add(&s);
    }
    out.push_str(&summary_row("**total**", &total));
    out
}

const TOP_TYPES: usize = 12;

/// Most common declared local types on each side, over matched functions.
fn type_spelling(diffs: &[BinaryDiff]) -> String {
    let mut total = Summary::default();
    for diff in diffs {
        total.add(&Summary::of(diff));
    }
    let top = |m: &TextMetrics| {
        let mut types: Vec<(&String, &usize)> = m.decl_types.iter().collect();
        types.sort_by(|a, b| b.1.cmp(a.1).then_with(|| a.0.cmp(b.0)));
        types
            .into_iter()
            .take(TOP_TYPES)
            .map(|(ty, n)| format!("`{ty}` {n}"))
            .collect::<Vec<_>>()
            .join(", ")
    };
    format!(
        "\n## Type spelling\n\nDeclared local types, most common first.\n\n- Hex-Rays: {}\n- unlace: {}\n",
        top(&total.hexrays),
        top(&total.unlace)
    )
}

struct Gap<'a> {
    key: &'a str,
    row: &'a FunctionRow,
    hexrays: usize,
    unlace: usize,
}

fn largest_gaps<'a>(diffs: &'a [BinaryDiff], metric: fn(&TextMetrics) -> usize) -> Vec<Gap<'a>> {
    let mut gaps: Vec<Gap<'a>> = diffs
        .iter()
        .flat_map(|d| d.functions.iter().map(move |row| (d.key.as_str(), row)))
        .filter_map(|(key, row)| {
            let unlace = metric(&row.unlace.as_ref()?.metrics);
            let hexrays = metric(&row.hexrays.metrics);
            (unlace > hexrays).then_some(Gap {
                key,
                row,
                hexrays,
                unlace,
            })
        })
        .collect();
    gaps.sort_by(|a, b| {
        (b.unlace - b.hexrays)
            .cmp(&(a.unlace - a.hexrays))
            .then_with(|| a.key.cmp(b.key))
            .then_with(|| a.row.ea.cmp(&b.row.ea))
    });
    gaps.truncate(TOP_GAPS);
    gaps
}

pub fn markdown(diffs: &[BinaryDiff], ida_version: &str) -> String {
    let mut out = String::new();
    let _ = writeln!(out, "# oracle-diff\n");
    let _ = writeln!(
        out,
        "Hex-Rays oracle (IDA {ida_version}) vs unlace legacy pipeline, per function matched by start address.\n\
         Metric pairs are `Hex-Rays / unlace`, summed over functions both sides printed. PLT stubs and thunks are excluded.\n\
         The Ghidra-based unlace-engine column is omitted: no such engine exists in this checkout.\n"
    );
    let _ = writeln!(out, "## Summary\n");
    out.push_str(&summary_table(diffs));
    out.push_str(&type_spelling(diffs));

    let errors: Vec<_> = diffs
        .iter()
        .filter_map(|d| Some((&d.key, d.error.as_ref()?)))
        .collect();
    if !errors.is_empty() {
        let _ = writeln!(out, "\n## Errors\n");
        for (key, error) in errors {
            let _ = writeln!(out, "- `{key}`: {error}");
        }
    }

    let metrics: [(&str, fn(&TextMetrics) -> usize); 6] = [
        ("flag variables", |m| m.flag_vars),
        ("gotos", |m| m.gotos),
        ("local declarations", |m| m.lvar_decls),
        ("lines", |m| m.lines),
        ("raw memory accesses", |m| m.raw_derefs + m.memory_refs),
        ("empty blocks", |m| m.empty_blocks),
    ];
    for (title, metric) in metrics {
        let gaps = largest_gaps(diffs, metric);
        if gaps.is_empty() {
            continue;
        }
        let _ = writeln!(out, "\n## Largest excess: {title}\n");
        let _ = writeln!(
            out,
            "| binary | function | ea | Hex-Rays | unlace |\n|---|---|---:|---:|---:|"
        );
        for g in gaps {
            let _ = writeln!(
                out,
                "| `{}` | `{}` | {:#x} | {} | {} |",
                g.key, g.row.hexrays.name, g.row.ea, g.hexrays, g.unlace
            );
        }
    }

    let _ = writeln!(out, "\n## Prototype mismatches\n");
    let _ = writeln!(
        out,
        "| binary | function | Hex-Rays | unlace |\n|---|---|---|---|"
    );
    for diff in diffs {
        for row in &diff.functions {
            let Some(unlace) = &row.unlace else { continue };
            if row.arity_matches() == Some(false) {
                let _ = writeln!(
                    out,
                    "| `{}` | `{}` | `{}` | `{}` |",
                    diff.key,
                    row.hexrays.name,
                    prototype(&row.hexrays),
                    prototype(unlace)
                );
            }
        }
    }

    let _ = writeln!(out, "\n## Function starts\n");
    for diff in diffs {
        let missing: Vec<_> = diff
            .functions
            .iter()
            .filter(|r| r.unlace.is_none())
            .map(|r| format!("`{}`", r.hexrays.name))
            .collect();
        if !missing.is_empty() {
            let _ = writeln!(
                out,
                "- `{}` missing in unlace: {}",
                diff.key,
                missing.join(", ")
            );
        }
        if !diff.unlace_extra_starts.is_empty() {
            let extra: Vec<_> = diff
                .unlace_extra_starts
                .iter()
                .map(|(ea, name)| format!("`{name}`@{ea:#x}"))
                .collect();
            let _ = writeln!(
                out,
                "- `{}` unlace-only starts: {}",
                diff.key,
                extra.join(", ")
            );
        }
    }
    out
}

fn prototype(side: &super::Side) -> String {
    let mut params = side.param_types.join(", ");
    if side.is_vararg {
        params.push_str(if params.is_empty() { "..." } else { ", ..." });
    }
    format!("{} ({params})", side.return_type.as_deref().unwrap_or("?"))
}

#[derive(Serialize)]
pub struct JsonReport<'a> {
    pub schema: u32,
    pub ida_version: &'a str,
    pub binaries: Vec<JsonBinary<'a>>,
}

#[derive(Serialize)]
pub struct JsonBinary<'a> {
    pub key: &'a str,
    pub source: &'a str,
    pub error: Option<&'a str>,
    pub summary: Summary,
    pub unlace_extra_starts: &'a [(u64, String)],
    pub functions: &'a [FunctionRow],
}

pub fn json<'a>(diffs: &'a [BinaryDiff], ida_version: &'a str) -> JsonReport<'a> {
    JsonReport {
        schema: 1,
        ida_version,
        binaries: diffs
            .iter()
            .map(|d| JsonBinary {
                key: &d.key,
                source: &d.source,
                error: d.error.as_deref(),
                summary: Summary::of(d),
                unlace_extra_starts: &d.unlace_extra_starts,
                functions: &d.functions,
            })
            .collect(),
    }
}
