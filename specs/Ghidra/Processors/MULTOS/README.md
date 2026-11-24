# MULTOS Executable Language (MEL)

Written for unlace from the MULTOS Developer's Reference Manual (MDRM, MAO-DOC-TEC-006 v1.58,
public on multos.com): the instruction descriptions (operation, condition codes) and the
Instruction Map (opcode, tag, operand bytes, compact forms). No text is copied and no prior
SLEIGH for MEL was found.

Language: `MULTOS:BE:16:MEL`, the code component of a MULTOS application (for example the code
record of an ALU file) decompiled as a raw image at base 0.

Model:
- An instruction byte holds the 5-bit opcode in bits 3-7 and the 3-bit tag in bits 0-2; operands
  follow, big endian. The MDRM gives opcodes and tags but not this packing; it is the packing
  under which the Instruction Map decodes MULTOS applications consistently (status words such as
  0x6E00 and 0x6D00 at the exits, calls landing on instruction starts).
- For memory forms the tag names the segment register (1 SB, 2 ST, 3 DB, 4 LB, 5 DT, 6 PB,
  7 PT) and the address is that register plus a signed 16-bit offset; tag 0 works on the top of
  the stack. `DT` is the stack pointer and the stack grows upward.
- `CEN`/`CDIS` switch the compact encodings of the DB, LB, PB and PT forms on and off as decode
  context that follows the flow, and `COMPACT_OFF` suspends them for one instruction. Compact
  block forms pack n (1, 2, 4, 8) and a 6-bit offset into one byte; compact byte/word forms
  use an 8-bit offset (PT offsets are negative).
- Modelled directly: `LOAD`, `STORE`, `LOADI`, `STOREI`, `LOADA`, `INDEX`, the byte and
  word literal operations (`SETB`/`CMPB`/`ADDB`/`SUBB`, `SETW`/`CMPW`/`ADDW`/`SUBW`) with
  C and Z, the block operations (`CLEARN`, `TESTN`, `INCN`, `DECN`, `NOTN`, `CMPN`, `ADDN`,
  `SUBN`, `ANDN`, `ORN`, `XORN`) for 1, 2 and 4 bytes, the stack instructions, the branches,
  jumps and calls on C/Z (unsigned conditions), `RET`, and the `SYSTEM` status-word, La and
  exit forms (`mel_set_sw`, `mel_set_la`, `mel_exit`).

Gaps: primitives (`PRIM`) are one user-op that returns the new stack top, since their stack
effect depends on the primitive; block operations of other lengths and 8-byte compact blocks go
through `mel_block`; `RET` with in/out byte counts does not move the returned bytes; the
`LOADI`/`STOREI` stack forms assume the address is the two bytes under the block; calls do
not model the pushed LB/CP pair, so LB-relative parameters show as offsets from `LB`.

Oracle: no MULTOS toolchain was available; the fixture is hand-assembled from the Instruction
Map, and the code record of a public MULTOS application (an Idemix prover ALU) decodes from its
entry into 33 functions with no bad instruction. Tests: the `multos_mel` row of
`crates/unlace-cli/tests/processors.toml`.
