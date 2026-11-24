# Hudson Soft HuC6280

Written for unlace from the public HuC6280 instruction descriptions (the 65C02 base
set plus Hudson's block-transfer, bank-mapping, T-flag and VDC store extensions). No
prior SLEIGH module exists. Semantics (flag effects, block-transfer direction, the
TSB/TRB zero flag, TMA's choice of the highest selected MPR) were checked against
MAME's `h6280` core, read for reference only.

Language: `HuC6280:LE:16:default`, the CPU's 16-bit logical address space.

Modelled:
- Every documented opcode (the 65C02 set with `BIT #`, `STZ`, `TSB`/`TRB`, `(zp)`,
  `JMP (abs,X)`, `BRA`, `RMB`/`SMB`/`BBR`/`BBS`), plus `SXY`, `SAX`, `SAY`, `CLA`,
  `CLX`, `CLY`, `BSR`, `TST` (four forms), `TAM`, `TMA`, `CSL`, `CSH`, `SET`,
  `ST0`/`ST1`/`ST2` and the five block transfers `TII`, `TDD`, `TIN`, `TIA`, `TAI`
  as byte-copy loops (a length of 0 copies 65536 bytes).
- Zero page is logical 0x2000-0x20FF and the stack 0x2100-0x21FF, as the hardware
  places them; `TXS` sets `SP` to 0x2100 | X. `JSR` and `BSR` push the address of
  their last byte, `RTS` returns one past it.
- The T flag: `SET` sets a no-flow decode-context bit on the next instruction, and
  `ORA`, `AND`, `EOR`, `ADC` and `SBC` decoded under it read and write the
  zero-page byte at X instead of A (they print a `(X),` operand).
- N, V, Z and C on every instruction that sets them, with carry and overflow on
  `ADC`/`SBC` and the not-borrow carry on compares.
- MPR0-MPR7 are registers written by `TAM` and read by `TMA`.

User-ops: `st0`, `st1`, `st2` (VDC writes at physical 0x1FE000/2/3, outside the
logical space), `setClockLow`, `setClockHigh`.

Gaps: decimal-mode (`D`) arithmetic is computed as binary; memory accesses are not
translated through the MPRs, so a bank-switched program shows logical addresses; the
T-mode context only applies when `SET` falls through to the instruction it modifies;
`BRK` is modelled as a call through the IRQ2 vector at 0xFFF6 (the hardware returns to
the byte after its padding byte).

Oracle: MAME (`h6280`), by reading; the CLI test `crates/unlace-cli/tests/huc6280.rs`
carries the hand-assembled vector.
