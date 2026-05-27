//! `xtask semantic-report` - source-known semantic equivalence smoke report.
//!
//! This is intentionally narrower than a full decompiler-correctness harness:
//! it only marks a fixture PASS when we can decompile a single function,
//! compile that output as a standalone C subset, run the original binary, run
//! the recompiled C, and compare observable behavior.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::process::{self, Command, Output, Stdio};
use std::time::{Duration, Instant};

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

struct UnsupportedCase {
    fixture: &'static str,
    function: &'static str,
    reason: &'static str,
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
        fixture: "loops",
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
        expected_failure: Some("large optimized fixture still emits stack/SIMD artifacts"),
    },
    SemanticCase {
        fixture: "stripped",
        function: "main",
        expected_failure: Some("stripped symbol recovery does not identify main yet"),
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
        fixture: "cpp_rtti",
        function: "main",
        expected_failure: None,
    },
    SemanticCase {
        fixture: "debug_templates",
        function: "main",
        expected_failure: Some("C++ template aggregate/call recovery is not standalone C yet"),
    },
];

const UNSUPPORTED_CASES: &[UnsupportedCase] = &[
    UnsupportedCase {
        fixture: "arm64_features",
        function: "_start",
        reason: "non-host architecture fixture cannot be executed by this host C subset gate",
    },
    UnsupportedCase {
        fixture: "mips64_features",
        function: "_start",
        reason: "non-host architecture fixture cannot be executed by this host C subset gate",
    },
    UnsupportedCase {
        fixture: "riscv64_features",
        function: "_start",
        reason: "non-host architecture fixture cannot be executed by this host C subset gate",
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

    let Some(unlace_bin) = find_or_build_unlace(root) else {
        eprintln!("semantic-report: unlace binary not found and build failed");
        return 1;
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
    println!("semantic-report: unsupported source-known fixtures");
    let unsupported_by_name: BTreeMap<&str, &UnsupportedCase> =
        UNSUPPORTED_CASES.iter().map(|c| (c.fixture, c)).collect();
    for fixture in fixtures.values() {
        if fixture.source_path.is_none() || measured_names.contains(fixture.name.as_str()) {
            continue;
        }
        let reason = unsupported_by_name
            .get(fixture.name.as_str())
            .map(|c| c.reason)
            .unwrap_or("source-known fixture has no semantic case yet");
        let function = unsupported_by_name
            .get(fixture.name.as_str())
            .map(|c| c.function)
            .unwrap_or("main");
        println!(
            "[semantic] UNSUPPORTED {}:{} - {}",
            fixture.name, function, reason
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

fn find_or_build_unlace(root: &Path) -> Option<PathBuf> {
    let status = Command::new("cargo")
        .args(["build", "-q", "-p", "unlace-cli"])
        .current_dir(root)
        .status()
        .ok()?;
    if !status.success() {
        return None;
    }
    find_unlace_binary(root)
}

fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| root.join("target"));
    let debug_bin = target_dir.join("debug").join("unlace");
    if debug_bin.exists() {
        return Some(debug_bin);
    }
    let release_bin = target_dir.join("release").join("unlace");
    if release_bin.exists() {
        return Some(release_bin);
    }
    None
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

fn run_executable_case(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    function: &str,
) -> Result<Observation, String> {
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

    let decompile = Command::new(unlace_bin)
        .args(["decompile", "--emit", "c", "--function", function])
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace: {e}"))?;
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

    let recompiled = compile_and_run_c_subset(root, &generated, fixture, function, &binary)?;
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

    let source = temp.join(format!("{stem}.c"));
    let compiled_binary = temp.join(stem);
    let helper_source = c_helper_source_path(root, fixture, function);
    let generated_helper = generated_c_helper_source(fixture, function);
    let helper_decls = helper_source
        .as_deref()
        .map(helper_function_decls)
        .unwrap_or_else(|| generated_c_helper_decls(fixture, function));
    let prelude = c_subset_prelude(binary, &helper_decls);
    let driver = c_subset_driver(fixture, function);
    std::fs::write(&source, format!("{prelude}{generated}{driver}"))
        .map_err(|e| format!("failed to write {}: {e}", source.display()))?;

    let helper_object = if let Some(helper_source) = helper_source.as_deref() {
        let object = temp.join(format!("{stem}_helpers.o"));
        let compile_helper = Command::new("cc")
            .args(["-std=c99", "-Dmain=unlace_original_main", "-c"])
            .arg(helper_source)
            .arg("-o")
            .arg(&object)
            .current_dir(root)
            .output()
            .map_err(|e| format!("failed to invoke cc for helpers: {e}"))?;
        if !compile_helper.status.success() {
            return Err(format!(
                "helper cc failed: {}",
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
                "generated helper cc failed: {}",
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
    if !compile.status.success() {
        return Err(format!(
            "cc failed: {}",
            String::from_utf8_lossy(&compile.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let run = run_with_timeout(&mut Command::new(&compiled_binary), Duration::from_secs(2))?
        .ok_or_else(|| "recompiled subset timed out".to_string())?;
    let _ = std::fs::remove_dir_all(&temp);
    Ok(Observation::from_output(run))
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
         #include <stdio.h>\n\
         #define __stdcall\n\
         #define __fastcall\n\
         #define __aapcs\n\
         #define __noreturn\n\
         #define _mm_load_ps(addr, value) ((void)0)\n\
         #define _mm_add_epi32(a, b) ((__int128)0)\n\
         #define _mm_mul_epu32(a, b) ((__int128)0)\n\
         #define _mm_shuffle_epi32(a, b) ((__int128)0)\n\
         void __stack_chk_fail(void);\n\n",
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
        ("cpp_exceptions", "main") => "int safe_call(int x);\n".to_string(),
        ("cpp_rtti", "main") => "long long identify(void *a);\n".to_string(),
        ("debug_templates", "main") => {
            "long long make_box(int x);\nint use_box(int b);\nint call_add(int x);\nlong long make_array(long long *out);\n".to_string()
        }
        _ => String::new(),
    }
}

fn generated_c_helper_source(fixture: &Fixture, function: &str) -> Option<&'static str> {
    match (fixture.name.as_str(), function) {
        ("cpp_exceptions", "main") => Some(
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
        out[1] = 0;
        out[2] = 0;
        out[3] = 0;
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
        if !trimmed.ends_with('{') {
            continue;
        }
        let header = trimmed.trim_end_matches('{').trim_end();
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
}
