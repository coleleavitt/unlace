# Texas Instruments TMS320C3x

Native SLEIGH written for unlace (issue #98) from the TI TMS320C3x User's Guide
(SPRU031) and the TMS320C4x User's Guide (SPRU063). Every C3x opcode template of
the binutils `tic4x` opcode table (`include/opcode/tic4x.h`, read for encoding
facts only, no text copied) was decoded with this spec and its mnemonic
compared: all 640 C3x-level templates decode to the matching instruction.

Language: `TMS320C3x:LE:32:default` (little-endian 32-bit words; one address
unit is a 32-bit word, `wordsize=4`).

## What is modelled

- Registers: `R0`-`R7` (and the C4x `R8`-`R11`) as 40-bit extended-precision
  registers `R0E`-`R11E` whose low 32 bits are the integer view `R0`-`R11`;
  `AR0`-`AR7`, `DP`, `IR0`, `IR1`, `BK`, `SP`, `ST`, `IE`, `IF`, `IOF`, `RS`,
  `RE`, `RC`; the status flags `C`, `V`, `Z`, `N`, `UF`, `LV`, `LUF` and `GIE`
  as separate registers.
- Addressing: register, direct (`DP:addr16`), the 26 indirect modes (pre/post
  displacement, IR0/IR1 index, circular and bit-reversed updates as user ops
  over `BK`/`IR0`), and short immediates (signed for integer operations,
  unsigned for logical ones, a 16-bit float for floating-point ones).
- The two-operand group (`ABSF` .. `XOR`, `IACK`, `RPTS`, `PUSH`/`POP`,
  rotates, `SUBC`), conditional loads `LDFcond`/`LDIcond`, the three-operand
  group (`ADDC3` .. `XOR3`, T field: bit 21 makes src1 indirect, bit 22 src2),
  every parallel form (`op || STI/STF`, `STF||STF`, `STI||STI`, `LDF||LDF`,
  `LDI||LDI`, `MPYF3||ADDF3/SUBF3`, `MPYI3||ADDI3/SUBI3` with all four P
  operand arrangements), with every source read before either destination
  is written.
- Integer flags per the manual: carry and overflow for add/subtract (`LV`
  latched), 24-bit signed `MPYI` with overflow, shift carry, logical ops
  clearing `V`. Conditions: the 20 C3x condition codes.
- Flow: `BR`/`BRD`, `CALL`, `Bcond`/`BcondD` (PC-relative or register),
  `DBcond`/`DBcondD` (decrement ARn, branch while it stays non-negative),
  `CALLcond`, `TRAPcond` (through the vector at `0x20 + N`), `RETIcond`,
  `RETScond`, `RPTB`. Delayed branches execute the next three instructions
  (`delayslot`). `PUSH` pre-increments `SP` and `POP` post-decrements it
  (the system stack grows upward).

## Gaps

- The TI floating-point formats are not IEEE: floating-point arithmetic,
  conversions (`FIX`, `FLOAT`, `NORM`, `RND`, `LDE`, `LDM`), the 32-bit memory
  format and the short immediate are user ops (`ti_*`) on the 40-bit values;
  float flags come from `ti_is_negative`/`ti_is_zero` and `V`/`UF` are cleared.
- Circular and bit-reversed address updates are user ops; repeat modes
  (`RPTS`, `RPTB`) set `RS`/`RE`/`RC` and call a user op, so the repeated body
  is not unrolled into a loop.
- `IDLE`, `IDLE2`, `LOPOWER`, `MAXSPEED`, `SWI`, `IACK`, `SIGI` and the
  interlocked loads/stores are user ops. The C4x-only instructions (`LAJ`,
  `LDA`, `LBn`/`LHn`, `MPYSHI`, `TOIEEE`, the C4x indirect T2 forms, the
  expansion registers `IVTP`/`TVTP`) are not decoded; C4x code that uses only
  the C3x-compatible subset lifts.
- The ST register is not composed from the individual flag registers.
- The C3x "enhanced" parallel register operands (C31 rev 6.0+, C32, C33) are
  not decoded.
- Data symbols on this word-addressed space are named by byte offset
  (`dat_c00` for word 0x300), as for the other word-addressed languages.
- The compiler spec follows the TI C compiler's register-argument model
  (`AR2`, `R2`, `R3`, `RC`, `RS`, `RE`; result in `R0`).

## Check

No TI or GNU tic4x assembler or emulator was installed, so the test vector is
hand-assembled from the manual's instruction formats:
`crates/unlace-cli/tests/fixtures/tms320c3x/`.
