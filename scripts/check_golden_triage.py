#!/usr/bin/env python3
"""Golden triage ledger gate: every golden artifact has one classified row with a reason and next action.

Reads tests/golden/triage.toml (see its header for the classes) and checks, without running anything:
  - every file under tests/golden/vectors (csv, and lift/*.txt except README.md) has exactly one [[golden]] row;
  - every [[golden]] row names an existing file, a valid class, a reason and a next action, and an existing
    replay test (`consumer`) that reads that file (its text names the file or the lift directory);
  - every snapshot-manifest.json test whose status is not "ok" has one [[manifest]] row with a valid class,
    reason and next action; a [[manifest]] row for a test that is "ok" (or absent) is stale and fails.
Whether a row still matches is decided by its consumer test, not here.
"""
from pathlib import Path
import json
import sys

try:
    import tomllib
except ModuleNotFoundError:
    tomllib = None

CLASSES = {"exact-pass", "mixed", "stale-golden", "producer-bug"}
LEDGER = "tests/golden/triage.toml"
VECTORS = "tests/golden/vectors"
MANIFEST = "tests/golden/snapshot-manifest.json"


def _needs_text(row: dict, where: str) -> list[str]:
    errors = []
    if row.get("class") not in CLASSES:
        errors.append(f"{where}: class {row.get('class')!r} is not one of {sorted(CLASSES)}")
    for key in ("reason", "next_action"):
        if not str(row.get(key, "")).strip():
            errors.append(f"{where}: missing {key}")
    return errors


def check(root: Path) -> list[str]:
    if tomllib is None:
        return ["tomllib needed (Python 3.11+)"]
    ledger_path = root / LEDGER
    if not ledger_path.is_file():
        return [f"{LEDGER}: missing"]
    ledger = tomllib.loads(ledger_path.read_text())
    errors: list[str] = []

    vectors = root / VECTORS
    on_disk = {p.relative_to(root).as_posix() for p in vectors.glob("*.csv")}
    on_disk |= {p.relative_to(root).as_posix() for p in (vectors / "lift").glob("*.txt") if p.name != "README.md"}
    rows: dict[str, dict] = {}
    for row in ledger.get("golden", []):
        path = row.get("path", "")
        if path in rows:
            errors.append(f"{path}: more than one [[golden]] row")
            continue
        rows[path] = row
        where = f"{LEDGER} [{path}]"
        errors += _needs_text(row, where)
        if not (root / path).is_file():
            errors.append(f"{where}: file does not exist")
        consumer = row.get("consumer", "")
        consumer_path = root / consumer
        if not consumer or not consumer_path.is_file():
            errors.append(f"{where}: consumer {consumer!r} does not exist")
        else:
            marker = "vectors/lift" if "/lift/" in path else Path(path).name
            if marker not in consumer_path.read_text():
                errors.append(f"{where}: consumer {consumer} does not read {marker}")
    for path in sorted(on_disk - rows.keys()):
        errors.append(f"{path}: no [[golden]] row in {LEDGER}")

    manifest = json.loads((root / MANIFEST).read_text())["tests"]
    non_ok = {name for name, test in manifest.items() if test.get("status") != "ok"}
    manifest_rows: dict[str, dict] = {}
    for row in ledger.get("manifest", []):
        name = row.get("name", "")
        if name in manifest_rows:
            errors.append(f"{LEDGER} [manifest {name}]: more than one row")
            continue
        manifest_rows[name] = row
        where = f"{LEDGER} [manifest {name}]"
        errors += _needs_text(row, where)
        if name not in non_ok:
            errors.append(f"{where}: stale, test is absent or has status ok")
    for name in sorted(non_ok - manifest_rows.keys()):
        errors.append(f"{MANIFEST}: test {name!r} is not ok and has no [[manifest]] row in {LEDGER}")
    return errors


if __name__ == "__main__":
    errors = check(Path(__file__).resolve().parents[1])
    if errors:
        print("\n".join(errors), file=sys.stderr)
        raise SystemExit(1)
    print("Golden triage ledger: every golden artifact has a classified row")
