//! `xtask arch-scorecard` — facade lifter registration scorecard (ROADMAP
//! Phase J.3).
//!
//! Enumerates every named [`ArchId`] and asks the facade [`get_lifter`] which
//! lifter answers for it, classifying each as **registered** (a real per-arch
//! lifter with a populated register file) or **stub** (the fallback
//! `StubLifter`, which has an empty register file). This gives a single,
//! trendable view of architecture breadth that updates automatically as
//! lifters are wired into the facade. Read-only; writes stdout +
//! `target/arch-scorecard.md`.

use std::path::Path;

use unlace_ir::ArchId;
use unlace_lift::get_lifter;

/// Every named architecture the IR knows about. `Unknown(u16)` is excluded
/// (it is the catch-all, never a registration target).
const ARCHES: &[ArchId] = &[
    ArchId::X86,
    ArchId::X86_64,
    ArchId::Arm,
    ArchId::AArch64,
    ArchId::RiscV64,
    ArchId::Mips,
    ArchId::Mips64,
    ArchId::Ppc,
    ArchId::Ppc64,
    ArchId::V850,
    ArchId::Arc,
    ArchId::TriCore,
    ArchId::Wasm,
    ArchId::Ebpf,
    ArchId::Sbpf,
    ArchId::Avr,
    ArchId::Msp430,
    ArchId::AmdGpu,
    ArchId::Stm8,
    ArchId::Z80,
    ArchId::RxRenesas,
    ArchId::Agx,
    ArchId::Sparc,
    ArchId::M68k,
    ArchId::SuperH,
    ArchId::NvidiaSass,
    ArchId::Xtensa,
    ArchId::Mos6502,
    ArchId::I8051,
    ArchId::Hexagon,
    ArchId::Pic16,
    ArchId::Sharc,
    ArchId::SharcBlackfin,
    ArchId::TiC6x,
    ArchId::TiC28x,
    ArchId::Evm,
    ArchId::SpirV,
    ArchId::AppleAgx,
    ArchId::Lua,
];

pub fn run(root: &Path) {
    let mut registered = Vec::new();
    let mut stub = Vec::new();

    for &arch in ARCHES {
        let lifter = get_lifter(arch);
        // A registered lifter populates a register file; the StubLifter does not.
        let reg_count = lifter.register_file().registers.len();
        if reg_count > 0 {
            registered.push((arch, reg_count));
        } else {
            stub.push(arch);
        }
    }

    let total = ARCHES.len();
    let mut out = String::new();
    out.push_str("# arch-scorecard\n\n");
    out.push_str(&format!(
        "Facade lifter registration: **{} / {} architectures** resolve to a real \
         lifter (non-empty register file); {} fall through to the stub.\n\n",
        registered.len(),
        total,
        stub.len()
    ));

    out.push_str("## Registered\n\n");
    out.push_str("| arch | registers |\n|------|----------:|\n");
    for (arch, n) in &registered {
        out.push_str(&format!("| `{arch:?}` | {n} |\n"));
    }

    out.push_str("\n## Stub (unregistered in facade)\n\n");
    if stub.is_empty() {
        out.push_str("_none — every named architecture resolves to a real lifter._\n");
    } else {
        for arch in &stub {
            out.push_str(&format!("- `{arch:?}`\n"));
        }
    }
    out.push('\n');

    print!("{out}");

    crate::report_io::write_artifact(&root.join("target").join("arch-scorecard.md"), &out);
}
