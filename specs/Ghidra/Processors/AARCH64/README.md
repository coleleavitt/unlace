# AArch64

The SLEIGH specification is Ghidra's (Apache-2.0, see the repository NOTICE).
This file records the Armv9 extensions added on top of it for #98; each lives
in its own `.sinc` included at the end of `AARCH64instructions.sinc`, so every
AArch64 language (`AARCH64:LE:64:v8A`, `AARCH64:BE:64:v8A`, the ilp32 pair and
`AARCH64:LE:64:AppleSilicon`) decodes it. Oracle for all of them: LLVM 22
(`llvm-mc`/`llvm-objdump --mattr=+all`).

## RME and ATS1A (`AARCH64_rme.sinc`)

Sources: Arm ARM (DDI 0487) C5.3-C5.5, the A64 system instruction encodings
for cache maintenance, address translation and TLB maintenance.

- `tlbi rpaos, Xt`, `tlbi rpalos, Xt`, `tlbi paallos`, `tlbi paall` and their
  FEAT_XS `nXS` forms (CRn=9); `dc cipapa, Xt`, `dc cigdpapa, Xt`;
  `at s1e1a|s1e2a|s1e3a, Xt` (FEAT_ATS1A).
- Each is a named user operation (`TLBI_RPAOS(Xt)`, `DC_CIPAPA(Xt)`, ...); the
  AT forms write `par_el1` like the base spec's AT instructions. The register-less
  TLBI forms require Rt=31, as LLVM does; other Rt values stay a generic `sys`.
- The RME system registers (`GPCCR_EL3`, `GPTBR_EL3`, `MFAR_EL3`) were already named
  by the base spec.

Checked: the 17 encodings agree with `llvm-objdump --mattr=+all` (mnemonic and
operands, ignoring case).
Gaps: the granule protection check itself is not modelled (it is a property of
memory accesses, not of an instruction).
