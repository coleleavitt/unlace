# Uxn

Written for unlace from the Uxntal reference (https://wiki.xxiivv.com/site/uxntal_reference.html:
opcode table, modes and per-opcode stack effects). No prior SLEIGH module exists.

Language: `Uxn:BE:16:default`. ROMs load at 0x100; pass `--base 0x100` with `--raw-image`.

The constructors in `uxn.slaspec` were generated from the opcode table: each of the 31
stack opcodes in its 8 forms (short `2`, keep `k`, return `r`), plus `BRK`, `JCI`, `JMI`,
`JSI` and the four `LIT` forms.

Modelled:
- The working stack is the `wst` space (256 bytes, pointer `WP`) and is the compiler spec's
  stack, so values pushed and popped inside one routine become locals and fold away. The
  return stack is the `rst` space (pointer `RP`). Shorts are big-endian on both stacks.
- Keep mode reads its operands without moving the pointer; return mode swaps the stacks.
- `EQU`/`NEQ`/`GTH`/`LTH` push one byte in both widths, `JCN` pops a byte condition,
  `LDZ`/`STZ`/`LDR`/`STR`/`DEI`/`DEO` take a byte address, `LDA`/`STA` a short one; byte-mode
  `JMP`/`JCN`/`JSR` are relative to the next instruction, short-mode ones absolute; `DIV` by
  zero pushes 0; `SFT` shifts right by the low nibble then left by the high nibble.
- `JMP2r` is a return; `JSR`/`JSI` are calls; `BRK` ends the vector (a return).

User-ops: `deviceIn` (`DEI`) and `deviceOut` (`DEO`); the Varvara devices are not modelled.

Gaps: a subroutine's net effect on its caller's working stack is not modelled. The decompiler's
call model assumes a callee leaves the caller's frame alone, so a value a callee leaves on the
stack reads as an uninitialised local after the call; decompile vectors and leaf code for exact
results. `JSR`/`JSI` do not write their return address to `rst` (the call op carries it) while
`JMP2r` still pops it, so `RP` is declared unaffected across calls.

Oracle: manual vectors only (`crates/unlace-cli/tests/uxn.rs`).
