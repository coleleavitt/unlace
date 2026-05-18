//! `cargo xtask sbom` — generate a CycloneDX 1.4 SBOM for the workspace
//! (Batch 26).
//!
//! The actual SBOM construction lives in [`unlace_sbom`]; this xtask only
//! wires it to a CLI surface and an optional `--out <path>` flag.
//!
//! Output format is pretty-printed JSON. Without `--out`, the SBOM is
//! written to stdout. Always exits 0 unless I/O fails.

use std::io::Write as _;
use std::path::Path;

pub fn run(args: &[String]) -> i32 {
    let mut out_path: Option<std::path::PathBuf> = None;
    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "--out" => {
                let Some(p) = args.get(i + 1) else {
                    eprintln!("xtask sbom: --out requires a path argument");
                    return 1;
                };
                out_path = Some(std::path::PathBuf::from(p));
                i += 2;
            }
            "--help" | "-h" => {
                eprintln!("usage: cargo xtask sbom [--out <path>]");
                eprintln!("  Emits a CycloneDX 1.4 SBOM for the workspace.");
                return 0;
            }
            other => {
                eprintln!("xtask sbom: unknown flag '{other}'");
                return 1;
            }
        }
    }

    let sbom = unlace_sbom::generate_sbom();
    let json = unlace_sbom::to_json(&sbom);
    match out_path {
        Some(path) => {
            if let Err(e) = write_file(&path, &json) {
                eprintln!("xtask sbom: failed to write {}: {e}", path.display());
                return 1;
            }
            eprintln!(
                "xtask sbom: wrote {} component(s) to {}",
                sbom.components.len(),
                path.display(),
            );
        }
        None => {
            // Stdout — the user redirects.
            let mut stdout = std::io::stdout().lock();
            let _ = stdout.write_all(json.as_bytes());
            let _ = stdout.write_all(b"\n");
        }
    }
    0
}

fn write_file(path: &Path, body: &str) -> std::io::Result<()> {
    if let Some(parent) = path.parent() {
        if !parent.as_os_str().is_empty() {
            std::fs::create_dir_all(parent)?;
        }
    }
    std::fs::write(path, body)
}
