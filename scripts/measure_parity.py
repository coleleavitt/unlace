#!/usr/bin/env python3
"""
Parity measurement tool — unlace vs IDA Hex-Rays.

Compares unlace decompiler output against IDA Hex-Rays reference decompilations
to quantify structural similarity ("IDA parity").

Usage:
    python3 scripts/measure_parity.py [--binary PATH] [--refs PATH] [--unlace PATH]

Defaults assume running from workspace root against hexrays/ida-9.1/hexx64.so.
"""

import argparse
import os
import re
import subprocess
import sys
import json
from dataclasses import dataclass, field
from pathlib import Path


# ──────────────────────────────────────────────────────────────────────
# Feature extraction
# ──────────────────────────────────────────────────────────────────────

@dataclass
class FunctionFeatures:
    """Structural features extracted from a C decompilation."""
    name: str = ""
    if_count: int = 0
    else_count: int = 0
    for_count: int = 0
    while_count: int = 0
    do_while_count: int = 0
    return_count: int = 0
    goto_count: int = 0
    calls: list = field(default_factory=list)
    has_params: bool = False
    param_count: int = 0
    local_var_count: int = 0
    negative_consts: int = 0
    type_casts: int = 0
    pointer_derefs: int = 0
    shift_ops: int = 0
    bitwise_ops: int = 0
    line_count: int = 0


def extract_features(source: str) -> FunctionFeatures:
    """Extract structural features from C source code."""
    feats = FunctionFeatures()

    code = re.sub(r'/\*.*?\*/', '', source, flags=re.DOTALL)
    code = re.sub(r'//.*$', '', code, flags=re.MULTILINE)

    lines = code.strip().split('\n')
    feats.line_count = len([l for l in lines if l.strip()])

    # \bif\s*\( matches 'if' keyword followed by '(' (not 'elseif' etc.)
    feats.if_count = len(re.findall(r'\bif\s*\(', code))
    feats.else_count = len(re.findall(r'\belse\b', code))
    feats.for_count = len(re.findall(r'\bfor\s*\(', code))
    feats.while_count = len(re.findall(r'\bwhile\s*\(', code))
    feats.do_while_count = len(re.findall(r'\bdo\s*\{', code))
    feats.return_count = len(re.findall(r'\breturn\b', code))
    feats.goto_count = len(re.findall(r'\bgoto\b', code))

    keywords = {
        # C keywords with parens
        'if', 'for', 'while', 'switch', 'return', 'sizeof', 'typeof',
        # IDA byte/word/dword extraction macros
        'LOBYTE', 'HIBYTE', 'BYTE0', 'BYTE1', 'BYTE2', 'BYTE3', 'BYTE4', 'BYTE5', 'BYTE6', 'BYTE7',
        'LOWORD', 'HIWORD', 'WORD0', 'WORD1', 'WORD2', 'WORD3',
        'LODWORD', 'HIDWORD', 'DWORD0', 'DWORD1',
        'SLOBYTE', 'SHIBYTE', 'SBYTE0', 'SBYTE1', 'SBYTE2', 'SBYTE3',
        'SLOWORD', 'SHIWORD', 'SWORD0', 'SWORD1',
        'SLODWORD', 'SHIDWORD',
        # IDA overflow/carry macros
        '__OFADD__', '__OFSUB__', '__SETP__', '__SETO__', '__SETS__', '__SETZ__',
        '__CFADD__', '__CFSUB__', '__SCFADD__', '__SCFSUB__',
        # Compiler builtins
        '__builtin_trap', '__builtin_unreachable', '__builtin_expect',
        '__builtin_clz', '__builtin_ctz', '__builtin_popcount',
        '__readfsqword', '__readfsdword', '__readgsqword', '__rdtsc',
        # C type casts that look like calls
        'unsigned', 'signed', 'const', 'volatile',
    }
    # Also exclude _mm_* / _mm256_* / __builtin_* prefixed identifiers
    call_matches = re.findall(r'\b([a-zA-Z_]\w*)\s*\(', code)
    feats.calls = sorted(set(c for c in call_matches
                              if c not in keywords
                              and not c.startswith('_mm_')
                              and not c.startswith('_mm256_')
                              and not c.startswith('__builtin_')))

    sig_match = re.search(r'\w+\s+\w+\s*\(([^)]*)\)', code)
    if sig_match:
        params = sig_match.group(1).strip()
        if params and params != 'void':
            feats.has_params = True
            feats.param_count = len([p for p in params.split(',') if p.strip()])

    # Local var declarations: type keywords at start of line inside function body
    feats.local_var_count = len(re.findall(
        r'^\s+(?:(?:unsigned|signed|const|volatile|long|short|int|char|__int\d+|_[A-Z]+|bool)\s+)+\w+',
        code, re.MULTILINE
    ))

    feats.negative_consts = len(re.findall(r'(?<!=\s)-\d+', code))

    # (\s*type\s*\**\s*) — matches C-style casts like (int *), (unsigned), etc.
    feats.type_casts = len(re.findall(
        r'\(\s*(?:unsigned|signed|__int\d+|_[A-Z]+|long|int|char|short|void|bool)\s*\**\s*\)',
        code
    ))

    feats.pointer_derefs = len(re.findall(r'\*\s*\(', code))

    feats.shift_ops = len(re.findall(r'<<|>>', code))

    # (?<![&|])[&|^~](?![&|]) — single &|^~ not part of && or ||
    feats.bitwise_ops = len(re.findall(r'(?<![&|])[&|^~](?![&|])', code))

    return feats


# ──────────────────────────────────────────────────────────────────────
# Parity scoring
# ──────────────────────────────────────────────────────────────────────

@dataclass
class FeatureScore:
    name: str
    ida_val: object
    unlace_val: object
    score: float
    note: str = ""


def score_count(name: str, ida_val: int, unlace_val: int, tolerance: int = 1) -> FeatureScore:
    """Score a numeric feature with tolerance."""
    if ida_val == 0 and unlace_val == 0:
        return FeatureScore(name, ida_val, unlace_val, 1.0)
    if ida_val == 0:
        return FeatureScore(name, ida_val, unlace_val, 0.0,
                            f"unlace has {unlace_val}, IDA has 0")
    diff = abs(ida_val - unlace_val)
    if diff <= tolerance:
        return FeatureScore(name, ida_val, unlace_val, 1.0)
    ratio = min(ida_val, unlace_val) / max(ida_val, unlace_val)
    return FeatureScore(name, ida_val, unlace_val, ratio,
                        f"IDA={ida_val} unlace={unlace_val}")


def score_bool(name: str, ida_val: bool, unlace_val: bool) -> FeatureScore:
    """Score a boolean feature."""
    match = 1.0 if ida_val == unlace_val else 0.0
    note = "" if ida_val == unlace_val else f"IDA={ida_val} unlace={unlace_val}"
    return FeatureScore(name, ida_val, unlace_val, match, note)


def score_call_overlap(ida_calls: list, unlace_calls: list) -> FeatureScore:
    """Score function call overlap using Jaccard similarity."""
    ida_set = set(ida_calls)
    unlace_set = set(unlace_calls)
    if not ida_set and not unlace_set:
        return FeatureScore("calls", ida_calls, unlace_calls, 1.0)
    if not ida_set or not unlace_set:
        return FeatureScore("calls", ida_calls, unlace_calls, 0.0,
                            f"IDA={len(ida_set)} unlace={len(unlace_set)} calls")
    intersection = ida_set & unlace_set
    union = ida_set | unlace_set
    score = len(intersection) / len(union) if union else 1.0
    missing = ida_set - unlace_set
    extra = unlace_set - ida_set
    notes = []
    if missing:
        notes.append(f"missing: {','.join(sorted(missing)[:3])}")
    if extra:
        notes.append(f"extra: {','.join(sorted(extra)[:3])}")
    return FeatureScore("calls", ida_calls, unlace_calls, score, "; ".join(notes))


def compute_parity(ida: FunctionFeatures, unlace: FunctionFeatures) -> tuple:
    """Compute parity score between IDA and unlace features.

    Returns (score_pct, scores_list, notes_list).
    """
    scores = []

    scores.append(score_count("if-branches", ida.if_count, unlace.if_count))
    scores.append(score_count("else-branches", ida.else_count, unlace.else_count))
    scores.append(score_count("for-loops", ida.for_count, unlace.for_count))
    scores.append(score_count("while-loops", ida.while_count, unlace.while_count))
    scores.append(score_count("do-while", ida.do_while_count, unlace.do_while_count))
    scores.append(score_count("returns", ida.return_count, unlace.return_count))
    scores.append(score_count("gotos", ida.goto_count, unlace.goto_count))

    scores.append(score_call_overlap(ida.calls, unlace.calls))

    scores.append(score_bool("has-params", ida.has_params, unlace.has_params))

    scores.append(score_count("type-casts", ida.type_casts, unlace.type_casts, tolerance=2))
    scores.append(score_count("ptr-derefs", ida.pointer_derefs, unlace.pointer_derefs, tolerance=2))
    scores.append(score_count("shift-ops", ida.shift_ops, unlace.shift_ops, tolerance=1))
    scores.append(score_count("bitwise-ops", ida.bitwise_ops, unlace.bitwise_ops, tolerance=2))
    scores.append(score_count("neg-consts", ida.negative_consts, unlace.negative_consts, tolerance=1))

    # Control flow features weighted 2-3x; structural features weighted 1-1.5x
    weights = {
        "if-branches": 3.0,
        "else-branches": 2.0,
        "for-loops": 3.0,
        "while-loops": 3.0,
        "do-while": 2.0,
        "returns": 2.0,
        "gotos": 1.0,
        "calls": 3.0,
        "has-params": 2.0,
        "type-casts": 1.0,
        "ptr-derefs": 1.5,
        "shift-ops": 1.0,
        "bitwise-ops": 1.0,
        "neg-consts": 1.0,
    }

    total_weight = sum(weights.get(s.name, 1.0) for s in scores)
    weighted_sum = sum(s.score * weights.get(s.name, 1.0) for s in scores)
    pct = (weighted_sum / total_weight) * 100.0 if total_weight > 0 else 0.0

    notes = [s for s in scores if s.score < 1.0 and s.note]
    return pct, scores, notes


# ──────────────────────────────────────────────────────────────────────
# Binary prologue scanning (mirrors unlace's discovery logic)
# ──────────────────────────────────────────────────────────────────────

def find_text_section(elf_data: bytes):
    """Parse ELF headers to find .text section vaddr and size."""
    import struct

    if elf_data[:4] != b'\x7fELF':
        return None, None

    # ELF64 header offsets
    e_shoff = struct.unpack_from('<Q', elf_data, 40)[0]
    e_shentsize = struct.unpack_from('<H', elf_data, 58)[0]
    e_shnum = struct.unpack_from('<H', elf_data, 60)[0]
    e_shstrndx = struct.unpack_from('<H', elf_data, 62)[0]

    str_sec_off = e_shoff + e_shstrndx * e_shentsize
    sh_offset_str = struct.unpack_from('<Q', elf_data, str_sec_off + 24)[0]  # sh_offset
    sh_size_str = struct.unpack_from('<Q', elf_data, str_sec_off + 32)[0]    # sh_size
    strtab = elf_data[sh_offset_str:sh_offset_str + sh_size_str]

    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        sh_name_idx = struct.unpack_from('<I', elf_data, off)[0]
        name_end = strtab.find(b'\x00', sh_name_idx)
        name = strtab[sh_name_idx:name_end].decode('ascii', errors='replace')
        if name == '.text':
            sh_addr = struct.unpack_from('<Q', elf_data, off + 16)[0]
            sh_size = struct.unpack_from('<Q', elf_data, off + 32)[0]
            return sh_addr, sh_size

    return None, None


def scan_prologues(elf_data: bytes, text_vaddr: int, text_size: int) -> list:
    """Scan .text for function prologues (same patterns as unlace)."""
    ENDBR64 = bytes([0xf3, 0x0f, 0x1e, 0xfa])
    PUSH_RBP_MOV = bytes([0x55, 0x48, 0x89, 0xe5])
    SUB_RSP = bytes([0x48, 0x83, 0xec])

    text_data = elf_data[text_vaddr:text_vaddr + text_size]
    addrs = set()
    idx = 0

    while idx < len(text_data):
        if idx + 4 <= len(text_data) and text_data[idx:idx + 4] == ENDBR64:
            addrs.add(text_vaddr + idx)
            idx += 4
            continue
        if idx + 4 <= len(text_data) and text_data[idx:idx + 4] == PUSH_RBP_MOV:
            addrs.add(text_vaddr + idx)
            idx += 4
            continue
        if idx + 3 <= len(text_data) and text_data[idx:idx + 3] == SUB_RSP:
            addrs.add(text_vaddr + idx)
            idx += 3
            continue
        idx += 1

    return sorted(addrs)


# ──────────────────────────────────────────────────────────────────────
# IDA reference loading
# ──────────────────────────────────────────────────────────────────────

def load_ida_refs(ref_dir: Path) -> dict:
    """Load IDA reference .c files, keyed by lowercase function name."""
    refs = {}
    for f in ref_dir.iterdir():
        if f.suffix != '.c':
            continue
        name = f.stem.lower()
        source = f.read_text(errors='replace')
        refs[name] = source
    return refs


def ida_filename_for(name: str, ref_dir: Path) -> Path:
    """Find IDA reference file, handling case differences."""
    candidate = ref_dir / f"{name}.c"
    if candidate.exists():
        return candidate
    if name.startswith("sub_"):
        upper_name = "sub_" + name[4:].upper()
        candidate = ref_dir / f"{upper_name}.c"
        if candidate.exists():
            return candidate
    return None


# ──────────────────────────────────────────────────────────────────────
# unlace invocation
# ──────────────────────────────────────────────────────────────────────

def run_unlace(unlace_bin: Path, binary: Path, func_name: str,
               timeout_secs: int = 30) -> str:
    """Run unlace to decompile a single function, return C output."""
    try:
        result = subprocess.run(
            [str(unlace_bin), "decompile", "--function", func_name,
             "--timeout", str(timeout_secs), str(binary)],
            capture_output=True, text=True, timeout=timeout_secs + 10)
        if result.returncode != 0:
            return None
        return result.stdout
    except subprocess.TimeoutExpired:
        return None
    except Exception as e:
        return None


# ──────────────────────────────────────────────────────────────────────
# Report formatting
# ──────────────────────────────────────────────────────────────────────

def format_report(results: list, binary_path: str, ref_path: str) -> str:
    """Format the parity report."""
    lines = []
    lines.append("")
    lines.append("Parity Report — unlace vs IDA Hex-Rays")
    lines.append("═" * 60)
    lines.append(f"Binary:     {binary_path}")
    lines.append(f"References: {ref_path}")
    lines.append(f"Functions:  {len(results)} compared")
    lines.append("")
    lines.append(f"{'Function':<30} | {'Score':>5} | Notes")
    lines.append("─" * 30 + "─┼─" + "─" * 5 + "─┼─" + "─" * 40)

    scores = []
    for r in results:
        name = r["name"]
        score = r["score"]
        notes = r.get("notes", "")
        scores.append(score)

        if len(notes) > 40:
            notes = notes[:37] + "..."
        lines.append(f"{name:<30} | {score:4.0f}% | {notes}")

    lines.append("─" * 80)

    if scores:
        overall = sum(scores) / len(scores)
    else:
        overall = 0.0

    lines.append(f"Overall Parity: {overall:.1f}%")
    lines.append(f"Functions scored: {len(scores)}")
    lines.append("")

    lines.append("Detailed Feature Breakdown")
    lines.append("═" * 60)
    for r in results:
        lines.append(f"\n  {r['name']} — {r['score']:.0f}%")
        for s in r.get("feature_scores", []):
            indicator = "✓" if s["score"] >= 1.0 else "✗"
            lines.append(f"    {indicator} {s['name']:<16} "
                         f"IDA={s['ida_val']!s:<6} unlace={s['unlace_val']!s:<6} "
                         f"({s['score']*100:.0f}%)"
                         + (f"  {s['note']}" if s.get('note') else ""))

    lines.append("")
    return "\n".join(lines)


# ──────────────────────────────────────────────────────────────────────
# Main
# ──────────────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(
        description="Measure parity between unlace and IDA Hex-Rays decompilation")
    parser.add_argument("--binary", type=Path,
                        default=Path("hexrays/ida-9.1/hexx64.so"),
                        help="Binary to decompile (default: hexrays/ida-9.1/hexx64.so)")
    parser.add_argument("--refs", type=Path,
                        default=Path("research/decompiled-references/hexrays/ida_dump/hexx64/all"),
                        help="IDA reference directory")
    parser.add_argument("--unlace", type=Path,
                        default=Path("target/release/unlace"),
                        help="Path to unlace binary")
    parser.add_argument("--max-functions", type=int, default=0,
                        help="Max functions to compare (0=all overlapping)")
    parser.add_argument("--timeout", type=int, default=30,
                        help="Per-function timeout in seconds")
    parser.add_argument("--json", action="store_true",
                        help="Output JSON instead of text report")
    args = parser.parse_args()

    if not args.binary.exists():
        print(f"Error: binary not found: {args.binary}", file=sys.stderr)
        sys.exit(1)
    if not args.refs.is_dir():
        print(f"Error: reference directory not found: {args.refs}", file=sys.stderr)
        sys.exit(1)
    if not args.unlace.exists():
        print(f"Error: unlace binary not found: {args.unlace}", file=sys.stderr)
        print("  Run: cargo build --release", file=sys.stderr)
        sys.exit(1)

    elf_data = args.binary.read_bytes()
    text_vaddr, text_size = find_text_section(elf_data)
    if text_vaddr is None:
        print("Error: could not find .text section", file=sys.stderr)
        sys.exit(1)

    print(f"Binary: {args.binary}", file=sys.stderr)
    print(f".text section: 0x{text_vaddr:x} size=0x{text_size:x}", file=sys.stderr)

    # Find functions discoverable by unlace's prologue scanner (endbr64/push rbp/sub rsp)
    prologue_addrs = scan_prologues(elf_data, text_vaddr, text_size)
    prologue_names = {f"sub_{addr:x}" for addr in prologue_addrs}
    print(f"Prologue scan: {len(prologue_names)} functions", file=sys.stderr)

    ida_refs = load_ida_refs(args.refs)
    ida_names = set(ida_refs.keys())
    print(f"IDA references: {len(ida_names)} functions", file=sys.stderr)

    # IDA uses uppercase hex in filenames (sub_7B710); prologue_names uses lowercase (sub_7b710)
    overlap = []
    for pname in sorted(prologue_names):
        if pname in ida_names:
            overlap.append(pname)
        elif pname.startswith("sub_"):
            upper = "sub_" + pname[4:].upper()
            lower = pname
            if upper.lower() in ida_names:
                overlap.append(pname)

    overlap = sorted(set(overlap))

    print(f"Overlapping functions: {len(overlap)}", file=sys.stderr)

    if not overlap:
        print("Error: no overlapping functions found between unlace and IDA",
              file=sys.stderr)
        sys.exit(1)

    if args.max_functions > 0:
        overlap = overlap[:args.max_functions]

    results = []
    for i, func_name in enumerate(overlap):
        print(f"  [{i+1}/{len(overlap)}] {func_name}...", end="", file=sys.stderr)

        ida_path = ida_filename_for(func_name, args.refs)
        if ida_path is None:
            print(" skip (no IDA ref)", file=sys.stderr)
            continue
        ida_source = ida_path.read_text(errors='replace')
        ida_feats = extract_features(ida_source)

        unlace_output = run_unlace(args.unlace, args.binary, func_name,
                                   args.timeout)
        if unlace_output is None:
            print(" FAIL (unlace error)", file=sys.stderr)
            results.append({
                "name": func_name,
                "score": 0.0,
                "notes": "unlace decompilation failed",
                "feature_scores": [],
            })
            continue

        unlace_feats = extract_features(unlace_output)

        pct, scores, mismatches = compute_parity(ida_feats, unlace_feats)

        notes_str = "; ".join(
            f"{s.name}: {s.note}" for s in mismatches[:3]
        )

        results.append({
            "name": func_name,
            "score": pct,
            "notes": notes_str,
            "feature_scores": [
                {
                    "name": s.name,
                    "ida_val": repr(s.ida_val) if isinstance(s.ida_val, list) else s.ida_val,
                    "unlace_val": repr(s.unlace_val) if isinstance(s.unlace_val, list) else s.unlace_val,
                    "score": s.score,
                    "note": s.note,
                }
                for s in scores
            ],
            "ida_lines": ida_feats.line_count,
            "unlace_lines": unlace_feats.line_count,
        })

        print(f" {pct:.0f}%", file=sys.stderr)

    if args.json:
        overall = sum(r["score"] for r in results) / len(results) if results else 0.0
        output = {
            "binary": str(args.binary),
            "refs": str(args.refs),
            "overall_parity": overall,
            "functions": results,
        }
        print(json.dumps(output, indent=2))
    else:
        report = format_report(results, str(args.binary), str(args.refs))
        print(report)


if __name__ == "__main__":
    main()
