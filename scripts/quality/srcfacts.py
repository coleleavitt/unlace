"""Source-side facts per function, merged into the ground-truth sidecar.

A *fact* is anything known about a function from the source or the compiler that
a metric can compare unlace's output against. Facts are produced by extractors
registered with `@fact("name")`; each receives the function's DWARF record and a
`Source` context and returns a JSON value (or None when it cannot answer). The
default extractors read the function body the DWARF `decl_file`/`decl_line`
point at, so they work for gcc and clang alike:

- `cfg`: the structure-only CFG (`cfg.build`) — nodes, edges, statement counts.
- `body_lines`: the body's line count, the size a GED is normalized against.

`clang_ast` (opt-in, `corpus build --clang-ast`) runs
`clang -Xclang -ast-dump=json -fsyntax-only` once per source file and records, per
function, the AST node counts (`IfStmt`, `SwitchStmt`, `CaseStmt`, loops,
`GotoStmt`, `ConditionalOperator`, short-circuit operators), the direct callees
named in the source (including calls the optimizer later inlined), and those of
them declared `noreturn`.

Adding a fact: write an extractor here (or anywhere imported before `extract`
runs) and give it a name; `corpus build` stores its value under
`functions[<entry>].facts[<name>]` in every sidecar it writes, and a metric in
`metrics.py` can read it. Compiler-emitted facts (an LLVM pass or a GCC plugin
writing JSON per function) plug in the same way: the extractor reads the JSON
the build step left next to the object and returns the function's entry. See
docs/quality-harness.md, "Adding a fact".
"""
from __future__ import annotations

import json
import subprocess
from pathlib import Path
from typing import Callable

from . import cfg

FACTS: dict[str, Callable] = {}


def fact(name: str):
    def register(fn: Callable) -> Callable:
        FACTS[name] = fn
        return fn
    return register


class Source:
    """Per-binary context the extractors share (files read once, ASTs cached)."""

    def __init__(self, ast_cmd: list[str] | None = None, noreturn: set[str] | None = None):
        self.ast_cmd = ast_cmd
        self.noreturn = set(noreturn or ())
        self._text: dict[str, str | None] = {}
        self._ast: dict[str, dict] = {}

    def text(self, path: str | None) -> str | None:
        if not path:
            return None
        if path not in self._text:
            try:
                self._text[path] = Path(path).read_text(errors="replace")
            except OSError:
                self._text[path] = None
        return self._text[path]

    def body(self, fn: dict) -> str | None:
        src = self.text(fn.get("decl_file"))
        line = fn.get("decl_line")
        if src is None or not isinstance(line, int):
            return None
        return cfg.function_body(src, line)

    def ast(self, path: str | None) -> dict:
        if not path or self.ast_cmd is None:
            return {}
        if path not in self._ast:
            self._ast[path] = clang_ast_facts(self.ast_cmd + [path])
        return self._ast[path]


@fact("cfg")
def _cfg(fn: dict, src: Source):
    body = src.body(fn)
    if body is None:
        return None
    try:
        return cfg.build(body, src.noreturn)
    except (ValueError, RecursionError):
        return None


@fact("body_lines")
def _body_lines(fn: dict, src: Source):
    body = src.body(fn)
    return None if body is None else body.count("\n") + 1


@fact("clang_ast")
def _clang_ast(fn: dict, src: Source):
    if src.ast_cmd is None:
        return None
    return src.ast(fn.get("decl_file")).get(fn.get("name"))


_COUNTED = {"IfStmt": "if", "SwitchStmt": "switch", "CaseStmt": "case",
            "DefaultStmt": "default", "ForStmt": "for", "WhileStmt": "while",
            "DoStmt": "do", "GotoStmt": "goto", "ReturnStmt": "return",
            "ConditionalOperator": "ternary", "BreakStmt": "break",
            "ContinueStmt": "continue", "LabelStmt": "label", "CallExpr": "call"}


def _callee(node: dict) -> tuple[str | None, bool]:
    """(name, noreturn) of a CallExpr's direct callee, if it has one."""
    inner = (node.get("inner") or [None])[0]
    depth = 0
    while isinstance(inner, dict) and depth < 6:
        if inner.get("kind") == "DeclRefExpr":
            ref = inner.get("referencedDecl") or {}
            qual = (ref.get("type") or {}).get("qualType", "")
            return ref.get("name"), "noreturn" in qual
        inner = (inner.get("inner") or [None])[0]
        depth += 1
    return None, False


def _walk_ast(node, out: dict, depth: int = 0) -> None:
    if depth > 400 or not isinstance(node, dict):
        return
    kind = node.get("kind")
    key = _COUNTED.get(kind)
    if key:
        out["counts"][key] = out["counts"].get(key, 0) + 1
    if kind == "BinaryOperator" and node.get("opcode") in ("&&", "||"):
        out["counts"]["shortcircuit"] = out["counts"].get("shortcircuit", 0) + 1
    if kind == "CallExpr":
        name, noreturn = _callee(node)
        if name:
            out["callees"].add(name)
            if noreturn or name in cfg.NORETURN:
                out["noreturn_callees"].add(name)
    for child in node.get("inner") or ():
        _walk_ast(child, out, depth + 1)


def clang_ast_facts(cmd: list[str]) -> dict:
    """{function name: {counts, callees, noreturn_callees}} for one source file."""
    try:
        p = subprocess.run(cmd, capture_output=True, text=True, timeout=600)
        doc = json.loads(p.stdout) if p.stdout.strip() else {}
    except (subprocess.TimeoutExpired, json.JSONDecodeError, OSError):
        return {}
    out: dict[str, dict] = {}
    for decl in doc.get("inner") or ():
        if decl.get("kind") != "FunctionDecl" or decl.get("isImplicit"):
            continue
        body = [c for c in decl.get("inner") or () if c.get("kind") == "CompoundStmt"]
        if not body:
            continue
        acc = {"counts": {}, "callees": set(), "noreturn_callees": set()}
        _walk_ast(body[0], acc)
        out[decl.get("name")] = {"counts": acc["counts"],
                                 "callees": sorted(acc["callees"]),
                                 "noreturn_callees": sorted(acc["noreturn_callees"])}
    return out


def extract(functions: dict, src: Source, only: set[str] | None = None) -> None:
    """Run every registered extractor over `functions` (in place: `fn["facts"]`)."""
    for fn in functions.values():
        facts = fn.setdefault("facts", {})
        for name, extractor in FACTS.items():
            if only is not None and name not in only:
                continue
            try:
                facts[name] = extractor(fn, src)
            except Exception as e:  # noqa: BLE001 - one bad fact must not sink the binary
                facts[name] = {"error": f"{type(e).__name__}: {e}"}
