#!/usr/bin/env python3
"""Drive dump_functions.py over the fixtures and an external corpus.

Plain Python 3 (stdlib only). For every binary it builds an IDA database once,
then runs the dumper on a fresh copy of that database, enforcing a
per-function timeout: if the dumper stays on one function longer than
--function-timeout, it is killed, the function is recorded with status
"timeout", and a new dumper resumes after it.

Output (default target/hexrays-oracle/, git-ignored):

  <set>/<name>/inventory.json      IDA function list
  <set>/<name>/functions/<ea>.json per-function facts (see dump_functions.py)
  <set>/<name>/microcode/<ea>.json per-maturity microcode
  <set>/<name>/status.json         run summary (counts, restarts)
  index.json                       every dumped binary and its source path
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import signal
import subprocess
import sys
import time
from pathlib import Path

HERE = Path(__file__).resolve().parent
REPO = HERE.parent.parent
DEFAULT_CORPUS = Path.home() / "SiteResearch" / "ida-rs-corpus"
DUMPER = HERE / "dump_functions.py"
MAX_RESTARTS = 50


def write_json(path: Path, value) -> None:
    tmp = path.with_suffix(path.suffix + ".tmp")
    tmp.write_text(json.dumps(value, indent=1, sort_keys=True) + "\n", encoding="utf-8")
    os.replace(tmp, path)


def is_object_file(path: Path) -> bool:
    try:
        magic = path.open("rb").read(4)
    except OSError:
        return False
    return magic in (
        b"\x7fELF",
        b"\xcf\xfa\xed\xfe",
        b"\xce\xfa\xed\xfe",
        b"\xca\xfe\xba\xbe",
    ) or magic[:2] == b"MZ"


def fixture_targets() -> list[tuple[str, str, Path]]:
    out = []
    for path in sorted((REPO / "fixtures").iterdir()):
        if path.is_file() and is_object_file(path):
            out.append(("fixtures", path.name, path))
    return out


def corpus_targets(root: Path) -> list[tuple[str, str, Path]]:
    out = []
    for path in sorted((root / "binaries").rglob("*")):
        if path.is_file() and is_object_file(path):
            rel = path.relative_to(root / "binaries")
            out.append(("corpus", "__".join(rel.parts), path))
    return out


def run(cmd: list[str], timeout: float) -> int:
    proc = subprocess.Popen(cmd, start_new_session=True)
    try:
        return proc.wait(timeout=timeout)
    except subprocess.TimeoutExpired:
        os.killpg(proc.pid, signal.SIGKILL)
        proc.wait()
        return -1


def build_database(python: str, binary: Path, work: Path, timeout: float) -> Path | None:
    work.mkdir(parents=True, exist_ok=True)
    database = work / (binary.name + ".i64")
    if database.exists():
        return database
    copy = work / binary.name
    shutil.copyfile(binary, copy)
    code = run([python, str(DUMPER), str(copy), str(work / "analysis"), "--analyze-only"], timeout)
    shutil.rmtree(work / "analysis", ignore_errors=True)
    copy.unlink(missing_ok=True)
    if code != 0 or not database.exists():
        print(f"[oracle] analysis failed ({code}) for {binary}", flush=True)
        return None
    return database


def clean_run_dir(run_dir: Path) -> None:
    shutil.rmtree(run_dir, ignore_errors=True)
    run_dir.mkdir(parents=True)


def mark(out: Path, ea: int, name: str, status: str, error: str) -> None:
    write_json(
        out / "functions" / f"{ea:016x}.json",
        {"schema": 1, "ea": ea, "name": name, "status": status, "error": error},
    )


def dump_binary(python: str, database: Path, out: Path, args) -> dict:
    run_dir = out / "work" / "run"
    current = out / "current.json"
    restarts = 0
    while True:
        clean_run_dir(run_dir)
        copy = run_dir / database.name
        shutil.copyfile(database, copy)
        current.unlink(missing_ok=True)
        cmd = [python, str(DUMPER), str(copy), str(out)]
        if args.no_microcode:
            cmd.append("--no-microcode")
        proc = subprocess.Popen(cmd, start_new_session=True, stdout=subprocess.DEVNULL)
        seen: tuple[int, float] | None = None
        killed_on: dict | None = None
        while proc.poll() is None:
            time.sleep(0.5)
            try:
                cur = json.loads(current.read_text())
            except (OSError, ValueError):
                continue
            if seen is None or seen[0] != cur["ea"]:
                seen = (cur["ea"], time.monotonic())
            elif time.monotonic() - seen[1] > args.function_timeout:
                os.killpg(proc.pid, signal.SIGKILL)
                proc.wait()
                killed_on = cur
        if killed_on is None and proc.returncode == 0:
            break
        cur = killed_on
        if cur is None:
            try:
                cur = json.loads(current.read_text())
            except (OSError, ValueError):
                cur = None
        if cur is None:
            return {"status": f"dumper exited with {proc.returncode}", "restarts": restarts}
        if killed_on is not None:
            mark(out, cur["ea"], cur["name"], "timeout", f"exceeded {args.function_timeout}s")
        else:
            mark(out, cur["ea"], cur["name"], "crashed", f"dumper exited with {proc.returncode}")
        restarts += 1
        if restarts > MAX_RESTARTS:
            return {"status": "too many restarts", "restarts": restarts}
    shutil.rmtree(run_dir, ignore_errors=True)
    current.unlink(missing_ok=True)
    return {"status": "ok", "restarts": restarts}


def source_label(binary: Path) -> str:
    """Repo-relative for fixtures, so the index survives a different checkout."""
    try:
        return str(binary.relative_to(REPO))
    except ValueError:
        return str(binary)


def summarize(out: Path) -> dict:
    counts: dict[str, int] = {}
    for path in sorted((out / "functions").glob("*.json")):
        status = json.loads(path.read_text()).get("status", "unknown")
        counts[status] = counts.get(status, 0) + 1
    return dict(sorted(counts.items()))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("binaries", nargs="*", type=Path, help="extra binaries (set 'extra')")
    parser.add_argument("--out", type=Path, default=REPO / "target" / "hexrays-oracle")
    parser.add_argument("--fixtures", action="store_true", help="dump every object file under fixtures/")
    parser.add_argument("--corpus", type=Path, nargs="?", const=DEFAULT_CORPUS, default=None,
                        help=f"dump <corpus>/binaries/** (default {DEFAULT_CORPUS})")
    parser.add_argument("--idalib-python", default="idalib",
                        help="IDAlib-enabled Python interpreter (default: the 'idalib' wrapper on PATH)")
    parser.add_argument("--function-timeout", type=float, default=120.0)
    parser.add_argument("--analysis-timeout", type=float, default=3600.0)
    parser.add_argument("--max-size-mb", type=float, default=16.0, help="skip larger binaries")
    parser.add_argument("--only", default="", help="substring filter on target names")
    parser.add_argument("--no-microcode", action="store_true")
    args = parser.parse_args()

    targets = []
    if args.fixtures:
        targets += fixture_targets()
    if args.corpus is not None:
        targets += corpus_targets(args.corpus)
    targets += [("extra", p.name, p.resolve()) for p in args.binaries]
    if args.only:
        targets = [t for t in targets if args.only in t[1]]
    if not targets:
        parser.error("nothing to do: pass --fixtures, --corpus, or binaries")

    index_path = args.out / "index.json"
    index = json.loads(index_path.read_text()) if index_path.exists() else {}
    for group, name, binary in targets:
        key = f"{group}/{name}"
        size_mb = binary.stat().st_size / (1024 * 1024)
        if size_mb > args.max_size_mb:
            print(f"[oracle] skip {key}: {size_mb:.1f} MB > --max-size-mb", flush=True)
            continue
        out = args.out / group / name
        (out / "functions").mkdir(parents=True, exist_ok=True)
        print(f"[oracle] {key}", flush=True)
        started = time.monotonic()
        database = build_database(args.idalib_python, binary, out / "work", args.analysis_timeout)
        if database is None:
            result = {"status": "analysis failed", "restarts": 0}
        else:
            result = dump_binary(args.idalib_python, database, out, args)
        result["functions"] = summarize(out)
        result["source"] = source_label(binary)
        write_json(out / "status.json", result)
        index[key] = {"source": source_label(binary), "status": result["status"]}
        write_json(index_path, dict(sorted(index.items())))
        print(f"[oracle] {key}: {result} in {time.monotonic() - started:.0f}s", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
