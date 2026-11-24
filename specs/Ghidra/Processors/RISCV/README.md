# RISC-V

Ghidra's RISC-V module with kuna/unlace extensions. Notes on the parts added
for #98 that are not upstream Ghidra:

## Zacas register-pair forms (`riscv.zacas.sinc`)

Sources: the ratified Zacas 1.0 specification (RISC-V ISA manual, "Zacas"
chapter); encodings checked against LLVM 23's assembler and disassembler.

- RV32 `amocas.d` (funct3 011) and RV64 `amocas.q` (funct3 100), AMO funct5
  00101, with `.aq`/`.rl`/`.aqrl`.
- `rd` and `rs2` name an even/odd register pair: the even register is the low
  half, the odd one the high half. The pair named by `x0` reads as zero and is
  not written.
- Lift: read the 2*XLEN value at `(rs1)`, write it to the `rd` pair, and store
  the `rs2` pair there only when it equalled the old `rd` pair. The `rs2` pair
  is read before `rd` is written. Ordering bits are not modelled.

Gaps: odd `rd`/`rs2` numbers are reserved and stay undecoded (a bad
instruction), as are these encodings in the other XLEN (RV64 `amocas.d` is the
plain doubleword form in `riscv.rv64a.sinc`).
