//! `xtask validate-corpus-toml` — parse `tests/corpus.toml` and verify
//! every `binary_path` exists. Pure data validation, no fixture changes.
//!
//! Allowed feature tags come from plan.md Batch 0; anything outside the
//! vocabulary is reported as an error so typos don't silently leak in.

use std::collections::BTreeSet;
use std::path::Path;
use std::process;

use serde::Deserialize;

const ALLOWED_TAGS: &[&str] = &[
    "stack_vars",
    "frame_pointer_omitted",
    "alloca_dynamic_stack",
    "structs_arrays",
    "switches_jump_tables",
    "indirect_calls",
    "varargs_printf",
    "cpp_methods_vtables",
    "rust_panics_enums",
    "objc_dispatch",
    "go_interfaces_defer",
    "eh_landing_pads",
    "simd_callother_heavy",
    "multi_arch",
];

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
    compiler: Option<String>,
    #[serde(default)]
    #[allow(dead_code)]
    flags: Option<String>,
    #[serde(default)]
    #[allow(dead_code)]
    architecture: Option<String>,
    #[serde(default)]
    feature_tags: Vec<String>,
}

pub fn run(root: &Path) {
    let manifest_path = root.join("tests/corpus.toml");
    let text = match std::fs::read_to_string(&manifest_path) {
        Ok(t) => t,
        Err(err) => {
            eprintln!("error: cannot read {manifest_path:?}: {err}");
            process::exit(1);
        }
    };

    let manifest: Manifest = match toml::from_str(&text) {
        Ok(m) => m,
        Err(err) => {
            eprintln!("error: failed to parse {manifest_path:?}:\n{err}");
            process::exit(1);
        }
    };

    let allowed: BTreeSet<&str> = ALLOWED_TAGS.iter().copied().collect();
    let mut errors: Vec<String> = Vec::new();
    let mut seen_names: BTreeSet<String> = BTreeSet::new();
    let mut unknown_compiler: BTreeSet<String> = BTreeSet::new();

    for fix in &manifest.fixture {
        if !seen_names.insert(fix.name.clone()) {
            errors.push(format!("duplicate fixture name: {}", fix.name));
        }

        let bin = root.join(&fix.binary_path);
        if !bin.exists() {
            errors.push(format!(
                "{}: binary_path does not exist: {}",
                fix.name, fix.binary_path
            ));
        }

        if let Some(src) = &fix.source_path {
            let src_path = root.join(src);
            if !src_path.exists() {
                errors.push(format!("{}: source_path does not exist: {src}", fix.name));
            }
        }

        for tag in &fix.feature_tags {
            if !allowed.contains(tag.as_str()) {
                errors.push(format!(
                    "{}: unknown feature_tag {tag:?} (not in plan.md vocabulary)",
                    fix.name
                ));
            }
        }

        match fix.compiler.as_deref() {
            None | Some("unknown") => {
                unknown_compiler.insert(fix.name.clone());
            }
            _ => {}
        }
    }

    println!(
        "validate-corpus-toml: {} fixture(s)",
        manifest.fixture.len()
    );

    if !unknown_compiler.is_empty() {
        println!(
            "  unknown-compiler ({}): {}",
            unknown_compiler.len(),
            unknown_compiler
                .iter()
                .cloned()
                .collect::<Vec<_>>()
                .join(", ")
        );
    }

    if errors.is_empty() {
        println!("  errors: 0");
    } else {
        eprintln!("  errors: {}", errors.len());
        for e in &errors {
            eprintln!("    - {e}");
        }
        process::exit(1);
    }
}
