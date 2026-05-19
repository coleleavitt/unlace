# Day 1 Imports — What was copied (zero decompilation needed)

All material from `~/Downloads/Software/IDAPro/ida-pro-9.3sp1/` and
`~/Downloads/Software/IDAPro/idasdk93/` that ships as text source.
No reverse engineering — these are public SDK files.

## Inventory added today

| Folder | Count | Source | What it is |
|--------|-------|--------|------------|
| `scripting/idapython/` | 55 .py files | `ida-pro-9.3sp1/python/` | The actual IDAPython modules (`idc.py`, `idautils.py`, `idaapi.py`, `ida_funcs.py`, etc.) — exact API surface that scripts call |
| `config/` | 146 files | `ida-pro-9.3sp1/cfg/` | All IDA config files (97 .cfg + 49 .xml) — `hexrays.cfg`, `goodname.cfg`, `noret.cfg`, `dbg_gdb.cfg`, per-arch system register XML, etc. |
| `sdk/include/` | 71 .hpp/.h | `idasdk93/include/` | Public C++ SDK headers — `hexrays.hpp`, `ida.hpp`, `bytes.hpp`, `loader.hpp`, `idp.hpp`, `dbg.hpp`, etc. |
| `sdk/idapython-apidoc/` | 22 .py | `idasdk93/plugins/idapython/apidoc/` | API documentation stubs in Python form |
| `sdk/idapython-swig/` | 52 .i | `idasdk93/plugins/idapython/swig/` | **SWIG interface files — the EXACT C++↔Python binding spec for every IDAPython module** |
| `sdk/idapython-pywraps/` | 85 files | `idasdk93/plugins/idapython/pywraps/` | C++ wrapper layer between Python and IDA core |
| `sdk/idapython-examples/` | 152 files | `idasdk93/plugins/idapython/{api-examples,examples}/` | Real IDAPython scripts to test compat against |
| `sdk/loaders/` | 115 files | `idasdk93/ldr/` | Sample loader implementations (ELF, COFF, AIF, AOF, etc.) |
| `sdk/modules/` | 463 files | `idasdk93/module/` | Sample processor modules (6502, ARM, AVR, ARC, M68k, etc.) — **the per-arch reference for how IDA models architectures** |
| `sdk/dbg/` | 87 files | `idasdk93/dbg/` | Sample debugger backend implementations |
| `sdk/plugins/` | 662 files | `idasdk93/plugins/` | All SDK example plugins (vds1-vds20 = Hex-Rays sample plugins, findcrypt2, choose, custview, etc.) |

**Total added today: ~1,910 source files (~70 MB additional).**

## Why this matters most for unlace

The **`sdk/idapython-swig/*.i`** files are the single most valuable thing.
They are the formal SWIG declarations of every IDAPython binding. If unlace
implements an IDAPython compat layer (Tier 1 priority from the gap analysis),
these are the authoritative spec for what each function takes, returns, and
what its semantics are.

Combined with `scripting/idapython/*.py` (the Python-side bindings) and
`sdk/include/*.hpp` (the underlying C++ API), unlace has the complete blueprint
to implement IDAPython compat without ever decompiling a single byte.

## The Hex-Rays SDK sample plugins (`sdk/plugins/vds1` through `vds20`)

These are the official Hex-Rays-published examples of how to use the decompiler
API. Each one demonstrates a different aspect:

| Sample | What it demonstrates |
|--------|---------------------|
| vds1 | Basic decompilation invocation |
| vds2 | Ctree visitor pattern |
| vds3 | Ctree node creation / modification |
| vds4 | hxe_func_printed event |
| vds5 | Custom citem comments / labels |
| vds6 | Microcode inspection |
| vds7 | Custom keyboard actions in pseudocode |
| vds8 | User-defined call (UDC) handlers |
| vds9 | Microcode hooks / custom optimizations |
| vds10-vds20 | Advanced patterns including custom microcode optimizers |

These ARE the reference for unlace's plugin architecture. Reading them tells
you exactly what events Hex-Rays exposes, what data structures plugins can
manipulate, and what the canonical plugin lifecycle looks like.

## What's NOT here (still needs decompilation)

Per the `MISSING_DUMPS_INVENTORY.md` checklist:

1. **`idat`** (headless CLI driver) — not yet decompiled
2. **`libidalib.so`** (newer headless library) — not yet decompiled
3. **`plugins/idapython3.so`** (Python runtime) — start with SDK first
4. **`loaders/macho.so`** (only have 40-file partial dump) — needs full extraction
5. **Debugger plugins**: `gdb_user.so`, `linux_user.so`, `bochs_user.so`, etc. — not yet decompiled
6. **Hex-Rays decompiler plugins**: `hexx64.so`, `hexarm.so`, `hexmips.so`, etc. — `.i64` exists, extract via `idat`
7. **Procs as references**: mips, ppc, riscv, nec850, wasm, cli, tricore — `.i64` exists, extract
