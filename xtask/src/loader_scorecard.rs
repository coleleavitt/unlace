//! `xtask loader-scorecard` — per-format loader smoke scorecard (ROADMAP Phase
//! J.3).
//!
//! Walks `fixtures/` (and any extra dirs passed as args), classifies each file
//! by which loader claims it (`can_load`), attempts a full `load`, and records
//! success (arch + section/symbol counts) or the failure reason. Emits a
//! markdown table grouped by format so loader regressions across ELF / PE /
//! Mach-O are visible at a glance. Read-only; writes only stdout +
//! `target/loader-scorecard.md`.

use std::path::Path;

use unlace_loader::{BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader};

#[derive(Default)]
struct FormatStats {
    attempted: usize,
    loaded: usize,
    failed: usize,
    rows: Vec<String>,
}

pub fn run(root: &Path) {
    let mut elf = FormatStats::default();
    let mut pe = FormatStats::default();
    let mut macho = FormatStats::default();
    let mut unknown: Vec<String> = Vec::new();

    let fixtures = root.join("fixtures");
    let mut files: Vec<std::path::PathBuf> = Vec::new();
    collect_files(&fixtures, &mut files);
    files.sort();

    for path in &files {
        let Ok(data) = std::fs::read(path) else {
            continue;
        };
        // Skip obviously-non-binary sidecars (IDA db parts, source, markdown).
        let name = path.file_name().and_then(|n| n.to_str()).unwrap_or("");
        if data.len() < 8 {
            continue;
        }

        if ElfLoader::can_load(&data) {
            record(&mut elf, name, ElfLoader::load(&data));
        } else if MachoLoader::can_load(&data) {
            record(&mut macho, name, MachoLoader::load(&data));
        } else if PeLoader::can_load(&data) {
            record(&mut pe, name, PeLoader::load(&data));
        } else {
            unknown.push(name.to_string());
        }
    }

    let mut out = String::new();
    out.push_str("# loader-scorecard\n\n");
    out.push_str("Per-format load smoke results over `fixtures/`.\n\n");
    out.push_str("| format | attempted | loaded | failed |\n");
    out.push_str("|--------|----------:|-------:|-------:|\n");
    for (fmt, s) in [("ELF", &elf), ("PE", &pe), ("Mach-O", &macho)] {
        out.push_str(&format!(
            "| {fmt} | {} | {} | {} |\n",
            s.attempted, s.loaded, s.failed
        ));
    }
    out.push('\n');

    for (fmt, s) in [("ELF", &elf), ("PE", &pe), ("Mach-O", &macho)] {
        if s.rows.is_empty() {
            continue;
        }
        out.push_str(&format!("## {fmt}\n\n"));
        out.push_str("| file | result | arch | sections | symbols |\n");
        out.push_str("|------|--------|------|---------:|--------:|\n");
        for row in &s.rows {
            out.push_str(row);
            out.push('\n');
        }
        out.push('\n');
    }

    if !unknown.is_empty() {
        out.push_str(&format!(
            "## Unrecognized ({} files, not ELF/PE/Mach-O)\n\n",
            unknown.len()
        ));
        for name in &unknown {
            out.push_str(&format!("- `{name}`\n"));
        }
        out.push('\n');
    }

    print!("{out}");

    crate::report_io::write_artifact(&root.join("target").join("loader-scorecard.md"), &out);
}

fn record(
    stats: &mut FormatStats,
    name: &str,
    result: Result<BinaryImage, impl std::fmt::Display>,
) {
    stats.attempted += 1;
    match result {
        Ok(img) => {
            stats.loaded += 1;
            stats.rows.push(format!(
                "| `{name}` | ✓ | {:?} | {} | {} |",
                img.arch,
                img.sections.len(),
                img.symbols.len()
            ));
        }
        Err(e) => {
            stats.failed += 1;
            let msg = e.to_string();
            let msg = msg.replace('|', "/");
            stats.rows.push(format!("| `{name}` | ✗ {msg} |  |  |  |"));
        }
    }
}

fn collect_files(dir: &Path, out: &mut Vec<std::path::PathBuf>) {
    let Ok(entries) = std::fs::read_dir(dir) else {
        return;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.is_file() {
            out.push(path);
        }
    }
}
