# Renesas R32C/100

`R32C:LE:32:default` covers the R32C/100 Series CPU core (R32C/111, /116, /117, /118, /142,
/145, /151, /152, /153, /156, /157, /160, /161 groups). The module was written for unlace (issue
#98) from the public software manual. No earlier SLEIGH module for this core was used.

## Sources

- Renesas *R32C/100 Series Software Manual* (REJ09B0267-0100, Rev. 1.00, Apr 08, 2009):
  chapter 1 (registers, flags, banks), chapter 3 (instruction pages: operation, flags) and
  chapter 4 (instruction codes, operand codes, [Bytes/Cycles] tables).

## Model

- One 4 GB little-endian address space `ram`. The 32-bit data registers R2R0, R3R1, R6R4 and R7R5
  have 16-bit halves (R0, R2, R1, R3, R4, R6, R5, R7) and 8-bit quarters (R0L to R3H). The
  address registers are A0 to A3. The Bank1 copies carry a `b1` suffix (`R2R0b1`). The control
  registers are SP, ISP, FB, SB, INTB, SVP, SVF, VCT and FLG, plus the DMAC registers DSA0 to DMD3.
- The C, D, Z, S, B, O, I and U flags and IPL are separate registers. `PUSHC`/`POPC`/`LDC`/`STC`
  of FLG packs and unpacks them.
- Decoding runs in three phases:
  - Phase 0 reads an optional `6F`/`5F`/`4F` prefix byte, which makes the source, the
    destination or both indirect (or Bank1 for a register code).
  - Phase 1 matches the opcode bytes and stores the operand fields in context: the 5-bit
    source and destination codes, the w1 w0 size (and the #IMMEX rule for an extended
    immediate), quick values, bit numbers and conditions.
  - Phase 2 decodes the operands and lifts the instruction.
- The size code w1 w0 = 11 is reserved and does not decode.
- Conditions follow the manual's 4.2.3 table: `Jcnd`, `BMcnd` and `SCcnd` (codes 7 and 15 are
  reserved).
- Calling convention: the first argument is in R2R0, the rest are on the stack from SP+4, and
  the result is returned in R2R0. This is an approximation of the Renesas NC100 compiler's
  register convention.

## Validation

- There is no public R32C disassembler to compare against (binutils and MAME have none).
- Each of the 185 instruction-code rows in chapter 4 was assembled with fixed operand fields:
  destination `dsp:8[A0]`, source `dsp:16[A0]`, size `.W`, bit 3, and quick value 1. Every row
  decodes to its own mnemonic. The lengths were checked by hand against the [Bytes/Cycles]
  tables for the two-operand, immediate, short, quick, string and control-register forms.
  The prefixed forms and the DMAC register forms were checked the same way.
- `unlace-cli/tests/processors.toml` family `r32c` decompiles four routines hand-assembled
  from the chapter 4 rows:
  - `ADD.L:Q`,
  - a `JSR.W` caller,
  - a `CMP`/`JLTU` clamp,
  - an absolute byte store.

## Gaps

- The following lift to named pcode ops rather than full semantics:
  - the string instructions (`SMOVF`, `SMOVB`, `SMOVU`, `SSTR`, `SCMPU`, `SIN`, `SOUT`, `SUNTIL`,
    `SWHILE`) and `RMPA`;
  - `INDEXB`/`INDEX1`/`INDEX2`, which in hardware modify the next instruction's address;
  - `EDIV`/`EDIVU`/`EDIVX`/`EMUL`/`EMULU`/`MULX`;
  - `LDCTX`/`STCTX`;
  - the decimal instructions;
  - a float instruction's #IMMEX operand (`immex_float`).
- `PUSHM`/`POPM` ignore the Bank1 prefix, and all DMAC registers are modelled as 4 bytes.
- The SFR map is not labelled (it differs between groups). 0x000-0x3FF is volatile.
