# Propeller

The Parallax Propeller 1 (P8X32A) cog instruction set (PASM). Written for unlace (#98); no
prior SLEIGH module existed.

Language: `propeller:LE:16:default`.

Sources: the Parallax Propeller Manual v1.2 (assembly language reference: instruction
fields, the ZCRI effect bits, the sixteen conditions, each instruction's result and its Z
and C outputs) and the P8X32A datasheet opcode matrix; the opcode numbers were checked
against radare2's `propeller_disas` table (read, not copied).

Modelled:
- Cog RAM is the default `cog` space, byte addressed: cog long N is at byte 4N, so code and
  the registers it names share one space and D/S fields read and write cog longs. The
  special registers `PAR`..`VSCL` ($1F0-$1FF) are named and volatile. Hub RAM/ROM is the
  `hub` space, reached through `rdbyte`/`rdword`/`rdlong` and `wrbyte`/`wrword`/`wrlong`.
- Every instruction's execution condition on C and Z (`if_never` skips it); the result is
  written to D only with WR, Z only with WZ and C only with WC, so `cmp`/`test` and
  `wrxxxx` are the NR forms of `sub`/`and` and `rdxxxx`.
- The arithmetic (`add`, `sub`, `addx`, `subx`, `adds`, `subs`, `addsx`, `subsx`, `cmps`,
  `cmpsx`, `cmpsub`, `addabs`, `subabs`, `sumc`.., `neg`.., `abs`, `absneg`, `min`, `max`,
  `mins`, `maxs`), logic (`and`, `andn`, `or`, `xor`, `mux`.. with C as parity), `mov`,
  `movs`/`movd`/`movi`, shifts and rotates (`ror`, `rol`, `shr`, `shl`, `rcr`, `rcl`, `sar`).
- `jmp`, `djnz`, `tjnz`, `tjz` with immediate or register targets; `jmpret` with WR is a
  call (`call #f` is `jmpret f_ret, #f`), and `jmp #0` (the `ret` encoding) a return.
- Hub operations (`clkset`, `cogid`, `coginit`, `cogstop`, `lock*`), `waitcnt` (D += S),
  `waitpeq`/`waitpne`/`waitvid` and `rev`'s bit reversal are named p-code operations.

Gaps:
- The call's write of the return address into the S field of `f_ret` (self-modifying code)
  is left out, so the return is not resolved to its site; a `jmp #0` that really jumps to
  cog address 0 decompiles as a return.
- Hub addresses are used as given (`rdword`/`rdlong` ignore their low bits on hardware).
- The P1 has no stack; functions take no parameters and work on cog registers. The Propeller 2 is the separate `propeller2:LE:32:default` language below.

Checked: the CLI test image was hand-assembled from the manual's field layout; the decompiled
C matches the routine (loop, call, compare-and-move, hub write).

## Propeller 2 (`propeller2:LE:32:default`)

The Parallax Propeller 2 (P2X8C4M64P) cog instruction set as it runs in hub execution mode,
the mode flexspin and the Spin2 toolchain compile C and Spin to. Written for unlace (#98); no
prior SLEIGH module existed.

Sources: Parallax's "Propeller 2 Instructions" table (v35, rev B/C silicon): every row's
encoding, operation and flag results; the 357 non-alias rows are encoded (generated from the
table into `propeller2.slaspec`). The flexspin compiler/assembler (MIT) was built to check
encodings (PTRx expressions, relative branches) and to produce the test image.

Modelled:
- Hub memory is the default space (byte addresses, code in hub execution); cog registers
  $000..$1EF are the `cog` space (register N at byte 4N, so they persist across calls), the
  special registers $1F0..$1FF (`IJMP3`..`INB`, `PA`, `PB`, `PTRA`, `PTRB`, `DIRA`..)
  are SLEIGH registers, LUT RAM is the `lut` space.
- All sixteen conditions, `_RET_` (EEEE = 0000: execute, then return); WC/WZ/WCZ flag writes,
  the TESTB/BITx and TESTP/DIRx encodings shared by flag combination; `AUGS`/`AUGD` extend the
  next `#S`/`#D` to 32 bits through context.
- Exact p-code for the math and logic group (shifts and rotates with their C, add/sub with carry
  and "correct sign" C, compares, FGE/FLE, SUMx, NEGx, MUXx, INCMOD/DECMOD, ZEROX/SIGNX,
  ENCOD/ONES, TESTB/TESTBN with AND/OR/XOR forms, BITx, SET/GET/ROL nibble/byte/word, SETR/D/S,
  DECOD/BMASK, MUL/MULS, MUXQ, RCZR/RCZL, WRC.., MODCZ), hub and LUT reads/writes with the
  `PTRA`/`PTRB` index, pre- and post-update forms, every branch (DJZ.., TJZ.., event jumps, JMP/
  CALL/CALLA/CALLB/CALLD by #A, D or S, RET/RETA/RETB, CALLPA/CALLPB, JMPREL) and LOC.
- Everything else (ALTx, CORDIC, streamer, FIFO, smart pins, events, interrupts, locks, pixel
  and colour operations, the pin DIR/OUT/FLT/DRV groups) is named p-code operations.

Gaps:
- Cog and LUT execution are not modelled: a jump to an address below $400 lands in the hub
  space; the hardware call stack and the hub stack writes of CALLA/CALLB are not modelled
  (calls and returns are plain `call`/`return`); ALTx do not redirect the next instruction;
  SETQ block transfers and SKIP patterns are not followed; the 0-means-16 PTRx update index is
  not special-cased.
- With no fixed register ABI, functions take no parameters: flexspin's `arg01`/`result1` are
  cog registers whose addresses change per program.

Checked: all 357 encodings, with random operands over eight passes (2856 words), disassemble
to their own mnemonic; the processors.toml image (flexspin 7.x output) decompiles to the C it
was compiled from.
