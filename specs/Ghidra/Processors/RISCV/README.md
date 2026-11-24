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

## T-Head vendor extensions (`riscv.xthead.sinc`)

Languages `RISCV:LE:64:XThead` (`riscv.lp64d.xthead.slaspec`) and
`RISCV:LE:32:XThead` (`riscv.ilp32d.xthead.slaspec`): the default RV64/RV32
languages plus the T-Head (Alibaba XuanTie C9xx/E9xx) extensions in the
custom-0 opcode space. The generic `custom0` placeholders are left out of
these languages (`CUSTOM0_VENDOR` in `riscv.custom.sinc`); custom-1..3 keep
theirs. ELF files are not routed here automatically: select the language with
`--target`.

Sources: T-Head's thead-extension-spec (CC-BY-4.0) for semantics; LLVM's
RISCVInstrInfoXTHead.td for encodings and assembler syntax. Decode agrees with
LLVM 23's disassembler on every encoding in the probe (102 rows RV64, 80 RV32).

Modelled exactly: XTheadBa (`th.addsl`), XTheadBb (`th.srri`, `th.srriw`,
`th.ext`, `th.extu`, `th.ff0`, `th.ff1`, `th.rev`, `th.revw`, `th.tstnbz`),
XTheadBs (`th.tst`), XTheadCondMov (`th.mveqz`, `th.mvnez`), XTheadMac
(`th.mula`, `th.muls`, `th.mulah`, `th.mulsh`, `th.mulaw`, `th.mulsw`),
XTheadMemPair (`th.lwd`, `th.lwud`, `th.swd`, `th.ldd`, `th.sdd`),
XTheadMemIdx (the `ia`/`ib` base-update loads and stores, and the indexed
`th.lr*`/`th.lur*`/`th.sr*`/`th.sur*` forms), XTheadFMemIdx (`th.flrw`,
`th.flrd`, `th.flurw`, `th.flurd` and the stores; a single is NaN-boxed).
Named pcodeops: XTheadCmo (`th.dcache.*`, `th.icache.*`, `th.l2cache.*`) and
XTheadSync (`th.sync*`, `th.sfence.vmas`).

Gaps: XTheadVector (the 0.7.1 draft vector encoding), XTheadVdot, XTheadFmv,
XTheadInt (`th.ipush`/`th.ipop`) and the T-Head custom CSRs are not decoded.
The reserved register combinations of the update and pair forms (base equal
to a destination) decode like the others.
