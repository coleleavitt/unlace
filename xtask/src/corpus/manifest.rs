//! `tests/corpus/corpus.toml`: the programs in the measurement corpus.

use std::path::{Path, PathBuf};

use serde::Deserialize;

#[derive(Debug, Deserialize)]
pub struct Manifest {
    #[serde(rename = "program")]
    pub programs: Vec<Program>,
}

#[derive(Debug, Clone, Deserialize)]
pub struct Program {
    pub name: String,
    pub summary: String,
    /// Paths relative to the corpus directory.
    pub sources: Vec<PathBuf>,
    #[serde(default)]
    pub cflags: Vec<String>,
    #[serde(default)]
    pub origin: Option<String>,
}

impl Manifest {
    pub fn read(corpus_dir: &Path) -> Result<Self, String> {
        let path = corpus_dir.join("corpus.toml");
        let text = std::fs::read_to_string(&path)
            .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
        let manifest: Manifest = toml::from_str(&text)
            .map_err(|e| format!("failed to decode {}: {e}", path.display()))?;
        manifest.validate(corpus_dir)?;
        Ok(manifest)
    }

    fn validate(&self, corpus_dir: &Path) -> Result<(), String> {
        let mut names = std::collections::BTreeSet::new();
        for program in &self.programs {
            if !names.insert(program.name.as_str()) {
                return Err(format!("corpus.toml: duplicate program {:?}", program.name));
            }
            if program.sources.is_empty() {
                return Err(format!(
                    "corpus.toml: program {:?} has no sources",
                    program.name
                ));
            }
            for source in &program.sources {
                if !corpus_dir.join(source).is_file() {
                    return Err(format!(
                        "corpus.toml: program {:?} source {} does not exist",
                        program.name,
                        source.display()
                    ));
                }
            }
        }
        Ok(())
    }
}
