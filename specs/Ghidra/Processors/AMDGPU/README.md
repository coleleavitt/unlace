# AMD GCN5 (Vega) shader ISA

Written for unlace. The instruction formats, field layouts and opcode numbers were taken
from LLVM's AMDGPU back end as an encoder: every mnemonic in the spec was assembled with
`llvm-mc -arch=amdgcn -mcpu=gfx900 -show-encoding` (LLVM 22) and its opcode read back out
of the encoding; AMD's published "Vega" Instruction Set Architecture reference describes
the semantics. No LLVM or AMD text is copied. No prior SLEIGH for GCN or RDNA was found.

Language: `AMDGPU:LE:64:GFX9`, the GCN5 encodings of gfx900-gfx90a (Vega, MI50/MI60).

Lane model: a vector instruction is lifted for one lane. A VGPR is that lane's 32-bit value
(pairs are 64-bit varnodes at either alignment), a compare writes 0 or 1 into VCC or its
SGPR pair, `v_cndmask` and the carry forms read bit 0 of that pair, and EXEC is the lane's
active bit, which the processor spec sets to 1 on entry. `s_and_saveexec_b64` followed by
`s_cbranch_execz` therefore decompiles as an `if`, and `s_or_b64 exec` restores it.

Modelled:
- Scalar: SOP2 (add/sub with carry into SCC, min/max, select, the 32- and 64-bit logic and
  shift operations, bfe/bfm, mul and mul_hi, lshlN_add, pack), SOP1 (mov, cmov, not, bcnt,
  sign extension, bitset, abs, every saveexec and wrexec form, getpc, setpc (s[30:31] is
  the return), swappc as a call), SOPC compares and bit tests, SOPK (movk, cmpk, addk,
  mulk, s_call_b64), SOPP (branches on SCC, VCC and EXEC, s_endpgm, waitcnt and the other
  scheduling hints as no-ops, barrier/trap/sendmsg as user-ops).
- Operands: SGPRs and the special registers (VCC, EXEC, M0, flat_scratch, ttmp), inline
  integer and float constants (32- and 64-bit), SCC, VCCZ/EXECZ, and the 32-bit literal
  that follows an instruction word.
- Vector: VOP2, VOP1 and VOPC with their VOP3 (e64) forms, the VOP3-only integer and float
  operations (mad/fma, bfe/bfi, alignbit, min3/max3, lshl_add, add3, or3, mul_lo/hi,
  mad_u64_u32, 64-bit shifts and f64 arithmetic), readlane/writelane/readfirstlane, VOP3
  abs and neg source modifiers on float operations.
- Memory: SMEM loads and stores of 1-16 dwords (s_buffer_* use the low 48 bits of the
  resource as the base), FLAT/GLOBAL loads, stores and atomic add (64-bit VGPR address, or
  an SGPR base plus a 32-bit VGPR offset), SCRATCH and MUBUF as accesses to the `private`
  space, and DS (LDS) reads, writes, read2/write2, add and swizzle/bpermute (user-ops).

Gaps: SDWA and DPP operand forms, VOP3P (packed math), VINTRP, MIMG, MTBUF, EXP and most
atomics are not decoded; VOP3 clamp and output modifiers and op_sel are ignored; MUBUF does
not add the buffer resource base or handle IDXEN; transcendental operations, bit reversal,
find-first-bit and the cross-lane operations are user-ops; the wave-wide meaning of a mask
(`s_bcnt1` of EXEC, ballots) is lost in the one-lane model. RDNA has its own languages (below).

Oracle: `clang -target amdgcn-amd-amdhsa -mcpu=gfx900 -O2` (LLVM 22) compiled the fixture
kernels (`fixtures/amdgpu/gfx900_kernels.cl`) and four more test kernels (float saxpy, an
LDS reduction with barriers, f64/i64 arithmetic, 16-bit arithmetic); every function of
both objects decompiles with no bad instruction, and `llvm-objdump` lists no mnemonic the
spec lacks. Tests: `crates/unlace-cli/tests/amdgpu_raw.rs`.

## RDNA: `AMDGPU:LE:64:GFX10` and `AMDGPU:LE:64:GFX11`

`amdgcn_gfx10.slaspec` (RDNA 1/2, gfx1010-gfx1036) and `amdgcn_gfx11.slaspec` (RDNA 3, gfx1100-gfx1103)
are the GFX9 module re-encoded. The opcode of every mnemonic in every format was read back by
running `llvm-mc --disassemble` (LLVM 22, `-mcpu=gfx1030` / `-mcpu=gfx1100`) over each opcode
value of each format; each GFX9 constructor keeps its semantics under the RDNA opcode and
mnemonic (`v_add_nc_u32`, `v_add_co_ci_u32`, `v_fmac_f32`; on gfx11 also `s_load_b32`,
`global_load_b32`, `ds_load_b32`, `s_and_not1_b32`, `v_clz_i32_u32`, ...). Layout changes taken
from the same encodings: VOP3 is bits 31-26 = 110101 and may carry a 32-bit literal after its
second word; SMEM is 111101 and adds a 21-bit offset and an SGPR (null = 0x7d on gfx10, 0x7c on
gfx11, which also swaps M0 and null); FLAT offsets are 11/12 bits (gfx10) or 12/13 bits (gfx11,
segment in bits 16-17); DS opcodes are bits 18-25; gfx11 MUBUF has an 8-bit opcode and moves
OFFEN/IDXEN to the second word.

Both languages are wave32: VCC and compare, carry and select masks are 32-bit (`vcc_lo` or one
SGPR), `s_and_saveexec_b32` and the other `*_saveexec_b32`/`*_wrexec_b32` forms work on
EXEC_LO, and the EXECZ/VCCZ branches test the low halves. From GFX10 on, `v_cmpx_*` writes only EXEC (the
e64 form has no SDST: its destination field holds EXEC_LO); GFX9 `v_cmpx` also writes VCC. gfx11 adds VOPD (two `v_dual_*`
operations that read all sources before writing), the D16 global loads into one register half,
and the true16 `v_mov_b16`/`v_not_b16` with `.l`/`.h` halves. The scheduling, wait and
cache-control instructions new in these generations (`s_clause`, `s_delay_alu`,
`s_waitcnt_*cnt`, `s_inst_prefetch`, ...) decode as no-ops.

Gaps beyond GFX9's: on gfx10, VOP3P (packed math), MIMG and the dot operations are not decoded;
on both, the export and LDS-direct instructions are not. The VOP3-only `v_add_co_u32`,
`v_sub_co_u32` and `v_subrev_co_u32` print without an `_e64` suffix, as LLVM does, and
`v_permlane16_b32`/`v_permlanex16_b32` are the `permlane16`/`permlanex16` user-ops on the old
destination, the source and both lane-select SGPRs. gfx11's true16 forms, VOP3P,
WMMA and MIMG come from the generated includes below.

Oracle: `fixtures/amdgpu/gfx900_kernels.cl` and the four GFX9 test kernels built with clang
-O2 for gfx1030 and gfx1100, plus `fixtures/amdgpu/gfx1100_vopd.cl` at -O3 (four VOPD
instructions): every function decompiles with no bad instruction and `llvm-objdump` lists no
mnemonic the specs lack.

## GFX11 generated includes: true16, VOP3P/WMMA, MIMG

`amdgcn_gfx11.slaspec` includes three generated files; `tools/amdgpu_gfx11_probe.py` reads
their opcode tables out of `llvm-objdump` (LLVM 22, `-mcpu=gfx1100`, which decodes real
true16), and the generators write the p-code:

- `amdgcn_gfx11_valu.sinc` (`tools/gen_amdgpu_gfx11_valu.py`, from `probe vop3` and
  `probe e32`): every VOP3 opcode the base spec lacks or whose LLVM form names a VGPR half,
  and the VOPC/VOP1/VOP2 e32 forms with halves. In VOP3, op_sel bits 0-2 pick the half of
  each 16-bit source and bit 3 that of the destination (one constructor per combination); in
  e32 forms bit 7 of the 8-bit VGPR number does. A 16-bit write keeps the other half. Float
  halves take the VOP3 abs/neg modifiers. This covers the f16/i16/u16 compares (VOPC e64 and
  e32, cmpx writing EXEC only), the f16 VOP1/VOP2 operations and their e64 forms, fma/mad/
  min3/max3/med3/maxmin on halves, the u16/i16 adds, shifts and conversions, and the remaining
  VOP3-only opcodes (cube*, xor3, xnor, maxmin/minmax, div_fixup, mqsad/qsad, dot2 f16/bf16,
  pack, the dx9-zero fma, v_cndmask_b16 and v_div_scale_f64).
- `amdgcn_gfx11_vop3p.sinc` (`tools/gen_amdgpu_gfx11_vop3p.py`): the packed 16-bit
  integer and float operations, each lane's source half picked by op_sel (low lane) and
  op_sel_hi (high lane) as constants in the p-code; the dot2/dot4/dot8 and fma_mix forms as
  user-ops; and the six WMMA operations, whose 2-, 4- and 8-VGPR tile operands are tuple
  registers passed to the `wmma` user-op.
- `amdgcn_gfx11_mimg.sinc` (`tools/gen_amdgpu_gfx11_mimg.py`, from `probe mimg`): every
  image opcode with the address VGPR count LLVM gives each opcode, dim and a16, as a range or,
  with NSA, as up to four more single VGPRs in a third word (a fifth and later address share
  its last byte as a tuple), plus the two BVH ray queries. The data count is the dmask's bit
  count (four for gather4 and msaa_load), halved with d16, plus one with tfe; a table on
  dmask/d16/tfe/lwe stores it in the context field `mi_vdn`, which picks the data tuple. Each
  operation is a user-op on the resource, the sampler and the first address; the data passes
  through the `mimg_data` register.

Rerun a generator after changing it, and the probe and the valu generator after adding VOP3
constructors to the base spec (the probe skips opcodes the base already decodes unless LLVM
prints a half for them); then rerun `gen_amdgpu_wave64.py`.

Oracle: the probe encodings against `llvm-objdump`. Of the 436 valid VOP3 encodings (destination
field 0x7e, which `v_cmpx` requires), all but `v_mqsad_u32_u8` print the same mnemonic (when
this was first measured, 430 did: `v_permlane16/x16_b32` and the `v_add/sub/subrev_co_u32`
suffix were fixed later), and 132 of the 133 that name a half print
the same text (the other is the probe's VGPR as a `v_cndmask_b16` mask); of the 496 VOPC, VOP1
and VOP2 encodings with halves, all but `v_swap_b16` and the base spec's `v_mov_b16`/`v_not_b16`
spelling print the same text; all 34 VOP3P encodings print the same mnemonic; and 3,632 MIMG
encodings (every opcode, dim, a16 and NSA form with random dmask and modifiers, kept when
`llvm-mc` assembles LLVM's text back to the same bytes) print the same text. Under
`AMDGPU:LE:64:GFX11-W64` the VOP3 counts are the same against `--mattr=+wavefrontsize64`.
`fixtures/amdgpu/gfx1100_true16.cl` (wave32 and wave64) and `fixtures/amdgpu/gfx1100_image.ll`
decompile with no bad instruction.

Gaps: `v_mqsad_u32_u8` (128-bit sources), `v_swap_b16`, `v_permlane16/x16_b32`, the clamp and
output modifiers, and NSA forms of the BVH queries.

## RDNA 4: `AMDGPU:LE:64:GFX12` and `AMDGPU:LE:64:GFX12-W64`

`amdgcn_gfx12.slaspec` (gfx1200/gfx1201) is generated from the GFX11 spec by
`tools/gen_amdgpu_gfx12.py`; `tools/regen_amdgpu_gfx12.sh` reruns the whole chain (the probes, the
generators and the wave64 spec) with LLVM 22 on PATH. Edit the GFX11 spec or a generator, never the
output. `tools/amdgpu_gfx12_probe.py map` lists, for every opcode of the formats GFX12 keeps (SOP1,
SOP2, SOPC, SOPK, SOPP, VOP1, VOP2, VOPC, VOP3, VOP3P, the VOPD halves, DS), LLVM's GFX11 and GFX12
mnemonics. Each GFX11 constructor is kept, renamed (`s_add_co_u32`, `v_mad_co_u64_u32`,
`s_wait_alu`, `v_dual_max_num_f32`), moved to the opcode of its GFX12 name (`v_max_f32` becomes
`v_max_num_f32`, `v_add_f64` the VOP2-encoded `v_add_f64_e64`, `v_pk_max_f16` `v_pk_max_num_f16`)
or dropped (`v_cmp_f/t`, `s_cmpk_*`, `s_waitcnt_*`, `s_barrier`). The generator adds the float
SALU (`s_add_f32`, `s_cmp_lt_f32`, `s_cvt_f32_i32`, ...), `s_add/sub_nc_u64`, `s_mul_u64`, the split
wait counters (no-ops), the barrier instructions and the VOP2 f64 operations. The includes:

- `amdgcn_gfx12_valu.sinc`: `gen_amdgpu_gfx11_valu.py` run on the gfx1200 probe tables: the
  true16 forms and the new VOP3 operations (`v_minimum/maximum*`, `v_*_num_*`, `v_minimummaximum`,
  `v_s_exp/log/rcp/rsq/sqrt`, `v_permlane*_var`, the fp8/bf8 conversions as user-ops).
- `amdgcn_gfx12_vop3p.sinc`: `gen_amdgpu_gfx11_vop3p.py --gfx12`: the packed operations at their
  GFX12 opcodes and the WMMA and SWMMAC operations with the tile sizes `probe wmma` reads.
- `amdgcn_gfx12_mem.sinc` (`tools/gen_amdgpu_gfx12_mem.py`): the new memory encodings: SMEM
  (24-bit signed offset, soffset), VGLOBAL/VFLAT/VSCRATCH and VBUFFER (96-bit, th/scope cache
  policy), VIMAGE and VSAMPLE (every address in its own field, the last one a tuple). Loads, stores
  and integer atomics are p-code: a multi-dword scalar load writes each SGPR, and a buffer address
  adds the resource base (low 48 bits), soffset, the offen VGPR and the idxen VGPR times the
  resource stride. Image operations and float or packed atomics are user-ops.

Oracle: the probe encodings against `llvm-objdump --mcpu=gfx1200 --mattr=+real-true16`. Every VIMAGE
and VSAMPLE encoding that `llvm-mc` assembles back (419 and 1,357) prints the same text, as do all
VFLAT encodings and most VGLOBAL (226/254), VSCRATCH (88/96), VBUFFER (256/356) and SMEM (64/88)
ones (offsets print in hex). For the kept formats the GFX12 spec matches as many probe encodings as
the GFX11 spec does against gfx1100 (the base spec's spellings differ from LLVM's, as on GFX11). The
fixture kernels (`real_kernels.cl`, `gfx1200_true16.cl` in wave32 and wave64, `gfx1100_image.ll`)
built for gfx1200 list no undecoded instruction and the same mnemonic as `llvm-objdump` at every
address, and decompile with no bad instruction.

Gaps: the d16 format buffer accesses, `global_load/store_block`, `*_addtid_b32`, `global_load_tr_*`,
`s_atc_probe*`, operand display of the `s_prefetch_*` hints, `image_msaa_load`, the BVH queries,
`v_swap_b16` and the GFX11 gaps above.

## Wave64: `AMDGPU:LE:64:GFX10-W64`, `GFX11-W64` and `GFX12-W64`

RDNA runs either wave size; the wave size of a kernel is in its kernel descriptor, not in the
ELF header, so wave64 code (`clang -mwavefrontsize64`, and much compute code) picks these
languages explicitly. `amdgcn_gfx10_w64.slaspec`, `amdgcn_gfx11_w64.slaspec` and `amdgcn_gfx12_w64.slaspec` are generated
from the wave32 specs by `tools/gen_amdgpu_wave64.py`; edit the wave32 spec and regenerate. The
encodings are identical; the generator widens every lane mask: VCC and EXEC are SGPR pairs
(VOPC e32 and the e32 carry and `v_cndmask` forms write or read `vcc`, `v_cmpx` writes `exec`),
the VOPC e64 and VOP3b carry-out destinations and the `v_cndmask_b32_e64`/`v_*_co_ci_u32_e64`
mask sources name SGPR pairs (`null` is a 64-bit sink, or reads 0), and VCCZ, EXECZ and the
`s_cbranch_vccz/execz` branches test the whole pair. The `*_saveexec_b32`/`*_wrexec_b32` forms
keep EXEC_LO.

Oracle: `fixtures/amdgpu/wave64_kernels.cl` and `fixtures/amdgpu/wave64_ballot.cl` built with
clang -O2 `-mwavefrontsize64` for gfx1030 and gfx1100; every lane-mask operand of the 1,512
listed instructions matches `llvm-objdump --mattr=+wavefrontsize64` (the remaining listing
differences are the MUBUF scratch and `s_waitcnt_depctr` operand spellings), and every function
decompiles with no bad instruction. Decoded as wave32 instead, a ballot's high half reads as an
uninitialized `vcc_hi`.

## Aperture sources and v_swap_b32

Source operand codes 235-239 (`src_shared_base`, `src_shared_limit`, `src_private_base`,
`src_private_limit`, `src_pops_exiting_wave_id`) decode on GFX9, GFX10 and GFX11 as the
`aperture_register` user op (their values are set by the hardware), and GFX9 decodes
`v_swap_b32` (VOP1 opcode 81). Found by the real-code sweep (`notes/real-code-sweep.md`):
clang's gfx900 output reads `src_private_base` in every function that takes a stack address.

## Real-code sweep fixes

Kernels in `fixtures/amdgpu/real_kernels.cl` built with clang -O2/-O3 for gfx900, gfx1030 and
gfx1100 showed four missing f64 instructions (`v_div_scale_f64`, `v_div_fmas_f64`,
`v_div_fixup_f64`, `v_cmp_class_f64`, plus `v_cmp_class_f32` in both encodings) and gfx11's
`s_sendmsg_rtn_b32`; they decode now. A 32-bit literal feeding a 64-bit float operand is the
high half of the double (`7.0` is `0x401c0000`), which the specs now apply to every f64 source.
