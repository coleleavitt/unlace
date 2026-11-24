# MMIX

Donald Knuth's MMIX, the 64-bit RISC of The Art of Computer Programming (fascicle 1 and
MMIXware), as GCC's `mmix` target and binutils emit it. Written for unlace (#98); no prior
SLEIGH module existed.

Language: `MMIX:BE:64:default`.

Sources: Knuth's MMIX definition (MMIXware: the instruction semantics, special registers,
register stack, PUSHJ/POP) and the binutils `mmix` opcode table (opcode and special
register numbers; read, not copied). GCC's `config/mmix` was read for its ABI facts (locals
$0..$31, `sp` $254, `fp` $253, arguments from the callee's $0, result through `POP 1,0`).

Modelled:
- The register stack: local registers $0..$31 are the `lstack` space addressed by `rO`
  (the cspec stack pointer); `PUSHJ`/`PUSHGO $X` advance `rO` by X+1 registers around the
  call, so the caller's $(X+1).. are the callee's $0.. (its parameters, stack offsets 0..),
  `POP X,YZ` hands `$(X-1)` back through `retval`, which lands in the caller's $X, and
  returns to `rJ + 4*YZ`. Global registers $32..$255 are plain registers.
- All arithmetic and logic (`ADD`..`16ADDU`, `MUL`, `MULU` with `rH`, `DIV` rounding toward
  negative infinity with `rR`, `DIVU`, `CMP`, `CMPU`, `NEG`, shifts, `OR`..`NXOR`, `ODIF`,
  `MUX`, `SADD`), immediate forms, `SET`/`INC`/`OR`/`ANDN` wyde immediates, conditional
  sets (`CS*`, `ZS*`), branches and probable branches, `JMP`, `GO`, `GETA`, `GET`/`PUT` on
  the 32 special registers.
- Loads and stores of bytes, wydes, tetras and octas (signed and unsigned), `LDHT`/`STHT`,
  `LDSF`/`STSF` (short floats), `STCO`, `CSWAP` with `rP`, `LDUNC`/`STUNC`.
- Floating point on doubles in the general registers: `FADD`, `FSUB`, `FMUL`, `FDIV`,
  `FSQRT`, `FCMP`, `FUN`, `FEQL`, `FIX`, `FIXU`, `FLOT`, `FLOTU`, `SFLOT`, `SFLOTU`.

Gaps:
- `rG` is taken as 32 (GCC's split); a program that moves it sees $32.. as locals.
- `POP` with X > 1 returns only its main result; the additional results are not copied.
- Addresses are not rounded down to the access size; `DIVU` ignores `rD` and division by zero
  is not special-cased; arithmetic overflow and the trip/trap machinery are not modelled.
- `BDIF`, `WDIF`, `TDIF`, `MOR`, `MXOR`, `FREM`, `FINT`, the epsilon compares, `LDVTS`,
  `SAVE`, `UNSAVE`, `RESUME`, `SYNC`, `TRAP`, `TRIP` are named p-code operations; `GO` is a
  plain indirect jump (a `GO`-linked subroutine is not recognised as a call).
- Arguments GCC passes on the memory stack ($254) are not tied to the callee.

Checked: the CLI test image is GCC 17 `mmix` -O2 output for small C routines, assembled and
linked with binutils 2.45; the decompiled C matches the source.
