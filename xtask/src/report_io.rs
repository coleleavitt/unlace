//! Shared helpers for xtask report commands.

use std::path::Path;

/// Write a report `body` to `path` (creating parent dirs), printing a
/// confirmation line on success and a non-fatal warning on failure. Report
/// commands are best-effort about their artifact file — a write failure is
/// surfaced but never aborts the command.
pub fn write_artifact(path: &Path, body: &str) {
    if let Some(parent) = path.parent()
        && let Err(e) = std::fs::create_dir_all(parent)
    {
        eprintln!("warning: could not create {}: {e}", parent.display());
    }
    match std::fs::write(path, body) {
        Ok(()) => println!("wrote {}", path.display()),
        Err(e) => eprintln!("warning: could not write {}: {e}", path.display()),
    }
}
