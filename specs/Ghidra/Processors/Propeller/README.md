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
- The P1 has no stack; functions take no parameters and work on cog registers. The
  Propeller 2 (P2X8C4M64P) instruction set is not covered.

Checked: the CLI test image was hand-assembled from the manual's field layout; the decompiled
C matches the routine (loop, call, compare-and-move, hub write).
