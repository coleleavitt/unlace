# Analog Devices Blackfin (ADSP-BF5xx, ADSP-BF6xx)

Native SLEIGH written for unlace (issue #98) from the Blackfin Processor
Programming Reference (ADI, rev 2.2) and the instruction-class bit layouts in
GNU binutils (`include/opcode/bfin.h`). The prior SLEIGH module
aleph-void/ghidra-blackfin has no license; it was not opened or copied. The
GPL binutils disassembler and the `sim/bfin` simulator were read for
semantics and used as the decode oracle; no text from them is in this
directory.

Language: `Blackfin:LE:32:default` (GCC `bfin-elf` ABI: arguments in R0-R2
then the stack above a 12-byte caller-reserved area, result in R0 or R1:R0,
return address in RETS, R4-R7, P3-P5 and FP callee-saved).

## What is modelled

- Instruction stream of 16-bit parcels: 16-bit instructions, 32-bit
  instructions (first parcel at the lower address) and 64-bit multi-issue
  bundles (a 32-bit DSP instruction with M set, then two 16-bit slots).
- Every 16-bit class: program control (RTS/RTI/RTX/RTN/RTE, JUMP/CALL through
  a P register and PC-relative, RAISE, EXCPT, TESTSET), cache control,
  push/pop of single registers and register ranges, conditional moves, every
  CC compare (signed, unsigned, immediate, pointer, accumulator), CC/ASTAT bit
  moves, conditional and short branches, register moves across all register
  groups (ASTAT packs and unpacks the individual flags), ALU2op, PTR2op,
  LOGI2op (BITTST/BITSET/BITCLR/BITTGL, shifts), COMP3op, COMPI2op, every
  load/store addressing form (P-indexed, post-modify, FP-relative, I-register
  DAG loads) and the DAG modify instructions.
- 32-bit: LSETUP, LDIMMhalf (.L/.H, sign/zero-extending), CALL/JUMP.L,
  LDSTidxI, LINK/UNLINK, the 16x16 multiplies and MACs (dsp32mult, dsp32mac:
  every accumulator op, result extraction and multiply-mode suffix), the
  dsp32alu, dsp32shift and dsp32shiftimm classes.
- Zero-overhead hardware loops: LSETUP records the loop bottom with a
  `globalset` context commit; the instruction there gets the LC decrement and
  the branch back to the loop top, so the decompiler sees an ordinary loop.
- Flags AZ, AN, AC0, V, VS (and the copies in ASTAT) for adds, subtracts,
  negation and logical ops; CC for all compares.

## Gaps

- Fractional multiply/MAC arithmetic (rounding, saturation, the 40-bit
  accumulator extraction modes) goes through the user ops `dsp_mac`,
  `dsp_mult16`, `dsp_mult32`, `dsp_acc_extract*`; the dataflow (which
  registers are read and written) is exact.
- Vector (2x16), byte (BYTEOP*, SAA, BYTEPACK), SEARCH, BITMUX, VIT_MAX,
  EXTRACT/DEPOSIT, SIGNBITS, ONES, EXPADJ, saturating shifts and DIVS/DIVQ are
  user ops; several dsp32alu forms are printed as `DSPALU.<aopcde>`.
- Circular addressing through the L/B registers is not modelled (I-register
  post-modify is linear). Two hardware loops ending on the same instruction keep
  only the second LSETUP's commit.
- CC compares do not update AZ/AN/AC0. The parallel slots of a multi-issue
  bundle execute in order rather than reading all inputs first.
- The GNU simulator's pseudo instructions (DBG, PRNT, OUTC, ABORT, HLT, DBGA,
  opcode groups 0xf0, 0xf8, 0xf9) are not hardware instructions and are not
  decoded.

## Check

`slacomp` compiles the module. Decode was compared with `bfin-elf-objdump`
(binutils 2.46.50):

- All 16-bit parcels: of the 39,195 encodings objdump decodes as hardware
  instructions, 39,131 print identically and 64 print an equivalent alias
  (`P2 = P1 + P1` for `P2 = P1 << 0x1`); none is missing. 136 CC moves to and
  from unused ASTAT bits are not decoded. 919 encodings objdump rejects are
  accepted (register-group moves and pops the hardware reserves).
- 60,000 random 32-bit words: LSETUP, LDIMMhalf, CALL/JUMP.L, LDSTidxI,
  LINK/UNLINK, dsp32mac and dsp32mult agree exactly with objdump (8,635 of
  8,635) and dsp32shift prints identically (47/47); dsp32shiftimm 90/96 (the
  rest print a negative shift count as its 6-bit two's complement) and
  dsp32alu 72/276 (the rest are decoded with the same operands but named
  `DSPALU.<aopcde>`). Apart from the simulator pseudo instructions no 32-bit
  encoding is decoded by one side only.

The CLI test image (`crates/unlace-cli/tests/fixtures/blackfin/`) was
assembled with `bfin-elf-as`.
