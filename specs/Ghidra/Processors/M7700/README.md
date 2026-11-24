# Mitsubishi / Renesas 7700 Family

Written for unlace (issue #98) from Renesas' public software manual. The prior
SLEIGH in this area (aleph-void/ghidra-m740) covers MELPS740 only, and was not
used here.

Language: `M7700:LE:24:default`. It covers the 7700 Family CPU core (7700,
7770 and 7790 Series: M37700, M37702, M37710, ...) and the five 7750/7751
Series additions (`MPYS`, `DIVS`, `ASR`, `EXTS`, `EXTZ`).

## Sources

- Renesas *7700 Family Software Manual*: CPU registers and the processor
  status register (2.1), addressing modes (chapter 3), every instruction page
  of chapter 4 (operation, flags, machine code and byte count), and the
  Appendix 2 hexadecimal instruction code tables for the first-byte page and
  the 42h and 89h pages.
- Checked against the manual: every instruction row of chapter 4 (331 rows)
  was assembled with m = x = 1, and each decodes to the manual's mnemonic and
  byte count.

## What is modelled

- 16 MB address space as bank:address. Direct-page modes use `DPR + dd` in bank
  0. Absolute and indirect modes use the data bank `DT`. The long modes use a
  24-bit address. Jumps and branches stay in the current program bank, and
  long jumps load `PG`.
- Data length `m`, index length `x` and decimal mode `D` are decode-time
  context bits. `SEP`/`CLP #imm`, `SEM` and `CLM` commit them along the
  flow, and their reset values are m = x = D = 0. Each instruction whose size
  depends on them has an 8-bit and a 16-bit form (immediates, memory
  operands, A/B and X/Y), as the manual's "bytes + 1 when m = 0" rules
  specify.
- Accumulator B through the 42h prefix. The 89h page: `MPY`, `MPYS`, `DIV`,
  `DIVS` (B:A result or dividend), `RLA`, `XAB`, `LDT`, `ASR`, `EXTS`,
  `EXTZ`.
- Bit instructions `SEB`, `CLB`, `BBS`, `BBC` with m-sized masks; `LDM`;
  `PSH`/`PUL` register masks (A, B, X, Y, DPR, DT, PG, PS).
- `JSR`/`RTS` push and pop a 2-byte return address. `JSRL`/`RTL` add `PG`.
  `BRK`/`RTI` also save `PS`. `PEA`, `PEI` and `PER` are modelled.
- Flags `N V m x D I Z C` and `IPL` are separate registers; `PS` is packed
  or unpacked where it is pushed, pulled or changed by `SEP`/`CLP`.

## Gaps

- The m/x/D context approximates the run-time flags. `PLP`, `PUL` with PS and
  `RTI` do not update it, and a routine entered from code with other settings
  decodes with the settings of its own flow.
- Decimal `ADC`/`SBC` are the user ops `decimal_add`/`decimal_sub`.
- `MVP`/`MVN` copy one byte per iteration until A wraps to FFFFh. The
  manual's two-bytes-at-a-time bus behaviour is not modelled.
- `BRK` calls `software_interrupt` instead of branching through the vector.
  `WIT`/`STP` are user ops. `DIV` by zero (a trap) is not modelled.
- The 7900 Series is not covered by this language: it is only source
  compatible with the 7700, not binary compatible.
- The calling convention (first argument and result in A) is an assumption
  modelled on Mitsubishi's C compiler.
