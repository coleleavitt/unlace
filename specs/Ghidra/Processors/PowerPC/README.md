# PowerPC: SPE2 and EFS2 for NXP e200z4/e200z7 (#98)

The Ghidra-vendored PowerPC module is unchanged except for one language added for
unlace: `PowerPC:BE:32:e200-SPE2` (`ppc_32_e200_spe2_be.slaspec`), the Power ISA
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
