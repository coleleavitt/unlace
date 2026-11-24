#!/usr/bin/env python3
"""Build the built-in Windows type libraries from IDA's Windows SDK type libraries.

    scripts/typelib/gen_windows.py --tils ~/SiteResearch/ida-pro/ida-9.5-tils.sqlite \
        -o crates/unlace-console/typelib

Source: IDA 9.5's shipped type libraries, read from the SQLite dump of them
(one row per type, member and symbol, each as IDA prints it). For x86 the
library is generated from mssdk_win10.til and ntapi_win10.til, for x64 from
mssdk64_win10.til and ntapi64_win10.til; where both declare a name the SDK
library wins. Only functions are kept, plus every type they reach: the
typedefs, enums (as integers of their width) and records (with the member
offsets IDA measured) a prototype names, directly or through other types.

Only functions some core system DLL exports are kept: the export names of the
DLLs in DLLS, read from Wine's .spec files at the tag pinned in WINE (names
only; no Wine code or text enters the library). That keeps the API an
ordinary program imports and leaves out the long tail of SDK helpers no DLL
in the list exports.

An x86 entry is kept only when it is __stdcall and not variadic, the default
convention of an x86 Windows image, so the keyword is dropped; an x64 entry
has the one x64 convention. IDA's own spellings are rewritten into C
(__int16 -> short, $<hash> anonymous names -> _<hash>), and an entry that
names a type C cannot spell (__int128, _UNKNOWN) is left out.

Needs: python3 and network access to gitlab.winehq.org (or --specs, a
directory already holding <dll>.spec files).
"""
from __future__ import annotations

import argparse
import pathlib
import re
import sqlite3
import sys
import urllib.request

FORMAT = "typelib 1"

WINE = "wine-10.0"
WINE_URL = "https://gitlab.winehq.org/wine/wine/-/raw/{tag}/dlls/{dll}/{dll}.spec"
DLLS = [
    "advapi32", "bcrypt", "cfgmgr32", "combase", "comctl32", "comdlg32", "crypt32",
    "dbghelp", "dnsapi", "dwmapi", "gdi32", "imm32", "iphlpapi", "kernel32", "kernelbase",
    "mpr", "mswsock", "ncrypt", "netapi32", "ntdll", "ole32", "oleaut32", "powrprof",
    "psapi", "rpcrt4", "sechost", "secur32", "setupapi", "shell32", "shlwapi", "urlmon",
    "user32", "userenv", "uxtheme", "version", "winhttp", "wininet", "winmm", "wintrust",
    "ws2_32", "wtsapi32",
]
SPEC_LINE = re.compile(
    r"^\s*(?:\d+|@)\s+(?:stdcall|cdecl|varargs|thiscall|fastcall|extern|stub)\s+(?:-\S+\s+)*([A-Za-z_]\w*)"
)

TARGETS = {
    "windows x86": ("windows-x86.ktl", 4, ["mssdk_win10.til", "ntapi_win10.til"]),
    "windows x86_64": ("windows-x86_64.ktl", 8, ["mssdk64_win10.til", "ntapi64_win10.til"]),
}

IDENT = re.compile(r"[A-Za-z_$][\w$]*(?:::[A-Za-z_$][\w$]*)*")
WORD = re.compile(r"[A-Za-z_]\w*")

DROP = {
    "__stdcall", "__cdecl", "__fastcall", "__thiscall", "__pascal", "__unaligned",
    "__ptr32", "__ptr64", "__restrict", "__hidden", "__near", "__far", "__huge",
    "__sptr", "__uptr", "__return_ptr", "__struct_ptr", "__high", "__noreturn",
    "__array_ptr",
}
SPELL = [
    (r"\bunsigned\s+__int8\b", "unsigned char"),
    (r"\bsigned\s+__int8\b", "signed char"),
    (r"\b__int8\b", "char"),
    (r"\bunsigned\s+__int16\b", "unsigned short"),
    (r"\bsigned\s+__int16\b", "short"),
    (r"\b__int16\b", "short"),
    (r"\bunsigned\s+__int32\b", "unsigned int"),
    (r"\bsigned\s+__int32\b", "int"),
    (r"\b__int32\b", "int"),
    (r"\bunsigned\s+__int64\b", "unsigned long long"),
    (r"\bsigned\s+__int64\b", "long long"),
    (r"\b__int64\b", "long long"),
    (r"\b_BYTE\b", "unsigned char"),
    (r"\b_WORD\b", "unsigned short"),
    (r"\b_DWORD\b", "unsigned int"),
    (r"\b_QWORD\b", "unsigned long long"),
    (r"\b_BOOL1\b", "unsigned char"),
    (r"\b_BOOL2\b", "unsigned short"),
    (r"\b_BOOL4\b", "int"),
    (r"\b_BOOL8\b", "long long"),
    (r"\bbool\b", "_Bool"),
    (r"\blong\s+double\b", "double"),
]
SPELL = [(re.compile(a), b) for a, b in SPELL]

C_WORDS = {
    "void", "char", "short", "int", "long", "float", "double", "signed", "unsigned",
    "_Bool", "wchar_t", "const", "volatile", "struct", "union", "enum",
}
RESERVED = C_WORDS | {
    "auto", "break", "case", "continue", "default", "do", "else", "extern", "for", "goto",
    "if", "inline", "register", "restrict", "return", "sizeof", "static", "switch",
    "typedef", "while", "bool",
}
SCALAR = {"char": 1, "short": 2, "int": 4, "long": 4, "float": 4, "double": 8, "_Bool": 1,
          "wchar_t": 2}
MAX_LINE = 4096


def exports(specs: pathlib.Path | None) -> set[str]:
    """Every name a DLL of DLLS exports, from its Wine .spec file."""
    names = set()
    for dll in DLLS:
        path = specs / f"{dll}.spec" if specs else None
        if path and path.is_file():
            text = path.read_text(errors="replace")
        else:
            with urllib.request.urlopen(WINE_URL.format(tag=WINE, dll=dll), timeout=60) as r:
                text = r.read().decode("utf-8", "replace")
            if specs:
                specs.mkdir(parents=True, exist_ok=True)
                (specs / f"{dll}.spec").write_text(text)
        for line in text.splitlines():
            m = SPEC_LINE.match(line)
            if m:
                names.add(m.group(1))
    return names


def c_name(name: str) -> str | None:
    s = name.replace("::", "__").replace("$", "_")
    if s[:1].isdigit():
        s = "_" + s
    if not WORD.fullmatch(s) or s in RESERVED or len(s) > 255:
        return None
    return s


def rename(word: str) -> str:
    """An IDA anonymous-type name (`$<hash>`, `Outer::$<hash>`) as a C identifier;
    any other word unchanged. `\x00` marks a name C cannot spell."""
    if "$" not in word and "::" not in word:
        return word
    return c_name(word) or "\x00"


def norm(text: str) -> str:
    """IDA's C spelling of a type or declaration, as the kuna grammar reads it."""
    for pat, rep in SPELL:
        text = pat.sub(rep, text)
    text = IDENT.sub(lambda m: rename(m.group(0)), text)
    for word in DROP:
        text = re.sub(r"\b" + word + r"\b", "", text)
    text = re.sub(r"\s+", " ", text)
    text = re.sub(r"\(\s+", "(", text)
    text = re.sub(r"\s+\)", ")", text)
    text = re.sub(r"\s*\[", "[", text)
    text = re.sub(r"\*\s+\*", "**", text)
    return text.strip()


def drop_name(text: str, name: str) -> str:
    """`text` with the declarator name `name` taken out (its last occurrence)."""
    hits = list(re.finditer(r"\b" + re.escape(name) + r"\b", text))
    if not hits:
        return text
    m = hits[-1]
    out = text[: m.start()] + text[m.end():]
    return norm(out)


def split_top(text: str) -> list[str]:
    parts, depth, cur = [], 0, []
    for ch in text:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    parts.append("".join(cur).strip())
    return [p for p in parts if p]


class Til:
    """One target's types and functions, the first library to declare a name winning."""

    def __init__(self, db: sqlite3.Connection, files: list[str]):
        self.types: dict[str, tuple[str, int, str]] = {}
        self.members: dict[str, list[tuple[int, str, str, int, int | None, int]]] = {}
        self.functions: dict[str, str] = {}
        for f in files:
            (tid,) = db.execute("SELECT id FROM tils WHERE file LIKE ?", ("%/" + f,)).fetchone()
            seen = set()
            for name, kind, size, decl in db.execute(
                "SELECT name, kind, size, decl FROM til_types WHERE til_id=? ORDER BY ordinal, rowid",
                (tid,),
            ):
                cn = name and c_name(name)
                if not cn or cn in self.types or decl is None:
                    continue
                self.types[cn] = (kind, size or 0, decl)
                seen.add(name)
            for tname, idx, mname, decl, off, bit, size in db.execute(
                "SELECT type_name, idx, name, decl, offset, bit_offset, size FROM til_members "
                "WHERE til_id=? ORDER BY type_name, idx",
                (tid,),
            ):
                if tname not in seen:
                    continue
                cn = c_name(tname)
                self.members.setdefault(cn, []).append((idx, mname or "", decl or "", off, bit, size or 0))
            for name, sclass, decl in db.execute(
                "SELECT name, sclass, decl FROM til_symbols WHERE til_id=? AND decl LIKE '%(%'",
                (tid,),
            ):
                if sclass == "static" or not name or not WORD.fullmatch(name):
                    continue
                self.functions.setdefault(name, decl)


class Builder:
    def __init__(self, til: Til, ptr: int):
        self.til = til
        self.ptr = ptr
        self.texts: dict[str, str | None] = {}
        self.aligns: dict[str, int | None] = {}

    def known(self, word: str) -> bool:
        return word in C_WORDS or word in self.til.types

    def clean(self, text: str) -> str | None:
        """Normalize, and refuse a text naming an IDA-only type."""
        text = re.sub(r"\benum\s+", "", norm(text))
        if "\x00" in text or "..." in text.replace(", ...", ""):
            return None
        for w in WORD.findall(text):
            if w.startswith("__") and not self.known(w):
                return None
            if w in ("_UNKNOWN", "_OWORD", "_TBYTE"):
                return None
        return text

    def param(self, p: str) -> str | None:
        if p.strip() == "...":
            return "..."
        p = self.clean(p)
        if p is None:
            return None
        if p in ("...", "void"):
            return p
        if "(" in p:
            m = re.search(r"\(\s*\*+\s*(?:const\s+)?([A-Za-z_]\w*)\s*\)", p)
            if m and (self.known(m.group(1)) or m.group(1) in RESERVED):
                p = p[: m.start(1)] + p[m.end(1):]
            return norm(p)
        toks = re.findall(r"[A-Za-z_]\w*|\*|\[|\]", p)
        if len(toks) >= 2 and WORD.fullmatch(toks[-1]) and toks[-2] not in ("struct", "union", "enum"):
            last = toks[-1]
            prior_scalar = last in C_WORDS
            if not prior_scalar and (self.known(last) or last in RESERVED):
                # A trailing type name is the type itself, never a parameter name.
                if not (len(toks) >= 2 and (toks[-2] == "*" or self.known(toks[-2]) or toks[-2] in C_WORDS)):
                    return p
                if self.known(last) and toks[-2] not in ("*",) and not self.known(toks[-2]) and toks[-2] not in C_WORDS:
                    return p
                return drop_name(p, last) if toks[-2] == "*" or self.known(toks[-2]) or toks[-2] in C_WORDS else p
        return p

    def function(self, name: str, decl: str) -> str | None:
        stdcall = re.search(r"\b__stdcall\b", decl) is not None
        explicit = re.search(r"\b__(cdecl|fastcall|thiscall|pascal|usercall|userpurge)\b", decl)
        if self.ptr == 4 and (not stdcall or explicit):
            return None
        at = re.search(r"\b" + re.escape(name) + r"\s*\(", decl)
        if not at:
            return None
        head = decl[: at.start()]
        depth, end = 0, None
        for i in range(at.end() - 1, len(decl)):
            if decl[i] == "(":
                depth += 1
            elif decl[i] == ")":
                depth -= 1
                if depth == 0:
                    end = i
                    break
        if end is None or decl[end + 1:].strip():
            return None
        inner = decl[at.end(): end].strip()
        params = split_top(inner) if inner else ["void"]
        if self.ptr == 4 and "..." in params:
            return None
        out = []
        for p in params:
            c = self.param(p)
            if c is None:
                return None
            out.append(c)
        ret = self.clean(head)
        if ret is None or not ret:
            return None
        text = f"{ret} {name}({', '.join(out)})".replace("* ", "*")
        text = re.sub(r"\*(?=[A-Za-z_])", "*", text)
        return text

    def type_text(self, name: str) -> str | None:
        """The C text a typedef, enum or other non-record type stands for."""
        kind, size, decl = self.til.types[name]
        if kind == "enum":
            return {1: "unsigned char", 2: "unsigned short", 4: "int", 8: "long long"}.get(size)
        body = decl.strip().rstrip(";").strip()
        if not body.startswith("typedef "):
            return None
        body = body[len("typedef "):]
        text = self.clean(body)
        if text is None:
            return None
        out = drop_name(text, name)
        if not out or out == text:
            return None
        return out

    def align_of(self, text: str, depth: int = 0) -> int | None:
        if depth > 64:
            return None
        t = re.sub(r"\b(const|volatile)\b", "", text).strip()
        if "(" in t:
            return self.ptr if "(*" in t.replace(" ", "") else 1
        if t.endswith("*"):
            return self.ptr
        if t.endswith("]"):
            return self.align_of(t[: t.rindex("[")], depth + 1)
        words = WORD.findall(t)
        if not words:
            return None
        if words[0] in ("struct", "union", "enum") and len(words) > 1:
            return self.named_align(words[1], depth + 1)
        if all(w in SCALAR or w in ("signed", "unsigned") for w in words):
            if words.count("long") >= 2:
                return 8
            sized = [SCALAR[w] for w in words if w in SCALAR]
            return max(sized) if sized else 4
        if len(words) == 1:
            return self.named_align(words[0], depth + 1)
        return None

    def named_align(self, name: str, depth: int) -> int | None:
        if name in self.aligns:
            return self.aligns[name]
        if name == "void":
            return 1
        if name not in self.til.types:
            return None
        self.aligns[name] = None
        kind, size, _ = self.til.types[name]
        if kind in ("struct", "union"):
            a = self.record_layout(name, depth)[1]
        elif kind == "enum":
            a = size or 4
        else:
            text = self.type_text(name)
            a = self.align_of(text, depth + 1) if text else None
        self.aligns[name] = a
        return a

    def record_layout(self, name: str, depth: int) -> tuple[int, int]:
        """Size and alignment of a record. A record whose every member sits at
        its natural alignment is not packed, so it takes that alignment and its
        size is padded to it (the dump states some x64 sizes without their tail
        padding: `_SECURITY_ATTRIBUTES` as 20); otherwise the alignment is the
        largest one its offsets and size allow."""
        _, size, _ = self.til.types[name]
        natural, rows = 1, []
        for idx, mname, decl, off, bit, msize in self.til.members.get(name, []):
            mt = self.member_text(mname, decl)
            a = (self.align_of(mt, depth + 1) if mt else None) or 1
            if bit is not None:
                a = max(1, min(msize, 8)) if msize else 1
            natural = max(natural, a)
            rows.append((off or 0, a))
        if all(off % a == 0 for off, a in rows):
            return -(-size // natural) * natural, natural
        p = natural
        while p > 1:
            if size % p == 0 and all(off % min(a, p) == 0 for off, a in rows):
                break
            p //= 2
        return size, p

    def member_text(self, mname: str, decl: str) -> str | None:
        text = self.clean(decl)
        if text is None:
            return None
        if mname:
            out = drop_name(text, mname)
            if out == text:
                return None
            return out
        return text

    def record_lines(self, name: str) -> list[str] | None:
        kind, size, _ = self.til.types[name]
        if size <= 0 or size > (1 << 24):
            return None
        size, align = self.record_layout(name, 0)
        lines = [f"{'U' if kind == 'union' else 'S'} {name} * {size} {align}"]
        for idx, mname, decl, off, bit, msize in self.til.members.get(name, []):
            if bit is not None or off is None:
                continue
            text = self.member_text(mname, decl)
            if not text:
                continue
            member = mname if mname and WORD.fullmatch(mname) and mname not in RESERVED else f"field_{idx}"
            line = f" {off} {member}\t{text}"
            if len(line) <= MAX_LINE:
                lines.append(line)
        return lines

    def build(self, target: str, exported: set[str]) -> tuple[str, dict]:
        funcs = {}
        for name, decl in sorted(self.til.functions.items()):
            if name not in exported:
                continue
            text = self.function(name, decl)
            if text is None:
                continue
            line = f"F {name} *\t{text}"
            if len(line) <= MAX_LINE:
                funcs[name] = line
        want, queue = set(), []

        def reach(text: str):
            for w in WORD.findall(text):
                if w in self.til.types and w not in want:
                    want.add(w)
                    queue.append(w)

        for line in funcs.values():
            reach(line.split("\t", 1)[1])
        tlines: dict[str, list[str]] = {}
        while queue:
            name = queue.pop()
            kind = self.til.types[name][0]
            if kind in ("struct", "union"):
                lines = self.record_lines(name)
                if lines:
                    tlines[name] = lines
                    for l in lines[1:]:
                        reach(l.split("\t", 1)[1])
            else:
                text = self.type_text(name)
                if text and text != name:
                    line = f"T {name} *\t{text}"
                    if len(line) <= MAX_LINE:
                        tlines[name] = [line]
                        reach(text)
        out = [FORMAT, f"target {target}", "source til " + " + ".join(TARGETS[target][2]) + f", exports of {WINE}"]
        for name in sorted(tlines):
            out.extend(tlines[name])
        for name in sorted(funcs):
            out.append(funcs[name])
        stats = {
            "functions": len(funcs),
            "records": sum(1 for n in tlines if tlines[n][0][0] in "SU"),
            "typedefs": sum(1 for n in tlines if tlines[n][0][0] == "T"),
        }
        return "\n".join(out) + "\n", stats


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--tils", required=True, type=pathlib.Path, help="ida-9.5-tils.sqlite")
    ap.add_argument("-o", "--out", required=True, type=pathlib.Path, help="output directory")
    ap.add_argument("--specs", type=pathlib.Path, help="directory caching the Wine .spec files")
    args = ap.parse_args()
    exported = exports(args.specs)
    db = sqlite3.connect(f"file:{args.tils}?mode=ro", uri=True)
    for target, (file, ptr, tils) in TARGETS.items():
        text, stats = Builder(Til(db, tils), ptr).build(target, exported)
        path = args.out / file
        path.write_text(text)
        print(f"{path}: {len(text)} bytes, {stats}", file=sys.stderr)


if __name__ == "__main__":
    main()
