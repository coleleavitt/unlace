//! `cargo xtask corpus`: the real-world `-O2` measurement corpus.
//!
//! Builds every program in `tests/corpus/corpus.toml` with each toolchain in
//! [`build::Toolchain`], decompiles the stripped and unstripped binaries with
//! unlace, and measures each source function's output: flag variables,
//! gotos, empty blocks, dead stores, leaked temporaries, raw stack accesses,
//! prototype arity against DWARF, line count against the source, and
//! recompile-and-run equivalence. Results go to `<target>/corpus/corpus.json`
//! and `corpus.md`; the decompiled C of every build is kept under
//! `<target>/corpus/c/` for before/after diffs.
//!
//! [`gate`] is the entry point for `cargo xtask gate`: it fails when any
//! counter got worse than `tests/corpus/baseline.json`.

mod build;
mod external;
mod listing;
mod manifest;
mod metrics;
mod oracle;
mod recompile;
mod report;

use std::collections::BTreeMap;
use std::fs::File;
use std::path::{Path, PathBuf};
use std::process::{Command, Stdio};
use std::sync::Mutex;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::time::{Duration, Instant};

use build::{Builder, BuiltProgram, Config, Toolchain, Variant};
use listing::Listing;
use manifest::{Manifest, Program};
use oracle::BuildTruth;
use recompile::{Equivalence, Harness};
use report::{Arity, ConfigReport, FunctionReport, ProgramInfo, ProgramReport, Totals};
pub use report::{Baseline, Report};

use crate::cargo_bin;

/// Default location of the external binary corpus (see `--external`).
pub const DEFAULT_EXTERNAL_CORPUS: &str = "/home/cole/SiteResearch/ida-rs-corpus";

/// Whole-binary wall clock limit for one `unlace decompile`.
const DECOMPILE_TIMEOUT: Duration = Duration::from_secs(300);
/// Per-function limit passed to unlace. Generous so a loaded machine does
/// not turn a slow function into a missing one and make the gate flaky.
const FUNCTION_TIMEOUT_SECS: &str = "120";

#[derive(Debug, Clone, Default)]
pub struct CorpusOptions {
    /// Worker threads; 0 picks half the available parallelism (at most 8).
    pub jobs: usize,
    /// Restrict to these programs; all when empty.
    pub programs: Vec<String>,
    pub skip_recompile: bool,
    /// Directory holding an external `manifest.json` corpus; `None` skips it.
    pub external_corpus: Option<PathBuf>,
    /// `--engine <name>`: analysis engine to measure instead of unlace's default.
    pub engine: Option<String>,
}

impl CorpusOptions {
    fn jobs(&self) -> usize {
        if self.jobs > 0 {
            return self.jobs;
        }
        std::thread::available_parallelism().map_or(2, |n| (n.get() / 2).clamp(1, 8))
    }
}

pub fn corpus_dir(root: &Path) -> PathBuf {
    root.join("tests/corpus")
}

pub fn out_dir(root: &Path) -> PathBuf {
    std::env::var_os("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|| root.join("target"))
        .join("corpus")
}

fn baseline_path(root: &Path) -> PathBuf {
    corpus_dir(root).join("baseline.json")
}

/// Measures the full corpus with default options and compares it against the
/// committed baseline. `Err` lists every regressed counter.
pub fn gate(root: &Path) -> Result<Report, String> {
    let unlace = cargo_bin::build_unlace_bin(root)?;
    let report = measure(root, &unlace, &CorpusOptions::default())?;
    write_outputs(&out_dir(root), &report)?;
    let comparison = report::compare(&read_baseline(root)?, &Baseline::of(&report));
    for skipped in &comparison.skipped {
        println!("corpus: not compared: {skipped}");
    }
    if comparison.regressions.is_empty() {
        return Ok(report);
    }
    Err(comparison
        .regressions
        .iter()
        .map(|r| format!("{}: {} {} -> {}", r.config, r.metric, r.baseline, r.current))
        .collect::<Vec<_>>()
        .join("\n"))
}

fn read_baseline(root: &Path) -> Result<Baseline, String> {
    let path = baseline_path(root);
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    serde_json::from_str(&text).map_err(|e| format!("failed to decode {}: {e}", path.display()))
}

pub fn write_outputs(out_dir: &Path, report: &Report) -> Result<(), String> {
    std::fs::create_dir_all(out_dir)
        .map_err(|e| format!("failed to create {}: {e}", out_dir.display()))?;
    let json = serde_json::to_string_pretty(report)
        .map_err(|e| format!("failed to encode report: {e}"))?;
    write(&out_dir.join("corpus.json"), &(json + "\n"))?;
    write(&out_dir.join("corpus.md"), &report::markdown(report))
}

fn write(path: &Path, text: &str) -> Result<(), String> {
    std::fs::write(path, text).map_err(|e| format!("failed to write {}: {e}", path.display()))
}

/// Builds, decompiles and measures the corpus.
pub fn measure(root: &Path, unlace: &Path, options: &CorpusOptions) -> Result<Report, String> {
    let corpus_dir = corpus_dir(root);
    let out_dir = out_dir(root);
    let manifest = Manifest::read(&corpus_dir)?;
    let programs: Vec<&Program> = manifest
        .programs
        .iter()
        .filter(|p| options.programs.is_empty() || options.programs.contains(&p.name))
        .collect();
    if programs.is_empty() {
        return Err("corpus: no program matches the filter".to_string());
    }
    let jobs = options.jobs();
    std::fs::create_dir_all(&out_dir)
        .map_err(|e| format!("failed to create {}: {e}", out_dir.display()))?;
    let unlace = Decompiler {
        binary: unlace,
        config: out_dir.join("unlace-defaults.toml"),
    };
    let engine = match &options.engine {
        Some(engine) => format!("\n[engine]\ndefault = \"{engine}\"\n"),
        None => String::new(),
    };
    write(
        &unlace.config,
        &format!(
            "# Empty on purpose: the corpus measures unlace's default configuration,\n# not ./unlace.toml or the user's config.\n{engine}"
        ),
    )?;
    let builder = Builder {
        corpus_dir: &corpus_dir,
        out_dir: &out_dir.join("bin"),
    };

    let mut toolchains = Vec::new();
    let mut versions = BTreeMap::new();
    let mut unavailable = BTreeMap::new();
    for toolchain in Toolchain::ALL {
        match toolchain
            .version()
            .and_then(|v| builder.prepare(toolchain).map(|()| v))
        {
            Ok(version) => {
                versions.insert(toolchain.to_string(), version);
                toolchains.push(toolchain);
            }
            Err(reason) => {
                unavailable.insert(toolchain.to_string(), reason);
            }
        }
    }

    let builds: Vec<(&Program, Toolchain)> = programs
        .iter()
        .flat_map(|&p| toolchains.iter().map(move |&t| (p, t)))
        .collect();
    progress(format_args!("building {} binaries", builds.len() * 2));
    let built: BTreeMap<(&str, Toolchain), Result<BuiltProgram, String>> =
        parallel_map(&builds, jobs, |&(p, t)| {
            ((p.name.as_str(), t), builder.build(t, p))
        })
        .into_iter()
        .collect();

    let c_dir = out_dir.join("c");
    let decompiles: Vec<(&Program, Toolchain, Variant, PathBuf)> = builds
        .iter()
        .filter_map(|&(p, t)| Some((p, t, built[&(p.name.as_str(), t)].as_ref().ok()?)))
        .flat_map(|(p, t, b)| {
            Variant::ALL
                .into_iter()
                .map(move |v| (p, t, v, b.binary(v).to_path_buf()))
        })
        .collect();
    progress(format_args!("decompiling {} binaries", decompiles.len()));
    let decompiled: BTreeMap<(&str, Config), Result<String, String>> =
        parallel_map(&decompiles, jobs, |(p, t, v, binary)| {
            let c = c_dir.join(t.as_str()).join(format!(
                "{}{}.c",
                p.name,
                if *v == Variant::Stripped {
                    ".stripped"
                } else {
                    ""
                }
            ));
            let config = Config {
                toolchain: *t,
                variant: *v,
            };
            ((p.name.as_str(), config), unlace.decompile(binary, &c))
        })
        .into_iter()
        .collect();

    let truths: BTreeMap<(&str, Toolchain), Result<BuildTruth, String>> =
        parallel_map(&builds, jobs, |&(p, t)| {
            let truth = built[&(p.name.as_str(), t)]
                .as_ref()
                .map_err(Clone::clone)
                .and_then(|b| oracle::read(&b.unstripped, &p.sources));
            ((p.name.as_str(), t), truth)
        })
        .into_iter()
        .collect();
    let sources: BTreeMap<PathBuf, String> = programs
        .iter()
        .flat_map(|p| p.sources.iter())
        .filter_map(|s| Some((s.clone(), std::fs::read_to_string(corpus_dir.join(s)).ok()?)))
        .collect();

    let recompiled = if options.skip_recompile {
        BTreeMap::new()
    } else {
        recompile_all(
            &corpus_dir,
            &out_dir,
            &builds,
            &built,
            &truths,
            &decompiled,
            jobs,
        )
    };

    let configs = toolchains
        .iter()
        .flat_map(|&toolchain| {
            Variant::ALL
                .into_iter()
                .map(move |variant| Config { toolchain, variant })
        })
        .map(|config| {
            let programs: Vec<ProgramReport> = programs
                .iter()
                .map(|p| {
                    let key = (p.name.as_str(), config.toolchain);
                    program_report(
                        p,
                        config,
                        &built[&key],
                        &truths[&key],
                        decompiled.get(&(p.name.as_str(), config)),
                        &sources,
                        &recompiled,
                    )
                })
                .collect();
            ConfigReport {
                config,
                totals: Totals::of(&programs),
                programs,
            }
        })
        .collect();

    let external = match &options.external_corpus {
        Some(dir) => measure_external(dir, &unlace, &out_dir, jobs)?,
        None => Vec::new(),
    };

    Ok(Report {
        schema: report::SCHEMA,
        toolchains: versions,
        unavailable,
        programs: programs
            .iter()
            .map(|p| ProgramInfo {
                name: p.name.clone(),
                summary: p.summary.clone(),
                origin: p.origin.clone(),
            })
            .collect(),
        configs,
        external,
    })
}

type RecompileKey<'a> = (&'a str, Config, u64);

fn recompile_all<'a>(
    corpus_dir: &Path,
    out_dir: &Path,
    builds: &[(&'a Program, Toolchain)],
    built: &BTreeMap<(&'a str, Toolchain), Result<BuiltProgram, String>>,
    truths: &BTreeMap<(&'a str, Toolchain), Result<BuildTruth, String>>,
    decompiled: &BTreeMap<(&'a str, Config), Result<String, String>>,
    jobs: usize,
) -> BTreeMap<RecompileKey<'a>, Equivalence> {
    let work = out_dir.join("work");
    let _ = std::fs::remove_dir_all(&work);
    let freestanding_rt = out_dir
        .join("bin")
        .join(Toolchain::ClangAarch64Freestanding.as_str())
        .join("freestanding-rt.o");
    let ready: Vec<_> = builds
        .iter()
        .filter_map(|&(p, t)| {
            let key = (p.name.as_str(), t);
            Some((
                p,
                t,
                built[&key].as_ref().ok()?,
                truths[&key].as_ref().ok()?,
            ))
        })
        .collect();
    progress(format_args!(
        "preparing {} recompile harnesses",
        ready.len()
    ));
    let harnesses: Vec<_> = parallel_map(&ready, jobs, |&(p, t, b, truth)| {
        let dir = work.join(t.as_str()).join(&p.name);
        (
            p,
            t,
            truth,
            Harness::prepare(corpus_dir, dir, p, t, &b.unstripped, &freestanding_rt),
        )
    });

    let mut cases = Vec::new();
    for (p, t, truth, harness) in &harnesses {
        let Ok(harness) = harness else {
            continue;
        };
        for variant in Variant::ALL {
            let config = Config {
                toolchain: *t,
                variant,
            };
            if let Some(Ok(c)) = decompiled.get(&(p.name.as_str(), config)) {
                for &addr in truth.functions.keys() {
                    cases.push((p.name.as_str(), config, addr, harness, *truth, c.as_str()));
                }
            }
        }
    }
    progress(format_args!("recompiling {} functions", cases.len()));
    parallel_map(&cases, jobs, |&(name, config, addr, harness, truth, c)| {
        let listing = Listing::parse(c);
        let result = match listing.by_addr(addr) {
            Some(function) => harness.check(
                &listing,
                truth,
                function,
                &format!("{}-{addr:x}", config.variant.as_str()),
            ),
            None => Equivalence::Untestable("not in decompiled output".to_string()),
        };
        ((name, config, addr), result)
    })
    .into_iter()
    .collect()
}

fn program_report(
    program: &Program,
    config: Config,
    built: &Result<BuiltProgram, String>,
    truth: &Result<BuildTruth, String>,
    decompiled: Option<&Result<String, String>>,
    sources: &BTreeMap<PathBuf, String>,
    recompiled: &BTreeMap<RecompileKey<'_>, Equivalence>,
) -> ProgramReport {
    let failed = |error: &String| ProgramReport {
        name: program.name.clone(),
        error: Some(error.clone()),
        functions: Vec::new(),
    };
    let truth = match (built, truth, decompiled) {
        (Err(e), _, _) | (_, Err(e), _) | (_, _, Some(Err(e))) => return failed(e),
        (_, _, None) => return failed(&"not decompiled".to_string()),
        (Ok(_), Ok(truth), Some(Ok(_))) => truth,
    };
    let Some(Ok(c)) = decompiled else {
        unreachable!("matched above");
    };
    let listing = Listing::parse(c);
    let functions = truth
        .functions
        .values()
        .map(|f| {
            let printed = listing.by_addr(f.addr);
            FunctionReport {
                symbol: f.symbol.clone(),
                addr: format!("{:#x}", f.addr),
                source: format!("{}:{}", f.source_file.display(), f.decl_line),
                source_lines: sources
                    .get(&f.source_file)
                    .and_then(|text| oracle::source_lines(text, f.decl_line)),
                metrics: printed.map(|p| metrics::measure(p.body)),
                arity: match printed {
                    Some(p) if !f.is_clone() => Some(Arity {
                        expected: f.params,
                        printed: p.signature.params,
                        variadic: f.variadic,
                    }),
                    _ => None,
                },
                recompile: recompiled
                    .get(&(program.name.as_str(), config, f.addr))
                    .cloned(),
            }
        })
        .collect();
    ProgramReport {
        name: program.name.clone(),
        error: None,
        functions,
    }
}

fn measure_external(
    dir: &Path,
    unlace: &Decompiler<'_>,
    out_dir: &Path,
    jobs: usize,
) -> Result<Vec<report::ExternalReport>, String> {
    let binaries = external::binaries(dir)?;
    progress(format_args!(
        "decompiling {} external binaries",
        binaries.len()
    ));
    let c_dir = out_dir.join("c").join("external");
    Ok(parallel_map(&binaries, jobs, |binary| {
        let c = c_dir.join(format!("{}.c", binary.name));
        external::measure(binary, unlace.decompile(&dir.join(&binary.path), &c))
    }))
}

/// The unlace binary under measurement, run with an empty configuration.
struct Decompiler<'a> {
    binary: &'a Path,
    config: PathBuf,
}

impl Decompiler<'_> {
    /// Whole-binary `unlace decompile --emit c`, written to `out` and returned.
    fn decompile(&self, binary: &Path, out: &Path) -> Result<String, String> {
        if let Some(parent) = out.parent() {
            std::fs::create_dir_all(parent)
                .map_err(|e| format!("failed to create {}: {e}", parent.display()))?;
        }
        let stderr_path = out.with_extension("stderr");
        let stderr = File::create(&stderr_path)
            .map_err(|e| format!("failed to create {}: {e}", stderr_path.display()))?;
        let mut child = Command::new(self.binary)
            .arg("--config")
            .arg(&self.config)
            .args([
                "decompile",
                "--emit",
                "c",
                "--timeout",
                FUNCTION_TIMEOUT_SECS,
                "--output",
            ])
            .arg(out)
            .arg(binary)
            .env_remove("RUST_LOG")
            .stdin(Stdio::null())
            .stdout(Stdio::null())
            .stderr(stderr)
            .spawn()
            .map_err(|e| format!("failed to spawn unlace: {e}"))?;
        let start = Instant::now();
        let status = loop {
            if let Some(status) = child
                .try_wait()
                .map_err(|e| format!("failed to wait for unlace: {e}"))?
            {
                break status;
            }
            if start.elapsed() > DECOMPILE_TIMEOUT {
                let _ = child.kill();
                let _ = child.wait();
                return Err(format!(
                    "decompile timed out after {}s",
                    DECOMPILE_TIMEOUT.as_secs()
                ));
            }
            std::thread::sleep(Duration::from_millis(20));
        };
        if !status.success() {
            let stderr = std::fs::read_to_string(&stderr_path).unwrap_or_default();
            let last = stderr
                .lines()
                .rev()
                .find(|l| !l.trim().is_empty())
                .unwrap_or("no stderr");
            return Err(format!("unlace exited with {status}: {last}"));
        }
        std::fs::read_to_string(out).map_err(|e| format!("failed to read {}: {e}", out.display()))
    }
}

/// Maps `f` over `items` on `jobs` threads, preserving input order.
fn parallel_map<T: Sync, R: Send>(items: &[T], jobs: usize, f: impl Fn(&T) -> R + Sync) -> Vec<R> {
    let next = AtomicUsize::new(0);
    let results: Mutex<Vec<Option<R>>> = Mutex::new(items.iter().map(|_| None).collect());
    std::thread::scope(|scope| {
        for _ in 0..jobs.min(items.len()).max(1) {
            scope.spawn(|| {
                loop {
                    let index = next.fetch_add(1, Ordering::Relaxed);
                    let Some(item) = items.get(index) else {
                        break;
                    };
                    let result = f(item);
                    results.lock().expect("corpus worker panicked")[index] = Some(result);
                }
            });
        }
    });
    results
        .into_inner()
        .expect("corpus worker panicked")
        .into_iter()
        .map(|r| r.expect("every item processed"))
        .collect()
}

fn progress(message: std::fmt::Arguments<'_>) {
    eprintln!("corpus: {message}");
}

/// `cargo xtask corpus [--jobs N] [--program NAME]... [--skip-recompile]
/// [--external DIR | --no-external] [--update-baseline]`, or
/// `cargo xtask corpus --check` to run [`gate`].
pub fn run(root: &Path, args: &[String]) -> i32 {
    match run_cli(root, args) {
        Ok(code) => code,
        Err(e) => {
            eprintln!("corpus: {e}");
            1
        }
    }
}

fn run_cli(root: &Path, args: &[String]) -> Result<i32, String> {
    let mut options = CorpusOptions {
        external_corpus: Some(PathBuf::from(DEFAULT_EXTERNAL_CORPUS)).filter(|p| p.is_dir()),
        ..CorpusOptions::default()
    };
    let mut check = false;
    let mut update_baseline = false;
    let mut args = args.iter();
    while let Some(arg) = args.next() {
        let mut value = |flag: &str| {
            args.next()
                .cloned()
                .ok_or_else(|| format!("{flag} needs a value"))
        };
        match arg.as_str() {
            "--jobs" => {
                options.jobs = value("--jobs")?
                    .parse()
                    .map_err(|e| format!("--jobs: {e}"))?;
            }
            "--program" => options.programs.push(value("--program")?),
            "--skip-recompile" => options.skip_recompile = true,
            "--external" => options.external_corpus = Some(PathBuf::from(value("--external")?)),
            "--no-external" => options.external_corpus = None,
            "--engine" => options.engine = Some(value("--engine")?),
            "--check" => check = true,
            "--update-baseline" => update_baseline = true,
            other => return Err(format!("unknown argument {other:?}")),
        }
    }
    let partial =
        !options.programs.is_empty() || options.skip_recompile || options.engine.is_some();
    if partial && (check || update_baseline) {
        return Err(
            "--check/--update-baseline need the full corpus with recompilation".to_string(),
        );
    }
    if check {
        return match gate(root) {
            Ok(report) => {
                println!("{}", report::totals_markdown(&report));
                println!(
                    "corpus: no regressions against {}",
                    baseline_path(root).display()
                );
                Ok(0)
            }
            Err(regressions) => {
                println!(
                    "corpus: regressions against {}:\n{regressions}",
                    baseline_path(root).display()
                );
                Ok(1)
            }
        };
    }

    let unlace = cargo_bin::build_unlace_bin(root)?;
    let report = measure(root, &unlace, &options)?;
    let out = out_dir(root);
    write_outputs(&out, &report)?;
    println!("{}", report::totals_markdown(&report));
    println!("corpus: wrote {}", out.join("corpus.md").display());

    if update_baseline {
        let baseline = Baseline::of(&report);
        let json = serde_json::to_string_pretty(&baseline)
            .map_err(|e| format!("failed to encode baseline: {e}"))?;
        write(&baseline_path(root), &(json + "\n"))?;
        let commit = Command::new("git")
            .args(["rev-parse", "--short", "HEAD"])
            .current_dir(root)
            .output()
            .ok()
            .filter(|o| o.status.success())
            .map(|o| String::from_utf8_lossy(&o.stdout).trim().to_string());
        let summary = corpus_dir(root).join("BASELINE.md");
        write(
            &summary,
            &report::baseline_markdown(&report, commit.as_deref()),
        )?;
        println!(
            "corpus: wrote {} and {}",
            baseline_path(root).display(),
            summary.display()
        );
    }
    Ok(0)
}
