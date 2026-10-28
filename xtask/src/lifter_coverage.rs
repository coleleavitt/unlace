//! `cargo xtask lifter-coverage` — per-architecture lifter coverage report.
//!
//! For each binary fixture under `fixtures/` (ELF + Mach-O):
//!   1. Detect the architecture from the file header (ELF `e_machine`,
//!      Mach-O `cputype`) for deterministic report bucketing.
//!   2. Load the fixture in-process, discover functions, lift each function,
//!      and count `IrOp::Unimplemented` / `IrOp::Callother` directly from
//!      the raw lifted IR.
//!   3. Bucket counts by detected architecture and emit a markdown table to
//!      stdout AND `target/lifter-coverage.md`.
//!
//! Fixtures that fail to decompile are recorded as `errored` and do not
//! abort the run — this is a reporting tool.
//!
//! Pure reporting; always exits 0 unless the fixtures dir is missing.
//!
//! Note: HashMap is allowed in `xtask` (not in the determinism-enforced
//! crates) per `xtask/src/main.rs::ENFORCED_CRATES`. We still emit output
//! in a deterministic (alphabetical) order by sorting at print time.

use std::cell::RefCell;
use std::collections::HashMap;
use std::fmt::Write as _;
use std::path::{Path, PathBuf};

use capstone::prelude::*;
use iced_x86::{Decoder, DecoderOptions};
use unlace_cli::pipeline::{discover_functions, lift_function};
use unlace_ir::{ArchId, IrOp, SpaceId};
use unlace_lift::get_lifter;
use unlace_loader::{BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader};

thread_local! {
    static AARCH64_HINT_CS: RefCell<Option<Capstone>> = const { RefCell::new(None) };
}

/// Per-architecture accumulator.
#[derive(Default, Debug, Clone)]
struct ArchStats {
    fixtures: Vec<String>,
    errored: Vec<(String, String)>,
    lifted_functions: usize,
    skipped_functions: usize,
    unimplemented: usize,
    callother: usize,
    callother_trap: usize,
    callother_known: usize,
    callother_semantic_gap: usize,
    unimpl_opcodes: HashMap<String, usize>,
    callother_opcodes: HashMap<String, usize>,
    unimpl_sites: Vec<OpcodeSite>,
}

#[derive(Default, Debug, Clone)]
struct CoverageCounts {
    discovered_functions: usize,
    lifted_functions: usize,
    skipped_functions: usize,
    unimplemented: usize,
    callother: usize,
    callother_trap: usize,
    callother_known: usize,
    callother_semantic_gap: usize,
    unimpl_opcodes: HashMap<String, usize>,
    callother_opcodes: HashMap<String, usize>,
    unimpl_sites: Vec<OpcodeSite>,
}

#[derive(Debug, Clone)]
struct OpcodeSite {
    fixture: String,
    function: String,
    addr: u64,
    hint: String,
}

/// Detect arch label from the first 64 bytes of a binary. Returns `None` for
/// unrecognised magic.
fn detect_arch(header: &[u8]) -> Option<&'static str> {
    if header.len() < 20 {
        return None;
    }
    // ELF
    if &header[0..4] == b"\x7fELF" {
        let little = header[5] == 1;
        let read_u16 = |off: usize| -> u16 {
            let lo = header[off] as u16;
            let hi = header[off + 1] as u16;
            if little {
                (hi << 8) | lo
            } else {
                (lo << 8) | hi
            }
        };
        let em = read_u16(0x12);
        return Some(elf_machine_name(em));
    }
    // Mach-O 64-bit (LE / BE magic). 32-bit Mach-O isn't in our fixture
    // set today but we keep the door open by falling through to "unknown".
    let magic = &header[0..4];
    let (little, sixty_four) = match magic {
        b"\xcf\xfa\xed\xfe" => (true, true),
        b"\xce\xfa\xed\xfe" => (true, false),
        b"\xfe\xed\xfa\xcf" => (false, true),
        b"\xfe\xed\xfa\xce" => (false, false),
        _ => return None,
    };
    let _ = sixty_four; // currently unused — present for future Mach-O32 support
    let read_u32 = |off: usize| -> u32 {
        let b = [
            header[off],
            header[off + 1],
            header[off + 2],
            header[off + 3],
        ];
        if little {
            u32::from_le_bytes(b)
        } else {
            u32::from_be_bytes(b)
        }
    };
    let cputype = read_u32(4);
    Some(macho_cputype_name(cputype))
}

fn elf_machine_name(em: u16) -> &'static str {
    // Subset covering everything currently in fixtures/ plus a few common
    // extras so future fixtures are recognised. Unknown values surface as
    // "elf-unknown" via the catch-all.
    match em {
        0x02 => "sparc",
        0x03 => "x86",
        0x08 => "mips",
        0x14 => "ppc",
        0x15 => "ppc64",
        0x16 => "s390",
        0x28 => "arm",
        0x2a => "superh",
        0x32 => "ia64",
        0x3e => "x86_64",
        0x57 => "v850",
        0x5d => "arc",
        0xb7 => "aarch64",
        0xf3 => "riscv",
        0xf7 => "bpf",
        _ => "elf-unknown",
    }
}

fn macho_cputype_name(cputype: u32) -> &'static str {
    // CPU_ARCH_ABI64 = 0x01000000, applied to base type.
    const ABI64: u32 = 0x0100_0000;
    let base = cputype & !ABI64;
    let is_64 = (cputype & ABI64) != 0;
    match (base, is_64) {
        (7, false) => "x86",     // CPU_TYPE_X86
        (7, true) => "x86_64",   // CPU_TYPE_X86_64
        (12, false) => "arm",    // CPU_TYPE_ARM
        (12, true) => "aarch64", // CPU_TYPE_ARM64
        (18, false) => "ppc",    // CPU_TYPE_POWERPC
        (18, true) => "ppc64",   // CPU_TYPE_POWERPC64
        _ => "macho-unknown",
    }
}

/// Iterate fixtures/*.elf and fixtures/*.macho. Sorted for determinism.
fn collect_fixtures(fixtures_dir: &Path) -> Vec<PathBuf> {
    let mut out: Vec<PathBuf> = match std::fs::read_dir(fixtures_dir) {
        Ok(rd) => rd
            .filter_map(|e| e.ok())
            .map(|e| e.path())
            .filter(|p| {
                p.is_file()
                    && p.extension()
                        .and_then(|x| x.to_str())
                        .map(|ext| {
                            ext.eq_ignore_ascii_case("elf") || ext.eq_ignore_ascii_case("macho")
                        })
                        .unwrap_or(false)
            })
            .collect(),
        Err(_) => Vec::new(),
    };
    out.sort();
    out
}

/// Tally `UNIMPLEMENTED` / `CALLOTHER` mnemonics in IR-dump text. Also pulls
/// out adjacent opcode-name hints (the architectural instruction mnemonic
/// when present in a trailing comment like `// movbe`, or a quoted name).
/// Best-effort, purely informational. Returns `(unimpl_count,
/// callother_count, unimpl_opcode_hist, callother_opcode_hist)`.
#[cfg(test)]
fn count_in_ir(text: &str) -> (usize, usize, HashMap<String, usize>, HashMap<String, usize>) {
    let mut unimpl = 0usize;
    let mut callother = 0usize;
    let mut unimpl_ops: HashMap<String, usize> = HashMap::new();
    let mut callother_ops: HashMap<String, usize> = HashMap::new();
    for line in text.lines() {
        if line.contains("UNIMPLEMENTED") {
            unimpl += 1;
            if let Some(op) = extract_opcode_hint(line) {
                *unimpl_ops.entry(op).or_insert(0) += 1;
            }
        }
        if line.contains("CALLOTHER") {
            callother += 1;
            if let Some(op) = extract_opcode_hint(line) {
                *callother_ops.entry(op).or_insert(0) += 1;
            }
        }
    }
    (unimpl, callother, unimpl_ops, callother_ops)
}

/// Pull the first parenthesised string-literal argument or the first `//`
/// comment token as a best-effort opcode-name hint. Used only for the
/// per-arch "top opcodes" diagnostic — counts are independent.
#[cfg(test)]
fn extract_opcode_hint(line: &str) -> Option<String> {
    // Prefer `// foo` trailing comment.
    if let Some(idx) = line.find("//") {
        let rest = line[idx + 2..].trim();
        let token: String = rest
            .chars()
            .take_while(|c| c.is_ascii_alphanumeric() || *c == '_' || *c == '.')
            .collect();
        if !token.is_empty() {
            return Some(token);
        }
    }
    // Otherwise pull the first string literal `"..."`.
    let bytes = line.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] == b'"' {
            let start = i + 1;
            let mut j = start;
            while j < bytes.len() && bytes[j] != b'"' {
                j += 1;
            }
            if j > start {
                return Some(line[start..j].to_string());
            }
            break;
        }
        i += 1;
    }
    None
}

fn load_image(path: &Path) -> Result<BinaryImage, String> {
    let data = std::fs::read(path).map_err(|e| format!("read failed: {e}"))?;
    if ElfLoader::can_load(&data) {
        ElfLoader::load(&data).map_err(|e| format!("ELF load failed: {e}"))
    } else if MachoLoader::can_load(&data) {
        MachoLoader::load(&data).map_err(|e| format!("Mach-O load failed: {e}"))
    } else if PeLoader::can_load(&data) {
        PeLoader::load(&data).map_err(|e| format!("PE load failed: {e}"))
    } else {
        Err("unsupported fixture format".to_string())
    }
}

fn opcode_hint(image: &BinaryImage, addr: u64) -> Option<String> {
    let section = image.sections.iter().find(|section| {
        let start = section.vaddr;
        let end = start.saturating_add(section.data.len() as u64);
        addr >= start && addr < end
    })?;
    let offset = addr.checked_sub(section.vaddr)? as usize;
    let bytes = section.data.get(offset..)?;
    if bytes.is_empty() {
        return None;
    }

    match image.arch {
        ArchId::X86 | ArchId::X86_64 => {
            let bitness = if image.arch == ArchId::X86 { 32 } else { 64 };
            let mut decoder = Decoder::with_ip(bitness, bytes, addr, DecoderOptions::NONE);
            let insn = decoder.decode();
            if insn.is_invalid() {
                Some(format!("invalid_{:02x}", bytes[0]))
            } else {
                Some(format!("{:?}", insn.mnemonic()).to_ascii_lowercase())
            }
        }
        ArchId::AArch64 => capstone_aarch64_hint(bytes, addr).or_else(|| byte_opcode_hint(bytes)),
        ArchId::Arm
        | ArchId::Mips
        | ArchId::Mips64
        | ArchId::Ppc
        | ArchId::Ppc64
        | ArchId::RiscV64
        | ArchId::V850
        | ArchId::Arc => byte_opcode_hint(bytes),
        _ => Some(format!("byte_{:02x}", bytes[0])),
    }
}

fn byte_opcode_hint(bytes: &[u8]) -> Option<String> {
    let width = bytes.len().min(4);
    Some(
        bytes[..width]
            .iter()
            .map(|b| format!("{b:02x}"))
            .collect::<Vec<_>>()
            .join("_"),
    )
}

fn capstone_aarch64_hint(bytes: &[u8], addr: u64) -> Option<String> {
    AARCH64_HINT_CS.with(|cell| {
        let mut slot = cell.borrow_mut();
        if slot.is_none() {
            *slot = Capstone::new()
                .arm64()
                .mode(capstone::arch::arm64::ArchMode::Arm)
                .build()
                .ok();
        }
        let cs = slot.as_ref()?;
        let insns = cs.disasm_count(bytes, addr, 1).ok()?;
        let insn = insns.as_ref().first()?;
        insn.mnemonic().map(str::to_ascii_lowercase)
    })
}

fn run_lift_coverage(fixture: &Path) -> Result<CoverageCounts, String> {
    let image = load_image(fixture)?;
    let functions =
        discover_functions(&image, None).map_err(|e| format!("discover failed: {e}"))?;
    let text = image
        .section_by_name(".text")
        .or_else(|| image.section_by_name("__text"))
        .ok_or_else(|| "binary has no text section (.text / __text)".to_string())?;
    let text_start = text.vaddr;
    let text_end = text_start.saturating_add(text.data.len() as u64);
    let lifter = get_lifter(image.arch).map_err(|e| e.to_string())?;
    let mut counts = CoverageCounts {
        discovered_functions: functions.len(),
        ..CoverageCounts::default()
    };

    for entry in &functions {
        if entry.addr < text_start || entry.addr >= text_end {
            counts.skipped_functions += 1;
            continue;
        }
        counts.lifted_functions += 1;
        let function = lift_function(&image, lifter.as_ref(), entry)
            .map_err(|e| format!("{} @ {:#x}: lift failed: {e}", entry.name, entry.addr))?;
        for block in function.blocks.values() {
            for insn in &block.insns {
                match insn.op {
                    IrOp::Unimplemented => {
                        counts.unimplemented += 1;
                        let hint =
                            opcode_hint(&image, insn.addr).unwrap_or_else(|| "unknown".to_string());
                        *counts.unimpl_opcodes.entry(hint.clone()).or_insert(0) += 1;
                        counts.unimpl_sites.push(OpcodeSite {
                            fixture: fixture
                                .file_name()
                                .map(|s| s.to_string_lossy().into_owned())
                                .unwrap_or_default(),
                            function: entry.name.clone(),
                            addr: insn.addr,
                            hint,
                        });
                    }
                    IrOp::Callother => {
                        counts.callother += 1;
                        match classify_callother(insn) {
                            CallotherClass::TrapOrPadding => counts.callother_trap += 1,
                            CallotherClass::KnownIntrinsic => counts.callother_known += 1,
                            CallotherClass::SemanticGap => counts.callother_semantic_gap += 1,
                        }
                        if let Some(hint) = opcode_hint(&image, insn.addr) {
                            *counts.callother_opcodes.entry(hint).or_insert(0) += 1;
                        }
                    }
                    _ => {}
                }
            }
        }
    }

    Ok(counts)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum CallotherClass {
    TrapOrPadding,
    KnownIntrinsic,
    SemanticGap,
}

fn classify_callother(insn: &unlace_ir::IrInsn) -> CallotherClass {
    match callother_tag(insn) {
        Some(0x300) => CallotherClass::TrapOrPadding,
        Some(tag) if is_known_callother_tag(tag) => CallotherClass::KnownIntrinsic,
        _ => CallotherClass::SemanticGap,
    }
}

fn callother_tag(insn: &unlace_ir::IrInsn) -> Option<u64> {
    insn.inputs
        .first()
        .filter(|tag| tag.space == SpaceId::Const)
        .map(|tag| tag.offset)
}

fn is_known_callother_tag(tag: u64) -> bool {
    matches!(
        tag,
        0x1..=0x4
            | 0x100..=0x1F0
            | 0x200..=0x20C
            | 0x301..=0x328
            | 0x330..=0x437
            | 0x500..=0x623
    )
}

fn build_report(stats: &HashMap<String, ArchStats>) -> String {
    let mut s = String::new();
    let _ = writeln!(
        s,
        "# Lifter Coverage — Unimplemented + Callother per Architecture"
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Source: each fixture under `fixtures/` loaded and lifted in-process via `discover_functions` + `lift_function`."
    );
    let _ = writeln!(
        s,
        "Counts: direct raw-lifter `IrOp::Unimplemented` and `IrOp::Callother` occurrences before SSA/passes/printer cleanup."
    );
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "| arch | fixtures | lifted funcs | skipped funcs | total Unimplemented | total Callother | trap/padding | known intrinsic | semantic gap |"
    );
    let _ = writeln!(
        s,
        "|------|---------:|-------------:|--------------:|--------------------:|----------------:|-------------:|----------------:|-------------:|"
    );

    let mut archs: Vec<&String> = stats.keys().collect();
    archs.sort();

    let mut tot_unimpl = 0usize;
    let mut tot_callother = 0usize;
    let mut tot_fixtures = 0usize;
    let mut tot_lifted_functions = 0usize;
    let mut tot_skipped_functions = 0usize;
    let mut tot_callother_trap = 0usize;
    let mut tot_callother_known = 0usize;
    let mut tot_callother_semantic_gap = 0usize;
    for arch in &archs {
        let st = &stats[*arch];
        let n = st.fixtures.len();
        tot_fixtures += n;
        tot_lifted_functions += st.lifted_functions;
        tot_skipped_functions += st.skipped_functions;
        tot_unimpl += st.unimplemented;
        tot_callother += st.callother;
        tot_callother_trap += st.callother_trap;
        tot_callother_known += st.callother_known;
        tot_callother_semantic_gap += st.callother_semantic_gap;
        let _ = writeln!(
            s,
            "| `{arch}` | {n} | {} | {} | {} | {} | {} | {} | {} |",
            st.lifted_functions,
            st.skipped_functions,
            st.unimplemented,
            st.callother,
            st.callother_trap,
            st.callother_known,
            st.callother_semantic_gap
        );
    }
    let _ = writeln!(
        s,
        "| **total** | **{tot_fixtures}** | **{tot_lifted_functions}** | **{tot_skipped_functions}** | **{tot_unimpl}** | **{tot_callother}** | **{tot_callother_trap}** | **{tot_callother_known}** | **{tot_callother_semantic_gap}** |"
    );

    // Per-arch top opcodes (best-effort hints).
    let _ = writeln!(s);
    let _ = writeln!(s, "## Top Unimplemented opcode hints (per arch)");
    let _ = writeln!(s);
    for arch in &archs {
        let st = &stats[*arch];
        if st.unimpl_opcodes.is_empty() {
            continue;
        }
        let mut items: Vec<(&String, &usize)> = st.unimpl_opcodes.iter().collect();
        items.sort_by(|a, b| b.1.cmp(a.1).then_with(|| a.0.cmp(b.0)));
        let top: Vec<String> = items
            .iter()
            .take(8)
            .map(|(k, v)| format!("`{k}` ({v})"))
            .collect();
        let _ = writeln!(s, "- **{arch}**: {}", top.join(", "));
    }

    let _ = writeln!(s);
    let _ = writeln!(s, "## Top Callother opcode hints (per arch)");
    let _ = writeln!(s);
    for arch in &archs {
        let st = &stats[*arch];
        if st.callother_opcodes.is_empty() {
            continue;
        }
        let mut items: Vec<(&String, &usize)> = st.callother_opcodes.iter().collect();
        items.sort_by(|a, b| b.1.cmp(a.1).then_with(|| a.0.cmp(b.0)));
        let top: Vec<String> = items
            .iter()
            .take(5)
            .map(|(k, v)| format!("`{k}` ({v})"))
            .collect();
        let _ = writeln!(s, "- **{arch}**: {}", top.join(", "));
    }

    let _ = writeln!(s);
    let _ = writeln!(s, "## Unimplemented sites");
    let _ = writeln!(s);
    for arch in &archs {
        let st = &stats[*arch];
        if st.unimpl_sites.is_empty() {
            continue;
        }
        let _ = writeln!(s, "### {arch}");
        let _ = writeln!(s);
        let _ = writeln!(s, "| fixture | function | address | hint |");
        let _ = writeln!(s, "|---------|----------|--------:|------|");
        let mut sites = st.unimpl_sites.clone();
        sites.sort_by(|a, b| {
            a.fixture
                .cmp(&b.fixture)
                .then_with(|| a.function.cmp(&b.function))
                .then_with(|| a.addr.cmp(&b.addr))
                .then_with(|| a.hint.cmp(&b.hint))
        });
        for site in sites.iter().take(64) {
            let _ = writeln!(
                s,
                "| `{}` | `{}` | `{:#x}` | `{}` |",
                site.fixture, site.function, site.addr, site.hint
            );
        }
        if sites.len() > 64 {
            let _ = writeln!(s,);
            let _ = writeln!(s, "_{} more omitted._", sites.len() - 64);
        }
        let _ = writeln!(s);
    }

    // Failures.
    let mut any_err = false;
    for st in stats.values() {
        if !st.errored.is_empty() {
            any_err = true;
            break;
        }
    }
    if any_err {
        let _ = writeln!(s);
        let _ = writeln!(s, "## Fixtures that errored during lifting");
        let _ = writeln!(s);
        for arch in &archs {
            for (name, err) in &stats[*arch].errored {
                let _ = writeln!(s, "- `{arch}` :: `{name}` — {err}");
            }
        }
    }
    s
}

pub fn run(root: &Path) {
    let fixtures_dir = root.join("fixtures");
    if !fixtures_dir.is_dir() {
        eprintln!("ERROR: fixtures dir not found: {}", fixtures_dir.display());
        std::process::exit(1);
    }
    let fixtures = collect_fixtures(&fixtures_dir);
    eprintln!("using direct lifter path: load -> discover_functions -> lift_function");
    eprintln!("scanning {} fixture(s)...", fixtures.len());

    let mut stats: HashMap<String, ArchStats> = HashMap::new();

    for fx in &fixtures {
        let name = fx
            .file_name()
            .map(|s| s.to_string_lossy().into_owned())
            .unwrap_or_default();

        // Detect arch from the first 64 bytes.
        let mut header = [0u8; 64];
        let arch = match std::fs::File::open(fx).and_then(|mut f| {
            use std::io::Read as _;
            let n = f.read(&mut header)?;
            Ok(n)
        }) {
            Ok(n) => detect_arch(&header[..n]).unwrap_or("unknown").to_string(),
            Err(e) => {
                eprintln!("  {name} — failed to read header: {e}");
                "unknown".to_string()
            }
        };

        eprint!("  [{arch}] {name} ... ");
        match run_lift_coverage(fx) {
            Ok(counts) => {
                let entry = stats.entry(arch).or_default();
                entry.fixtures.push(name);
                entry.lifted_functions += counts.lifted_functions;
                entry.skipped_functions += counts.skipped_functions;
                entry.unimplemented += counts.unimplemented;
                entry.callother += counts.callother;
                entry.callother_trap += counts.callother_trap;
                entry.callother_known += counts.callother_known;
                entry.callother_semantic_gap += counts.callother_semantic_gap;
                for (k, v) in counts.unimpl_opcodes {
                    *entry.unimpl_opcodes.entry(k).or_insert(0) += v;
                }
                for (k, v) in counts.callother_opcodes {
                    *entry.callother_opcodes.entry(k).or_insert(0) += v;
                }
                entry.unimpl_sites.extend(counts.unimpl_sites);
                eprintln!(
                    "ok (discovered={}, lifted={}, skipped={}, unimpl={}, callother={} trap={} known={} gap={})",
                    counts.discovered_functions,
                    counts.lifted_functions,
                    counts.skipped_functions,
                    counts.unimplemented,
                    counts.callother,
                    counts.callother_trap,
                    counts.callother_known,
                    counts.callother_semantic_gap
                );
            }
            Err(e) => {
                let entry = stats.entry(arch).or_default();
                entry.errored.push((name.clone(), e.clone()));
                eprintln!("ERRORED: {e}");
            }
        }
    }

    let report = build_report(&stats);

    let out_path = root.join("target/lifter-coverage.md");
    if let Some(parent) = out_path.parent() {
        let _ = std::fs::create_dir_all(parent);
    }
    if let Err(e) = std::fs::write(&out_path, &report) {
        eprintln!("WARN: failed to write {}: {e}", out_path.display());
    } else {
        eprintln!("wrote {}", out_path.display());
    }

    print!("{report}");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn counts_unimpl_and_callother_in_fake_ir() {
        let ir = "\
func foo @ 0x100 {
BB_0:
  v1:i64 = COPY v2:i64
  UNIMPLEMENTED // bswap
  v3:i32 = CALLOTHER \"aesenc\"
  v4:i32 = CALLOTHER \"aesenc\"
  UNIMPLEMENTED // bswap
  UNIMPLEMENTED // movbe
  RETURN
}
";
        let (u, c, u_ops, c_ops) = count_in_ir(ir);
        assert_eq!(u, 3, "unimplemented count");
        assert_eq!(c, 2, "callother count");
        assert_eq!(u_ops.get("bswap"), Some(&2));
        assert_eq!(u_ops.get("movbe"), Some(&1));
        assert_eq!(c_ops.get("aesenc"), Some(&2));
    }

    #[test]
    fn classifies_callother_tags() {
        let trap = unlace_ir::IrInsn::without_output(
            IrOp::Callother,
            vec![unlace_ir::Varnode::constant(0x300, 8)],
            0,
        );
        let known = unlace_ir::IrInsn::without_output(
            IrOp::Callother,
            vec![unlace_ir::Varnode::constant(0x330, 8)],
            0,
        );
        let gap = unlace_ir::IrInsn::without_output(
            IrOp::Callother,
            vec![unlace_ir::Varnode::constant(0xdead, 8)],
            0,
        );

        assert_eq!(classify_callother(&trap), CallotherClass::TrapOrPadding);
        assert_eq!(classify_callother(&known), CallotherClass::KnownIntrinsic);
        assert_eq!(classify_callother(&gap), CallotherClass::SemanticGap);
    }

    #[test]
    fn arch_detect_elf_x86_64() {
        // ELF64-LE, e_machine = 0x3e (x86_64) at offset 0x12.
        let mut h = vec![0u8; 64];
        h[0..4].copy_from_slice(b"\x7fELF");
        h[4] = 2; // EI_CLASS = ELFCLASS64
        h[5] = 1; // EI_DATA = ELFDATA2LSB
        h[0x12] = 0x3e;
        h[0x13] = 0x00;
        assert_eq!(detect_arch(&h), Some("x86_64"));
    }

    #[test]
    fn arch_detect_elf_aarch64() {
        let mut h = vec![0u8; 64];
        h[0..4].copy_from_slice(b"\x7fELF");
        h[4] = 2;
        h[5] = 1;
        h[0x12] = 0xb7;
        h[0x13] = 0x00;
        assert_eq!(detect_arch(&h), Some("aarch64"));
    }

    #[test]
    fn arch_detect_macho_arm64() {
        // 64-bit Mach-O LE magic + cputype = 12 | ABI64 = 0x0100000c.
        let mut h = vec![0u8; 64];
        h[0..4].copy_from_slice(b"\xcf\xfa\xed\xfe");
        let cputype: u32 = 0x0100_000c;
        h[4..8].copy_from_slice(&cputype.to_le_bytes());
        assert_eq!(detect_arch(&h), Some("aarch64"));
    }
}
