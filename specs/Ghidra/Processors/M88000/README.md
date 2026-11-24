# Motorola 88000 (MC88100)

Written for unlace (Apache-2.0) from the *MC88100 RISC Microprocessor User's
Manual* (Motorola, second edition, 1990) and the 88open Binary Compatibility
Standard for the calling convention. No prior SLEIGH module existed (#98).

Language: `88000:BE:32:default` (`m88k.slaspec`, `m88k.cspec`).

## Modelled

- Integer: add/addu/sub/subu (immediate and register, with the `.co`, `.ci`
  and `.cio` carry forms on the PSR carry bit `CY`), mul, div, divu; the
  overflow and divide traps are not raised.
- `cmp` writes the manual's bit vector (eq=2, ne=3, gt=4, le=5, lt=6, ge=7,
  hi=8, ls=9, lo=10, hs=11), so `cmp` + `bb1 ge` folds into a signed compare.
- Logic: and/and.u/mask/mask.u/or/or.u/xor/xor.u immediates (the `and` forms
  keep the other half), and the `.c` (complement) register forms.
- Bit fields clr/set/ext/extu/mak/rot with `W5<O5>` immediates or the packed
  register form (width 0 means 32); ff0/ff1.
- Loads and stores of byte, half, word and double (register pair rN:rN+1, rN
  high) with `rs1+imm16` (zero-extended), `rs1+rs2` and scaled `rs1[rs2]`;
  xmem, lda.
- Flow: br/bsr (26-bit), bb0/bb1, bcnd (all M5 masks, named for the six
  common ones), jmp/jsr, each with its `.n` delay-slot form; `jmp r1` is a
  return. tb0/tb1/tcnd/tbnd trap through user ops; rte.
- r0 reads as zero.
- SFU1 floating point on the general registers: fadd, fsub, fmul, fdiv with
  any single/double mix of operand sizes, fcmp (bits 2-7), flt, int, nint, trnc.

## User ops and gaps

- ldcr/stcr/xcr and fldcr/fstcr/fxcr are user ops over the control-register
  number; supervisor state, the FPU exception model and the rounding mode of
  `int` are not modelled.
- The `.usr` load/store bit is decoded and ignored; fcmp's range bits 8-11
  read as zero.
- MC88110 additions (extended registers x0-x31, graphics unit, `ld.x`) are not
  decoded.

## Checked

No 88k toolchain or emulator was installed here (MAME's `m88000` core is the
oracle the issue names), so the vectors are hand-assembled from the manual's
encodings. `unlace-cli/tests/m88k_raw.rs` decompiles add, signed max
(`cmp`/`bb1 ge`), an `or.u`/`ld` absolute load and a `bsr.n` call with its
delay slot to the expected C; a 131-word sweep of every integer, load/store,
bit-field, trap, control-register and floating-point form decompiles with no
bad or unimplemented instruction.
