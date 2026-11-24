"""python3 -m scripts.quality <command> — see docs/quality-harness.md.

  build    compile the corpus (corpus.toml) and write ground-truth sidecars
  gt       write the ground-truth sidecar for one binary built elsewhere
  score    decompile every corpus binary with unlace and store the scorecards
  ab       two score runs of one option (--off-value / --on-value) and their delta
  ingest   score another tool's decompile-all-shaped JSON for one corpus binary
  summary  per-metric means of a run (optionally grouped by compiler/opt/arch/unit)
  compare  paired delta between two runs (improved/worse counts, top regressions)
  worst    the worst-scoring functions of a run on one metric
  options  every run's mean on one metric, with its option arms
  metrics  the metric catalogue (direction, description)
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from . import corpus, db, report, runner
from .metrics import METRICS


def _root() -> Path:
    return corpus.default_root()


def _filters(args) -> dict:
    return {"unit": set(args.unit or []), "compiler": set(args.compiler or []),
            "opt": {o.lstrip("-") for o in args.opt or []}, "arch": set(args.arch or [])}


def _select(args) -> list[dict]:
    bins = corpus.binaries(args.corpus, _filters(args))
    if args.limit:
        bins = bins[:args.limit]
    if not bins:
        raise SystemExit(f"no built binaries in {args.corpus} match the filters")
    return bins


def _emit(doc: dict, out: Path | None) -> None:
    text = json.dumps(doc, indent=1, default=str)
    if out:
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(text + "\n")
        print(f"[quality] wrote {out}", file=sys.stderr)
    else:
        print(text)


def _matrix_args(p: argparse.ArgumentParser) -> None:
    p.add_argument("--unit", action="append", help="program/package name (repeatable)")
    p.add_argument("--compiler", action="append", help="gcc, clang (repeatable)")
    p.add_argument("--opt", action="append", help="O0, O2, ... (repeatable)")
    p.add_argument("--arch", action="append", help="manifest arch name (repeatable)")


def _run_args(p: argparse.ArgumentParser) -> None:
    p.add_argument("--corpus", type=Path, default=_root() / "corpus" / "corpus.json")
    p.add_argument("--db", type=Path, default=_root() / "quality.sqlite")
    _matrix_args(p)
    p.add_argument("--limit", type=int, default=0, help="score only the first N binaries")
    p.add_argument("--unlace", help="unlace binary (default: $UNLACE_BIN, target/debug, target/release)")
    p.add_argument("--arg", action="append", default=[], help="extra unlace CLI argument (repeatable)")
    p.add_argument("--jobs", type=int, default=4, help="unlace processes at once")
    p.add_argument("--timeout", type=int, default=1800, help="seconds per binary")
    p.add_argument("--max-fn-seconds", type=int, default=60)
    p.add_argument("--project", action="store_true",
                   help="also run decompile-project: recompiles + global_type_trex")
    p.add_argument("--keep-code", action="store_true", help="store each function's C in outputs")
    p.add_argument("--summary", type=Path, help="write the JSON summary here instead of stdout")


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(prog="python3 -m scripts.quality", description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("build", help="compile the corpus and write ground truth")
    p.add_argument("--manifest", type=Path, default=corpus.DEFAULT_MANIFEST)
    p.add_argument("--out", type=Path, default=_root() / "corpus")
    _matrix_args(p)
    p.add_argument("--no-packages", action="store_true", help="synthetic programs only")
    p.add_argument("--clang-ast", action="store_true", help="add the clang_ast fact")
    p.add_argument("--sysroot", help="libc sysroot for packages on non-host arches")
    p.add_argument("--allow-unpinned", action="store_true")
    p.add_argument("--jobs", type=int, default=4)

    p = sub.add_parser("gt", help="ground-truth sidecar for one external binary")
    p.add_argument("binary", type=Path)
    p.add_argument("--stripped", type=Path, help="its stripped twin (default: the binary itself)")
    p.add_argument("--clang-ast", nargs=argparse.REMAINDER,
                   help="clang argv prefix to dump the source AST with (rest of the line)")

    p = sub.add_parser("score", help="decompile the corpus and store scorecards")
    _run_args(p)
    p.add_argument("--label", required=True)
    p.add_argument("--option", nargs=2, action="append", default=[], metavar=("NAME", "VALUE"))
    p.add_argument("--note")

    p = sub.add_parser("ab", help="A/B one option: two score runs and their delta")
    _run_args(p)
    p.add_argument("--option", required=True, help="the option under test")
    p.add_argument("--off-value", default="off")
    p.add_argument("--on-value", default="on")
    p.add_argument("--with", dest="fixed", nargs=2, action="append", default=[],
                   metavar=("NAME", "VALUE"), help="an option set the same way in both arms")
    p.add_argument("--label", help="label prefix (default: the option name)")
    p.add_argument("--top", type=int, default=20)

    p = sub.add_parser("ingest", help="score another tool's decompile-all-shaped JSON")
    p.add_argument("--corpus", type=Path, default=_root() / "corpus" / "corpus.json")
    p.add_argument("--db", type=Path, default=_root() / "quality.sqlite")
    p.add_argument("--binary", required=True, help="corpus id (unit/cell/name) the JSON is for")
    p.add_argument("--json", type=Path, required=True)
    p.add_argument("--label", required=True)
    p.add_argument("--tool", required=True)
    p.add_argument("--keep-code", action="store_true")

    for name, help_text in (("summary", "per-metric means of a run"),
                            ("worst", "worst functions of a run on one metric")):
        p = sub.add_parser(name, help=help_text)
        p.add_argument("--db", type=Path, default=_root() / "quality.sqlite")
        p.add_argument("--run", required=True, help="run id or label (newest)")
        if name == "summary":
            p.add_argument("--by", action="append", choices=("unit", "compiler", "opt", "arch", "mode"),
                           default=[])
        else:
            p.add_argument("--metric", required=True, choices=sorted(METRICS))
            p.add_argument("--limit", type=int, default=25)
        p.add_argument("--out", type=Path)

    p = sub.add_parser("compare", help="paired delta between two runs")
    p.add_argument("--db", type=Path, default=_root() / "quality.sqlite")
    p.add_argument("a")
    p.add_argument("b")
    p.add_argument("--top", type=int, default=20)
    p.add_argument("--out", type=Path)

    p = sub.add_parser("options", help="every run's mean on one metric")
    p.add_argument("--db", type=Path, default=_root() / "quality.sqlite")
    p.add_argument("--metric", required=True, choices=sorted(METRICS))
    p.add_argument("--out", type=Path)

    sub.add_parser("metrics", help="the metric catalogue")

    args = ap.parse_args(argv)

    if args.cmd == "metrics":
        _emit({k: {"higher_is_better": v[0], "description": v[1]} for k, v in METRICS.items()}, None)
        return 0
    if args.cmd == "build":
        index = corpus.build(args.manifest, args.out, names=args.unit, compilers=args.compiler,
                             opts=args.opt, arches=args.arch, packages=not args.no_packages,
                             clang_ast=args.clang_ast, sysroot=args.sysroot, jobs=args.jobs,
                             allow_unpinned=args.allow_unpinned)
        built = [c for c in index["cells"] if not c.get("skipped")]
        skipped = [c for c in index["cells"] if c.get("skipped")]
        _emit({"index": str(args.out / "corpus.json"), "seconds": index["seconds"],
               "cells_built": len(built),
               "binaries": sum(len(c["binaries"]) for c in built),
               "functions": sum(b["functions"] for c in built for b in c["binaries"]),
               "skipped": [{k: c[k] for k in ("unit", "compiler", "opt", "arch", "skipped")}
                           for c in skipped]}, None)
        return 0
    if args.cmd == "gt":
        ast_cmd = args.clang_ast or None
        doc = corpus.ground_truth(args.binary, ast_cmd, {
            "unit": args.binary.stem, "kind": "external", "compiler": None, "opt": None,
            "arch": None, "mode": "external", "stripped": str(args.stripped or args.binary)})
        out = args.binary.with_name(args.binary.name + ".gt.json")
        out.write_text(json.dumps(doc, default=str))
        _emit({"gt": str(out), "functions": len(doc["functions"]), "globals": len(doc["globals"])}, None)
        return 0

    con = db.connect(args.db)
    if args.cmd == "score":
        run_id = runner.score_run(con, _select(args), args.label, [tuple(o) for o in args.option],
                                  exe=args.unlace, extra=args.arg, jobs=args.jobs, timeout=args.timeout,
                                  max_fn_seconds=args.max_fn_seconds, project=args.project,
                                  keep_code=args.keep_code, corpus=str(args.corpus), note=args.note)
        _emit(report.summary(con, run_id), args.summary)
        return 0
    if args.cmd == "ab":
        bins = _select(args)
        label = args.label or args.option
        fixed = [tuple(o) for o in args.fixed]
        runs = []
        for arm in (args.off_value, args.on_value):
            runs.append(runner.score_run(
                con, bins, f"{label}={arm}", fixed + [(args.option, arm)], exe=args.unlace,
                extra=args.arg, jobs=args.jobs, timeout=args.timeout,
                max_fn_seconds=args.max_fn_seconds, project=args.project, keep_code=args.keep_code,
                corpus=str(args.corpus), note=f"ab {args.option} {args.off_value}->{args.on_value}"))
        _emit(report.compare(con, runs[0], runs[1], top=args.top), args.summary)
        return 0
    if args.cmd == "ingest":
        match = [b for b in corpus.binaries(args.corpus) if b["id"] == args.binary]
        if not match:
            raise SystemExit(f"no corpus binary {args.binary!r} in {args.corpus}")
        run_id = runner.ingest(con, match[0], args.json, args.label, args.tool, args.keep_code)
        _emit(report.summary(con, run_id), None)
        return 0
    if args.cmd == "summary":
        _emit(report.summary(con, args.run, tuple(args.by)), args.out)
    elif args.cmd == "worst":
        _emit(report.worst(con, args.run, args.metric, args.limit), args.out)
    elif args.cmd == "compare":
        _emit(report.compare(con, args.a, args.b, top=args.top), args.out)
    elif args.cmd == "options":
        _emit(report.by_option(con, args.metric), args.out)
    return 0


if __name__ == "__main__":
    sys.exit(main())
