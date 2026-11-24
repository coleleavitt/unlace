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
(`s_bcnt1` of EXEC, ballots) is lost in the one-lane model. RDNA (gfx10/gfx11) encodings
differ and have no language yet.

Oracle: `clang -target amdgcn-amd-amdhsa -mcpu=gfx900 -O2` (LLVM 22) compiled the fixture
kernels (`fixtures/amdgpu/gfx900_kernels.cl`) and four more test kernels (float saxpy, an
LDS reduction with barriers, f64/i64 arithmetic, 16-bit arithmetic); every function of
both objects decompiles with no bad instruction, and `llvm-objdump` lists no mnemonic the
spec lacks. Tests: `crates/unlace-cli/tests/amdgpu_raw.rs`.
