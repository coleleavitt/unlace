# NEC V60 / V70

Written for unlace from the public description of the NEC V60 family instruction set
(the uPD70616 V60 and uPD70632 V70 user's manuals: instruction formats I-VII, the 21
addressing modes, PSW and the privileged registers). No prior SLEIGH module was found.
Operand encodings and instruction lengths were checked against MAME's `v60`
disassembler (BSD-3-Clause, read and run as an oracle, not copied): 22,000 random
encodings (40 of them longer than 16 bytes, up to 20) decode to the same length and
mnemonic, apart from `clrtlb`, whose immediate MAME's disassembler sizes as a byte and its core as a word.
Flag rules follow MAME's `v60` core where the manual leaves room.

Language: `V60:LE:32:default`. The V70 runs the same user and system instruction set
(it differs in its on-chip MMU and bus), so one language serves both: Sega System 32,
Jaleco Mega System 32, the NEC PC-98 V60 boards.

`gen_v60.py` writes `data/languages/v60.slaspec`; edit the generator, not the output
(`python3 gen_v60.py > data/languages/v60.slaspec`). Each instruction has up to two
general operands; their `m` bits sit in the opcode or format byte ahead of the
operands, so the decoder copies them into the context fields `m1`/`m2`, and the
operand tables (`AM` value, `XA` address, `BS`/`BF` bit address, per slot and size)
match on them.

Modelled:
- All 21 addressing modes for both operand slots: register, register indirect,
  auto-increment/decrement (by the operand size), 8/16/32-bit displacement,
  displacement indirect, double displacement, PC-relative forms (relative to the
  instruction start), direct and direct deferred, the indexed variants (index scaled
  by the operand size; a bit index for bit operands), quick (0-15) and inline
  immediates. Byte and halfword register operands are the low part of the register,
  so a byte write keeps the upper bits.
- Formats I/II arithmetic and logic (`add`, `addc`, `sub`, `subc`, `cmp`, `and`,
  `or`, `xor`, `not`, `neg`, `mul`/`mulu`/`div`/`divu`/`rem`/`remu`, `mulx`,
  `mulux`, `divx`, `divux`) with Z, S, OV and CY; `shl`, `sha`, `rot` with the signed
  count byte (negative shifts right); the moves (`mov`, `mov.d`, `movs`, `movz`,
  `movt` with its overflow check, `movea`, `xch`, `rvbyt`), `setf`, `test1`, `set1`,
  `clr1`, `not1`, `in`/`out` on a separate `io` space, `updpsw.h`/`updpsw.w`.
- Format III: `inc`, `dec`, `test`, `push`, `pop`, `pushm`/`popm` (the register
  mask unrolled, bit 31 for the PSW), `prepare`/`dispose` (FP frame), `jmp`, `jsr`,
  `ret #n` (pops PC and AP), `retiu`/`retis`, `getpsw`, `tasi`.
- Formats IV-VI: the 15 branch conditions with 8- and 16-bit displacements, `bsr`,
  `rsr`, the `db`cc decrement-and-branch family and `tb`.
- `call target, argptr`: pushes AP, loads AP with the argument pointer, pushes the
  return address; a PC-relative or direct target is a direct call.
- Floating point (`.s` single, `.l` double): `movf`, `negf`, `absf`, `addf`, `subf`,
  `mulf`, `divf`, `cmpf` and the `cvt.*` conversions.
- Compiler spec: the default prototype is the `jsr`/`bsr` + `rsr` convention
  (arguments on the stack above the return address, result in R0 or R1:R0, SP, FP and
  AP preserved). `__call` describes `call`/`ret #n` (arguments 8 bytes above the entry
  SP, callee pops).

User-ops: the string instructions (`movc*`, `cmpc*`, `schc*`, `skpc*`), bit strings
(`movbs*`, `notbs*`, `andbs*` ... `xornbs*`, `sch0bs*`/`sch1bs*`) and bit fields
(`cmpbf*`, `extbf*`, `insbf*`) with their operands and lengths, the decimal
instructions (`adddc`, `subdc`, `subrdc`, `cvtd.pz`/`cvtd.zp`), `rotc`, `rvbit`,
`sclf`, `caxi`, `trap`, `brk`/`brkv`, `trapfl`, `halt`, and the privileged
`ldpr`/`stpr`, `ldtask`/`sttask`, `chlvl`, `chkar`/`chkaw`/`chkae`, `getra`,
`getpte`, `getate`, `updpte`, `update`, `clrtlb`/`clrtlba`.

Gaps:
- A function entered through `call` reads its arguments through AP, which the
  decompiler sees as an input register, not as the caller's stack.
- Exceptions (zero divide, privilege, alignment), the per-level stack pointers that
  PSW switches, the MMU and the string/bit/decimal register updates (R26-R28) are not
  modelled; the floating-point flags set Z and S only.
- Bit-address operands in auto-increment/decrement mode do not update the register.

Oracle: MAME `v60` (disassembler run as a length/mnemonic oracle, core read for flag
rules). The `v60*` families in `crates/unlace-cli/tests/processors.toml` carry four hand-assembled
images, one of them a 20-byte Format II `mov.w` with two PC-relative double displacements.
