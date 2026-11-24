# Texas Instruments TMS9900

Native SLEIGH written for unlace (issue #98) from the TI TMS9900 Microprocessor
Data Manual (1976) and the TMS9900 Family System Development Manual. A prior
SLEIGH (aleph-void/Ghidra-TMS9900) carries no license; it was not opened or
copied.

Language: `TMS9900:BE:16:default` (big-endian, 16-bit words, byte addressed).

## What is modelled

- The workspace registers `R0`-`R15` as processor registers (byte operands in
  register mode are the most significant byte, `R0b`-`R15b`), `WP`, and the
  status bits `LGT` (L>), `AGT` (A>), `EQ`, `C`, `OV`, `OP`, `XOPF` (X) and the
  interrupt mask `INTM`.
- All five general addressing modes for source and destination (`Rn`, `*Rn`,
  `@addr`, `@addr(Rn)`, `*Rn+` with +2 for words and +1 for bytes), including a
  symbolic or indexed destination whose extension word follows the source's.
- The 69 TMS9900 instructions: format I dual-operand word and byte operations
  with the manual's flag rules (subtract carry is "no borrow"; byte results set
  odd parity), `COC`, `CZC`, `XOR`, `MPY` (32-bit product in Rd:Rd+1), `DIV`
  (overflow when the divisor is not above Rd), the shifts with a count of 0
  taken from R0 (0 meaning 16), the immediate group (`LI`, `AI`, `ANDI`,
  `ORI`, `CI`, `STWP`, `STST`, `LWPI`, `LIMI`), the 13 jumps, `B`, `BL` (R11
  link; `B *R11` is a return), `BLWP` (a call through the vector's PC word,
  `WP` loaded from its first word) and `RTWP` (a return through R14, status from
  R15).
- CRU: `SBO`, `SBZ`, `TB`, `LDCR` and `STCR` (byte operand for counts 1-8) are
  user ops over R12's bit address.

## Gaps

- Registers are not aliased to the memory at `WP`: code that reaches the
  workspace through memory (or switches it with `LWPI`/`BLWP`) is not related to
  `R0`-`R15`. `BLWP`'s saves into the new workspace's R13-R15 are not modelled.
- `X` (execute) and `XOP` are user ops; `IDLE`, `RSET`, `CKON`, `CKOF`, `LREX`
  likewise. `MPY`/`DIV` with Rd = R15 pair with R0 instead of WP+32.
- Word accesses at odd addresses are not forced even. The TMS9995/99000
  additions (`DIVS`, `MPYS`, `LST`, `LWP`, ...) are not decoded.
- The compiler spec has no register parameters (no standard ABI); R10 is the
  stack pointer of TI's and GCC's conventions.

## Check

No assembler or emulator was available, so the test vector is hand-assembled
from the data manual's opcode formats: `crates/unlace-cli/tests/fixtures/tms9900/`.
