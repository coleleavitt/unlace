# Intel 4004 / 4040 (MCS-4, MCS-40)

Native SLEIGH written for unlace (issue #98; no prior SLEIGH existed) from public
Intel documentation: the MCS-4 Micro Computer Set Users Manual (rev. 1973) and the
MCS-40 Users Manual (1974). No third-party SLEIGH or emulator source is copied.

Language: `4004:LE:16:default` (one decoder for both chips; the 4040-only opcodes
0x01-0x0E are unused on the 4004).

## What is modelled

- The sixteen 4-bit index registers `R0`-`R15` (pairs `P0`-`P7` in operands),
  the 4-bit accumulator `A`, carry `CY`, the SRC address latch `SRC` and the
  DCL bank `CM`. Every value lives in a byte and is masked to 4 bits.
- All 46 4004 instructions with their carry rules: `ADD`/`ADM` add with carry in,
  `SUB`/`SBM` add the complement with the inverted carry (CY = 1 means no
  borrow), `DAC`, `IAC`, `RAL`, `RAR`, `TCC`, `TCS`, `DAA` and `STC`/`CLC`/`CMC`.
- `JCN` conditions: C1 inverts, C2 tests A == 0, C3 tests CY == 1, C4 tests the
  TEST pin (user op `test_pin`) == 0. `JCN`, `ISZ`, `FIN` and `JIN` address the
  page of the next instruction, so one at the last bytes of a page reaches the
  next page, as the manual describes.
- `JMS`/`BBL`: the on-chip address stack is a downward stack in the top of the
  ROM space (`SP`), so calls and returns are ordinary calls to the decompiler.
- 4002 RAM: main characters at `ram:(CM << 8) | SRC`, status characters
  (`WR0`-`WR3`, `RD0`-`RD3`) at `ramstat:(CM << 6) | (SRC >> 4) << 2 | n`; ROM
  ports (`WRR`/`RDR`) at `port:SRC >> 4`, RAM output ports (`WMP`) at
  `port:0x10 | CM << 2 | SRC >> 6`.
- 4040: `OR4`, `OR5`, `AN6`, `AN7` as logic on the accumulator.

## Gaps

- `DCL` stores the raw accumulator value as the bank number; the 4004's one-hot
  CM-RAM line decoding is not modelled.
- `KBP`, `WPM`, 4040 `HLT`, `BBS`, `LCR`, `DB0`/`DB1` (ROM bank), `SB0`/`SB1`
  (register bank), `EIN`, `DIN` and `RPM` are user ops; the 4040 second register
  bank and 8 KiB ROM banking are therefore not tracked.
- Stack overflow (a fourth nested `JMS` on the 4004) is not modelled.

## Check

No assembler or emulator was available, so the test vector is hand-assembled
from the manual's opcode table: `crates/unlace-cli/tests/fixtures/i4004/`.
