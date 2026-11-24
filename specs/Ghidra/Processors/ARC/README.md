# Synopsys ARC

`ARC:LE:32:ARCv2` and `ARC:BE:32:ARCv2`: the ARCv2 base instruction set of the
ARC EM and HS cores (`data/languages/arcv2.sinc`), selected for an ELF whose
machine is `EM_ARC_COMPACT2` (195).

Covered: the 16-bit and 32-bit base encodings, long immediates, delay slots,
conditional execution, `bl`/`j`/`jl` with `blink`, the zero-overhead loop
(`lp`), `enter_s`/`leave_s`, multiply, divide, the barrel shifter, byte swap
and bit scan.

Not covered: ARCompact (ARC600/ARC700), the DSP and FPU extensions, the
accumulator multiplies, named auxiliary registers.

The encodings follow the ARCv2 ISA; the decode vectors in
`decompiler/crates/kuna-sleigh/tests/arcv2_decode.tsv` were assembled with the
GNU ARC assembler. `docs/spec/02-lift-and-flow.md` describes the model.

## Local changes

- A conditional delayed jump (`jcc.d`, `jcc.d [blink]`, `jlcc.d`) and a conditional delayed
  `blcc.d` run their delay slot on both paths. Before this change, the condition skipped the
  delay slot when it failed (`jcc` branched to `inst_next` before the delay slot), and `blcc.d`
  re-executed the delay slot by branching back to it. gcc's `jeq.d [blink]` / `mov_s r0,0` early
  return in `list_sum` lost the zeroed accumulator on the fall-through path.
- Delayed calls link `blink` to the instruction after the delay slot (`inst_next2`).
