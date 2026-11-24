# Fujitsu FR (FR30, FR60, FR80)

Written for unlace (issue #98) from public documentation. The only prior
SLEIGH module for this family carries no license, so it was not opened.

Language: `FR:BE:32:default` (the FR30/FR60/FR80 integer instruction set).

## Sources

- Fujitsu *FR Family Instruction Manual* (FR30/FR60/FR80 series): encodings,
  condition codes, the step-division instructions, delay-slot rules.
- The CGEN description `cpu/fr30.cpu` in GNU binutils 2.43.1 and MAME's
  `src/devices/cpu/fr/frdasm.cpp` (BSD-3-Clause), read for the opcode map only;
  no text was copied. Where they disagree (`0xAB`/`0xBF`) binutils and the
  Fujitsu manual win: `0xAB` is `MULU`, `0xBF` is `MULH`.
- Oracle: `fr30-elf-as`/`fr30-elf-objdump` from binutils 2.43.1 (built
  locally). An assembled listing of every mnemonic (160 instructions) decodes to
  the same instruction, operands and branch targets as objdump.

## What is modelled

- Every FR30/FR60/FR80 integer opcode: loads and stores in all addressing
  modes (`@(R13,Rj)`, `@(R14,disp)`, `@(R15,udisp)`, `@R15+`, `@-R15`),
  direct-address `DMOV*`, `LDI:8/20/32`, `ENTER`/`LEAVE`, `LDM`/`STM` register
  lists, the bit operations (`BAND*`, `BOR*`, `BEOR*`, `BTST*`), logic on
  registers and memory, add/sub with and without flags and carry, compares,
  shifts (`LSL2` and friends shift by 16-31), `MUL`/`MULU` into `MDH:MDL`,
  `MULH`/`MULUH`, the step division `DIV0S`/`DIV0U`/`DIV1`-`DIV4S` (with the
  `D0`/`D1` flags), `EXT*`, `XCHB`, `ANDCCR`/`ORCCR`/`STILM`, `MOV` to and
  from `PS` and the dedicated registers (TBR, RP, SSP, USP, MDH, MDL).
- Flags N, Z, V, C per the manual, kept as separate registers and merged into
  `ps` when `PS` is read.
- Branches and calls: all sixteen `Bcc` conditions, `CALL`/`JMP`/`RET` and
  every `:D` form with its delay slot (`delayslot(1)`); `RET` returns through RP,
  `RETI` pops PC and PS.
- Calling convention (GCC): arguments `r4`-`r7`, result `r4` (`r4:r5`),
  callee-saved `r8`-`r11` and `r14`, return address `rp`, stack pointer `r15`.

## Gaps

- `INT`, `INTE`, `LDRES`/`STRES` and the coprocessor group `COP*` are user ops
  (`software_interrupt`, `resource_load`, `coprocessor_op`, ...).
- R15 is one register: the SSP/USP switch on the PS `S` bit is not modelled.
- The FR81 floating-point instructions are not decoded.
