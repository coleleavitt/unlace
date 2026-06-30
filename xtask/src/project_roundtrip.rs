//! `xtask project-roundtrip` — CLI-invokable proof that a `.unlace` project
//! file round-trips losslessly (ROADMAP Phase K.1).
//!
//! Builds a `ProjectFile` populated with one of every user-fact kind
//! (rename, type overlay, variable-type override, call override, microcode
//! assertion/deletion/propagation-block), saves it to a temp `.unlace`, reloads
//! it, and asserts the reloaded project is byte-for-byte value-equal and passes
//! validation. This complements the in-crate unit test with an
//! externally-runnable gate.

use std::path::Path;

use unlace_session::project::ProjectFile;
use unlace_session::{
    AssertionInjection, CallOverride, DeletedInsn, PropagationBlock, Rename, TypeAnnotation,
    VariableTypeOverride,
};

pub fn run(_root: &Path) -> i32 {
    let project = build_sample_project();

    let path = std::env::temp_dir().join(format!("unlace-roundtrip-{}.unlace", std::process::id()));
    let outcome = roundtrip(&project, &path);

    // Best-effort temp cleanup; a failure here does not affect the result.
    if let Err(e) = std::fs::remove_file(&path)
        && e.kind() != std::io::ErrorKind::NotFound
    {
        eprintln!("project-roundtrip: note — temp cleanup failed: {e}");
    }

    match outcome {
        Ok(()) => {
            println!("project-roundtrip: OK");
            println!("  facts round-tripped: 1 rename, 1 type overlay, 1 var-type override,");
            println!("  1 call override, 1 assertion, 1 deleted insn, 1 propagation block.");
            println!("  saved+reloaded project is value-equal and validates.");
            0
        }
        Err(msg) => {
            eprintln!("project-roundtrip: FAIL — {msg}");
            1
        }
    }
}

/// Save `project` to `path`, reload, validate, and compare for value-equality.
fn roundtrip(project: &ProjectFile, path: &Path) -> Result<(), String> {
    project
        .save_to(path)
        .map_err(|e| format!("save failed: {e}"))?;
    let recovered = ProjectFile::load_from(path).map_err(|e| format!("load failed: {e}"))?;
    recovered
        .validate()
        .map_err(|e| format!("validation failed: {e}"))?;
    if &recovered != project {
        return Err("reloaded project differs from saved project".to_string());
    }
    Ok(())
}

/// A `ProjectFile` carrying one of every user-fact kind.
fn build_sample_project() -> ProjectFile {
    let mut project = ProjectFile::new("fixtures/roundtrip.elf", "0".repeat(64));

    project.annotations.renames.insert(
        0x1000,
        Rename {
            ea: 0x1000,
            old_name: "sub_1000".to_string(),
            new_name: "parse_header".to_string(),
        },
    );
    project.type_overlays.insert(
        0x1000,
        TypeAnnotation {
            ea: 0x1000,
            declaration: "int parse_header(void *hdr)".to_string(),
        },
    );
    project.variable_type_overrides.insert(
        0x1000,
        vec![VariableTypeOverride {
            function_ea: 0x1000,
            var_name: "v4".to_string(),
            type_decl: "unsigned __int64".to_string(),
        }],
    );
    project.call_overrides.insert(
        0x100c,
        CallOverride {
            call_ea: 0x100c,
            forced_signature: Some("void f(int)".to_string()),
            forced_callee_ea: Some(0x2000),
            opaque: false,
        },
    );
    project.assertion_injections.insert(
        0x1010,
        AssertionInjection {
            ea: 0x1010,
            expression: "rax == 0".to_string(),
        },
    );
    project
        .deleted_insns
        .insert(0x1014, DeletedInsn { ea: 0x1014 });
    project.propagation_blocks.insert(
        0x1000,
        vec![PropagationBlock {
            function_ea: 0x1000,
            var_name: "v4".to_string(),
        }],
    );

    project
}
