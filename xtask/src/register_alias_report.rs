//! `xtask register-alias-report` - executable-free register alias semantics.
//!
//! DWARF/source type scoring cannot see register-only alias bugs, so this
//! report keeps byte-level lifter invariants as a separate gate.

use unlace_ir::{IrInsn, IrOp, Lifter, SpaceId, Varnode};
use unlace_lift_x86::X86Lifter;
use unlace_lift_x86::register_file::{R16, RAX, RIP, ZMM0};

struct LiftCase {
    name: &'static str,
    bytes: &'static [u8],
    check: fn(&[IrInsn]) -> Result<(), String>,
}

const CASES: &[LiftCase] = &[
    LiftCase {
        name: "mov eax, ebx zero-extends into rax",
        bytes: &[0x89, 0xD8],
        check: check_mov_eax,
    },
    LiftCase {
        name: "mov al, bl updates full rax parent",
        bytes: &[0x88, 0xD8],
        check: check_partial_rax_write,
    },
    LiftCase {
        name: "mov ah, bl updates full rax parent",
        bytes: &[0x88, 0xDC],
        check: check_partial_rax_write,
    },
    LiftCase {
        name: "vpaddd xmm0 zeroes upper zmm0 lanes",
        bytes: &[0xC5, 0xF9, 0xFE, 0xC1],
        check: check_vector_zeroing_128,
    },
    LiftCase {
        name: "vpaddd ymm0 zeroes upper zmm0 lanes",
        bytes: &[0xC5, 0xFD, 0xFE, 0xC1],
        check: check_vector_zeroing_256,
    },
    LiftCase {
        name: "legacy paddd xmm0 stays narrow",
        bytes: &[0x66, 0x0F, 0xFE, 0xC1],
        check: check_legacy_sse_stays_narrow,
    },
];

pub fn run() -> i32 {
    let lifter = X86Lifter::new();
    let mut failed = 0usize;

    println!("register-alias-report: lifter register alias semantic suite");
    for case in CASES {
        match lifter.lift_insn(case.bytes, 0x1000) {
            Ok(lifted) => match (case.check)(&lifted.ir_ops) {
                Ok(()) => println!("[reg-alias] PASS {}", case.name),
                Err(reason) => {
                    println!("[reg-alias] FAIL {} - {reason}", case.name);
                    failed += 1;
                }
            },
            Err(err) => {
                println!("[reg-alias] FAIL {} - decode/lift error: {err}", case.name);
                failed += 1;
            }
        }
    }

    if R16 == RIP {
        println!("[reg-alias] FAIL APX R16 and RIP register slots collide");
        failed += 1;
    } else {
        println!("[reg-alias] PASS APX R16 and RIP register slots are distinct");
    }

    if failed == 0 {
        println!("register-alias-report: passed={} failed=0", CASES.len() + 1);
        0
    } else {
        println!(
            "register-alias-report: passed={} failed={failed}",
            CASES.len() + 1 - failed
        );
        1
    }
}

fn check_mov_eax(ops: &[IrInsn]) -> Result<(), String> {
    require(
        ops.iter()
            .any(|insn| insn.op == IrOp::IntZext && insn.output == Some(Varnode::reg(RAX, 8))),
        "missing RAX-sized zero-extension for EAX write",
    )?;
    require(
        !ops.iter()
            .any(|insn| insn.output == Some(Varnode::reg(RAX, 4))),
        "EAX escaped as an independent SSA destination",
    )
}

fn check_partial_rax_write(ops: &[IrInsn]) -> Result<(), String> {
    require(
        ops.iter()
            .any(|insn| insn.op == IrOp::IntOr && insn.output == Some(Varnode::reg(RAX, 8))),
        "partial byte write did not rewrite the full RAX parent",
    )?;
    require(
        !ops.iter()
            .any(|insn| insn.output == Some(Varnode::reg(RAX, 1))),
        "partial byte register escaped as an independent SSA destination",
    )
}

fn check_vector_zeroing_128(ops: &[IrInsn]) -> Result<(), String> {
    check_vector_zeroing(ops, 16)
}

fn check_vector_zeroing_256(ops: &[IrInsn]) -> Result<(), String> {
    check_vector_zeroing(ops, 32)
}

fn check_vector_zeroing(ops: &[IrInsn], temp_size: u8) -> Result<(), String> {
    let call_dst = ops
        .iter()
        .find(|insn| insn.op == IrOp::Callother)
        .and_then(|insn| insn.output)
        .ok_or_else(|| "missing vector intrinsic Callother output".to_string())?;
    require(
        call_dst.space == SpaceId::Unique && call_dst.size == temp_size,
        "vector intrinsic result was not staged at the encoded width",
    )?;
    require(
        ops.iter().any(|insn| {
            insn.op == IrOp::IntZext
                && insn.inputs.first() == Some(&call_dst)
                && insn.output == Some(Varnode::reg(ZMM0, 64))
        }),
        "missing upper-lane zero-extension into ZMM0",
    )
}

fn check_legacy_sse_stays_narrow(ops: &[IrInsn]) -> Result<(), String> {
    require(
        ops.iter()
            .any(|insn| insn.op == IrOp::Callother && insn.output == Some(Varnode::reg(ZMM0, 16))),
        "legacy SSE output should remain the narrow XMM0 varnode",
    )?;
    require(
        !ops.iter()
            .any(|insn| insn.op == IrOp::IntZext && insn.output == Some(Varnode::reg(ZMM0, 64))),
        "legacy SSE unexpectedly zero-extended upper vector lanes",
    )
}

fn require(condition: bool, reason: &str) -> Result<(), String> {
    if condition {
        Ok(())
    } else {
        Err(reason.to_string())
    }
}
