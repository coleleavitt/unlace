# NEC uPD7810 family

Written for unlace from the NEC uPD7810/7811 user's manual instruction set (the
uPD78C10/C11/C14 CMOS parts share it). No prior SLEIGH module exists. The opcode table
(the one-byte map and the 48, 4C, 4D, 60, 64, 70 and 74 prefix pages, about a thousand
encodings) was generated from the MAME project's `upd7810` disassembler tables, and the
semantics were checked against MAME's core; both were read for reference only, and the
SLEIGH is written for unlace.

Language: `uPD7810:LE:16:default`.

Modelled:
- Every uPD7810 encoding: 8-bit moves and ALU on registers, the V-page working area
  (`%a` = V:offset), register-indirect forms with post-increment/decrement, `(DE+byte)`,
  `(HL+A)`, `(HL+B)`, `(HL+EA)`, `(HL+byte)`; the 16-bit EA operations (`DADD` ...
  `DOFF`, `EADD`/`ESUB`, `DMOV`, `LDEAX`/`STEAX`), `MUL`/`DIV`, shifts and rotates,
  `DAA`, `RLD`/`RRD`, `BLOCK` (a copy loop until C wraps), `TABLE`, `PUSH`/`POP`,
  `EXA`/`EXX`/`EXH` (alternate register banks), `CALL`, `CALF` (0x800-0xFFF), `CALT`
  (through the table at 0x80), `CALB`, `JMP`, `JB`, `JEA`, `JR`, `JRE`, `RET`, `RETI`,
  `SOFTI`.
- Flags Z, HC and CY with MAME's carry/borrow rules.
- Skips: every instruction that sets the PSW SK flag (`ADDNC`, `SUBNB`, `ADINC`, `SUINB`,
  `GTx`, `LTx`, `NEx`, `EQx`, `ONx`, `OFFx` in all operand forms and their 16-bit `Dxx`
  versions, `INR`/`DCR`/`INRW`/`DCRW` on wrap, `SLLC`/`SLRC`, `BIT`, `SK`/`SKN`,
  `SKIT`/`SKNIT`) is a conditional branch over the next instruction (`inst_next2`).
- Special function registers (ports PA-PF, mode, timer, serial, A/D, ECNT/ECPT/ETMx)
  are bytes (words) in a separate `sfr` space, named by the pspec, so port polling stays
  a load in each iteration.

User-ops: `enableInterrupts`, `disableInterrupts`, `halt`, `stop`, `testInterrupt` /
`testClearInterrupt` (the interrupt-request flags `SKIT`/`SKNIT` test).

Gaps: the L0/L1 "string effect" (a run of `MVI A` or `LXI H` executes only its first
member) is not modelled, every `MVI A`/`LXI H` executes; `RETS` returns without the
skip at the return address; the uPD7801, uPD7807 and uPD78C05/06 opcode maps are not
covered.

Oracle: MAME (`upd7810`), by reading; the CLI test `crates/unlace-cli/tests/upd7810.rs`
carries two hand-assembled vectors.
