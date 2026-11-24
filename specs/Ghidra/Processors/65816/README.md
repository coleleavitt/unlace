# WDC 65816 / 65C816

Vendored from achan1989/ghidra-65816 (https://github.com/achan1989/ghidra-65816),
commit b70cb21d5297ebae8dee54e5d140bacd612d670c, MIT License (`LICENSE`, copied from upstream). `data/languages`
holds the upstream files unchanged.

`65816:LE:16:default` (SNES, Apple IIgs): the program counter is modelled as the
24-bit PBR:PC; the M, X and E status bits are decode-context fields that select
8- or 16-bit accumulator/index operands and emulation mode, defaulting to native
mode with 16-bit registers (all 0). `REP`/`SEP`/`XCE` update them for the
instructions that follow. The opinion file names Ghidra's SNES ROM loader,
which unlace does not have; raw images use `--raw-image --target`.
