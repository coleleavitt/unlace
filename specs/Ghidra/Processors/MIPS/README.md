# MIPS: MIPS-3D and SmartMIPS ASEs (#98)

The Ghidra-vendored MIPS module is unchanged except for two files written for unlace and
included by the pre-release-6 languages:

| File | Included by | Languages |
|---|---|---|
| `mips3d.sinc` | `mips64be.slaspec`, `mips64le.slaspec` | `MIPS:*:64:default`, `16e`, `micro`, `64-32addr`, `micro64-32addr` (64-bit FPRs) |
| `smartmips.sinc` | `mips32be.slaspec`, `mips32le.slaspec` | `MIPS:*:32:default`, `16e`, `micro` |

Both use encodings that are reserved in the base ISA, so existing decodes do not change.
Every constructor requires `REL6=0`; the release-6 languages are unaffected (R6 removed
paired single and reuses COP1 rs=9 for `bc1eqz`).

## Sources

- Encodings: the MIPS-3D and SmartMIPS rows of the binutils MIPS opcode table (match and
  mask only; no text copied). Checked against `mips-elf-objdump -d` from binutils 2.43.1.
- Semantics: the MIPS-3D ASE specification (MIPS MD00099) and the MIPS32 SmartMIPS ASE
  specification.

## Coverage

- MIPS-3D, all 54 rows, exact: `addr.ps`/`mulr.ps` (fd.upper = fs.upper op fs.lower,
  fd.lower = ft.upper op ft.lower), `recip1`/`rsqrt1` (modelled as the full-precision
  1/x and 1/sqrt(x) the reduced-precision results approximate), `recip2`
  (-(fs*ft - 1)) and `rsqrt2` (-(fs*ft - 1)/2) in S, D and PS, `cabs.cond.{s,d,ps}`
  (compare of absolute values; PS sets cc for the lower half and cc+1 for the upper),
  `bc1any2f/t` and `bc1any4f/t` (branch with delay slot when any of 2 or 4 consecutive
  condition codes is false/true), `cvt.ps.pw` and `cvt.pw.ps` (round to nearest).
  Condition code n is FCSR bit 23 for n = 0 and bit 24 + n otherwise.
- SmartMIPS: `lwxs` (load word from base + 4*index) exact; `mflhxu`/`mtlhx` exact over
  a new 8-bit `ACX` register (LO, HI, ACX shift by one); `multp`/`maddp` write or xor the
  64-bit GF(2) product (pcodeop `smartmips_multp`) into HI/LO; `pperm` is a pcodeop over
  ACX, HI, LO and its operands. `ror`/`rorv` are the MIPS32R2 rotates already decoded.

## Gaps

- The base MIPS32 `madd`/`maddu`/`mult`/`multu` do not carry into `ACX`, as SmartMIPS
  cores do.
- Toshiba TX19/TX19A (MIPS16e-TX) is not covered: binutils, LLVM and QEMU have no TX19A
  encodings, and the TX19A Family Architecture manual (Toshiba, 2007) is no longer
  published. The standard MIPS16e instructions decode in the existing `16e` languages.
