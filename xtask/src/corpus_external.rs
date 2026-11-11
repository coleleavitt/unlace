//! Decompile-only metrics over an external binary corpus kept outside the
//! repository (no sources, so no arity or recompile checks).

use std::path::Path;

use serde::Deserialize;

use super::listing::Listing;
use super::metrics::{self, OutputMetrics};
use super::report::ExternalReport;

/// Binaries larger than this are skipped; whole-binary decompiles of them
/// take too long for a gate.
pub const MAX_BINARY_BYTES: u64 = 4 << 20;

/// Shipped as part of IDA Pro; never decompiled here.
const EXCLUDED: &[&str] = &["win64_remote.exe"];

#[derive(Debug, Deserialize)]
struct Manifest {
    binaries: Vec<Entry>,
}

#[derive(Debug, Deserialize)]
struct Entry {
    name: String,
    path: String,
    size_bytes: u64,
}

pub struct Binary {
    pub name: String,
    pub path: String,
}

/// Entries of `<dir>/manifest.json` that are small enough and not excluded.
pub fn binaries(dir: &Path) -> Result<Vec<Binary>, String> {
    let path = dir.join("manifest.json");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    let manifest: Manifest = serde_json::from_str(&text)
        .map_err(|e| format!("failed to decode {}: {e}", path.display()))?;
    let mut binaries: Vec<Binary> = manifest
        .binaries
        .into_iter()
        .filter(|e| e.size_bytes <= MAX_BINARY_BYTES && !EXCLUDED.contains(&e.name.as_str()))
        .map(|e| Binary {
            name: e.name,
            path: e.path,
        })
        .collect();
    binaries.sort_by(|a, b| a.name.cmp(&b.name));
    Ok(binaries)
}

pub fn measure(binary: &Binary, decompiled: Result<String, String>) -> ExternalReport {
    let mut report = ExternalReport {
        name: binary.name.clone(),
        path: binary.path.clone(),
        error: None,
        functions: 0,
        metrics: OutputMetrics::default(),
    };
    match decompiled {
        Ok(c) => {
            let listing = Listing::parse(&c);
            report.functions = listing.functions.len();
            for function in &listing.functions {
                report.metrics += metrics::measure(function.body);
            }
        }
        Err(error) => report.error = Some(error),
    }
    report
}
