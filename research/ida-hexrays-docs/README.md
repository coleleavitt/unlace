# IDA Pro / Hex-Rays Documentation Archive

Comprehensive reference corpus mirroring publicly-available IDA Pro and
Hex-Rays Decompiler documentation, changelogs, and academic papers about
decompilation. Used as the implementation reference for the `unlace` project.

## Inventory

| Folder | Files | Contents |
|--------|-------|----------|
| `changelogs/` | 55 HTML + 55 TXT | Release notes for every IDA version from 4.6 through 9.3sp2 |
| `pdfs/` | 33 PDFs (~89 MB) | Official manuals, Igor's Tip of the Week seasons, RECON/BlackHat presentations, academic papers |
| `docs/` | 13 HTML + 12 TXT | Mirror of docs.hex-rays.com landing pages (basic-usage, disassembler, decompiler, debugger, SDK, IDAPython, IDC, features) |

Total ~142 MB.

## Changelog Coverage

Every version of IDA from 4.6 (2002) through 9.3sp2 (2026) is captured:

- **4.x series:** 4.6, 4.7, 4.8, 4.9
- **5.x series:** 5.0, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7
- **6.x series:** 6.0, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 6.95
- **7.x series:** 7.0, 7.0sp1, 7.1, 7.2, 7.3, 7.4, 7.4sp1, 7.5, 7.5sp1, 7.5sp2, 7.5sp3, 7.6, 7.6sp1, 7.7, 7.7sp1
- **8.x series:** 8.0, 8.0sp1, 8.1, 8.2, 8.2sp1, 8.3, 8.4, 8.4sp1, 8.4sp2, 8.5
- **9.x series:** 9.0, 9.0sp1, 9.1, 9.2, 9.3, 9.3sp1, 9.3sp2

## PDF Highlights

### Official Hex-Rays Documents
- `igor-tip-of-the-week-S01.pdf` — 4.5 MB, IDA tips season 1 (tips #1-#50)
- `igor-tip-of-the-week-S02.pdf` — 13 MB, IDA tips season 2 (tips #51-#100)
- `igor-tip-of-the-week-S03.pdf` — 12 MB, IDA tips season 3 (tips #101-#150)
- `debugging_win32.pdf` — IDA Pro debugger tutorial
- `debugging_appcall.pdf` — IDA Pro 5.6 Appcall user guide
- `unpacking.pdf` — IDA Pro 4.9 unpacking plugin tutorial
- `remotedbg.pdf` — Remote debugging with IDA Pro
- `customize.pdf` — Customizing IDA Pro tutorial
- `graphs.pdf` — Graphing with IDA Pro tutorial

### Books
- `ida-pro-book-2nd-edition.pdf` — 9.1 MB, Chris Eagle, *The IDA Pro Book* 2nd ed.
- `practical-malware-analysis-book.pdf` — 10 MB, Sikorski & Honig

### Conference Talks & Papers
- `bh-us-18-guilfanov-decompiler-internals-microcode.pdf` — BlackHat US 2018 keynote by Ilfak Guilfanov on Hex-Rays microcode internals
- `recon-brx-2018-decompiler-internals-microcode.pdf` — Same content, RECON Brussels 2018 slides
- `BH_Eagle_ida_pro.pdf` — BlackHat Chris Eagle reverse engineering with IDA Pro
- `vb2023-deobf-virt-malware-hexrays.pdf` — Virus Bulletin 2023: deobfuscating virtualized malware with Hex-Rays
- `synacktiv-strings-deobf-microcode.pdf` — Synacktiv: string deobfuscation in pseudocode via microcode manipulation
- `binja-modern-binary-analysis-ils.pdf` — Binary Ninja perspective on intermediate languages
- `infiltrate2019-ghidra-slides.pdf` — INFILTRATE 2019: comparison of Ghidra vs Hex-Rays IL

### Academic Papers
- `usenix22-augmenting-decompiler-variable-names.pdf` — Learned variable names for decompiler output
- `ndss17-pattern-independent-control-flow-structuring.pdf` — DREAM++ structuring algorithm
- `usenix13-native-x86-decompilation-semantics.pdf` — Semantics-preserving structural analysis
- `dream_oakland2016.pdf` — DREAM decompiler (Oakland 2016)
- `asiaccs-2020-comb-for-decompiled-c.pdf` — rev.ng comb-for-decompiled-C transformations
- `csw09-reil-intermediate-representation.pdf` — REIL platform-independent IR
- `sefm20-sound-decompilation-x86-64.pdf` — Sound C decompilation for x86-64
- `usenix-fse17-suggesting-meaningful-variable-names.pdf`
- `ccs21-binary-fuzzing-coverage.pdf` — Coverage-preserving binary fuzzing
- `netlist-decompilation-workflow.pdf` — Hardware netlist decompilation
- `dewolf-decompilation-survey.pdf` — dewolf: decompilation improvement via user surveys

### Marketing / Reference
- `hex-rays-company-presentation.pdf` — Hex-Rays SA company overview
- `synacktiv-trainings.pdf` — Synacktiv RE training catalog (includes Hex-Rays API training)
- `ida-plugin-writing-c-cpp.pdf` — IDA plugin development in C/C++

## How to Use This Archive

For implementation reference in `unlace`, the most directly useful materials are:

1. **`changelogs/ida-9_*.txt`** — modern feature surface area
2. **`pdfs/bh-us-18-guilfanov-decompiler-internals-microcode.pdf`** — authoritative explanation of Hex-Rays microcode levels (MMAT_*), the IR design that unlace's IR mirrors
3. **`pdfs/recon-brx-2018-decompiler-internals-microcode.pdf`** — same content with figures, easier to digest
4. **`pdfs/ida-pro-book-2nd-edition.pdf`** — comprehensive coverage of IDA's user-visible features that need parity
5. **`pdfs/igor-tip-of-the-week-S0[1-3].pdf`** — 150+ specific feature tips, each one a potential unlace task

## Provenance

All files downloaded from public sources (Hex-Rays website, BlackHat archives,
RECON, USENIX, NDSS, virus bulletin, university repositories) on 2026-05-18.

This archive is for reference / research use within the `unlace` project.
The IDA Pro Book PDFs and Practical Malware Analysis are subject to their
respective publishers' copyright.
