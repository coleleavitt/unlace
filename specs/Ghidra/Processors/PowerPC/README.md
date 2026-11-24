# PowerPC: SPE2 and EFS2 for NXP e200z4/e200z7, Gekko paired singles (#98)

The Ghidra-vendored PowerPC module is unchanged except for two languages added for
unlace: `PowerPC:BE:32:Gekko` (below, "Gekko / Broadway paired singles") and `PowerPC:BE:32:e200-SPE2` (`ppc_32_e200_spe2_be.slaspec`), the Power ISA
embedded + VLE language (`PowerPC:BE:64:VLE-32addr`) plus `SPE2.sinc`.

## Sources

- Encodings: the SPE2 and EFS2 rows of the binutils PowerPC opcode table (opcode,
  mask and operand fields; facts only, no text copied). Checked against
  `powerpc-elf-objdump -M spe2 -M efs2` from binutils 2.43.1.
- Mnemonics and pcodeop names: the SPE2 programming-interface intrinsics (`__ev_*`).
  The NXP SPE2 Programming Interface Manual (SPE2PIM) needs an NXP account and was
  not consulted, so the lane semantics below are limited to what the mnemonic fixes.

## Coverage

All 824 SPE2/EFS2 table rows decode (816 constructors; binutils aliases such as
`evdotphsssi` for `evdotphssmi` print under the first name, as objdump does). A probe
of 2428 words, three per row with random operand fields, matches objdump on every
valid row.

- Exact p-code: lane add, subtract, negate, absolute value, min and max; sign and
  zero extends; immediate splats and adds; `evsl`/`evsli`; `evmar` (rD = ACC); and the
  addressing of every load and store. Immediate forms scale the offset by the access
  size and read rA as 0 when it is r0; the `u` forms write the effective address back
  to rA; the indexed `x` forms add rB; the modulo `mx` forms access at rA and then set
  rA = `__circinc(rA, rB)`. Doubleword loads and stores, the word, halfword and byte
  splat loads and the even/odd halfword and word forms place their lanes exactly.
- Named pcodeops for the rest (dot products, multiply-accumulate, saturating and
  cross-lane arithmetic, sums, packs, interleaves, compares, sets, shifts by
  register, averages, absolute differences, divides, EFS2 scalar float operations).
  A name ending in `a` writes ACC; the `aa`/`aaw`/`aah`/`an`/`anw`/`anh` forms also read
  ACC; the `aa3`/`aaw3`/`anw3` forms read rD instead of ACC. The loaded or stored
  bytes of a load/store whose lane layout is not fixed by its name pass through a
  pcodeop of the same name.

## Encoding overlaps

SPE2 reuses encodings that other included files define, so under `@define SPE2`:

- `maddhd`, `maddhdu`, `maddld` (`ppc_isa.sinc`, VA form XO 48/49/51) are left
  out; those words are `evdot*aaw` instructions on e200.
- `evmwhusiaaw`/`evmwhusianw` (`SPE_APU.sinc`) are left out; SPE2 has
  `evmwhssfraaw3`/`evmwhssfranw3` there.
- `efdcfuid`, `efdcfsid`, `efdctuidz`, `efdctsidz` (`SPE_EFSD.sinc`) are left out;
  EFS2 has `efdmadd`, `efdmsub`, `efdnmadd`, `efdnmsub` there.

The default PowerPC languages do not define `SPE2` and are unchanged.

## Gaps

- The record forms (`evset*.`) do not update a condition register field.
- Encodings binutils rejects (an update-form offset of 0, a shift count above the
  lane width, an `evxtrd` offset of 0) still decode.
- The language is selected with `--target`; ELF headers do not route to it.

# Gekko / Broadway paired singles (#98)

`PowerPC:BE:32:Gekko` (`ppc_32_gekko_be.slaspec`) is the 32-bit big-endian
PowerPC language without AltiVec plus `paired_single.sinc`: the paired-single
instructions of the IBM Gekko (GameCube) and Broadway (Wii), the PowerPC 750CL.

## Sources

- The IBM PowerPC 750CL RISC Microprocessor User's Manual, the paired-single
  instruction chapter (semantics, GQR layout).
- Decode checked against `powerpc-elf-objdump -M gekko` from binutils 2.43.1
  (as an oracle only; no text copied).

## Coverage

All 39 paired-single instructions and their record (`.`) forms decode as objdump
names them. A probe of 7,060 words (random primary-opcode 4/56/57/60/61 words plus
every A-form and X-form extended opcode with random registers) agrees with
objdump on every word, except the update forms with rA = 0 (`psq_lu`, `psq_stu`,
`psq_lux`, `psq_stux`): those are invalid forms in the manual and stay bad
instructions here, while objdump prints them.

- Each FPR holds ps0 (the FPR, `fN`) and ps1 (`ps1_N`, the otherwise unused low half
  of the overlaid VSX register). Arithmetic computes in double and rounds each slot
  to single, as `fadds` does. `ps_sum0`/`ps_sum1`, `ps_muls0/1`, `ps_madds0/1`,
  `ps_merge00..11` and `ps_sel` move the slots the manual names; `ps_cmpu0/1` and
  `ps_cmpo0/1` set a CR field and FPCC like `fcmpu`; record forms set CR1.
- `psq_l`/`psq_st` and their `u`, `x` and `ux` forms with GQR index 0 are plain
  single-precision loads and stores (two slots, or ps0 only with W=1, where a load
  sets ps1 to 1.0). The SDKs keep GQR0 at zero (the float type), so this is what
  such code means. With any other GQR the transfer is quantized by a run-time
  register, so it is a `psq_load`/`psq_store` user op on that GQR (`spr390`-`spr397`).
- `dcbz_l` is a user op. The 405/440 multiply-accumulate instructions
  (`mulhwInstructions.sinc`) share primary opcode 4 and are left out of this
  language under `@define PAIRED_SINGLE`; the other PowerPC languages are unchanged.

## Gaps

- `ps_res` and `ps_rsqrte` are exact reciprocals, not the hardware estimates.
- GQRs print under their SPR names (`spr390`-`spr397` = GQR0-GQR7).
- Selected with `--target`; ELF headers (`EM_PPC`) do not route to it.

## Xbox 360 Xenon VMX128 (`PowerPC:BE:64:Xenon`)

The Xenon cores of the Xbox 360: 64-bit PowerPC with AltiVec (VMX) and the VMX128 extension
(128 vector registers, Direct3D pack/unpack, dot products), 32-bit addressing as Xbox 360
executables use it (`ppc_64_32.cspec`). Written for unlace (#98); no licensed prior SLEIGH
description of VMX128 was used.

Sources: the Xenia emulator (BSD-3): `tools/ppc-instructions.xml` (the 75 VMX128 mnemonics,
opcodes and forms), `ppc_decode_data.h` (the VX128, VX128_1..5, VX128_R and VX128_P field
layouts, the split 7-bit register numbers) and `ppc_emit_altivec.cc` (operand roles: VD as the
accumulator of `vmaddfp128`, the mask of `vsel128`, the blend of `vrlimi128`).

Modelled (`vmx128.sinc`, `ppc_64_xenon_be.slaspec`):
- `vr0`..`vr127`; `vr0`..`vr31` are the AltiVec registers (`vs32`..`vs63` here).
- `lvx128`/`lvxl128` and `stvx128`/`stvxl128` as 16-byte accesses at `(RA|0) + RB` rounded
  down to 16; `vand128`, `vandc128`, `vor128`, `vxor128`, `vnor128`, `vsel128` exactly; the
  other loads/stores (element, left/right, shift-control) and every arithmetic, compare,
  conversion, permute, pack/unpack and estimate operation as named p-code operations
  (`vmx128_vaddfp`, ...); the compare forms with Rc update `cr6`.
- The variant leaves out the Power ISA 2.07/3.0 vector additions (`@ifndef XENON` in
  `altivec.sinc`) and the 4xx multiply-accumulate instructions: Xenon has neither, and their
  encodings overlap VMX128's.

Gaps: the named operations are not expanded into lane arithmetic; VSCR saturation is not
tracked; the Xenon-specific non-vector instructions are the base PowerPC ones.

Checked: all 75 VMX128 encodings, with random operands (4500 words), disassemble to their own
mnemonic; the processors.toml image decompiles to the expected vector expression.

## VSX scalar floating point

A scalar VSX operation works on doubleword 0 of its VSRs, which is the floating-point register
alias of the first 32 VSRs: `XT[64,64]` (word 0 is `XT[96,32]`, word 1 `XT[64,32]`), the
convention `lxvd2x` and `lxvw4x` already use. `xsadddp`, `xscvdpspn`, `lxsdx` and `lxsd`
used the low doubleword instead, so a result never reached the FPR a following `fmr` read.
The scalar arithmetic (`xs{add,sub,mul,div,sqrt}{dp,sp}`, `xsrsp`, abs/nabs/neg/cpsgn), the
multiply-adds (`xs[n]m{add,sub}{a,m}{dp,sp}`, as a multiply then an add, as `fmadd` is), the
integer conversions (`xscv{s,u}xd{dp,sp}`, `xscvdp{s,u}x{ds,ws}`), `xscvspdp[n]`/`xscvdpsp` and
`stxsdx` are lifted exactly instead of as user ops; sp results are rounded to single and held
in double format. The other scalar operations (compare, min/max, estimates, round to integer,
test) stay user ops. Found by the real-code sweep (`notes/real-code-sweep.md`): clang -O2 for
ppc64le turned `v * n + 0.5f` into `xscvsxdsp` + `xsmaddasp`.
