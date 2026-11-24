# Rockwell C39 / L39

Vendored from aleph-void/ghidra-rockwell-l39 (https://github.com/aleph-void/ghidra-rockwell-l39), commit df9c28fdc1107dccf636d95bded747ded610937f, Apache License, Version 2.0 (`LICENSE`, copied from upstream).
`data/languages` hold the upstream SLEIGH, processor, compiler
and ldefs files unchanged; upstream build files, scripts and tests are not vendored.

Languages: `RockwellL39:LE:16:default`, `default`.

Local modification: in `data/languages/RockwellL39.pspec` the comment "TRM §3.5" reads "TRM section 3.5". The decompiler's XML reader, a faithful port of Ghidra's C++ one, rejects bytes >= 0x80 in comments ("syntax error"), so the language could not be loaded. Nothing else in the upstream files changed.
