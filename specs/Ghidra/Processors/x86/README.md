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

Gaps: a REX2-prefixed instruction that #UDs (map-1 rows 0x3*
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
  INVVPID, INVPCID, ENQCMD, ENQCMDS, WRSSD/Q and WRUSSD/Q.
- A disp8 in these EVEX forms is not compressed (each constructor sets the
  Tuple1 8-bit row, N=1), unlike the AVX-512 forms.

Checked: `evex_probe` of the fixture and a 50-instruction sample of these forms
print as `llvm-objdump` does (case aside); disassembling all of libcrypto.so.3's
`.text` (787k lines, 77k of them AVX-512) gives the same listing before and
after.
Gaps: an X4=0 register-only vector encoding decodes as if X4 were 1, except
the AVX10.2 {sae} forms below that use it for YMM; the base spec's own EVEX gaps
remain (see "AVX-512 base-spec fixes" for the ones since fixed).

## ENQCMD, ENQCMDS and CMPccXADD (`ia.sinc`, `cmpccxadd.sinc`)

Sources: Intel SDM vol. 2 (ENQCMD, ENQCMDS: F2/F3 0F 38 F8 /r; CMPccXADD:
VEX.128.66.0F38.W0/W1 E0+cc /r), with the APX EVEX forms (map 4 for ENQCMD,
map 2 for CMPccXADD) generated by `scripts/gen_x86_apx.py`.

- ENQCMD/ENQCMDS (all x86 languages): `ZF = enqcmd(dest, m512)` (a user
  operation; ZF is the retry status), OF SF AF PF CF cleared. The destination
  register is 16-, 32- or 64-bit by address size, as for MOVDIR64B.
- CMPccXADD (64-bit only): the old memory value is compared with the first
  register (flags as CMP), the memory gets old + second register when the
  condition holds, and the first register gets the old value. Mnemonics follow
  LLVM (`cmpaexadd`, `cmpexadd`, `cmpgxadd`, ...).

Checked: all 16 conditions in VEX and EVEX (with EGPRs), and every ENQCMD form
in 16-, 32- and 64-bit address size, print as `llvm-objdump` does. Exercised by
the `x86_64_cmpccxadd` row of `crates/unlace-cli/tests/processors.toml`
(`cmpexadd` decompiles to `if (v1 == a1) *a0 = v1 + a2; return v1;`).

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
unmasked 128/256-bit dot products, and the VEX SM4 forms. `x86.slaspec` includes it, so
the 32- and 16-bit languages decode AVX10.2 too: forms with a 64-bit GPR sit
under `@ifdef IA64`, the 256-bit {sae} forms (EVEX.U=0) need the U bit, which the
32-bit EVEX prefix now records in `rexX4` and the 16-bit language (whose high
context bits hold the real-mode CS) does not, and the AMX-AVX512 row moves are in
`avx10_2_amx.sinc`, included after `amx.sinc` by `x86-64.slaspec`.

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

## AVX-512 base-spec fixes (`ia.sinc`, `avx512.sinc`)

Found while checking the extensions above against `llvm-objdump`; each was a
wrong decode in the Ghidra-derived AVX-512 tables.

- VPBROADCASTB/W/D/Q from a GPR (EVEX 0F38 7A/7B/7C, mod=3) had no source
  operand; they now take `Rmr32`/`Rmr64` and pass it (or its low byte or word)
  to the user operation, and the 128-bit VPBROADCASTB merges through its mask.
- The EVEX gathers and scatters addressed through a GPR index (`[RAX + RCX*4]`
  for `[rax + 4*zmm1]`); they now use the VSIB tables with an element-size ptr
  (`evd_vm32z`, ...), and EVEX.V' selects index registers 16-31.
- A memory broadcast prints its `{1toN}` marker.
- Disp8*N for 16-bit broadcast elements (AVX512-FP16): full- and half-vector
  forms took the broadcast size from EVEX.W (N=4 for a word), and the
  quarter-vector conversions (`vcvtph2pd`, `vcvtph2qq`, ...) set no tuple at all.
  Three tuple rows (FV16, HV16, QV16) in `ia.sinc` now give N, and the
  register-or-memory operand tables no longer evaluate `evexDisp8N` a second
  time (the first evaluation overwrites the tuple bits, which broke every
  Tuple-type row other than FV/HV on a second pass).

Checked: 6660 memory-form records of LLVM's AVX-512 TableGen predicates
(AVX512F/BW/DQ/VL/FP16/VBMI/VBMI2/IFMA/VNNI/BITALG/VPOPCNTDQ/BF16/CD, GFNI,
VAES, VPCLMULQDQ) disassembled before and after: 531 rows that differed from
`llvm-objdump` now match, none regressed; 347 still differ (broadcast/insert/
extract tuples, `vpmov[sz]x`, `vpexpand`/`vpcompress` b/w, scalar FP16), left
for a later fix. libcrypto.so.3 `.text` changes only at the 63 VPBROADCASTQ
from a GPR; `decompile-all /usr/bin/ls` is unchanged. Exercised by
`unlace-cli/tests/x86_avx10.rs` (`base_fixes.elf`) and the `x86_64_avx512_base`
row of `processors.toml`.

## AVX-512 Disp8*N and operand fixes (`avx512.sinc`, `avx512_manual.sinc`)

`tools/x86_avx512_sweep.py` assembles every EVEX record of LLVM's AVX-512 TableGen predicates
(memory forms by default, `--forms reg` for the register forms) and compares unlace's listing
with `llvm-objdump`; `--base-specs` splits the differences into fixed and regressed. With it:

- 134 constructors got the tuple context LLVM's `CD8_Scale` gives (Disp8*N): the sub-vector
  broadcasts, inserts and extracts (`vbroadcast[fi]32x2/32x4/64x2/32x8/64x4`,
  `vinsert*`/`vextract*`), `vpmov[sz]x` (quarter and eighth vector), `vpexpand`/`vpcompress`
  b/w, `vpbroadcastb/w`, `vpinsr`/`vpextr` b/w/d/q, the scalar FP16 arithmetic, compares and
  conversions, and `vcvtss2(u)si`.
- `vpalignr` and the scalar `vgetmant`/`vreduce`/`vrndscale` forms that lacked it print and pass
  their immediate; `vcvtdq2pd xmm` reads a qword (`{1to2}`), `vcvtpd2dq` from ymm writes xmm,
  `vpmovqd` to memory stores a qword.

Checked: of the 350 memory-form records that differed after #580, 342 now match and none of the
6660 regressed; the 8 left are `vfpclassph/sh`, which print the class names where LLVM prints the
immediate. The register forms are in the next section.

## AVX-512 {sae} and embedded rounding (`ia.sinc`, `avx512_round.sinc`)

An EVEX register form with EVEX.b=1 is a 512-bit (or scalar) operation whose L'L holds the
rounding mode. A pre-parse in `ia.sinc` (all but the 16-bit language) sees EVEX.b=1 with
ModRM.mod=3 and EVEX.U=1, keeps L'L in `evexRcMode`, sets `evexRcOn` and decodes again with
L'L=10, so the 512-bit constructors match; `avx512Rc` prints `{rn-sae}`..`{rz-sae}` from
`evexRcMode`. `tools/gen_x86_avx512_round.py` writes `avx512_round.sinc`: for each of LLVM's 301
EVEX.b register records outside AVX10.2 and APX, a copy of the matching register constructor of
`avx512.sinc`, `avx512_manual.sinc` or `avx10_2.sinc` with `evexRcOn=1`, the register-or-memory
operand narrowed to the register, and `{sae}` or the rounding mode printed where LLVM prints it.
The AVX10.2 rounding forms (`avx10Rc`) read `evexRcMode` too. Also fixed on the way: VPEXTRB to a
GPR named the ModRM.reg register, VPCOMPRESSD/Q 512-bit register forms decoded as 128-bit, VMOVW
to and from a GPR printed a 16-bit register (LLVM: r32, or r64 with EVEX.W).

Checked with `tools/x86_avx512_sweep.py --forms reg`: of the 806 register-form records that
differed from `llvm-objdump`, 798 match and none regressed (the 8 left are the `vfpclassph/sh` class
names, now printed as the immediate, see below); the memory-form sweep, every AVX10.2 record in 64- and 32-bit mode, libcrypto.so.3 and
32-bit libc.so.6 `.text`, and `decompile-all /usr/bin/ls` are unchanged.

## Remaining difffuzz decodes and VFPCLASSPH/SH

- `MOV DRn, r64` (`0f 23`) ignores ModRM.mod as the SDM states (`0f 23 27` is `mov dr4, rdi`); the
  `0f 21` and control-register moves already did. Prefixes before it were already ignored.
- `66 0f 52/53` (`rsqrtps`/`rcpps` with a 66 prefix, which LLVM and Capstone accept) and SSE4a
  `extrq xmm, imm, imm` with ModRM.reg != 0 (`66 0f 78 /1..7`) stay bad instructions on purpose: the
  SDM and AMD manuals leave them undefined and the difffuzz reference (Unicorn/QEMU) raises #UD for
  both, so decoding them would invent semantics. They are the two `decode` findings difffuzz still
  reports on x86-64 (seed 7, 4000 encodings).
- `vfpclassph`/`vfpclasssh` printed the class mask as names (`{QNAN,PosZero}`); they now print the
  immediate like `vfpclassps`/`vfpclasspd` and LLVM, so the whole spec agrees and both AVX-512
  sweeps (`tools/x86_avx512_sweep.py`, memory and register forms) report no differences. The lifted
  user operation takes the same constant either way.

## Real-code checks (APX, AVX10.2)

Lua 5.3, zlib and SQLite built with clang 22 and gcc 15 at -O2/-O3 with `-mapxf` and with
`-mavx10.2`: every instruction of `.text` decodes at the address and length `llvm-objdump` gives,
the APX and EVEX vector instructions print the same operands (scale and sign spelling aside), and
`decompile-all` of the Lua and zlib libraries has no bad or unimplemented instruction. The APX
lifts were checked against Unicorn with `tools/difffuzz/apxcheck.py` (see `docs/difffuzz.md`).
The one wrong decode found: the AVX-512 `vpcmp[u]{b,w,d,q}` predicate 4 printed as `vpcmpeq*`;
it is `vpcmpneq*` (the p-code was already right, it passes the immediate).

## Native-oracle fixes (legacy SSE, VEX, GFNI, VAES)

`tools/difffuzz` with `--oracle native` (this CPU as the reference, see `docs/difffuzz.md`) and the
VEX/legacy decode sweeps of `tools/x86_avx512_sweep.py` found:

- REX.X (legacy SSE) and VEX.X selected XMM16-31/YMM16-31 for a register operand in ModRM.rm;
  only EVEX's X extends a vector register (`ia.sinc`, `XmmReg2`/`YmmReg2`/`ZmmReg2`).
- VEX `vaddss`/`vaddsd`/`vsubss`/`vsubsd`/`vmulss`/`vmulsd` cleared bits 127:32 (or 127:64) of the
  destination instead of copying them from the first source (`avx.sinc`).
- 34 VEX scalar instructions (`vaddss`, `vmaxsd`, `vcvtsi2ss`, `vsqrtsd`, ...) required VEX.L=0;
  they ignore VEX.L (LIG) as LLVM's records say.
- `lzcnt r, r` with the same register computed CF from the result, not the source (`lzcnt.sinc`).
- `extractps m32` stored 8 bytes in 64-bit mode, `pinsrb` read a dword from memory.
- GFNI (`gf2p8mulb`, `gf2p8affineqb`, `gf2p8affineinvqb`, legacy and VEX), the VEX.256 forms of
  VAES and VPCLMULQDQ, and AVX-NE-CONVERT were missing (`gfni_vaes.sinc`, `avx_ne_convert.sinc`):
  libcrypto.so.3 has 379 such VAES/VPCLMULQDQ instructions that were bad instructions.

Checked: native difffuzz, 3000 encodings over two seeds, has no mismatch left; the Unicorn
difffuzz (4000, seed 7) is unchanged; the EVEX, VEX and legacy sweeps regress nothing (34 VEX and
9 legacy records fixed); 32-bit libc.so.6 disassembles the same, libcrypto.so.3 differs only by the
newly decoded VAES/VPCLMULQDQ; `decompile-all /usr/bin/ls` is byte-identical.
Left: SSE/MMX encodings with a reserved F2/F3 prefix that Capstone accepts stay undecoded; AMD FMA4
is not decoded.
