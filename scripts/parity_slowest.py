#!/usr/bin/env python3
"""Print the slowest files of a parity run with each one's share of the total wall time.

Reads target/parity-times.toml, which \`cargo test -p unlace-harness --test parity\` writes: one
\`[[file]]\` table per corpus file the run ran, with its \`corpus\`, \`file\`, wall time \`ms\` and
\`outcome\`. A share is of the total over the selection (every row, or the rows whose corpus name
contains \`--corpus\`), so \`--top 0\` prints shares that add up to 100%.

    python3 scripts/parity_slowest.py                  # the 15 slowest files of every corpus
    python3 scripts/parity_slowest.py --top 40 --corpus stages
"""

import argparse
import sys
import tomllib

DEFAULT_PATH = "target/parity-times.toml"


def load_rows(path):
    """The [[file]] tables of a parity-times file as dicts; ValueError names a malformed row."""
    with open(path, "rb") as stream:
        document = tomllib.load(stream)
    rows = []
    for table in document.get("file", []):
        try:
            rows.append({
                "corpus": str(table["corpus"]),
                "file": str(table["file"]),
                "ms": int(table["ms"]),
                "outcome": str(table.get("outcome", "")),
            })
        except (KeyError, TypeError, ValueError) as error:
            raise ValueError(f"{path}: malformed [[file]] row {table!r}: {error}") from error
    return rows


def ranked(rows, corpus=None, top=15):
    """(selected count, total ms, entries): the selection's slowest top rows (0: all) with shares."""
    selected = [r for r in rows if corpus is None or corpus in r["corpus"]]
    selected.sort(key=lambda r: (-r["ms"], r["corpus"], r["file"]))
    total = sum(r["ms"] for r in selected)
    shown = selected[:top] if top else selected
    entries = [dict(r, share=100.0 * r["ms"] / total if total else 0.0) for r in shown]
    return len(selected), total, entries


def render(count, total, entries):
    lines = [f"{count} files, {total / 1000:.1f} s total wall time"]
    lines.append(f"{'rank':>4}  {'share':>6}  {'seconds':>8}  {'outcome':<7}  file")
    for rank, entry in enumerate(entries, 1):
        lines.append(
            f"{rank:>4}  {entry['share']:>5.1f}%  {entry['ms'] / 1000:>8.2f}  "
            f"{entry['outcome']:<7}  {entry['corpus']}: {entry['file']}"
        )
    return "\n".join(lines)


def main(argv=None):
    parser = argparse.ArgumentParser(description="Slowest parity files and their share of the run.")
    parser.add_argument("path", nargs="?", default=DEFAULT_PATH, help=f"parity-times file (default {DEFAULT_PATH})")
    parser.add_argument("--top", type=int, default=15, help="rows to print; 0 prints every row (default 15)")
    parser.add_argument("--corpus", help="only files whose corpus name contains this text, e.g. stages")
    args = parser.parse_args(argv)
    try:
        rows = load_rows(args.path)
    except FileNotFoundError:
        print(f"{args.path}: not found; run \`cargo test -p unlace-harness --test parity\` first", file=sys.stderr)
        return 1
    except (tomllib.TOMLDecodeError, ValueError) as error:
        print(str(error), file=sys.stderr)
        return 1
    count, total, entries = ranked(rows, args.corpus, args.top)
    if count == 0:
        print(f"{args.path}: no files" + (f" in a corpus matching {args.corpus!r}" if args.corpus else ""))
        return 0
    print(render(count, total, entries))
    return 0


if __name__ == "__main__":
    sys.exit(main())
