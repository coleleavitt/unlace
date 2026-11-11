//! Reproducible corpus builds: every program under every toolchain, unstripped
//! (with DWARF) and stripped. Stripped binaries are `llvm-objcopy --strip-all`
//! copies of the unstripped ones, so function addresses match across the pair.

use std::fmt;
use std::path::{Path, PathBuf};
use std::process::Command;

use serde::Serialize;

use super::manifest::Program;

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Serialize)]
pub enum Toolchain {
    #[serde(rename = "gcc-x86_64")]
    GccX86_64,
    #[serde(rename = "clang-x86_64")]
    ClangX86_64,
    /// No AArch64 libc on the build host: `-ffreestanding` plus
    /// `rt/freestanding.c`, linked static with `ld.lld`, runnable under
    /// `qemu-aarch64`.
    #[serde(rename = "clang-aarch64-freestanding")]
    ClangAarch64Freestanding,
}

impl Toolchain {
    pub const ALL: [Toolchain; 3] = [
        Toolchain::GccX86_64,
        Toolchain::ClangX86_64,
        Toolchain::ClangAarch64Freestanding,
    ];

    pub fn as_str(self) -> &'static str {
        match self {
            Toolchain::GccX86_64 => "gcc-x86_64",
            Toolchain::ClangX86_64 => "clang-x86_64",
            Toolchain::ClangAarch64Freestanding => "clang-aarch64-freestanding",
        }
    }

    fn compiler(self) -> &'static str {
        match self {
            Toolchain::GccX86_64 => "gcc",
            Toolchain::ClangX86_64 | Toolchain::ClangAarch64Freestanding => "clang",
        }
    }

    fn compile_flags(self) -> &'static [&'static str] {
        match self {
            Toolchain::GccX86_64 => &[
                "-std=gnu11",
                "-O2",
                "-g",
                "-gno-record-gcc-switches",
                "-fPIE",
                "-fstack-protector-strong",
                "-U_FORTIFY_SOURCE",
                "-D_FORTIFY_SOURCE=2",
                "-fcf-protection=full",
            ],
            Toolchain::ClangX86_64 => &[
                "-std=gnu11",
                "-O2",
                "-g",
                "-fPIE",
                "-fstack-protector-strong",
                "-U_FORTIFY_SOURCE",
                "-D_FORTIFY_SOURCE=2",
                "-fcf-protection=full",
            ],
            Toolchain::ClangAarch64Freestanding => &[
                "--target=aarch64-linux-gnu",
                "-std=gnu11",
                "-O2",
                "-g",
                "-ffreestanding",
                "-fno-stack-protector",
                "-fno-pic",
                "-Iinclude/freestanding",
            ],
        }
    }

    /// Version line of the compiler, recorded in the report so baselines are
    /// only compared across identical toolchains.
    pub fn version(self) -> Result<String, String> {
        let output = Command::new(self.compiler())
            .arg("--version")
            .output()
            .map_err(|e| format!("{} not runnable: {e}", self.compiler()))?;
        if !output.status.success() {
            return Err(format!("{} --version failed", self.compiler()));
        }
        Ok(String::from_utf8_lossy(&output.stdout)
            .lines()
            .next()
            .unwrap_or_default()
            .trim()
            .to_string())
    }
}

impl fmt::Display for Toolchain {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.as_str())
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Serialize)]
#[serde(rename_all = "kebab-case")]
pub enum Variant {
    Unstripped,
    Stripped,
}

impl Variant {
    pub const ALL: [Variant; 2] = [Variant::Unstripped, Variant::Stripped];

    pub fn as_str(self) -> &'static str {
        match self {
            Variant::Unstripped => "unstripped",
            Variant::Stripped => "stripped",
        }
    }
}

/// One toolchain/variant cell of the build matrix.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Serialize)]
pub struct Config {
    pub toolchain: Toolchain,
    pub variant: Variant,
}

impl fmt::Display for Config {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}/{}", self.toolchain, self.variant.as_str())
    }
}

/// The unstripped and stripped binaries of one program under one toolchain.
#[derive(Debug, Clone)]
pub struct BuiltProgram {
    pub unstripped: PathBuf,
    pub stripped: PathBuf,
}

impl BuiltProgram {
    pub fn binary(&self, variant: Variant) -> &Path {
        match variant {
            Variant::Unstripped => &self.unstripped,
            Variant::Stripped => &self.stripped,
        }
    }
}

pub struct Builder<'a> {
    pub corpus_dir: &'a Path,
    pub out_dir: &'a Path,
}

impl Builder<'_> {
    pub fn build(&self, toolchain: Toolchain, program: &Program) -> Result<BuiltProgram, String> {
        let dir = self.out_dir.join(toolchain.as_str());
        std::fs::create_dir_all(&dir)
            .map_err(|e| format!("failed to create {}: {e}", dir.display()))?;
        let unstripped = dir.join(&program.name);
        let stripped = dir.join(format!("{}.stripped", program.name));

        let mut cmd = self.compiler_command(toolchain);
        cmd.args(&program.cflags);
        match toolchain {
            Toolchain::GccX86_64 | Toolchain::ClangX86_64 => {
                cmd.arg("-pie");
            }
            Toolchain::ClangAarch64Freestanding => {
                cmd.arg(dir.join(FREESTANDING_RT)).args([
                    "-fuse-ld=lld",
                    "-nostdlib",
                    "-static",
                    "-Wl,-e,_start",
                ]);
            }
        }
        cmd.args(&program.sources).arg("-o").arg(&unstripped);
        run(
            &mut cmd,
            &format!("build {} with {toolchain}", program.name),
        )?;

        run(
            Command::new("llvm-objcopy")
                .arg("--strip-all")
                .arg(&unstripped)
                .arg(&stripped),
            &format!("strip {}", unstripped.display()),
        )?;
        Ok(BuiltProgram {
            unstripped,
            stripped,
        })
    }

    fn compiler_command(&self, toolchain: Toolchain) -> Command {
        let mut cmd = Command::new(toolchain.compiler());
        cmd.current_dir(self.corpus_dir)
            .args(toolchain.compile_flags())
            .arg(format!("-ffile-prefix-map={}=.", self.corpus_dir.display()))
            .arg("-Iinclude");
        cmd
    }

    /// Builds what every program of `toolchain` links against. Call once
    /// before building programs in parallel.
    pub fn prepare(&self, toolchain: Toolchain) -> Result<(), String> {
        let dir = self.out_dir.join(toolchain.as_str());
        std::fs::create_dir_all(&dir)
            .map_err(|e| format!("failed to create {}: {e}", dir.display()))?;
        if toolchain != Toolchain::ClangAarch64Freestanding {
            return Ok(());
        }
        // Unoptimized so the `mem*` loops are not turned back into calls to
        // themselves.
        let mut cmd = Command::new("clang");
        cmd.current_dir(self.corpus_dir)
            .args([
                "--target=aarch64-linux-gnu",
                "-ffreestanding",
                "-fno-stack-protector",
                "-fno-pic",
                "-O0",
                "-c",
                "rt/freestanding.c",
                "-o",
            ])
            .arg(dir.join(FREESTANDING_RT));
        run(&mut cmd, "build rt/freestanding.c")
    }
}

const FREESTANDING_RT: &str = "freestanding-rt.o";

pub fn run(cmd: &mut Command, what: &str) -> Result<(), String> {
    let output = cmd
        .output()
        .map_err(|e| format!("{what}: failed to spawn {:?}: {e}", cmd.get_program()))?;
    if output.status.success() {
        return Ok(());
    }
    let stderr = String::from_utf8_lossy(&output.stderr);
    Err(format!(
        "{what}: {}",
        stderr
            .lines()
            .find(|l| !l.trim().is_empty())
            .unwrap_or("failed")
    ))
}
