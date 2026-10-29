//! `tests/golden/corpus_binaries.toml`: where each IDA reference corpus came
//! from, and the address of every reference function.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use serde::Deserialize;
use sha2::{Digest, Sha256};

pub const MANIFEST: &str = "tests/golden/corpus_binaries.toml";

#[derive(Debug, Deserialize)]
pub struct CorpusBinary {
    /// Binary path relative to the workspace root.
    pub path: PathBuf,
    pub sha256: String,
    pub ida: String,
    /// Addresses of reference files whose stem is not `sub_<hex>`.
    #[serde(default)]
    pub functions: BTreeMap<String, u64>,
}

/// Read the manifest and return the entry for `arch`.
pub fn load(root: &Path, arch: &str) -> Result<CorpusBinary, String> {
    let path = root.join(MANIFEST);
    let text = std::fs::read_to_string(&path).map_err(|e| format!("{}: {e}", path.display()))?;
    let mut entries: BTreeMap<String, CorpusBinary> =
        toml::from_str(&text).map_err(|e| format!("{}: {e}", path.display()))?;
    entries
        .remove(arch)
        .ok_or_else(|| format!("{MANIFEST} has no [{arch}] entry"))
}

/// Why the corpus binary cannot be used; the report is skipped, not failed.
#[derive(Debug)]
pub enum Unavailable {
    Missing(PathBuf),
    Mismatch { path: PathBuf, sha256: String },
}

impl std::fmt::Display for Unavailable {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Missing(path) => write!(f, "{} not found", path.display()),
            Self::Mismatch { path, sha256 } => {
                write!(
                    f,
                    "{} has sha256 {sha256}, not the manifest's",
                    path.display()
                )
            }
        }
    }
}

impl CorpusBinary {
    /// The binary at `override_path` or at the manifest path under `root`,
    /// once its SHA-256 matches the manifest.
    pub fn resolve(
        &self,
        root: &Path,
        override_path: Option<&Path>,
    ) -> Result<PathBuf, Unavailable> {
        let path = override_path.map_or_else(|| root.join(&self.path), Path::to_path_buf);
        let data = std::fs::read(&path).map_err(|_| Unavailable::Missing(path.clone()))?;
        let sha256 = format!("{:x}", Sha256::digest(&data));
        if sha256.eq_ignore_ascii_case(&self.sha256) {
            Ok(path)
        } else {
            Err(Unavailable::Mismatch { path, sha256 })
        }
    }

    /// The address of the reference file `stem` (`sub_101030` or a listed name).
    pub fn address_of(&self, stem: &str) -> Option<u64> {
        stem.strip_prefix("sub_")
            .and_then(|hex| u64::from_str_radix(hex, 16).ok())
            .or_else(|| self.functions.get(stem).copied())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn maps_stems_to_addresses() {
        let binary: CorpusBinary = toml::from_str(
            "path = \"x.so\"\nsha256 = \"00\"\nida = \"9.3sp1\"\n[functions]\nfunc = 0x7BF80\n",
        )
        .unwrap();
        assert_eq!(binary.address_of("sub_101030"), Some(0x101030));
        assert_eq!(binary.address_of("func"), Some(0x7BF80));
        assert_eq!(binary.address_of("other"), None);
    }
}
