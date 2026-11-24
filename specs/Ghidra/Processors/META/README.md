# Imagination Technologies META

Written for unlace from the GNU binutils META port: the opcode table in
`include/opcode/metag.h` and the operand decoding in `opcodes/metag-dis.c` (binutils 2.45),
read for field layouts only; no text from them is copied. The calling convention follows
the META ABI as the Linux `arch/metag` port and GCC's metag back end used it. No prior
SLEIGH for META was found.

Language: `META:LE:32:default`, the general-purpose (GP) instructions of Meta 1.1, 1.2 and
2.1. Every instruction is one little-endian 32-bit word.

Modelled:
- Registers by unit: D0.0-31 and D1.0-31 (with the ABI names D0Re0, D1Ar1, D0Ar2, ...,
  D0FrT, D1RtP), A0.0-15 and A1.0-15 (A0StP, A0FrP, A1GbP, A1LbP), CPC0/CPC1, the CT
  control registers, PC/PCX, TR, TT and FX. N, Z, V, C are separate flag bytes.
- ALU (ADD, SUB, AND, OR, XOR, MUL, address-unit ADD/SUB) in all four forms: register,
  16-bit immediate (sign-extended, top half with T, the other half filled with ones with
  M), conditional register with a destination in any unit, and the 8-bit immediate with
  either a condition or a cross-unit destination. The O2R bit takes source 2 from another
  unit. The S forms set N/Z, plus C/V for ADD and SUB (C is the borrow on subtract, so CS
  is LO as binutils names it).
- LSL/LSR/ASL/ASR (register or immediate count, conditional and cross-unit forms), CMP and
  TST in all forms, MIN, MAX, ABS, XSDB/XSDW (sign extension), RTDW, BEXD.
- GET/SET in bytes, words, double words and register pairs (GETL/SETL), with every
  addressing mode: offset, pre/post increment and decrement, pre/post modify by an
  immediate or a register; the extended 12-bit offset forms on A0StP/A0FrP/A1GbP/A1LbP;
  MGET/MSET of up to eight registers or pairs with the base post-incremented; the
  conditional SET.
- Flow: B cc (19-bit word offset), CALLR (link register named in the word), JUMP/CALL
  (register plus immediate), MOV PC,reg (MOV PC,D1RtP is the return), RTI/RTH. SWITCH
  (the trap used for system calls), KICK, LOCK and the ones without a model are user-ops.

The compiler spec: arguments in D1Ar1, D0Ar2, D1Ar3, D0Ar4, D1Ar5, D0Ar6, the result in
D0Re0, the return address in D1RtP, A0StP the stack pointer growing upward;
D0.5-D0.7, D1.5-D1.7, A0FrP, A1GbP and A1LbP are preserved.

Gaps: the FPU (FX unit arithmetic) and DSP instruction sets, XFR, MMOV/MDRD, the RD read
port forms (GET into RD, MOV to RD), QUICKRoT (the Q forms), TTMOV, the cache and
link-load/store instructions are not decoded. MULW is modelled as an unsigned 16x16
multiply, the flags of shifts and the bit operations set only N and Z, and CALL (JUMP
with bit 2) is assumed to link into D1RtP; the manuals that would settle these are not
public. An ALU write to PC is a register write, not a branch.

Oracle: `metag-linux-gnu-as` and `objdump` from binutils 2.45 (built with
`--target=metag-linux-gnu`) assembled the fixture and a 36-instruction coverage file (every ALU form, shifts, CMP/TST,
GET/SET addressing modes, MGET/MSET, conditional SET and return); the decompiled p-code of
the coverage file was checked by hand against objdump's decoding. Tests:
`crates/unlace-cli/tests/meta_raw.rs` (fixture source `fixtures/meta/sum_call.s`).
