use std::ffi::OsString;
use std::path::{Path, PathBuf};
use std::process::Command;

pub fn build_unlace_bin(root: &Path) -> Result<PathBuf, String> {
    let cargo = std::env::var_os("CARGO").unwrap_or_else(|| OsString::from("cargo"));
    let output = Command::new(cargo)
        .args([
            "build",
            "-p",
            "unlace-cli",
            "--bin",
            "unlace",
            "--message-format=json-render-diagnostics",
        ])
        .current_dir(root)
        .output()
        .map_err(|e| format!("failed to spawn cargo build for unlace-cli: {e}"))?;

    if !output.status.success() {
        return Err(format!(
            "cargo build -p unlace-cli --bin unlace failed: {}",
            first_diagnostic_line(&output.stderr)
        ));
    }

    if let Some(path) = executable_from_cargo_json(root, &output.stdout)
        && path.exists()
    {
        return Ok(path);
    }

    find_unlace_binary(root).ok_or_else(|| {
        "cargo build succeeded but did not report a usable unlace executable".to_string()
    })
}

pub fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = target_dir(root);
    let debug_bin = target_dir.join("debug").join(executable_name("unlace"));
    if debug_bin.exists() {
        return Some(debug_bin);
    }
    let release_bin = target_dir.join("release").join(executable_name("unlace"));
    if release_bin.exists() {
        return Some(release_bin);
    }
    None
}

pub fn target_dir(root: &Path) -> PathBuf {
    std::env::var_os("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|| root.join("target"))
}

fn executable_from_cargo_json(root: &Path, stdout: &[u8]) -> Option<PathBuf> {
    let text = std::str::from_utf8(stdout).ok()?;
    let mut executable = None;
    for line in text.lines() {
        let Ok(value) = serde_json::from_str::<serde_json::Value>(line) else {
            continue;
        };
        if value.get("reason").and_then(|v| v.as_str()) != Some("compiler-artifact") {
            continue;
        }
        let Some(target) = value.get("target") else {
            continue;
        };
        if target.get("name").and_then(|v| v.as_str()) != Some("unlace") {
            continue;
        }
        let is_bin = target
            .get("kind")
            .and_then(|v| v.as_array())
            .is_some_and(|kinds| kinds.iter().any(|kind| kind.as_str() == Some("bin")));
        if !is_bin {
            continue;
        }
        let Some(path) = value.get("executable").and_then(|v| v.as_str()) else {
            continue;
        };
        let path = PathBuf::from(path);
        executable = Some(if path.is_absolute() {
            path
        } else {
            root.join(path)
        });
    }
    executable
}

fn first_diagnostic_line(stderr: &[u8]) -> String {
    String::from_utf8_lossy(stderr)
        .lines()
        .rev()
        .find(|line| !line.trim().is_empty())
        .unwrap_or("unknown error")
        .to_string()
}

fn executable_name(stem: &str) -> String {
    if cfg!(windows) {
        format!("{stem}.exe")
    } else {
        stem.to_string()
    }
}
