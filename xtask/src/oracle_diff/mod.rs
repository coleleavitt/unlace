//! `xtask oracle-diff` — per-function comparison of unlace output against the
//! Hex-Rays behavioral oracle.
//!
//! The oracle is produced by `scripts/hexrays-oracle/run_oracle.py` (IDA's
//! public IDAlib API on our own test binaries). This command decompiles the
//! same binaries with unlace, matches functions by start address, and measures
//! both sides with the same text metrics: prototype arity and types, flag
//! variables, gotos, local declarations, line count, and raw memory artifacts.
//! It is a reporting tool and always exits 0 once the report is written.
//!
//! Usage: `cargo xtask oracle-diff [--oracle-dir DIR] [--out DIR] [--only SUBSTR] [--reuse-unlace]`

mod hexrays;
mod pseudo_c;
mod report;
mod unlace;

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};
use std::sync::Mutex;
use std::sync::atomic::{AtomicUsize, Ordering};

use serde::Serialize;

use crate::cargo_bin;
use pseudo_c::{Signature, TextMetrics};

struct Options {
    /// Relative oracle sources (the fixtures) resolve against the workspace root.
    root: PathBuf,
    oracle_dir: PathBuf,
    out_dir: PathBuf,
    only: Option<String>,
    /// Re-measure the unlace C saved by an earlier run instead of decompiling.
    reuse_unlace: bool,
}

impl Options {
    fn parse(root: &Path, args: &[String]) -> Result<Self, String> {
        let mut options = Self {
            root: root.to_path_buf(),
            oracle_dir: root.join("target/hexrays-oracle"),
            out_dir: root.join("target/oracle-diff"),
            only: None,
            reuse_unlace: false,
        };
        let mut args = args.iter();
        while let Some(arg) = args.next() {
            let mut value = || args.next().cloned().ok_or(format!("{arg} needs a value"));
            match arg.as_str() {
                "--oracle-dir" => options.oracle_dir = PathBuf::from(value()?),
                "--out" => options.out_dir = PathBuf::from(value()?),
                "--only" => options.only = Some(value()?),
                "--reuse-unlace" => options.reuse_unlace = true,
                other => return Err(format!("unknown argument {other}")),
            }
        }
        Ok(options)
    }
}

/// One side's view of a function.
#[derive(Debug, Clone, Serialize)]
pub struct Side {
    pub name: String,
    pub arity: Option<usize>,
    pub is_vararg: bool,
    pub return_type: Option<String>,
    pub param_types: Vec<String>,
    pub metrics: TextMetrics,
}

impl Side {
    fn new(name: &str, signature: Option<Signature>, metrics: TextMetrics) -> Self {
        Self {
            name: name.to_string(),
            arity: signature.as_ref().map(|s| s.param_types.len()),
            is_vararg: signature.as_ref().is_some_and(|s| s.is_vararg),
            return_type: signature.as_ref().map(|s| s.return_type.clone()),
            param_types: signature.map(|s| s.param_types).unwrap_or_default(),
            metrics,
        }
    }
}

#[derive(Debug, Clone, Serialize)]
pub struct FunctionRow {
    pub ea: u64,
    pub hexrays: Side,
    pub unlace: Option<Side>,
}

impl FunctionRow {
    fn arity_matches(&self) -> Option<bool> {
        let unlace = self.unlace.as_ref()?;
        Some(self.hexrays.arity? == unlace.arity? && self.hexrays.is_vararg == unlace.is_vararg)
    }
}

#[derive(Debug, Serialize)]
pub struct BinaryDiff {
    pub key: String,
    pub source: String,
    pub error: Option<String>,
    pub functions: Vec<FunctionRow>,
    /// Functions unlace prints at addresses that are not Hex-Rays function starts.
    pub unlace_extra_starts: Vec<(u64, String)>,
}

pub fn run(root: &Path, args: &[String]) -> i32 {
    let options = match Options::parse(root, args) {
        Ok(o) => o,
        Err(e) => {
            eprintln!("oracle-diff: {e}");
            return 2;
        }
    };
    let index = match hexrays::read_index(&options.oracle_dir) {
        Ok(i) => i,
        Err(e) => {
            eprintln!("oracle-diff: {e}\nrun scripts/hexrays-oracle/run_oracle.py first");
            return 1;
        }
    };
    let bin = if options.reuse_unlace {
        None
    } else {
        match cargo_bin::build_unlace_bin(root) {
            Ok(p) => Some(p),
            Err(e) => {
                eprintln!("oracle-diff: {e}");
                return 1;
            }
        }
    };
    let targets: Vec<(&String, &hexrays::IndexEntry)> = index
        .iter()
        .filter(|(key, entry)| {
            entry.status == "ok"
                && options
                    .only
                    .as_ref()
                    .is_none_or(|o| key.contains(o.as_str()))
        })
        .collect();

    let ida_version = targets
        .first()
        .and_then(|(key, _)| hexrays::ida_version(&options.oracle_dir.join(key)))
        .unwrap_or_else(|| "unknown".to_string());

    let results = Mutex::new(BTreeMap::new());
    let next = AtomicUsize::new(0);
    let jobs = std::thread::available_parallelism().map_or(1, |n| n.get().min(4));
    std::thread::scope(|scope| {
        for _ in 0..jobs {
            scope.spawn(|| {
                while let Some((key, entry)) = targets.get(next.fetch_add(1, Ordering::Relaxed)) {
                    eprintln!("oracle-diff: {key}");
                    let diff = diff_binary(bin.as_deref(), &options, key, entry);
                    results
                        .lock()
                        .expect("no panics while holding the lock")
                        .insert((*key).clone(), diff);
                }
            });
        }
    });
    let diffs: Vec<BinaryDiff> = results
        .into_inner()
        .expect("worker threads joined")
        .into_values()
        .collect();

    let markdown = report::markdown(&diffs, &ida_version);
    let json = serde_json::to_string_pretty(&report::json(&diffs, &ida_version))
        .expect("report values serialize");
    crate::report_io::write_artifact(&options.out_dir.join("oracle-diff.md"), &markdown);
    crate::report_io::write_artifact(&options.out_dir.join("oracle-diff.json"), &json);
    print!("{}", report::summary_table(&diffs));
    0
}

fn diff_binary(
    bin: Option<&Path>,
    options: &Options,
    key: &str,
    entry: &hexrays::IndexEntry,
) -> BinaryDiff {
    let mut diff = BinaryDiff {
        key: key.to_string(),
        source: entry.source.clone(),
        error: None,
        functions: Vec::new(),
        unlace_extra_starts: Vec::new(),
    };
    let facts = match hexrays::read_functions(&options.oracle_dir.join(key)) {
        Ok(f) => f,
        Err(e) => {
            diff.error = Some(e);
            return diff;
        }
    };
    let c_path = options.out_dir.join("unlace").join(format!("{key}.c"));
    let output = match bin {
        None => std::fs::read_to_string(&c_path).map_err(|e| format!("{}: {e}", c_path.display())),
        Some(bin) => unlace::decompile(bin, &options.root.join(&entry.source)).inspect(|text| {
            crate::report_io::write_artifact(&c_path, text);
        }),
    };
    let printed = match output {
        Ok(text) => unlace::split_functions(&text),
        Err(e) => {
            diff.error = Some(e);
            BTreeMap::new()
        }
    };
    for (ea, fact) in facts.iter().filter(|(_, f)| f.is_comparable()) {
        let text = fact.pseudocode.join("\n");
        let signature = fact
            .prototype
            .as_ref()
            .and_then(|p| p.details.as_ref())
            .map(|d| Signature {
                return_type: pseudo_c::normalize_type(&d.return_type),
                param_types: d
                    .args
                    .iter()
                    .map(|a| pseudo_c::normalize_type(&a.ty))
                    .collect(),
                is_vararg: d.is_vararg,
            });
        let hexrays = Side::new(&fact.name, signature, pseudo_c::measure(&text));
        let unlace = printed.get(ea).map(|p| {
            Side::new(
                &p.name,
                pseudo_c::parse_signature(&p.text),
                pseudo_c::measure(&p.text),
            )
        });
        diff.functions.push(FunctionRow {
            ea: *ea,
            hexrays,
            unlace,
        });
    }
    diff.unlace_extra_starts = printed
        .iter()
        .filter(|(ea, _)| !facts.contains_key(ea))
        .map(|(ea, p)| (*ea, p.name.clone()))
        .collect();
    diff
}
