#!/usr/bin/env python3
"""Stratified golden corpus extraction from IDA Hex-Rays dumps."""

import argparse
import json
import re
import shutil
import sys
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
DEFAULT_DUMP_BASE = PROJECT_ROOT / "research" / "decompiled-references" / "hexrays" / "ida_dump"
GOLDEN_BASE = PROJECT_ROOT / "tests" / "golden"

ARCHS = [
    ("hexx64", "x86_64", 150),
    ("hexarm", "arm", 25),
    ("hexrv", "riscv", 15),
    ("hexmips", "mips", 15),
    ("hexppc", "ppc", 15),
    ("hexv850", "v850", 15),
    ("hexarc", "arc", 15),
]

COMPLEXITY_RATIOS = {
    "trivial": 0.30,
    "simple": 0.30,
    "branchy": 0.20,
    "complex": 0.20,
}

# if(, while(, for(, switch(, goto label — control-flow statement pattern
CONTROL_RE = re.compile(r'\b(?:if|while|for)\s*\(|switch\s*\(|goto\s+\w')
SKIP_FILENAME_RE = re.compile(r'^(nullsub_|__unwind_resume)')


def classify_complexity(control_count: int) -> str:
    if control_count == 0:
        return "trivial"
    elif control_count <= 3:
        return "simple"
    elif control_count <= 9:
        return "branchy"
    else:
        return "complex"


def has_real_body(content: str) -> bool:
    """Reject extern-only stubs that lack a decompiled function body."""
    lines = content.strip().split('\n')
    non_comment = [
        l.strip() for l in lines
        if l.strip() and not l.strip().startswith(('//', '/*', '*'))
    ]
    if not non_comment:
        return False
    if all(l.startswith('extern ') for l in non_comment):
        return False
    return '{' in '\n'.join(non_comment)


def analyze_file(filepath: Path) -> dict | None:
    fname = filepath.stem

    if fname.startswith('.') or SKIP_FILENAME_RE.match(fname):
        return None

    try:
        content = filepath.read_text(encoding='utf-8', errors='replace')
    except OSError:
        return None

    if not has_real_body(content):
        return None

    if 'THUNK / TRAMPOLINE' in content:
        return None

    control_count = len(CONTROL_RE.findall(content))

    return {
        "filename": filepath.name,
        "function_name": fname,
        "control_count": control_count,
        "complexity": classify_complexity(control_count),
        "block_count": content.count('{'),
        "filepath": str(filepath),
    }


def select_stratified(candidates: list[dict], target_count: int) -> list[dict]:
    """Deterministic stratified selection: sort by filename, allocate per-complexity bucket."""
    candidates.sort(key=lambda x: x["filename"])

    buckets: dict[str, list[dict]] = {k: [] for k in COMPLEXITY_RATIOS}
    for c in candidates:
        buckets[c["complexity"]].append(c)

    # Allocate per-bucket targets; last bucket absorbs rounding remainder
    targets = {}
    allocated = 0
    items = list(COMPLEXITY_RATIOS.items())
    for i, (comp, ratio) in enumerate(items):
        if i == len(items) - 1:
            targets[comp] = target_count - allocated
        else:
            targets[comp] = round(target_count * ratio)
            allocated += targets[comp]

    selected = []
    overflow = []

    for comp in COMPLEXITY_RATIOS:
        bucket = buckets[comp]
        want = targets[comp]
        if len(bucket) >= want:
            selected.extend(bucket[:want])
            overflow.extend(bucket[want:])
        else:
            selected.extend(bucket)

    remaining = target_count - len(selected)
    if remaining > 0:
        overflow.sort(key=lambda x: x["filename"])
        selected.extend(overflow[:remaining])

    assert len(selected) == target_count, \
        f"Expected {target_count} but got {len(selected)}"

    return selected


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Select a stratified golden corpus from IDA Hex-Rays dumps."
    )
    parser.add_argument(
        "--dump-base",
        type=Path,
        default=DEFAULT_DUMP_BASE,
        help="IDA dump root containing hexx64/hexarm/... subdirectories",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Analyze and print the selected corpus without rewriting tests/golden",
    )
    return parser.parse_args()


def missing_source_dirs(dump_base: Path) -> list[Path]:
    return [dump_base / source_dir / "all" for source_dir, _, _ in ARCHS
            if not (dump_base / source_dir / "all").is_dir()]


def main():
    args = parse_args()
    dump_base = args.dump_base.resolve()

    print("=== Stratified Golden Corpus Extraction ===\n")
    print(f"IDA dump root: {dump_base}")
    if args.dry_run:
        print("Mode: dry-run (tests/golden will not be rewritten)\n")
    else:
        print(f"Output: {GOLDEN_BASE}\n")

    missing = missing_source_dirs(dump_base)
    if missing:
        print("Missing IDA dump source directories:", file=sys.stderr)
        for path in missing:
            print(f"  {path}", file=sys.stderr)
        return 1

    if not args.dry_run and GOLDEN_BASE.exists():
        shutil.rmtree(GOLDEN_BASE)

    manifest = []

    for source_dir, target_dir, target_count in ARCHS:
        src_path = dump_base / source_dir / "all"
        dst_path = GOLDEN_BASE / target_dir
        if not args.dry_run:
            dst_path.mkdir(parents=True, exist_ok=True)

        print(f"Processing {source_dir} -> {target_dir} (target: {target_count})...")

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

        pool_dist = {}
        for c in candidates:
            pool_dist[c["complexity"]] = pool_dist.get(c["complexity"], 0) + 1
        print(f"  Pool distribution: {pool_dist}")

        selected = select_stratified(candidates, target_count)

        sel_dist = {}
        for entry in selected:
            src_file = Path(entry["filepath"])
            if not args.dry_run:
                shutil.copy2(src_file, dst_path / entry["filename"])

            manifest.append({
                "arch": target_dir,
                "complexity": entry["complexity"],
                "source_path": str(src_file.relative_to(PROJECT_ROOT)),
                "function_name": entry["function_name"],
                "block_count": entry["block_count"],
            })
            sel_dist[entry["complexity"]] = sel_dist.get(entry["complexity"], 0) + 1

        print(f"  Selected distribution: {sel_dist}")

    manifest.sort(key=lambda x: (x["arch"], x["function_name"]))

    manifest_path = GOLDEN_BASE / "manifest.json"
    if not args.dry_run:
        with open(manifest_path, 'w') as f:
            json.dump(manifest, f, indent=2)
            f.write('\n')

    print()
    if args.dry_run:
        print(f"Manifest preview: {manifest_path}")
    else:
        print(f"Manifest written: {manifest_path}")
    print(f"Total entries: {len(manifest)}")

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
            print(f"  FAIL: {comp} bucket below 15% threshold!")
            sys.exit(1)

    print(f"\nDone! {total} golden files across {len(ARCHS)} architectures.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
