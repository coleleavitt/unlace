# Fairchild/Intergraph CLIPPER

Written for unlace (Apache-2.0) from the *CLIPPER C300 32-Bit Compute Engine*
data book (Intergraph, 1987). The parcel layout, the eight address modes, the
condition table and the macro-instruction numbers were cross-checked against
MAME's `clipper` core (BSD-3-Clause, read only; no text copied). No prior
SLEIGH module existed (#98).

Language: `clipper:LE:32:default` (`clipper.slaspec`, `clipper.cspec`).

## Modelled

- The 16-bit first parcel (opcode, R1, R2) and the following parcels:
  16/32-bit immediates (bit 7 selects), quick constants, and the address modes
  pc32, abs32, rel32, pc16, rel12, abs16, pc-indexed and rel-indexed, with the
  data register (or branch condition) taken from R2 or the second parcel as
  each mode places it.
- Integer add/sub/cmp (quick, immediate, register, with carry), mul/div/mod
  (signed, unsigned, the 64-bit `x` forms on even register pairs), and/or/xor/not,
  negate, the arithmetic, logical and rotate shifts (negative counts shift
  right) on words and register pairs, with C/V/Z/N per instruction.
- Loads and stores of byte, half, word, single and double, tsts, loada,
  pushw/popw, call (pushes the return address on the named stack register),
  ret, the 16 branch conditions, and the C400 `s*` set-on-condition.
- Floating point on f0-f15 (singles in the low word): add, sub, mul, div, mov,
  cmp (unordered sets Z and N), the move-to/from-register forms, the convert,
  negate, abs and scalb macros.
- savewN/restwN and savedN/restdN macros as the stores and loads they perform.

## User ops and gaps

- calls (supervisor call), movc/initc/cmpc (string macros), trapfn, loadfs,
  scalb, the privileged macros (movus, movsu, saveur, restur, reti, wait), the
  SSW write and any other macro number are user ops.
- The C400 delayed branches (cdb, cdbeq, cdbne, db*) and loadd2 are not
  decoded; the floating exception branches `bf*` are not decoded.
- The cspec's stack argument offset (4, just above the return address) is an
  assumption; the register part (r0/r1, f0/f1, result r0/f0) follows CLIX.

## Checked

No CLIPPER toolchain was installed here, so the vectors are hand-assembled.
`unlace-cli/tests/clipper_raw.rs` decompiles add, signed max (cmpw + ble with
a pc16 address), an abs32 load and a pc32 call to the expected C; a 466-parcel
sweep of every opcode, every address mode on every load/store and the macro
instructions decompiles with no bad or unimplemented instruction.
