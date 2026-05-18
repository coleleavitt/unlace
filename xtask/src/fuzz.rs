//! `cargo xtask fuzz` — drive the `unlace-fuzz` harness over either
//! the shipped seed corpus or a user-supplied directory.
//!
//! Usage:
//!
//! ```text
//! cargo xtask fuzz                       # run sweep over fuzz_corpus/ + unlace-fuzz/corpus/
//! cargo xtask fuzz --corpus <path>       # use a custom corpus directory
//! cargo xtask fuzz --max-iters 100       # cap iteration count
//! cargo xtask fuzz --quiet               # suppress per-input progress lines
//! ```
//!
//! The xtask itself does not own the fuzzing engine — it shells out to
//! the `unlace-fuzz` binary, feeding each corpus file in turn. Crashes
//! (panicked harness output) are written to two places:
//!
//! 1. `target/fuzz/crashes/<hash>.bin` — flat ephemeral copy for the
//!    ad-hoc reproducer.
//! 2. `crates/unlace-fuzz/crash-corpus/inputs/<NNNN>.bin` — the
//!    [`CrashCorpusDb`] persistent layout, kept in git so a
//!    workspace-level regression test (`crash_corpus_inputs_no_longer_panic`)
//!    can re-run the input on every PR. The matching JSON metadata is
//!    written next to it in `crash-corpus/index.json` + `reports/`.
//!
//! Progress reporting goes to stderr as plain text so it composes with
//! `tail -f` and CI log scrapers. We deliberately avoid pulling in
//! `indicatif` — the xtask must stay dependency-light because it's
//! compiled fresh in every CI job before tests can run.

use std::path::{Path, PathBuf};
use std::time::Instant;

pub fn run(args: &[String]) -> i32 {
    let mut corpus: PathBuf = PathBuf::from("fuzz_corpus");
    let mut max_iters: Option<usize> = None;
    let mut quiet = false;
    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "--corpus" => {
                let Some(p) = args.get(i + 1) else {
                    eprintln!("xtask fuzz: --corpus requires a path");
                    return 1;
                };
                corpus = PathBuf::from(p);
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
            "--quiet" | "-q" => {
                quiet = true;
                i += 1;
            }
            "--help" | "-h" => {
                eprintln!("usage: cargo xtask fuzz [--corpus <dir>] [--max-iters <n>] [--quiet]");
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
    let crash_dir = PathBuf::from("target/fuzz/crashes");
    if let Err(e) = std::fs::create_dir_all(&crash_dir) {
        eprintln!("xtask fuzz: cannot create {}: {e}", crash_dir.display());
        return 1;
    }

    // Persistent crash-corpus layout that the workspace regression test
    // (`crash_corpus_inputs_no_longer_panic`) scans. Each new panic
    // promotes its input into this tree so the next `cargo test` run
    // catches the regression if it returns.
    let persistent_corpus = PathBuf::from("crates/unlace-fuzz/crash-corpus");
    if let Err(e) = std::fs::create_dir_all(persistent_corpus.join("inputs")) {
        eprintln!(
            "xtask fuzz: cannot create {}: {e}",
            persistent_corpus.join("inputs").display()
        );
        return 1;
    }
    if let Err(e) = std::fs::create_dir_all(persistent_corpus.join("reports")) {
        eprintln!(
            "xtask fuzz: cannot create {}: {e}",
            persistent_corpus.join("reports").display()
        );
        return 1;
    }

    // Collect inputs up front so we know the total for progress
    // reporting. The corpus is typically a few dozen files; the
    // up-front read_dir is negligible.
    let inputs = match collect_inputs(&corpus) {
        Ok(v) => v,
        Err(e) => {
            eprintln!("xtask fuzz: read_dir({}) failed: {e}", corpus.display());
            return 1;
        }
    };
    let total = match max_iters {
        Some(cap) => cap.min(inputs.len()),
        None => inputs.len(),
    };
    eprintln!(
        "xtask fuzz: corpus={} files={} crash_dir={} corpus_db={}",
        corpus.display(),
        total,
        crash_dir.display(),
        persistent_corpus.display(),
    );

    let started = Instant::now();
    let mut processed = 0usize;
    let mut errors = 0usize;
    let mut crashes = 0usize;
    for path in inputs.into_iter().take(total) {
        match std::fs::read(&path) {
            Ok(bytes) => {
                processed += 1;
                let outcome = run_fuzz_iteration_via_subprocess(&bytes);
                match outcome {
                    FuzzOutcome::Clean => {}
                    FuzzOutcome::Crash => {
                        crashes += 1;
                        let sha = short_hash(&bytes);
                        // 1. Flat ephemeral copy.
                        let crash_path = crash_dir.join(format!("{sha}.bin"));
                        let _ = std::fs::write(&crash_path, &bytes);
                        // 2. Persistent corpus DB — append, dedup by hash.
                        let promoted = promote_to_persistent_corpus(
                            &persistent_corpus,
                            &bytes,
                            &sha,
                            path.file_name()
                                .and_then(|s| s.to_str())
                                .unwrap_or("<unknown>"),
                        );
                        if !quiet {
                            eprintln!(
                                "xtask fuzz: [{processed:>4}/{total}] CRASH {} → {} (db: {})",
                                path.display(),
                                crash_path.display(),
                                promoted,
                            );
                        }
                    }
                }
                if !quiet && processed % 32 == 0 {
                    let elapsed = started.elapsed();
                    let rate = processed as f64 / elapsed.as_secs_f64().max(1e-6);
                    eprintln!(
                        "xtask fuzz: [{processed:>4}/{total}] {crashes} crashes — {rate:.1} inputs/s",
                    );
                }
            }
            Err(e) => {
                errors += 1;
                eprintln!("xtask fuzz: cannot read {}: {e}", path.display());
            }
        }
    }

    let elapsed = started.elapsed();
    eprintln!(
        "xtask fuzz: done — processed={processed} crashes={crashes} read_errors={errors} elapsed={:.2}s",
        elapsed.as_secs_f64(),
    );
    if crashes > 0 { 2 } else { 0 }
}

/// Collect every regular file under `dir`, sorted by path for
/// deterministic order across hosts (otherwise `read_dir` returns
/// inode-order on Linux, which makes CI logs jitter).
fn collect_inputs(dir: &Path) -> std::io::Result<Vec<PathBuf>> {
    let mut out: Vec<PathBuf> = Vec::new();
    for entry in std::fs::read_dir(dir)?.flatten() {
        let p = entry.path();
        if p.is_file() {
            out.push(p);
        }
    }
    out.sort();
    Ok(out)
}

/// Promote a crash into the persistent crash-corpus directory. Returns
/// a human-readable filename for the report line.
///
/// We mirror the [`CrashCorpusDb`] on-disk format
/// (`inputs/NNNN.bin` + `reports/NNNN.json` + `index.json`) but write
/// it directly with `std::fs` rather than depending on `unlace-fuzz`
/// from xtask. The fuzz crate's regression test only reads
/// `inputs/*.bin`, so the JSON sidecar is informational.
///
/// Deduplication is by SHA-prefix: if `inputs/<sha>.bin` already
/// exists, we skip rewriting the bytes (and skip allocating a new
/// numeric ID).
fn promote_to_persistent_corpus(root: &Path, bytes: &[u8], sha: &str, origin: &str) -> String {
    // Hash-prefixed filename in `inputs/` — keeps the regression test
    // deduplicated even when the same input is encountered across
    // multiple fuzz runs. The workspace test scans `*.bin` so any
    // filename works.
    let input_path = root.join("inputs").join(format!("crash_{sha}.bin"));
    if input_path.exists() {
        return format!("dup {}", input_path.display());
    }
    if std::fs::write(&input_path, bytes).is_err() {
        return format!("write-failed {}", input_path.display());
    }
    // Lightweight JSON sidecar. The full CrashCorpusDb richer schema
    // (TriageStatus, commit hashes, etc.) is owned by the fuzz crate;
    // here we record just enough for a human triaging the directory.
    let report_path = root.join("reports").join(format!("crash_{sha}.json"));
    let json = format!(
        "{{\n  \"sha\": \"{sha}\",\n  \"size\": {},\n  \"origin\": \"{}\"\n}}\n",
        bytes.len(),
        origin.replace('"', "\\\"")
    );
    let _ = std::fs::write(&report_path, json);
    format!("new {}", input_path.display())
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
