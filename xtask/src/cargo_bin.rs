use std::ffi::OsString;
use std::path::{Path, PathBuf};
use std::process::Command;

/// Build the `unlace` binary with every experimental lifter enabled, so
/// reports cover the experimental-architecture fixtures as well.
pub fn build_unlace_bin(root: &Path) -> Result<PathBuf, String> {
    let cargo = std::env::var_os("CARGO").unwrap_or_else(|| OsString::from("cargo"));
    let mut command = Command::new(cargo);
    clear_package_env(&mut command);
    let output = command
        .args([
            "build",
            "-p",
            "unlace-cli",
            "--bin",
            "unlace",
            "--features",
            "all-arches",
            "--message-format=json-render-diagnostics",
        ])
        .current_dir(root)
        .output()
        .map_err(|e| format!("failed to spawn cargo build for unlace-cli: {e}"))?;

    if !output.status.success() {
        return Err(format!(
            "cargo build of the unlace binary failed: {}",
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

/// Remove the variables `cargo run` sets for the running xtask package.
///
/// Build scripts such as ring's declare `rerun-if-env-changed=CARGO_PKG_NAME`;
/// a nested `cargo build` that inherits `CARGO_PKG_NAME=xtask` reruns them
/// and recompiles everything downstream, then the next build from a shell
/// recompiles it all back.
fn clear_package_env(command: &mut Command) {
    for (name, _) in std::env::vars_os() {
        let is_package_var = name.to_str().is_some_and(|name| {
            name.starts_with("CARGO_PKG_")
                || name.starts_with("CARGO_MANIFEST_")
                || matches!(
                    name,
                    "CARGO_CRATE_NAME" | "CARGO_BIN_NAME" | "CARGO_PRIMARY_PACKAGE" | "OUT_DIR"
                )
        });
        if is_package_var {
            command.env_remove(name);
        }
    }
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
