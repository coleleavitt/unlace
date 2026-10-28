//! In-process fixture decompilation shared by the golden gates.
//!
//! Runs the same pipeline as `unlace decompile --emit c <fixture>` through
//! the `unlace-cli` library, one worker thread per core.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};
use std::sync::Mutex;
use std::sync::atomic::{AtomicUsize, Ordering};

use unlace_cli::args::EmitFormat;
use unlace_cli::decompile;
use unlace_test_harness::fixture_metrics::FIXTURE_DECOMPILE_TIMEOUT;

/// Stack size of the main thread the `unlace` binary decompiles on.
const WORKER_STACK_BYTES: usize = 8 << 20;

pub type FixtureOutputs = BTreeMap<String, Result<String, String>>;

pub fn fixture_binary(root: &Path, name: &str) -> PathBuf {
    root.join("fixtures").join(format!("{name}.elf"))
}

/// Decompile every fixture in `names` and key the C output (or the error
/// chain) by fixture name.
pub fn decompile_fixtures(root: &Path, names: &[String]) -> FixtureOutputs {
    map_parallel(names, |name| {
        decompile::decompile_to_string(
            &fixture_binary(root, name),
            None,
            EmitFormat::C,
            FIXTURE_DECOMPILE_TIMEOUT,
        )
        .map_err(|e| format!("{e:#}"))
    })
}

/// Apply `f` to every name on a pool of worker threads.
pub fn map_parallel<T: Send>(
    names: &[String],
    f: impl Fn(&str) -> T + Sync,
) -> BTreeMap<String, T> {
    let next = AtomicUsize::new(0);
    let results = Mutex::new(BTreeMap::new());
    let workers = std::thread::available_parallelism()
        .map_or(1, |n| n.get())
        .min(names.len())
        .max(1);
    std::thread::scope(|scope| {
        for _ in 0..workers {
            std::thread::Builder::new()
                .stack_size(WORKER_STACK_BYTES)
                .spawn_scoped(scope, || {
                    while let Some(name) = names.get(next.fetch_add(1, Ordering::Relaxed)) {
                        let value = f(name);
                        results
                            .lock()
                            .expect("fixture worker panicked")
                            .insert(name.clone(), value);
                    }
                })
                .expect("failed to spawn fixture worker");
        }
    });
    results.into_inner().expect("fixture worker panicked")
}

/// `--timeout` value for `unlace` child processes run by the gates.
pub fn timeout_arg() -> String {
    FIXTURE_DECOMPILE_TIMEOUT.as_secs().to_string()
}
