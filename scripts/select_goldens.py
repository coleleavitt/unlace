#!/usr/bin/env python3
"""
Stratified golden corpus extraction for unlace decompiler tests.

Selects 250 functions across 7 architectures with deterministic,
complexity-stratified sampling. Produces tests/golden/{arch}/*.c
and tests/golden/manifest.json.
"""

import json
import os
import re
import shutil
import sys
from pathlib import Path

# === Configuration ===

PROJECT_ROOT = Path(__file__).resolve().parent.parent
DUMP_BASE = PROJECT_ROOT / "references" / "hexrays" / "ida_dump"
GOLDEN_BASE = PROJECT_ROOT / "tests" / "golden"

# Architecture mapping: source_dir -> target_dir, count
ARCHS = [
    ("hexx64", "x86_64", 150),
    ("hexarm", "arm", 25),
    ("hexrv", "riscv", 15),
    ("hexmips", "mips", 15),
    ("hexppc", "ppc", 15),
    ("hexv850", "v850", 15),
    ("hexarc", "arc", 15),
]

# Complexity buckets: target ratios
# ~30% trivial, ~30% simple, ~20% branchy, ~20% complex
COMPLEXITY_RATIOS = {
    "trivial": 0.30,
    "simple": 0.30,
    "branchy": 0.20,
    "complex": 0.20,
}

# Control-flow keywords to count
CONTROL_RE = re.compile(r'\b(?:if|while|for)\s*\(|switch\s*\(|goto\s+\w')

# Patterns to skip
SKIP_FILENAME_RE = re.compile(r'^(nullsub_|__unwind_resume)')
EXTERN_ONLY_RE = re.compile(r'^\s*extern\s+', re.MULTILINE)


def classify_complexity(control_count: int) -> str:
    """Classify a function's complexity by control-flow statement count."""
    if control_count == 0:
        return "trivial"
    elif control_count <= 3:
        return "simple"
    elif control_count <= 9:
        return "branchy"
    else:
        return "complex"


def count_blocks(content: str) -> int:
    """Count opening braces as a proxy for block count."""
    return content.count('{')


def has_real_body(content: str) -> bool:
    """Check if file contains a real function body (not just extern/import)."""
    # Must have at least one opening brace that's part of a function body
    # Extern-only files have no { or only comment/metadata
    lines = content.strip().split('\n')

    # Filter out comment-only and extern-only files
    non_comment_lines = []
    for line in lines:
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*') or stripped == '':
            continue
        non_comment_lines.append(stripped)

    if not non_comment_lines:
        return False

    # If all non-comment lines are extern declarations, skip
    real_lines = [l for l in non_comment_lines if not l.startswith('extern ')]
    if not real_lines:
        return False

    # Must have at least one { in non-comment content
    body = '\n'.join(non_comment_lines)
    if '{' not in body:
        return False

    return True


def analyze_file(filepath: Path) -> dict | None:
    """Analyze a .c file and return its metadata, or None if it should be skipped."""
    fname = filepath.stem  # filename without .c

    # Skip known stubs
    if SKIP_FILENAME_RE.match(fname):
        return None

    try:
        content = filepath.read_text(encoding='utf-8', errors='replace')
    except OSError:
        return None

    # Skip extern-only / no-body files
    if not has_real_body(content):
        return None

    # Count control-flow statements
    control_count = len(CONTROL_RE.findall(content))
    complexity = classify_complexity(control_count)
    block_count = count_blocks(content)

    return {
        "filename": filepath.name,
        "function_name": fname,
        "control_count": control_count,
        "complexity": complexity,
        "block_count": block_count,
        "filepath": str(filepath),
    }


def select_stratified(candidates: list[dict], target_count: int) -> list[dict]:
    """
    Select target_count files from candidates with stratified complexity sampling.
    Deterministic: sort by filename, take first N from each bucket.
    """
    # Sort candidates by filename for determinism
    candidates.sort(key=lambda x: x["filename"])

    # Group by complexity
    buckets: dict[str, list[dict]] = {k: [] for k in COMPLEXITY_RATIOS}
    for c in candidates:
        buckets[c["complexity"]].append(c)

    # Calculate target per bucket
    targets = {}
    allocated = 0
    items = list(COMPLEXITY_RATIOS.items())
    for i, (comp, ratio) in enumerate(items):
        if i == len(items) - 1:
            # Last bucket gets remainder to ensure exact total
            targets[comp] = target_count - allocated
        else:
            targets[comp] = round(target_count * ratio)
            allocated += targets[comp]

    # Select from each bucket
    selected = []
    overflow = []  # candidates not selected from over-full buckets

    for comp in COMPLEXITY_RATIOS:
        bucket = buckets[comp]
        want = targets[comp]
        if len(bucket) >= want:
            selected.extend(bucket[:want])
            overflow.extend(bucket[want:])
        else:
            # Take all available, need to fill remainder from other buckets
            selected.extend(bucket)
            targets[comp] = len(bucket)  # track actual

    # If we're short (some buckets didn't have enough), fill from overflow
    remaining = target_count - len(selected)
    if remaining > 0:
        overflow.sort(key=lambda x: x["filename"])
        selected.extend(overflow[:remaining])

    assert len(selected) == target_count, \
        f"Expected {target_count} but got {len(selected)}"

    return selected


def main():
    print("=== Stratified Golden Corpus Extraction ===\n")

    # Clean output directory
    if GOLDEN_BASE.exists():
        shutil.rmtree(GOLDEN_BASE)

    manifest = []
    stats = {}

    for source_dir, target_dir, target_count in ARCHS:
        src_path = DUMP_BASE / source_dir / "all"
        dst_path = GOLDEN_BASE / target_dir
        dst_path.mkdir(parents=True, exist_ok=True)

        print(f"Processing {source_dir} -> {target_dir} (target: {target_count})...")

        # Analyze all files
        c_files = sorted(src_path.glob("*.c"))
        candidates = []
        skipped = 0
        for f in c_files:
            info = analyze_file(f)
            if info is None:
                skipped += 1
                continue
            candidates.append(info)

        print(f"  Total: {len(c_files)}, Valid: {len(candidates)}, Skipped: {skipped}")

        # Show complexity distribution of pool
        pool_dist = {}
        for c in candidates:
            pool_dist[c["complexity"]] = pool_dist.get(c["complexity"], 0) + 1
        print(f"  Pool distribution: {pool_dist}")

        # Select stratified sample
        selected = select_stratified(candidates, target_count)

        # Copy files and build manifest entries
        sel_dist = {}
        for entry in selected:
            src_file = Path(entry["filepath"])
            dst_file = dst_path / entry["filename"]
            shutil.copy2(src_file, dst_file)

            manifest.append({
                "arch": target_dir,
                "complexity": entry["complexity"],
                "source_path": str(src_file.relative_to(PROJECT_ROOT)),
                "function_name": entry["function_name"],
                "block_count": entry["block_count"],
            })

            sel_dist[entry["complexity"]] = sel_dist.get(entry["complexity"], 0) + 1

        print(f"  Selected distribution: {sel_dist}")
        stats[target_dir] = {"total": target_count, "distribution": sel_dist}

    # Sort manifest by arch then function_name
    manifest.sort(key=lambda x: (x["arch"], x["function_name"]))

    # Write manifest
    manifest_path = GOLDEN_BASE / "manifest.json"
    with open(manifest_path, 'w') as f:
        json.dump(manifest, f, indent=2)
        f.write('\n')

    print(f"\nManifest written: {manifest_path}")
    print(f"Total entries: {len(manifest)}")

    # Verify complexity distribution across entire corpus
    print("\n=== Global Complexity Distribution ===")
    global_dist = {}
    for entry in manifest:
        global_dist[entry["complexity"]] = global_dist.get(entry["complexity"], 0) + 1

    total = len(manifest)
    for comp in ["trivial", "simple", "branchy", "complex"]:
        count = global_dist.get(comp, 0)
        pct = count / total * 100
        print(f"  {comp}: {count} ({pct:.1f}%)")
        if pct < 15:
            print(f"  WARNING: {comp} bucket is below 15% threshold!")
            sys.exit(1)

    print(f"\nDone! {total} golden files selected across {len(ARCHS)} architectures.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
