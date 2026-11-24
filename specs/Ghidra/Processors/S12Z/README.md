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
- Shifts and rotates with OPR operands (shift-byte modes 10/11): LSL/LSR/ASL/ASR Dd, OPR.size
  by 1 or 2 or by a count operand (5-bit immediate XB 0111nnnn, register or memory byte),
  the in-place OPR form by 1 or 2, and ROL/ROR through C on an OPR operand. The shift is done
  at the operand size and the result zero- (logical) or sign- (arithmetic) extended or
  truncated into Dd.
- MULS/MULU (page 1 0x48-0x4F), DIVS/DIVU (page 2 0x30-0x37), MODS/MODU (0x38-0x3F),
  MACS/MACU (0x48-0x4F) and QMULS/QMULU (0xB0-0xB7) in all four multiplier-byte modes
  (register-register, register-OPR, register-immediate of 1/2/4 bytes, OPR-OPR with both
  sizes); operands are sign- or zero-extended, the result truncated into Dd, N/Z from the
  result, V set when the truncation loses bits, C set by DIV/MOD on a zero divisor.
- BFEXT/BFINS (page 2 0x08-0x0F) in all six modes (width:offset from Dp bits 9:5/4:0 or a
  5:5-bit immediate; register or OPR source and destination) as real p-code.
- CLB Ds, Dd (page 2 0x91): the count of leading bits equal to the sign bit, excluding it,
  computed with lzcount.
- H is the carry out of bit 3 for ADD/ADC/SUB/SBC/CMP (all operand sizes).
- Page 2 (prefix 0x1B): the rows above that live there, RTI, STOP, WAI, SYS, TRAP.
- Every OPR postbyte form: short immediate, register, indexed with u4/s9/s24 offsets,
  indirect, Dn-indexed, pre/post increment and decrement on X, Y and S, 14/18/24-bit direct
  and [ext24].
- STOP, WAI, SYS, TRAP, BGND, SWI and RTI's side effects are named pcodeops.

## Gaps

- QMULS/QMULU (fractional multiply) are the named pcodeop `fractional_multiply`.
- BFEXT/BFINS treat a width of 0 as an empty field; CLB leaves C/V aside from clearing V;
  MUL/MAC leave C unchanged. These follow the decoder's operand layout; the manual's
  edge-case rules (width 0, DIV overflow, MAC saturation) are not modelled.
- H is computed for every operand size, not only byte operations.

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

Round-6 spot checks (each followed by RTS): `48 8A` (MULS D2,D3,D4) gives `return v1 * v2;`;
`1B 30 4D 00 07` (DIVU.W D2,D3,#7) gives `return v1 / 7;`; `1B 48 8A` (MACS D2,D3,D4) gives
`return a0 + v1 * v2;`; `10 61 FA 00 10 00` (LSL.W D2,0x1000,#1) gives `return dat_1000 << 1;`;
`10 B1 FA 00 10 00 71` (ASR.W D2,0x1000,#2) gives `return dat_1000 >> 2;`; `10 64 FA 00 10 00`
(ROL.B 0x1000) gives `dat_1000 = dat_1000 << 1 | v1;`; `1B 08 25 04` (BFEXT D2,D3,#8:4) gives
`return v1 >> 4 & 0xff;`; `1B 91 60` (CLB D6,D2) gives `return LZCOUNT(a0 ^ (long)a0 >> 1) + -1;`.
