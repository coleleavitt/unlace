# Seiko Epson S1C6200 (E0C6200, E0C6200A)

Written for unlace (issue #98) from Epson's public core manual. The only prior
SLEIGH for the Epson cores has no licence and was not consulted.

Language: `S1C6200:BE:16:default`. It covers the 4-bit core of the S1C62/E0C62
family: E0C6200, E0C6200A, and parts such as the E0C6S46 found in the original
Tamagotchi.

## Sources

- Epson *E0C6200/6200A Core CPU Manual* (MF297-06a): program counter and PSET
  rules (2.1), data memory, index registers and stack (2.2), the decimal
  table (2.3.1), and the instruction list by operation code (3.1.3).
- Oracle: MAME's `e0c6200` disassembler (BSD-3-Clause), built locally as a
  stand-alone tool and run on all 4,096 12-bit encodings. Every encoding gets
  the same mnemonic and operands as in MAME, the undefined ones included.
  Jump operands differ only in display: MAME prints the step, unlace the full
  word address.

## Memory model

- `code`: word-addressed program memory, one 12-bit instruction per 16-bit
  big-endian word (13-bit addresses: bank, page, step). A raw ROM image is a
  sequence of big-endian words.
- `data`: 4,096 4-bit data words, one per byte, stored in the low nibble.
  `MX`/`MY` address it through `XP:XHL`/`YP:YHL`, `Mn` is word `0x00n`.
  The stack (SP) lives at `0x000`-`0x0FF`.

## What is modelled

- Every instruction: loads, `LBPX`, `LDPX`/`LDPY`, the 4-bit ALU, and the
  index-register `ADC`/`CP`. Also `RLC`/`RRC`, `INC`/`DEC Mn`, `ACPX`/`SCPX`
  and friends, flag set/reset, `PUSH`/`POP` and `HALT`/`SLP`.
- Branches: `JP` (and the C/NC/Z/NZ forms) jumps within the jump's own page.
  After `PSET p`, it jumps to PSET's bank and page. PSET commits the noflow
  context bits `pset`/`nbp`/`npp` to the next instruction. `CALL` uses the
  page only, `CALZ` page 0. `RET`, `RETS` (skips one instruction), `RETD e`
  (also stores `e` at `MX` and steps X by 2) and `JPBA` (jumps to the
  computed address B:A) are all modelled.
- Calls push the three return-address nibbles onto the stack, and the
  calling-convention spec describes them as the return address.
- Decimal mode: ADD/ADC/SUB/SBC and ACPX/ACPY/SCPX/SCPY are decimal-adjusted
  as in the manual's table 2.3.1.1 when the decode-time context bit `dmode`
  is set. `SDF`, `RDF`, `SET F,i` and `RST F,i` commit `dmode` along the
  flow. Its reset value is 0, the E0C6200A's reset value of D. The `D`
  register is still written, so code that reads F sees it.

## Gaps

- `dmode` is a decode-time approximation of the run-time D flag. D set by
  `POP F`, or a routine entered with D already set from another flow, decodes
  as binary arithmetic.
- SP and the index registers' 8-bit wraparound are not modelled (SP
  arithmetic is plain 16-bit). This keeps the stack analysable.
- Interrupts, `HALT` and `SLP` are user ops; peripheral registers are not
  labelled.
- No compiler targets the core. The calling convention (arguments in A and B,
  result in A) only models hand-written routines.
