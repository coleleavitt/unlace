//! Recompile-and-run equivalence for one decompiled function at a time.
//!
//! This generalizes the `xtask semantic-report` approach: the program's own
//! sources supply every other function (built at `-O0` with
//! `-ffunction-sections`), the measured function's symbol is weakened in those
//! objects, and the decompiled function, compiled from unlace's listing,
//! provides the strong definition. The relinked program must reproduce the
//! original build's exit status and stdout.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::process::{Command, Output, Stdio};
use std::time::{Duration, Instant};

use serde::{Deserialize, Serialize};

use super::build::{self, Toolchain};
use super::listing::{FunctionText, Listing};
use super::manifest::Program;
use super::oracle::BuildTruth;

const RUN_TIMEOUT: Duration = Duration::from_secs(10);

#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
#[serde(tag = "status", content = "detail", rename_all = "kebab-case")]
pub enum Equivalence {
    Pass,
    Mismatch(String),
    CompileError(String),
    LinkError(String),
    /// The function cannot be swapped in independently, e.g. it is or calls
    /// a compiler clone that does not exist in the `-O0` helper build.
    Untestable(String),
}

/// Observable behaviour of one program run.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Behaviour {
    Exited { code: i32, stdout: Vec<u8> },
    Signalled,
    TimedOut,
}

impl Behaviour {
    /// How `observed` differs from `self`, coarse enough to be stable when
    /// the decompiled code reads uninitialized (per-run random) values.
    fn difference(&self, observed: &Behaviour) -> &'static str {
        match (self, observed) {
            (_, Behaviour::Signalled) => "recompiled program was killed by a signal",
            (_, Behaviour::TimedOut) => "recompiled program timed out",
            (
                Behaviour::Exited { code, stdout },
                Behaviour::Exited {
                    code: observed_code,
                    stdout: observed_stdout,
                },
            ) => match (code == observed_code, stdout == observed_stdout) {
                (false, false) => "exit status and stdout differ",
                (false, true) => "exit status differs",
                (true, false) => "stdout differs",
                (true, true) => "same behaviour",
            },
            _ => "original program did not exit normally",
        }
    }
}

/// How decompiled C is compiled, linked, and run for one toolchain.
struct Target {
    compiler: &'static str,
    compile: &'static [&'static str],
    link: &'static [&'static str],
    runner: Option<&'static str>,
}

const HOST: Target = Target {
    compiler: "gcc",
    compile: &[
        "-std=gnu11",
        "-O0",
        "-fPIE",
        "-w",
        "-fpermissive",
        "-fno-stack-protector",
    ],
    link: &["-pie"],
    runner: None,
};

const AARCH64_FREESTANDING: Target = Target {
    compiler: "clang",
    compile: &[
        "--target=aarch64-linux-gnu",
        "-std=gnu11",
        "-O0",
        "-ffreestanding",
        "-fno-pic",
        "-fno-stack-protector",
        "-w",
        "-Wno-error=implicit-function-declaration",
        "-Wno-error=implicit-int",
        "-Wno-error=int-conversion",
        "-Wno-error=incompatible-pointer-types",
        "-Wno-error=return-type",
        "-Iinclude/freestanding",
    ],
    link: &[
        "--target=aarch64-linux-gnu",
        "-fuse-ld=lld",
        "-nostdlib",
        "-static",
        "-Wl,-e,_start",
    ],
    runner: Some("qemu-aarch64"),
};

impl Toolchain {
    fn recompile_target(self) -> &'static Target {
        match self {
            Toolchain::GccX86_64 | Toolchain::ClangX86_64 => &HOST,
            Toolchain::ClangAarch64Freestanding => &AARCH64_FREESTANDING,
        }
    }
}

/// Declarations the decompiled C may rely on without the unlace prelude
/// providing them.
const HARNESS_PRELUDE: &str = "#include <stdint.h>\n\
#include <stddef.h>\n\
#define __fastcall\n\
#define __stdcall\n\
#define __cdecl\n\
#define __thiscall\n\
#define __aapcs\n\
#define __noreturn\n";

/// `__readfsqword` as real `%fs`-relative loads, so stack-canary checks in
/// decompiled functions compare against the live canary.
const HOST_RUNTIME: &str = "unsigned long long __readfsqword(unsigned int offset) {\n\
    unsigned long long value;\n\
    __asm__ volatile(\"movq %%fs:(%1), %0\" : \"=r\"(value) : \"r\"((unsigned long)offset));\n\
    return value;\n\
}\n\
unsigned int __readfsdword(unsigned int offset) {\n\
    unsigned int value;\n\
    __asm__ volatile(\"movl %%fs:(%1), %0\" : \"=r\"(value) : \"r\"((unsigned long)offset));\n\
    return value;\n\
}\n";

/// Per program/toolchain state shared by every function swap.
pub struct Harness {
    work_dir: PathBuf,
    toolchain: Toolchain,
    original: Behaviour,
    helpers: Vec<PathBuf>,
    runtime: Vec<PathBuf>,
}

impl Harness {
    /// Builds the `-O0` helper objects and records the original behaviour.
    pub fn prepare(
        corpus_dir: &Path,
        work_dir: PathBuf,
        program: &Program,
        toolchain: Toolchain,
        original_binary: &Path,
        freestanding_rt: &Path,
    ) -> Result<Self, String> {
        let target = toolchain.recompile_target();
        std::fs::create_dir_all(&work_dir)
            .map_err(|e| format!("failed to create {}: {e}", work_dir.display()))?;
        let original = run_program(target, original_binary)?;

        let mut helpers = Vec::new();
        for (index, source) in program.sources.iter().enumerate() {
            let object = work_dir.join(format!("helper{index}.o"));
            let mut cmd = Command::new(target.compiler);
            cmd.current_dir(corpus_dir)
                .args(target.compile)
                .args(["-ffunction-sections", "-Iinclude"])
                .args(&program.cflags)
                .arg("-c")
                .arg(source)
                .arg("-o")
                .arg(&object);
            build::run(&mut cmd, &format!("helper build of {}", source.display()))?;
            helpers.push(object);
        }

        let runtime = match toolchain {
            Toolchain::GccX86_64 | Toolchain::ClangX86_64 => {
                let source = work_dir.join("runtime.c");
                std::fs::write(&source, HOST_RUNTIME)
                    .map_err(|e| format!("failed to write {}: {e}", source.display()))?;
                let object = work_dir.join("runtime.o");
                let mut cmd = Command::new(target.compiler);
                cmd.args(target.compile)
                    .arg("-c")
                    .arg(&source)
                    .arg("-o")
                    .arg(&object);
                build::run(&mut cmd, "harness runtime build")?;
                vec![object]
            }
            Toolchain::ClangAarch64Freestanding => vec![freestanding_rt.to_path_buf()],
        };

        Ok(Harness {
            work_dir,
            toolchain,
            original,
            helpers,
            runtime,
        })
    }

    /// Swaps the decompiled `function` into the program and compares behaviour.
    pub fn check(
        &self,
        listing: &Listing<'_>,
        truth: &BuildTruth,
        function: &FunctionText<'_>,
        label: &str,
    ) -> Equivalence {
        match self.try_check(listing, truth, function, label) {
            Ok(result) | Err(result) => result,
        }
    }

    fn try_check(
        &self,
        listing: &Listing<'_>,
        truth: &BuildTruth,
        function: &FunctionText<'_>,
        label: &str,
    ) -> Result<Equivalence, Equivalence> {
        let target = self.toolchain.recompile_target();
        let symbol = truth
            .symbols
            .get(&function.addr)
            .ok_or_else(|| Equivalence::Untestable("no symbol at function address".to_string()))?;
        if symbol.contains('.') {
            return Err(Equivalence::Untestable(format!(
                "{symbol} is a compiler clone"
            )));
        }

        // Decompiled identifier -> real symbol, for every function the
        // listing names differently from the unstripped build.
        let renames: BTreeMap<&str, &str> = listing
            .functions
            .iter()
            .filter_map(|f| {
                let real = truth.symbols.get(&f.addr)?;
                (f.signature.ident != real).then_some((f.signature.ident, real.as_str()))
            })
            .collect();
        let referenced = identifiers(function.body);
        if let Some(clone) = listing.functions.iter().find_map(|f| {
            let real = truth.symbols.get(&f.addr)?;
            (real.contains('.')
                && f.addr != function.addr
                && referenced.contains(f.signature.ident))
            .then_some(real)
        }) {
            return Err(Equivalence::Untestable(format!(
                "calls compiler clone {clone}"
            )));
        }

        let dir = self.work_dir.join(label);
        std::fs::create_dir_all(&dir).map_err(|e| {
            Equivalence::CompileError(format!("failed to create {}: {e}", dir.display()))
        })?;
        let source = dir.join("decompiled.c");
        std::fs::write(&source, translation_unit(listing, function)).map_err(|e| {
            Equivalence::CompileError(format!("failed to write {}: {e}", source.display()))
        })?;
        let object = dir.join("decompiled.o");
        let mut compile = Command::new(target.compiler);
        compile.current_dir(&dir).args(target.compile).args([
            "-c",
            "decompiled.c",
            "-o",
            "decompiled.o",
        ]);
        command_result(&mut compile).map_err(Equivalence::CompileError)?;

        let mut objcopy = Command::new("llvm-objcopy");
        for (from, to) in &renames {
            objcopy.arg(format!("--redefine-sym={from}={to}"));
        }
        objcopy.arg(&object);
        command_result(&mut objcopy).map_err(Equivalence::LinkError)?;

        let mut link = Command::new(target.compiler);
        link.current_dir(&dir).args(target.link).arg(&object);
        for (index, helper) in self.helpers.iter().enumerate() {
            let weakened = dir.join(format!("helper{index}.o"));
            let mut weaken = Command::new("llvm-objcopy");
            weaken
                .arg(format!("--weaken-symbol={symbol}"))
                .arg(helper)
                .arg(&weakened);
            command_result(&mut weaken).map_err(Equivalence::LinkError)?;
            link.arg(weakened);
        }
        let program = dir.join("program");
        link.args(&self.runtime).arg("-o").arg(&program);
        command_result(&mut link).map_err(Equivalence::LinkError)?;

        let observed = run_program(target, &program).map_err(Equivalence::Mismatch)?;
        if observed == self.original {
            Ok(Equivalence::Pass)
        } else {
            Ok(Equivalence::Mismatch(
                self.original.difference(&observed).to_string(),
            ))
        }
    }
}

/// Unlace's prelude and globals, prototypes for the other printed functions
/// the measured function refers to, and the measured function with its own
/// preamble.
fn translation_unit(listing: &Listing<'_>, function: &FunctionText<'_>) -> String {
    let mut tu = String::from(HARNESS_PRELUDE);
    tu.push_str(listing.prelude);
    let declared = identifiers(listing.prelude);
    let referenced = identifiers(function.body);
    for other in &listing.functions {
        if other.addr != function.addr
            && other.signature.ident != function.signature.ident
            && referenced.contains(other.signature.ident)
            && !declared.contains(other.signature.ident)
        {
            tu.push_str(other.signature.declarator);
            tu.push_str(";\n");
        }
    }
    tu.push_str(function.preamble);
    tu.push_str(function.text);
    tu
}

fn identifiers(text: &str) -> BTreeSet<&str> {
    text.split(|c: char| !(c == '_' || c.is_ascii_alphanumeric()))
        .filter(|word| word.starts_with(|c: char| c == '_' || c.is_ascii_alphabetic()))
        .collect()
}

fn command_result(cmd: &mut Command) -> Result<(), String> {
    let output = cmd
        .output()
        .map_err(|e| format!("failed to spawn {:?}: {e}", cmd.get_program()))?;
    if output.status.success() {
        Ok(())
    } else {
        Err(first_error(&output))
    }
}

fn first_error(output: &Output) -> String {
    let stderr = String::from_utf8_lossy(&output.stderr);
    let line = ["undefined reference", "multiple definition", "error"]
        .iter()
        .find_map(|needle| stderr.lines().find(|l| l.contains(needle)))
        .or_else(|| stderr.lines().find(|l| !l.trim().is_empty()))
        .unwrap_or("failed");
    let line = line
        .rsplit_once("decompiled.c:")
        .map_or(line, |(_, rest)| rest);
    line.trim().chars().take(240).collect()
}

fn run_program(target: &Target, binary: &Path) -> Result<Behaviour, String> {
    // No ASLR, no environment, and a location-independent argv[0]: decompiled
    // code that reads uninitialized stack then behaves the same on every run.
    let dir = binary.parent().unwrap_or(Path::new("."));
    let name = binary
        .file_name()
        .ok_or_else(|| format!("{} has no file name", binary.display()))?;
    let mut cmd = Command::new("setarch");
    cmd.args([std::env::consts::ARCH, "-R"])
        .args(target.runner)
        .arg(Path::new(".").join(name))
        .current_dir(dir)
        .env_clear();
    let mut child = cmd
        .stdin(Stdio::null())
        .stdout(Stdio::piped())
        .stderr(Stdio::null())
        .spawn()
        .map_err(|e| format!("failed to run {}: {e}", binary.display()))?;
    let start = Instant::now();
    loop {
        match child.try_wait() {
            Ok(Some(_)) => break,
            Ok(None) if start.elapsed() < RUN_TIMEOUT => {
                std::thread::sleep(Duration::from_millis(5))
            }
            Ok(None) => {
                let _ = child.kill();
                let _ = child.wait();
                return Ok(Behaviour::TimedOut);
            }
            Err(e) => return Err(format!("failed to wait for {}: {e}", binary.display())),
        }
    }
    let output = child
        .wait_with_output()
        .map_err(|e| format!("failed to collect {}: {e}", binary.display()))?;
    Ok(match output.status.code() {
        Some(code) => Behaviour::Exited {
            code,
            stdout: output.stdout,
        },
        None => Behaviour::Signalled,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn translation_unit_keeps_own_preamble_and_referenced_prototypes() {
        let c = r"typedef int T;
// Recovered composite layouts
struct __anon0 { long a; };
/* Function:   f | Address: 0x10 | Size: 0x4 */
int f(struct __anon0 * a1) {
    return 0;
}
// Recovered composite layouts
struct __anon0 { int b; };
/* Function:   g | Address: 0x20 | Size: 0x4 */
int g(int a1) {
    return f(0) + a1;
}
/* Function:   h | Address: 0x30 | Size: 0x4 */
int h(void) {
    return 1;
}
";
        let listing = Listing::parse(c);
        let g = listing.by_addr(0x20).expect("g is listed");
        let tu = translation_unit(&listing, g);
        assert!(tu.contains("typedef int T;\n"));
        assert!(tu.contains("struct __anon0 { int b; };"));
        assert!(!tu.contains("struct __anon0 { long a; };"));
        assert!(tu.contains("int f(struct __anon0 * a1);\n"));
        assert!(!tu.contains("int h(void);"));
    }

    #[test]
    fn mismatch_reasons_ignore_exact_values() {
        let original = Behaviour::Exited {
            code: 3,
            stdout: b"a".to_vec(),
        };
        let other = Behaviour::Exited {
            code: 4,
            stdout: b"a".to_vec(),
        };
        assert_eq!(original.difference(&other), "exit status differs");
        assert_eq!(
            original.difference(&Behaviour::Signalled),
            "recompiled program was killed by a signal"
        );
    }
}
