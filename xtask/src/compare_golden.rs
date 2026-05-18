//! `cargo xtask compare-golden` — corpus-level comparison report.
//!
//! Compares unlace decompiler output (from our x86_64 fixture ELFs) against
//! the 150 IDA Hex-Rays reference `.c` files in `tests/golden/x86_64/`.
//!
//! Since the golden files were produced from a binary we don't redistribute
//! (IDA's hexx64.so), we can't do function-by-function comparison. Instead,
//! this tool performs a **structural style comparison**:
//!
//! 1. Extracts features from all 150 IDA golden files (aggregate profile)
//! 2. Decompiles our x86_64 fixture ELFs and extracts the same features
//! 3. Reports how similar our output patterns are to IDA's style
//!
//! Metrics: keyword density (if/for/while/return/goto per line), line count
//! ratios, variable declaration patterns, type cast usage, control-flow
//! recovery rates.
//!
//! This is a REPORTING tool — it always exits 0.

use std::path::{Path, PathBuf};
use std::process::Command;

/// Structural features extracted from C decompiler output.
#[derive(Debug, Default, Clone)]
struct Features {
    line_count: usize,
    if_count: usize,
    else_count: usize,
    for_count: usize,
    while_count: usize,
    return_count: usize,
    goto_count: usize,
    switch_count: usize,
    call_count: usize,
    type_cast_count: usize,
    pointer_deref_count: usize,
    shift_op_count: usize,
    bitwise_op_count: usize,
    brace_depth_max: usize,
    function_count: usize,
}

impl Features {
    fn extract(source: &str) -> Self {
        let mut f = Features::default();
        let mut brace_depth: usize = 0;

        for line in source.lines() {
            let trimmed = line.trim();
            if trimmed.is_empty() {
                continue;
            }

            f.line_count += 1;

            // Count braces for nesting depth
            for ch in trimmed.chars() {
                match ch {
                    '{' => {
                        brace_depth += 1;
                        if brace_depth > f.brace_depth_max {
                            f.brace_depth_max = brace_depth;
                        }
                    }
                    '}' => {
                        brace_depth = brace_depth.saturating_sub(1);
                    }
                    _ => {}
                }
            }

            // Keywords (word-boundary aware)
            f.if_count += count_keyword(trimmed, "if");
            f.else_count += count_keyword(trimmed, "else");
            f.for_count += count_keyword(trimmed, "for");
            f.while_count += count_keyword(trimmed, "while");
            f.return_count += count_keyword(trimmed, "return");
            f.goto_count += count_keyword(trimmed, "goto");
            f.switch_count += count_keyword(trimmed, "switch");

            // Function definitions: line ends with ')' or has 'type name(' pattern at top level
            // Simplified: count lines matching `type name(` not inside a body
            if brace_depth <= 1
                && !trimmed.starts_with("//")
                && !trimmed.starts_with("if")
                && !trimmed.starts_with("for")
                && !trimmed.starts_with("while")
                && !trimmed.starts_with("switch")
                && !trimmed.starts_with("return")
                && !trimmed.starts_with("goto")
                && !trimmed.starts_with("else")
                && !trimmed.starts_with('{')
                && !trimmed.starts_with('}')
                && trimmed.contains('(')
                && !trimmed.contains(';')
                && (trimmed.ends_with(')') || trimmed.ends_with('{'))
            {
                // Looks like a function definition
                if trimmed
                    .split_whitespace()
                    .next()
                    .is_some_and(|w| is_type_keyword(w) || w == "void")
                {
                    f.function_count += 1;
                }
            }

            // Function calls: identifier followed by (
            f.call_count += count_calls(trimmed);

            // Type casts: (type *) or (unsigned) etc.
            f.type_cast_count += count_type_casts(trimmed);

            // Pointer dereferences: *( pattern
            f.pointer_deref_count += trimmed.matches("*(").count();

            // Shift operations
            f.shift_op_count += trimmed.matches("<<").count() + trimmed.matches(">>").count();

            // Bitwise operations (single & | ^ ~ not part of && ||)
            f.bitwise_op_count += count_bitwise_ops(trimmed);
        }

        f
    }

    /// Compute per-line density for a feature count.
    fn density(&self, count: usize) -> f64 {
        if self.line_count == 0 {
            return 0.0;
        }
        count as f64 / self.line_count as f64
    }

    /// Total control-flow statements.
    fn control_flow_total(&self) -> usize {
        self.if_count + self.for_count + self.while_count + self.switch_count
    }
}

/// Aggregate features across multiple source files.
#[derive(Debug, Default)]
struct AggregateProfile {
    total_files: usize,
    total_lines: usize,
    total_functions: usize,
    total_if: usize,
    total_else: usize,
    total_for: usize,
    total_while: usize,
    total_return: usize,
    total_goto: usize,
    total_switch: usize,
    total_calls: usize,
    total_type_casts: usize,
    total_ptr_derefs: usize,
    total_shift_ops: usize,
    total_bitwise_ops: usize,
    max_brace_depth: usize,
}

impl AggregateProfile {
    fn add(&mut self, f: &Features) {
        self.total_files += 1;
        self.total_lines += f.line_count;
        self.total_functions += f.function_count;
        self.total_if += f.if_count;
        self.total_else += f.else_count;
        self.total_for += f.for_count;
        self.total_while += f.while_count;
        self.total_return += f.return_count;
        self.total_goto += f.goto_count;
        self.total_switch += f.switch_count;
        self.total_calls += f.call_count;
        self.total_type_casts += f.type_cast_count;
        self.total_ptr_derefs += f.pointer_deref_count;
        self.total_shift_ops += f.shift_op_count;
        self.total_bitwise_ops += f.bitwise_op_count;
        if f.brace_depth_max > self.max_brace_depth {
            self.max_brace_depth = f.brace_depth_max;
        }
    }

    fn density(&self, count: usize) -> f64 {
        if self.total_lines == 0 {
            return 0.0;
        }
        count as f64 / self.total_lines as f64
    }

    fn avg_lines_per_file(&self) -> f64 {
        if self.total_files == 0 {
            return 0.0;
        }
        self.total_lines as f64 / self.total_files as f64
    }
}

/// Comparison result between two profiles.
struct ComparisonResult {
    dimension: String,
    ida_value: f64,
    unlace_value: f64,
    similarity: f64, // 0.0 to 1.0
}

fn compare_profiles(ida: &AggregateProfile, unlace: &AggregateProfile) -> Vec<ComparisonResult> {
    let mut results = Vec::new();

    let compare_density = |name: &str, ida_count: usize, unlace_count: usize| -> ComparisonResult {
        let ida_d = ida.density(ida_count);
        let unlace_d = unlace.density(unlace_count);
        let sim = if ida_d == 0.0 && unlace_d == 0.0 {
            1.0
        } else if ida_d == 0.0 || unlace_d == 0.0 {
            0.0
        } else {
            let ratio = (ida_d / unlace_d).min(unlace_d / ida_d);
            ratio.min(1.0)
        };
        ComparisonResult {
            dimension: name.to_string(),
            ida_value: ida_d,
            unlace_value: unlace_d,
            similarity: sim,
        }
    };

    results.push(compare_density("if density", ida.total_if, unlace.total_if));
    results.push(compare_density(
        "else density",
        ida.total_else,
        unlace.total_else,
    ));
    results.push(compare_density(
        "for density",
        ida.total_for,
        unlace.total_for,
    ));
    results.push(compare_density(
        "while density",
        ida.total_while,
        unlace.total_while,
    ));
    results.push(compare_density(
        "return density",
        ida.total_return,
        unlace.total_return,
    ));
    results.push(compare_density(
        "goto density",
        ida.total_goto,
        unlace.total_goto,
    ));
    results.push(compare_density(
        "switch density",
        ida.total_switch,
        unlace.total_switch,
    ));
    results.push(compare_density(
        "call density",
        ida.total_calls,
        unlace.total_calls,
    ));
    results.push(compare_density(
        "type-cast density",
        ida.total_type_casts,
        unlace.total_type_casts,
    ));
    results.push(compare_density(
        "ptr-deref density",
        ida.total_ptr_derefs,
        unlace.total_ptr_derefs,
    ));
    results.push(compare_density(
        "shift-op density",
        ida.total_shift_ops,
        unlace.total_shift_ops,
    ));
    results.push(compare_density(
        "bitwise-op density",
        ida.total_bitwise_ops,
        unlace.total_bitwise_ops,
    ));

    results
}

// ─────────────────────────────────────────────────────────────────────
// Helper functions
// ─────────────────────────────────────────────────────────────────────

fn count_keyword(line: &str, kw: &str) -> usize {
    let mut count = 0;
    let mut search_from = 0;
    while let Some(pos) = line[search_from..].find(kw) {
        let abs_pos = search_from + pos;
        let before_ok = abs_pos == 0 || {
            let ch = line.as_bytes()[abs_pos - 1];
            !ch.is_ascii_alphanumeric() && ch != b'_'
        };
        let end = abs_pos + kw.len();
        let after_ok = end >= line.len() || {
            let ch = line.as_bytes()[end];
            !ch.is_ascii_alphanumeric() && ch != b'_'
        };
        if before_ok && after_ok {
            count += 1;
        }
        search_from = abs_pos + kw.len();
    }
    count
}

fn is_type_keyword(word: &str) -> bool {
    matches!(
        word,
        "int"
            | "char"
            | "short"
            | "long"
            | "unsigned"
            | "signed"
            | "float"
            | "double"
            | "bool"
            | "_BOOL"
            | "__int8"
            | "__int16"
            | "__int32"
            | "__int64"
            | "_BYTE"
            | "_WORD"
            | "_DWORD"
            | "_QWORD"
            | "void"
            | "const"
            | "volatile"
            | "static"
    )
}

fn count_calls(line: &str) -> usize {
    // Count identifier( patterns that aren't keywords
    let keywords = ["if", "for", "while", "switch", "return", "sizeof", "typeof"];
    let mut count = 0;
    let bytes = line.as_bytes();
    let len = bytes.len();
    let mut i = 0;

    while i < len {
        // Find '('
        if bytes[i] == b'(' && i > 0 {
            // Walk backwards to find identifier
            let paren_pos = i;
            // Skip whitespace before (
            let mut j = i - 1;
            while j > 0 && bytes[j] == b' ' {
                j -= 1;
            }
            // Check if char at j is end of identifier
            if bytes[j].is_ascii_alphanumeric() || bytes[j] == b'_' {
                // Walk back to start of identifier
                let end = j + 1;
                while j > 0 && (bytes[j - 1].is_ascii_alphanumeric() || bytes[j - 1] == b'_') {
                    j -= 1;
                }
                let ident = &line[j..end];
                if !keywords.contains(&ident) && !is_type_keyword(ident) {
                    count += 1;
                }
            }
            i = paren_pos + 1;
        } else {
            i += 1;
        }
    }
    count
}

fn count_type_casts(line: &str) -> usize {
    // Match patterns like (int), (unsigned), (__int64 *), etc.
    let mut count = 0;
    let bytes = line.as_bytes();
    let len = bytes.len();
    let mut i = 0;

    while i < len {
        if bytes[i] == b'(' {
            // Look for closing paren
            if let Some(close) = line[i + 1..].find(')') {
                let inner = line[i + 1..i + 1 + close].trim();
                // Check if inner looks like a type cast
                let stripped = inner.trim_end_matches('*').trim_end_matches(' ');
                if is_type_keyword(stripped.split_whitespace().next().unwrap_or(""))
                    && !inner.contains(',')
                {
                    count += 1;
                }
                i = i + 1 + close + 1;
            } else {
                i += 1;
            }
        } else {
            i += 1;
        }
    }
    count
}

fn count_bitwise_ops(line: &str) -> usize {
    let bytes = line.as_bytes();
    let len = bytes.len();
    let mut count = 0;

    for i in 0..len {
        match bytes[i] {
            b'&' => {
                // Not part of &&
                let prev_amp = i > 0 && bytes[i - 1] == b'&';
                let next_amp = i + 1 < len && bytes[i + 1] == b'&';
                if !prev_amp && !next_amp {
                    count += 1;
                }
            }
            b'|' => {
                let prev_pipe = i > 0 && bytes[i - 1] == b'|';
                let next_pipe = i + 1 < len && bytes[i + 1] == b'|';
                if !prev_pipe && !next_pipe {
                    count += 1;
                }
            }
            b'^' => count += 1,
            b'~' => count += 1,
            _ => {}
        }
    }
    count
}

// ─────────────────────────────────────────────────────────────────────
// Main entry point
// ─────────────────────────────────────────────────────────────────────

pub fn run(root: &Path) {
    println!();
    println!("╔══════════════════════════════════════════════════════════════╗");
    println!("║       compare-golden: IDA Corpus Comparison Report          ║");
    println!("╚══════════════════════════════════════════════════════════════╝");
    println!();

    // ── Phase 1: Analyze IDA golden corpus ──
    let golden_dir = root.join("tests/golden/x86_64");
    if !golden_dir.is_dir() {
        eprintln!(
            "ERROR: golden directory not found: {}",
            golden_dir.display()
        );
        eprintln!("  Expected: tests/golden/x86_64/ with 150 IDA reference .c files");
        return;
    }

    println!("Phase 1: Analyzing IDA golden corpus...");
    let mut ida_profile = AggregateProfile::default();
    let mut ida_features: Vec<(String, Features)> = Vec::new();

    let mut entries: Vec<_> = std::fs::read_dir(&golden_dir)
        .expect("cannot read golden dir")
        .filter_map(|e| e.ok())
        .filter(|e| e.path().extension().and_then(|ext| ext.to_str()) == Some("c"))
        .collect();
    entries.sort_by_key(|e| e.file_name());

    for entry in &entries {
        let path = entry.path();
        let stem = path.file_stem().unwrap().to_string_lossy().to_string();
        let source = match std::fs::read_to_string(&path) {
            Ok(s) => s,
            Err(e) => {
                eprintln!("  WARN: cannot read {}: {}", path.display(), e);
                continue;
            }
        };
        let features = Features::extract(&source);
        ida_profile.add(&features);
        ida_features.push((stem, features));
    }

    println!(
        "  ✓ {} golden files analyzed ({} total lines)",
        ida_profile.total_files, ida_profile.total_lines
    );
    println!(
        "  Average lines/file: {:.1}",
        ida_profile.avg_lines_per_file()
    );
    println!(
        "  Control flow: if={} for={} while={} switch={} goto={}",
        ida_profile.total_if,
        ida_profile.total_for,
        ida_profile.total_while,
        ida_profile.total_switch,
        ida_profile.total_goto
    );
    println!();

    // Complexity distribution
    let mut trivial = 0;
    let mut simple = 0;
    let mut branchy = 0;
    let mut complex = 0;
    for (_, f) in &ida_features {
        let cf = f.control_flow_total();
        if cf == 0 {
            trivial += 1;
        } else if cf <= 3 {
            simple += 1;
        } else if cf <= 9 {
            branchy += 1;
        } else {
            complex += 1;
        }
    }
    println!("  Complexity distribution:");
    println!(
        "    trivial(0 CF): {trivial}  simple(1-3): {simple}  branchy(4-9): {branchy}  complex(10+): {complex}"
    );
    println!();

    // ── Phase 2: Decompile fixture ELFs ──
    println!("Phase 2: Decompiling x86_64 fixture ELFs...");

    let unlace_bin = find_unlace_binary(root);
    if unlace_bin.is_none() {
        eprintln!("  ERROR: unlace binary not found.");
        eprintln!("  Run `cargo build -p unlace-cli` first.");
        println!();
        println!("Cannot produce comparison — binary not built.");
        return;
    }
    let unlace_bin = unlace_bin.unwrap();

    let x86_fixtures = [
        "branches",
        "calls",
        "cpp_exceptions",
        "cpp_rtti",
        "cpp_vtable",
        "debug_calls",
        "debug_hello",
        "debug_structs",
        "debug_templates",
        "empty",
        "hello_world",
        "loops",
        "medium",
        "stripped",
        "switch_table",
        "x87_math",
    ];

    let mut unlace_profile = AggregateProfile::default();
    let mut fixture_results: Vec<(String, Features, bool)> = Vec::new();
    let mut decompile_failures: Vec<String> = Vec::new();

    for fixture_name in &x86_fixtures {
        let elf_path = root.join("fixtures").join(format!("{fixture_name}.elf"));
        if !elf_path.exists() {
            continue;
        }

        print!("  {fixture_name}.elf ... ");
        match decompile_elf(&unlace_bin, &elf_path) {
            Ok(output) => {
                let features = Features::extract(&output);
                println!(
                    "✓ ({} lines, {} functions, {} CF stmts)",
                    features.line_count,
                    features.function_count,
                    features.control_flow_total()
                );
                unlace_profile.add(&features);
                fixture_results.push((fixture_name.to_string(), features, true));
            }
            Err(e) => {
                println!("✗ ({})", e);
                decompile_failures.push(fixture_name.to_string());
                fixture_results.push((fixture_name.to_string(), Features::default(), false));
            }
        }
    }

    println!();
    println!(
        "  ✓ {} fixtures decompiled ({} total lines)",
        unlace_profile.total_files, unlace_profile.total_lines
    );
    if !decompile_failures.is_empty() {
        println!(
            "  ✗ {} fixtures failed: {}",
            decompile_failures.len(),
            decompile_failures.join(", ")
        );
    }
    println!();

    // ── Phase 3: Compare profiles ──
    println!("Phase 3: Structural comparison...");
    println!();

    if unlace_profile.total_lines == 0 {
        println!("  No unlace output to compare — all fixtures failed.");
        println!();
        return;
    }

    let comparisons = compare_profiles(&ida_profile, &unlace_profile);

    println!(
        "  {:<22} │ {:>10} │ {:>10} │ {:>10}",
        "Dimension", "IDA", "unlace", "Similarity"
    );
    println!("  ──────────────────────┼────────────┼────────────┼────────────");

    let mut total_similarity = 0.0;
    let mut scored_count = 0;

    for c in &comparisons {
        let sim_pct = c.similarity * 100.0;
        let indicator = if sim_pct >= 80.0 {
            "██"
        } else if sim_pct >= 50.0 {
            "▓▓"
        } else if sim_pct >= 20.0 {
            "▒▒"
        } else {
            "░░"
        };
        println!(
            "  {:<22} │ {:>9.5} │ {:>9.5} │ {:>5.1}% {}",
            c.dimension, c.ida_value, c.unlace_value, sim_pct, indicator
        );
        total_similarity += c.similarity;
        scored_count += 1;
    }

    let overall = if scored_count > 0 {
        (total_similarity / scored_count as f64) * 100.0
    } else {
        0.0
    };

    println!("  ──────────────────────┼────────────┼────────────┼────────────");
    println!(
        "  {:<22} │            │            │ {:>5.1}%",
        "OVERALL SIMILARITY", overall
    );
    println!();

    // ── Phase 4: Per-fixture quality heuristics ──
    println!("Phase 4: Per-fixture quality indicators...");
    println!();
    println!(
        "  {:<20} │ {:>5} │ {:>4} │ {:>4} │ {:>4} │ {:>4} │ {:>6}",
        "Fixture", "Lines", "if", "for", "while", "goto", "CF/line"
    );
    println!("  ────────────────────┼───────┼──────┼──────┼──────┼──────┼────────");

    for (name, features, ok) in &fixture_results {
        if !ok {
            println!("  {:<20} │  FAIL │      │      │      │      │", name);
            continue;
        }
        let cf_density = features.density(features.control_flow_total());
        println!(
            "  {:<20} │ {:>5} │ {:>4} │ {:>4} │ {:>4} │ {:>4} │ {:>6.4}",
            name,
            features.line_count,
            features.if_count,
            features.for_count,
            features.while_count,
            features.goto_count,
            cf_density,
        );
    }
    println!();

    // ── Phase 5: Binary↔Golden mapping report ──
    println!("Phase 5: Binary↔Golden mapping availability...");
    println!();
    println!("  The 150 golden .c files were extracted from IDA's hexx64.so (Hex-Rays");
    println!("  x86_64 decompiler plugin). This binary is NOT redistributed in the repo.");
    println!();
    println!("  Golden files use addresses 0x100140–0x11D4A0 from hexx64.so.");
    println!("  Our fixture ELFs use addresses 0x1040–0x1480 (small PIE executables).");
    println!();
    println!("  RESULT: No direct function-address mapping exists between golden corpus");
    println!("  and fixture binaries. Comparison is aggregate/structural only.");
    println!();

    // ── Summary ──
    println!("══════════════════════════════════════════════════════════════");
    println!("  SUMMARY");
    println!("══════════════════════════════════════════════════════════════");
    println!(
        "  IDA corpus:     {} files, {} lines",
        ida_profile.total_files, ida_profile.total_lines
    );
    println!(
        "  unlace output:  {} files, {} lines",
        unlace_profile.total_files, unlace_profile.total_lines
    );
    println!("  Overall style similarity: {:.1}%", overall);
    println!();
    println!("  Key findings:");
    let mut findings: Vec<String> = Vec::new();

    // Find best and worst dimensions
    let mut sorted_comparisons: Vec<&ComparisonResult> = comparisons.iter().collect();
    sorted_comparisons.sort_by(|a, b| b.similarity.partial_cmp(&a.similarity).unwrap());

    if let Some(best) = sorted_comparisons.first() {
        findings.push(format!(
            "Best match:  {} ({:.1}%)",
            best.dimension,
            best.similarity * 100.0
        ));
    }
    if let Some(worst) = sorted_comparisons.last() {
        findings.push(format!(
            "Worst match: {} ({:.1}%)",
            worst.dimension,
            worst.similarity * 100.0
        ));
    }

    // Control flow vs goto analysis
    if unlace_profile.total_goto > 0 {
        let goto_ratio =
            unlace_profile.total_goto as f64 / unlace_profile.total_lines as f64 * 100.0;
        let ida_goto_ratio = ida_profile.total_goto as f64 / ida_profile.total_lines as f64 * 100.0;
        if goto_ratio > ida_goto_ratio * 2.0 {
            findings.push(format!(
                "⚠ goto density ({:.3}%) is {:.1}x higher than IDA ({:.3}%)",
                goto_ratio,
                goto_ratio / ida_goto_ratio.max(0.001),
                ida_goto_ratio
            ));
        }
    }

    for finding in &findings {
        println!("    • {finding}");
    }
    println!();
    println!("  Note: This measures output STYLE similarity, not semantic correctness.");
    println!("  A high score means our output looks structurally similar to IDA's.");
    println!("  A low score is expected early in development — this is a tracking metric.");
    println!();
}

fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| root.join("target"));

    // Try debug first, then release
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

fn decompile_elf(unlace_bin: &Path, elf_path: &Path) -> Result<String, String> {
    let output = Command::new(unlace_bin)
        .args(["decompile", "--emit", "c", "--timeout", "30"])
        .arg(elf_path)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("spawn failed: {e}"))?;

    if !output.status.success() {
        let stderr = String::from_utf8_lossy(&output.stderr);
        let first_line = stderr.lines().next().unwrap_or("unknown error");
        return Err(first_line.to_string());
    }

    String::from_utf8(output.stdout).map_err(|e| format!("non-UTF8 output: {e}"))
}
