//! `cargo xtask lifter-coverage` — per-architecture lifter coverage report.
//!
//! For each binary fixture under `fixtures/` (ELF + Mach-O):
//!   1. Detect the architecture from the file header (ELF `e_machine`,
//!      Mach-O `cputype`). No external crate dep — we read raw bytes so
//!      `xtask` stays a tiny crate.
//!   2. Run the locally built `unlace` binary with `decompile --emit ir`,
//!      capture stdout, and count occurrences of `UNIMPLEMENTED` /
//!      `CALLOTHER` (the canonical IR text mnemonics for
//!      `IrOp::Unimplemented` / `IrOp::Callother`).
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

use std::collections::HashMap;
use std::fmt::Write as _;
use std::path::{Path, PathBuf};
use std::process::Command;

/// Per-architecture accumulator.
#[derive(Default, Debug, Clone)]
struct ArchStats {
    fixtures: Vec<String>,
    errored: Vec<(String, String)>,
    unimplemented: usize,
    callother: usize,
    unimpl_opcodes: HashMap<String, usize>,
    callother_opcodes: HashMap<String, usize>,
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
            if little { (hi << 8) | lo } else { (lo << 8) | hi }
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
        let b = [header[off], header[off + 1], header[off + 2], header[off + 3]];
        if little { u32::from_le_bytes(b) } else { u32::from_be_bytes(b) }
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
        (7, false) => "x86",        // CPU_TYPE_X86
        (7, true) => "x86_64",      // CPU_TYPE_X86_64
        (12, false) => "arm",       // CPU_TYPE_ARM
        (12, true) => "aarch64",    // CPU_TYPE_ARM64
        (18, false) => "ppc",       // CPU_TYPE_POWERPC
        (18, true) => "ppc64",      // CPU_TYPE_POWERPC64
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
                        .map(|ext| ext.eq_ignore_ascii_case("elf") || ext.eq_ignore_ascii_case("macho"))
                        .unwrap_or(false)
            })
            .collect(),
        Err(_) => Vec::new(),
    };
    out.sort();
    out
}

fn find_unlace_binary(root: &Path) -> Option<PathBuf> {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| root.join("target"));
    for sub in ["release", "debug"] {
        let p = target_dir.join(sub).join("unlace");
        if p.exists() {
            return Some(p);
        }
    }
    None
}

fn run_decompile_ir(bin: &Path, fixture: &Path) -> Result<String, String> {
    let output = Command::new(bin)
        .args(["decompile", "--emit", "ir", "--timeout", "30"])
        .arg(fixture)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("spawn failed: {e}"))?;
    if !output.status.success() {
        let stderr = String::from_utf8_lossy(&output.stderr);
        let first = stderr.lines().next().unwrap_or("unknown error");
        return Err(first.to_string());
    }
    String::from_utf8(output.stdout).map_err(|e| format!("non-UTF8: {e}"))
}

/// Tally `UNIMPLEMENTED` / `CALLOTHER` mnemonics in IR-dump text. Also pulls
/// out adjacent opcode-name hints (the architectural instruction mnemonic
/// when present in a trailing comment like `// movbe`, or a quoted name).
/// Best-effort, purely informational. Returns `(unimpl_count,
/// callother_count, unimpl_opcode_hist, callother_opcode_hist)`.
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

fn build_report(stats: &HashMap<String, ArchStats>) -> String {
    let mut s = String::new();
    let _ = writeln!(s, "# Lifter Coverage — Unimplemented + Callother per Architecture");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "Source: each fixture under `fixtures/` decompiled via `unlace decompile --emit ir`."
    );
    let _ = writeln!(
        s,
        "Counts: literal occurrences of the `UNIMPLEMENTED` and `CALLOTHER` IR mnemonics in the dump."
    );
    let _ = writeln!(s);
    let _ = writeln!(s, "| arch | fixtures | total Unimplemented | total Callother |");
    let _ = writeln!(s, "|------|---------:|--------------------:|----------------:|");

    let mut archs: Vec<&String> = stats.keys().collect();
    archs.sort();

    let mut tot_unimpl = 0usize;
    let mut tot_callother = 0usize;
    let mut tot_fixtures = 0usize;
    for arch in &archs {
        let st = &stats[*arch];
        let n = st.fixtures.len();
        tot_fixtures += n;
        tot_unimpl += st.unimplemented;
        tot_callother += st.callother;
        let _ = writeln!(
            s,
            "| `{arch}` | {n} | {} | {} |",
            st.unimplemented, st.callother
        );
    }
    let _ = writeln!(
        s,
        "| **total** | **{tot_fixtures}** | **{tot_unimpl}** | **{tot_callother}** |"
    );

    // Per-arch top opcodes (best-effort hints).
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
        let _ = writeln!(s, "## Fixtures that errored during decompile");
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
    let unlace_bin = match find_unlace_binary(root) {
        Some(p) => p,
        None => {
            eprintln!("ERROR: unlace binary not found in target/{{release,debug}}/.");
            eprintln!("Run `cargo build --release -p unlace-cli` first.");
            std::process::exit(1);
        }
    };
    eprintln!("using unlace binary: {}", unlace_bin.display());

    let fixtures = collect_fixtures(&fixtures_dir);
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
        match run_decompile_ir(&unlace_bin, fx) {
            Ok(ir) => {
                let (u, c, u_ops, c_ops) = count_in_ir(&ir);
                let entry = stats.entry(arch).or_default();
                entry.fixtures.push(name);
                entry.unimplemented += u;
                entry.callother += c;
                for (k, v) in u_ops {
                    *entry.unimpl_opcodes.entry(k).or_insert(0) += v;
                }
                for (k, v) in c_ops {
                    *entry.callother_opcodes.entry(k).or_insert(0) += v;
                }
                eprintln!("ok (unimpl={u}, callother={c})");
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
