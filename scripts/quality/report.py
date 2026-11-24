"""Read the database back: run summaries, A/B deltas and the worst functions.

Everything returns plain JSON-able dicts; the CLI prints them, and an agent can
equally run the SQL in each function against the `scores` view itself.
"""
from __future__ import annotations

import json
import sqlite3

from . import db


def _direction(con: sqlite3.Connection) -> dict[str, int | None]:
    return {name: hib for name, hib in con.execute("SELECT name, higher_is_better FROM metrics")}


def run_info(con: sqlite3.Connection, run_id: int) -> dict:
    row = con.execute("SELECT id, label, tool, started, finished, unlace_bin, unlace_sha256, git_rev, "
                      "options, extra_args, note FROM runs WHERE id=?", (run_id,)).fetchone()
    keys = ("id", "label", "tool", "started", "finished", "unlace_bin", "unlace_sha256", "git_rev",
            "options", "extra_args", "note")
    info = dict(zip(keys, row))
    for k in ("options", "extra_args"):
        info[k] = json.loads(info[k]) if info[k] else []
    b = con.execute("SELECT count(*), sum(status='ok'), sum(seconds), sum(gt_functions), sum(matched) "
                    "FROM run_binaries WHERE run_id=?", (run_id,)).fetchone()
    info["binaries"] = {"total": b[0], "ok": b[1] or 0, "seconds": round(b[2] or 0, 1),
                        "gt_functions": b[3] or 0, "matched": b[4] or 0}
    return info


def summary(con: sqlite3.Connection, run_ref, by: tuple[str, ...] = ()) -> dict:
    """Per-metric n/mean (and share at the best value for 0/1 metrics), optionally grouped."""
    run_id = db.resolve_run(con, run_ref)
    cols = ", ".join(f"b.{c}" for c in by)
    group = f"{cols}, " if by else ""
    rows = con.execute(
        f"SELECT {group}r.metric, count(*), avg(r.value), min(r.value), max(r.value) "
        f"FROM results r JOIN functions f ON f.id = r.function_id JOIN binaries b ON b.id = f.binary_id "
        f"WHERE r.run_id = ? GROUP BY {group}r.metric ORDER BY {group}r.metric", (run_id,)).fetchall()
    out: dict = {"run": run_info(con, run_id), "metrics": {}}
    for row in rows:
        keys, (metric, n, mean, lo, hi) = row[:len(by)], row[len(by):]
        entry = {"n": n, "mean": round(mean, 4) if mean is not None else None,
                 "min": lo, "max": hi}
        if by:
            out["metrics"].setdefault(metric, {})["/".join(str(k) for k in keys)] = entry
        else:
            out["metrics"][metric] = entry
    return out


def compare(con: sqlite3.Connection, a_ref, b_ref, top: int = 20, eps: float = 1e-9) -> dict:
    """Paired A/B over the functions both runs scored: per metric n, means, delta,
    improved/worse/same counts, and the `top` biggest regressions and gains."""
    a, b = db.resolve_run(con, a_ref), db.resolve_run(con, b_ref)
    direction = _direction(con)
    rows = con.execute(
        "SELECT ra.metric, ra.function_id, ra.value, rb.value FROM results ra "
        "JOIN results rb ON rb.function_id = ra.function_id AND rb.metric = ra.metric AND rb.run_id = ? "
        "WHERE ra.run_id = ?", (b, a)).fetchall()
    per: dict[str, dict] = {}
    moves: dict[str, list] = {}
    for metric, fid, va, vb in rows:
        if va is None or vb is None:
            continue
        d = per.setdefault(metric, {"n": 0, "sum_a": 0.0, "sum_b": 0.0, "improved": 0,
                                    "worse": 0, "same": 0})
        d["n"] += 1
        d["sum_a"] += va
        d["sum_b"] += vb
        hib = direction.get(metric)
        delta = vb - va
        if abs(delta) <= eps or hib is None:
            d["same"] += abs(delta) <= eps
            continue
        better = delta > 0 if hib else delta < 0
        d["improved" if better else "worse"] += 1
        moves.setdefault(metric, []).append((better, abs(delta), fid, va, vb))
    names = {}
    if moves:
        ids = {m[2] for ms in moves.values() for m in ms}
        for fid, fname, corpus_id in con.execute(
                f"SELECT f.id, f.name, b.corpus_id FROM functions f JOIN binaries b ON b.id = f.binary_id "
                f"WHERE f.id IN ({','.join('?' * len(ids))})", list(ids)):
            names[fid] = {"function": fname, "binary": corpus_id}
    out = {"a": run_info(con, a), "b": run_info(con, b), "metrics": {}}
    for metric, d in sorted(per.items()):
        entry = {"n": d["n"], "mean_a": round(d["sum_a"] / d["n"], 4),
                 "mean_b": round(d["sum_b"] / d["n"], 4),
                 "delta": round((d["sum_b"] - d["sum_a"]) / d["n"], 4),
                 "improved": d["improved"], "worse": d["worse"], "same": d["same"],
                 "higher_is_better": direction.get(metric)}
        ms = moves.get(metric, [])
        worst = sorted((m for m in ms if not m[0]), key=lambda m: -m[1])[:top]
        best = sorted((m for m in ms if m[0]), key=lambda m: -m[1])[:top]
        entry["regressions"] = [{**names.get(m[2], {}), "a": m[3], "b": m[4]} for m in worst]
        entry["gains"] = [{**names.get(m[2], {}), "a": m[3], "b": m[4]} for m in best]
        out["metrics"][metric] = entry
    return out


def worst(con: sqlite3.Connection, run_ref, metric: str, limit: int = 25) -> dict:
    """The functions scoring worst on one metric (ties: larger functions first)."""
    run_id = db.resolve_run(con, run_ref)
    hib = _direction(con).get(metric)
    order = "ASC" if hib in (1, None) else "DESC"
    rows = con.execute(
        f"SELECT b.corpus_id, f.name, f.key, f.size, r.value FROM results r "
        f"JOIN functions f ON f.id = r.function_id JOIN binaries b ON b.id = f.binary_id "
        f"WHERE r.run_id = ? AND r.metric = ? ORDER BY r.value {order}, f.size DESC LIMIT ?",
        (run_id, metric, limit)).fetchall()
    return {"run": run_id, "metric": metric, "higher_is_better": hib,
            "functions": [{"binary": b, "function": n, "key": k, "size": s, "value": v}
                          for b, n, k, s, v in rows]}


def by_option(con: sqlite3.Connection, metric: str) -> dict:
    """Every run's mean on one metric, keyed by its label and option arms."""
    rows = con.execute(
        "SELECT u.id, u.label, u.options, count(*), avg(r.value) FROM results r JOIN runs u ON u.id = r.run_id "
        "WHERE r.metric = ? GROUP BY u.id ORDER BY u.id", (metric,)).fetchall()
    return {"metric": metric, "runs": [{"run": i, "label": l, "options": json.loads(o or "[]"),
                                        "n": n, "mean": round(m, 4) if m is not None else None}
                                       for i, l, o, n, m in rows]}
