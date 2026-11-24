# Nios II

Altera/Intel Nios II soft processor, R1 instruction set (`nios2-elf`, `nios2-linux-gnu`).
Written for unlace (#98). The prior third-party module (jtang613/ghidra_processor_nios_II)
carries no license, so it was not opened; this module is written from the manual.

Languages: `nios2:LE:32:R1` (the usual configuration) and `nios2:BE:32:R1` (`-EB`).

Sources: the Nios II Processor Reference Guide (programming model, instruction set reference)
and the Nios II Application Binary Interface; the binutils 2.43 `nios2` opcode table for the
OP/OPX numbering (read for encodings only; no text copied).

Modelled:
- I-, R- and J-type formats; every R1 opcode and OPX: arithmetic, logic, compares, shifts and
  rotates (register and immediate), `mul`, `mulx*` high words, `div`/`divu`, the signed and
  unsigned loads (`*io` variants included), stores, the six conditional branches and `br`,
  `call`/`jmpi` (256 MiB segment of the current PC), `callr`, `jmp`, `ret`, `nextpc`,
  `rdctl`/`wrctl` on the 32 control registers, `eret`/`bret`.
- `r0` reads as 0 in every operand; writes to it are kept but never read.
- Calling convention (Nios II ABI): arguments in `r4`-`r7`, then the stack; result in `r2`
  (`r3` for the high word); `r16`-`r23`, `gp`, `sp` and `fp` preserved; return address in `ra`.

Gaps:
- The R2 instruction set (16/32-bit encodings of Nios II/e and /f R2 cores) is not covered.
- `custom` instructions (including the floating-point custom instruction set), `trap`, `break`,
  cache maintenance, `sync` and the shadow-register `rdprs`/`wrprs` are user-ops.

Checked: the CLI test image was assembled with binutils 2.43.1 `nios2-elf-as` (Nios II was
removed from binutils 2.44) and disassembled with its `objdump`; every field matches the decode.
