# DEC PDP-11

Written for unlace (Apache-2.0, like the rest of the tree) from public DEC
documentation: the *PDP-11 Processor Handbook* (1979, the instruction
descriptions and condition-code tables) and the *PDP-11 Architecture Handbook*
(1983, EIS and MFPS/MTPS). No prior SLEIGH module existed (#98).

Language: `PDP-11:LE:16:default` (byte-addressed 16-bit space, little-endian
words, `pdp11.slaspec`, `pdp11.cspec`).

## Modelled

- The eight addressing modes for both operands, including the PC forms
  (`#n`, `@#a`, relative and relative-deferred) and the byte-mode rule that
  `(SP)+`/`-(SP)` still step by two. The source operand's extension word
  comes first; the destination's mode and register travel in the decode
  context (`cdmode`, `cdreg`) so its extension word decodes after the
  source's.
- Double-operand: MOV, CMP, BIT, BIC, BIS, ADD, SUB and the byte forms; MOVB
  to a register sign-extends.
- Single-operand: CLR, COM, INC, DEC, NEG, ADC, SBC, TST, ROR, ROL, ASR, ASL
  (word and byte), SWAB, SXT, MFPS, MTPS, MFPI/MFPD/MTPI/MTPD (as moves within
  the current space).
- EIS: MUL and DIV on the register pair R:R+1 (R high), ASH, ASHC, XOR, SOB;
  MARK.
- Branches (all 15 conditions), JMP, JSR (the PC link is a call; another link
  register is saved on the stack and loaded with the return address), RTS,
  RTI, RTT, the condition-code operators and SPL.
- N, Z, V, C as separate one-byte registers with the handbook's rules for each
  instruction; PS holds the priority and T bits.

## User ops and gaps

- HALT, WAIT, RESET, BPT, IOT, EMT, TRAP and MFPT are user ops.
- FP11 floating point (opcodes 170000-177777) decodes as one `fpp(word)` user
  op without its operand words, so a function using the FPU loses the
  instructions after it; CIS, the MMU registers and the previous-mode address
  space are not modelled.
- 32-bit values held in memory use the PDP-11's middle-endian word order
  (high word first); the cspec's `long` return in R0:R1 is right, but a
  memory `long` reads with the low word first.

## Checked

No toolchain or emulator was installed here, so the vectors are hand-assembled
from the handbook's octal encodings. `unlace-cli/tests/pdp11_raw.rs` decompiles
an add and a signed max routine to the expected C; a 152-word sweep of every
addressing mode on MOV/MOVB, every double, single and EIS opcode and the trap
group decompiles with no bad or unimplemented instruction.
