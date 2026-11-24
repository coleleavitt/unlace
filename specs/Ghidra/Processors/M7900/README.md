# Mitsubishi / Renesas 7900 Series

Written for unlace (issue #98) from Renesas' public software manual.

Languages:

- `M7900:LE:24:default`: the 7900 Series CPU core (M37902, M37905, M37906,
  ...) with the direct page register DPR0 only.
- `M7900:LE:24:DPR4`: the same core with the direct page register select bit
  set, so the top two bits of a direct operand pick DPR0-DPR3 and the low six
  bits give the offset.

The 7900 is only source compatible with the 7700 Family; the encodings differ,
so it is its own module (the 7700 is `M7700`).

## Sources

- Renesas *7900 Series Software Manual*: registers (chapter 2), addressing
  modes and the DPR0-DPR3 selection (chapter 3), and the machine-code rows of
  every instruction page in chapter 4 (syntax, machine code, bytes). The
  constructors come from those rows, including the B-accumulator form each
  row lists in parentheses.
- Checked against the manual: all 815 single-form rows were assembled (with
  m = x = 1) and decoded. Each decodes to the manual's mnemonic and byte
  count, and the B forms are one byte longer. Spot checks cover the m = x = 0
  immediates, `LDD`/`PHD`/`PHLD`/`PLD`/`RTSD`/`RTLD` register lists, `BSR`,
  `BRAL`, `MOVR`, `BSS`, `DEBNE` and `MVN`.

## What is modelled

- A, B, the 32-bit E (= B:A), X, Y, S, DPR0-DPR3, DT, PG and PS, in the 16 MB
  bank:address space. Every addressing mode is covered.
- Data length `m`, index length `x` and decimal mode `D` are decode-time
  context bits. `SEP`/`CLP #imm`, `SEM` and `CLM` commit them along the
  flow. Each m/x-sized instruction has 8- and 16-bit forms. The `...B`
  instructions are always 8-bit, and the `...D` instructions are 32-bit
  on E.
- Arithmetic and logic on A/B/E and on memory with an immediate (`ADDM`,
  ...); compares; compare-and-branch (`CBEQ`/`CBNE`); decrement-and-branch
  (`DEBNE`, `DXBNE`, `DYBNE`); bit tests (`BBS`/`BBC`, `BSS`/`BSC`);
  signed and unsigned conditional branches; `BSR` (11-bit); and `BRAL`.
- Multi-bit shifts and rotates, `MPY`/`MPYS`/`DIV`/`DIVS`, `RLA`, `ABS`,
  `NEG`, `EXTS`/`EXTZ` (8/16/32-bit), `CLR*`, `MOVM`/`MOVMB`, `MOVR`/`MOVRB`
  (up to 16 instruction bytes), `MVN`/`MVP`, and `PSH`/`PUL` masks.
- Stack: `PHD`/`PLD`/`LDD`/`PHLD` with DPR lists, and `RTSD`/`RTLD`.
- Calls and returns: `JSR`/`JSRL`/`RTS`/`RTL`/`RTI`/`BRK`.

## Gaps

- The m/x/D context approximates the run-time flags. `PLP`, `PUL` with PS and
  `RTI` do not update it.
- Decimal `ADC`/`SBC` and `RMPA` are user ops.
- `MOVR`/`MOVRB` forms longer than 16 bytes (the engine's instruction limit)
  do not decode. `MVN`/`MVP` copy one byte per iteration.
- `BRK` calls `software_interrupt`. `WIT` and `STP` are user ops.
- The calling convention (first argument and result in A) is an assumption
  modelled on Mitsubishi's C compiler.
