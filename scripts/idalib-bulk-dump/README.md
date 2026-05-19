# IDA Pro idalib Bulk Decompilation Driver

Scripts that drive IDA Pro 9.3sp1's `idalib` Python embedding API to
bulk-decompile every function of every plugin/processor/loader binary
into `references/ida/<category>/<name>/all/*.c`.

## How

1. `dump_one_binary.py` — Python script using `idapro` (idalib wheel).
   Loads binary, runs auto-analysis, then iterates `ida_funcs.get_func_qty()`
   and calls `ida_hexrays.decompile()` on each. Writes one `.c` per function.
   Speed: ~1000-1500 fn/sec on small modules, ~40 fn/sec on Hex-Rays
   decompiler plugins (because each function is itself huge).

2. `dump_all_targets.sh`, `dump_fresh_targets.sh`, `dump_remaining.sh`,
   `dump_last.sh` — bash drivers that walk through the priority list and
   call the Python script for each binary. Skips already-dumped dirs.

## Requirements

- IDA Pro 9.3sp1 installed at `~/Downloads/Software/IDAPro/ida-pro-9.3sp1/`
- idalib Python wheel activated:
  ```
  python3 ~/Downloads/Software/IDAPro/ida-pro-9.3sp1/idalib/python/py-activate-idalib.py
  ```
- Environment exported during run:
  ```
  export PYTHONPATH=~/Downloads/Software/IDAPro/ida-pro-9.3sp1/idalib/python
  export LD_LIBRARY_PATH=~/Downloads/Software/IDAPro/ida-pro-9.3sp1
  ```

## Output

All dumps land in `references/ida/<cat>/<name>/all/<safe_name>.c`.
The `references/` directory is gitignored — these dumps live on disk only.

A summary inventory is generated as `references/ida/INVENTORY.md`.

## Coverage (as of last run)

- **17 processors**: arc, arm, cli, dalvik, ia, java, mc68k, mips, nds32,
  nec850, pc, ppc, riscv, s390, sh3, sparc, tricore, wasm, xtensa
- **6 Hex-Rays decompilers** (hexx64, hexarm, hexmips, hexppc, hexrv,
  hexarc, hexv850) — these are the highest-value reference for parity work
- **12 loaders**: dex, dyld, elf, javaldr, macho/macho_full, n64rom, pe,
  snes, wasmldr, archldr_zip, coff
- **Debugger plugins**: bochs_user, dalvik_user, gdb_user, ios_user,
  linux_user, pin_user, replay_user, xnu_user
- **EH/runtime plugins**: dwarf, eh34, eh_parse, dscu, golang, goomba,
  idaclang, makesig, objc, patfind, pdb, rtti, rust, strings, svdimport,
  swift, tds, bdescr, xref_graph
- **Core**: ida-binary, idalib, idat, libidalib, libidalib32, libida32,
  ida_mcp_server, idapython3

**Total: ~238K decompiled C functions, ~1.2 GB on disk.**
