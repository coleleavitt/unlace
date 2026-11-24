# Norsk Data ND-100

Written for unlace (Apache-2.0) from the *ND-100 Reference Manual*
(ND-06.014.02, Norsk Data, 1984): chapter 3 (the instruction repertoire) and
appendix A (instruction codes). A prior SLEIGH module for the ND-100 exists but
carries no licence, so it was not opened; this one is clean-room from the
manual (#98).

Language: `ND100:BE:16:default` (`nd100.slaspec`, `nd100.cspec`). Memory is
word addressed (`wordsize=2`): code and data addresses count 16-bit words, so
`--base` and decompile addresses of a raw image are word addresses; data
symbols print with the byte offset (`dat_80` is word 0x40). The NORD-10 and
ND-110 share the instruction set.

## Modelled

- Memory reference instructions with the eight ,X / I / ,B address modes (P is
  the address of the instruction; ,B pre-indexes, ,X post-indexes): STZ, STA,
  STT, STX, STD, LDD (A:D), STF, LDF (the T:A:D floating accumulator), MIN (skip
  on zero), LDA, LDT, LDX, ADD and SUB (C, the dynamic overflow Q and the
  static overflow O as the manual gives them), AND, ORA, MPY. JMP; JPL links in
  L and is a call. The eight conditional jumps (JAP..JXN, JPC/JNC count X).
- ROP (SWAP, RAND, REXO, RORA, RADD with CLD, CM1, AD1, ADC, and the COPY and
  RSUB forms): one constructor per sub-instruction code following the manual's
  ROP table; a zero source reads 0, P reads the next address, a P destination
  is a jump and `EXIT` (COPY SL DP) returns. SKP with its eight conditions on
  dr - sr, RMPY, RDIV, MIX3, LBYT/SBYT (T + X/2, even X the left byte).
- Shifts of T, D, A and AD (arithmetic, ROT, ZIN, LIN with the M link), the
  argument instructions (SAx/AAx on B, A, T, X), and the 16 bit-operation
  sub-instructions on any register bit or the status flags (PTM, TG, K, Z, Q, O,
  C, M as registers; the K one-bit accumulator).
- TRA/TRR STS pack and unpack the flags.

## User ops and gaps

- Floating arithmetic (FAD, FSB, FMU, FDV) and NLZ/DNZ: the ND 48-bit format is
  not IEEE, so they are user ops on the floating accumulator.
- I/O (IOX, IOXT, IDENT), the other internal registers (TRA/TRR/MCL/MST),
  MON, WAIT, the interrupt and paging controls, register blocks, inter-level
  reads and writes, physical-memory transfers, EXR, the CE/CX commercial
  instructions (decimal, byte moves, the ENTR/LEAVE stack, page tables) are user
  ops; LEAVE and ELEAV return.
- ND-100 code has no fixed register linkage; the cspec passes A, T, D, X,
  returns A (AD for 32 bits), links in L and treats B (the local data area base
  the ND compilers address B-relative) as the stack pointer.
- The opcode 16xxxx range (customer-specified) is not decoded.

## Checked

No ND-100 toolchain or disassembler was available, so the vectors are
hand-assembled from appendix A. The manual's own examples (STA *2 = 004002,
LDA I *2 = 045002, LDA -4,B = 044774, JPL I 3,B = 135403, RADD SA DX, EXIT,
SKP IF DD EQL SL, BSKP ONE SSC, SHA SHR 3, SAA -140) decode as written. The
`nd100` family of `unlace-cli/tests/processors.toml` decompiles add, signed max
(SKP GRE), a P-relative load/add/store, a JPL call with L saved in memory, an
arithmetic shift and an add-argument routine. A sweep of 510 words (fourteen
random words per major opcode, every ROP sub-instruction and the vectors), each
before an EXIT, decompiles with no bad or unimplemented instruction except the
18 unassigned encodings it hit.
