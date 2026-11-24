# Signetics 2650 / 2650A / 2650B

Native SLEIGH written for unlace (issue #98; no prior SLEIGH existed) from the
Signetics 2650 Microprocessor manual (1975) and the 2650 data sheet. No
third-party SLEIGH or emulator source is copied.

Language: `2650:BE:16:default`.

## What is modelled

- `R0`, bank 0 `R1`-`R3` and bank 1 `R1'`-`R3'` (`R1p`-`R3p`); the PSL
  register-select (RS), with-carry (WC) and logical-compare (COM) bits are
  decode context, set by `PPSL`/`CPSL` immediates and followed along the flow.
- Every addressing mode: register (Z), immediate (I), relative (R, +-64 bytes,
  optionally indirect) and absolute (A) with indirection and the index modes
  (indexed, auto-increment, auto-decrement; an indexed instruction operates on
  `R0` and uses the opcode's register as the index). Non-branch addresses stay
  in the 8 KiB page of the instruction; branch absolute addresses are 15 bits;
  `ZBRR`/`ZBSR` address page 0 relative to 0; `BXA`/`BSXA` add `R3`.
- Condition code `CC` (0 zero/equal, 1 positive/greater, 2 negative/less) from
  loads, logic, arithmetic, I/O reads, rotates and compares (signed, or unsigned
  when COM is set); `TMI`, `TPSU`, `TPSL` test under mask.
- `ADD`/`SUB` with carry, interdigit carry (`IDC`) and overflow, including the
  WC carry/borrow chain (C = 1 means no borrow); `RRR`/`RRL` through carry when
  WC is set; `DAR` decimal adjust.
- Conditional and register branches, calls and returns (`BCT`, `BCF`, `BST`,
  `BSF`, `BRN`, `BSN`, `BIR`, `BDR`, `RETC`, `RETE`); the 8-level return
  address stack is a downward stack above the 15-bit space (`SP`).
- I/O: `REDE`/`WRTE` at `io:0x00`-`0xFF`, the control port (`REDC`/`WRTC`) at
  `io:0x100` and the data port (`REDD`/`WRTD`) at `io:0x101`.

## Gaps

- `LPSL` from a register value updates CC, IDC, OVF and C but cannot change the
  RS/WC/COM decode context, and `SPSL` reads that context as decoded.
- The PSU stack-pointer field is not kept in step with the modelled stack; the
  sense input is read as the PSU register. Interrupts are not modelled.
- Undefined opcodes (0x10, 0x11, 0x90, 0x91, 0xB6, 0xB7, 0xC4-0xC7) decode as bad
  instructions.

## Check

No assembler or emulator was available, so the test vectors are hand-assembled
from the manual's opcode table: `crates/unlace-cli/tests/fixtures/s2650/`.
