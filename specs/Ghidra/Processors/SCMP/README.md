# National Semiconductor SC/MP (ISP-8A/500, INS8060 SC/MP II)

Native SLEIGH written for unlace (issue #98) from the National SC/MP Technical
Description (1976) and the INS8060 data sheet. A prior SLEIGH exists
(sigurasg/GhidraSCMP); it was not opened or copied.

Language: `SCMP:LE:16:default`.

## What is modelled

- `AC`, `E`, the pointers `P1`-`P3`, carry/link `CY`, overflow `OV` and the rest
  of the status register (`SRX`: IE, F0-F2, SA, SB).
- P0 is incremented before each fetch, so while an instruction executes it holds
  the address of the instruction's last byte: PC-relative operands are relative
  to the displacement byte, and a transfer lands one byte past its effective
  address (`JMP`, `JP`, `JZ`, `JNZ` and the P0 forms of `XPAL`/`XPAH`). The
  reset entry is 0x0001.
- Every memory-reference form: PC-relative, pointer-relative, auto-indexed
  (`@disp(Pn)`: pre-decrement for a negative displacement, post-increment for a
  positive one), immediate, and the displacement -128 that selects `E`.
  Pointer arithmetic wraps inside the 4 KiB page.
- `ADD`/`CAD` (complement add) with carry in and out and overflow, `DAD`/`DAI`/
  `DAE` decimal add, `ILD`/`DLD`, the shifts and rotates (`SR`, `SRL`, `RR`,
  `RRL`), `CSA`/`CAS`, `XAE`, `XPAL`, `XPAH`.
- `XPPC Pn` swaps P0 and Pn: modelled as a call to Pn + 1 that leaves the
  address of the `XPPC` in Pn (the convention's return lands after it).

## Gaps

- `XPPC P3` is both the call and the return of the usual convention; it is
  always read as a call, so a routine's closing `XPPC P3` shows as a call.
- `DLY`, `SIO` and `HALT` are user ops; the sense inputs SA/SB and the flag
  outputs are bits of `SRX` only. Interrupts are not modelled.

## Check

No assembler or emulator was available, so the test vector is hand-assembled
from the manual's opcode table: `crates/unlace-cli/tests/fixtures/scmp/`.
