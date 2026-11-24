# Solana sBPF

Written for unlace from the sBPF bytecode reference (anza-xyz/sbpf, `doc/bytecode.md`) and the
eBPF instruction set (RFC 9669). The only prior SLEIGH for sBPF has no license and was not
consulted; the in-tree `eBPF` module was not copied either.

Languages (`sbpf.sinc` holds the shared registers and operands; each `.slaspec` holds one
opcode map, generated from the reference tables):
- `sBPF:LE:64:v1`: SBPFv0/v1, the legacy eBPF-derived map (`mul`/`div`/`mod`, `neg`, `le`,
  `lddw`, loads/stores in classes 1-3, `callx` register in the immediate field).
- `sBPF:LE:64:v2`: SBPFv2: the PQR class (`uhmul64`, `udiv`, `urem`, `lmul`, `shmul64`,
  `sdiv`, `srem`), loads/stores moved into the old `mul`/`div`/`mod`/`neg` slots, `hor64`,
  reversed `sub` with an immediate, `callx` register in the source field.

Modelled: every ALU, memory and jump instruction of both maps. 32-bit ALU results are
extended as the reference says (v1: `add32`, `sub32` with a register and `mul32`
sign-extend, the rest zero-extend; v2: all zero-extend except `mov32` with a register).
64-bit immediates are sign-extended (eBPF, and rbpf's `insn.imm: i64`); the reference's
`imm as u64` rows read the immediate as `u32` but the interpreter sign-extends.
`call` with source 1 is a pc-relative call (unlinked objects, LLVM's pseudo-call); with
source 0 it is a call into the 4-byte `syscall` space at the immediate, the murmur3-32 hash
of a syscall or function name. `sbpf.pspec` labels the hashes of the Solana syscalls
(`sol_log_`, `sol_invoke_signed_c`, `sol_memcpy_`, ...), computed with murmur3-32, seed 0.
`exit` returns; r6-r10 are preserved across calls (the VM saves them); r10 is the frame
pointer and the compiler spec's stack pointer.

Gaps: a hashed call to an internal function (v0/v1 linkers hash the target pc) is not
resolved to its address; the program's function registry is not read. Division by zero and
the other VM panics are not modelled (the p-code divides). `be64` is the `byteSwap64` user-op.
SBPFv3 (static syscalls, `callx` in the destination field, jump confinement) has no language.

Oracle: `clang --target=bpfel -mcpu=v1 -O2` and `llvm-objdump -d` for the v1 fixture
(sBPF v1 shares eBPF's encoding for everything clang emits at `-mcpu=v1`); hand-assembled
vectors from the reference tables for v2. Tests: `crates/unlace-cli/tests/sbpf.rs`.
