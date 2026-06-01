# IDA Pro idalib Bulk Decompilation Driver

Scripts that drive IDA Pro 9.3sp1's `idalib` Python embedding API to
bulk-decompile every function of every plugin/processor/loader binary
into `research/decompiled-references/ida/<category>/<name>/all/*.c`.

## How

1. `dump_many_binary.py` — preferred fast path for broad sweeps. It opens an
   existing `.i64`/`.idb` and calls `ida_hexrays.decompile_many()`, IDA's batch
   decompile-all API. By default this emits one aggregate
   `all/__decompile_many.c` for non-library functions only, which avoids
   spending minutes on PLT/runtime/vendor-library noise.

2. `dump_one_binary.py` — precise/resumable per-function fallback using
   `idapro` (idalib wheel).
   Loads binary, runs auto-analysis, then iterates `ida_funcs.get_func_qty()`
   and calls `ida_hexrays.decompile()` on each. Writes one `.c` per function.
   Speed: ~1000-1500 fn/sec on small modules, ~40 fn/sec on Hex-Rays
   decompiler plugins (because each function is itself huge). This path is
   intentionally slower and should not be used for huge vendor/support
   libraries such as `libclang.so` or `libz3.so`.

3. `dump_all_targets.sh`, `dump_fresh_targets.sh`, `dump_remaining.sh`,
   `dump_last.sh` — bash drivers that walk through the priority list and
   call the Python script for each binary. Skips already-dumped dirs.

## Efficient workflow

- If `<module>.i64` already exists, copy it to `/tmp` and run
  `dump_many_binary.py` on the copy. This avoids rebuilding the IDA database and
  avoids idalib write/open issues against the install tree.
- If there is no `.i64`, build one once with `idat -A -B -L<log> -o/tmp/name.i64
  <binary>`, then run `dump_many_binary.py`.
- Only use `dump_one_binary.py` when per-function files are needed for a small
  module or for a targeted resume. It loops every function, including library
  functions, so it is the wrong default for large support libraries.
- Do not bulk-decompile third-party support libraries by default
  (`libclang.so`, `libz3.so`, Qt, etc.). They dominate runtime and disk but add
  little IDA/Hex-Rays implementation signal.

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

All dumps land in `research/decompiled-references/ida/<cat>/<name>/all/<safe_name>.c`.
The legacy `references/` scratch directory is gitignored. The canonical decompiled-reference corpus lives under `research/decompiled-references/`.

A summary inventory is generated as `research/decompiled-references/ida/INVENTORY.md`.

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
