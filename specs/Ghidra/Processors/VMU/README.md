# Sega Dreamcast VMU (LC86K)

Vendored from aleph-void/Ghidra-VMU-Processor (https://github.com/aleph-void/Ghidra-VMU-Processor), a fork of RossMeikleham/Ghidra-VMU-Processor (https://github.com/RossMeikleham/Ghidra-VMU-Processor), commit 7528a82f81276161f953aca2c4c08d372dd21b46, MIT License (`LICENSE`, copied from upstream).
`data/languages` hold the upstream SLEIGH, processor, compiler
and ldefs files unchanged; upstream build files, scripts and tests are not vendored.

Languages: `LC8670:LE:8:VMU`, `default`, `LC8670:LE:8:VMU-dynamic`, `default`.

Local modification: the language ids `vmu:2:default` -> `LC8670:LE:8:VMU`, `vmu:2:dynamic` -> `LC8670:LE:8:VMU-dynamic` in `data/languages/vmu.ldefs` (The upstream ids vmu:2:default and vmu:2:dynamic have no endian or size field, so the decompiler rejected them as language ids). Nothing else in the upstream files changed.
