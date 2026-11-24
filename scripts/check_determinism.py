#!/usr/bin/env python3
"""Determinism gate: the same input must give the same output, byte for byte.

Two checks (docs/dev-setup.md, "Determinism"):

* The lint (default): iteration over a std `HashMap`/`HashSet` (`RandomState`, a new seed in every
  process) in non-test code of the crates that produce output. A `for` loop over such a binding, or an
  `.iter()`/`.keys()`/`.values()`/`.drain()`/`.into_iter()` chain on it, is a finding unless the
  chain ends in an order-insensitive reduction (`count`, `any`, `all`, `sum`, `len`, `contains`, a
  `collect` into a set or map) or the collected `Vec` is sorted within the next lines. A line (or the
  line above it) carrying `determinism:allow` is exempt. Findings that exist today are listed in
  scripts/determinism-allowlist.txt as `path binding count`; the lint fails on a count above its entry
  and on an entry above its count, so the list only shrinks.

* The run (`--run UNLACE`): decompiles a small fixed corpus of in-repo binaries with
  `decompile-all --json` twice in fresh processes (so every std hash seed differs), and once more
  under `--jobs 1` vs `--jobs 4` (both with `--option protoorder off`, the pool's documented serial
  equivalent), and fails on any byte difference.
"""
from collections import Counter
from pathlib import Path
import argparse
import difflib
import re
import subprocess
import sys

if __package__ in (None, ""):
    sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.check_layers import CFG_TEST, INNER_TEST_MOD, _bracket_end, is_test_file, item_end  # noqa: E402

ALLOWLIST = "scripts/determinism-allowlist.txt"
# Crates whose code runs between reading a binary and printing its decompilation.
CRATES = [
    "unlace-analysis", "unlace-bandb", "unlace-bandb-base", "unlace-bandb-core", "unlace-base",
    "unlace-cli", "unlace-console", "unlace-ctree", "unlace-decomp", "unlace-emit", "unlace-lift",
    "unlace-middle", "unlace-num", "unlace-project", "unlace-sleigh", "unlace-structure",
]
ALLOW_MARK = "determinism:allow"
UNORDERED = r"(?<![\w:])(?:std\s*::\s*collections\s*::\s*)?Hash(?:Map|Set)\b(?!\s*::\s*with_hasher)"
ITER_METHODS = r"(?:iter|iter_mut|keys|values|values_mut|drain|into_iter|into_keys|into_values)"
# Terminal calls whose result does not depend on the order the items arrive in.
INSENSITIVE = re.compile(
    r"\.\s*(?:count|any|all|sum|product|len|is_empty|contains|contains_key|min|max)\s*(?:::\s*<[^>]*>\s*)?\("
    r"|collect\s*::\s*<\s*(?:std\s*::\s*collections\s*::\s*)?(?:BTree|Hash|FxHash|Fx)\w*"
)
SORTED_COLLECT = re.compile(r"\s*let\s+(?:mut\s+)?(\w+)\s*:\s*(?:std\s*::\s*collections\s*::\s*)?(?:BTree|Hash|FxHash)\w*")
SORT_WINDOW = 6


def blank_keeping_lines(text: str) -> str:
    """Comments, string and char literals and `#[cfg(test)]` items blanked, every newline kept, so an
    offset into the result is on the same line as in the source."""
    return _drop_cfg_test_keeping_lines(_strip_keeping_lines(text))


RAW_STR = re.compile(r"b?r(#*)\"")
CHAR_LIT = re.compile(r"'(?:\\(?:u\{[0-9a-fA-F]+\}|x..|.)|[^\\'])'")
WORD_RUN = re.compile(r"\w+")


def _strip_keeping_lines(text: str) -> str:
    """check_layers.strip_literals, but a blanked comment or literal keeps its newlines."""
    out, i, n = [], 0, len(text)

    def skip(a: int, b: int, keep: str) -> None:
        out.append(keep + "\n" * text.count("\n", a, b))

    while i < n:
        c = text[i]
        if text.startswith("//", i):
            i = text.find("\n", i)
            i = n if i < 0 else i
        elif text.startswith("/*", i):
            start, depth, i = i, 1, i + 2
            while i < n and depth:
                if text.startswith("/*", i):
                    depth, i = depth + 1, i + 2
                elif text.startswith("*/", i):
                    depth, i = depth - 1, i + 2
                else:
                    i += 1
            skip(start, i, " ")
        elif c in "br" and (raw := RAW_STR.match(text, i)):
            close = '"' + raw.group(1)
            end = text.find(close, raw.end())
            start, i = i, n if end < 0 else end + len(close)
            skip(start, i, '""')
        elif c == '"' or text.startswith('b"', i):
            start = i
            i += 2 if c == "b" else 1
            while i < n and text[i] != '"':
                i += 2 if text[i] == "\\" else 1
            i += 1
            skip(start, i, '""')
        elif c == "'" and (char := CHAR_LIT.match(text, i)):
            i = char.end()
            out.append("' '")
        elif c.isalnum() or c == "_":
            word = WORD_RUN.match(text, i).group()
            out.append(word)
            i += len(word)
        else:
            out.append(c)
            i += 1
    return "".join(out)


def _drop_cfg_test_keeping_lines(text: str) -> str:
    def blank(t: str, a: int, b: int) -> str:
        return t[:a] + re.sub(r"[^\n]", " ", t[a:b]) + t[b:]
    while m := INNER_TEST_MOD.search(text):
        open_at = text.index("{", m.start())
        text = blank(text, m.start(), item_end(text, open_at))
    while m := CFG_TEST.search(text):
        i = m.end()
        while nxt := re.match(r"\s*#\s*\[", text[i:]):
            i = _bracket_end(text, i + nxt.end() - 1)
        text = blank(text, m.start(), item_end(text, i))
    return text


def enclosing_block_end(code: str, at: int) -> int:
    """The offset of the `}` closing the innermost brace block containing `at`."""
    depth = 0
    for i in range(at, len(code)):
        c = code[i]
        if c == "{":
            depth += 1
        elif c == "}":
            if depth == 0:
                return i
            depth -= 1
    return len(code)


def enclosing_open(code: str, at: int) -> str:
    depth = 0
    for i in range(at - 1, -1, -1):
        c = code[i]
        if c in ")]}":
            depth += 1
        elif c in "([{":
            if depth == 0:
                return c
            depth -= 1
    return ""


def unordered_bindings(code: str) -> list[tuple[str, bool, int, int]]:
    """(name, is_field, scope_start, scope_end) for each binding, field or parameter this file declares
    with a std HashMap/HashSet type. A field is matched as `.name` anywhere in the file; a local or a
    parameter as a bare `name` within its scope."""
    out = []
    aliases = set(re.findall(r"\btype\s+(\w+)\s*(?:<[^=]*>)?\s*=\s*" + UNORDERED + r"\s*<(?![^;]*\bFx)", code))
    types = UNORDERED if not aliases else rf"(?:{UNORDERED}|\b(?:{'|'.join(map(re.escape, sorted(aliases)))})\b)"
    ref = r"(?:&\s*(?:'\w+\s+)?(?:mut\s+)?)?"
    for m in re.finditer(rf"(\blet\s+(?:mut\s+)?)?\b(\w+)\s*:\s*{ref}{types}\s*(<)?", code):
        if m.group(3) and _fx_hasher(code, m.end()):
            continue
        name, at = m.group(2), m.start(2)
        if m.group(1):
            out.append((name, False, at, enclosing_block_end(code, at)))
        elif enclosing_open(code, at) == "(":
            body = code.find("{", at)
            body = at if body < 0 else body + 1
            out.append((name, False, at, enclosing_block_end(code, body)))
        else:
            out.append((name, True, 0, len(code)))
    for m in re.finditer(rf"\blet\s+(?:mut\s+)?(\w+)\s*=\s*{types}\s*::\s*(?:new|with_capacity|default|from|from_iter)\b", code):
        out.append((m.group(1), False, m.start(1), enclosing_block_end(code, m.start(1))))
    for m in re.finditer(r"\blet\s+(?:mut\s+)?(\w+)\s*=([^;]*?)collect\s*::\s*<\s*" + UNORDERED, code):
        out.append((m.group(1), False, m.start(1), enclosing_block_end(code, m.start(1))))
    return [b for b in out if b[0] != "self"]


def _fx_hasher(code: str, open_at: int) -> bool:
    """Whether the generic arguments opening at `open_at` name a fixed (Fx) hasher."""
    depth = 1
    for j in range(open_at, min(len(code), open_at + 400)):
        c = code[j]
        if c == "<":
            depth += 1
        elif c == ">":
            depth -= 1
            if depth == 0:
                return "Fx" in code[open_at:j]
    return False


def statement_end(code: str, start: int) -> int:
    depth = 0
    for i in range(start, len(code)):
        c = code[i]
        if c in "([{":
            depth += 1
        elif c in ")]}":
            if depth == 0:
                return i
            depth -= 1
        elif c == ";" and depth == 0:
            return i
    return len(code)


def statement_start(code: str, at: int) -> int:
    depth = 0
    for i in range(at - 1, -1, -1):
        c = code[i]
        if c in ")]":
            depth += 1
        elif c == "}" and depth == 0:
            return i + 1
        elif c == "}":
            depth += 1
        elif c in "([{":
            if depth == 0:
                return i + 1
            depth -= 1
        elif c == ";" and depth == 0:
            return i + 1
    return 0


def findings(path: Path, text: str) -> list[tuple[int, str]]:
    """(line, binding) for each order-dependent iteration over an unordered binding."""
    code = blank_keeping_lines(text)
    bindings = unordered_bindings(code)
    if not bindings:
        return []
    raw_lines = text.splitlines()
    code_lines = code.splitlines()
    out = set()
    for name, is_field, lo, hi in bindings:
        n = re.escape(name)
        head = rf"(?<=\.)\s*({n})\b" if is_field else rf"(?<![\w.])({n})\b"
        loop = rf"\bfor\s+[^{{;]+?\s+in\s+&?\s*(?:mut\s+)?(?:[\w.]*\.)?{head}(?:\s*\.\s*{ITER_METHODS}\s*\(\s*\))?\s*\{{"
        for m in re.compile(loop).finditer(code, lo, hi):
            out.add((m.start(1), name))
        for m in re.compile(rf"{head}\s*\.\s*{ITER_METHODS}\s*(?=\()").finditer(code, lo, hi):
            start, end = statement_start(code, m.start()), statement_end(code, m.end())
            stmt = code[start:end]
            if re.search(r"\bfor\s+[^{;]*\bin\s*&?\s*(?:mut\s+)?[\w.]*$", code[start:m.start()]):
                continue
            tail = code[m.end():end]
            if INSENSITIVE.search(tail) or SORTED_COLLECT.match(stmt):
                continue
            bound = re.match(r"\s*let\s+(?:mut\s+)?(\w+)", stmt)
            if bound:
                line = code.count("\n", 0, end)
                window = "\n".join(code_lines[line:line + SORT_WINDOW])
                if re.search(rf"\b{re.escape(bound.group(1))}\s*\.\s*(?:sort|sort_unstable|sort_by|sort_by_key|sort_unstable_by|sort_unstable_by_key)\b", window):
                    continue
            out.add((m.start(1), name))
    result = []
    for offset, name in sorted(out):
        line = code.count("\n", 0, offset)
        here = raw_lines[line] if line < len(raw_lines) else ""
        above = raw_lines[line - 1] if 0 < line <= len(raw_lines) else ""
        if ALLOW_MARK in here or ALLOW_MARK in above:
            continue
        result.append((line + 1, name))
    return result


def scan(root: Path) -> dict[tuple[str, str], list[int]]:
    found: dict[tuple[str, str], list[int]] = {}
    for crate in CRATES:
        src = root / "crates" / crate / "src"
        if not src.is_dir():
            continue
        for path in sorted(src.rglob("*.rs")):
            rel = path.relative_to(root)
            if is_test_file(rel):
                continue
            text = path.read_text(encoding="utf-8", errors="replace")
            for line, name in findings(rel, text):
                found.setdefault((rel.as_posix(), name), []).append(line)
    return found


def read_allowlist(root: Path) -> Counter:
    allowed = Counter()
    path = root / ALLOWLIST
    if not path.exists():
        return allowed
    for raw in path.read_text().splitlines():
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        file, name, count = line.split()
        allowed[(file, name)] = int(count)
    return allowed


def check(root: Path) -> list[str]:
    found = scan(root)
    allowed = read_allowlist(root)
    problems = []
    for key in sorted(set(found) | set(allowed)):
        have, may = len(found.get(key, [])), allowed.get(key, 0)
        file, name = key
        if have > may:
            lines = ", ".join(map(str, found[key]))
            problems.append(
                f"{file}:{found[key][-1]}: unordered iteration over `{name}` (std HashMap/HashSet) "
                f"at line(s) {lines}: {have} found, {may} allowed. Use a BTreeMap/BTreeSet, sort before "
                f"use, or mark an order-insensitive use with `// {ALLOW_MARK}: <why>`")
        elif have < may:
            problems.append(f"{ALLOWLIST}: `{file} {name} {may}` is now {have}; lower or delete the entry")
    return problems


def write_allowlist(root: Path) -> None:
    found = scan(root)
    lines = ["# Order-dependent iteration over std HashMap/HashSet that exists today",
             "# (scripts/check_determinism.py). Only lower or delete entries.",
             "# <file> <binding> <count>"]
    lines += [f"{f} {n} {len(v)}" for (f, n), v in sorted(found.items())]
    (root / ALLOWLIST).write_text("\n".join(lines) + "\n")


# The fixed corpus for --run: small in-repo binaries across formats and architectures.
CORPUS = [
    "crates/unlace-analysis/tests/fixtures/fauxware",
    "crates/unlace-analysis/tests/fixtures/protoorder_cycles_x86_64",
    "crates/unlace-analysis/tests/fixtures/switchtable_i386",
    "crates/unlace-analysis/tests/fixtures/fmt_aarch64",
    "crates/unlace-analysis/tests/fixtures/fmt_arm",
    "crates/unlace-analysis/tests/fixtures/fmt_riscv64",
    "crates/unlace-analysis/tests/fixtures/plt_mips32",
    "crates/unlace-analysis/tests/fixtures/gotcall_macho_x86_64",
    "crates/unlace-analysis/tests/fixtures/pe_noreturn_import.exe",
    "crates/unlace-analysis/tests/fixtures/kernel_bugtable_x86_64.ko",
    "tests/fixtures/go-paniccheck-return/paniccheck-elf",
]
TIMEOUT = 600


def decompile(unlace: str, binary: Path, extra: list[str]) -> bytes:
    cmd = [unlace, "decompile-all", str(binary), "--json", *extra]
    out = subprocess.run(cmd, capture_output=True, timeout=TIMEOUT)
    if out.returncode != 0:
        raise RuntimeError(f"{' '.join(cmd)} exited {out.returncode}:\n{out.stderr.decode(errors='replace')[-2000:]}")
    return out.stdout


def first_difference(a: bytes, b: bytes, left: str, right: str) -> str:
    diff = difflib.unified_diff(a.decode(errors="replace").splitlines(), b.decode(errors="replace").splitlines(),
                                left, right, n=2, lineterm="")
    return "\n".join(list(diff)[:40])


def run(root: Path, unlace: str, corpus: list[str]) -> list[str]:
    problems = []
    serial = ["--jobs", "1", "--option", "protoorder", "off"]
    pooled = ["--jobs", "4", "--option", "protoorder", "off"]
    for rel in corpus:
        binary = root / rel
        if not binary.is_file():
            problems.append(f"{rel}: corpus binary is missing")
            continue
        try:
            first, second = decompile(unlace, binary, []), decompile(unlace, binary, [])
            if first != second:
                problems.append(f"{rel}: two runs differ\n" + first_difference(first, second, "run 1", "run 2"))
            one, four = decompile(unlace, binary, serial), decompile(unlace, binary, pooled)
            if one != four:
                problems.append(f"{rel}: --jobs 1 and --jobs 4 differ\n" + first_difference(one, four, "--jobs 1", "--jobs 4"))
        except (RuntimeError, subprocess.TimeoutExpired) as err:
            problems.append(f"{rel}: {err}")
        print(f"determinism: {rel} {'FAIL' if problems and problems[-1].startswith(rel) else 'ok'}", flush=True)
    return problems


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n", 1)[0])
    parser.add_argument("--root", default=Path(__file__).resolve().parents[1], type=Path)
    parser.add_argument("--run", metavar="UNLACE", help="decompile the corpus with this binary and compare")
    parser.add_argument("--corpus", nargs="*", help="binaries for --run instead of the fixed corpus")
    parser.add_argument("--write-allowlist", action="store_true", help=argparse.SUPPRESS)
    args = parser.parse_args(argv)
    root = args.root
    if args.write_allowlist:
        write_allowlist(root)
        return 0
    if args.run:
        problems = run(root, args.run, args.corpus or CORPUS)
        label = "determinism run"
    else:
        problems = check(root)
        label = "determinism lint"
    for p in problems:
        print(p, file=sys.stderr)
    if problems:
        print(f"{label}: FAIL ({len(problems)})", file=sys.stderr)
        return 1
    print(f"{label}: OK")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
