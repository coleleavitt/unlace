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
- Register-numbered bit ops (BIT/SET/RES Rd,Rs: bit number in the low 4 bits of Rs, second
  word 0000 dddd 0000 0000), BIT/SET/RES on direct addresses, the dynamic shifts
  SDA/SDL/SDAB/SDLB/SDAL/SDLL (signed count in the low byte of a register: positive left,
  negative right, with the last bit shifted out in C), RLC/RRC (byte and word, by 1 or 2,
  through carry), RLDB/RRDB (digit rotates, flags from the link byte), TCC/TCCB.
- PC-relative LDR/LDRB/LDRL (load and store), LDAR, LDM (IR, DA and X forms, a p-code loop
  over the register file), LDPS (named pcodeop `loadProgramStatus`, then a jump).
- Block instructions with real p-code (one step, and a repeat back to the instruction
  start for the R forms): LDI/LDIR/LDD/LDDR and byte forms, CPI/CPIR/CPD/CPDR,
  CPSI/CPSIR/CPSD/CPSDR (byte and word, the condition in the second word sets Z, V = count
  exhausted), TRIB/TRIRB/TRDB/TRDRB and the TRT forms (RH1 and Z), and the block I/O
  INI/INIR/IND/INDR/OUTI/OTIR/OUTD/OTDR with their special-I/O (SIN*/SOUT*) variants through
  `ioIn`/`ioOut`/`specialIoIn`/`specialIoOut`; IN/OUT through a port register (3C-3F),
  SIN/SOUT direct.
- MSET/MRES/MBIT/MREQ as named pcodeops (`multiMicroSet`, `multiMicroReset`,
  `multiMicroBit`, `multiMicroRequest`), the EPU opcodes 0E/0F/8E/8F as
  `extendedInstruction` (one word, as MAME decodes them).
- JP cc, JR cc, CALL, CALR, RET cc, DJNZ/DBJNZ, IRET, SC, HALT, DI/EI, LDCTL, IN/OUT direct
  (named pcodeops for the privileged and I/O side effects).

## Gaps

- Based-address modes (BA/BX: LD/LDB/LDL/LDA Rd,Rs(#disp) and Rs(Rx) with mode 00/01 and
  op 0x30-0x37 with a nonzero register field, 0x70-0x77) are not decoded.
- EPU instructions: only the one-word 0E/0F/8E/8F forms are decoded; their operand words
  and the 4E/4F/CE/CF forms are not.
- In the Z8001 variant, block-instruction and LDM pointer updates add to the whole register
  pair, so a carry out of the 16-bit offset reaches the segment number (the CPU wraps the
  offset). LDM's register-file loop shows as stores through a small pointer in the
  decompiled C.
- The flag effects of DAB and the decimal-adjust H/D flags are left to the pcodeop; block
  instructions model only Z and V (and the compare flags for CP*).

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
DJNZ (F1 82, a do/while loop). Round 2 snippet (decompiled, no bad instruction):
RESB RH5,R3 (22 03 05 00), RESB 0x2000,#1 (62 01 20 00), SDLB (B2 53 07 00), SDA
(B3 3B 02 00), SDAL (B3 CF 04 00), RLC (B3 28), RRCB (B2 2E), RLDB (BE 12), TCC EQ
(AF 36), LDR (31 04 ...), LDAR (34 06 ...), LDM (1C 31 04 03, 5C 09 02 01 30 00), LDIR /
LDI (BB 11 05 20 / 05 28, a do/while copy), CPIRB (BA 14 05 36), TRIB (B8 10 05 60), INI /
INIRB (3B 20, 3A 10), MBIT (7B 0A), MREQ (7B 3D), LDPS (39 10), EXT8E (8E 12), INB @R5
(3C 52), TCCB (AE 58).
