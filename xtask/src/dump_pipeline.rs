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
//! [`unlace_passes::validate_named_phase_monotonicity`]) and the
//! human-readable reason registered for each in
//! [`unlace_passes::canonical_pipeline_backedge_exceptions`] (Batch 16).
//! Then it consults
//! [`unlace_passes::validate_named_phase_monotonicity_with_exceptions`]
//! and exits non-zero if any backedge is unexplained — that's the CI
//! gate: a representative decompile can explain its scheduler order
//! without ambiguous warnings, and inserting a pass into the wrong
//! phase makes this command fail.

use unlace_passes::{
    PassPhase, canonical_pipeline_backedge_exceptions, canonical_pipeline_descriptor,
    validate_named_phase_monotonicity, validate_named_phase_monotonicity_with_exceptions,
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

    // Raw monotonicity: list every backward transition, with its
    // registered exception reason (Batch 16). Each backedge MUST be
    // covered, otherwise the exception-aware check below surfaces it
    // as an unexplained anomaly.
    let allowed = canonical_pipeline_backedge_exceptions();
    match validate_named_phase_monotonicity(&desc) {
        Ok(()) => {
            println!("phase monotonicity: OK (no out-of-order transitions)");
        }
        Err(violations) => {
            println!(
                "phase monotonicity: {} backward transition(s), \
                 {} explicitly allowed:",
                violations.len(),
                allowed.len()
            );
            for (i, pair) in desc.windows(2).enumerate() {
                let prev = pair[0];
                let next = pair[1];
                if next.phase.ordinal() < prev.phase.ordinal() {
                    let reason = allowed
                        .iter()
                        .find(|e| e.prev_name == prev.name && e.next_name == next.name)
                        .map(|e| e.reason)
                        .unwrap_or("UNEXPLAINED — register an AllowedBackedge");
                    println!(
                        "  at index {idx}: {next_name} [{next_phase:?}] \
                         follows {prev_name} [{prev_phase:?}] — {reason}",
                        idx = i + 1,
                        next_name = next.name,
                        next_phase = next.phase,
                        prev_name = prev.name,
                        prev_phase = prev.phase,
                    );
                }
            }
        }
    }
    println!();
    match validate_named_phase_monotonicity_with_exceptions(&desc) {
        Ok(()) => {
            println!(
                "exception-aware monotonicity: OK \
                 (every backward transition is covered by a registered \
                 AllowedBackedge — see \
                 unlace_passes::canonical_pipeline_backedge_exceptions)"
            );
        }
        Err(violations) => {
            println!(
                "exception-aware monotonicity: FAIL — \
                 {} unexplained backward transition(s):",
                violations.len()
            );
            for v in &violations {
                println!("  {}", v.to_message());
            }
            println!(
                "  register a matching AllowedBackedge in \
                 unlace_passes::canonical_pipeline_backedge_exceptions \
                 or fix the schedule."
            );
            std::process::exit(1);
        }
    }
}
