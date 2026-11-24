# Zilog Z8000

A clean-room SLEIGH module for the Zilog Z8000 16-bit CPU family, written in this
repository for issue #98: the Z8002 (non-segmented, 64 KiB) and the Z8001 (segmented,
7-bit segment number + 16-bit offset). No prior SLEIGH module was used or copied. The
file layout (shared `.sinc`, one `.slaspec` per variant, `.ldefs`/`.pspec`/`.cspec`)
follows the in-repo Ghidra modules (Apache-2.0); the encoding tables and p-code are new.

Languages:

- `Z8002:BE:16:default` (`z8002.slaspec`, `z8002.cspec`): 16-bit addresses, stack pointer R15.
- `Z8001:BE:32:segmented` (`z8001.slaspec`, `z8001.cspec`): segmented addresses, the segment
  number lands in bits 22-16 of the flat address; stack pointer RR14.

## Sources

- Zilog, *Z8000 CPU Technical Manual* and *Z8000 PLZ/ASM Assembly Language Programming
  Manual* (instruction encodings, flags): https://www.bitsavers.org/components/zilog/z8000/
- MAME `src/devices/cpu/z8000` (BSD-3-Clause): `z8000tbl.hxx` (opcode ranges) and
  `8000dasm.cpp` (disassembler table) were read to cross-check every encoding:
  https://github.com/mamedev/mame/tree/master/src/devices/cpu/z8000
- tgtakaoka/libasm (Apache-2.0), Z8000 tables, as a second cross-check:
  https://github.com/tgtakaoka/libasm

## What is modelled

- Registers R0-R15, their byte halves RH0-RH7/RL0-RL7, the pairs RR0-RR14 and quads
  RQ0-RQ12, PC, and the flags C Z S V(P/V) D H as separate registers.
- Addressing modes by bits 15-14 of the first word: register, immediate, indirect
  register, direct address, indexed (direct address plus register); in the Z8001 variant
  long and short segmented addresses and register-pair pointers.
- ADD/ADC/SUB/SBC/AND/OR/XOR/CP in byte, word and long forms (carry, overflow, half carry
  on byte ops, sign and zero), NEG/COM/TEST/TSET/CLR, INC/DEC by 1-16, MULT/MULTL,
  DIV/DIVL, EXTS/EXTSB/EXTSL, DAB (named pcodeop `decimalAdjust`).
- LD/LDB/LDL in every mode, the short LDB #imm8 form, LDK, LDA, CP/LD/PUSH immediate to
  memory, EX/EXB, PUSH/POP/PUSHL/POPL, static bit ops (BIT/SET/RES), the static
  shifts (SLA/SRA/SLL/SRL in byte, word, long) and the rotates RL/RR by 1 or 2.
- JP cc, JR cc, CALL, CALR, RET cc, DJNZ/DBJNZ, IRET, SC, HALT, DI/EI, LDCTL, IN/OUT direct
  (named pcodeops for the privileged and I/O side effects).

## Gaps

Not decoded yet (they decode as bad instructions): dynamic bit ops and shifts (SDA/SDL),
RLC/RRC and RLDB/RRDB, the block move/compare/translate/I/O families (LDIR, CPIR, TRIB,
INIR...), TCC, LDR/LDAR (PC-relative loads, 0x31xx/0x34xx with mode 00), LDM, the
special I/O instructions, MBIT/MREQ/MRES/MSET, LDPS, and the EPU extended instructions.
The flag effects of DAB and the decimal-adjust H/D flags are left to the pcodeop.

## Test vectors

`crates/unlace-cli/tests/fixtures/z8000/add_store.bin` (listing `add_store.s`), loaded at
0x1000 for `Z8002:BE:16:default`: ADD R7,R6; CP R7,#100; JR LE; LD 0x2000,R7; RET; RET.
`unlace-cli/tests/z8000_raw.rs` decompiles it and expects:

```c
void sub_1000(short a0,short a1)
{
  if (0x65 <= a0 + a1) {
    dat_2000 = a0 + a1;
    return;
  }
}
```

Spot-checked with small snippets against MAME's tables: LDB short (C5 12), LD #imm
(21 03), CALL (5F 00), CALR (D0 02), LDK (BD 25), INC (A9 30), CLR (8D 48), PUSH/POP
(93 F3 / 97 F5), ADD #imm (01 03), RLB (B2 30), SLAB (B2 39), SRA (B3 39), LDA (76 03),
DJNZ (F1 82, a do/while loop).
