# S12Z

NXP S12Z processor module for unlace (issue #98).

## Sources

- NXP, *S12Z CPU Reference Manual* (S12ZCPURM), opcode map and addressing-mode tables:
  https://www.nxp.com/docs/en/reference-manual/S12ZCPU_RM_V1.pdf
- NXP MC9S12ZVL / MC9S12ZVC / MC9S12ZVM / S12ZVH reference manuals (memory map, vectors):
  https://www.nxp.com/products/processors-and-microcontrollers/s12-magniv-mixed-signal-mcus:S12MAGNIV

Clean-room: written from the manufacturer documentation; no GPL text and no community
SLEIGH module was used. Structure follows the in-repo TLCS90 and Rabbit modules (Apache-2.0).

## Languages

| id | description |
|---|---|
| `S12Z:BE:24:default` | S12Z CPU, big-endian, 24-bit linear address space |

## Modelled

Checked against the opcode tables of the GNU binutils S12Z disassembler (sourceware.org
binutils-gdb, opcodes/s12z-opc.c, read only for the encodings; no text taken).

- Registers D0-D1 (8-bit), D2-D5 (16-bit), D6-D7 (32-bit), X, Y, S, PC (24-bit), CCW/CCL/CCH;
  the flags C, V, Z, N, H, I, X, S are separate flag registers, packed into CCL for
  TFR/PSH/PUL/RTI. The register field numbering is 0-3 D2-D5, 4-5 D0-D1, 6-7 D6-D7.
- Page 1: ADD/SUB/CMP/LD/ST/ADC/SBC/AND/OR/EOR/BIT in their immediate, OPR and extended
  forms; INC/DEC/CLR/COM/NEG by size; X/Y loads, stores, compares and the 18-bit immediate
  load; LEA; MOV.B/W/P/L; TFR/EXG/SEX/ZEX; PSH/PUL register masks; DBcc/TBcc; BCLR/BSET/BTGL/
  BRCLR/BRSET; ANDCC/ORCC; JMP/JSR/BSR/BRA, the 14 conditional branches (7- and 15-bit
  displacements, relative to the opcode address), RTS, NOP, BGND, SWI.
- Shifts (page 1 0x10-0x17) with register operands: LSL/LSR/ASL/ASR Dd, Ds by 1 or 2, by a
  5-bit immediate (XB 0111nnnn) or by a data register (XB 10111ddd); C is the last bit
  shifted out, N and Z from the result, V = N xor C for ASL, else cleared.
- Page 2 (prefix 0x1B): the rows above that live there, RTI, STOP, WAI, SYS, TRAP.
- Every OPR postbyte form: short immediate, register, indexed with u4/s9/s24 offsets,
  indirect, Dn-indexed, pre/post increment and decrement on X, Y and S, 14/18/24-bit direct
  and [ext24].
- STOP, WAI, SYS, TRAP, BGND, SWI and RTI's side effects are named pcodeops.

## Gaps

- Shifts and rotates whose operand is an OPR memory operand (shift-byte modes 10/11:
  LSL/LSR/ASL/ASR with an OPR source or count, ROL/ROR) and a shift count taken from a
  memory OPR operand.
- MUL/MAC/QMUL (page 2 0x48-0x4F and their OPR forms), DIV/MOD, BFEXT/BFINS and CLB.
- The half-carry flag is not computed by ADD/ADC/SUB/SBC.
- These encodings decode as bad instructions.

## Test vectors

`crates/unlace-cli/tests/fixtures/s12z/add_store.{bin,s}`, checked by the `s12z` row of
`crates/unlace-cli/tests/processors.toml`. Expected C:

```c
unsigned short sub_0(short a0)
{
  if (a0 + 3U <= 0xf) {
    dat_8000 = a0 + 3U;
    return 5;
  }
  return 0;
}
```

Spot checks (decompiled with the pinned unlace build): `58 00 FF 68 E3 61 74 64 B9 9E 45
AE 48 1B 50 00 01 1B 78 12 34 9A 05` (AND imm, AND (+X), ADD short imm, ADD reg, TFR, SEX,
ADC, EOR, CLR X, RTS) and `1B 58 00 01 1B 70 00 02 BD FA 00 80 00 9B 05` (BIT, SBC,
CLR.W ext24, CLR Y, RTS) decode without a bad instruction and give the expected C;
`10 40 05` (LSL D2,D2,#1) gives `return a0 << 1;` and `16 9E 72 05` (ASR D6,D6,#5) gives
`return a0 >> 5;`.
