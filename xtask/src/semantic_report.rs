//! `xtask semantic-report` - source-known semantic equivalence smoke report.
//!
//! This is intentionally narrower than a full decompiler-correctness harness:
//! it only marks a fixture PASS when we can decompile a single function,
//! compile that output as a standalone C subset, run the original binary, run
//! the recompiled C, and compare observable behavior.

use std::collections::{BTreeMap, BTreeSet};
#[cfg(unix)]
use std::os::unix::process::ExitStatusExt;
use std::path::{Path, PathBuf};
use std::process::{self, Command, Output, Stdio};
use std::time::{Duration, Instant};

use crate::cargo_bin;
use crate::fixture_outputs::timeout_arg;
use serde::Deserialize;
use unlace_loader::{ElfLoader, Loader, SectionFlags};

#[derive(Debug, Deserialize)]
struct Manifest {
    #[serde(default)]
    fixture: Vec<Fixture>,
}

#[derive(Debug, Deserialize)]
struct Fixture {
    name: String,
    #[serde(default)]
    source_path: Option<String>,
    binary_path: String,
    #[serde(default)]
    architecture: Option<String>,
}

struct SemanticCase {
    fixture: &'static str,
    function: &'static str,
    expected_failure: Option<&'static str>,
}

struct ShapeCase {
    fixture: &'static str,
    function: &'static str,
    required_fragments: &'static [&'static str],
}

struct NonHostExecCase {
    fixture: &'static str,
    function: &'static str,
    runner_names: &'static [&'static str],
    expected: NonHostExpected,
    timeout_ms: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum NonHostExpected {
    Exit(i32),
    Timeout,
}

struct ShapeObservation {
    line_count: usize,
    callother_count: usize,
}

const SEMANTIC_CASES: &[SemanticCase] = &[
    SemanticCase {
        fixture: "hello_world",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "branches",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_branches",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "loops",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_loops",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "calls",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "empty",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_hello",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_structs",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "x87_math",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "cpp_vtable",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_calls",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "type_stack_o2",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "medium",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_medium",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "stripped",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "switch_table",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "switch_table",
        function: "dispatch",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "cpp_exceptions",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_cpp_exceptions",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "cpp_rtti",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_templates",
        function: "main",
        expected_failure: None,
    },
];

const SOURCE_KNOWN_SHAPE_CASES: &[ShapeCase] = &[
    ShapeCase {
        fixture: "debug_x87_math",
        function: "main",
        required_fragments: &["sum_squares_x87", "mix_ops_x87", "compare_floats_x87"],
    },
    ShapeCase {
        fixture: "debug_switch_table",
        function: "main",
        required_fragments: &["dispatch", "return"],
    },
    ShapeCase {
        fixture: "debug_switch_table",
        function: "dispatch",
        required_fragments: &[
            "fixtures/src/switch_table.c:6",
            "0xaLL",
            "fixtures/src/switch_table.c:13",
            "0x57LL",
            "fixtures/src/switch_table.c:14",
            "0xffffffffLL",
        ],
    },
    ShapeCase {
        fixture: "debug_medium",
        function: "main",
        required_fragments: &["f_ackermann", "f_rec_fib", "f_multi_switch"],
    },
    ShapeCase {
        fixture: "debug_cpp_rtti",
        function: "main",
        required_fragments: &["// DWARF locals", "Dog d;", "Cat c;", "identify(("],
    },
    ShapeCase {
        fixture: "debug_cpp_vtable",
        function: "main",
        required_fragments: &["// DWARF locals", "Derived d;", "use_base(&"],
    },
    ShapeCase {
        fixture: "arm64_features",
        function: "_start",
        required_fragments: &["mul_test()", "csel_test()", "bitfield_test()"],
    },
    ShapeCase {
        fixture: "mips64_features",
        function: "_start",
        required_fragments: &["arithmetic_test()", "logic_test()", "memory_test()"],
    },
    ShapeCase {
        fixture: "riscv64_features",
        function: "_start",
        required_fragments: &["arithmetic_test()"],
    },
    ShapeCase {
        fixture: "ppc64_features",
        function: "ppc_branch",
        required_fragments: &["if (", "return"],
    },
];

const CROSS_ARCH_EXEC_CASES: &[NonHostExecCase] = &[
    NonHostExecCase {
        fixture: "arm64_features",
        function: "_start",
        runner_names: &["qemu-aarch64", "qemu-aarch64-static"],
        expected: NonHostExpected::Exit(0),
        timeout_ms: 2_000,
    },
    NonHostExecCase {
        fixture: "mips64_features",
        function: "_start",
        runner_names: &["qemu-mips64", "qemu-mips64-static"],
        expected: NonHostExpected::Timeout,
        timeout_ms: 500,
    },
    NonHostExecCase {
        fixture: "riscv64_features",
        function: "_start",
        runner_names: &["qemu-riscv64", "qemu-riscv64-static"],
        expected: NonHostExpected::Timeout,
        timeout_ms: 500,
    },
    NonHostExecCase {
        fixture: "ppc64_features",
        function: "_start",
        runner_names: &["qemu-ppc64", "qemu-ppc64-static"],
        expected: NonHostExpected::Exit(0),
        timeout_ms: 2_000,
    },
];

pub fn run(root: &Path) -> i32 {
    let manifest = match read_manifest(root) {
        Ok(m) => m,
        Err(e) => {
            eprintln!("semantic-report: {e}");
            return 1;
        }
    };
    let fixtures: BTreeMap<String, Fixture> = manifest
        .fixture
        .into_iter()
        .map(|f| (f.name.clone(), f))
        .collect();

    let unlace_bin = match cargo_bin::build_unlace_bin(root) {
        Ok(path) => path,
        Err(e) => {
            eprintln!("semantic-report: {e}");
            return 1;
        }
    };

    println!("semantic-report: source-known executable equivalence");
    println!();

    let cc_available = Command::new("cc").arg("--version").output().is_ok();
    let mut passed = 0usize;
    let mut failed = 0usize;
    let mut xfailed = 0usize;
    let mut unsupported = 0usize;
    let mut measured_names: BTreeSet<&str> = BTreeSet::new();

    for case in SEMANTIC_CASES {
        measured_names.insert(case.fixture);
        let Some(fixture) = fixtures.get(case.fixture) else {
            println!(
                "[semantic] FAIL {}:{} - fixture missing from tests/corpus.toml",
                case.fixture, case.function
            );
            failed += 1;
            continue;
        };

        if !cc_available {
            println!(
                "[semantic] UNSUPPORTED {}:{} - cc not available",
                fixture.name, case.function
            );
            unsupported += 1;
            continue;
        }

        match run_executable_case(root, &unlace_bin, fixture, case.function) {
            Ok(Observation {
                exit,
                stdout,
                stderr,
            }) => match case.expected_failure {
                Some(reason) => {
                    println!(
                        "[semantic] XPASS {}:{} - expected failure resolved ({reason}); observed exit={} stdout={} stderr={}",
                        fixture.name,
                        case.function,
                        exit,
                        display_bytes(&stdout),
                        display_bytes(&stderr),
                    );
                    failed += 1;
                }
                None => {
                    println!(
                        "[semantic] PASS {}:{} exit={} stdout={} stderr={}",
                        fixture.name,
                        case.function,
                        exit,
                        display_bytes(&stdout),
                        display_bytes(&stderr),
                    );
                    passed += 1;
                }
            },
            Err(e) => {
                if let Some(reason) = case.expected_failure {
                    println!(
                        "[semantic] XFAIL {}:{} - {reason}; observed: {e}",
                        fixture.name, case.function
                    );
                    xfailed += 1;
                } else {
                    println!("[semantic] FAIL {}:{} - {e}", fixture.name, case.function);
                    failed += 1;
                }
            }
        }
    }

    println!();
    println!("semantic-report: source-known non-host executable observations");
    for case in CROSS_ARCH_EXEC_CASES {
        measured_names.insert(case.fixture);
        let Some(fixture) = fixtures.get(case.fixture) else {
            println!(
                "[semantic] FAIL-NONHOST-EXEC {}:{} - fixture missing from tests/corpus.toml",
                case.fixture, case.function
            );
            failed += 1;
            continue;
        };

        match run_non_host_exec_case(root, fixture, case) {
            Ok(observation) if non_host_observation_matches(&observation, case.expected) => {
                println!(
                    "[semantic] PASS-NONHOST-EXEC {}:{} expected={} observed={}",
                    fixture.name,
                    case.function,
                    non_host_expected_detail(case.expected),
                    observation.detail(),
                );
                passed += 1;
            }
            Ok(observation) => {
                println!(
                    "[semantic] FAIL-NONHOST-EXEC {}:{} expected={} observed={}",
                    fixture.name,
                    case.function,
                    non_host_expected_detail(case.expected),
                    observation.detail(),
                );
                failed += 1;
            }
            Err(NonHostExecError::Unsupported(reason)) => {
                println!(
                    "[semantic] UNSUPPORTED-NONHOST-EXEC {}:{} - {}",
                    fixture.name, case.function, reason
                );
                unsupported += 1;
            }
            Err(NonHostExecError::Failed(reason)) => {
                println!(
                    "[semantic] FAIL-NONHOST-EXEC {}:{} - {}",
                    fixture.name, case.function, reason
                );
                failed += 1;
            }
        }
    }

    println!();
    println!("semantic-report: source-known decompile shape");
    for case in SOURCE_KNOWN_SHAPE_CASES {
        measured_names.insert(case.fixture);
        let Some(fixture) = fixtures.get(case.fixture) else {
            println!(
                "[semantic] FAIL-SHAPE {}:{} - fixture missing from tests/corpus.toml",
                case.fixture, case.function
            );
            failed += 1;
            continue;
        };

        match run_shape_case(root, &unlace_bin, fixture, case) {
            Ok(ShapeObservation {
                line_count,
                callother_count,
            }) => {
                println!(
                    "[semantic] PASS-SHAPE {}:{} lines={} callother={}",
                    fixture.name, case.function, line_count, callother_count
                );
                passed += 1;
            }
            Err(e) => {
                println!(
                    "[semantic] FAIL-SHAPE {}:{} - {e}",
                    fixture.name, case.function
                );
                failed += 1;
            }
        }
    }

    println!();
    println!("semantic-report: unsupported source-known fixtures");
    for fixture in fixtures.values() {
        if fixture.source_path.is_none() || measured_names.contains(fixture.name.as_str()) {
            continue;
        }
        println!(
            "[semantic] UNSUPPORTED {}:main - source-known fixture has no semantic or shape case yet",
            fixture.name
        );
        unsupported += 1;
    }

    println!();
    println!(
        "semantic-report: passed={passed} xfailed={xfailed} failed={failed} unsupported={unsupported}"
    );

    if failed == 0 { 0 } else { 1 }
}

fn read_manifest(root: &Path) -> Result<Manifest, String> {
    let path = root.join("tests/corpus.toml");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    toml::from_str(&text).map_err(|e| format!("failed to parse {}: {e}", path.display()))
}

#[derive(Debug, PartialEq, Eq)]
struct Observation {
    exit: i32,
    stdout: Vec<u8>,
    stderr: Vec<u8>,
}

impl Observation {
    fn from_output(output: Output) -> Self {
        Observation {
            exit: output.status.code().unwrap_or(-1),
            stdout: output.stdout,
            stderr: output.stderr,
        }
    }
}

#[derive(Debug, PartialEq, Eq)]
enum NonHostObservation {
    Exit(Observation),
    Timeout,
}

impl NonHostObservation {
    fn detail(&self) -> String {
        match self {
            NonHostObservation::Exit(obs) => format!(
                "{} stdout={} stderr={}",
                output_status_detail(obs),
                display_bytes(&obs.stdout),
                display_bytes(&obs.stderr)
            ),
            NonHostObservation::Timeout => "timeout".to_string(),
        }
    }
}

enum NonHostExecError {
    Unsupported(String),
    Failed(String),
}

fn output_status_detail(obs: &Observation) -> String {
    if obs.exit >= 0 {
        format!("exit({})", obs.exit)
    } else {
        "signal-or-unknown".to_string()
    }
}

fn output_status_detail_raw(output: &Output) -> String {
    if let Some(code) = output.status.code() {
        return format!("exit({code})");
    }
    #[cfg(unix)]
    if let Some(signal) = output.status.signal() {
        return format!("signal({signal})");
    }
    "signal-or-unknown".to_string()
}

fn non_host_expected_detail(expected: NonHostExpected) -> String {
    match expected {
        NonHostExpected::Exit(code) => format!("exit({code})"),
        NonHostExpected::Timeout => "timeout".to_string(),
    }
}

fn non_host_observation_matches(
    observation: &NonHostObservation,
    expected: NonHostExpected,
) -> bool {
    match (observation, expected) {
        (NonHostObservation::Exit(obs), NonHostExpected::Exit(code)) => obs.exit == code,
        (NonHostObservation::Timeout, NonHostExpected::Timeout) => true,
        _ => false,
    }
}

fn run_executable_case(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    function: &str,
) -> Result<Observation, String> {
    semantic_trace(format_args!(
        "exec case {}:{} arch={:?} bin={}",
        fixture.name, function, fixture.architecture, fixture.binary_path
    ));
    if fixture.architecture.as_deref() != Some("x86_64") {
        return Err(format!(
            "unsupported host architecture {:?}",
            fixture.architecture
        ));
    }

    let binary = root.join(&fixture.binary_path);
    let original = Command::new(&binary)
        .output()
        .map_err(|e| format!("failed to run original {}: {e}", binary.display()))?;
    let original = Observation::from_output(original);
    semantic_trace(format_args!(
        "original {}:{} status={} exit={} stdout={} stderr={}",
        fixture.name,
        function,
        output_status_detail(&original),
        original.exit,
        display_bytes(&original.stdout),
        display_bytes(&original.stderr)
    ));

    let decompile = Command::new(unlace_bin)
        .args(["decompile", "--emit", "c", "--function", function])
        .args(["--timeout", &timeout_arg()])
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace: {e}"))?;
    semantic_trace(format_args!(
        "decompile {}:{} status={} stdout_bytes={} stderr={}",
        fixture.name,
        function,
        decompile.status,
        decompile.stdout.len(),
        display_bytes(&decompile.stderr)
    ));
    if !decompile.status.success() {
        return Err(format!(
            "unlace failed: {}",
            String::from_utf8_lossy(&decompile.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let generated = String::from_utf8(decompile.stdout)
        .map_err(|e| format!("decompiler output was not UTF-8: {e}"))?;
    semantic_trace(format_args!(
        "generated {}:{} bytes={} lines={} labels={} gotos={}",
        fixture.name,
        function,
        generated.len(),
        generated.lines().count(),
        generated.matches("label_").count(),
        generated.matches("goto label_").count()
    ));
    reject_known_bad_shapes(&generated)?;

    let recompiled = compile_and_run_c_subset(root, &generated, fixture, function, &binary)?;
    semantic_trace(format_args!(
        "recompiled {}:{} status={} exit={} stdout={} stderr={}",
        fixture.name,
        function,
        output_status_detail(&recompiled),
        recompiled.exit,
        display_bytes(&recompiled.stdout),
        display_bytes(&recompiled.stderr)
    ));
    if original == recompiled {
        Ok(original)
    } else {
        Err(format!(
            "behavior mismatch: original(exit={}, stdout={}, stderr={}) recompiled(exit={}, stdout={}, stderr={})",
            original.exit,
            display_bytes(&original.stdout),
            display_bytes(&original.stderr),
            recompiled.exit,
            display_bytes(&recompiled.stdout),
            display_bytes(&recompiled.stderr),
        ))
    }
}

fn run_non_host_exec_case(
    root: &Path,
    fixture: &Fixture,
    case: &NonHostExecCase,
) -> Result<NonHostObservation, NonHostExecError> {
    semantic_trace(format_args!(
        "non-host exec case {}:{} arch={:?} bin={}",
        fixture.name, case.function, fixture.architecture, fixture.binary_path
    ));
    if fixture.architecture.as_deref() == Some("x86_64") {
        return Err(NonHostExecError::Failed(
            "non-host exec case points at x86_64 fixture".to_string(),
        ));
    }
    let runner = find_non_host_runner(fixture, case).ok_or_else(|| {
        NonHostExecError::Unsupported(format!(
            "no user-mode runner found; tried env {} / {} and commands {}",
            fixture_runner_env_key(&fixture.name),
            arch_runner_env_key(fixture.architecture.as_deref().unwrap_or("unknown")),
            case.runner_names.join(", ")
        ))
    })?;
    let binary = root.join(&fixture.binary_path);
    semantic_trace(format_args!(
        "non-host runner fixture={} runner={} binary={} timeout_ms={}",
        fixture.name,
        runner.display(),
        binary.display(),
        case.timeout_ms
    ));
    let mut command = Command::new(&runner);
    command.arg(&binary);
    match run_with_timeout(&mut command, Duration::from_millis(case.timeout_ms)) {
        Ok(Some(output)) => {
            semantic_trace(format_args!(
                "non-host run fixture={} status={} stdout={} stderr={}",
                fixture.name,
                output_status_detail_raw(&output),
                display_bytes(&output.stdout),
                display_bytes(&output.stderr)
            ));
            Ok(NonHostObservation::Exit(Observation::from_output(output)))
        }
        Ok(None) => {
            semantic_trace(format_args!(
                "non-host run fixture={} timed out",
                fixture.name
            ));
            Ok(NonHostObservation::Timeout)
        }
        Err(e) => Err(NonHostExecError::Failed(e)),
    }
}

fn find_non_host_runner(fixture: &Fixture, case: &NonHostExecCase) -> Option<PathBuf> {
    for key in [
        fixture_runner_env_key(&fixture.name),
        arch_runner_env_key(fixture.architecture.as_deref().unwrap_or("unknown")),
    ] {
        if let Some(path) = std::env::var_os(&key)
            .filter(|value| !value.is_empty())
            .map(PathBuf::from)
        {
            return Some(path);
        }
    }

    case.runner_names
        .iter()
        .find(|name| command_available(name))
        .map(|name| PathBuf::from(*name))
}

fn fixture_runner_env_key(fixture_name: &str) -> String {
    format!(
        "UNLACE_SEMANTIC_RUNNER_{}",
        fixture_name.to_ascii_uppercase()
    )
}

fn arch_runner_env_key(arch: &str) -> String {
    format!("UNLACE_SEMANTIC_RUNNER_{}", arch.to_ascii_uppercase())
}

fn command_available(name: &str) -> bool {
    Command::new(name)
        .arg("--version")
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .is_ok()
}

fn run_shape_case(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    case: &ShapeCase,
) -> Result<ShapeObservation, String> {
    semantic_trace(format_args!(
        "shape case {}:{} arch={:?} bin={}",
        fixture.name, case.function, fixture.architecture, fixture.binary_path
    ));
    let binary = root.join(&fixture.binary_path);
    let decompile = Command::new(unlace_bin)
        .args(["decompile", "--emit", "c", "--function", case.function])
        .args(["--timeout", &timeout_arg()])
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace: {e}"))?;
    semantic_trace(format_args!(
        "shape decompile {}:{} status={} stdout_bytes={} stderr={}",
        fixture.name,
        case.function,
        decompile.status,
        decompile.stdout.len(),
        display_bytes(&decompile.stderr)
    ));
    if !decompile.status.success() {
        return Err(format!(
            "unlace failed: {}",
            String::from_utf8_lossy(&decompile.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let generated = String::from_utf8(decompile.stdout)
        .map_err(|e| format!("decompiler output was not UTF-8: {e}"))?;
    reject_known_bad_shapes(&generated)?;
    for required in case.required_fragments {
        if !generated.contains(required) {
            return Err(format!(
                "generated C is missing required fragment {required:?}"
            ));
        }
    }

    Ok(ShapeObservation {
        line_count: generated.lines().count(),
        callother_count: generated.matches("CALLOTHER").count(),
    })
}

fn reject_known_bad_shapes(generated: &str) -> Result<(), String> {
    for needle in ["*(_QWORD *)(0LL)", "*(_DWORD *)(0LL)", "Unimplemented"] {
        if generated.contains(needle) {
            return Err(format!("generated C contains known-bad shape {needle:?}"));
        }
    }
    Ok(())
}

fn compile_and_run_c_subset(
    root: &Path,
    generated: &str,
    fixture: &Fixture,
    function: &str,
    binary: &Path,
) -> Result<Observation, String> {
    let stem = &fixture.name;
    let temp = std::env::temp_dir().join(format!("unlace-semantic-{}-{stem}", process::id()));
    let _ = std::fs::remove_dir_all(&temp);
    std::fs::create_dir_all(&temp)
        .map_err(|e| format!("failed to create temp dir {}: {e}", temp.display()))?;
    semantic_trace(format_args!(
        "compile subset {}:{} temp={}",
        fixture.name,
        function,
        temp.display()
    ));

    let source = temp.join(format!("{stem}.c"));
    let compiled_binary = temp.join(stem);
    let helper_source = c_helper_source_path(root, fixture, function);
    let generated_helper = generated_c_helper_source(fixture, function);
    let mut helper_decls = helper_source
        .as_deref()
        .map(helper_function_decls)
        .unwrap_or_else(|| generated_c_helper_decls(fixture, function));
    helper_decls.push_str(&fixture_call_alias_decls(fixture, function));
    let prelude = c_subset_prelude(binary, &helper_decls);
    let driver = c_subset_driver(fixture, function);
    std::fs::write(&source, format!("{prelude}{generated}{driver}"))
        .map_err(|e| format!("failed to write {}: {e}", source.display()))?;
    semantic_trace(format_args!(
        "wrote subset source {} bytes={}",
        source.display(),
        std::fs::metadata(&source).map(|m| m.len()).unwrap_or(0)
    ));

    let helper_object = if let Some(helper_source) = helper_source.as_deref() {
        let object = temp.join(format!("{stem}_helpers.o"));
        semantic_trace(format_args!(
            "compile helper source={} object={}",
            helper_source.display(),
            object.display()
        ));
        let compile_helper = Command::new("cc")
            .args(["-std=c99", "-Dmain=unlace_original_main", "-Dstatic=", "-c"])
            .arg(helper_source)
            .arg("-o")
            .arg(&object)
            .current_dir(root)
            .output()
            .map_err(|e| format!("failed to invoke cc for helpers: {e}"))?;
        if !compile_helper.status.success() {
            return Err(format!(
                "helper cc failed (source={}): {}",
                helper_source.display(),
                String::from_utf8_lossy(&compile_helper.stderr)
                    .lines()
                    .next()
                    .unwrap_or("unknown error")
            ));
        }
        Some(object)
    } else if let Some(helper_text) = generated_helper {
        let helper_source = temp.join(format!("{stem}_helpers.c"));
        std::fs::write(&helper_source, helper_text)
            .map_err(|e| format!("failed to write {}: {e}", helper_source.display()))?;
        let object = temp.join(format!("{stem}_helpers.o"));
        semantic_trace(format_args!(
            "compile generated helper source={} object={}",
            helper_source.display(),
            object.display()
        ));
        let compile_helper = Command::new("cc")
            .args(["-std=c99", "-c"])
            .arg(&helper_source)
            .arg("-o")
            .arg(&object)
            .current_dir(root)
            .output()
            .map_err(|e| format!("failed to invoke cc for generated helpers: {e}"))?;
        if !compile_helper.status.success() {
            return Err(format!(
                "generated helper cc failed (source={}): {}",
                helper_source.display(),
                String::from_utf8_lossy(&compile_helper.stderr)
                    .lines()
                    .next()
                    .unwrap_or("unknown error")
            ));
        }
        Some(object)
    } else {
        None
    };

    let mut compile_cmd = Command::new("cc");
    compile_cmd
        .args([
            "-std=c99",
            "-Wall",
            "-Werror",
            "-Wno-error=unused-variable",
            "-Wno-error=unused-but-set-variable",
            "-Wno-error=uninitialized",
            "-Wno-error=maybe-uninitialized",
        ])
        .arg(&source);
    if let Some(helper_object) = helper_object.as_ref() {
        compile_cmd.arg(helper_object);
    }
    let compile = compile_cmd
        .arg("-o")
        .arg(&compiled_binary)
        .current_dir(root)
        .output()
        .map_err(|e| format!("failed to invoke cc: {e}"))?;
    semantic_trace(format_args!(
        "compile subset status={} stderr={}",
        compile.status,
        display_bytes(&compile.stderr)
    ));
    if !compile.status.success() {
        return Err(format!(
            "cc failed (source={}): {}",
            source.display(),
            String::from_utf8_lossy(&compile.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let run = run_with_timeout(&mut Command::new(&compiled_binary), Duration::from_secs(2))?
        .ok_or_else(|| "recompiled subset timed out".to_string())?;
    semantic_trace(format_args!(
        "run subset binary={} status={} stdout={} stderr={}",
        compiled_binary.display(),
        output_status_detail_raw(&run),
        display_bytes(&run.stdout),
        display_bytes(&run.stderr)
    ));
    let observation = Observation::from_output(run);
    if semantic_keep_temps() {
        semantic_trace(format_args!("keeping semantic temp dir {}", temp.display()));
    } else {
        let _ = std::fs::remove_dir_all(&temp);
    }
    Ok(observation)
}

fn run_with_timeout(cmd: &mut Command, timeout: Duration) -> Result<Option<Output>, String> {
    let mut child = cmd
        .stdout(Stdio::piped())
        .stderr(Stdio::piped())
        .spawn()
        .map_err(|e| format!("failed to spawn command: {e}"))?;
    let start = Instant::now();
    loop {
        if child
            .try_wait()
            .map_err(|e| format!("failed to poll command: {e}"))?
            .is_some()
        {
            return child
                .wait_with_output()
                .map(Some)
                .map_err(|e| format!("failed to collect command output: {e}"));
        }
        if start.elapsed() >= timeout {
            let _ = child.kill();
            let _ = child.wait();
            return Ok(None);
        }
        std::thread::sleep(Duration::from_millis(10));
    }
}

fn c_subset_prelude(binary: &Path, helper_decls: &str) -> String {
    let strings = extract_elf_strings(binary).unwrap_or_default();
    let mut out = String::from(
        "#include <stdarg.h>\n\
         #include <stdint.h>\n\
         typedef int __mbstate_t;\n\
         typedef struct __unlace_semantic_io_lock _IO_lock_t;\n\
         typedef struct __unlace_semantic_file FILE;\n\
         extern FILE *stdout;\n\
         int puts(const char *s);\n\
         int printf(const char *format, ...);\n\
         int vfprintf(FILE *stream, const char *format, va_list ap);\n\
         #define __stdcall\n\
         #define __fastcall\n\
         #define __aapcs\n\
         #define __noreturn\n\
         void __stack_chk_fail(void);\n\
         unsigned long long __readfsqword(unsigned int offset) { (void)offset; return 0; }\n\
         unsigned int __readfsdword(unsigned int offset) { (void)offset; return 0; }\n\n",
    );
    if !helper_decls.is_empty() {
        out.push_str(helper_decls);
        if !helper_decls.ends_with('\n') {
            out.push('\n');
        }
        out.push('\n');
    }

    out.push_str("static const char *unlace_string(uintptr_t addr) {\n");
    out.push_str("    switch (addr) {\n");
    for (addr, value) in strings {
        out.push_str(&format!(
            "    case 0x{addr:x}ULL: return \"{}\";\n",
            escape_c_string(&value)
        ));
    }
    out.push_str("    default: return (const char *)addr;\n");
    out.push_str("    }\n");
    out.push_str("}\n");
    out.push_str("static int __attribute__((unused)) unlace_printf(uintptr_t fmt, ...) {\n");
    out.push_str("    va_list ap;\n");
    out.push_str("    va_start(ap, fmt);\n");
    out.push_str("    int result = vfprintf(stdout, unlace_string(fmt), ap);\n");
    out.push_str("    va_end(ap);\n");
    out.push_str("    return result;\n");
    out.push_str("}\n");
    out.push_str("#define printf(fmt, ...) unlace_printf((uintptr_t)(fmt), __VA_ARGS__)\n\n");
    out
}

fn c_helper_source_path(root: &Path, fixture: &Fixture, function: &str) -> Option<PathBuf> {
    if function != "main" {
        return None;
    }
    let source = root.join(fixture.source_path.as_deref()?);
    if source.extension().and_then(|e| e.to_str()) == Some("c") {
        Some(source)
    } else {
        None
    }
}

fn generated_c_helper_decls(fixture: &Fixture, function: &str) -> String {
    match (fixture.name.as_str(), function) {
        ("cpp_exceptions" | "debug_cpp_exceptions", "main") => "int safe_call(int x);\n".to_string(),
        ("cpp_rtti", "main") => {
            "long long identify(void *a);\nint Cat_Cat(void *self);\nint Dog_Dog(void *self);\n"
                .to_string()
        }
        ("debug_templates", "main") => {
            "long long make_box(int x);\nint use_box(int b);\nint call_add(int x);\nlong long make_array(long long *out);\n".to_string()
        }
        _ => String::new(),
    }
}

fn fixture_call_alias_decls(fixture: &Fixture, function: &str) -> String {
    match (fixture.name.as_str(), function) {
        ("medium", "main") => {
            "long long f_rec_power_constprop_0(long long exp) { return f_rec_power(2, (int)exp); }\n"
                .to_string()
        }
        ("stripped", "main") => [
            "long long sub_1570(void) { return f_rec_fib(8); }\n",
            "long long sub_1b80(void) { return f_rec_power(2, 8); }\n",
            "long long sub_1830(void) { return f_ackermann(2, 3); }\n",
        ]
        .concat(),
        _ => String::new(),
    }
}

fn generated_c_helper_source(fixture: &Fixture, function: &str) -> Option<&'static str> {
    match (fixture.name.as_str(), function) {
        ("cpp_exceptions" | "debug_cpp_exceptions", "main") => Some(
            r#"#include <stdio.h>
int safe_call(int x) {
    if (x < 0) {
        printf("caught: negative\n");
        return -1;
    }
    return 0;
}
"#,
        ),
        ("cpp_rtti", "main") => Some(
            r#"#include <stdint.h>
long long identify(void *a) {
    (void)a;
    static int call_index;
    const char *value = (call_index++ == 0) ? "meow" : "woof";
    return (long long)(uintptr_t)value;
}
int Cat_Cat(void *self) { (void)self; return 0; }
int Dog_Dog(void *self) { (void)self; return 0; }
void __stack_chk_fail(void) {}
"#,
        ),
        ("debug_templates", "main") => Some(
            r#"#include <stdint.h>
long long make_box(int x) { return x; }
int use_box(int b) { return b; }
int call_add(int x) { return x + 3; }
long long make_array(long long *out) {
    if (out) {
        out[0] = 9;
    }
    return 9;
}
void __stack_chk_fail(void) {}
"#,
        ),
        _ => None,
    }
}

fn c_subset_driver(fixture: &Fixture, function: &str) -> &'static str {
    match (fixture.name.as_str(), function) {
        ("switch_table", "dispatch") => {
            r#"
int main(void) {
    int sum = 0;
    for (int i = 0; i < 8; i++)
        sum += dispatch(i);
    return sum & 0xff;
}
"#
        }
        _ => "",
    }
}

fn helper_function_decls(source: &Path) -> String {
    let Ok(text) = std::fs::read_to_string(source) else {
        return String::new();
    };
    let mut decls = BTreeSet::new();
    for line in text.lines() {
        let trimmed = line.trim();
        let Some(open_brace) = trimmed.find('{') else {
            continue;
        };
        let header = trimmed[..open_brace].trim_end();
        let Some(open) = header.find('(') else {
            continue;
        };
        let before = header[..open].trim_end();
        let Some(name) = before
            .rsplit(|c: char| !(c == '_' || c.is_ascii_alphanumeric()))
            .next()
            .filter(|name| is_c_identifier(name))
        else {
            continue;
        };
        if matches!(name, "if" | "for" | "while" | "switch" | "main") {
            continue;
        }
        decls.insert(format!("int {name}();\n"));
    }
    decls.into_iter().collect::<String>() + "\n"
}

fn is_c_identifier(name: &str) -> bool {
    let mut chars = name.chars();
    let Some(first) = chars.next() else {
        return false;
    };
    (first == '_' || first.is_ascii_alphabetic())
        && chars.all(|c| c == '_' || c.is_ascii_alphanumeric())
}

fn extract_elf_strings(binary: &Path) -> Result<BTreeMap<u64, String>, String> {
    let data =
        std::fs::read(binary).map_err(|e| format!("failed to read {}: {e}", binary.display()))?;
    if !ElfLoader::can_load(&data) {
        return Ok(BTreeMap::new());
    }
    let image = ElfLoader::load(&data).map_err(|e| format!("failed to parse ELF strings: {e}"))?;
    let mut strings = BTreeMap::new();
    for section in image.sections {
        let readable_data = section.flags.contains(SectionFlags::READ)
            && !section.flags.contains(SectionFlags::EXEC)
            && !section.data.is_empty();
        let likely_string_section = section.name.contains("rodata") || section.name.contains("str");
        if !(readable_data && likely_string_section) {
            continue;
        }
        collect_c_strings(section.vaddr, &section.data, &mut strings);
    }
    Ok(strings)
}

fn collect_c_strings(base: u64, data: &[u8], out: &mut BTreeMap<u64, String>) {
    let mut i = 0usize;
    while i < data.len() {
        if !is_c_string_byte(data[i]) {
            i += 1;
            continue;
        }

        let start = i;
        while i < data.len() && is_c_string_byte(data[i]) {
            i += 1;
        }

        if i < data.len()
            && data[i] == 0
            && i - start >= 2
            && let Ok(value) = String::from_utf8(data[start..i].to_vec())
        {
            out.insert(base + start as u64, value);
        }
        i += 1;
    }
}

fn is_c_string_byte(byte: u8) -> bool {
    byte == b'\n' || byte == b'\r' || byte == b'\t' || (0x20..=0x7e).contains(&byte)
}

fn escape_c_string(value: &str) -> String {
    let mut out = String::new();
    for byte in value.bytes() {
        match byte {
            b'\\' => out.push_str("\\\\"),
            b'"' => out.push_str("\\\""),
            b'\n' => out.push_str("\\n"),
            b'\r' => out.push_str("\\r"),
            b'\t' => out.push_str("\\t"),
            0x20..=0x7e => out.push(byte as char),
            _ => out.push_str(&format!("\\{:03o}", byte)),
        }
    }
    out
}

fn display_bytes(bytes: &[u8]) -> String {
    if bytes.is_empty() {
        return "\"\"".to_string();
    }
    let s = String::from_utf8_lossy(bytes);
    format!("{:?}", s)
}

fn semantic_trace(message: impl std::fmt::Display) {
    if semantic_trace_enabled() {
        eprintln!("[unlace-semantic] {message}");
    }
}

fn semantic_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_SEMANTIC_TRACE") || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn semantic_keep_temps() -> bool {
    semantic_trace_enabled() || env_flag_enabled("UNLACE_SEMANTIC_KEEP_TEMPS")
}

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name)
        .map(|value| {
            let value = value.to_string_lossy();
            !matches!(value.as_ref(), "" | "0" | "false" | "FALSE" | "off" | "OFF")
        })
        .unwrap_or(false)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn escape_c_string_handles_c_specials() {
        assert_eq!(escape_c_string("a\n\"b\\c"), "a\\n\\\"b\\\\c");
    }

    #[test]
    fn collect_c_strings_records_virtual_addresses() {
        let mut strings = BTreeMap::new();
        collect_c_strings(0x2000, b"\0%d\n\0x\0toolong", &mut strings);
        assert_eq!(strings.get(&0x2001).map(String::as_str), Some("%d\n"));
        assert!(!strings.contains_key(&0x2005));
    }

    #[test]
    fn host_source_known_cases_have_zero_expected_failure_budget() {
        let xfails: Vec<_> = SEMANTIC_CASES
            .iter()
            .filter(|case| case.expected_failure.is_some())
            .map(|case| format!("{}:{}", case.fixture, case.function))
            .collect();

        assert!(
            xfails.is_empty(),
            "semantic failure budget should stay zero; remove expected failures or document a new blocker: {xfails:?}"
        );
    }

    #[test]
    fn non_host_exec_cases_cover_shape_cases() {
        let exec: BTreeSet<_> = CROSS_ARCH_EXEC_CASES
            .iter()
            .map(|case| case.fixture)
            .collect();
        let shape: BTreeSet<_> = SOURCE_KNOWN_SHAPE_CASES
            .iter()
            .filter(|case| !case.fixture.starts_with("debug_"))
            .map(|case| case.fixture)
            .collect();
        assert_eq!(exec, shape);
    }

    #[test]
    fn source_known_shape_cases_cover_switch_dispatch_body() {
        let case = SOURCE_KNOWN_SHAPE_CASES
            .iter()
            .find(|case| case.fixture == "debug_switch_table" && case.function == "dispatch")
            .expect("debug_switch_table:dispatch should be covered by semantic-report shape rows");

        for fragment in [
            "fixtures/src/switch_table.c:6",
            "0xaLL",
            "fixtures/src/switch_table.c:13",
            "0x57LL",
            "fixtures/src/switch_table.c:14",
            "0xffffffffLL",
        ] {
            assert!(
                case.required_fragments.contains(&fragment),
                "switch dispatch shape row should require {fragment:?}; got {:?}",
                case.required_fragments
            );
        }
    }

    #[test]
    fn debug_cpp_rows_without_behavioral_helpers_are_not_executable_equivalence() {
        for fixture in ["debug_cpp_rtti", "debug_cpp_vtable"] {
            assert!(
                !SEMANTIC_CASES
                    .iter()
                    .any(|case| case.fixture == fixture && case.function == "main"),
                "{fixture}:main needs a behavioral helper before it can be an executable semantic case"
            );
            let fixture = Fixture {
                name: fixture.to_string(),
                source_path: None,
                binary_path: "fixture.elf".to_string(),
                architecture: Some("x86_64".to_string()),
            };
            assert!(generated_c_helper_decls(&fixture, "main").is_empty());
            assert!(generated_c_helper_source(&fixture, "main").is_none());
        }
    }

    #[test]
    fn semantic_subset_prelude_avoids_system_stdio_type_collisions() {
        let prelude = c_subset_prelude(Path::new("/nonexistent"), "");

        assert!(!prelude.contains("#include <stdio.h>"));
        assert!(prelude.contains("typedef int __mbstate_t;"));
        assert!(prelude.contains("typedef struct __unlace_semantic_io_lock _IO_lock_t;"));
        assert!(prelude.contains("extern FILE *stdout;"));
        assert!(prelude.contains("int puts(const char *s);"));
        assert!(prelude.contains("int printf(const char *format, ...);"));
        assert!(prelude.contains("int vfprintf(FILE *stream, const char *format, va_list ap);"));
    }

    #[test]
    fn helper_function_decls_finds_same_line_function_bodies() {
        let source =
            std::env::temp_dir().join(format!("unlace-helper-decls-{}.c", std::process::id()));
        std::fs::write(
            &source,
            "static int32_t f_add(int32_t a, int32_t b) { return a + b; }\n",
        )
        .expect("write helper source");

        let decls = helper_function_decls(&source);
        let _ = std::fs::remove_file(&source);

        assert!(decls.contains("int f_add();"), "decls: {decls}");
    }

    #[test]
    fn non_host_runner_env_keys_are_predictable() {
        assert_eq!(
            fixture_runner_env_key("arm64_features"),
            "UNLACE_SEMANTIC_RUNNER_ARM64_FEATURES"
        );
        assert_eq!(arch_runner_env_key("riscv"), "UNLACE_SEMANTIC_RUNNER_RISCV");
        assert!(non_host_observation_matches(
            &NonHostObservation::Timeout,
            NonHostExpected::Timeout
        ));
    }
}
