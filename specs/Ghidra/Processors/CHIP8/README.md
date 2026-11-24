# CHIP-8 and SUPER-CHIP

Written for unlace from the public instruction-set descriptions: the RCA COSMAC VIP
instruction manual (1978) for CHIP-8 and Erik Bryntse's SUPER-CHIP 1.1 notes (1991).
No prior SLEIGH module was used.

Languages:
- `CHIP8:BE:16:VIP`: the original COSMAC VIP interpreter. `8XY1`/`8XY2`/`8XY3` clear VF,
  `8XY6`/`8XYE` shift VY into VX, `BNNN` jumps to NNN+V0, and `FX55`/`FX65` advance I by X+1.
- `CHIP8:BE:16:SCHIP`: SUPER-CHIP 1.1. Shifts act on VX in place, `BXNN` jumps to XNN+VX,
  `FX55`/`FX65` leave I unchanged, plus `00CN`, `00FB`-`00FF`, `FX30`, `FX75`, `FX85`.

Modelled: every instruction's register, I and memory effects; VF as carry (`8XY4`),
not-borrow (`8XY5`, `8XY7`) and shifted-out bit; skips as conditional branches over the
next 2-byte instruction; `2NNN`/`00EE` push and pop the return address on a 2-byte stack
in `ram` addressed by SP (the VIP kept it at 0xEA0); `FX33` stores the three BCD digits.

User-ops (no memory-visible semantics, or state outside the address space): `clearScreen`,
`machineCall` (`0NNN`), `random` (`CXKK`), `drawSprite` (returns the collision flag into VF),
`keyPressed`, `waitKey`, `fontAddress`/`bigFontAddress` (the font lives in the interpreter),
and the SUPER-CHIP scroll, resolution, exit and RPL-flag operations.

Gaps: XO-CHIP (4-byte `F000 NNNN`, planes, audio) and the CHIP-48 `FX55` I += X quirk are
not modelled. Programs load at 0x200; pass `--base 0x200` with `--raw-image`.

Oracle: manual vectors only (`crates/unlace-cli/tests/chip8.rs`).
