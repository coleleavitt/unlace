# TI TMS320C54x

Vendored from aleph-void/ghidra-tms320c54x (https://github.com/aleph-void/ghidra-tms320c54x), a fork of gabtremblay/ghidra-tms320c54x (https://github.com/gabtremblay/ghidra-tms320c54x), commit bef69d7c536cb097a491b51a3d54ffaedf6f1b7b, Apache License, Version 2.0 (`LICENSE`, `NOTICE`, copied from upstream).
`data/languages` hold the upstream SLEIGH, processor, compiler
and ldefs files unchanged except as listed below; upstream build files, scripts and tests are
not vendored.

## Local changes (unlace)

- `RPTB`/`RPTBD` decompile as loops. Upstream set `RSA`/`REA`/`BRAF` only, so a
  block repeat ran once. `RPTB` now marks the instruction after its block (`REA + 1`;
  the operand names the block's last word, so the last instruction's start is not
  known when `RPTB` decodes) with context (`rbafter`, `rbstart`). Reaching it with
  `BRAF` set and `BRC` non-zero counts `BRC` down and restarts the block, so a block
  runs `BRC + 1` times. The ordinary constructors are in a `with : phase=1` block
  under the two root constructors that add this.

Languages: `TMS320C54x:BE:16:default`, `default`.
