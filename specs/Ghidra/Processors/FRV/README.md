# Fujitsu FR-V (FR400, FR450, FR500, FR550)

Written for unlace (issue #98) from public documentation; no third-party SLEIGH
module exists for this family.

Language: `FRV:BE:32:default`.

## Sources

- Fujitsu *FR-V Family Instruction Set Architecture* manuals (FR400/FR450/
  FR500/FR550): VLIW packing, the GR/FR/CPR/ACC/ACCG register files, ICC/FCC/
  CC condition registers, conditional execution, branch-to-LR and LCR forms.
- The decode table (field layout plus mask and value of every instruction) was
  generated from the CGEN opcode table of GNU binutils 2.43.1
  (`opcodes/frv-opc.c`, `frv-desc.c`) and semantics were read from
  `cpu/frv.cpu`; no text was copied.
- Oracle: `frv-elf-as`/`frv-elf-objdump` from binutils 2.43.1 (built
  locally). One instance of each of the 743 FR-V instructions binutils knows,
  assembled and disassembled here, matches objdump in mnemonic, operands and
  branch targets (objdump prints `sp`/`fp` for `gr1`/`gr2`).

## What is modelled

- Integer ALU in register and immediate forms, with and without ICC updates
  (N, Z, V, C), add/sub with carry, signed/unsigned multiply into a GR pair,
  divide, shifts, `setlo`/`sethi`/`setlos`; `gr0` reads as zero.
- Loads and stores of every width (byte, half, word, GR pair), sign/zero
  extension, register+register and register+displacement addressing, the
  update (`u`) and non-excepting (`n`) forms, and FR loads/stores.
- Branches: all ICC and FCC conditions, branch-to-LR (`b*lr`, `ret` =
  `bralr` is a return), the LCR-decrement forms (`bctrlr`, `bc*lr`, `fcb*lr`),
  `call`, `calll`, `callil`, `jmpl`, `jmpil`, and the conditional
  `cjmpl`/`ccalll`.
- Conditional execution: every instruction with a `CCi,cond` operand runs only
  when `CCi` equals `2|cond`; the check instructions (`ck*`, `fck*`) write
  2 or 3 into the CC register.
- Single and double precision float arithmetic, moves, conversions and
  compares (`fcmps`/`fcmpd` set E/L/G/U in the FCC register); `movgs`/`movsg`
  between GRs and SPRs (LR, LCR, PSR and the rest of the SPR file).
- Calling convention (GCC): arguments `gr8`-`gr13`, result `gr8` (`gr8:gr9`),
  callee-saved `gr16`-`gr31` and `gr48`-`gr63`, stack pointer `gr1`,
  frame pointer `gr2`, return address `lr`.

## Gaps

- A VLIW packet is lifted one instruction at a time, in order; a packet whose
  instructions read a register another member writes is lifted with
  sequential, not parallel, semantics.
- Media (`m*`), coprocessor (`cop*`, `ldc`...), quad loads/stores, cache and
  TLB operations, traps and the conditional ICC-setting forms (`caddcc`...)
  are named user ops (`frv_<mnemonic>`) that write their destination register.
