"""Run unlace over the corpus and score every function into the database.

`score_run` decompiles each binary's stripped twin once
(`unlace decompile-all <stripped> --json` with the run's `--option` arms), pairs
the records with the ground-truth functions, scores each pair (`metrics.score`)
and writes one `results` row per metric. `--project` also runs
`decompile-project` and adds `recompiles` (a `clang -fsyntax-only` pass over the
exported .c, errors attributed to the function they fall in) and
`global_type_trex` (the header's `extern` declarations against DWARF globals).

`ingest` scores a decompile-all-shaped JSON document another tool produced (a
reference decompiler's exporter), so a reference run sits in the same tables.

Pairing: in an object, unlace's `object_location` (`section+offset`) against the
symbol table's section of the DWARF entry; in a linked image, addresses, after a
binary-wide shift chosen to maximize the overlap (a loader may rebase a PIE).
"""
from __future__ import annotations

import hashlib
import json
import os
import re
import shutil
import subprocess
import tempfile
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

from .. import paths
from . import db, metrics

_SHIFT_CANDIDATES = (0, 0x100000, 0x400000, 0x10000, 0x8000000, 0x100000000)


def unlace_bin(explicit: str | None = None) -> str:
    for cand in (explicit, os.environ.get("UNLACE_BIN"), os.environ.get("UNLACE_BIN")):
        if cand:
            return cand
    root = paths.repo_root()
    for profile in ("debug", "release"):
        exe = root / "target" / profile / "unlace"
        if exe.exists():
            return str(exe)
    return "unlace"


def file_sha256(path: str) -> str | None:
    try:
        h = hashlib.sha256()
        with open(path, "rb") as fh:
            for chunk in iter(lambda: fh.read(1 << 20), b""):
                h.update(chunk)
        return h.hexdigest()
    except OSError:
        return None


def git_rev() -> str | None:
    try:
        p = subprocess.run(["git", "-C", str(paths.repo_root()), "rev-parse", "HEAD"],
                           capture_output=True, text=True, timeout=30)
        return p.stdout.strip() or None
    except OSError:
        return None


def option_args(options: list[tuple[str, str]]) -> list[str]:
    out = []
    for k, v in options:
        out += ["--option", k, v]
    return out


def decompile_all(exe: str, binary: str, options, extra: list[str], timeout: int,
                  max_fn_seconds: int) -> tuple[dict | None, str | None, float]:
    cmd = [exe, "decompile-all", binary, "--json", "--max-fn-seconds", str(max_fn_seconds)]
    cmd += option_args(options) + extra
    start = time.time()
    try:
        p = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return None, f"timeout after {timeout}s", time.time() - start
    seconds = time.time() - start
    if not p.stdout.strip():
        return None, f"exit {p.returncode}: {p.stderr.strip()[-400:]}", seconds
    try:
        return json.loads(p.stdout), None, seconds
    except json.JSONDecodeError as e:
        return None, f"bad JSON: {e}", seconds


def _addr(rec: dict) -> int | None:
    a = rec.get("address")
    if isinstance(a, int):
        return a
    if isinstance(a, str):
        try:
            return int(a, 0)
        except ValueError:
            return None
    h = rec.get("address_hex")
    return int(h, 16) if isinstance(h, str) else None


def pair(gt: dict, doc: dict) -> tuple[dict, int, dict]:
    """-> ({gt key: pred record}, binary shift, {pred entry: name})."""
    recs = doc.get("functions") or []
    names = {}
    for r in recs:
        a = _addr(r)
        if a is not None:
            names[a] = r.get("name")
    gt_funcs = gt["functions"]
    if gt.get("relocatable"):
        by_loc = {}
        for r in recs:
            loc = r.get("object_location")
            if loc and loc.get("section") is not None:
                by_loc[f"{loc['section']}+{int(loc['offset']):#x}"] = r
        out = {k: by_loc[f["key"]] for k, f in gt_funcs.items() if f.get("key") in by_loc}
        shift = 0
        if out:
            k = next(iter(out))
            a = _addr(out[k])
            shift = (a - gt_funcs[k]["entry"]) if a is not None else 0
        return out, shift, names
    by_addr = {a: r for r in recs if (a := _addr(r)) is not None}
    entries = [f["entry"] for f in gt_funcs.values()]
    best, best_hits = 0, -1
    for s in _SHIFT_CANDIDATES:
        hits = sum(1 for e in entries if e + s in by_addr)
        if hits > best_hits:
            best, best_hits = s, hits
    return ({k: by_addr[f["entry"] + best] for k, f in gt_funcs.items() if f["entry"] + best in by_addr},
            best, names)


def score_binary(gt: dict, doc: dict) -> tuple[dict, dict]:
    """-> ({gt key: scorecard}, stats)."""
    paired, shift, names = pair(gt, doc)
    noreturn_names = {f["name"] for f in gt["functions"].values() if f.get("noreturn")}
    for f in gt["functions"].values():
        if f.get("noreturn") and f["key"] in paired:
            noreturn_names.add(paired[f["key"]].get("name"))
    cards = {}
    for key, fn in gt["functions"].items():
        rec = paired.get(key)
        fshift = shift
        if rec is not None and _addr(rec) is not None:
            fshift = _addr(rec) - fn["entry"]
        cards[key] = metrics.score(fn, rec, {"shift": fshift, "gt_shift": shift, "names": names,
                                             "noreturn_names": noreturn_names - {None}})
    stats = {"shift": shift, "gt_functions": len(gt["functions"]),
             "predicted": len(doc.get("functions") or []), "matched": len(paired)}
    return cards, stats


# --------------------------------------------------------------------------
# --project: recompilation and globals
# --------------------------------------------------------------------------

_FN_HEADER = re.compile(r"^// Function: (\S+) @ (0x[0-9a-fA-F]+|\S+)", re.M)
_EXTERN = re.compile(r"^extern\s+(.+?)\s*\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;", re.M)
_DAT = re.compile(r"^(?:dat|DAT|g)_([0-9a-fA-F]+)$")


def project_scores(exe: str, binary: str, options, extra: list[str], timeout: int,
                   max_fn_seconds: int, gt: dict, shift: int) -> tuple[dict, dict]:
    """-> ({pred function name: recompiles 0/1}, {"global_type_trex": mean} or {})."""
    out_dir = Path(tempfile.mkdtemp(prefix="quality-project-"))
    try:
        cmd = [exe, "decompile-project", binary, "-o", str(out_dir),
               "--max-fn-seconds", str(max_fn_seconds)] + option_args(options) + extra
        try:
            subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
        except subprocess.TimeoutExpired:
            return {}, {}
        cs = sorted(out_dir.glob("*.c"))
        hs = sorted(out_dir.glob("*.h"))
        if not cs:
            return {}, {}
        c_text = cs[0].read_text(errors="replace")
        spans = []
        for m in _FN_HEADER.finditer(c_text):
            spans.append((c_text.count("\n", 0, m.start()) + 1, m.group(1)))
        bad_lines = set()
        if shutil.which("clang"):
            p = subprocess.run(["clang", "-fsyntax-only", "-w", "-ferror-limit=0",
                                "-Dmain=unlace_recovered_main", f"-I{out_dir}", str(cs[0])],
                               capture_output=True, text=True, timeout=timeout)
            for m in re.finditer(rf"^{re.escape(str(cs[0]))}:(\d+):\d+: error:", p.stderr, re.M):
                bad_lines.add(int(m.group(1)))
        recompiles = {}
        for i, (line, name) in enumerate(spans):
            end = spans[i + 1][0] if i + 1 < len(spans) else 1 << 30
            recompiles[name] = float(not any(line <= b < end for b in bad_lines))
        binary_metrics = {}
        if hs and gt.get("globals"):
            by_addr = {int(k, 16) + shift: g for k, g in gt["globals"].items()}
            by_name = {g["name"]: g for g in gt["globals"].values() if g.get("name")}
            scores = []
            for m in _EXTERN.finditer(hs[0].read_text(errors="replace")):
                spelling, name = m.group(1), m.group(2)
                if "(" in spelling:
                    continue
                g = by_name.get(name)
                dm = _DAT.match(name)
                if g is None and dm:
                    g = by_addr.get(int(dm.group(1), 16))
                if g is None:
                    continue
                s, _ = metrics._trex(spelling + (" *" if m.group(3) else ""), g["type"])
                scores.append(s)
            if scores:
                binary_metrics["global_type_trex"] = sum(scores) / len(scores)
        return recompiles, binary_metrics
    finally:
        shutil.rmtree(out_dir, ignore_errors=True)


# --------------------------------------------------------------------------
# a whole run
# --------------------------------------------------------------------------

def _store(con, run_id: int, b: dict, gt: dict, cards: dict, doc: dict | None,
           keep_code: bool, binary_metrics: dict | None = None) -> None:
    bid = db.upsert_binary(con, b)
    paired = pair(gt, doc)[0] if (doc and keep_code) else {}
    rows = []
    for key, fn in gt["functions"].items():
        fid = db.upsert_function(con, bid, fn.get("key") or key, fn["name"], fn["entry"],
                                 fn.get("size"), fn.get("facts"))
        for metric, value in cards.get(key, {}).items():
            rows.append((run_id, fid, metric, value))
        if keep_code and key in paired:
            con.execute("INSERT OR REPLACE INTO outputs(run_id, function_id, code) VALUES(?,?,?)",
                        (run_id, fid, paired[key].get("code")))
    if binary_metrics:
        fid = db.upsert_function(con, bid, "<binary>", "<binary>", None, None, None)
        rows += [(run_id, fid, k, v) for k, v in binary_metrics.items()]
    con.executemany("INSERT OR REPLACE INTO results(run_id, function_id, metric, value) "
                    "VALUES(?,?,?,?)", rows)


def score_run(con, bins: list[dict], label: str, options: list[tuple[str, str]],
              exe: str | None = None, extra: list[str] | None = None, jobs: int = 4,
              timeout: int = 1800, max_fn_seconds: int = 60, project: bool = False,
              keep_code: bool = False, corpus: str | None = None, note: str | None = None) -> int:
    exe = unlace_bin(exe)
    extra = list(extra or [])
    run_id = db.new_run(con, label=label, tool="unlace", started=time.strftime("%Y-%m-%dT%H:%M:%S"),
                        unlace_bin=exe, unlace_sha256=file_sha256(shutil.which(exe) or exe),
                        git_rev=git_rev(), options=[list(o) for o in options], extra_args=extra,
                        corpus=corpus, note=note)

    def work(b: dict):
        gt = json.loads(Path(b["gt"]).read_text())
        doc, err, seconds = decompile_all(exe, b["stripped"], options, extra, timeout, max_fn_seconds)
        proj = None
        if doc is not None and project:
            _, shift, _ = pair(gt, doc)
            proj = project_scores(exe, b["stripped"], options, extra, timeout, max_fn_seconds,
                                  gt, shift)
        return b, gt, doc, err, seconds, proj

    with ThreadPoolExecutor(max_workers=max(1, jobs)) as pool:
        for b, gt, doc, err, seconds, proj in pool.map(work, bins):
            if doc is None:
                cards, stats = {k: {"found": 0.0} for k in gt["functions"]}, {}
            else:
                cards, stats = score_binary(gt, doc)
            binary_metrics = None
            if proj:
                recompiles, binary_metrics = proj
                paired = pair(gt, doc)[0]
                for key, rec in paired.items():
                    if rec.get("name") in recompiles:
                        cards[key]["recompiles"] = recompiles[rec["name"]]
            _store(con, run_id, b, gt, cards, doc, keep_code, binary_metrics)
            con.execute("INSERT OR REPLACE INTO run_binaries(run_id, binary_id, status, seconds, error, "
                        "shift, gt_functions, predicted, matched) VALUES(?,?,?,?,?,?,?,?,?)",
                        (run_id, db.upsert_binary(con, b), "ok" if doc is not None else "failed",
                         round(seconds, 2), err, stats.get("shift"), stats.get("gt_functions"),
                         stats.get("predicted"), stats.get("matched")))
            con.commit()
    con.execute("UPDATE runs SET finished=? WHERE id=?", (time.strftime("%Y-%m-%dT%H:%M:%S"), run_id))
    con.commit()
    return run_id


def ingest(con, b: dict, doc_path: Path, label: str, tool: str, keep_code: bool = False) -> int:
    """Score an existing decompile-all-shaped JSON document as its own run."""
    gt = json.loads(Path(b["gt"]).read_text())
    doc = json.loads(Path(doc_path).read_text())
    run_id = db.new_run(con, label=label, tool=tool, started=time.strftime("%Y-%m-%dT%H:%M:%S"),
                        options=[], extra_args=[], note=f"ingested {doc_path}")
    cards, stats = score_binary(gt, doc)
    _store(con, run_id, b, gt, cards, doc, keep_code)
    con.execute("INSERT OR REPLACE INTO run_binaries(run_id, binary_id, status, seconds, error, shift, "
                "gt_functions, predicted, matched) VALUES(?,?,?,?,?,?,?,?,?)",
                (run_id, db.upsert_binary(con, b), "ok", None, None, stats["shift"],
                 stats["gt_functions"], stats["predicted"], stats["matched"]))
    con.execute("UPDATE runs SET finished=? WHERE id=?", (time.strftime("%Y-%m-%dT%H:%M:%S"), run_id))
    con.commit()
    return run_id
