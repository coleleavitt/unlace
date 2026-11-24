# M6800 family (MC6800, MC6801, HD6301, MC68HC11)

Vendored from sigurasg/GhidraMC6800 (https://github.com/sigurasg/GhidraMC6800),
commit 713ae0232f6e2f67b67d6ea0cf9b4e7f6864a6b2, Copyright 2022-2025 Sigurdur
Asgeirsson, Apache License 2.0 (see the header of each file and the repository
NOTICE). `data/languages` and `data/manuals` are the upstream files unchanged.

| Language | Covers |
|---|---|
| `MC6800:BE:16:default` | MC6800, MC6802, MC6808 |
| `MC6801:BE:16:default` | MC6801, MC6803, HD6803 (D register, ABX, MUL, PSHX/PULX, ADDD/SUBD/LDD/STD, ...) |
| `HD6301:BE:16:default` | HD6301, HD6303 (adds AIM, OIM, EIM, TIM, XGDX, SLP) |
| `MC68HC11:BE:16:default` | MC68HC11 (Y register and the 0x18/0x1A/0xCD prefix pages, bit operations) |

Upstream checks the decode of every opcode with per-instruction disassembly
tests and the semantics with an emulator test suite per processor
(`src/test/java/is/sort/mc6800`).
