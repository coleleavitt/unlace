# Renesas M16C/60, M16C/80 and M32C/80

`M16C_60` and `M16C_80` are Ghidra's modules (vendored, Apache-2.0).
`M32C_80` was added for unlace (issue #98).

## M32C/80 (`M32C/80:LE:24:default`)

The M32C/80 instruction set is the M16C/80 one plus seven instructions, so
`M32C_80.slaspec` includes `M16C_80.slaspec` and adds:

- `MUL.L` / `MULU.L src, R2R0` (32 x 32, low 32 bits kept),
- `DIV.L` / `DIVU.L` / `DIVX.L src` (R2R0 / src, quotient in R2R0, O set for a
  zero divisor),
- `SHANC.L` / `SHLNC.L #imm, dest` (arithmetic / logical shift by a signed
  count, left when positive, C unchanged, S and Z set).

A0/A1 sources are zero-extended and A0/A1 destinations keep the low 24 bits,
as the manual specifies. The compiler spec is M16C/80's (Renesas NC308 calling
convention; the same compiler targets both series).

### Sources

- Renesas *M32C/80 Series Software Manual* (REJ09B0319-0100, Rev. 1.00):
  chapter 3 instruction pages and chapter 4 instruction codes. Its instruction
  index differs from the *M16C/80 Series Software Manual* only in `SHANC`,
  `SHLNC` and `JO`, plus the `.L` size of `MUL`, `MULU`, `DIV`, `DIVU`,
  `DIVX`.
- Oracle: `m32c-elf-as -m32c` from binutils 2.43.1. A listing of about 210
  instructions covering every mnemonic decodes to the same instruction,
  length and operands, with the exceptions below.

### Fixes to the shared M16C/80 module

- `ADD.B:Q #imm4, dest` printed as `ADD.B:G`.
- `PUSH.W #imm16` printed as `PUSH.B`.

### Gaps and known differences

- binutils assembles `BTST:S n, abs16` with the bit number one higher than the
  manual's `b2 b1 b0` field; unlace follows the manual.
- `UND` (0xFF) stays undecoded, as in Ghidra's M16C/80 module, so erased flash
  does not decode as code.
- The SFR map is not labelled (it differs between M32C/8x groups); 0x000-0x3FF
  is volatile.
