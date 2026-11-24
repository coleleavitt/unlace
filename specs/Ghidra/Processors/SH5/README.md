# SuperH SH-5 (SHmedia)

Written for unlace (Apache-2.0) from the *SuperH SH-5 CPU Core Architecture*
manual (Volume 2, SHmedia). The encoding of every instruction (opcode, mask and
operand fields; facts only, no text copied) follows the binutils 2.29.1 SH64
opcode table, and the decode was checked against `sh64-elf-objdump` built from
binutils 2.29.1, the last release with SH64. No prior SLEIGH module existed (#98).

Languages: `SH5:LE:64:SHmedia` and `SH5:BE:64:SHmedia` (`sh5.sinc`,
`sh5_le.slaspec`, `sh5_be.slaspec`, `sh5.cspec`).

## Modelled

- All 220 distinct SHmedia encodings (235 table rows; `beq`/`beq/l` and the like
  share an encoding and print under the first name, as objdump does).
- 64 general registers; r63 reads as zero. Integer arithmetic, logic, compares,
  conditional moves, the `.l` forms (32-bit result sign-extended; `addz.l`
  zero-extends), shifts by register and immediate, `mulu.l`/`muls.l`, `nsb`,
  `byterev`, `movi`/`shori`, loads and stores with scaled displacements and
  indexed forms, `swap.q`.
- Branch-target registers tr0-tr7: `pta`/`pt`/`ptb` load a PC-relative target,
  `ptabs` a register, `ptrel` PC plus a register, `gettr` reads one. The
  conditional branches and `blink` branch through a target register; `blink`
  with a link register other than r63 is a call. The target a `pta`/`pt` loads
  is also tracked in the decode context along the flow, so a branch or call
  through that register (until it is rewritten or the flow is left) is a direct
  branch or call. `ptabs r18,trN; blink trN,r63` decompiles as a return.
- FP: fr0-fr63, dr pairs, fv vectors and mtrx matrices; arithmetic, compares
  (result in a general register), conversions, `fmac.s`, moves between the
  register files, FP loads and stores, `fgetscr`/`fputscr`.

## User ops and gaps

- The multimedia instructions (`m*`: lane arithmetic, saturation, shuffles,
  extracts, multiply-accumulate, `msad`), `fipr.s`, `ftrv.s`, `ldhi`/`ldlo`/
  `sthi`/`stlo`, `getcfg`/`putcfg`, `trapa`, `rte`, `brk`, `sleep`,
  `synci`/`synco` and the cache operations are user ops named after the
  instruction.
- SHcompact (the 16-bit SH-4-compatible mode) is not decoded here, and the mode
  bit of a branch target is not modelled: every target is decoded as SHmedia.
  Use `sh4` languages for SHcompact code.
- Odd double-register, unaligned vector and matrix register numbers are reserved
  and stay bad instructions (objdump prints them).
- The tracked PTA target is 32 bits wide, so a target above 4 GiB is not
  resolved to a direct branch.
- The cspec follows GCC's SHmedia linkage (integer arguments r2-r9, result r2,
  floats fr0-fr11 / dr0-dr10, result fr0/dr0, link r18, stack r15) with 64-bit
  pointers; SHmedia32 code keeps its sign-extended 32-bit addresses in 64-bit
  registers.

## Checked

The `sh5` and `sh5-be` families of `unlace-cli/tests/processors.toml` decompile add, signed max (`pta`+`bge`), a
`movi`/`shori` absolute load, a `pta`+`blink` call and a float add, all built
with `sh64-elf-as --abi=32` (little and big endian). A probe of 6,639 words
(twelve random operand fills of every encoding plus 4,000 random words) agrees
with objdump on every word except the 277 reserved odd FP register forms; one
instance of each of 217 encodings, placed before a return, decompiles with no
bad or unimplemented instruction.
