# IBM ROMP (RT PC)

Written for unlace (Apache-2.0) from the *IBM RT PC Hardware Technical
Reference, Volume I* (75X0232, 1987). Encodings and the multiply/divide step
corner cases were cross-checked against MAME's `romp` core (BSD-3-Clause,
read only; no text copied). No prior SLEIGH module existed (#98).

Language: `ROMP:BE:32:default` (`romp.slaspec`, `romp.cspec`).

## Modelled

- The JI, DS, X, BI, BA, D and R formats: every opcode of the base ROMP
  (the 118 of the Technical Reference), 16- and 32-bit.
- Condition status bits LT, EQ, GT, C, OV and TB as one-byte registers, set
  by the logical, add, subtract and compare rules (subtract's C is "no
  borrow"); bit 8 is the permanent zero, so `bnb` on it is the unconditional
  `b`/`br`.
- Branches on (not) condition bit, relative, absolute and by register, and the
  branch-and-link forms; the `x` (with execute) forms run the following
  subject instruction as a delay slot, and their link register points past it
  (subject length taken as 4, as the reference's examples use). `br r15` is a
  return.
- Loads and stores (short and long displacement; r0 as a base reads as zero),
  lm/stm, tsh, the compute-address forms (cas, cal, cal16, cau, ca16), the
  paired shifts writing `R2 xor 1`, multiply step and divide step on MQ,
  mfs/mts and the SCR bit operations (CS and MQ directly, IAR reads the next
  address), test-bit moves, clz on the low half, the move-character forms.

## User ops and gaps

- svc, lps, ior/iow (I/O space), wait, traps (ti, tgte, tlt) and reads and
  writes of SCRs other than CS, MQ and IAR are user ops.
- The FPA and the APC/AFPA extensions are not decoded.
- The stack offset of the fifth argument in the cspec (16) is an assumption;
  r2-r5, r2 result, r15 link and r1 stack pointer follow the RT linkage.

## Checked

No ROMP toolchain was installed here, so the vectors are hand-assembled.
`unlace-cli/tests/romp_raw.rs` decompiles add, signed max (`c` + `jnb lt`),
a `cau`/`l` absolute load and a `balix` call with its subject instruction
to the expected C; a 158-halfword sweep of every R, DS and D opcode and the
trap forms decompiles with no bad or unimplemented instruction.
