# KONAMI CPU (Konami-2)

The KONAMI CPU is the 6809-derived core Konami built into gate arrays (052001, 052526,
053248) for arcade boards from the late 1980s (Aliens, Super Contra, Thunder Cross,
The Simpsons, ...). It keeps the 6809 register set and flag rules but has its own
one-byte opcode map, takes every memory operand through an indexed postbyte (direct
and extended addressing are postbyte forms), and adds block moves, multi-bit shifts,
`LMUL`, `DIVX`, `ABS`, `DBJNZ`/`DXJNZ` and `SETLN`.

Written for unlace. No prior SLEIGH module exists and Konami published no manual; the
opcode map, postbyte layout and semantics of the extensions follow the description in
MAME's `konami` core (read for reference only), and the flag rules the core shares
with the 6809 follow the Motorola MC6809 programming manual.

Language: `KONAMI:BE:16:default`.

Modelled:
- Every opcode in the map (0x08-0xD0): 8- and 16-bit loads, stores, ALU, compares,
  unary ops on A, B, D and memory, word-memory shifts, short and long branches (all 16
  conditions), `JMP`/`JSR`/`BSR`/`LBSR`/`RTS`/`RTI` (the E flag selects the
  full-state pull), `LEA*`, `PUSHS`/`PUSHU`/`PULLS`/`PULLU` with the 6809 mask
  (`PULLS ...,PC` is a return), `EXG`/`TFR` (postbyte bit 7 selects TFR, reading A
  gives 0x10:A and register 1 reads D, writes B), `ANDCC`/`ORCC`.
- The indexed postbyte: `,R+`, `,R++`, `,-R`, `,--R`, 8- and 16-bit offsets, `,R`,
  `A,R`, `B,R`, `D,R`, extended `$nnnn`, direct `<$nn` (DP:nn), each with the
  indirect bit; PC as an index register is the address after the postbyte.
- Extensions: `ABX`, `DAA`, `SEX`, `MUL`, `LMUL` (X:Y = X*Y), `DIVX` (X = X/B, B =
  remainder, 0 on a zero divisor), `BMOVE`/`MOVE` (Y to X, U bytes), `BSET`/`BSETW`,
  `LSRDI`/`RORDI`/`ASRDI`/`ASLDI`/`ROLDI` (D by an immediate count) and the `...WA`
  forms (a memory word by the count in A), both counts taken modulo 16, the rotates
  through carry, `CLR`/`NEG`/`INC`/`DEC`/`TST` on D and memory words, `ABSA`/`ABSB`/
  `ABSD`, `DBJNZ` (B) and `DXJNZ` (X).

User-ops: `setLines` (`SETLN`, the bank/output lines of the host board).

Gaps: the exact flag effects of the extensions are not documented by Konami and follow
MAME (`ROLDI`/`ROLWA` clear V); EXG/TFR with DP use the 8-bit DP; Konami-1 (a stock
6809 with address-keyed opcode encryption) is not this CPU: decrypt the opcodes and use
the 6809 language.

Oracle: MAME (`konami`), by reading; the CLI test `crates/unlace-cli/tests/konami.rs`
carries two hand-assembled vectors.
