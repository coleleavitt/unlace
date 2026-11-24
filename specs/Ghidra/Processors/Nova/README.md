# Data General Nova

Written for unlace (Apache-2.0) from Data General's *How to Use the Nova
Computers* (015-000009) and *Programmer's Reference, Nova 3* (015-000037)
and the Nova 4 programmer's reference for the byte and signed multiply/divide
instructions. Encodings were cross-checked against SIMH's `nova_cpu.c` (MIT,
read only; no text copied). No prior SLEIGH module existed (#98).

Language: `Nova:BE:16:default` (`nova.slaspec`, `nova.cspec`). Memory is
word addressed (`wordsize=2`): every code and data address counts 16-bit
words, so `--base` and the decompile addresses of a raw image are word
addresses. Data symbols print with the byte offset (`dat_50` is word 0x28).

## Modelled

- Memory reference: JMP, JSR, ISZ, DSZ, LDA, STA with page-zero, PC-relative,
  AC2- and AC3-relative addressing and one level of indirection. `JSR` links
  in AC3 and is a call; `JMP 0,3` is a return.
- Operate: the eight ALU functions (COM, NEG, MOV, INC, ADC, SUB, ADD, AND)
  with the carry base (Z, O, C), the 17-bit rotate through carry (L, R) and
  the byte swap (S), the no-load flag (`#`, neither the destination nor the
  carry is written) and the eight skip conditions, as one constructor per
  function and shift so the p-code stays flat. The carry out of each
  function is a comparison (`SUB`: no borrow is `acs <= acd`), so a
  `SUBZ# ... ,SNC` compare folds to a C comparison.
- Nova 3 stack and frame: PSHA, POPA, SAV, RET, MTSP, MFSP, MTFP, MFFP, MUL,
  DIV; SAV/RET push and pop the five-word frame (AC0-AC2, FP, carry plus
  return address) and RET is a return. The stack grows upward.
- Nova 4: LDB, STB (byte pointers, even byte the high half), MULS, DIVS.
- CPU device (077): INTEN, INTDS, READS, INTA, MSKO, IORST, HALT.

## User ops and gaps

- I/O transfers to devices other than 1 and 077 (NIO, DIA..DOC with their
  S/C/P pulses) and SKP on a device flag are user ops (`io_transfer`,
  `io_skip`); READS, INTA, MSKO, IORST and HALT are user ops too.
- Multi-level indirection (a pointer with bit 15 set) is not followed, and the
  register-relative and indirect addresses are not masked to 15 bits, so
  stack frames stay recognisable.
- The Nova 3/4 floating-point unit, the memory-map unit and the Eclipse
  extensions are not decoded.
- There is no fixed linkage. The cspec passes AC0-AC2 and returns AC0, links
  in AC3 and keeps SP and FP across calls, which matches common DG assembler
  practice.

## Checked

No Nova toolchain was installed here, so the vectors are hand-assembled.
`unlace-cli/tests/nova_raw.rs` decompiles add, unsigned max (`SUBZ#` with
`SNC`), a page-zero load/add/store, an `ADDZL` rotate and a Nova 3
`SAV`/`JSR`/`RET` routine to the expected C. A sweep of 1,276 words (every
high byte with four low bytes, and every low byte of an operate word), each
placed before a return, decompiles with no bad or unimplemented instruction.
