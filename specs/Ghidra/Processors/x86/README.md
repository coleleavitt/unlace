# x86

The SLEIGH specification is Ghidra's (Apache-2.0, see the repository NOTICE).
This file records the extensions added on top of it for #98. Oracle for all of
them: LLVM 22 (`llvm-mc`/`llvm-objdump`).

## Intel APX: REX2 and EVEX map 4 (`apx.sinc`, `apx_map4.sinc`, `apx_rex2map1.sinc`)

Sources: Intel Advanced Performance Extensions (APX) Architecture
Specification 355828-009, sections 3.1.2-3.1.5 (REX2, the extended EVEX of map
4, NDD, NF, ZU, CCMP/CTEST, CFCMOVcc, PUSH2/POP2, PPX, JMPABS). Only
`x86-64.slaspec` includes the files; `x86.sla` and `x86-16.sla` are unchanged.

- Registers: `R16`-`R31` with their `D`, `W` and `B` views at register offset
  0x3000. The fifth register-id bits are decode context (`rexR4`, `rexX4`,
  `rexB4` in `ia.sinc`); `Reg*`, `Rmr*`, `Base*`, `Index*` and the 32-bit
  zero-extension helpers get constructors for them in `apx.sinc`.
- REX2 (`D5`): sets the REX bits and the fifth bits; with M0=0 it decodes the
  legacy map-0 constructors unchanged, with M0=1 it selects legacy map 1
  (`vexMode=3 & vexMMMMM=1`), and `apx_rex2map1.sinc` repeats every 64-bit
  map-1 constructor of the x86 sources under that key (rows 0x3* and 0x8* #UD
  under REX2 and are left out). In 64-bit mode `D5` is no longer AAD; the
  `A1` MOV-from-moffs forms exclude REX2 so that `D5 00 A1` is JMPABS.
- EVEX map 4 (`apx_map4.sinc`): the ALU ops (ADD OR ADC SBB AND SUB XOR),
  INC/DEC/NEG/NOT, the shifts and rotates, SHLD/SHRD, IMUL (two- and
  three-operand, ZU), MUL/IMUL/DIV/IDIV one-operand, POPCNT/TZCNT/LZCNT, ADCX/ADOX,
  MOVBE, CRC32, CMOVcc (NDD), CFCMOVcc, SETcc and SETcc.zu, CCMPscc/CTESTscc,
  PUSH2/POP2 (and the PPX P forms). EVEX.ND writes the result to the V4:vvvv
  register (zero-extending a 32-, 16- or 8-bit result to 64 bits); EVEX.NF
  lifts the same operation without the flag writes (the mnemonic gets `.NF`).
- CCMP/CTEST: a true source condition compares or tests and sets the flags as
  CMP/TEST do; a false one sets OF, SF, ZF and CF from the dfv bits, PF from
  dfv.CF and clears AF. CFCMOVcc with a memory operand reads or writes memory
  only on a true condition; CMOVcc NDD always reads its r/m.
- PUSH2/POP2 push or pop the two registers in order; the PPX hint (PUSHP,
  POPP, PUSH2P, POP2P) has no effect on the p-code. JMPABS is a direct jump to
  its 64-bit immediate.
- `scripts/gen_x86_apx.py` writes `apx_map4.sinc` and `apx_rex2map1.sinc`
  (the map-4 forms from its operation tables and from the legacy constructors
  of `ia.sinc`, `bmi1.sinc` and `lzcnt.sinc`; the REX2 map-1 forms by
  re-keying the legacy map-1 constructors). Edit the generator, not the files.

Checked: the probe of `crates/unlace-cli/tests/fixtures/x86_apx` and an
89-instruction sample of every map-4 family, REX2 EGPR addressing and the PPX
forms print as `llvm-objdump` does (case and the `.NF` suffix aside; `xchg`
lists its operands the other way round). Decompiling all of `/usr/bin/ls`
gives byte-identical C before and after.

Gaps: ENQCMD/ENQCMDS and CMPccXADD have no constructor in any form (the base
spec lacks them), so their EVEX forms are not decoded either; a REX2-prefixed instruction that #UDs (map-1 rows 0x3*
and 0x8*, a REX2 before another prefix) is a bad instruction, not modelled
further; NF on a form the spec gives no NF variant is rejected only where
LLVM's encoding tables leave no constructor.

## Intel APX: EGPRs in the other EVEX maps (`apx_evex.sinc`, `ia.sinc`)

Sources: the same specification, 3.1.2.3 (the extended EVEX prefix: R4 is
EVEX.R', X4 the inverted P1 bit 2 that AVX-512 required to be 1, B4 the P0 bit 3
it required to be 0) and 3.1.4.1 (the VEX instructions promoted to EVEX).

- The 64-bit EVEX prefix in `ia.sinc` now accepts every X4 and B4 value and sets
  `rexR4`, `rexX4` and `rexB4`, so every EVEX instruction reaches `R16`-`R31`
  wherever it names a GPR: base and index of a memory operand, a GPR source or
  destination (`vpextrq r16`, `vcvttsd2si r16`). Encodings AVX-512 accepted
  have X4=B4=0 and decode as before.
- `apx_evex.sinc`: EVEX copies of the VEX GPR instructions, with V4:vvvv as the
  register id of the vvvv operand: BMI1 (ANDN, BEXTR, BLSI, BLSMSK, BLSR), BMI2
  (BZHI, MULX, PDEP, PEXT, RORX, SARX, SHLX, SHRX), KMOVB/W/D/Q, and the AMX
  LDTILECFG, STTILECFG, TILELOADD, TILELOADDT1, TILESTORED. EVEX.NF (P2 bit 2)
  gives the `.NF` forms of ANDN, BEXTR, BLSI, BLSMSK, BLSR and BZHI, the same
  p-code without the flag writes.
- `apx_map4.sinc` adds the map-4 EVEX forms of MOVDIR64B, MOVDIRI, INVEPT,
  INVVPID, INVPCID, WRSSD/Q and WRUSSD/Q.

Checked: `evex_probe` of the fixture and a 50-instruction sample of these forms
print as `llvm-objdump` does (case aside); disassembling all of libcrypto.so.3's
`.text` (787k lines, 77k of them AVX-512) gives the same listing before and
after.
Gaps: an X4=0 register-only vector encoding decodes as if X4 were 1, except
the AVX10.2 {sae} forms below that use it for YMM; the base spec's own EVEX gaps
remain (`vpbroadcastd zmm, r32` prints no source, a VSIB index prints as a
GPR, the `{1toN}` broadcast marker is not printed).

## AVX10.2 (`avx10_2.sinc`)

Generated by `tools/gen_x86_avx10.py` from LLVM's X86 TableGen records
(`llvm-tblgen --dump-json` of `lib/Target/X86/X86.td`, llvm-project
`ca7933e47d`, 2026-06-15): every non-pseudo EVEX record with a
`HasAVX10_2*` predicate, 2326 records (123 mnemonics): the BF16 arithmetic,
compare, class and FMA forms, the FP8 (BF8/HF8) conversions, the saturating
conversions (`vcvt[t]ph2ibs`, `vcvttpd2dqs`, `vcvttsd2sis`, ...), `vminmax*`,
`vcomx*`/`vucomx*`, `vcvt2ps2phx`, `vdpphps`, `vmpsadbw`, the EVEX
VNNI-INT8/INT16 dot products, `vmovd`/`vmovw` zero-extending moves, MOVRS
(`vmovrs*`), the EVEX SM4 forms and the AMX-AVX512 row moves (`tcvtrow*`,
`tilemovrow`), plus the VEX AVX-VNNI-INT8/INT16 forms compilers emit for the
unmasked 128/256-bit dot products. Only `x86-64.slaspec` includes it.

- Encodings: map, prefix, W, L and opcode of each record; the plain, masked,
  zero-masked and broadcast records fold into one register-form and one
  memory-form constructor, as in `avx512.sinc`. Disp8*N comes from LLVM's
  `CD8_Scale` (two new `evexDisp8N` rows give full and half vectors with a
  16-bit broadcast element N=2). A {sae} or {rc} register form is its own
  constructor with EVEX.b=1: L'L is the rounding mode for {rc}, and EVEX.U=0
  selects the 256-bit {sae} forms. `vcmpbf16` prints its predicate in the
  mnemonic (`vcmpunordbf16`) like the base spec's `vcmpps`.
- Semantics: one user operation per mnemonic (`avx10_<mnemonic>`) over the read
  operands (the old destination first for the accumulating dot products),
  written through the base spec's merge/zero masking tables. `vmovrs*` are
  masked loads, `vmovd`/`vmovw` zero-extending moves, and the scalar compares set
  EFLAGS: `vcomx`/`vucomx` OF SF ZF PF CF = 11011 unordered, 00000 greater,
  10001 less, 11100 equal (AVX10.2 specification); `vcomisbf16` ZF PF CF as
  `comiss`. The SS/SD compares use the p-code float operators, the SH and BF16
  ones a user operation for the unordered/less/equal bits.

Checked: all 2326 records, assembled with `llvm-mc -mattr=+avx10.2,+amx-avx512,+amx-tile,+movrs,+sm4,+egpr`
and `zmm18`/`r9`-indexed operands with a displacement of 2N, disassemble as
`llvm-objdump -M intel` prints them (case, spacing and the `{1toN}` marker
aside); `crates/unlace-cli/tests/fixtures/x86_avx10/probe.txt` keeps one row per
plain, broadcast and {sae}/{rc} record. libcrypto.so.3's `.text` disassembly and
`decompile-all /usr/bin/ls` are unchanged.
Gaps: element-wise semantics of the new arithmetic (user operations); 32-bit
mode (`x86.slaspec`) does not include the file; the base spec's broadcast
marker is still not printed.
