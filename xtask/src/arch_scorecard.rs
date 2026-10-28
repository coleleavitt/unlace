//! `xtask arch-scorecard` — facade lifter registration scorecard (ROADMAP
//! Phase J.3).
//!
//! Enumerates every named [`ArchId`] and asks the facade [`get_lifter`] which
//! lifter answers for it, classifying each as **registered** (a real per-arch
//! lifter compiled into this build), **not enabled** (an experimental lifter
//! whose `arch-*` cargo feature is off), or **no lifter**. This gives a single,
//! trendable view of architecture breadth. Read-only; writes stdout +
//! `target/arch-scorecard.md`.

use std::path::Path;

use unlace_ir::ArchId;
use unlace_ir::arch_support::all_arches;
use unlace_lift::{LifterUnavailable, get_lifter};

pub fn run(root: &Path) {
    let mut registered: Vec<(ArchId, usize)> = Vec::new();
    let mut not_enabled: Vec<(ArchId, &'static str)> = Vec::new();
    let mut no_lifter: Vec<ArchId> = Vec::new();

    for &arch in all_arches() {
        match get_lifter(arch) {
            Ok(lifter) => registered.push((arch, lifter.register_file().registers.len())),
            Err(LifterUnavailable::NotEnabled { feature, .. }) => {
                not_enabled.push((arch, feature));
            }
            Err(LifterUnavailable::NoLifter { .. }) => no_lifter.push(arch),
        }
    }

    let total = all_arches().len();
    let mut out = String::new();
    out.push_str("# arch-scorecard\n\n");
    out.push_str(&format!(
        "Facade lifter registration: **{} / {} architectures** resolve to a lifter in \
         this build; {} are experimental and not enabled; {} have no lifter.\n\n",
        registered.len(),
        total,
        not_enabled.len(),
        no_lifter.len()
    ));

    out.push_str("## Registered\n\n");
    out.push_str("| arch | registers |\n|------|----------:|\n");
    for (arch, n) in &registered {
        out.push_str(&format!("| `{arch:?}` | {n} |\n"));
    }

    out.push_str("\n## Experimental, not enabled in this build\n\n");
    if not_enabled.is_empty() {
        out.push_str("_none_\n");
    } else {
        out.push_str("| arch | cargo feature |\n|------|---------------|\n");
        for (arch, feature) in &not_enabled {
            out.push_str(&format!("| `{arch:?}` | `{feature}` |\n"));
        }
    }

    out.push_str("\n## No lifter\n\n");
    if no_lifter.is_empty() {
        out.push_str("_none_\n");
    } else {
        for arch in &no_lifter {
            out.push_str(&format!("- `{arch:?}`\n"));
        }
    }
    out.push('\n');

    print!("{out}");

    crate::report_io::write_artifact(&root.join("target").join("arch-scorecard.md"), &out);
}
