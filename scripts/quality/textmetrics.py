"""Source-free text counters on one printed function of decompiled C.

Ported from the archived master's xtask/src/corpus/metrics.rs (OutputMetrics and
measure). They read only the printed text, never unlace's internals, so they stay
valid while the pipeline behind the printer is redesigned, and they score a binary
that has no ground truth. Every counter is lower-is-better.

`gotos` and `lines` are left out: `metrics.source_free` already reports both.
"""
from __future__ import annotations

import re
from dataclasses import dataclass

FLAG_REGISTERS = ("CF", "PF", "AF", "ZF", "SF", "TF", "DF", "OF", "NF", "VF", "NG", "ZR", "CY", "OV", "NZCV")
STACK_REGISTERS = ("rsp", "rbp", "esp", "ebp", "sp", "fp", "x29", "x31", "wsp")
NOT_TYPES = (
    "return", "goto", "if", "else", "while", "do", "for", "switch", "case", "break", "continue",
    "default", "sizeof",
)

COUNTERS = ("flag_vars", "empty_blocks", "dead_stores", "leaked_temps", "register_carriers",
            "raw_stack_accesses")

_DECL = re.compile(
    r"^\s*(?:(?:const|volatile|unsigned|signed|struct|union|enum)\s+)*([A-Za-z_]\w*)"
    r"(?:\s*\*+\s*|\s+)+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(=|;)")
_FLAG_IDIOM = re.compile(
    r"__(?:OF|CF|SF|PF|ZF)[A-Z]*__\s*\(|__SETP__\s*\(|\b(?:S?CARRY|SBORROW)\d+\s*\(")
_NZCV_MEMBER = re.compile(r"\(_DWORD\)\(([A-Za-z_]\w*)\)\s*<<\s*0x1[cdef]\b")
_EMPTY_BLOCK = re.compile(r"\{\s*\}")
_DEREF = re.compile(r"\*\s*\(\s*[A-Za-z_][\w\s]*\*+\s*\)\s*\(")
_IDENT = re.compile(r"[A-Za-z_]\w*")
_REGISTER_NAME = re.compile(
    r"reg\?|[re]?[abcd]x|[abcd][lh]|[re]?[sd]il?|[re]?[sb]pl?|r(?:[89]|1[0-5])[dwb]?"
    r"|[xwqdsbhv]\d+|xmm\d+|ymm\d+|sp|fp|lr|wsp|xzr|wzr")


@dataclass
class _Line:
    code: str
    comment: str


@dataclass
class _Var:
    role: str | None = None
    reads: int = 0
    writes: int = 0


def measure(body: str) -> dict[str, int]:
    """Counters for one function; `body` runs from the signature line through the closing brace."""
    lines = _split_lines(body)
    counts = dict.fromkeys(COUNTERS, 0)
    variables: dict[str, _Var] = {}
    flag_vars: set[str] = set()

    if lines:
        for param in _params(lines[0].code).split(","):
            names = _IDENT.findall(param)
            if names and param.strip() != "void":
                variables.setdefault(names[-1], _Var())

    for line in lines[1:]:
        decl = _DECL.search(line.code)
        if decl and decl.group(1) not in NOT_TYPES:
            var = variables.setdefault(decl.group(2), _Var())
            if line.comment:
                var.role = line.comment

    code = "\n".join(line.code for line in lines[1:])

    for line in lines[1:]:
        decl = _DECL.search(line.code)
        if decl and decl.group(1) in NOT_TYPES:
            decl = None
        decl_name = decl.start(2) if decl else None
        for ident in _IDENT.finditer(line.code):
            var = variables.get(ident.group())
            if var is None or _in_string(line.code, ident.start()):
                continue
            after = line.code[ident.end():].lstrip()
            before = line.code[:ident.start()].rstrip()
            assigned = after.startswith("=") and not after.startswith("==")
            if ident.start() == decl_name:
                if assigned:
                    var.writes += 1
                continue
            member_or_deref = before.endswith((".", "->", "*", "&"))
            if assigned and not member_or_deref:
                var.writes += 1
            else:
                var.reads += 1
        target = _assignment_target(line.code)
        if target is not None and _FLAG_IDIOM.search(line.code):
            flag_vars.add(target)
        for caps in _NZCV_MEMBER.finditer(line.code):
            flag_vars.add(caps.group(1))
            if target is not None:
                flag_vars.add(target)

    stack_vars = {name for name, var in variables.items() if var.role in STACK_REGISTERS}

    for name, var in variables.items():
        role = var.role if var.role is not None else _engine_register_input(name)
        if role in FLAG_REGISTERS:
            flag_vars.add(name)
        elif role == "temp":
            counts["leaked_temps"] += 1
        elif role is not None and _REGISTER_NAME.fullmatch(role):
            counts["register_carriers"] += 1
        if var.reads == 0:
            counts["dead_stores"] += var.writes

    counts["flag_vars"] = sum(1 for name in flag_vars if name in variables)
    counts["empty_blocks"] = len(_EMPTY_BLOCK.findall(code))
    counts["raw_stack_accesses"] = sum(
        1 for m in _DEREF.finditer(code)
        if any(ident in STACK_REGISTERS or ident in stack_vars
               for ident in _IDENT.findall(_balanced_parens(code[m.end() - 1:]))))
    return counts


def _split_lines(body: str) -> list[_Line]:
    """Each printed line split into its code and its trailing // or /* */ comment."""
    parts = body.split("\n")
    if parts and parts[-1] == "":
        parts.pop()
    out: list[_Line] = []
    in_block = False
    for line in parts:
        if line.endswith("\r"):
            line = line[:-1]
        code: list[str] = []
        comment = ""
        quote = None
        i = 0
        while i < len(line):
            c = line[i]
            if in_block:
                if line.startswith("*/", i):
                    in_block = False
                    i += 2
                else:
                    i += 1
                continue
            if quote is not None:
                code.append(c)
                if c == "\\" and i + 1 < len(line):
                    code.append(line[i + 1])
                    i += 2
                    continue
                if c == quote:
                    quote = None
                i += 1
                continue
            if line.startswith("//", i):
                comment = line[i + 2:].strip()
                break
            if line.startswith("/*", i):
                in_block = True
                i += 2
                continue
            if c in "\"'":
                quote = c
            code.append(c)
            i += 1
        out.append(_Line("".join(code), comment))
    return out


def _params(signature: str) -> str:
    """The text between the first '(' of the signature and its last ')'."""
    if "(" not in signature:
        return ""
    return signature.split("(", 1)[1].rsplit(")", 1)[0]


def _assignment_target(code: str) -> str | None:
    """NAME of a statement `NAME = ...` or `TYPE NAME = ...`."""
    if "=" not in code:
        return None
    lhs, rhs = code.split("=", 1)
    if rhs.startswith("=") or lhs.endswith(("!", "<", ">", "+", "-", "*", "/", "&", "|", "^", "%")):
        return None
    last = None
    for m in _IDENT.finditer(lhs):
        last = m
    if last is None or lhs[last.end():].strip():
        return None
    return last.group()


def _engine_register_input(name: str) -> str | None:
    """The register of a variable the Ghidra engine names after a register it reads before writing
    (`in_ZF`, `unaff_RBX`, `extraout_EAX`); such names carry no declaration comment."""
    for prefix in ("in_", "unaff_", "extraout_"):
        if name.startswith(prefix):
            register = name[len(prefix):]
            break
    else:
        return None
    if register in FLAG_REGISTERS:
        return register
    return "reg?" if _REGISTER_NAME.fullmatch(register.lower()) else None


def _in_string(code: str, pos: int) -> bool:
    return code[:pos].count('"') % 2 == 1


def _balanced_parens(text: str) -> str:
    """The text inside the parenthesised group that starts at text[0] == '('."""
    depth = 0
    for i, c in enumerate(text):
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                return text[1:i]
    return text
