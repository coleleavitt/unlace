# TriCore

Ghidra's TriCore module (TC1.3 to TC1.6.1, AURIX TC2xx). For #98 it gains a
language for the newer cores:

## `tricore:LE:32:tc18` (AURIX TC3xx and TC4x)

`tricore_tc18.slaspec` compiles `tricore.sinc` with `TRICORE_TC18` defined,
which adds `tricore.tc18.sinc`: the TC1.6.2 and TC1.8 instructions the older
languages do not decode. The other tricore languages are unchanged. ELF files
are not routed here by their header; select it with `--target`.

Source: Infineon "TriCore TC1.8 architecture manual" volumes 1 and 2, V1.0.0
(2024-02-14), chapter 3 opcode diagrams and operation pseudocode. No oracle
toolchain is available (TASKING and HighTec are commercial), so the fixtures
are manual vectors built by `crates/unlace-cli/tests/fixtures/tricore_tc18/gen.py`.

Modelled:
- Integer: `popcnt.w`, `shuffle` (byte permutation, with the bit-reversing
  form), `div64`, `div64.u`, `rem64`, `rem64.u` (with the V/SV/AV flags),
  `lha` (address-register load of an 18-bit high constant), `jri`, `calli`
  (16-bit), `crc32b.w` (the TC1.6.1 `crc32` under its new name).
- Single-precision FPU additions: `abs.f`, `neg.f`, `max.f`, `min.f`,
  `ftoin`, `ftohp`, `hptof`.
- Double-precision FPU (TC1.8): `add.df`, `sub.df`, `mul.df`, `div.df`,
  `madd.df`, `msub.df`, `cmp.df` (result bits as the manual defines),
  `abs.df`, `neg.df`, `max.df`, `min.df`, `qseed.df` and the conversions
  `dftoi[n|z]`, `dftou[z]`, `dftol[z]`, `dftoul[z]`, `itodf`, `utodf`,
  `ltodf`, `ultodf`, `dftof`, `ftodf` on the E (register-pair) registers.
- System: `mfdcr`/`mtdcr` (64-bit core register pairs), `rfh`.

Named pcodeops: `crc32.b`, `crc32l.w`, `crcn`, `mulp.b` (carry-less byte
multiply), `lsync`, `trapinv`, `hvcall`, the half-precision conversions,
and the virtual-machine cache operations (`cachea.*.vm`, `cachei.*.vm`).

Gaps: rounding modes are not modelled (the `n`/`z` conversion forms differ only
by name in the p-code), unsigned 64-bit to double conversions use the signed
operation, the FPU exception flags in PSW are not updated, and the hypervisor
state (`hvcall`/`rfh` context switching beyond the CSA restore) is opaque.
