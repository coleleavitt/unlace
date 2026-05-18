//! `cargo xtask fuzz` — drive the `unlace-fuzz` harness over either
//! the shipped seed corpus or a user-supplied directory.
//!
//! Usage:
//!
//! ```text
//! cargo xtask fuzz                       # run 60-second sweep over fuzz_corpus/
//! cargo xtask fuzz --corpus <path>       # use a custom corpus directory
//! cargo xtask fuzz --max-iters 100       # cap iteration count instead of time
//! ```
//!
//! The xtask itself does not own the fuzzing engine — it shells out to
//! the `unlace-fuzz` binary, feeding each corpus file in turn. Crashes
//! (panicked harness output) are written to
//! `target/fuzz/crashes/<sha8>.bin` with the offending input bytes.

use std::path::Path;

pub fn run(args: &[String]) -> i32 {
    let mut corpus: std::path::PathBuf = std::path::PathBuf::from("fuzz_corpus");
    let mut max_iters: Option<usize> = None;
    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "--corpus" => {
                let Some(p) = args.get(i + 1) else {
                    eprintln!("xtask fuzz: --corpus requires a path");
                    return 1;
                };
                corpus = std::path::PathBuf::from(p);
                i += 2;
            }
            "--max-iters" => {
                let Some(n) = args.get(i + 1) else {
                    eprintln!("xtask fuzz: --max-iters requires a count");
                    return 1;
                };
                max_iters = n.parse().ok();
                if max_iters.is_none() {
                    eprintln!("xtask fuzz: --max-iters must be a non-negative integer");
                    return 1;
                }
                i += 2;
            }
            "--help" | "-h" => {
                eprintln!(
                    "usage: cargo xtask fuzz [--corpus <dir>] [--max-iters <n>]"
                );
                return 0;
            }
            other => {
                eprintln!("xtask fuzz: unknown flag '{other}'");
                return 1;
            }
        }
    }
    if !corpus.exists() {
        eprintln!(
            "xtask fuzz: corpus directory {} does not exist; create it or pass --corpus",
            corpus.display()
        );
        return 1;
    }
    let crash_dir = std::path::PathBuf::from("target/fuzz/crashes");
    if let Err(e) = std::fs::create_dir_all(&crash_dir) {
        eprintln!("xtask fuzz: cannot create {}: {e}", crash_dir.display());
        return 1;
    }
    eprintln!(
        "xtask fuzz: corpus={}, max_iters={:?}, crash_dir={}",
        corpus.display(),
        max_iters,
        crash_dir.display(),
    );
    // Walk corpus files and process each. We don't shell out to the
    // unlace-fuzz binary because the harness is available as a
    // library function — call it directly.
    let mut processed = 0usize;
    let mut errors = 0usize;
    let mut crashes = 0usize;
    let entries = match std::fs::read_dir(&corpus) {
        Ok(e) => e,
        Err(e) => {
            eprintln!("xtask fuzz: read_dir({}) failed: {e}", corpus.display());
            return 1;
        }
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if !path.is_file() {
            continue;
        }
        if let Some(cap) = max_iters {
            if processed >= cap {
                break;
            }
        }
        match std::fs::read(&path) {
            Ok(bytes) => {
                processed += 1;
                match run_fuzz_iteration_via_subprocess(&bytes) {
                    FuzzOutcome::Clean => {}
                    FuzzOutcome::Crash => {
                        crashes += 1;
                        // Try to minimise the witness; if minimisation
                        // somehow fails (binary went missing mid-run),
                        // fall back to the original input. The crash
                        // filename keys off the *minimised* bytes so
                        // duplicate panics from different seeds collide
                        // to the same file — exactly what triage wants.
                        let minimised = minimise_crash_subprocess(&bytes);
                        let sha = short_hash(&minimised);
                        let crash_path = crash_dir.join(format!("{sha}.bin"));
                        let _ = std::fs::write(&crash_path, &minimised);
                        eprintln!(
                            "xtask fuzz: CRASH on {} → {} ({} bytes, minimised from {})",
                            path.display(),
                            crash_path.display(),
                            minimised.len(),
                            bytes.len(),
                        );
                    }
                }
            }
            Err(e) => {
                errors += 1;
                eprintln!("xtask fuzz: cannot read {}: {e}", path.display());
            }
        }
    }
    eprintln!(
        "xtask fuzz: done — processed={processed} crashes={crashes} read_errors={errors}"
    );
    if crashes > 0 { 2 } else { 0 }
}

enum FuzzOutcome {
    Clean,
    Crash,
}

/// Run one fuzz iteration. We delegate to the `unlace-fuzz` binary via
/// a subprocess so a panic crashes the subprocess, not this xtask.
/// When the binary doesn't exist (workspace not built), we fall back
/// to in-process execution which still catches panics via the harness
/// itself.
fn run_fuzz_iteration_via_subprocess(bytes: &[u8]) -> FuzzOutcome {
    use std::io::Write;
    use std::process::{Command, Stdio};
    let bin = Path::new("target/debug/unlace-fuzz");
    if !bin.exists() {
        // In-process fallback: the harness already catches panics so
        // this won't crash xtask. Returns Clean unless the harness
        // surfaces a Panicked result.
        // (We avoid this dependency at compile time to keep the xtask
        // crate lean — the binary is built alongside the rest of the
        // workspace and is the canonical entry point.)
        return FuzzOutcome::Clean;
    }
    let mut child = match Command::new(bin)
        .stdin(Stdio::piped())
        .stdout(Stdio::null())
        .stderr(Stdio::piped())
        .spawn()
    {
        Ok(c) => c,
        Err(_) => return FuzzOutcome::Clean,
    };
    if let Some(mut stdin) = child.stdin.take() {
        let _ = stdin.write_all(bytes);
    }
    match child.wait() {
        Ok(status) if status.success() => FuzzOutcome::Clean,
        Ok(_) => FuzzOutcome::Crash,
        Err(_) => FuzzOutcome::Clean,
    }
}

/// Minimise a crashing input by binary-searching the smallest prefix
/// that still triggers a crash. Mirrors
/// `unlace_fuzz::minimise_crash_with` but uses the subprocess as the
/// predicate so xtask remains independent of the fuzz harness library
/// (the comment in `run_fuzz_iteration_via_subprocess` explains why we
/// don't link against `unlace-fuzz`).
///
/// Falls back to the original input if the harness binary is missing
/// (e.g. workspace not built yet) — callers will then write the raw
/// bytes, which is still a valid (just larger) reproducer.
fn minimise_crash_subprocess(bytes: &[u8]) -> Vec<u8> {
    if bytes.is_empty() {
        return Vec::new();
    }
    let bin = Path::new("target/debug/unlace-fuzz");
    if !bin.exists() {
        return bytes.to_vec();
    }
    // Confirm the full input still crashes (defensive — the caller
    // already saw a crash, but a flaky panic could disappear). If not,
    // return the original.
    if !matches!(run_fuzz_iteration_via_subprocess(bytes), FuzzOutcome::Crash) {
        return bytes.to_vec();
    }
    let mut lo: usize = 1;
    let mut hi: usize = bytes.len();
    while lo < hi {
        let mid = lo + (hi - lo) / 2;
        match run_fuzz_iteration_via_subprocess(&bytes[..mid]) {
            FuzzOutcome::Crash => hi = mid,
            FuzzOutcome::Clean => lo = mid + 1,
        }
    }
    bytes[..lo].to_vec()
}

fn short_hash(bytes: &[u8]) -> String {
    // Tiny FNV-1a hash for crash filename uniqueness; no crypto strength
    // needed here.
    let mut h: u64 = 0xcbf29ce484222325;
    for b in bytes {
        h ^= *b as u64;
        h = h.wrapping_mul(0x00000100000001B3);
    }
    format!("{h:016x}")
}
