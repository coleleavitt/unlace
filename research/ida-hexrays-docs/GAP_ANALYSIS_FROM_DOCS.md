# Gap Analysis: Unlace vs. IDA/Hex-Rays (Derived from 55 Changelogs + 33 PDFs)

Compiled by reading every IDA release-notes page from 4.6 (2002) through
9.3sp2 (2026), Guilfanov's BlackHat 2018 "Decompiler Internals: Microcode"
keynote, the IDA Pro Book 2nd edition table of contents, and Igor's Tip of
the Week seasons 1-3 (~156 tips total).

## How to read this

Each item is rated:
- **✅ Have it** — unlace has equivalent feature, possibly with different naming
- **🟡 Partial** — unlace has substrate but not the user-facing feature
- **❌ Gap** — unlace has nothing in this area

Priorities reflect *user-perceived* impact, not implementation difficulty.

---

## Tier 1 — Things IDA users would notice the day they switch

### A. UI / Workflow (we have ZERO UI right now)

| Feature | Status | Where in IDA |
|---------|--------|--------------|
| Disassembly view | ❌ | core, since 1.0 |
| Pseudocode view (decompiler output) | ❌ | core, since 2.0 (Hex-Rays) |
| Graph view (CFG with edges) | ❌ | 4.7+ |
| Hex view | ❌ | core |
| Functions list with folders | ❌ | 5.6+ |
| Names / Imports / Exports / Strings windows | ❌ | core |
| Local Types editor (replaces Structures+Enums in 8.x) | ❌ | core; rewritten in 8.4 |
| Stack frame view | ❌ | core |
| Cross-references tree + graph | ❌ | 9.2+ (Xref Tree/Graph), older Xref window |
| Output window with logging | ❌ | core |
| Notepad / database notes | ❌ | core |
| Bookmarks | ❌ | core |
| Microcode viewer (interactive!) | ❌ | 9.2+ |
| Type library inspector | ❌ | 8.4+ |
| Jump Anywhere fuzzy nav | ❌ | 9.2+ |
| Command palette | ❌ | 8.0+ |
| Unified location history (back/forward) | ❌ | 9.2+ |
| Synced views (disasm ⇄ pseudocode ⇄ hex) | ❌ | core |
| Function call hierarchy view | ❌ | 9.2+ |
| Mini-graph overview pane | ❌ | core |
| Dark theme | ❌ | 7.0+ |
| Themable colors | ❌ | core |
| User-customizable shortcuts | ❌ | core |
| Configurable desktop layouts | ❌ | 6.0+ |

**Implication**: unlace today is a CLI that emits C-like text. To be a *tool people use professionally* it needs at minimum: disassembly view, pseudocode view, graph view, functions list. Either a Qt-style native GUI, a TUI like Cursive/Ratatui, OR (the pragmatic option) tight VSCode/Zed integration via an LSP-like protocol.

### B. Scripting & Automation

| Feature | Status | Notes |
|---------|--------|-------|
| IDAPython compat layer | ❌ | The single highest-leverage item — every IDA script in existence assumes this |
| IDC scripting | ❌ | Legacy but still common in older malware analysis tools |
| Headless API (`idalib`) | 🟡 | unlace already runs headless; needs Python wheel + idapro module name |
| Plugin loading via manifest (`ida-plugin.json`) | ❌ | 9.0+ |
| Auto-completion in REPL | ❌ | n/a |
| Custom calling conventions registerable from plugin | ❌ | 9.2+ |
| `cli_t` plugin command shell | ❌ | n/a |
| Microcode hooks (`hxe_*` events) | ❌ | The ENTIRE Hex-Rays plugin ecosystem hooks into these |
| Decompiler event callbacks | ❌ | every advanced deobfuscator uses these |

**Implication**: Without IDAPython compat, every public IDA script (FLIRT generators, MalwareAnalysis Toolkit, FindCrypt, etc.) is unusable. **This is the gating feature for professional adoption.**

### C. Debugger

| Feature | Status | Notes |
|---------|--------|-------|
| Local Windows x86/x64 debugger | ❌ | core |
| Local Linux x86/x64 debugger (ptrace) | ❌ | core |
| Local macOS Intel + ARM64 debugger | ❌ | core |
| Remote debugger server | ❌ | core |
| GDB stub support | ❌ | for embedded / kernel debugging |
| Bochs emulator integration | ❌ | for malware safe-analysis |
| WinDbg integration | ❌ | for kernel debug |
| Android Dalvik + native debugger | ❌ | 7.x+, updated through 8.4+ |
| iOS debugger via debugserver | ❌ | 7.x+ |
| Watch / Breakpoint manager | ❌ | core |
| Call stack view with unwind info | ❌ | 9.2+ (UNWIND_INFO-aware) |
| Stack view with auto-deref | ❌ | 9.3+ |
| Register watch with color-coded type-aware display | ❌ | 9.2+ |
| Process snapshot / appcall | ❌ | 5.6+ |
| ASLR disable option | ❌ | 8.4+ |
| Hardware breakpoints | ❌ | core |
| Conditional breakpoints | ❌ | core |
| Trace recording (record-replay) | ❌ | 5.0+ |
| Snapshot/load | ❌ | core |

**Implication**: A decompiler without a debugger is half a tool. The Bochs+Dalvik+gdbstub+iOS coverage in IDA is years of work.

### D. Loaders (binary input)

| Format | unlace Status | Notes |
|--------|---------------|-------|
| ELF | ✅ | broad coverage |
| PE / COFF | ✅ | Authenticode added recently |
| Mach-O + dyld_shared_cache | ✅ | covered |
| Mach-O fat binaries | 🟡 | the `__chain_starts`, slide info v5, arm64e versioning, kernelcache files all need attention |
| WASM module / object | ✅ | added today |
| Java .class / .jar / .dex / DEX containers | ✅ | Android coverage exists |
| Android ART / OAT / VDEX / boot.img | ✅ | exists |
| .NET PE (CLI metadata) | ❌ | major missing area; 9.3 has MethodSpec/ExtraData fixes implying real coverage |
| md1rom / md1img (Mediatek modem) | ❌ | 9.0+ |
| esp32_image | 🟡 | exists |
| Intel HEX | ✅ | |
| Motorola S-record | ❌ | embedded systems still use this |
| PSP / PS3 / PS4 / Switch firmware | ❌ | RE community uses these |
| ROM dumps (Sega / Nintendo) | ❌ | gaming hacking community |
| AIX XCOFF | ✅ | added today |
| HP-UX SOM | ❌ | dead but enterprise still has these |
| AmigaOS Hunk format | ❌ | minor but IDA has it |
| Symbian SIS, EPOC E32 | ❌ | dead but historical |
| OS/2 LX/LE | ❌ | dead |
| RAR-self-extracting / UPX-packed / ASPack / Themida | 🟡 | unpacker plugins exist in IDA; manual unpacking in unlace |
| zip archive with member selection | ❌ | for embedded firmware bundles |
| ar archive (.a static libs) | ✅ | added today |

**Implication**: Loaders are breadth and the breadth is real but with gaps. .NET and gaming/embedded specialty formats are visible missing categories.

### E. Debug-info formats

| Format | unlace Status | Notes |
|--------|---------------|-------|
| DWARF 2/3/4 | ✅ | core |
| DWARF 5 | 🟡 | partial; split-DWARF added today, expression evaluator added today |
| Microsoft PDB | ✅ | unlace has Symcache integration |
| Apple dSYM | ✅ | exists |
| CodeView (legacy MSVC) | ❌ | for very old binaries |
| GSYM (Apple compact symbols) | ❌ | newer Apple format |
| compact unwind | ✅ | added today |
| BTF (BPF Type Format) | ✅ | added today |
| SFrame | ✅ | added today |
| `.eh_frame` / `.eh_frame_hdr` | ✅ | exists |
| `.ARM.exidx` / `.ARM.extab` | 🟡 | needs verification |
| Mach-O `__TEXT,__unwind_info` | ✅ | added today |
| PDB with private symbols (PDB+source link) | ❌ | source-line debug |

### F. Type system

| Capability | Status | Notes |
|------------|--------|-------|
| Local type definitions (struct/union/enum) | 🟡 | infrastructure exists in `unlace-ir/tinfo` |
| Type libraries (`.til` files) | ❌ | TIL format is proprietary; we'd need an equivalent |
| C/C++ header parser | ❌ | IDA uses clang LibTooling (`idaclang`); we could use clang too |
| Objective-C `@interface`/`@protocol` parser | ❌ | 9.3+; iOS RE is huge |
| Anonymous types with hash names | 🟡 | exists but needs polish |
| Fixed-size structs with `__at(offset)` syntax | ❌ | 9.3+; needed for roundtrip C header export |
| Tuples (`__tuple`) for golang multi-return | ❌ | 9.2+ |
| Function prototype editor (Y key) | ❌ | UI feature |
| Custom calling conventions (`__usercall`, `__userpurge`) | 🟡 | exists in calling-convention pass; not user-editable |
| Variadic functions (`...`) | 🟡 | partial |
| Shifted pointers (pointer+const_offset as field accessor) | ❌ | distinct concept in IDA |
| Bitfields with explicit bit offsets | 🟡 | needs verification |
| Variable-sized structures (last array is flexible) | ❌ | for `struct hdr { int n; char data[]; }` patterns |
| Enum bitmasks with combo display | ❌ | for `O_RDONLY | O_CREAT` style |
| Symbolic constants (named values) | 🟡 | partial |

### G. Architecture coverage (lifters)

| Architecture | unlace | IDA |
|--------------|--------|-----|
| x86 / x64 | ✅ | ✅ |
| ARM A32/T32 | ✅ | ✅ |
| AArch64 | ✅ + PAC/BTI | ✅ |
| AArch64 SVE/SME (Apple kernels) | ❌ | ✅ 9.3 |
| AArch64 MTE intrinsics | ❌ | ✅ 9.3 (decompiler emits clean intrinsics) |
| AArch64 NEON crypto (AES/SHA1/SHA256/SHA512/SHA3) | 🟡 | ✅ 9.3 |
| AArch64 CSSC (CTZ/CNT/SMAX/SMIN/etc) | ❌ | ✅ 9.3 |
| MIPS (incl. MIPS16e2) | ✅ | ✅ |
| nanoMIPS | ❌ | ✅ 9.0+ |
| MIPS o64 ABI | ❌ | ✅ 9.2+ |
| PowerPC (32/64) | ✅ | ✅ |
| RISC-V | ✅ | ✅ + Xuantie THEAD + Andes V5 XAndesPerf |
| ARC | ✅ | ✅ |
| V850 / RH850 | ✅ | ✅ + dedicated decompiler in 9.3 |
| TriCore (TC1.x through TC4x) | 🟡 | ✅ + 50+ TC1.8 instructions |
| Renesas RX | 🟡 | ✅ |
| Renesas V850/RH850 (advanced) | 🟡 | ✅ deep coverage |
| SuperH (SH-2/3/4) | 🟡 | ✅ |
| M68k (68000, 68020, ColdFire) | 🟡 | ✅ |
| AVR (Atmel 8-bit) | ✅ | ✅ |
| 8051 / 8061 / 8065 / 8096 / 80196 | 🟡 | ✅ |
| PIC | 🟡 | ✅ + chipset definitions |
| MSP430 | ✅ | ✅ |
| Hexagon | ✅ | ✅ |
| Xtensa | ✅ | ✅ + xrefs for enums/struct members |
| TMS320C6 | 🟡 | ✅ + 32-bit SIMD |
| TMS320C28x | 🟡 | ✅ + FPU/VCU/TMU/FINTDIV |
| eBPF / sBPF | ✅ | ❌ (IDA has no native eBPF — unlace AHEAD here) |
| WASM | ✅ | ✅ 9.0+ |
| EVM (Ethereum) | ✅ | ❌ (unlace AHEAD) |
| SASS (NVIDIA GPU) | ✅ | ❌ (unlace AHEAD) |
| AMDGPU | ✅ | ❌ (unlace AHEAD) |
| Apple AGX (GPU) | ✅ | ❌ (unlace AHEAD) |
| 6502 / Z80 / STM8 | ✅ | partial |
| Lua bytecode | ✅ | ❌ (unlace AHEAD) |
| Dalvik VM | ✅ | ✅ + native debugger |
| Andes NDS32 V3 | ❌ | ✅ 9.3+ |
| Z80 | ✅ | ✅ |

**Implication**: unlace's lifter breadth is genuinely competitive — *ahead* on GPU/blockchain/bytecode architectures, comparable on mainstream, with notable depth gaps on Renesas/TriCore/specialty ARM variants and nanoMIPS.

---

## Tier 2 — Decompiler quality

### H. Microcode-level features (the things Guilfanov spent 20 years on)

| Feature | Status | Notes |
|---------|--------|-------|
| pcode/microcode IR with ~75 opcodes | ✅ | unlace has equivalent in `unlace-ir/src/op.rs` |
| Maturity levels (MMAT_ZERO → MMAT_FINAL) | ❌ | unlace runs passes but doesn't expose discrete maturity stages |
| Scattered operands (struct passed in regs+stack+fp) | 🟡 | partial via SysV eightbyte added today |
| Operand pairs (edx:eax as 64-bit value) | 🟡 | partial |
| Stack model with output-stkargs region | 🟡 | yes via `SpaceId::Stack`, needs verification |
| Helper functions for irreducible ops | 🟡 | `Callother` exists |
| `ext` opcode for unmodellable instructions | ✅ | `IrOp::Unimplemented` and `Callother` |
| Use-def chains computed lazily per query | ✅ | done in `analysis_context.rs` |
| Combiner rules (CMB1..CMB100+) — 64-bit sub, etc | 🟡 | algebraic_simplify exists, much sparser than IDA's |
| Cross-block 3-way compare rule (xh/xl) | ❌ | needed for 64-bit ops on 32-bit |
| Magic division detection (div by 641, etc.) | 🟡 | exists in `division_idiom.rs` |
| Constant folding across blocks | 🟡 | partial |
| Assertion injection ("eax=0 at jz eax target") | ❌ | IDA generates `mov 0, eax` assertions for jump targets |
| Microcode verifier (checks consistency after each pass) | 🟡 | needs explicit pass |
| Microcode value numbers (GVN) | ❌ | exists in 9.3 microcode viewer |
| Number origins (track where constants came from) | ❌ | 9.3+ |
| User-injectable microcode assertions ("inject this fact") | ❌ | 9.3+ critical for obfuscated code |
| User-deletable microcode instructions | ❌ | 9.3+ |

### I. Decompiler output quality

| Feature | Status | Notes |
|---------|--------|-------|
| Switch recovery (jump tables) | ✅ | exists |
| Switch recovery (comparison chain → switch) | ✅ | `if_chain_to_switch` |
| Switch recovery (cmov cascade) | ✅ | `cmov_switch` |
| Manual switch idiom (user-provided patterns) | ❌ | Tip #53 |
| Force call type / set callee address | ❌ | Tip #115/119/120 |
| User-defined call resolution | 🟡 | partial |
| Inlining (decompile callee body inline) | ❌ | `hxe_inlining_func` event in IDA |
| Force variable / Split variable | ❌ | 9.2+ |
| Map variables | ❌ | Tip #77 |
| Skippable instructions | ❌ | Tip #68; tell decompiler to ignore a specific insn |
| Decompiler annotations / comments | 🟡 | basic |
| Stock comments (reusable comment library) | ❌ | 9.3+ |
| `for` loop recovery from while | 🟡 | exists |
| Counted loop → `for(int i=0; i<N; i++)` | 🟡 | `hir_loop_recovery` added today |
| break/continue recovery | 🟡 | exists |
| goto minimization | 🟡 | exists |
| try/catch recovery (Itanium C++ EH) | 🟡 | classifier added; HIR emission pending |
| try/catch recovery (MSVC x64 C++ EH) | 🟡 | partial |
| Coroutine recovery (C++20, Rust async) | ❌ | high-effort |
| Variadic function recovery | 🟡 | exists |
| Block decompilation (Objective-C blocks) | 🟡 | needs verification |
| Lambdas (`std::function`, closure types) | ❌ | needed for modern C++ |
| Multiple return values (golang tuples) | 🟡 | `__tuple` infrastructure missing |
| Range condition optimization (`a-1 <= 5` → `1 <= a <= 6`) | 🟡 | KnownBits substrate exists |
| Forbid assignment propagation per-variable | ❌ | 9.3+ |
| Forbid assignment propagation per-statement | ❌ | 9.3+ |
| LOBYTE / HIBYTE / HIDWORD / BYTEn macros | 🟡 | substrate added |
| `__readfsqword(0x28u)` style intrinsics for GS/FS access | ❌ | recognizable canary load pattern |
| Decompile-all batch mode | ✅ | unlace already does this |
| Decompile-as-call (treat function as call) | ❌ | Tip #71 |
| Outlined function recognition | ❌ | LLVM optimization; Tip #106 |
| `_QWORD`/`_DWORD`/`_BYTE` IDA naming | 🟡 | partial |
| `a1`, `v1`, `result` variable naming | ✅ | exists |
| Type-aware constant rendering (named enums, etc) | 🟡 | partial |
| Float constants colorized | ❌ | 8.4+ |
| Symbolic constants in pseudocode | ❌ | Tip #149 |
| Pointer math in decompiler | 🟡 | Tip #138 |
| String literal recognition (PE, ELF, Mach-O strings) | ✅ | exists |
| String literal in pseudocode | ✅ | exists |
| C++ STL string manipulation simplification | ❌ | `goodname.cfg` in IDA |
| Print constants in C++ form (`true`/`false`/`nullptr`) | ❌ | 9.3 `HO_CPP_CONSTANTS` |
| Cast simplification `(cast1)*((cast2)x + N)` → `*((cast1*)x + N)` | ❌ | 9.3 |
| Stack-canary recognition | 🟡 | classifier exists |
| Magic division by 641, etc | 🟡 | partial |
| Hard-float ABI ARM32 | ❌ | 8.4+ |

### J. FLIRT / signatures / runtime recognition

| Feature | Status | Notes |
|---------|--------|-------|
| FLIRT signature matching | ✅ | exists in `unlace-flirt` |
| FLIRT signature creation (`makesig` / `pelf`) | 🟡 | partial |
| Pre-built signatures for glibc, musl, MSVCRT, mingw | ✅ | shipped |
| Pre-built signatures for Visual Studio 2017-2022 | ❌ | major shipping work |
| Pre-built signatures for Intel C++ Compiler | ❌ | |
| Go runtime signatures (1.20+ per minor version) | 🟡 | partial |
| Rust v0 mangler | ✅ | demangler exists |
| Rust legacy mangler | ✅ | exists |
| Itanium C++ demangler | ✅ | added recently |
| MSVC C++ demangler | 🟡 | needs verification |
| Swift demangler | 🟡 | needs verification |
| FLIRT Manager UI (try multiple signature sets) | ❌ | 9.0+ |
| `ida_feeds` mass signature application | ❌ | 9.0+ |
| Cloud-based signature service (Lumina) | ✅ | server + client |
| Library function annotation as comments | 🟡 | partial |
| C++ STL class simplification (goodname.cfg) | ❌ | |

### K. Lumina-specific

| Feature | Status | Notes |
|---------|--------|-------|
| Lumina v6 protocol client | ✅ | implemented this session |
| Lumina server | ✅ | implemented this session |
| Lumina metadata sync (pull/push) | 🟡 | partial |
| Lumina metadata score comparison | 🟡 | API exists in 9.3+ |
| Per-user authentication (local + remote) | ❌ | server-side feature |
| Vault Server (Hex-Rays Teams) integration | ❌ | enterprise feature |

---

## Tier 3 — Specialty / Niche

### L. Obfuscation / VM analysis

| Feature | Status | Notes |
|---------|--------|-------|
| Microcode-based VM deobfuscator | ❌ | the Virus Bulletin 2023 paper builds this on top of IDA |
| String deobfuscation in pseudocode | ❌ | Synacktiv 2023 paper |
| Anti-debug recognition | ❌ | important for malware |
| Packed binary unpacker (UPX, Themida, etc.) | ❌ | |
| Control-flow flattening recovery | 🟡 | `deflat.rs` exists |
| Opaque predicate detection | ❌ | |
| Bogus control flow removal | 🟡 | partial |

### M. Source-level integration

| Feature | Status | Notes |
|---------|--------|-------|
| Source-level debugging | ❌ | 7.x+; map DWARF source lines to debugger PC |
| Source line numbers in disassembly | ❌ | Tip #130 |
| Source file viewer | ❌ | |
| BinDiff-style binary diff | ❌ | external; Hex-Rays acquired BinDiff |
| Patch / hex diff between versions | ❌ | |
| Coverage overlay (run + show hit blocks) | ❌ | |

### N. Output / Export

| Feature | Status | Notes |
|---------|--------|-------|
| C header export (with roundtripping) | 🟡 | 9.3 adds `__fixed`/`__at` |
| Disassembly export (asm/lst/html/pdf) | 🟡 | text export exists |
| HTML export with hyperlinks | ❌ | Tip #145 |
| Graph print to PDF | ❌ | Tip #146 |
| IDC export of all data | ❌ | |
| Database notepad export | ❌ | |
| Functions list export | ❌ | |
| Type library export (.til equivalent) | ❌ | |

### O. UI specifics from Igor's Tips

These 156 specific tips are user-facing micro-features. Each maps to a small unit of work:

- Selection management (#03/#04), Highlight system (#05), Reanalysis (#09)
- Arrays (#10), Structures (#11, #12), Custom encodings (#13), Comments (#14, #15)
- Cross-references (#16, #17), Function calls graph (#19), Goto/navigation (#20)
- Calculator/expression evaluator (#21)
- Desktop layouts (#22), Color customization (#29), IDAUSR (#33)
- Dummy names (#34), Demangled names (#35), List view filtering (#36)
- Patching (#37), Hex view (#38), Export Data (#39), Decompiler basics (#40)
- Binary file loader (#41), Hex dump loader (#44), Disassembly operand representation (#46)
- Hints (#47), Searching (#48), Navigation band (#49), Execution flow arrows (#50)
- Custom calling conventions (#51), Special type attributes (#52)
- Manual switch idioms (#53), Shifted pointers (#54, #57)
- Using debug symbols (#55), String literals in pseudocode (#56)
- Auto function args comments (#59), Type libraries (#60)
- Status bars (#61), Custom type libraries (#62), Installer CLI options (#63)
- Full-screen mode (#64), Stack frame view (#65)
- Decompiler annotations (#66), helpers (#67), skippable instructions (#68)
- Split expression (#69), Multiple highlights (#70), Decompile as call (#71)
- Output window and logging (#73), Parameter identification and tracking PIT (#74)
- Working with unions (#75), Quick rename (#76), Mapped variables (#77)
- Auto-hidden messages (#78), Variable reuse handling (#79)
- Bookmarks (#80), Notepad (#81)
- Pseudocode formatting (#82), Default radix (#83)
- Array indexes (#84), Source-level debugging (#85), Function chunks (#86, #87)
- Stack strings (#88), En masse operations (#89), Suspicious operand limits (#90)
- Item flags (#91), Address details (#92)
- COM reverse engineering (#93), Variable-sized structures (#94), Offsets (#95)
- Loading additional files (#96), Xref depth (#97), Analysis options (#98)
- Enums (#99), Collapsing pseudocode parts (#100), Variadic calls (#101)
- Resetting decompiler info (#102), Sharing plugins (#103), Immediate search (#104)
- Custom-base offsets (#105), Outlined functions (#106), Multiple return values (#107)
- Raw memory accesses (#108), Hex view text encoding (#109)
- Self-relative offsets (#110), RVA (#113), Split offsets (#114)
- Set callee address (#115), Startup files (#116), Reset pointer type (#117)
- Structure creation in decompiler (#118), Force call type (#119), Set call type (#120)
- Search address range (#121), Manual load (#122), Opcode bytes (#123)
- Scripting examples (#124), Structure field representation (#125)
- Non-returning functions (#126), Changing function bounds (#127)
- String list (#128), Text search (#129), Source line numbers (#130)
- Advanced filters in choosers (#131), Hidden cross-references (#132)
- Alignment items (#133), ARM BL jumps (#134)
- Exporting disassembly (#135), Changing assembler syntax (#136)
- Processor modes and segment registers (#137), Pointer math in decompiler (#138)
- License borrowing (#139), Loading PDB types (#140), Parsing C files (#141)
- Mapping local types (#142), Fixing wrong address references in decompiler (#143)
- Macros and simplified instructions (#144), HTML export (#145), Graph printing (#146)
- "Stack frame is too big" (#147), "Call analysis failed" (#148)
- Symbolic constants in decompiler (#149), Extract function (#150)
- "Function frame is wrong" (#151), Force-creating functions (#152)
- Copying pseudocode to disassembly (#153), Synchronized views (#154)
- Splitting stack variables (#155), Firmware loading (#156)

---

## Tier 4 — What unlace has that IDA doesn't

To balance the gap analysis:

| unlace strength | IDA equivalent |
|-----------------|----------------|
| Native Rust safety + concurrency | C++, single-threaded analysis mostly |
| Free / open-source | $2,800-50,000/year |
| Deterministic output (BTreeMap-only in output crates) | nondeterministic in some passes |
| Golden fixture regression testing built-in | manual |
| Quality scoring subcommand | manual |
| LLVM-style AnalysisContext + invalidation | recent (9.x) microcode internals |
| KnownBits production solver | partial (value range optimization 9.3) |
| MemorySSA-lite | none |
| SCEV with nested AddRecs | none in public API |
| eBPF / sBPF / Wasm / EVM / GPU / Lua lifters | not in IDA |
| Path-sensitive nullability + taint analysis | IDA has no static analyzer |
| `cargo` workflow / CI integration | IDA is binary blob |
| Quality counters (33 metrics) | not in IDA |
| Plugin compilation via `cargo` | C++ SDK + custom build |
| Sandbox-friendly (no kernel hooks needed) | requires installation |

---

## Recommended 6-month priority order

Based on user-perceived impact ÷ effort:

### Month 1: IDAPython compat layer
Single highest-leverage item. Implement `idaapi`, `idc`, `idautils`, `ida_funcs`, `ida_bytes`, `ida_hexrays` as Python modules backed by unlace's domain API. Goal: unmodified `findcrypt.py`, `lazy_ida.py`, `class_informer.py`, `IDArling` should all run.

### Month 2: TUI front-end + LSP server
- `unlace tui` — Ratatui-based interactive view (disassembly + pseudocode + functions list + xrefs panel)
- `unlace lsp` — LSP-style protocol so VSCode/Zed extensions can integrate
- This makes unlace *usable* without a GUI

### Month 3: Debugger MVP
- Local Linux x86_64 / ARM64 via ptrace
- Local Windows x86/x64 via Debug API
- Remote stub (compatible with IDA's debugger protocol so existing scripts work)
- gdbstub frontend
- Breakpoints (sw / hw), step, continue, watch, call stack

### Month 4: Microcode user interaction
- Microcode viewer (text-mode dump per maturity stage)
- User-injectable assertions ("at this point, eax=0")
- User-deletable microcode instructions
- Microcode hook API (so plugins can transform IR)

### Month 5: Type system depth
- TIL-equivalent type library format
- Header file parser via clang LibTooling integration
- Tuples for golang multi-return
- `__fixed`/`__at` syntax for roundtrip C export
- Objective-C `@interface`/`@protocol` parser

### Month 6: Polish + missing decompiler features
- Inlining (decompile callee body inline)
- Force variable / split variable / map variables
- Custom calling conventions registered from plugin
- Stock comments
- C++ STL goodname.cfg-equivalent
- LOBYTE/HIBYTE/HIDWORD/BYTE macro emission wiring
- Variable-sized structures
- Hard-float ABI ARM32

### Month 6.5 (stretch): Two specialty features that wow people
- **AI-augmented variable naming** (USENIX22 paper has the algorithm)
- **One-shot decompilation** of an unknown binary in <1s vs IDA's 30s startup

---

## Bottom line

unlace is a real decompiler with substrate competitive with IDA's. What unlace
lacks is the **product surface**: UI, debugger, scripting compat, FLIRT shipping
breadth. The lifter coverage is actually broader than IDA on several modern
ISAs (eBPF, GPU, blockchain).

The 6-month plan is realistic. IDAPython compat alone, if shipped well, makes
unlace a credible "free IDA replacement" for a class of users (academics,
hobbyists, CTF players, anyone doing iOS/macOS RE on a Mac without paying
Hex-Rays). That community is large and vocal.
