# Infineon C166 / XC166, ST10

Vendored from aleph-void/c166-ghidra-module (https://github.com/aleph-void/c166-ghidra-module), a fork of keyhana/c166-ghidra-module (https://github.com/keyhana/c166-ghidra-module), commit c544f0ad16f29f05e42b6f6e091af3cce9f801e3, MIT License (`LICENSE`, copied from upstream).
`data/languages` and `data/manuals` hold the upstream SLEIGH, processor, compiler
and ldefs files unchanged; upstream build files, scripts and tests are not vendored.

Languages: `C166:LE:16:default`, `tasking`, `C166:LE:16:CS`, `tasking`.

Local modification: the language id `C166:CS:LE:16:default` -> `C166:LE:16:CS` in `data/languages/c166.ldefs` (The upstream id C166:CS:LE:16:default has five parts, so the decompiler split it at the wrong colons and found no language). Nothing else in the upstream files changed.
