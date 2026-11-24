# STM8

Vendored from esaulenka/ghidra_STM8 (https://github.com/esaulenka/ghidra_STM8),
commit 45b709730100ed502dcc8a2e2a987a6b4019b47b, Apache License 2.0 (`LICENSE`, copied from upstream).
`data/languages` holds the upstream files unchanged.

| Language | Use |
|---|---|
| `STM8:BE:16:default` | medium memory model: 16-bit pointers; clearer output for images up to 32 KiB of flash |
| `STM8:BE:24:default` | large memory model: 24-bit far pointers and `CALLF`/`RETF` across the whole address space |
