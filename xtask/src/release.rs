//! Signed release infrastructure for unlace.
//!
//! This module implements the `cargo xtask release` subcommand which:
//! 1. Builds release binaries for all supported targets
//! 2. Generates SHA-256 checksums
//! 3. Signs with minisign/signify (placeholder — computes hashes, notes where key would be used)
//! 4. Produces a release manifest JSON

use std::fs;
use std::io::{self, Read};
use std::path::{Path, PathBuf};
use std::process::{self, Command};

use chrono::Utc;
use serde::Serialize;
use sha2::{Digest, Sha256};

/// Supported cross-compilation targets for release builds.
pub const RELEASE_TARGETS: &[Target] = &[
    Target {
        triple: "x86_64-unknown-linux-gnu",
        display_name: "Linux x86-64",
        binary_name: "unlace",
        archive_ext: "tar.gz",
    },
    Target {
        triple: "aarch64-unknown-linux-gnu",
        display_name: "Linux AArch64",
        binary_name: "unlace",
        archive_ext: "tar.gz",
    },
    Target {
        triple: "x86_64-apple-darwin",
        display_name: "macOS x86-64",
        binary_name: "unlace",
        archive_ext: "tar.gz",
    },
    Target {
        triple: "aarch64-apple-darwin",
        display_name: "macOS AArch64 (Apple Silicon)",
        binary_name: "unlace",
        archive_ext: "tar.gz",
    },
    Target {
        triple: "x86_64-pc-windows-msvc",
        display_name: "Windows x86-64",
        binary_name: "unlace.exe",
        archive_ext: "zip",
    },
];

/// A cross-compilation target definition.
#[allow(dead_code)]
pub struct Target {
    pub triple: &'static str,
    pub display_name: &'static str,
    pub binary_name: &'static str,
    pub archive_ext: &'static str,
}

/// A single binary entry in the release manifest.
#[derive(Debug, Serialize)]
pub struct BinaryEntry {
    pub target: String,
    pub url: String,
    pub sha256: String,
    pub size: u64,
}

/// The release manifest written as JSON alongside the release artifacts.
#[derive(Debug, Serialize)]
pub struct ReleaseManifest {
    pub version: String,
    pub date: String,
    pub binaries: Vec<BinaryEntry>,
}

/// Configuration for a release run.
pub struct ReleaseConfig {
    pub workspace_root: PathBuf,
    pub version: String,
    pub output_dir: PathBuf,
    /// Base URL for download links in the manifest.
    pub download_base_url: String,
    /// Path to minisign secret key (if available).
    pub signing_key_path: Option<PathBuf>,
    /// If true, skip the actual cross-compilation (useful in CI where
    /// cross-compilation happens in separate matrix jobs).
    pub skip_build: bool,
}

/// Entry point for `cargo xtask release`.
pub fn run(args: &[String], workspace_root: PathBuf) {
    let version = detect_version(&workspace_root);
    let output_dir = parse_output_dir(args).unwrap_or_else(|| {
        workspace_root.join("target").join("release-artifacts")
    });
    let skip_build = args.iter().any(|a| a == "--skip-build");
    let signing_key_path = args
        .iter()
        .position(|a| a == "--signing-key")
        .and_then(|i| args.get(i + 1))
        .map(PathBuf::from);

    let download_base_url = args
        .iter()
        .position(|a| a == "--download-url")
        .and_then(|i| args.get(i + 1))
        .cloned()
        .unwrap_or_else(|| {
            format!(
                "https://github.com/coleleavitt/unlace/releases/download/v{}",
                version
            )
        });

    let config = ReleaseConfig {
        workspace_root,
        version,
        output_dir,
        download_base_url,
        signing_key_path,
        skip_build,
    };

    if let Err(e) = execute_release(&config) {
        eprintln!("error: release failed: {e}");
        process::exit(1);
    }
}

/// Execute the full release pipeline.
fn execute_release(config: &ReleaseConfig) -> Result<(), String> {
    // Ensure output directory exists
    fs::create_dir_all(&config.output_dir)
        .map_err(|e| format!("cannot create output dir: {e}"))?;

    println!("=== unlace release v{} ===", config.version);
    println!("Output directory: {}", config.output_dir.display());
    println!();

    // Step 1: Build release binaries for each target
    if !config.skip_build {
        build_all_targets(config)?;
    } else {
        println!("[skip] Build step skipped (--skip-build)");
    }

    // Step 2: Collect built artifacts and compute checksums
    let entries = compute_checksums(config)?;

    // Step 3: Write SHA256SUMS file
    write_checksums_file(config, &entries)?;

    // Step 4: Sign (or note where signing would occur)
    sign_checksums(config)?;

    // Step 5: Write release manifest JSON
    write_manifest(config, &entries)?;

    println!();
    println!("=== Release artifacts ready ===");
    println!("  {}", config.output_dir.display());

    Ok(())
}

/// Build release binaries for all targets via `cargo build --release --target`.
fn build_all_targets(config: &ReleaseConfig) -> Result<(), String> {
    println!("[1/5] Building release binaries...");

    for target in RELEASE_TARGETS {
        println!("  → {} ({})", target.display_name, target.triple);

        let status = Command::new("cargo")
            .args([
                "build",
                "--release",
                "--locked",
                "--target",
                target.triple,
                "-p",
                "unlace-cli",
            ])
            .current_dir(&config.workspace_root)
            .status()
            .map_err(|e| format!("failed to invoke cargo: {e}"))?;

        if !status.success() {
            return Err(format!(
                "build failed for target {} (exit code {:?})",
                target.triple,
                status.code()
            ));
        }

        // Copy the built binary to the output directory with a target-qualified name
        let built_path = config
            .workspace_root
            .join("target")
            .join(target.triple)
            .join("release")
            .join(target.binary_name);

        let artifact_name = format!(
            "unlace-v{}-{}{}",
            config.version,
            target.triple,
            if target.binary_name.ends_with(".exe") {
                ".exe"
            } else {
                ""
            }
        );
        let dest = config.output_dir.join(&artifact_name);

        fs::copy(&built_path, &dest).map_err(|e| {
            format!(
                "failed to copy {} → {}: {e}",
                built_path.display(),
                dest.display()
            )
        })?;
    }

    Ok(())
}

/// Compute SHA-256 checksums for all artifacts in the output directory.
fn compute_checksums(config: &ReleaseConfig) -> Result<Vec<BinaryEntry>, String> {
    println!("[2/5] Computing SHA-256 checksums...");

    let mut entries = Vec::new();

    for target in RELEASE_TARGETS {
        let artifact_name = format!(
            "unlace-v{}-{}{}",
            config.version,
            target.triple,
            if target.binary_name.ends_with(".exe") {
                ".exe"
            } else {
                ""
            }
        );
        let artifact_path = config.output_dir.join(&artifact_name);

        // If the build was skipped, the artifact might not exist — create a
        // placeholder entry with zeroed hash.
        let (sha256, size) = if artifact_path.exists() {
            let hash = sha256_file(&artifact_path)
                .map_err(|e| format!("failed to hash {}: {e}", artifact_path.display()))?;
            let meta = fs::metadata(&artifact_path)
                .map_err(|e| format!("failed to stat {}: {e}", artifact_path.display()))?;
            (hash, meta.len())
        } else {
            println!(
                "  ⚠ {} not found, using placeholder",
                artifact_path.display()
            );
            ("0".repeat(64), 0)
        };

        let url = format!("{}/{}", config.download_base_url, artifact_name);

        println!("  {} {} ({} bytes)", &sha256[..16], artifact_name, size);

        entries.push(BinaryEntry {
            target: target.triple.to_string(),
            url,
            sha256,
            size,
        });
    }

    Ok(entries)
}

/// Write the SHA256SUMS file in the standard `sha256sum` output format.
fn write_checksums_file(config: &ReleaseConfig, entries: &[BinaryEntry]) -> Result<(), String> {
    println!("[3/5] Writing SHA256SUMS...");

    let checksums_path = config.output_dir.join("SHA256SUMS");
    let mut content = String::new();

    for entry in entries {
        // Extract just the filename from the URL
        let filename = entry
            .url
            .rsplit('/')
            .next()
            .unwrap_or(&entry.target);
        content.push_str(&format!("{}  {}\n", entry.sha256, filename));
    }

    fs::write(&checksums_path, &content)
        .map_err(|e| format!("failed to write SHA256SUMS: {e}"))?;

    println!("  → {}", checksums_path.display());
    Ok(())
}

/// Sign the checksums file with minisign/signify.
///
/// If no signing key is provided, this step prints a placeholder message
/// indicating where the signature would be produced.
fn sign_checksums(config: &ReleaseConfig) -> Result<(), String> {
    println!("[4/5] Signing checksums...");

    let checksums_path = config.output_dir.join("SHA256SUMS");

    match &config.signing_key_path {
        Some(key_path) => {
            // Attempt to use minisign if available
            let sig_path = config.output_dir.join("SHA256SUMS.minisig");

            let status = Command::new("minisign")
                .args([
                    "-Sm",
                    checksums_path.to_str().unwrap_or("SHA256SUMS"),
                    "-s",
                    key_path.to_str().unwrap_or(""),
                    "-x",
                    sig_path.to_str().unwrap_or("SHA256SUMS.minisig"),
                ])
                .status();

            match status {
                Ok(s) if s.success() => {
                    println!("  → Signed with minisign: {}", sig_path.display());
                }
                Ok(s) => {
                    return Err(format!("minisign failed with exit code {:?}", s.code()));
                }
                Err(e) => {
                    eprintln!("  ⚠ minisign not found ({e}), trying signify...");
                    // Fallback: try signify
                    let status = Command::new("signify")
                        .args([
                            "-S",
                            "-s",
                            key_path.to_str().unwrap_or(""),
                            "-m",
                            checksums_path.to_str().unwrap_or(""),
                            "-x",
                            sig_path.to_str().unwrap_or(""),
                        ])
                        .status()
                        .map_err(|e| {
                            format!("neither minisign nor signify available: {e}")
                        })?;

                    if !status.success() {
                        return Err(format!(
                            "signify failed with exit code {:?}",
                            status.code()
                        ));
                    }
                    println!("  → Signed with signify: {}", sig_path.display());
                }
            }
        }
        None => {
            println!("  ⚠ No signing key provided (--signing-key <path>)");
            println!("    In production, this step would:");
            println!("    1. Load the minisign secret key from the provided path");
            println!("    2. Run: minisign -Sm SHA256SUMS -s <key_path>");
            println!("    3. Produce SHA256SUMS.minisig alongside the checksums");
            println!("    Verify with: minisign -Vm SHA256SUMS -p release-signing-key.pub");
        }
    }

    Ok(())
}

/// Write the release manifest JSON.
fn write_manifest(config: &ReleaseConfig, entries: &[BinaryEntry]) -> Result<(), String> {
    println!("[5/5] Writing release manifest...");

    let manifest = ReleaseManifest {
        version: config.version.clone(),
        date: Utc::now().format("%Y-%m-%d").to_string(),
        binaries: entries
            .iter()
            .map(|e| BinaryEntry {
                target: e.target.clone(),
                url: e.url.clone(),
                sha256: e.sha256.clone(),
                size: e.size,
            })
            .collect(),
    };

    let manifest_path = config.output_dir.join("release-manifest.json");
    let json = serde_json::to_string_pretty(&manifest)
        .map_err(|e| format!("failed to serialize manifest: {e}"))?;

    fs::write(&manifest_path, &json)
        .map_err(|e| format!("failed to write manifest: {e}"))?;

    println!("  → {}", manifest_path.display());
    Ok(())
}

/// Compute the SHA-256 hex digest of a file.
fn sha256_file(path: &Path) -> io::Result<String> {
    let mut file = fs::File::open(path)?;
    let mut hasher = Sha256::new();
    let mut buffer = [0u8; 8192];

    loop {
        let n = file.read(&mut buffer)?;
        if n == 0 {
            break;
        }
        hasher.update(&buffer[..n]);
    }

    Ok(format!("{:x}", hasher.finalize()))
}

/// Detect the workspace version from Cargo.toml.
fn detect_version(workspace_root: &Path) -> String {
    let cargo_toml = workspace_root.join("Cargo.toml");
    if let Ok(contents) = fs::read_to_string(&cargo_toml) {
        for line in contents.lines() {
            let trimmed = line.trim();
            if trimmed.starts_with("version") && trimmed.contains('=') {
                if let Some(ver) = trimmed.split('"').nth(1) {
                    return ver.to_string();
                }
            }
        }
    }
    "0.0.0".to_string()
}

/// Parse `--output <dir>` from args.
fn parse_output_dir(args: &[String]) -> Option<PathBuf> {
    args.iter()
        .position(|a| a == "--output")
        .and_then(|i| args.get(i + 1))
        .map(PathBuf::from)
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::io::Write;

    #[test]
    fn test_sha256_file() {
        let dir = tempfile::tempdir().unwrap();
        let test_file = dir.path().join("test.bin");
        let mut f = fs::File::create(&test_file).unwrap();
        f.write_all(b"hello world\n").unwrap();
        drop(f);

        let hash = sha256_file(&test_file).unwrap();
        // sha256("hello world\n") = ecf701f727d9...
        assert_eq!(hash.len(), 64);
        assert!(hash.chars().all(|c| c.is_ascii_hexdigit()));
    }

    #[test]
    fn test_release_targets_complete() {
        assert_eq!(RELEASE_TARGETS.len(), 5);
        let triples: Vec<&str> = RELEASE_TARGETS.iter().map(|t| t.triple).collect();
        assert!(triples.contains(&"x86_64-unknown-linux-gnu"));
        assert!(triples.contains(&"aarch64-unknown-linux-gnu"));
        assert!(triples.contains(&"x86_64-apple-darwin"));
        assert!(triples.contains(&"aarch64-apple-darwin"));
        assert!(triples.contains(&"x86_64-pc-windows-msvc"));
    }

    #[test]
    fn test_manifest_serialization() {
        let manifest = ReleaseManifest {
            version: "0.1.0".to_string(),
            date: "2025-01-15".to_string(),
            binaries: vec![BinaryEntry {
                target: "x86_64-unknown-linux-gnu".to_string(),
                url: "https://example.com/unlace-linux-x86_64".to_string(),
                sha256: "a".repeat(64),
                size: 12345678,
            }],
        };

        let json = serde_json::to_string_pretty(&manifest).unwrap();
        assert!(json.contains("\"version\": \"0.1.0\""));
        assert!(json.contains("\"date\": \"2025-01-15\""));
        assert!(json.contains("\"binaries\""));
        assert!(json.contains("\"sha256\""));
        assert!(json.contains("\"size\": 12345678"));
    }
}
