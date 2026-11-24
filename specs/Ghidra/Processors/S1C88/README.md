# Seiko Epson S1C88

Written for unlace (issue #98) from Epson's public core manual. The only prior
SLEIGH for the Epson cores has no licence and was not consulted.

Language: `S1C88:LE:16:default`. It covers the S1C88 8-bit core
(S1C88xxx microcontrollers, and the CPU of the Nintendo Pokemon mini).

## Sources

- Epson *S1C88 Core CPU Manual* (MF658-05): registers and flags (chapter 2),
  addressing modes and instruction format (4.1, 4.2), and the instruction list
  by function (4.3.3), which gives every instruction's machine code,
  operation and flags. There is one constructor per row of that list,
  including the 608 MODEL3 instructions behind the CEH/CFH prefixes.
- Oracle: MAME's `minx` disassembler (BSD-3-Clause), the Pokemon mini variant
  of the core, built locally as a stand-alone tool. All 768 first and second
  opcode slots (with fixed operand bytes) decode to the same instruction class
  and length, and all 53 PC-relative branch and call targets agree. The five
  rows where the two disagree follow the Epson manual: `CE AF` is `SLP`
  (MAME: `nop`), and `CF 60`-`CF 63` are `ADC`/`SBC BA/HL,#mmnn` (MAME:
  `cmpn`). The Epson manual also lists `CE D2`/`CE D3` as `LD L/H,[hhll]` and
  `CE 46`-`CE 5F` stores as `[IX+L]`/`[IY+L]`; MAME swaps or simplifies
  those operands.

## What is modelled

- All 8- and 16-bit transfers, arithmetic, logic, compare, `BIT`, `INC`/`DEC`,
  `CPL`/`NEG`, `MLT`/`DIV`, `PACK`/`UPCK`/`SEP`, `SWAP`, rotates and shifts,
  in every addressing mode: `[HL]`, `[IX]`, `[IY]`, `[IX+dd]`, `[IY+dd]`,
  `[IX+L]`, `[IY+L]`, `[SP+dd]`, `[BR:ll]` (BR is the high byte) and
  `[hhll]`.
- Branches: `JRS`/`JRL` with every condition (C, NC, Z, NZ, LT, LE, GT, GE,
  V, NV, P, M, F0-F3, NF0-F3), `DJR NZ`, `JP HL`, `JP [kk]`, `CARS`/`CARL`
  (conditional calls included), `CALL [hhll]`, `INT [kk]`, `RET`, `RETE` and
  `RETS`. Relative targets are taken from the address of the displacement's
  last byte, as the manual specifies.
- Stack: `PUSH`/`POP` of every register and register group (`ALL`, `ALE`,
  `IP`). Calls push a 2-byte return address (MODEL0/1 and the MODEL2/3
  minimum mode).
- Flags `Z C V N D U I0 I1` are separate registers. `SC` is packed or unpacked
  wherever it is read or written. F0-F3 come from `CC`, which the core does
  not write.
- Decimal and unpack arithmetic: the 8-bit `ADD`/`ADC`/`SUB`/`SBC` and
  `NEG` decode in binary, decimal (BCD) or unpack (low-nibble) form from the
  flow context bits `dmode`/`umode`. `LD`/`AND`/`OR`/`XOR SC,#nn` commit
  those bits along the flow. Their reset value is 0.

## Gaps

- Addressing is the flat 64 KB of MODEL0/1. In MODEL2/3, `NB`/`CB` and
  `EP`/`XP`/`YP` are loaded, pushed and popped, but they do not extend code or
  data addresses. The 3-byte return frames of maximum mode are not modelled.
  Decompile one bank at a time at its CPU address.
- `dmode`/`umode` approximate the run-time D and U flags. `LD SC,A`, `POP SC`
  and `RETE` do not update them.
- `DIV` by zero (an exception on the hardware) is not modelled. `HALT` and
  `SLP` are user ops.
- No compiler ABI is assumed. Arguments in A, B, L, H, IX, IY and results in
  A/BA only model hand-written routines.
