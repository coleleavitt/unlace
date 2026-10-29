//! `cargo xtask corpus-parity` — the IDA reference corpus, function by
//! function.
//!
//! `tests/golden/<arch>/` holds one Hex-Rays `.c` file per function of a
//! binary named in `tests/golden/corpus_binaries.toml`. When that binary is
//! present locally, this command decompiles exactly those functions with
//! unlace (in-process, one symbol context for the whole binary) and compares
//! each pair: the pseudo-C feature counts of [`features::FEATURES`], the
//! line and syntax-tree similarity of [`similarity`], and the goto/line
//! verdict of [`crate::address_diff`]. Without the binary it prints a
//! `skipped` summary and exits 0, so `cargo xtask gate` stays informational.
//!
//! Usage: `cargo xtask corpus-parity [--arch x86_64] [--binary PATH]
//! [--out DIR] [--only SUBSTR] [--timeout SECS] [--reuse-unlace]`

mod binaries;
pub mod features;
mod report;
mod similarity;

use std::path::{Path, PathBuf};
use std::time::Duration;

use serde::Serialize;
use unlace_cli::args::EmitFormat;
use unlace_cli::decompiler::{Decompiler, FunctionOutput};
use unlace_cli::pipeline::PipelineConfig;

use crate::address_diff::{self, FuncMetrics, Verdict};
use crate::fixture_outputs::map_parallel;
use crate::oracle_diff::{pseudo_c, unlace};
use binaries::CorpusBinary;
use features::FeatureCounts;

struct Options {
    arch: String,
    binary: Option<PathBuf>,
    out_dir: PathBuf,
    only: Option<String>,
    timeout: Duration,
    /// Re-measure the unlace C saved by an earlier run instead of decompiling.
    reuse_unlace: bool,
}

impl Options {
    fn parse(root: &Path, args: &[String]) -> Result<Self, String> {
        let mut options = Self {
            arch: "x86_64".to_string(),
            binary: None,
            out_dir: crate::cargo_bin::target_dir(root).join("corpus-parity"),
            only: None,
            timeout: PipelineConfig::default().timeout,
            reuse_unlace: false,
        };
        let mut args = args.iter();
        while let Some(arg) = args.next() {
            let mut value = || args.next().cloned().ok_or(format!("{arg} needs a value"));
            match arg.as_str() {
                "--arch" => options.arch = value()?,
                "--binary" => options.binary = Some(PathBuf::from(value()?)),
                "--out" => options.out_dir = PathBuf::from(value()?),
                "--only" => options.only = Some(value()?),
                "--timeout" => {
                    let secs: u64 = value()?.parse().map_err(|e| format!("--timeout: {e}"))?;
                    options.timeout = Duration::from_secs(secs);
                }
                "--reuse-unlace" => options.reuse_unlace = true,
                other => return Err(format!("unknown argument {other}")),
            }
        }
        Ok(options)
    }
}

/// One reference function and what unlace made of it.
#[derive(Debug, Serialize)]
pub struct FunctionRow {
    pub name: String,
    pub addr: u64,
    pub reference: Measured,
    pub unlace: Option<Measured>,
    /// Why there is no unlace side: not discovered, pipeline error, timeout.
    pub error: Option<String>,
    pub line_similarity: Option<f64>,
    pub ast_similarity: Option<f64>,
    pub verdict: Option<Verdict>,
}

/// One rendering of a function, measured.
#[derive(Debug, Serialize)]
pub struct Measured {
    pub lines: usize,
    pub gotos: usize,
    pub arity: Option<usize>,
    pub features: FeatureCounts,
    pub metrics: pseudo_c::TextMetrics,
}

impl Measured {
    fn of(text: &str) -> Self {
        let shape = FuncMetrics::extract(&pseudo_c::strip_comments(text));
        Self {
            lines: shape.lines,
            gotos: shape.gotos,
            arity: pseudo_c::parse_signature(text).map(|s| s.param_types.len()),
            features: features::count(text),
            metrics: pseudo_c::measure(text),
        }
    }

    fn shape(&self) -> FuncMetrics {
        FuncMetrics {
            lines: self.lines,
            gotos: self.gotos,
            labels: self.metrics.labels,
        }
    }
}

#[derive(Debug, Serialize)]
pub struct CorpusReport {
    pub arch: String,
    pub binary: PathBuf,
    pub ida: String,
    pub functions: Vec<FunctionRow>,
    /// Reference files whose address the manifest does not give.
    pub unmapped: Vec<String>,
    /// Reference files IDA itself could not decompile.
    pub no_pseudocode: Vec<String>,
}

pub fn run(root: &Path, args: &[String]) -> i32 {
    let options = match Options::parse(root, args) {
        Ok(o) => o,
        Err(e) => {
            eprintln!("corpus-parity: {e}");
            return 2;
        }
    };
    let corpus = match binaries::load(root, &options.arch) {
        Ok(c) => c,
        Err(e) => {
            eprintln!("corpus-parity: {e}");
            return 1;
        }
    };
    let binary = match corpus.resolve(root, options.binary.as_deref()) {
        Ok(path) => path,
        Err(unavailable) => {
            println!(
                "corpus-parity: skipped ({unavailable}; see {})",
                binaries::MANIFEST
            );
            return 0;
        }
    };
    let References {
        functions: references,
        unmapped,
        no_pseudocode,
    } = match read_references(root, &options, &corpus) {
        Ok(r) => r,
        Err(e) => {
            eprintln!("corpus-parity: {e}");
            return 1;
        }
    };
    let names: Vec<String> = references.iter().map(|(name, _, _)| name.clone()).collect();
    eprintln!(
        "comparing {} reference functions from {} against {}",
        names.len(),
        root.join("tests/golden").join(&options.arch).display(),
        binary.display()
    );

    let unlace_dir = options.out_dir.join("unlace");
    if let Err(e) = std::fs::create_dir_all(&unlace_dir) {
        eprintln!("corpus-parity: {}: {e}", unlace_dir.display());
        return 1;
    }
    let outputs = if options.reuse_unlace {
        map_parallel(&names, |name| {
            let path = unlace_dir.join(format!("{name}.c"));
            std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))
        })
    } else {
        match decompile_references(&binary, &options, &references) {
            Ok(outputs) => outputs,
            Err(e) => {
                eprintln!("corpus-parity: {e}");
                return 1;
            }
        }
    };

    let functions = references
        .into_iter()
        .map(|(name, addr, reference_text)| {
            let reference = Measured::of(&reference_text);
            match &outputs[&name] {
                Ok(text) => {
                    if !options.reuse_unlace {
                        let path = unlace_dir.join(format!("{name}.c"));
                        if let Err(e) = std::fs::write(&path, text) {
                            eprintln!("corpus-parity: {}: {e}", path.display());
                        }
                    }
                    let unlace = Measured::of(text);
                    FunctionRow {
                        verdict: Some(address_diff::compare_function(
                            &reference.shape(),
                            &unlace.shape(),
                        )),
                        line_similarity: Some(similarity::line_similarity(&reference_text, text)),
                        ast_similarity: similarity::ast_similarity(&reference_text, text),
                        name,
                        addr,
                        reference,
                        unlace: Some(unlace),
                        error: None,
                    }
                }
                Err(e) => FunctionRow {
                    name,
                    addr,
                    reference,
                    unlace: None,
                    error: Some(e.clone()),
                    line_similarity: None,
                    ast_similarity: None,
                    verdict: None,
                },
            }
        })
        .collect();
    let report = CorpusReport {
        arch: options.arch.clone(),
        binary,
        ida: corpus.ida.clone(),
        functions,
        unmapped,
        no_pseudocode,
    };

    crate::report_io::write_artifact(
        &options.out_dir.join("corpus-parity.md"),
        &report::markdown(&report),
    );
    crate::report_io::write_artifact(
        &options.out_dir.join("corpus-parity.json"),
        &serde_json::to_string_pretty(&report).expect("report serializes"),
    );
    println!("{}", report::summary_line(&report));
    0
}

type Reference = (String, u64, String);

struct References {
    /// Name, address, and Hex-Rays text of every comparable reference.
    functions: Vec<Reference>,
    /// Stems the manifest cannot map to an address.
    unmapped: Vec<String>,
    /// References IDA itself could not decompile (comment-only listings).
    no_pseudocode: Vec<String>,
}

/// Every reference `.c` of the corpus, filtered by `--only`.
fn read_references(
    root: &Path,
    options: &Options,
    corpus: &CorpusBinary,
) -> Result<References, String> {
    let dir = root.join("tests/golden").join(&options.arch);
    let entries = std::fs::read_dir(&dir).map_err(|e| format!("{}: {e}", dir.display()))?;
    let mut references = Vec::new();
    let mut unmapped = Vec::new();
    let mut no_pseudocode = Vec::new();
    for entry in entries {
        let path = entry.map_err(|e| e.to_string())?.path();
        if path.extension().is_none_or(|ext| ext != "c") {
            continue;
        }
        let stem = path
            .file_stem()
            .and_then(|s| s.to_str())
            .ok_or_else(|| format!("{}: non-UTF-8 name", path.display()))?
            .to_string();
        if options
            .only
            .as_ref()
            .is_some_and(|o| !stem.contains(o.as_str()))
        {
            continue;
        }
        let Some(addr) = corpus.address_of(&stem) else {
            unmapped.push(stem);
            continue;
        };
        let text =
            std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))?;
        // IDA's own failures are dumped as a disassembly listing in comments
        // over an empty `void sub_X(/* signature unknown */) {}` stub.
        if !has_body(&text) {
            no_pseudocode.push(stem);
            continue;
        }
        references.push((stem, addr, text));
    }
    references.sort_by_key(|(_, addr, _)| *addr);
    unmapped.sort();
    no_pseudocode.sort();
    Ok(References {
        functions: references,
        unmapped,
        no_pseudocode,
    })
}

/// Whether the function body holds any code once comments are stripped.
fn has_body(text: &str) -> bool {
    let code = pseudo_c::strip_comments(text);
    let Some(open) = code.find('{') else {
        return false;
    };
    let Some(close) = code.rfind('}') else {
        return false;
    };
    open < close && !code[open + 1..close].trim().is_empty()
}

/// Decompile the reference functions of `binary` the way `unlace decompile`
/// does, keyed by reference name.
fn decompile_references(
    binary: &Path,
    options: &Options,
    references: &[Reference],
) -> Result<crate::fixture_outputs::FixtureOutputs, String> {
    let image = unlace_cli::load::open_image(binary).map_err(|e| format!("{e:#}"))?;
    let config = PipelineConfig {
        timeout: options.timeout,
        ..PipelineConfig::default()
    };
    let decompiler = Decompiler::prepare(&image, None, &config).map_err(|e| format!("{e:#}"))?;
    let names: Vec<String> = references.iter().map(|(name, _, _)| name.clone()).collect();
    Ok(map_parallel(&names, |name| {
        let addr = references
            .iter()
            .find(|(n, _, _)| n == name)
            .map(|(_, addr, _)| *addr)
            .expect("name comes from references");
        let entry = decompiler
            .functions()
            .iter()
            .find(|f| f.addr == addr)
            .ok_or_else(|| format!("no function discovered at {addr:#x}"))?;
        match decompiler.decompile(entry, EmitFormat::C) {
            // The output carries the C prelude and external declarations;
            // keep the function itself, prototype through closing brace.
            FunctionOutput::Decompiled(text) => unlace::split_functions(&text)
                .remove(&addr)
                .map(|printed| printed.text)
                .ok_or_else(|| format!("no function banner for {addr:#x} in the output")),
            FunctionOutput::Failed(text) => Err(text.trim().to_string()),
        }
    }))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn fallback_stub_has_no_body() {
        assert!(!has_body(
            "// 0x10 call f\n\nvoid sub_10(/* signature unknown */)\n{\n    // see disassembly above\n}\n"
        ));
        assert!(has_body("int f(void)\n{\n  return 1;\n}\n"));
    }
}
