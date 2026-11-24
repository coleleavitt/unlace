"""The results store: one SQLite file, one row per (run, function, metric).

Tables (`schema()` is the authority):

- `binaries`  one per corpus binary (coordinates: unit, compiler, opt, arch, mode);
- `functions` one per ground-truth function (`key` = entry, or `section+off` in an
  object; `facts` = the sidecar's facts JSON); a `<binary>` row per binary carries
  binary-level metrics (globals);
- `runs`      one per scoring run: label, tool, unlace binary + sha256, git rev, the
  `--option` arms as JSON, the extra CLI args;
- `run_binaries` per (run, binary): status, seconds, error, address shift, counts;
- `results`   the scores;
- `outputs`   the decompiled C per (run, function), only with `--keep-code`;
- `metrics`   every metric's direction and description (from `metrics.METRICS`).

View `scores` joins them into one flat row an agent can filter with plain SQL.
"""
from __future__ import annotations

import json
import sqlite3
from pathlib import Path

from .metrics import METRICS

SCHEMA = """
CREATE TABLE IF NOT EXISTS binaries(
  id INTEGER PRIMARY KEY, corpus_id TEXT UNIQUE NOT NULL, path TEXT, stripped TEXT,
  unit TEXT, kind TEXT, compiler TEXT, opt TEXT, arch TEXT, mode TEXT, sha256 TEXT);
CREATE TABLE IF NOT EXISTS functions(
  id INTEGER PRIMARY KEY, binary_id INTEGER NOT NULL REFERENCES binaries(id),
  key TEXT NOT NULL, name TEXT, entry INTEGER, size INTEGER, facts TEXT,
  UNIQUE(binary_id, key));
CREATE TABLE IF NOT EXISTS runs(
  id INTEGER PRIMARY KEY, label TEXT NOT NULL, tool TEXT NOT NULL DEFAULT 'unlace',
  started TEXT, finished TEXT, unlace_bin TEXT, unlace_sha256 TEXT, git_rev TEXT,
  options TEXT, extra_args TEXT, corpus TEXT, note TEXT);
CREATE TABLE IF NOT EXISTS run_binaries(
  run_id INTEGER NOT NULL REFERENCES runs(id), binary_id INTEGER NOT NULL REFERENCES binaries(id),
  status TEXT, seconds REAL, error TEXT, shift INTEGER, gt_functions INTEGER,
  predicted INTEGER, matched INTEGER, PRIMARY KEY(run_id, binary_id));
CREATE TABLE IF NOT EXISTS results(
  run_id INTEGER NOT NULL REFERENCES runs(id), function_id INTEGER NOT NULL REFERENCES functions(id),
  metric TEXT NOT NULL, value REAL, PRIMARY KEY(run_id, function_id, metric));
CREATE TABLE IF NOT EXISTS outputs(
  run_id INTEGER NOT NULL, function_id INTEGER NOT NULL, code TEXT,
  PRIMARY KEY(run_id, function_id));
CREATE TABLE IF NOT EXISTS metrics(
  name TEXT PRIMARY KEY, higher_is_better INTEGER, description TEXT);
CREATE INDEX IF NOT EXISTS results_metric ON results(metric, run_id);
CREATE VIEW IF NOT EXISTS scores AS
  SELECT r.run_id, u.label, u.tool, b.corpus_id AS binary, b.unit, b.compiler, b.opt, b.arch,
         f.name AS function, f.key, f.size, r.metric, r.value, m.higher_is_better
  FROM results r JOIN runs u ON u.id = r.run_id JOIN functions f ON f.id = r.function_id
  JOIN binaries b ON b.id = f.binary_id LEFT JOIN metrics m ON m.name = r.metric;
"""


def connect(path: Path) -> sqlite3.Connection:
    Path(path).parent.mkdir(parents=True, exist_ok=True)
    con = sqlite3.connect(str(path))
    con.execute("PRAGMA journal_mode=WAL")
    con.executescript(SCHEMA)
    con.executemany(
        "INSERT INTO metrics(name, higher_is_better, description) VALUES(?,?,?) "
        "ON CONFLICT(name) DO UPDATE SET higher_is_better=excluded.higher_is_better, "
        "description=excluded.description",
        [(k, None if v[0] is None else int(v[0]), v[1]) for k, v in METRICS.items()])
    con.commit()
    return con


def upsert_binary(con: sqlite3.Connection, b: dict) -> int:
    con.execute(
        "INSERT INTO binaries(corpus_id, path, stripped, unit, kind, compiler, opt, arch, mode, sha256) "
        "VALUES(?,?,?,?,?,?,?,?,?,?) ON CONFLICT(corpus_id) DO UPDATE SET path=excluded.path, "
        "stripped=excluded.stripped, sha256=excluded.sha256",
        (b["id"], b.get("path"), b.get("stripped"), b.get("unit"), b.get("kind"),
         b.get("compiler"), b.get("opt"), b.get("arch"), b.get("mode"), b.get("sha256")))
    return con.execute("SELECT id FROM binaries WHERE corpus_id=?", (b["id"],)).fetchone()[0]


def upsert_function(con: sqlite3.Connection, binary_id: int, key: str, name: str,
                    entry: int | None, size: int | None, facts: dict | None) -> int:
    con.execute(
        "INSERT INTO functions(binary_id, key, name, entry, size, facts) VALUES(?,?,?,?,?,?) "
        "ON CONFLICT(binary_id, key) DO UPDATE SET name=excluded.name, size=excluded.size, "
        "facts=excluded.facts",
        (binary_id, key, name, entry, size, json.dumps(facts) if facts is not None else None))
    return con.execute("SELECT id FROM functions WHERE binary_id=? AND key=?",
                       (binary_id, key)).fetchone()[0]


def new_run(con: sqlite3.Connection, **cols) -> int:
    keys = list(cols)
    cur = con.execute(f"INSERT INTO runs({','.join(keys)}) VALUES({','.join('?' * len(keys))})",
                      [json.dumps(v) if isinstance(v, (dict, list)) else v for v in cols.values()])
    con.commit()
    if cur.lastrowid is None:
        raise RuntimeError("INSERT INTO runs returned no row id")
    return cur.lastrowid


def resolve_run(con: sqlite3.Connection, ref: str | int) -> int:
    """A run id, or the newest run with that label."""
    if isinstance(ref, int) or str(ref).isdigit():
        row = con.execute("SELECT id FROM runs WHERE id=?", (int(ref),)).fetchone()
    else:
        row = con.execute("SELECT id FROM runs WHERE label=? ORDER BY id DESC LIMIT 1",
                          (ref,)).fetchone()
    if not row:
        raise SystemExit(f"no run {ref!r} in the database")
    return row[0]
