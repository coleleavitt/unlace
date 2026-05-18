//! `cargo xtask dump-pipeline` — print the canonical per-function
//! pass pipeline (as scheduled by `unlace_cli::pipeline::run_passes_with_report_inner`)
//! with each pass's [`unlace_passes::PassPhase`] tag.
//!
//! Output is intentionally machine-greppable so CI / docs can pin the
//! schedule without parsing `pipeline.rs`. Format:
//!
//! ```text
//! 1. StackOffsetSnapshotPass [StackRecovery]
//! 2. NoreturnDetectPass [PreOpt]
//! 3. ConstantFoldPass [LocalOpt]
//! ...
//! ```
//!
//! After the numbered list, prints a summary line reporting the count
//! of out-of-order transitions (from
//! [`unlace_passes::validate_named_phase_monotonicity`]). The current
//! pipeline is *intentionally* not strictly monotone (see the
//! `canonical_pipeline_is_documented` test in `unlace-passes`); this
//! subcommand always exits 0 regardless — it's an introspection tool,
//! not a CI gate.

use unlace_passes::{
    PassPhase, canonical_pipeline_descriptor, validate_named_phase_monotonicity,
};

pub fn run() {
    let desc = canonical_pipeline_descriptor();
    let width = desc.len().to_string().len();
    for (i, p) in desc.iter().enumerate() {
        println!("{:>w$}. {} [{:?}]", i + 1, p.name, p.phase, w = width);
    }
    println!();
    println!("total: {} passes", desc.len());

    // Per-phase histogram so consumers can see how the schedule splits
    // across the seven canonical buckets without scanning the listing.
    let mut counts = [(PassPhase::PreOpt, 0usize); 7];
    counts[0] = (PassPhase::PreOpt, 0);
    counts[1] = (PassPhase::LocalOpt, 0);
    counts[2] = (PassPhase::GlobalOpt, 0);
    counts[3] = (PassPhase::TypeRecovery, 0);
    counts[4] = (PassPhase::StackRecovery, 0);
    counts[5] = (PassPhase::LVarAlloc, 0);
    counts[6] = (PassPhase::FinalCleanup, 0);
    for p in &desc {
        if let Some(slot) = counts.iter_mut().find(|(ph, _)| *ph == p.phase) {
            slot.1 += 1;
        }
    }
    println!();
    println!("phase histogram:");
    for (phase, n) in &counts {
        println!("  {phase:?}: {n}");
    }
    println!();
    match validate_named_phase_monotonicity(&desc) {
        Ok(()) => {
            println!("phase monotonicity: OK (no out-of-order transitions)");
        }
        Err(violations) => {
            println!(
                "phase monotonicity: {} out-of-order transition(s) \
                 (intentional in current pipeline)",
                violations.len()
            );
            for v in &violations {
                println!("  {v}");
            }
        }
    }
}
