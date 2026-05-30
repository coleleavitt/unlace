//! `xtask type-recovery-report` - DWARF/source-backed type recovery score.
//!
//! This is intentionally conservative: only source-known ELF fixtures with
//! extractable DWARF are exact-scored. The recovered side is the user-visible C
//! output from `unlace batch`, so the report measures what a reverser actually
//! sees rather than internal debug-info availability. The report also keeps
//! explicit breadth denominators for source-only, C++, optimized, and non-host
//! fixtures so unsupported areas stay visible.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::process::{self, Command};

use serde::Deserialize;
use unlace_loader::{DwarfInfo, ElfLoader, FunctionDebugInfo, Loader, StructField, import_dwarf};

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
    flags: Option<String>,
    #[serde(default)]
    architecture: Option<String>,
    #[serde(default)]
    feature_tags: Vec<String>,
}

#[derive(Debug, Default, Clone, Copy)]
struct Counter {
    expected: usize,
    recovered: usize,
    reported: usize,
}

impl Counter {
    fn add_expected(&mut self, recovered: bool) {
        self.expected += 1;
        if recovered {
            self.recovered += 1;
        }
    }

    fn add_reported(&mut self, reported: usize) {
        self.reported += reported;
    }

    fn merge(&mut self, other: Counter) {
        self.expected += other.expected;
        self.recovered += other.recovered;
        self.reported += other.reported;
    }

    fn precision_denominator(&self) -> usize {
        self.reported.max(self.recovered)
    }
}

#[derive(Debug, Default, Clone)]
struct TypeScore {
    fixtures: usize,
    functions: usize,
    c_functions: usize,
    cpp_functions: usize,
    return_types: Counter,
    param_names: Counter,
    param_types: Counter,
    local_names: Counter,
    local_types: Counter,
    struct_names: Counter,
    field_names: Counter,
    field_types: Counter,
    pointer_types: Counter,
    array_types: Counter,
    struct_ref_types: Counter,
}

impl TypeScore {
    fn merge(&mut self, other: &TypeScore) {
        self.fixtures += other.fixtures;
        self.functions += other.functions;
        self.c_functions += other.c_functions;
        self.cpp_functions += other.cpp_functions;
        self.return_types.merge(other.return_types);
        self.param_names.merge(other.param_names);
        self.param_types.merge(other.param_types);
        self.local_names.merge(other.local_names);
        self.local_types.merge(other.local_types);
        self.struct_names.merge(other.struct_names);
        self.field_names.merge(other.field_names);
        self.field_types.merge(other.field_types);
        self.pointer_types.merge(other.pointer_types);
        self.array_types.merge(other.array_types);
        self.struct_ref_types.merge(other.struct_ref_types);
    }

    fn expected(&self) -> usize {
        self.return_types.expected
            + self.param_names.expected
            + self.param_types.expected
            + self.local_names.expected
            + self.local_types.expected
            + self.struct_names.expected
            + self.field_names.expected
            + self.field_types.expected
            + self.pointer_types.expected
            + self.array_types.expected
            + self.struct_ref_types.expected
    }

    fn recovered(&self) -> usize {
        self.return_types.recovered
            + self.param_names.recovered
            + self.param_types.recovered
            + self.local_names.recovered
            + self.local_types.recovered
            + self.struct_names.recovered
            + self.field_names.recovered
            + self.field_types.recovered
            + self.pointer_types.recovered
            + self.array_types.recovered
            + self.struct_ref_types.recovered
    }

    fn reported(&self) -> usize {
        self.return_types.precision_denominator()
            + self.param_names.precision_denominator()
            + self.param_types.precision_denominator()
            + self.local_names.precision_denominator()
            + self.local_types.precision_denominator()
            + self.struct_names.precision_denominator()
            + self.field_names.precision_denominator()
            + self.field_types.precision_denominator()
            + self.pointer_types.precision_denominator()
            + self.array_types.precision_denominator()
            + self.struct_ref_types.precision_denominator()
    }

    fn percent(&self) -> f64 {
        let expected = self.expected();
        if expected == 0 {
            0.0
        } else {
            self.recovered() as f64 * 100.0 / expected as f64
        }
    }

    fn precision(&self) -> f64 {
        let reported = self.reported();
        if reported == 0 {
            0.0
        } else {
            self.recovered() as f64 * 100.0 / reported as f64
        }
    }
}

pub fn run(root: &Path) -> i32 {
    let manifest = match read_manifest(root) {
        Ok(m) => m,
        Err(e) => {
            eprintln!("type-recovery-report: {e}");
            return 1;
        }
    };

    let Some(unlace_bin) = find_or_build_unlace(root) else {
        eprintln!("type-recovery-report: unlace binary not found and build failed");
        return 1;
    };

    let mut source_known = 0usize;
    let mut dwarf_candidates = 0usize;
    let mut source_only = 0usize;
    let mut cpp_candidates = 0usize;
    let mut non_host_candidates = 0usize;
    let mut scored_cpp = 0usize;
    let mut scored_optimized = 0usize;
    let mut by_opt: BTreeMap<String, usize> = BTreeMap::new();
    let mut score_by_opt: BTreeMap<String, TypeScore> = BTreeMap::new();
    let mut score_by_arch: BTreeMap<String, TypeScore> = BTreeMap::new();
    let mut total_score = TypeScore::default();

    println!("type-recovery-report: source/DWARF ground-truth candidates");
    println!();

    for fixture in &manifest.fixture {
        let Some(source) = fixture.source_path.as_deref() else {
            continue;
        };
        source_known += 1;

        let flags = fixture.flags.as_deref().unwrap_or("unknown");
        let opt = optimization_level(flags);
        *by_opt.entry(opt.to_string()).or_default() += 1;
        let arch = fixture.architecture.as_deref().unwrap_or("unknown");
        if arch != "x86_64" {
            non_host_candidates += 1;
        }
        if is_cpp_source(source) {
            cpp_candidates += 1;
        }

        let dwarf = match load_dwarf(root, fixture) {
            Ok(dwarf) => dwarf,
            Err(e) => {
                println!(
                    "[type-ground-truth] SKIP {} arch={} opt={} source={} binary={} reason={}",
                    fixture.name,
                    fixture.architecture.as_deref().unwrap_or("unknown"),
                    opt,
                    source,
                    fixture.binary_path,
                    e,
                );
                continue;
            }
        };
        let has_dwarf = dwarf
            .as_ref()
            .is_some_and(|d| !d.functions.is_empty() || !d.structs.is_empty());
        if has_dwarf {
            dwarf_candidates += 1;
        } else {
            source_only += 1;
        }

        let candidate_kind = if has_dwarf {
            "source+dwarf"
        } else {
            "source-only"
        };
        println!(
            "[type-ground-truth] CANDIDATE {} arch={} opt={} kind={} source={} binary={} tags={}",
            fixture.name,
            fixture.architecture.as_deref().unwrap_or("unknown"),
            opt,
            candidate_kind,
            source,
            fixture.binary_path,
            fixture.feature_tags.join(","),
        );

        let Some(dwarf) = dwarf else {
            continue;
        };
        if fixture.architecture.as_deref() != Some("x86_64") {
            println!(
                "[type-recovery] SKIP {} - non-host architecture {:?}",
                fixture.name, fixture.architecture
            );
            continue;
        }

        match score_fixture(root, &unlace_bin, fixture, &dwarf) {
            Ok(score) => {
                println_score(&fixture.name, &score);
                if score.cpp_functions > 0 {
                    scored_cpp += 1;
                }
                if matches!(opt, "-O1" | "-O2" | "-O3") {
                    scored_optimized += 1;
                }
                score_by_opt
                    .entry(opt.to_string())
                    .or_default()
                    .merge(&score);
                score_by_arch
                    .entry(arch.to_string())
                    .or_default()
                    .merge(&score);
                total_score.merge(&score);
            }
            Err(e) => println!("[type-recovery] SKIP {} - {}", fixture.name, e),
        }
    }

    println!();
    println!("type-recovery-report: optimization-level denominator");
    for (opt, count) in by_opt {
        println!("[type-ground-truth] opt={opt} fixtures={count}");
    }
    println!();
    println!("type-recovery-report: scored optimization buckets");
    for (opt, score) in &score_by_opt {
        println_score(&format!("opt={opt}"), score);
    }
    println!();
    println!("type-recovery-report: scored architecture buckets");
    for (arch, score) in &score_by_arch {
        println_score(&format!("arch={arch}"), score);
    }

    println!();
    println_score("TOTAL", &total_score);
    println!(
        "Type/Variable Recovery: MEASURED fixtures={} functions={} c_functions={} cpp_functions={} recovered={} expected={} reported={} recall={:.1}% precision={:.1}% source_known={} source_only={} dwarf_candidates={} cpp_candidates={} scored_cpp={} optimized_scored={} non_host_candidates={}",
        total_score.fixtures,
        total_score.functions,
        total_score.c_functions,
        total_score.cpp_functions,
        total_score.recovered(),
        total_score.expected(),
        total_score.reported(),
        total_score.percent(),
        total_score.precision(),
        source_known,
        source_only,
        dwarf_candidates,
        cpp_candidates,
        scored_cpp,
        scored_optimized,
        non_host_candidates,
    );
    println!(
        "type-recovery-report: exact textual scorer covers C/C++ DWARF signatures, params, locals, structs, fields, pointer facts, array facts, and struct-reference facts; source-only and non-host cases stay explicit breadth denominators"
    );

    0
}

fn read_manifest(root: &Path) -> Result<Manifest, String> {
    let path = root.join("tests/corpus.toml");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    toml::from_str(&text).map_err(|e| format!("failed to parse {}: {e}", path.display()))
}

fn load_dwarf(root: &Path, fixture: &Fixture) -> Result<Option<DwarfInfo>, String> {
    let path = root.join(&fixture.binary_path);
    let data = std::fs::read(&path).map_err(|e| format!("failed to read binary: {e}"))?;
    if !ElfLoader::can_load(&data) {
        return Ok(None);
    }
    let image = ElfLoader::load(&data).map_err(|e| format!("failed to load ELF: {e}"))?;
    let dwarf = import_dwarf(&image).map_err(|e| format!("failed to import DWARF: {e}"))?;
    if dwarf.functions.is_empty() && dwarf.structs.is_empty() {
        Ok(None)
    } else {
        Ok(Some(dwarf))
    }
}

fn find_or_build_unlace(root: &Path) -> Option<PathBuf> {
    if let Some(path) = find_unlace_binary(root) {
        return Some(path);
    }

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

fn score_fixture(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    dwarf: &DwarfInfo,
) -> Result<TypeScore, String> {
    let functions = scoreable_functions(dwarf);
    if functions.is_empty() {
        return Err("no source-level DWARF functions to score".to_string());
    }

    let output_dir = std::env::temp_dir().join(format!(
        "unlace-type-recovery-{}-{}",
        process::id(),
        fixture.name
    ));
    let _ = std::fs::remove_dir_all(&output_dir);
    std::fs::create_dir_all(&output_dir)
        .map_err(|e| format!("failed to create {}: {e}", output_dir.display()))?;

    let scope = format!(
        "^({})$",
        functions
            .iter()
            .flat_map(|f| function_scope_names(f).into_iter())
            .map(|name| regex_escape(&name))
            .collect::<Vec<_>>()
            .join("|")
    );
    let binary = root.join(&fixture.binary_path);
    let output = Command::new(unlace_bin)
        .args(["batch", "--emit", "c", "--output-dir"])
        .arg(&output_dir)
        .args(["--scope", &scope])
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace batch: {e}"))?;
    if !output.status.success() {
        return Err(format!(
            "unlace batch failed: {}",
            String::from_utf8_lossy(&output.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }

    let output_files = read_output_files(&output_dir);
    let mut rendered = BTreeMap::new();
    for function in &functions {
        let text = rendered_text_for_function(function, &output_files);
        rendered.insert(function_identity(function), text);
    }
    let all_output = rendered.values().cloned().collect::<Vec<_>>().join("\n");
    let composite_names = composite_names(dwarf);
    let mut score = TypeScore {
        fixtures: 1,
        functions: functions.len(),
        c_functions: functions.iter().filter(|f| !is_cpp_function(f)).count(),
        cpp_functions: functions.iter().filter(|f| is_cpp_function(f)).count(),
        ..TypeScore::default()
    };

    for function in &functions {
        let text = rendered
            .get(&function_identity(function))
            .map_or("", String::as_str);
        score_function(function, text, &composite_names, &mut score);
    }
    score_structs(dwarf, &all_output, &composite_names, &mut score);

    let _ = std::fs::remove_dir_all(&output_dir);
    Ok(score)
}

fn scoreable_functions(dwarf: &DwarfInfo) -> Vec<&FunctionDebugInfo> {
    let mut seen = BTreeSet::new();
    let mut functions = Vec::new();
    for function in dwarf.functions.values() {
        if !is_scoreable_function(function) || !seen.insert(function_identity(function)) {
            continue;
        }
        functions.push(function);
    }
    functions.sort_by(|a, b| a.name.cmp(&b.name));
    functions
}

fn is_scoreable_function(function: &FunctionDebugInfo) -> bool {
    let base = function_base_name(&function.name);
    !base.is_empty()
        && !base.starts_with('_')
        && (function.return_type.is_some()
            || !function.params.is_empty()
            || !function.locals.is_empty()
            || function.decl.is_some())
}

fn score_function(
    function: &FunctionDebugInfo,
    text: &str,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
) {
    let trace = type_trace_enabled();
    let signature = signature_line_for_function(text, function);
    add_reported_function_facts(function, text, signature.as_deref(), composite_names, score);
    if let Some(return_type) = function.return_type.as_deref() {
        let recovered = signature
            .as_deref()
            .is_some_and(|line| signature_return_matches(line, function, return_type));
        score.return_types.add_expected(recovered);
        add_type_shape_expectations(
            score,
            return_type,
            None,
            signature
                .as_deref()
                .is_some_and(|line| type_and_name_appear(line, return_type, None)),
            composite_names,
        );
    }

    for param in &function.params {
        if let Some(name) = param.name.as_deref() {
            score.param_names.add_expected(
                signature
                    .as_deref()
                    .is_some_and(|line| word_contains(line, name)),
            );
        }
        if let Some(type_name) = param.type_name.as_deref() {
            let recovered = signature.as_deref().is_some_and(|line| {
                signature_param_type_matches(line, type_name, param.name.as_deref())
            });
            score.param_types.add_expected(recovered);
            add_type_shape_expectations(
                score,
                type_name,
                param.name.as_deref(),
                recovered,
                composite_names,
            );
        }
    }

    for local in &function.locals {
        let name_recovered = word_contains(text, &local.name);
        if trace && !name_recovered {
            eprintln!(
                "[type-recovery:miss] function={} local_name={} type={:?} frame_offset={:?}",
                function.name, local.name, local.type_name, local.frame_offset
            );
        }
        score.local_names.add_expected(name_recovered);
        if let Some(type_name) = local.type_name.as_deref() {
            let type_recovered = type_and_name_appear(text, type_name, Some(&local.name));
            if trace && !type_recovered {
                eprintln!(
                    "[type-recovery:miss] function={} local_type={} name={}",
                    function.name, type_name, local.name
                );
            }
            score.local_types.add_expected(type_recovered);
            add_type_shape_expectations(
                score,
                type_name,
                Some(&local.name),
                type_recovered,
                composite_names,
            );
        }
    }
}

fn score_structs(
    dwarf: &DwarfInfo,
    output: &str,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
) {
    let trace = type_trace_enabled();
    add_reported_struct_facts(output, composite_names, score);
    for strukt in dwarf.structs.values() {
        if strukt.name.is_empty() {
            continue;
        }
        let struct_recovered = word_contains(output, &strukt.name);
        if trace && !struct_recovered {
            eprintln!("[type-recovery:miss] struct_name={}", strukt.name);
        }
        score.struct_names.add_expected(struct_recovered);
        for field in &strukt.fields {
            let field_name_recovered = field_name_appears(output, field);
            if trace && !field_name_recovered {
                eprintln!(
                    "[type-recovery:miss] struct={} field_name={} offset={} type={}",
                    strukt.name, field.name, field.offset, field.type_name
                );
            }
            score.field_names.add_expected(field_name_recovered);
            let field_type_recovered =
                type_and_name_appear(output, &field.type_name, Some(&field.name));
            if trace && !field_type_recovered {
                eprintln!(
                    "[type-recovery:miss] struct={} field_type={} name={}",
                    strukt.name, field.type_name, field.name
                );
            }
            score.field_types.add_expected(field_type_recovered);
            add_type_shape_expectations(
                score,
                &field.type_name,
                Some(&field.name),
                field_type_recovered,
                composite_names,
            );
        }
    }
}

fn function_identity(function: &FunctionDebugInfo) -> String {
    function
        .linkage_name
        .clone()
        .unwrap_or_else(|| function.name.clone())
}

fn function_scope_names(function: &FunctionDebugInfo) -> Vec<String> {
    let mut names = Vec::new();
    if let Some(linkage) = function.linkage_name.as_deref()
        && !linkage.is_empty()
    {
        names.push(linkage.to_string());
    }
    names.push(function.name.clone());
    names.push(function_base_name(&function.name));
    names.sort();
    names.dedup();
    names
}

fn function_base_name(name: &str) -> String {
    let before_params = name.split_once('(').map_or(name, |(head, _)| head).trim();
    before_params
        .split_whitespace()
        .last()
        .unwrap_or(before_params)
        .trim()
        .to_string()
}

fn is_cpp_source(path: &str) -> bool {
    matches!(
        Path::new(path).extension().and_then(|e| e.to_str()),
        Some("cc" | "cpp" | "cxx" | "C")
    )
}

fn is_cpp_function(function: &FunctionDebugInfo) -> bool {
    let name = &function.name;
    name.contains("::")
        || name.contains('<')
        || name.contains('>')
        || name.contains("operator")
        || function
            .linkage_name
            .as_deref()
            .is_some_and(|name| name.starts_with("_Z"))
}

fn regex_escape(value: &str) -> String {
    let mut out = String::new();
    for ch in value.chars() {
        if matches!(
            ch,
            '\\' | '.' | '+' | '*' | '?' | '(' | ')' | '|' | '[' | ']' | '{' | '}' | '^' | '$'
        ) {
            out.push('\\');
        }
        out.push(ch);
    }
    out
}

fn sanitize_filename_stem(name: &str, addr: u64) -> String {
    let sanitized: String = name
        .chars()
        .map(|c| {
            if c.is_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();
    if sanitized.is_empty() {
        format!("func_{addr:x}")
    } else {
        sanitized
    }
}

fn read_output_files(output_dir: &Path) -> BTreeMap<String, String> {
    let mut out = BTreeMap::new();
    let Ok(entries) = std::fs::read_dir(output_dir) else {
        return out;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.extension().and_then(|e| e.to_str()) != Some("c") {
            continue;
        }
        let Some(stem) = path.file_stem().and_then(|s| s.to_str()) else {
            continue;
        };
        let text = std::fs::read_to_string(&path).unwrap_or_default();
        out.insert(stem.to_string(), text);
    }
    out
}

fn rendered_text_for_function(
    function: &FunctionDebugInfo,
    output_files: &BTreeMap<String, String>,
) -> String {
    for name in function_scope_names(function) {
        let stem = sanitize_filename_stem(&name, function.low_pc);
        if let Some(text) = output_files.get(&stem) {
            return text.clone();
        }
    }

    let candidates = function_signature_candidates(function);
    output_files
        .values()
        .find(|text| {
            signature_line_for_candidates(text, &candidates).is_some()
                || candidates
                    .iter()
                    .any(|candidate| text.contains(&format!("Function:   {candidate}")))
        })
        .cloned()
        .unwrap_or_default()
}

fn composite_names(dwarf: &DwarfInfo) -> BTreeSet<String> {
    let mut names = BTreeSet::new();
    for name in dwarf.structs.keys().chain(dwarf.unions.keys()) {
        names.insert(name.clone());
        if let Some((base, _)) = name.split_once('<') {
            names.insert(base.trim().to_string());
        }
    }
    names
}

fn function_signature_candidates(function: &FunctionDebugInfo) -> Vec<String> {
    let mut candidates = vec![function.name.clone(), function_base_name(&function.name)];
    if let Some(linkage) = function.linkage_name.as_deref() {
        candidates.push(linkage.to_string());
    }
    candidates.retain(|name| !name.is_empty());
    candidates.sort_by_key(|name| std::cmp::Reverse(name.len()));
    candidates.dedup();
    candidates
}

fn type_trace_enabled() -> bool {
    std::env::var_os("UNLACE_TYPE_TRACE")
        .map(|v| v != "0")
        .unwrap_or(false)
}

fn signature_line_for_function(text: &str, function: &FunctionDebugInfo) -> Option<String> {
    signature_line_for_candidates(text, &function_signature_candidates(function))
}

fn signature_line_for_candidates(text: &str, candidates: &[String]) -> Option<String> {
    text.lines().find_map(|line| {
        let trimmed = line.trim();
        if trimmed.starts_with("//") || trimmed.starts_with("/*") || trimmed.starts_with('*') {
            return None;
        }
        if candidates
            .iter()
            .any(|candidate| trimmed.contains(&format!("{candidate}(")))
            && trimmed.ends_with('{')
        {
            Some(trimmed.trim_end_matches('{').trim().to_string())
        } else {
            None
        }
    })
}

fn signature_return_matches(
    signature: &str,
    function: &FunctionDebugInfo,
    return_type: &str,
) -> bool {
    function_signature_candidates(function)
        .iter()
        .find_map(|name| signature.find(&format!("{name}(")))
        .is_some_and(|idx| normalize_type(&signature[..idx]) == normalize_type(return_type))
}

fn signature_param_type_matches(
    signature: &str,
    type_name: &str,
    param_name: Option<&str>,
) -> bool {
    type_and_name_appear(signature, type_name, param_name)
}

fn add_type_shape_expectations(
    score: &mut TypeScore,
    type_name: &str,
    name: Option<&str>,
    recovered: bool,
    composite_names: &BTreeSet<String>,
) {
    let facts = classify_type_facts(type_name, composite_names);
    if facts.pointer {
        score.pointer_types.add_expected(recovered);
    }
    if facts.array {
        score.array_types.add_expected(recovered);
    }
    if facts.struct_ref {
        let struct_recovered = name
            .map(|name| recovered && !name.is_empty())
            .unwrap_or(recovered);
        score.struct_ref_types.add_expected(struct_recovered);
    }
}

fn add_reported_type_shapes(
    score: &mut TypeScore,
    type_name: &str,
    composite_names: &BTreeSet<String>,
) {
    let facts = classify_type_facts(type_name, composite_names);
    if facts.pointer {
        score.pointer_types.add_reported(1);
    }
    if facts.array {
        score.array_types.add_reported(1);
    }
    if facts.struct_ref {
        score.struct_ref_types.add_reported(1);
    }
}

#[derive(Default)]
struct TypeFacts {
    pointer: bool,
    array: bool,
    struct_ref: bool,
}

fn classify_type_facts(type_name: &str, composite_names: &BTreeSet<String>) -> TypeFacts {
    let normalized = normalize_type(type_name);
    let mut facts = TypeFacts {
        pointer: normalized.contains('*'),
        array: normalized.contains('[')
            || normalized.contains("Array<")
            || normalized.contains("array<"),
        struct_ref: false,
    };

    let stripped = normalized.replace(['*', '&', '[', ']', ',', '<', '>'], " ");
    for name in composite_names {
        if word_contains(&stripped, name) {
            facts.struct_ref = true;
            break;
        }
    }
    facts
}

fn add_reported_function_facts(
    function: &FunctionDebugInfo,
    text: &str,
    signature: Option<&str>,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
) {
    if let Some(signature) = signature {
        score.return_types.add_reported(1);
        if let Some(return_type) = reported_return_type(signature, function) {
            add_reported_type_shapes(score, &return_type, composite_names);
        }
        for param in reported_params(signature, function) {
            score.param_types.add_reported(1);
            add_reported_type_shapes(score, &param.ty, composite_names);
            if param.name.is_some() {
                score.param_names.add_reported(1);
            }
        }
    }

    for decl in reported_local_decls(text, signature) {
        score.local_types.add_reported(1);
        score.local_names.add_reported(1);
        add_reported_type_shapes(score, &decl.ty, composite_names);
    }
}

struct ReportedParam {
    ty: String,
    name: Option<String>,
}

struct ReportedDecl {
    ty: String,
}

fn reported_return_type(signature: &str, function: &FunctionDebugInfo) -> Option<String> {
    let idx = function_signature_candidates(function)
        .iter()
        .find_map(|name| signature.find(&format!("{name}(")))?;
    Some(signature[..idx].trim().to_string())
}

fn reported_params(signature: &str, function: &FunctionDebugInfo) -> Vec<ReportedParam> {
    let Some(open) = function_signature_candidates(function)
        .iter()
        .find_map(|name| {
            signature
                .find(&format!("{name}("))
                .map(|idx| idx + name.len())
        })
    else {
        return Vec::new();
    };
    let Some(close) = find_matching_paren(signature, open) else {
        return Vec::new();
    };
    split_top_level_commas(&signature[open + 1..close])
        .into_iter()
        .filter_map(|param| parse_param_decl(param.trim()))
        .collect()
}

fn parse_param_decl(param: &str) -> Option<ReportedParam> {
    let param = param.trim();
    if param.is_empty() || param == "void" {
        return None;
    }
    let (ty, name) = split_type_and_name(param);
    Some(ReportedParam { ty, name })
}

fn reported_local_decls(text: &str, signature: Option<&str>) -> Vec<ReportedDecl> {
    let Some(signature) = signature else {
        return Vec::new();
    };
    let mut in_function = false;
    let mut decls = Vec::new();
    for line in text.lines() {
        let trimmed = line.trim();
        if !in_function {
            if trimmed.trim_end_matches('{').trim() == signature {
                in_function = true;
            }
            continue;
        }
        if trimmed == "}" {
            break;
        }
        if trimmed.is_empty() {
            continue;
        }
        if let Some(comment_decl) = trimmed.strip_prefix("//") {
            if let Some(decl) = parse_local_decl(comment_decl.trim()) {
                decls.push(decl);
            }
            continue;
        }
        let Some(decl) = parse_local_decl(trimmed) else {
            if !trimmed.starts_with("/*") {
                break;
            }
            continue;
        };
        decls.push(decl);
    }
    decls
}

fn parse_local_decl(line: &str) -> Option<ReportedDecl> {
    let line = line.split_once("//").map_or(line, |(head, _)| head).trim();
    let line = line.strip_suffix(';')?.trim();
    if line.is_empty()
        || line.contains('=')
        || line.starts_with("return ")
        || line.starts_with("if ")
        || line.starts_with("for ")
        || line.starts_with("while ")
        || line.starts_with("goto ")
    {
        return None;
    }
    let (ty, name) = split_type_and_name(line);
    name.map(|_| ReportedDecl { ty })
}

fn split_type_and_name(decl: &str) -> (String, Option<String>) {
    let decl = decl.trim();
    if let Some(idx) = decl.rfind(' ') {
        let mut ty = decl[..idx].trim().to_string();
        let raw_name = decl[idx + 1..].trim();
        if raw_name.starts_with('*') {
            ty.push_str(" *");
        } else if raw_name.starts_with('&') {
            ty.push_str(" &");
        }
        if let Some(brackets) = raw_name.find('[').map(|pos| &raw_name[pos..]) {
            ty.push_str(brackets);
        }
        let name = raw_name
            .trim_start_matches('*')
            .trim_start_matches('&')
            .split('[')
            .next()
            .unwrap_or("")
            .trim();
        if is_c_identifier(name) {
            return (ty, Some(name.to_string()));
        }
    }
    (decl.to_string(), None)
}

fn find_matching_paren(text: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (idx, ch) in text.char_indices().skip_while(|(idx, _)| *idx < open) {
        match ch {
            '(' => depth += 1,
            ')' => {
                depth = depth.saturating_sub(1);
                if depth == 0 {
                    return Some(idx);
                }
            }
            _ => {}
        }
    }
    None
}

fn split_top_level_commas(text: &str) -> Vec<&str> {
    let mut parts = Vec::new();
    let mut start = 0usize;
    let mut angle = 0usize;
    let mut paren = 0usize;
    let mut bracket = 0usize;
    for (idx, ch) in text.char_indices() {
        match ch {
            '<' => angle += 1,
            '>' => angle = angle.saturating_sub(1),
            '(' => paren += 1,
            ')' => paren = paren.saturating_sub(1),
            '[' => bracket += 1,
            ']' => bracket = bracket.saturating_sub(1),
            ',' if angle == 0 && paren == 0 && bracket == 0 => {
                parts.push(&text[start..idx]);
                start = idx + 1;
            }
            _ => {}
        }
    }
    parts.push(&text[start..]);
    parts
}

fn add_reported_struct_facts(
    output: &str,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
) {
    let mut seen_structs = BTreeSet::new();
    let mut seen_fields = BTreeSet::new();
    let mut current_struct: Option<String> = None;

    for line in output.lines() {
        let trimmed = line.trim();
        if let Some(name) = trimmed
            .strip_prefix("struct ")
            .and_then(|rest| rest.strip_suffix('{').map(str::trim))
        {
            if seen_structs.insert(name.to_string()) {
                score.struct_names.add_reported(1);
            }
            current_struct = Some(name.to_string());
            continue;
        }
        if trimmed == "};" {
            current_struct = None;
            continue;
        }
        let Some(struct_name) = current_struct.as_deref() else {
            continue;
        };
        let Some(decl) = parse_local_decl(trimmed) else {
            continue;
        };
        let field_name = trimmed
            .trim_end_matches(';')
            .split_whitespace()
            .last()
            .unwrap_or("")
            .trim_start_matches('*')
            .split('[')
            .next()
            .unwrap_or("");
        if seen_fields.insert((struct_name.to_string(), field_name.to_string())) {
            score.field_names.add_reported(1);
            score.field_types.add_reported(1);
            add_reported_type_shapes(score, &decl.ty, composite_names);
        }
    }
}

fn type_and_name_appear(text: &str, type_name: &str, name: Option<&str>) -> bool {
    let normalized_text = normalize_type(text);
    let normalized_type = normalize_type(type_name);
    if normalized_text.contains(&normalized_type)
        && name.is_none_or(|name| word_contains(text, name))
    {
        return true;
    }
    if let Some(name) = name
        && let Some(array_decl) = array_decl_pattern(type_name, name)
    {
        return normalized_text.contains(&normalize_type(&array_decl));
    }
    false
}

fn array_decl_pattern(type_name: &str, name: &str) -> Option<String> {
    let (base_end, suffix) = split_type_array_suffix(type_name);
    if suffix.is_empty() {
        return None;
    }
    let base = type_name.get(..base_end)?.trim();
    Some(format!("{base} {name}{suffix}"))
}

fn field_name_appears(output: &str, field: &StructField) -> bool {
    output.contains(&format!(".{}", field.name))
        || output.contains(&format!("->{}", field.name))
        || word_contains(output, &field.name)
}

fn normalize_type(value: &str) -> String {
    let mut normalized = value
        .replace("__int64", "long")
        .replace("_QWORD", "unsigned long")
        .replace("_DWORD", "unsigned")
        .replace("_WORD", "unsigned short")
        .replace("_BYTE", "unsigned char")
        .replace("_BOOL", "bool")
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("typedef ", "")
        .replace("__noreturn ", "")
        .replace("signed int", "int")
        .replace("long int", "long")
        .replace("unsigned int", "unsigned")
        .replace("struct ", "")
        .replace(" *", "*")
        .replace("* ", "*");
    normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    normalized.trim().to_string()
}

fn split_type_array_suffix(type_name: &str) -> (usize, String) {
    let trimmed_end = type_name.trim_end().len();
    let mut end = trimmed_end;
    let mut suffixes = Vec::new();
    loop {
        let head = &type_name[..end];
        let Some(close_rel) = head.rfind(']') else {
            break;
        };
        if close_rel + 1 != end {
            break;
        }
        let Some(open_rel) = head[..close_rel].rfind('[') else {
            break;
        };
        suffixes.push(type_name[open_rel..=close_rel].to_string());
        end = type_name[..open_rel].trim_end().len();
    }
    suffixes.reverse();
    (end, suffixes.join(""))
}

fn word_contains(haystack: &str, needle: &str) -> bool {
    if needle.is_empty() {
        return false;
    }
    let mut search_from = 0usize;
    while let Some(pos) = haystack[search_from..].find(needle) {
        let start = search_from + pos;
        let end = start + needle.len();
        let before = haystack[..start].chars().next_back();
        let after = haystack[end..].chars().next();
        if before.is_none_or(|c| !is_ident_char(c)) && after.is_none_or(|c| !is_ident_char(c)) {
            return true;
        }
        search_from = end;
    }
    false
}

fn is_ident_char(ch: char) -> bool {
    ch == '_' || ch.is_ascii_alphanumeric()
}

fn is_c_identifier(name: &str) -> bool {
    let mut chars = name.chars();
    let Some(first) = chars.next() else {
        return false;
    };
    (first == '_' || first.is_ascii_alphabetic()) && chars.all(is_ident_char)
}

fn optimization_level(flags: &str) -> &str {
    if flags.contains("-O0") {
        "-O0"
    } else if flags.contains("-O1") {
        "-O1"
    } else if flags.contains("-O2") {
        "-O2"
    } else if flags.contains("-O3") {
        "-O3"
    } else {
        "unknown"
    }
}

fn println_score(label: &str, score: &TypeScore) {
    println!(
        "[type-recovery] SCORE {} fixtures={} functions={} c_functions={} cpp_functions={} recovered={} expected={} reported={} recall={:.1}% precision={:.1}% returns={}/{} param_names={}/{} param_types={}/{} local_names={}/{} local_types={}/{} structs={}/{} field_names={}/{} field_types={}/{} pointer_types={}/{} array_types={}/{} struct_refs={}/{}",
        label,
        score.fixtures,
        score.functions,
        score.c_functions,
        score.cpp_functions,
        score.recovered(),
        score.expected(),
        score.reported(),
        score.percent(),
        score.precision(),
        score.return_types.recovered,
        score.return_types.expected,
        score.param_names.recovered,
        score.param_names.expected,
        score.param_types.recovered,
        score.param_types.expected,
        score.local_names.recovered,
        score.local_names.expected,
        score.local_types.recovered,
        score.local_types.expected,
        score.struct_names.recovered,
        score.struct_names.expected,
        score.field_names.recovered,
        score.field_names.expected,
        score.field_types.recovered,
        score.field_types.expected,
        score.pointer_types.recovered,
        score.pointer_types.expected,
        score.array_types.recovered,
        score.array_types.expected,
        score.struct_ref_types.recovered,
        score.struct_ref_types.expected,
    );
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn c_identifier_filter_rejects_demangled_cpp_names() {
        assert!(is_c_identifier("main"));
        assert!(is_c_identifier("_start"));
        assert!(!is_c_identifier("make_box(int)"));
        assert!(!is_c_identifier("Dog::speak"));
    }

    #[test]
    fn signature_return_matching_ignores_noreturn_annotation() {
        let function = FunctionDebugInfo {
            name: "main".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: Some("int".to_string()),
            decl: None,
            locals: Vec::new(),
        };
        assert!(signature_return_matches(
            "int __noreturn main(void)",
            &function,
            "int"
        ));
    }

    #[test]
    fn cpp_signature_candidates_match_demangled_template_names() {
        let function = FunctionDebugInfo {
            name: "addT<int>(int, int)".to_string(),
            linkage_name: Some("_Z4addTIiET_S0_S0_".to_string()),
            low_pc: 0x401240,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: Some("int".to_string()),
            decl: None,
            locals: Vec::new(),
        };
        let text = "int addT<int>(int a, int b) {";
        assert_eq!(
            signature_line_for_function(text, &function).as_deref(),
            Some("int addT<int>(int a, int b)")
        );
    }

    #[test]
    fn type_fact_classifier_tracks_pointer_array_and_struct_refs() {
        let mut composites = BTreeSet::new();
        composites.insert("Pair".to_string());
        let facts = classify_type_facts("const Pair *[3]", &composites);
        assert!(facts.pointer);
        assert!(facts.array);
        assert!(facts.struct_ref);
    }

    #[test]
    fn array_type_matching_accepts_c_declarator_suffix_form() {
        assert!(type_and_name_appear(
            "    //   int values[3];",
            "int[3]",
            Some("values")
        ));
        assert!(type_and_name_appear(
            "    __int64 data[4];",
            "long int[4]",
            Some("data")
        ));
    }

    #[test]
    fn word_contains_uses_identifier_boundaries() {
        assert!(word_contains("int value = 1;", "value"));
        assert!(!word_contains("int my_value = 1;", "value"));
    }
}
