# Missing IDA Reference Dumps — Inventory & Priority

## Definitions

- **`.i64` exists** = IDA already decompiled the binary into a database; you can `idat` open it and extract pseudocode
- **`.i64` missing** = no pre-decompiled database; you'd need to decompile yourself (idat headless or manually)
- **`research/decompiled-references/ida/.../all/` exists** = already extracted into the repo as C-like source dumps

The goal is to know what to do next: nothing if both exist, "open existing .i64" if just .i64 exists, or "decompile fresh" if neither exists.

---

## What you already have in `research/decompiled-references/ida/`

Big dumps (already extracted):
- `idalib/all` — 60,174 C files
- `ida-binary/all` — 20,267 C files
- `binary/decompiler/all` — 8,303 C files
- `binary/dump-9.3sp1/all` — 8,401 C files
- `binary/ida_dump/all` — 7,764 C files
- `loaders/dyld/all` — 2,415 C files
- `processors/pc/all` — 1,583 C files
- `processors/arm/all` — 1,423 C files
- `plugins/objc/all` — 768 C files
- `loaders/pe/all` — 567 C files
- `plugins/golang/all` — 256 C files
- `plugins/rtti/all` — 212 C files
- `loaders/macho/` — 40 C files (partial — selected named funcs only)

Plus the new `research/ida-hexrays-docs/` (this session): 55 changelogs + 33 PDFs + 13 docs HTML.

---

## Priority 1 — Decompile these next (high value, NOT YET decompiled)

These have **no `.i64`** and **no `research/decompiled-references/ida/.../all/` dump**. Need fresh decompilation.

### Critical for unlace's roadmap

| Binary | Why | Effort |
|--------|-----|--------|
| **`idat`** (top-level) | Headless CLI driver. Direct reference for `unlace`'s CLI mode + batch processing + IDC/Python invocation entry points | M |
| **`libidalib.so`** | The newer headless library/embedding API. Direct reference for `idalib`-style usage of unlace. Tells you the public C++ API surface for embedded use | M |
| **`plugins/idapython3.so`** | The IDAPython runtime — how Python calls IDA's C++ API. Only dump if SDK source insufficient | L (start with SDK) |

### Debuggers (entirely missing in unlace)

| Binary | Why | Effort |
|--------|-----|--------|
| **`plugins/gdb_user.so`** | GDB stub protocol implementation — critical for embedded/kernel debug | M |
| **`plugins/linux_user.so`** | Linux ptrace-based local debugger | M |
| **`plugins/ios_user.so`** | iOS debugserver protocol | L (Apple-specific) |
| **`plugins/xnu_user.so`** | macOS kernel debugger | L (Apple-specific) |
| **`plugins/bochs_user.so`** | Bochs emulator integration — safe malware analysis | M |
| **`plugins/replay_user.so`** | Replay debugger | L |
| **`plugins/pin_user.so`** | Intel Pin DBI integration | L |
| **`plugins/dalvik_user.so`** | Android Dalvik VM debugger | M |
| **Stubs** (`linux_stub`, `win32_stub`, `mac_stub`, `arm_mac_stub`, `armlinux_stub`) | Remote debugger stub protocols | M each |

### Loaders missing dumps

| Binary | Why | Effort |
|--------|-----|--------|
| **`loaders/macho.so`** | Need full dump (you only have partial 40 files). Mach-O is critical for Apple RE | M |
| **`loaders/pe.so`** | Need full dump (you have `research/decompiled-references/ida/loaders/pe/all` 567 files — verify this matches latest) | S |

### Plugins not yet referenced

| Binary | Why | Effort |
|--------|-----|--------|
| **`plugins/objc.so`** | Direct binary (you have 768-file reference but verify completeness against 9.3sp1) | S |
| **`plugins/rtti.so`** | Direct binary (you have 212-file reference) | S |
| **`plugins/strings.so`** | String detection algorithm | S |
| **`plugins/svdimport.so`** | ARM SVD register definition import | S |
| **`plugins/ida_mcp_server.so`** | MCP server plugin (LLM integration) | M |
| **`plugins/picture_search.so`** | Image search in binaries | S |
| **`plugins/comhelper.so`** | COM helper plugin | S |
| **`plugins/callee.so`** | Callee resolution helper | S |
| **`plugins/unpack.so`** | Unpacker helper | S |
| **`plugins/nextfix.so`** | Nextfix plugin | S |
| **`plugins/uiswitch.so`** | UI switch | S |
| **`plugins/samaout.so`** | SAM a.out loader/plugin | S |
| **`plugins/makeidt.so`** | IDT generator (signatures) | S |

---

## Priority 2 — Already has `.i64`, just need to open and extract

These have IDA-decompiled `.i64` databases sitting next to them but no `research/decompiled-references/ida/.../all/` extracted dump yet. Easy: open `.i64` and run "dump all functions" → C files.

### Plugins with `.i64` ready to extract

| Binary | What it does |
|--------|--------------|
| `plugins/bdescr.so` | Binary descriptor (Java/PE/etc metadata) |
| `plugins/dbg.so` | Main debugger framework |
| `plugins/dscu.so` | dyld_shared_cache utility |
| `plugins/dwarf.so` | DWARF debug info |
| `plugins/eh34.so` | C++ exception handler (MSVC x64) |
| `plugins/eh_parse.so` | EH frame parser |
| `plugins/golang.so` | Go runtime analysis |
| `plugins/goomba.so` | Golang protobuf descriptor analyzer |
| `plugins/hexx64.so` | Hex-Rays x86_64 decompiler **(most valuable)** |
| `plugins/idaclang.so` | LLVM/clang type parser |
| `plugins/makesig.so` | FLIRT signature generator |
| `plugins/patfind.so` | Pattern finder |
| `plugins/pdb.so` | PDB symbol loader |
| `plugins/rust.so` | Rust metadata parser |
| `plugins/swift.so` | Swift metadata parser |
| `plugins/tds.so` | Borland TDS debug format |
| `plugins/xref_graph.so` | Xref graph (9.2+) |

### Loaders with `.i64` ready

Almost everything except `macho.so` and `pe.so`. The ones most relevant to extract:

| Binary | Why |
|--------|-----|
| `loaders/elf.so` | ELF — verify your unlace ELF loader matches |
| `loaders/dex.so` | Android DEX |
| `loaders/javaldr.so` | Java .class/.jar |
| `loaders/wasmldr.so` | WebAssembly |
| `loaders/n64rom.so` | N64 ROM |
| `loaders/snes.so` | SNES ROM |
| `loaders/coff.so` | COFF (older PE) |
| `loaders/archldr_zip.so` | ZIP archive loader |

### Procs with `.i64` ready

| Binary | Why |
|--------|-----|
| `procs/mips.so` | MIPS — critical reference |
| `procs/ppc.so` | PowerPC |
| `procs/riscv.so` | RISC-V |
| `procs/sparc.so` | SPARC |
| `procs/tricore.so` | TriCore (auto) |
| `procs/wasm.so` | WebAssembly |
| `procs/xtensa.so` | Xtensa |
| `procs/dalvik.so` | Dalvik bytecode |
| `procs/java.so` | Java bytecode |
| `procs/cli.so` | .NET CLI |
| `procs/mc68k.so` | M68k |
| `procs/nec850.so` | V850/RH850 (9.3 has new decompiler — high value) |
| `procs/nds32.so` | Andes NDS32 (9.3 new arch) |
| `procs/s390.so` | IBM Z |
| `procs/sh3.so` | SuperH |
| `procs/arc.so` | ARC |
| `procs/ia.so` | Intel IA-64 (Itanium) |
| `procs/mc6816.so` | M68HC16 |

---

## Priority 3 — Source / config files (NEVER decompile; use as-is)

Already shipped as plaintext in the IDA install. Just copy directly into `research/`:

### IDAPython source (this is the gold)

```
ida-pro-9.3sp1/python/*.py   # 55 files — the actual IDAPython modules
```

Specifically:
- `idc.py` — legacy IDC API ported to Python
- `idautils.py` — high-level utility functions
- `idaapi.py` — module aggregator
- `ida_bytes.py` — byte/string read/write
- `ida_funcs.py` — function manipulation
- `ida_name.py` — symbol naming
- `ida_xref.py` — cross-references
- `ida_kernwin.py` — UI integration
- `ida_typeinf.py` — type system
- `ida_dbg.py` — debugger API
- `ida_hexrays.py` — decompiler API
- `ida_segment.py` — segment/section
- `ida_lumina.py` — Lumina protocol
- `ida_loader.py` — loader API

**This is the IDAPython compatibility checklist for unlace.**

### SDK headers (the public C++ API)

```
idasdk93/include/*.hpp      # public C++ API
idasdk93/plugins/idapython/apidoc/*.py   # API documentation in Python form
idasdk93/ldr/               # sample loader implementations
idasdk93/module/            # sample processor module implementations
idasdk93/dbg/               # sample debugger backend implementations
```

### Config files

```
ida-pro-9.3sp1/cfg/*.cfg    # 97 config files
```

Highest value:
- `hexrays.cfg` — decompiler options + opcode table
- `ida.cfg` — main config
- `idapython.cfg` — Python setup
- `dbg_gdb.cfg` — GDB stub protocol options
- `dbg_bochs.cfg` — Bochs integration
- `pdb.cfg` — PDB loader options
- `dwarf.cfg` — DWARF loader options
- `macho.cfg` — Mach-O loader options
- `pe.cfg` — PE loader options
- `goodname.cfg` — STL class name simplification rules
- `noret.cfg` — non-returning functions list
- `clang.cfg` — LLVM/clang options
- Per-arch: `aarch64.xml`, `arm-core.xml`, `mips*.xml`, `64bit-*.xml`

---

## Priority 4 — Do NOT decompile (legal/ethical)

| File | Why skip |
|------|----------|
| Anything `*keygen*` | Circumvents license |
| `idapro.hexlic` | License key |
| License server binaries | Circumvents license |
| `lumina_server` (the local one) | Already have a clean implementation in unlace |
| Qt libraries (`libQt6*.so`) | Third-party, unrelated |
| `libclang.so` | Third-party LLVM |
| `libdwarf.so` | Third-party |
| `libz3.so` | Third-party Z3 solver |
| `librustdemangle.so` | Third-party Rust crate |
| `libSwiftDemangle.so` | Third-party Swift toolchain |

---

## Recommended sequence

### Day 1 (highest ROI, no decompilation needed)

1. Copy `ida-pro-9.3sp1/python/*.py` → `research/ida-hexrays-docs/scripting/idapython/`
2. Copy `ida-pro-9.3sp1/cfg/*.cfg` → `research/ida-hexrays-docs/config/`
3. Copy `idasdk93/include/*.hpp` → `research/ida-hexrays-docs/sdk/include/`
4. Copy `idasdk93/plugins/idapython/apidoc/*.py` → `research/ida-hexrays-docs/sdk/idapython-apidoc/`

This is **maybe 30 MB** of legit public reference material that gives you 80% of the IDAPython compat roadmap.

### Day 2 (extract from existing `.i64` databases)

Open the `.i64` files for the **3 most valuable** plugins headlessly with `idat`:
1. `plugins/hexx64.so.i64` (Hex-Rays x86_64 decompiler — most valuable single reference)
2. `plugins/idaclang.so.i64` (LLVM type parser)
3. `plugins/dbg.so.i64` (debugger framework)
4. `plugins/dwarf.so.i64` (DWARF processing)
5. `plugins/pdb.so.i64` (PDB processing)

For each, save as `research/decompiled-references/ida/plugins/<name>/all/*.c`.

### Day 3 (decompile fresh — the genuinely missing ones)

Fresh decompile (no `.i64` exists):

1. **`idat`** (priority 1)
2. **`libidalib.so`** (priority 1)
3. **`plugins/idapython3.so`** (priority 1)
4. **`loaders/macho.so`** (priority 1 — complete the partial)
5. **`plugins/gdb_user.so`**
6. **`plugins/linux_user.so`**
7. **`plugins/bochs_user.so`**
8. **`plugins/objc.so`** (verify against existing 9.3sp1 binary)
9. **`plugins/rtti.so`** (verify against existing)
10. **`plugins/strings.so`**

### Day 4 (procs — extract from existing `.i64`)

The high-value procs that already have `.i64`:
1. `procs/mips.so`
2. `procs/ppc.so`
3. `procs/riscv.so`
4. `procs/nec850.so` (V850 — new decompiler in 9.3)
5. `procs/wasm.so`
6. `procs/xtensa.so`
7. `procs/cli.so` (.NET — needed because unlace has no .NET support)
8. `procs/tricore.so`

### Day 5 (loaders — extract from existing `.i64`)

1. `loaders/elf.so` (verify against unlace's)
2. `loaders/dex.so`
3. `loaders/javaldr.so`
4. `loaders/wasmldr.so`

---

## Summary

**What you already covered:** the heavy core (idalib, ida UI, decompiler), the most-cited loaders (PE, dyld), the most-cited plugins (ObjC, Go, RTTI), the two most-cited processors (PC, ARM), and the entire 24-year changelog corpus + 33 reference PDFs.

**What's most missing right now:**

1. **`idat` + `libidalib.so`** — headless library reference; you need this for unlace's headless mode parity
2. **The IDAPython `.py` source files** (free, just copy them)
3. **The SDK headers** (free, just copy them)
4. **The config files** (free, just copy them)
5. **`macho.so` (full)** — completes the partial 40-file dump
6. **Debugger plugins** — `gdb_user`, `linux_user`, `bochs_user` (you have zero debugger reference today)
7. **Hex-Rays decompiler plugins** — `hexx64.so`, `hexarm.so`, `hexmips.so`, etc. (these have `.i64` ready; just extract)
8. **More procs as references** — mips, ppc, riscv, nec850, wasm, cli, tricore

**Don't bother with:** keygens, licenses, third-party libs, anything not under Hex-Rays copyright that we haven't established licensing for.
