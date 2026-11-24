# NEC uPD7725 / uPD96050

Written for unlace from the public descriptions of the NEC uPD7725 and uPD96050
instruction formats (NEC data sheets, the necdsp notes of the bsnes/higan emulator).
No prior SLEIGH module exists. Semantics (flag rules, the M/N product timing, the
host and serial side effects) were checked against MAME's `upd7725` core, read for
reference only.

Languages:
- `uPD7725:LE:16:default`: the uPD7725 (SNES DSP-1 to DSP-4, many arcade boards):
  1024-word data ROM, 256-word data RAM.
- `uPD96050:LE:16:default`: the uPD96050 (SNES ST010/ST011): 2048-word data ROM and
  RAM, 16K-word program space with the `hjmp`/`hcall` high half and bank bits.

Image format: the program ROM as 24-bit words stored in three little-endian bytes (the
layout of the usual `*.program.rom` dumps); the code space is byte addressed, so word
`n` is at byte `3*n` and jump targets print as byte addresses. Data ROM (`drom`) and
data RAM (`dram`) are separate 16-bit word-addressed spaces; a RAM word `n` prints as
`dat_<2n>`.

Modelled:
- OP and RT: the source move onto the internal bus, the ALU operation on A or B with
  the P operand from RAM[DP], the bus, M or N, the destination move, then the DP low
  nibble increment/decrement/clear and the DP high XOR, and the RP decrement (each
  skipped when the move wrote that register). RT then returns.
- Per-accumulator flags C, Z, S0, S1, OV0, OV1 as MAME computes them: ADC, SBB and
  SHL1 take the carry of the other accumulator, S1 copies S0 unless OV1 was set, OV1
  is the sticky (two-overflow-cancel) flag.
- M and N are read as the high and low halves of the signed K*L product (the hardware
  recomputes them at the end of every instruction).
- LD with all sixteen destinations, including `klr` (K = id, L = ROM[RP]) and `klm`
  (L = id, K = RAM[DP | 0x40]).
- Every JP condition, `ljmp`/`hjmp`, `lcall`/`hcall` onto a hardware return stack
  (space `hstk`), and `jmpso`.

User-ops: the host interface (`readDR`, `readDRNoFlag`, `writeDR`, `readSR`,
`writeSR`, `hostRequest` for the RQM tests), the serial ports (`readSI`, `serialOut`,
`serialInAck`, `serialOutAck`) and `bitReverse16`: these are asynchronous state the host
changes, so they are not plain registers.

Gaps: the interrupt entry (a forced `lcall` to word 0x100) is not modelled; the
uPD7720's different field layout is not decoded; the SR bits other than through the
user-ops are not tracked.

Oracle: MAME (`upd7725`), by reading; the CLI test `crates/unlace-cli/tests/upd7725.rs`
carries two hand-assembled vectors.
