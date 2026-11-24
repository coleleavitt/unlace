# WDC 65816 / 65C816

Vendored from achan1989/ghidra-65816 (https://github.com/achan1989/ghidra-65816),
commit b70cb21d5297ebae8dee54e5d140bacd612d670c, MIT License (`LICENSE`, copied from upstream). `data/languages`
holds the upstream files with the local changes listed below.

`65816:LE:16:default` (SNES, Apple IIgs): the program counter is modelled as the
24-bit PBR:PC; the M, X and E status bits are decode-context fields that select
8- or 16-bit accumulator/index operands and emulation mode, defaulting to native
mode with 16-bit registers (all 0). `REP`/`SEP`/`XCE` update them for the
instructions that follow. The opinion file names Ghidra's SNES ROM loader,
which unlace does not have; raw images use `--raw-image --target`.

## Local changes (unlace)

- Immediate operands are constants. Upstream modelled `#imm` as a reference to
  the instruction bytes (`inst_start + 1`) that every instruction then read
  from memory, so the decompiler printed loads of the code bytes
  (`CONCAT11(dat_8002,dat_8001)`) instead of the value. The read-only users of
  those modes (ADC, AND, BIT, CMP, CPX, CPY, EOR, LDA, LDX, LDY, ORA, SBC) now
  take an operand value from `PRIMARY_OP_V8`/`V16`, `BIT_OP_V8`/`V16`,
  `CPXY_OP_V8`/`V16`, `LDX_OP_V8`/`V16` and `LDY_OP_V8`/`V16` in `658xx.sinc`,
  whose immediate form exports `*[const]`. The `RefImm*` tables and the
  `PRIMARY_OP`, `BIT_OP`, `CPXY_OP`, `LDX_OP`, `LDY_OP` tables they fed are
  removed.
- `CPY` took its 8-bit form under `X=0` and its 16-bit form under `X=1` (the
  reverse of `CPX` and of the index-register width), so it compared only the
  low byte of `Y` with 16-bit index registers. The contexts are swapped.
