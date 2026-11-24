"""Register names, offsets and sizes of a SLEIGH language, read from its .slaspec sources.

A small SLEIGH preprocessor (@define, @undef, @include, @if/@ifdef/@ifndef/@elif/@else/@endif and
$(NAME) expansion) runs over the .slaspec named by the language's .ldefs entry, then every
`define register offset=O size=S [ names ]` is laid out the way the SLEIGH compiler lays it out.
"""
from pathlib import Path
import re

PROCESSORS = Path(__file__).resolve().parents[2] / "specs" / "Ghidra" / "Processors"

DEFINE = re.compile(r'@define\s+(\w+)(?:\s+(?:"([^"]*)"|(\S+)))?')
REGDEF = re.compile(r"define\s+register\s+offset\s*=\s*(\S+)\s+size\s*=\s*(\S+)\s*\[([^\]]*)\]", re.S)
ENDIAN = re.compile(r"define\s+endian\s*=\s*(big|little)")
LANG = re.compile(r"<language\b(.*?)>", re.S)
ATTR = re.compile(r'(\w+)\s*=\s*"([^"]*)"')


def find_language(langid: str) -> Path:
    """The .slaspec behind a language id such as `x86:LE:64:default`."""
    for ldefs in sorted(PROCESSORS.glob("*/data/languages/*.ldefs")):
        for m in LANG.finditer(ldefs.read_text(errors="replace")):
            attrs = dict(ATTR.findall(m.group(1)))
            if attrs.get("id") == langid and "slafile" in attrs:
                spec = ldefs.parent / attrs["slafile"].replace(".sla", ".slaspec")
                if spec.exists():
                    return spec
    raise KeyError(f"no .slaspec for language {langid}")


def _cond(expr: str, defs: dict) -> bool:
    expr = re.sub(r"defined\s*\(\s*(\w+)\s*\)", lambda m: " True " if m.group(1) in defs else " False ", expr)
    expr = expr.replace("&&", " and ").replace("||", " or ")
    expr = re.sub(r"!(?!=)", " not ", expr)

    def ident(m):
        w = m.group(0)
        if w in ("and", "or", "not", "True", "False"):
            return w
        return repr(defs.get(w, ""))
    expr = re.sub(r'"[^"]*"|\b[A-Za-z_]\w*\b', lambda m: m.group(0) if m.group(0).startswith('"') else ident(m), expr)
    try:
        return bool(eval(expr, {"__builtins__": {}}))
    except Exception:
        return False


def preprocess(path: Path, defs: dict | None = None, out: list | None = None) -> str:
    defs = {} if defs is None else defs
    out = [] if out is None else out
    stack: list[list[bool]] = []

    def active():
        return all(s[0] for s in stack)
    for raw in path.read_text(errors="replace").splitlines():
        line = raw.split("#", 1)[0] if not raw.lstrip().startswith("@") else raw
        s = line.strip()
        if s.startswith("@"):
            word = s.split()[0]
            rest = s[len(word):].strip()
            if word == "@if":
                v = active() and _cond(rest, defs)
                stack.append([v, v])
            elif word in ("@ifdef", "@ifndef"):
                v = (rest.split()[0] in defs) == (word == "@ifdef") if rest else False
                v = active() and v
                stack.append([v, v])
            elif word == "@elif":
                top = stack[-1]
                parent = all(x[0] for x in stack[:-1])
                v = parent and not top[1] and _cond(rest, defs)
                top[0] = v
                top[1] = top[1] or v
            elif word == "@else":
                top = stack[-1]
                parent = all(x[0] for x in stack[:-1])
                top[0] = parent and not top[1]
                top[1] = True
            elif word == "@endif":
                stack.pop()
            elif not active():
                continue
            elif word == "@define":
                m = DEFINE.match(s)
                if m:
                    defs[m.group(1)] = m.group(2) if m.group(2) is not None else (m.group(3) or "")
            elif word == "@undef":
                defs.pop(rest.split()[0], None)
            elif word == "@include":
                inc = rest.strip().strip('"')
                inc = re.sub(r"\$\((\w+)\)", lambda m: defs.get(m.group(1), ""), inc)
                p = path.parent / inc
                if p.exists():
                    preprocess(p, defs, out)
            continue
        if active():
            out.append(re.sub(r"\$\((\w+)\)", lambda m: defs.get(m.group(1), m.group(0)), line))
    return "\n".join(out)


def _num(tok: str) -> int:
    return int(tok, 0)


def register_map(langid: str) -> tuple[dict, bool]:
    """({name: (offset, size)}, big_endian) for a language id."""
    text = preprocess(find_language(langid))
    regs = {}
    for m in REGDEF.finditer(text):
        try:
            off, size = _num(m.group(1)), _num(m.group(2))
        except ValueError:
            continue
        for i, name in enumerate(m.group(3).split()):
            if name != "_" and name not in regs:
                regs[name] = (off + i * size, size)
    e = ENDIAN.search(text)
    return regs, bool(e and e.group(1) == "big")
