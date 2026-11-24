"""A structure-only CFG of one C function body, and the edit distance between two.

The same builder reads both sides — the original source body (cut out of the
file at the DWARF `DW_AT_decl_line`) and unlace's C — so the two graphs have
the same granularity by construction, which a CFG taken from two different
front-ends would not (clang's `debug.DumpCFG` splits blocks where a token walk
does not, and the decompiled C does not always parse).

Statements become nodes; `if`/`while`/`for`/`do`/`switch`/`case`/`goto`/labels,
`break`/`continue`/`return` and calls to known no-return functions shape the
edges. A top-level `&&`/`||` in a condition is expanded into one branch node
per operand, because a compiler (and so a decompiler) splits it the same way, and a
constant `while (1)`/`for (;;)` has no condition node. Unreachable statements
are dropped and straight-line chains are merged, so the graph is a basic-block
graph whatever the statement layout. Macros are not expanded: the source side is
read as written.

`ged` is the bipartite (Riesen-Bunke) upper bound refined by pairwise swaps,
with ENTRY and EXIT pinned to each other; `ged_lower_bound` is
`|dV| + |dE|`. Both count a node or an edge insertion/deletion as 1; node
labels are ignored, so this is the structural GED decbench's metric measures, not
its exact value (decbench builds its graphs with Joern).
"""
from __future__ import annotations

import re

ENTRY, EXIT = 0, 1

NORETURN = frozenset({
    "abort", "exit", "_exit", "_Exit", "quick_exit", "__assert_fail", "__assert_rtn",
    "__stack_chk_fail", "longjmp", "siglongjmp", "__builtin_unreachable",
    "__builtin_trap", "err", "errx", "verr", "verrx", "pthread_exit", "__cxa_throw",
    "__cxa_rethrow", "_Unwind_Resume", "__fortify_fail", "__chk_fail",
})

_TOKEN = re.compile(r"""
    (?P<ws>\s+)
  | (?P<id>[A-Za-z_]\w*)
  | (?P<num>(?:0[xX][0-9a-fA-F]+|\d+\.?\d*(?:[eE][+-]?\d+)?)[uUlLfF]*)
  | (?P<op>->|\+\+|--|<<=|>>=|<<|>>|<=|>=|==|!=|&&|\|\||\+=|-=|\*=|/=|%=|&=|\|=|\^=|::|\.\.\.|[{}()\[\];:,?.~!%^&*+\-=<>/|])
  | (?P<other>.)
""", re.X | re.S)


def strip_noise(text: str) -> str:
    """Comments, string/char literals and preprocessor lines blanked; length kept.

    A literal becomes `0` padded with spaces and everything else blanked keeps its
    newlines, so offsets into the result are offsets into the original text.
    """
    out, i, n = list(text), 0, len(text)
    at_line_start = True

    def blank(a: int, b: int) -> None:
        for k in range(a, min(b, n)):
            if out[k] != "\n":
                out[k] = " "

    while i < n:
        c = text[i]
        if at_line_start and c == "#":
            j = i
            while j < n and text[j] != "\n":
                if text[j] == "\\" and j + 1 < n and text[j + 1] == "\n":
                    j += 1
                j += 1
            blank(i, j)
            i = j
            continue
        if c == "/" and text.startswith("//", i):
            j = text.find("\n", i)
            j = n if j < 0 else j
            blank(i, j)
            i = j
            continue
        if c == "/" and text.startswith("/*", i):
            j = text.find("*/", i + 2)
            j = n if j < 0 else j + 2
            blank(i, j)
            i = j
            continue
        if c in "\"'":
            j = i + 1
            while j < n and text[j] != c and text[j] != "\n":
                j += 2 if text[j] == "\\" else 1
            blank(i, j + 1)
            out[i] = "0"
            i = j + 1
            at_line_start = False
            continue
        if c == "\n":
            at_line_start = True
        elif not c.isspace():
            at_line_start = False
        i += 1
    return "".join(out)


def tokenize(text: str) -> list[str]:
    return [m.group() for m in _TOKEN.finditer(strip_noise(text)) if m.lastgroup != "ws"]


def function_body(source: str, decl_line: int) -> str | None:
    """The `{...}` body of the definition starting at 1-based `decl_line`.

    The first `{` after the parameter list's closing `)` opens the body; braces
    are matched with comments and literals blanked, so the returned text is the
    original body (comments included) and its length is the original's.
    """
    lines = source.split("\n")
    if decl_line < 1 or decl_line > len(lines):
        return None
    start = sum(len(l) + 1 for l in lines[:decl_line - 1])
    clean = strip_noise(source)
    depth, i, n = 0, start, len(clean)
    seen_paren = False
    while i < n:
        c = clean[i]
        if c == "(":
            depth += 1
            seen_paren = True
        elif c == ")":
            depth -= 1
        elif c == ";" and depth == 0:
            return None
        elif c == "{" and depth == 0 and seen_paren:
            break
        i += 1
    else:
        return None
    open_at, depth = i, 0
    while i < n:
        if clean[i] == "{":
            depth += 1
        elif clean[i] == "}":
            depth -= 1
            if depth == 0:
                return source[open_at:i + 1]
        i += 1
    return None


def split_definitions(code: str) -> str | None:
    """The body of the first function definition in a decompiled `code` string."""
    clean = strip_noise(code)
    depth, i = 0, 0
    while i < len(clean):
        c = clean[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif c == "{" and depth == 0:
            break
        i += 1
    else:
        return None
    open_at, depth = i, 0
    while i < len(clean):
        if clean[i] == "{":
            depth += 1
        elif clean[i] == "}":
            depth -= 1
            if depth == 0:
                return code[open_at:i + 1]
        i += 1
    return None


# --------------------------------------------------------------------------
# statement parser
# --------------------------------------------------------------------------

_OPEN = {"(": ")", "[": "]", "{": "}"}


def _match(toks: list[str], i: int) -> int:
    """Index of the bracket closing the one at `i` (or len on malformed input)."""
    stack = [_OPEN[toks[i]]]
    i += 1
    while i < len(toks) and stack:
        t = toks[i]
        if t in _OPEN:
            stack.append(_OPEN[t])
        elif stack and t == stack[-1]:
            stack.pop()
        i += 1
    return i - 1 if not stack else len(toks)


def _until(toks: list[str], i: int, stops: set[str]) -> int:
    """First index at bracket depth 0 whose token is in `stops` (or len)."""
    while i < len(toks):
        t = toks[i]
        if t in stops:
            return i
        if t in _OPEN:
            i = _match(toks, i)
        i += 1
    return len(toks)


class _Parser:
    def __init__(self, toks: list[str]):
        self.t = toks
        self.budget = 200000

    def block(self, i: int, end: int) -> list:
        out = []
        while i < end:
            stmt, i = self.stmt(i, end)
            if stmt is not None:
                out.append(stmt)
        return out

    def paren(self, i: int, end: int) -> tuple[list[str], int]:
        if i >= end or self.t[i] != "(":
            j = _until(self.t, i, {")", ";", "{"})
            return self.t[i:j], j
        j = min(_match(self.t, i), end)
        return self.t[i + 1:j], j + 1

    def stmt(self, i: int, end: int):
        self.budget -= 1
        if self.budget < 0:
            raise ValueError("statement budget exhausted")
        t = self.t
        if i >= end:
            return None, end
        tok = t[i]
        if tok == ";":
            return None, i + 1
        if tok == "{":
            j = min(_match(t, i), end)
            return ("block", self.block(i + 1, j)), j + 1
        if tok == "if":
            cond, j = self.paren(i + 1, end)
            then, j = self.stmt(j, end)
            other = None
            if j < end and t[j] == "else":
                other, j = self.stmt(j + 1, end)
            return ("if", cond, then, other), j
        if tok == "while":
            cond, j = self.paren(i + 1, end)
            body, j = self.stmt(j, end)
            return ("while", cond, body), j
        if tok == "do":
            body, j = self.stmt(i + 1, end)
            cond = []
            if j < end and t[j] == "while":
                cond, j = self.paren(j + 1, end)
            if j < end and t[j] == ";":
                j += 1
            return ("do", body, cond), j
        if tok == "for":
            head, j = self.paren(i + 1, end)
            parts, k = [], 0
            while len(parts) < 2:
                s = _until(head, k, {";"})
                parts.append(head[k:s])
                k = s + 1
            parts.append(head[k:] if k <= len(head) else [])
            body, j = self.stmt(j, end)
            return ("for", parts[0], parts[1], parts[2], body), j
        if tok == "switch":
            cond, j = self.paren(i + 1, end)
            body, j = self.stmt(j, end)
            return ("switch", cond, body), j
        if tok == "case":
            j = i + 1
            ternary = 0
            while j < end and not (t[j] == ":" and ternary == 0):
                if t[j] == "?":
                    ternary += 1
                elif t[j] == ":":
                    ternary -= 1
                elif t[j] in _OPEN:
                    j = _match(t, j)
                j += 1
            return ("case",), j + 1
        if tok == "default" and i + 1 < end and t[i + 1] == ":":
            return ("default",), i + 2
        if tok == "break":
            return ("break",), _until(t, i, {";"}) + 1
        if tok == "continue":
            return ("continue",), _until(t, i, {";"}) + 1
        if tok == "return":
            return ("return",), _until(t, i, {";"}) + 1
        if tok == "goto" and i + 1 < end:
            return ("goto", t[i + 1]), _until(t, i, {";"}) + 1
        if (re.match(r"[A-Za-z_]\w*$", tok) and i + 1 < end and t[i + 1] == ":"
                and tok not in ("default", "case")):
            inner, j = self.stmt(i + 2, end)
            return ("label", tok, inner), j
        if tok in ("else", "}"):
            return None, i + 1
        j = _until(t, i, {";", "}"})
        expr = t[i:j]
        return ("expr", expr), (j + 1 if j < end and t[j] == ";" else j)


# --------------------------------------------------------------------------
# CFG construction
# --------------------------------------------------------------------------

def _strip_parens(toks: list[str]) -> list[str]:
    while len(toks) >= 2 and toks[0] == "(" and _match(toks, 0) == len(toks) - 1:
        toks = toks[1:-1]
    return toks


def _split_top(toks: list[str], op: str) -> list[list[str]]:
    parts, cur, i = [], [], 0
    while i < len(toks):
        t = toks[i]
        if t in _OPEN:
            j = _match(toks, i)
            cur.extend(toks[i:j + 1])
            i = j + 1
            continue
        if t == "?":
            return [toks]
        if t == op:
            parts.append(cur)
            cur = []
        else:
            cur.append(t)
        i += 1
    parts.append(cur)
    return parts


class Graph:
    """Nodes 0 (ENTRY) and 1 (EXIT) plus one per statement or branch operand."""

    def __init__(self):
        self.n = 2
        self.succ: dict[int, set[int]] = {ENTRY: set(), EXIT: set()}

    def new(self) -> int:
        node = self.n
        self.n += 1
        self.succ[node] = set()
        return node

    def connect(self, preds, node: int) -> None:
        for p in preds:
            self.succ[p].add(node)

    def edges(self) -> set[tuple[int, int]]:
        return {(a, b) for a, bs in self.succ.items() for b in bs}


class _Builder:
    def __init__(self, noreturn: frozenset[str]):
        self.g = Graph()
        self.noreturn = noreturn
        self.loops: list[dict] = []
        self.breakables: list[dict] = []
        self.switches: list[dict] = []
        self.labels: dict[str, int] = {}
        self.gotos: list[tuple[list[int], str]] = []
        self.counts = {"if": 0, "loop": 0, "switch": 0, "case": 0, "goto": 0,
                       "return": 0, "break": 0, "continue": 0, "label": 0}

    def cond(self, toks: list[str]):
        """-> (entry node or None, true-dangling, false-dangling)."""
        toks = _strip_parens(toks)
        ors = _split_top(toks, "||")
        if len(ors) > 1:
            entry, t_out, f_prev = None, [], None
            for part in ors:
                e, t, f = self.cond(part)
                if entry is None:
                    entry = e
                if f_prev is not None:
                    self.g.connect(f_prev, e)
                t_out += t
                f_prev = f
            return entry, t_out, f_prev
        ands = _split_top(toks, "&&")
        if len(ands) > 1:
            entry, f_out, t_prev = None, [], None
            for part in ands:
                e, t, f = self.cond(part)
                if entry is None:
                    entry = e
                if t_prev is not None:
                    self.g.connect(t_prev, e)
                f_out += f
                t_prev = t
            return entry, t_prev, f_out
        node = self.g.new()
        return node, [node], [node]

    def loop_cond(self, toks: list[str]):
        """A loop condition; a constant-true or empty one has no node (entry None)."""
        bare = _strip_parens(toks)
        if not bare or (len(bare) == 1 and bare[0] in ("1", "true", "TRUE")):
            return None, None, []
        return self.cond(toks)

    def stmt(self, s, cur: list[int]) -> list[int]:
        if s is None:
            return cur
        kind = s[0]
        g = self.g
        if kind == "block":
            for inner in s[1]:
                cur = self.stmt(inner, cur)
            return cur
        if kind == "expr":
            if not s[1]:
                return cur
            node = g.new()
            g.connect(cur, node)
            toks = s[1]
            for k in range(len(toks) - 1):
                if toks[k] in self.noreturn and toks[k + 1] == "(":
                    return []
            return [node]
        if kind == "return":
            self.counts["return"] += 1
            node = g.new()
            g.connect(cur, node)
            g.connect([node], EXIT)
            return []
        if kind == "if":
            self.counts["if"] += 1
            entry, t, f = self.cond(s[1])
            g.connect(cur, entry)
            then_out = self.stmt(s[2], t)
            else_out = self.stmt(s[3], f) if s[3] is not None else f
            return then_out + else_out
        if kind in ("while", "for", "do"):
            self.counts["loop"] += 1
            return self.loop(s, cur)
        if kind == "switch":
            self.counts["switch"] += 1
            head = g.new()
            g.connect(cur, head)
            ctx = {"head": head, "default": False, "breaks": []}
            self.switches.append(ctx)
            self.breakables.append(ctx)
            out = self.stmt(s[2], [])
            self.breakables.pop()
            self.switches.pop()
            return out + ctx["breaks"] + ([] if ctx["default"] else [head])
        if kind in ("case", "default"):
            self.counts["case"] += kind == "case"
            node = g.new()
            g.connect(cur, node)
            if self.switches:
                g.connect([self.switches[-1]["head"]], node)
                if kind == "default":
                    self.switches[-1]["default"] = True
            return [node]
        if kind == "break":
            self.counts["break"] += 1
            if self.breakables:
                self.breakables[-1]["breaks"] += cur
            return []
        if kind == "continue":
            self.counts["continue"] += 1
            if self.loops:
                self.loops[-1]["continues"] += cur
            return []
        if kind == "goto":
            self.counts["goto"] += 1
            self.gotos.append((list(cur), s[1]))
            return []
        if kind == "label":
            self.counts["label"] += 1
            node = g.new()
            g.connect(cur, node)
            self.labels[s[1]] = node
            return self.stmt(s[2], [node])
        return cur

    def loop(self, s, cur: list[int]) -> list[int]:
        g = self.g
        ctx = {"breaks": [], "continues": []}
        self.loops.append(ctx)
        self.breakables.append(ctx)
        if s[0] == "do":
            join = g.new()
            g.connect(cur, join)
            body_out = self.stmt(s[1], [join])
            entry, t, f = self.loop_cond(s[2])
            if entry is None:
                g.connect(body_out + ctx["continues"], join)
                out = []
            else:
                g.connect(body_out + ctx["continues"], entry)
                g.connect(t, join)
                out = f
        else:
            if s[0] == "for":
                cur = self.stmt(("expr", s[1]), cur)
                cond_toks, step, body = s[2], s[3], s[4]
            else:
                cond_toks, step, body = s[1], [], s[2]
            entry, t, f = self.loop_cond(cond_toks)
            if entry is None:
                entry = g.new()
                t, f = [entry], []
            g.connect(cur, entry)
            body_out = self.stmt(body, t)
            tail = body_out + ctx["continues"]
            if step:
                node = g.new()
                g.connect(tail, node)
                tail = [node]
            g.connect(tail, entry)
            out = f
        self.breakables.pop()
        self.loops.pop()
        return out + ctx["breaks"]


def _compress(g: Graph) -> tuple[int, set[tuple[int, int]]]:
    """Reachable-from-ENTRY nodes, straight-line chains merged -> (n, edges) renumbered."""
    reach, stack = {ENTRY}, [ENTRY]
    while stack:
        for b in g.succ[stack.pop()]:
            if b not in reach:
                reach.add(b)
                stack.append(b)
    reach.add(EXIT)
    succ = {a: {b for b in g.succ[a] if b in reach} for a in reach}
    pred: dict[int, set[int]] = {a: set() for a in reach}
    for a, bs in succ.items():
        for b in bs:
            pred[b].add(a)
    changed = True
    while changed:
        changed = False
        for a in sorted(succ):
            if a not in succ or len(succ[a]) != 1:
                continue
            b = next(iter(succ[a]))
            if b in (a, EXIT, ENTRY) or len(pred[b]) != 1:
                continue
            succ[a] = succ.pop(b)
            pred.pop(b)
            for c in succ[a]:
                pred[c].discard(b)
                pred[c].add(a)
            changed = True
    order = sorted(succ)
    index = {node: i for i, node in enumerate(order)}
    edges = {(index[a], index[b]) for a, bs in succ.items() for b in bs}
    return len(order), edges


def build(body: str, noreturn: frozenset[str] | set[str] = frozenset()) -> dict:
    """One function body (`{...}`) -> {nodes, edges, counts}."""
    toks = tokenize(body)
    if toks and toks[0] == "{":
        toks = toks[1:_match(toks, 0)]
    b = _Builder(NORETURN | frozenset(noreturn))
    tree = _Parser(toks).block(0, len(toks))
    cur = [ENTRY]
    for s in tree:
        cur = b.stmt(s, cur)
    b.g.connect(cur, EXIT)
    for preds, label in b.gotos:
        b.g.connect(preds, b.labels.get(label, EXIT))
    n, edges = _compress(b.g)
    return {"nodes": n, "edges": sorted(edges), "counts": b.counts}


# --------------------------------------------------------------------------
# graph edit distance
# --------------------------------------------------------------------------

def ged_lower_bound(a: dict, b: dict) -> int:
    return abs(a["nodes"] - b["nodes"]) + abs(len(a["edges"]) - len(b["edges"]))


def _cost(mapping: list[int], n1: int, n2: int, e1: set, e2: set) -> int:
    """Exact edit cost induced by mapping G1 node i -> mapping[i] (>= n2: deleted)."""
    cost = sum(1 for i in range(n1) if mapping[i] >= n2)
    used = {mapping[i] for i in range(n1) if mapping[i] < n2}
    cost += n2 - len(used)
    kept = 0
    for a, b in e1:
        ma, mb = mapping[a], mapping[b]
        if ma < n2 and mb < n2 and (ma, mb) in e2:
            kept += 1
    return cost + (len(e1) - kept) + (len(e2) - kept)


def _assign(cost: list[list[float]]) -> list[int]:
    try:
        from scipy.optimize import linear_sum_assignment  # type: ignore
        rows, cols = linear_sum_assignment(cost)
        out = [0] * len(cost)
        for r, c in zip(rows, cols):
            out[int(r)] = int(c)
        return out
    except Exception:  # noqa: BLE001 - scipy missing: a greedy assignment still bounds
        n = len(cost)
        pairs = sorted((cost[i][j], i, j) for i in range(n) for j in range(n))
        out, rows, cols = [-1] * n, set(), set()
        for _, i, j in pairs:
            if i not in rows and j not in cols:
                out[i] = j
                rows.add(i)
                cols.add(j)
        return out


def ged(a: dict, b: dict, max_swap_nodes: int = 40) -> int:
    """Upper bound on the structural GED between two `build` graphs (exact when small)."""
    n1, n2 = a["nodes"], b["nodes"]
    e1, e2 = {tuple(e) for e in a["edges"]}, {tuple(e) for e in b["edges"]}
    if n1 == 0 or n2 == 0:
        return n1 + n2 + len(e1) + len(e2)
    def degs(n, edges):
        out, inn = [0] * n, [0] * n
        for x, y in edges:
            out[x] += 1
            inn[y] += 1
        return out, inn
    o1, i1 = degs(n1, e1)
    o2, i2 = degs(n2, e2)
    big = 1e6
    size = n1 + n2
    cost = [[big] * size for _ in range(size)]
    for i in range(n1):
        for j in range(n2):
            c = (abs(o1[i] - o2[j]) + abs(i1[i] - i2[j])) / 2
            pinned_i, pinned_j = i in (ENTRY, EXIT), j in (ENTRY, EXIT)
            if pinned_i or pinned_j:
                c = c if i == j else big
            cost[i][j] = c
        cost[i][n2 + i] = 1 + (o1[i] + i1[i]) / 2 if i not in (ENTRY, EXIT) else big
    for j in range(n2):
        cost[n1 + j][j] = 1 + (o2[j] + i2[j]) / 2 if j not in (ENTRY, EXIT) else big
    for i in range(n2):
        for j in range(n1):
            cost[n1 + i][n2 + j] = 0
    assign = _assign(cost)
    mapping = [assign[i] if assign[i] < n2 else n2 + i for i in range(n1)]
    best = _cost(mapping, n1, n2, e1, e2)
    if n1 + n2 <= 2 * max_swap_nodes:
        improved = True
        rounds = 0
        while improved and rounds < 5:
            improved, rounds = False, rounds + 1
            for x in range(2, n1):
                for y in range(x + 1, n1):
                    mapping[x], mapping[y] = mapping[y], mapping[x]
                    c = _cost(mapping, n1, n2, e1, e2)
                    if c < best:
                        best, improved = c, True
                    else:
                        mapping[x], mapping[y] = mapping[y], mapping[x]
                free = sorted(set(range(2, n2)) - {m for m in mapping if m < n2})
                for j in free:
                    old = mapping[x]
                    mapping[x] = j
                    c = _cost(mapping, n1, n2, e1, e2)
                    if c < best:
                        best, improved = c, True
                        break
                    mapping[x] = old
    return max(best, ged_lower_bound(a, b))
