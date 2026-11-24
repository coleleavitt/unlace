# Renesas (Mitsubishi) M32R

Written for unlace (issue #98) from public documentation; no third-party SLEIGH
module exists for this family.

Language: `M32R:BE:32:default` (M32R/D, M32RX and M32R2, big-endian).

## Sources

- Renesas *M32R Family Software Manual* and the M32RX/M32R2 instruction
  supplements (encodings, PSW/condition-bit behaviour, DSP accumulators).
- The CGEN description `cpu/m32r.cpu` in GNU binutils 2.43.1, read for field
  layout and semantics only; no text was copied.
- Oracle: `m32r-elf-as`/`m32r-elf-objdump` from binutils 2.43.1 (built
  locally, `-m32r2`). An assembled listing of every mnemonic below (148
  instructions, including parallel pairs) decodes to the same instruction,
  operands and branch targets as objdump.

## What is modelled

- All 16- and 32-bit integer instructions of M32R/D, M32RX and M32R2: ALU,
  compare, the condition bit `C`, add/sub with carry and overflow, divide and
  remainder (word, halfword, byte), shifts, loads and stores with every
  addressing mode (`@r`, `@(disp,r)`, `@r+`, `@+r`, `@-r`), `lock`/`unlock`,
  `bset`/`bclr`/`btst`, `setpsw`/`clrpsw`, `sat*`, `pcmpbz`, `sc`/`snc`.
- Branches: `b*.s` (8-bit, from the word address), `b*.l` (24-bit),
  compare-and-branch (16-bit), `bl`/`bcl`/`bncl` calls, `jl`, `jmp`, `jc`/`jnc`.
  `jmp lr` is a return; `rte` restores PSW/BPC and returns.
- Instruction pairing: a 16-bit instruction at a word boundary commits the
  context bit `slot` for the next halfword, where bit 15 set means a
  parallel (`||`) instruction rather than a 32-bit one. Parallel pairs are
  lifted sequentially.
- DSP: `mulhi`/`mullo`/`mulwhi`/`mulwlo`, `machi`/`maclo`/`macwhi`/`macwlo` with
  either accumulator, `mvfac*`/`mvtac*`, `rac`/`rach`, `sadd`, `macwu1`,
  `msblo`, `mulwu1`, `maclh1` (56-bit accumulators kept sign-extended in 64).
- Calling convention (GCC): arguments `r0`-`r3`, result `r0` (`r0:r1`), callee
  saved `r8`-`r13`, return address `lr` (`r14`), stack pointer `sp` (`r15`).

## Gaps

- `trap` is the user op `software_trap(n)` and does not transfer flow to EVB.
- Little-endian M32R (`m32rle`) and the M32R/FPU floating-point instructions
  are not modelled.
- `setpsw`/`clrpsw` and `mvtc` update `psw` and `C` only; interrupt and
  stack-mode side effects (`SPI`/`SPU` switching) are not modelled.
