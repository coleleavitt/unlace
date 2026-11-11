//! Loader for the per-function JSON written by `scripts/hexrays-oracle/`.

use std::collections::BTreeMap;
use std::path::Path;

use serde::Deserialize;

#[derive(Debug, Deserialize)]
pub struct IndexEntry {
    pub source: String,
    pub status: String,
}

/// `index.json`: every dumped binary keyed by `<set>/<name>`.
pub fn read_index(oracle_dir: &Path) -> Result<BTreeMap<String, IndexEntry>, String> {
    let path = oracle_dir.join("index.json");
    let text = std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))?;
    serde_json::from_str(&text).map_err(|e| format!("{}: {e}", path.display()))
}

#[derive(Debug, Deserialize)]
struct Inventory {
    ida_version: String,
}

pub fn ida_version(binary_dir: &Path) -> Option<String> {
    let text = std::fs::read_to_string(binary_dir.join("inventory.json")).ok()?;
    serde_json::from_str::<Inventory>(&text)
        .ok()
        .map(|i| i.ida_version)
}

#[derive(Debug, Deserialize)]
pub struct FunctionFacts {
    pub ea: u64,
    pub name: String,
    pub status: String,
    #[serde(default)]
    pub segment: String,
    #[serde(default)]
    pub is_thunk: bool,
    #[serde(default)]
    pub pseudocode: Vec<String>,
    pub prototype: Option<Prototype>,
}

impl FunctionFacts {
    /// Real code worth comparing: decompiled, and not a PLT stub or thunk.
    pub fn is_comparable(&self) -> bool {
        self.status == "ok" && !self.is_thunk && !self.segment.starts_with(".plt")
    }
}

#[derive(Debug, Deserialize)]
pub struct Prototype {
    pub details: Option<PrototypeDetails>,
}

#[derive(Debug, Deserialize)]
pub struct PrototypeDetails {
    pub is_vararg: bool,
    pub return_type: String,
    pub args: Vec<Arg>,
}

#[derive(Debug, Deserialize)]
pub struct Arg {
    #[serde(rename = "type")]
    pub ty: String,
}

/// Every `functions/<ea>.json` of one dumped binary, keyed by start address.
pub fn read_functions(binary_dir: &Path) -> Result<BTreeMap<u64, FunctionFacts>, String> {
    let dir = binary_dir.join("functions");
    let entries = std::fs::read_dir(&dir).map_err(|e| format!("{}: {e}", dir.display()))?;
    let mut out = BTreeMap::new();
    for entry in entries {
        let path = entry.map_err(|e| e.to_string())?.path();
        if path.extension().is_none_or(|ext| ext != "json") {
            continue;
        }
        let text =
            std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))?;
        let facts: FunctionFacts =
            serde_json::from_str(&text).map_err(|e| format!("{}: {e}", path.display()))?;
        out.insert(facts.ea, facts);
    }
    Ok(out)
}
