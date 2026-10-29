//! `cargo xtask status` — product scope and honest status of the workspace.
//!
//! Prints the architecture tiers (from `unlace_ir::arch_support`), which
//! lifter crates a default build compiles, placeholder counts in the
//! supported lifters (the x86/ARM to-do list), feature-gated and unwired
//! modules, source files no module tree declares, and `allow(dead_code)`
//! counts. Exits non-zero when an ungated module is unreferenced by
//! production code or a new undeclared source file appears, so unwired code
//! cannot silently join the default build. Writes `target/status.md`.

mod modules;
mod placeholders;
mod source;

use std::collections::BTreeMap;
use std::fmt::Write;
use std::path::{Path, PathBuf};

use modules::ModuleId;
use placeholders::Placeholder;
use source::Crate;

/// Ungated modules that only tests reach, kept on purpose.
const TEST_ONLY_MODULES: &[(&str, &str, &str)] = &[
    (
        "unlace-ir",
        "value_lattice",
        "Rocq-mirrored lattice core, pinned by tests/coq_conformance.rs",
    ),
    (
        "unlace-ir",
        "data_layout",
        "Rocq-mirrored layout rules, pinned by tests/layout_conformance.rs",
    ),
    (
        "unlace-ir",
        "tinfo",
        "Rocq-mirrored type-info core, pinned by tests/tinfo_conformance.rs",
    ),
];

/// Source files no module tree declares that do not compile when declared.
/// They are reported, not gated; new entries fail the check.
const KNOWN_ORPHAN_FILES: &[&str] = &[
    "crates/unlace-flirt/src/bundled_sigs.rs",
    "crates/unlace-flirt/src/fuzzy_annotation.rs",
    "crates/unlace-flirt/src/fuzzy_lookup.rs",
    "crates/unlace-flirt/src/generator.rs",
    "crates/unlace-flirt/src/library.rs",
    "crates/unlace-lift-x86/src/ops/tsx.rs",
    "crates/unlace-loader/src/eh_frame_test.rs",
    "crates/unlace-loader/src/sbpf_evm.rs",
    "crates/unlace-output/src/semantic_diff.rs",
    "crates/unlace-struct/src/compound_assign.rs",
    "xtask/src/release.rs",
];

const LIFT_FACADE: &str = "unlace-lift";
const LIFTER_PREFIX: &str = "unlace-lift-";

pub fn run(root: &Path) -> i32 {
    let crates = source::load_workspace(root);
    let report = Report::collect(root, &crates);
    let text = report.render(root);
    print!("{text}");
    crate::report_io::write_artifact(&root.join("target").join("status.md"), &text);
    if report.is_clean() { 0 } else { 1 }
}

struct LifterCrates {
    supported: Vec<String>,
    experimental: Vec<String>,
    /// Workspace lifter crates the facade does not depend on.
    unwired: Vec<String>,
}

impl LifterCrates {
    fn collect(root: &Path, crates: &[Crate]) -> Self {
        let manifest =
            std::fs::read_to_string(root.join("crates").join(LIFT_FACADE).join("Cargo.toml"))
                .ok()
                .and_then(|text| text.parse::<toml::Table>().ok())
                .unwrap_or_default();
        let deps = manifest
            .get("dependencies")
            .and_then(|d| d.as_table())
            .cloned()
            .unwrap_or_default();
        let mut supported = Vec::new();
        let mut experimental = Vec::new();
        for (name, spec) in &deps {
            if !name.starts_with(LIFTER_PREFIX) {
                continue;
            }
            let optional = spec
                .get("optional")
                .and_then(|o| o.as_bool())
                .unwrap_or(false);
            if optional {
                experimental.push(name.clone());
            } else {
                supported.push(name.clone());
            }
        }
        let unwired = crates
            .iter()
            .map(|c| &c.name)
            .filter(|n| n.starts_with(LIFTER_PREFIX) && !deps.contains_key(n.as_str()))
            .cloned()
            .collect();
        Self {
            supported,
            experimental,
            unwired,
        }
    }
}

struct Report<'a> {
    lifters: LifterCrates,
    placeholders: Vec<(&'a str, placeholders::PlaceholderCounts)>,
    gated: BTreeMap<String, Vec<ModuleId>>,
    unreferenced: Vec<ModuleId>,
    orphans: Vec<PathBuf>,
    dead_code_allows: Vec<(&'a str, usize)>,
}

impl<'a> Report<'a> {
    fn collect(root: &Path, crates: &'a [Crate]) -> Self {
        let lifters = LifterCrates::collect(root, crates);
        let orphans: Vec<PathBuf> = crates.iter().flat_map(modules::orphan_files).collect();
        let placeholders = crates
            .iter()
            .filter(|c| lifters.supported.contains(&c.name))
            .map(|c| {
                (
                    c.name.as_str(),
                    placeholders::placeholder_counts(c, &orphans),
                )
            })
            .collect();
        let wiring = modules::wiring(crates);
        let orphans = orphans
            .into_iter()
            .map(|p| p.strip_prefix(root).map(Path::to_path_buf).unwrap_or(p))
            .collect();
        let dead_code_allows = crates
            .iter()
            .map(|c| (c.name.as_str(), placeholders::dead_code_allows(c)))
            .filter(|&(_, n)| n > 0)
            .collect();
        Self {
            lifters,
            placeholders,
            gated: wiring.gated,
            unreferenced: wiring.unreferenced,
            orphans,
            dead_code_allows,
        }
    }

    fn is_test_only(module: &ModuleId) -> bool {
        TEST_ONLY_MODULES
            .iter()
            .any(|&(krate, name, _)| krate == module.krate && name == module.name)
    }

    fn ungated_unreferenced(&self) -> impl Iterator<Item = &ModuleId> {
        self.unreferenced.iter().filter(|m| !Self::is_test_only(m))
    }

    fn new_orphans(&self) -> impl Iterator<Item = &PathBuf> {
        self.orphans.iter().filter(|p| {
            !KNOWN_ORPHAN_FILES
                .iter()
                .any(|known| Path::new(known) == p.as_path())
        })
    }

    fn is_clean(&self) -> bool {
        self.ungated_unreferenced().next().is_none() && self.new_orphans().next().is_none()
    }

    fn render(&self, root: &Path) -> String {
        let mut out = String::new();
        let _ = writeln!(out, "# cargo xtask status\n");

        let _ = writeln!(out, "## Architectures\n");
        out.push_str(&unlace_ir::arch_support::support_matrix_markdown());

        let _ = writeln!(out, "\n## Lifter crates\n");
        let _ = writeln!(
            out,
            "- supported (always built): {}",
            self.lifters.supported.join(", ")
        );
        let _ = writeln!(
            out,
            "- experimental (behind `arch-*` features of `{LIFT_FACADE}`): {}",
            self.lifters.experimental.len()
        );
        let _ = writeln!(
            out,
            "- not wired into `{LIFT_FACADE}` at all: {}",
            if self.lifters.unwired.is_empty() {
                "none".to_string()
            } else {
                self.lifters.unwired.join(", ")
            }
        );

        let _ = writeln!(
            out,
            "\n## Placeholders in supported lifters (non-test code)\n"
        );
        let _ = writeln!(
            out,
            "| crate | {} |\n|-------|---:|---:|---:|",
            Placeholder::ALL.map(Placeholder::label).join(" | ")
        );
        for (name, counts) in &self.placeholders {
            let cells = Placeholder::ALL
                .map(|k| counts.total(k).to_string())
                .join(" | ");
            let _ = writeln!(out, "| `{name}` | {cells} |");
        }
        for (name, counts) in &self.placeholders {
            let _ = writeln!(out, "\nHottest files in `{name}`:\n");
            for (path, n) in counts.hottest_files(8) {
                let rel = path.strip_prefix(root).unwrap_or(path);
                let _ = writeln!(out, "- `{}`: {n}", rel.display());
            }
        }

        let _ = writeln!(out, "\n## Feature-gated modules\n");
        let _ = writeln!(
            out,
            "| feature | modules | lines | crates |\n|---------|--------:|------:|--------|"
        );
        for (feature, modules) in &self.gated {
            let lines: usize = modules.iter().map(|m| m.lines).sum();
            let mut per_crate: BTreeMap<&str, (usize, usize)> = BTreeMap::new();
            for m in modules {
                let entry = per_crate.entry(m.krate.as_str()).or_default();
                entry.0 += 1;
                entry.1 += m.lines;
            }
            let crates = per_crate
                .iter()
                .map(|(c, (n, l))| format!("{c} {n}/{l}"))
                .collect::<Vec<_>>()
                .join(", ");
            let _ = writeln!(
                out,
                "| `{feature}` | {} | {lines} | {crates} |",
                modules.len()
            );
        }

        let _ = writeln!(out, "\n## Test-only modules (kept ungated)\n");
        for &(krate, name, why) in TEST_ONLY_MODULES {
            let _ = writeln!(out, "- `{krate}::{name}`: {why}");
        }

        let _ = writeln!(out, "\n## Undeclared source files\n");
        for path in &self.orphans {
            let _ = writeln!(out, "- `{}`", path.display());
        }

        let total: usize = self.dead_code_allows.iter().map(|&(_, n)| n).sum();
        let _ = writeln!(out, "\n## `allow(dead_code)`: {total}\n");
        for (name, n) in &self.dead_code_allows {
            let _ = writeln!(out, "- `{name}`: {n}");
        }

        let _ = writeln!(out, "\n## Result\n");
        if self.is_clean() {
            let _ = writeln!(out, "OK: every unreferenced module is feature-gated.");
        } else {
            for m in self.ungated_unreferenced() {
                let _ = writeln!(
                    out,
                    "FAIL: `{}::{}` ({} lines) is not referenced by production code; \
                     gate it with #[cfg(feature = \"unwired\")] or wire it in",
                    m.krate, m.name, m.lines
                );
            }
            for path in self.new_orphans() {
                let _ = writeln!(
                    out,
                    "FAIL: `{}` is not declared by any module; declare it (gated) or remove it",
                    path.display()
                );
            }
        }
        out
    }
}
