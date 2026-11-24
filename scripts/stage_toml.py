#!/usr/bin/env python3
"""Convert XML stage tests (tests/stages/*.xml) to the TOML stage-test format, losslessly.

The TOML form (tests/stages/README.md, "TOML stage tests") carries the same load image, console
script and assertions; XML comments become TOML comments in place. A file converts only when
every construct it uses has an exact TOML spelling and nothing outside Markdown names it; the
rest stay XML and are listed with the reason (--list). Converting a file also:

- drops its assertions from docs/baseline-stages.json (a TOML test is its own baseline; the
  remaining XML keys, including their @dupN suffixes, do not change),
- rewrites Markdown references to it (tests/stages/<stem>.xml, and <stem>.xml in
  tests/stages/README.md) and references in Rust // comments.

Usage:
    python3 scripts/stage_toml.py --list                 # eligible / ineligible files
    python3 scripts/stage_toml.py --batch 100            # convert the next 100 eligible files
    python3 scripts/stage_toml.py tests/stages/a.xml ... # convert the named files
    python3 scripts/stage_toml.py --print tests/stages/a.xml   # show the TOML, change nothing

Afterwards check the conversion against git (each TOML file must load exactly like its XML at
HEAD), then the stage parity gate:
    cargo test -p unlace-harness --test parity -- --ignored converted
    cargo test -p unlace-harness --test parity stage_tests
"""
from __future__ import annotations

import argparse
import fnmatch
import json
import re
import subprocess
import sys
import tempfile
import textwrap
import tomllib
import xml.etree.ElementTree as ET
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
STAGES = ROOT / "tests" / "stages"
BASELINE = ROOT / "docs" / "baseline-stages.json"
README = STAGES / "README.md"

# The characters a <stringmatch> regex line treats as operators (stagetoml::escape_literal).
REGEX_META = set("\\.+*?()|[]{}^$")


class Ineligible(Exception):
    pass


# --- reading the XML ---------------------------------------------------------------------------

def parse_xml(path: Path) -> ET.Element:
    raw = path.read_bytes()
    text = raw.decode("utf-8")
    if "\r" in text:
        raise Ineligible("carriage returns")
    body = re.sub(r"<!--.*?-->", "", text, flags=re.S)
    if "<![CDATA[" in body:
        raise Ineligible("a CDATA section")
    if "<?" in body or "<!DOCTYPE" in body:
        raise Ineligible("a declaration or processing instruction")
    for ref in re.findall(r"&#(x[0-9a-fA-F]+|[0-9]+);", body):
        if int(ref[1:], 16) if ref.startswith("x") else int(ref) >= 128:
            raise Ineligible("a non-ASCII character reference")
    if re.search(r"&(?!(?:amp|lt|gt|quot|apos|#x?[0-9a-fA-F]+);)", body):
        raise Ineligible("an unknown entity")
    builder = ET.TreeBuilder(insert_comments=True)
    parser = ET.XMLParser(target=builder)
    parser.feed(text)
    return parser.close()


def is_comment(el) -> bool:
    return el.tag is ET.Comment


def blank(s) -> bool:
    return s is None or s.strip() == ""


def comment_lines(el) -> list[str]:
    """A comment's lines, dedented; a first line that shares the `<!--` line is dedented apart."""
    raw = (el.text or "").split("\n")
    first = [raw[0].strip()] if raw[0].strip() else []
    lines = first + [l.rstrip() for l in textwrap.dedent("\n".join(raw[1:])).split("\n")]
    while lines and not lines[0].strip():
        lines.pop(0)
    while lines and not lines[-1].strip():
        lines.pop()
    return lines


def pattern_lines(content: str) -> list[str]:
    """The per-line regexes FunctionTestProperty::restore_xml compiles from a <stringmatch>."""
    out, pos = [], 0
    while True:
        while pos < len(content) and content[pos] in " \t":
            pos += 1
        if pos >= len(content):
            break
        nl = content.find("\n", pos)
        out.append(content[pos:] if nl < 0 else content[pos:nl])
        if nl < 0:
            break
        pos = nl + 1
    return out


def as_literal(line: str):
    """The substring a regex line matches when it is one, else None."""
    out, i = [], 0
    while i < len(line):
        c = line[i]
        if c == "\\":
            if i + 1 < len(line) and (line[i + 1] in REGEX_META or line[i + 1] in "<>"):
                out.append(line[i + 1])
                i += 2
                continue
            return None
        if c in REGEX_META:
            return None
        out.append(c)
        i += 1
    return "".join(out)


def check_attrs(el, allowed, required, what):
    extra = set(el.attrib) - set(allowed)
    if extra:
        raise Ineligible("{} attribute {}".format(what, sorted(extra)[0]))
    missing = [a for a in required if a not in el.attrib]
    if missing:
        raise Ineligible("{} without {}".format(what, missing[0]))


def hex_lines(text: str) -> list[str]:
    lines = []
    for line in (text or "").splitlines():
        words = line.split()
        if not words:
            continue
        for w in words:
            if len(w) % 2 or not re.fullmatch(r"[0-9a-fA-F]+", w):
                raise Ineligible("bytechunk content that is not whole hex bytes")
        lines.append(" ".join(words))
    return lines


def model(path: Path) -> dict:
    root = parse_xml(path)
    if root.tag != "decompilertest" or root.attrib or not blank(root.text):
        raise Ineligible("the root is not a plain <decompilertest>")
    m = {"header": [], "image": None, "chunks": [], "symbols": [], "image_tail": [],
         "commands": [], "script_tail": [], "matches": [], "tail": []}
    pending: list[list[str]] = []
    stage = "image"
    for el in root:
        if not blank(el.tail):
            raise Ineligible("text between elements")
        if is_comment(el):
            pending.append(comment_lines(el))
            continue
        if el.tag == "binaryimage" and stage == "image":
            m["header"] += pending
            pending = []
            check_attrs(el, ["arch"], ["arch"], "binaryimage")
            if not blank(el.text):
                raise Ineligible("text inside binaryimage")
            m["image"] = el.attrib["arch"]
            inner: list[list[str]] = []
            first = True
            for sub in el:
                if not blank(sub.tail):
                    raise Ineligible("text inside binaryimage")
                if is_comment(sub):
                    inner.append(comment_lines(sub))
                    continue
                if first:
                    m["header"] += inner
                    inner = []
                    first = False
                if sub.tag == "bytechunk":
                    check_attrs(sub, ["space", "offset", "readonly"], ["space", "offset"], "bytechunk")
                    ro = sub.attrib.get("readonly")
                    if ro not in (None, "true", "false"):
                        raise Ineligible("readonly={!r}".format(ro))
                    if len(sub):
                        raise Ineligible("children inside a bytechunk")
                    m["chunks"].append({"comments": inner, "space": sub.attrib["space"],
                                        "offset": sub.attrib["offset"], "readonly": ro,
                                        "hex": hex_lines(sub.text)})
                elif sub.tag == "symbol":
                    check_attrs(sub, ["space", "offset", "name"], ["space", "offset", "name"], "symbol")
                    if not blank(sub.text) or len(sub):
                        raise Ineligible("content inside a symbol")
                    m["symbols"].append({"comments": inner, **sub.attrib})
                else:
                    raise Ineligible("<{}> in binaryimage".format(sub.tag))
                inner = []
            (m["header"] if first else m["image_tail"]).extend(inner)
            stage = "script"
        elif el.tag == "script" and stage == "script":
            m["image_tail"] += pending
            pending = []
            if el.attrib or not blank(el.text):
                raise Ineligible("script attributes or text")
            inner = []
            for com in el:
                if not blank(com.tail):
                    raise Ineligible("text inside script")
                if is_comment(com):
                    inner.append(comment_lines(com))
                    continue
                if com.tag != "com" or len(com):
                    raise Ineligible("<{}> in script".format(com.tag))
                check_attrs(com, ["expecterror"], [], "com")
                exp = com.attrib.get("expecterror", "false")
                if exp not in ("true", "false"):
                    raise Ineligible("expecterror={!r}".format(exp))
                text = com.text or ""
                if "\n" in text:
                    raise Ineligible("a multi-line command")
                m["commands"].append({"comments": inner, "com": text, "expect_error": exp == "true"})
                inner = []
            m["script_tail"] = inner
            stage = "match"
        elif el.tag == "stringmatch" and stage in ("match", "matches"):
            check_attrs(el, ["name", "min", "max"], ["name", "min", "max"], "stringmatch")
            if len(el):
                raise Ineligible("children inside a stringmatch")
            lo, hi = el.attrib["min"], el.attrib["max"]
            if not re.fullmatch(r"[0-9]+", lo) or not re.fullmatch(r"[0-9]+", hi):
                raise Ineligible("a non-decimal min/max")
            lines = pattern_lines(el.text or "")
            if not lines:
                raise Ineligible("an empty stringmatch")
            m["matches"].append({"comments": pending, "name": el.attrib["name"],
                                 "min": int(lo), "max": int(hi), "lines": lines})
            pending = []
            stage = "matches"
        else:
            raise Ineligible("<{}> out of the binaryimage, script, stringmatch order".format(el.tag))
    if stage != "matches":
        raise Ineligible("no stringmatch")
    m["tail"] = pending
    return m


# --- writing TOML ----------------------------------------------------------------------------

def tstr(s: str) -> str:
    if "'" not in s and not any(ord(c) < 0x20 or ord(c) == 0x7f for c in s):
        return "'" + s + "'"
    out = []
    for c in s:
        if c == "\\":
            out.append("\\\\")
        elif c == '"':
            out.append('\\"')
        elif c == "\t":
            out.append("\\t")
        elif c == "\n":
            out.append("\\n")
        elif ord(c) < 0x20 or ord(c) == 0x7f:
            out.append("\\u{:04x}".format(ord(c)))
        else:
            out.append(c)
    return '"' + "".join(out) + '"'


def comments(blocks, indent="") -> str:
    out = []
    for block in blocks:
        for line in block:
            out.append((indent + "# " + line).rstrip() if line.strip() else indent + "#")
    return "".join(l + "\n" for l in out)


def to_toml(m: dict) -> str:
    out = comments(m["header"])
    if out:
        out += "\n"
    out += "[image]\narch = {}\n".format(tstr(m["image"]))
    if m["symbols"]:
        out += "symbols = [\n"
        for s in m["symbols"]:
            out += comments(s["comments"], "    ")
            out += "    {{ space = {}, offset = {}, name = {} }},\n".format(
                tstr(s["space"]), tstr(s["offset"]), tstr(s["name"]))
        out += "]\n"
    for c in m["chunks"]:
        out += "\n" + comments(c["comments"])
        out += "[[image.bytes]]\nspace = {}\noffset = {}\n".format(tstr(c["space"]), tstr(c["offset"]))
        if c["readonly"] is not None:
            out += "readonly = {}\n".format(c["readonly"])
        if len(c["hex"]) == 1:
            out += "hex = {}\n".format(tstr(c["hex"][0]))
        else:
            out += "hex = '''\n" + "".join(l + "\n" for l in c["hex"]) + "'''\n"
    if m["image_tail"]:
        out += "\n" + comments(m["image_tail"])
    out += "\n[script]\ncommands = [\n"
    for c in m["commands"]:
        out += comments(c["comments"], "    ")
        if c["expect_error"]:
            out += "    {{ com = {}, expect_error = true }},\n".format(tstr(c["com"]))
        else:
            out += "    {},\n".format(tstr(c["com"]))
    out += comments(m["script_tail"], "    ")
    out += "]\n"
    for s in m["matches"]:
        out += "\n" + comments(s["comments"])
        out += "[[match]]\nname = {}\n".format(tstr(s["name"]))
        if s["min"] == s["max"]:
            out += "count = {}\n".format(s["min"])
        else:
            out += "min = {}\nmax = {}\n".format(s["min"], s["max"])
        lits = [as_literal(l) for l in s["lines"]]
        key, vals = ("literal", lits) if all(x is not None for x in lits) else ("regex", s["lines"])
        if len(vals) == 1:
            out += "{} = {}\n".format(key, tstr(vals[0]))
        else:
            out += "{} = [\n".format(key) + "".join("    {},\n".format(tstr(v)) for v in vals) + "]\n"
    if m["tail"]:
        out += "\n" + comments(m["tail"])
    return out


def check_round_trip(m: dict, text: str) -> None:
    """The TOML reads back to the same commands, names, counts and pattern lines."""
    doc = tomllib.loads(text)
    coms = [c if isinstance(c, str) else c["com"] for c in doc["script"]["commands"]]
    assert coms == [c["com"] for c in m["commands"]]
    for want, have in zip(m["matches"], doc["match"], strict=True):
        assert have["name"] == want["name"]
        lo = have.get("min", have.get("count"))
        hi = have.get("max", have.get("count"))
        assert (lo, hi) == (want["min"], want["max"])
        if "regex" in have:
            got = have["regex"]
            got = [got] if isinstance(got, str) else got
            assert got == want["lines"]
        else:
            got = have["literal"]
            got = [got] if isinstance(got, str) else got
            assert got == [as_literal(l) for l in want["lines"]]
    assert doc["image"]["arch"] == m["image"]
    assert len(doc["image"].get("bytes", [])) == len(m["chunks"])
    assert len(doc["image"].get("symbols", [])) == len(m["symbols"])


# --- references and the baseline -------------------------------------------------------------

# Files whose mentions of a stage test are text (fixture provenance and sources, golden records,
# CLI test notes, the option catalog's prose): the conversion rewrites them instead of keeping the
# test XML. phases.toml's prose is captured verbatim in phase_catalog.json, so both change together.
TEXT_REFS = (
    "tests/golden/snapshot-manifest.json",
    "tests/golden/vectors/lift/*.txt",
    "tests/cli/*.json",
    "crates/*/tests/fixtures/*",
    "crates/unlace-decomp/phases.toml",
)
TEXT_REF_CODE = (".py", ".rs")


def text_ref(rel: str) -> bool:
    if rel.endswith(TEXT_REF_CODE):
        return False
    return any(fnmatch.fnmatch(rel, g) for g in TEXT_REFS)


def tracked_files() -> list[str]:
    out = subprocess.run(["git", "ls-files"], cwd=ROOT, check=True, capture_output=True, text=True)
    return out.stdout.splitlines()


def references(stems: set[str]) -> dict[str, list[str]]:
    """Files that name a stage test: stem -> files.

    Markdown and docs/ (records of past runs) are skipped, and so are Rust // comments: the
    conversion rewrites those. Anything else that names a file may load it, so the file stays XML.
    """
    hits: dict[str, list[str]] = {}
    rx = re.compile(r"(?<![\w.-])([\w.+-]+)\.xml\b")
    for rel in tracked_files():
        if rel.endswith(".md") or rel.startswith(("tests/stages/", "docs/")) or text_ref(rel):
            continue
        p = ROOT / rel
        try:
            text = p.read_text(encoding="utf-8")
        except (UnicodeDecodeError, OSError):
            continue
        if ".xml" not in text:
            continue
        for line in text.splitlines():
            if rel.endswith(".rs") and line.lstrip().startswith("//"):
                continue
            for stem in rx.findall(line):
                if stem in stems and ("stages" in line or rel.endswith(".rs") or "/" not in line):
                    hits.setdefault(stem, []).append(rel)
    return hits


def rewrite_references(stems: set[str]) -> list[str]:
    changed = []
    for rel in tracked_files():
        if not (rel.endswith(".md") or rel.endswith(".rs") or text_ref(rel)):
            continue
        p = ROOT / rel
        try:
            text = p.read_text(encoding="utf-8")
        except (UnicodeDecodeError, OSError):
            continue
        if ".xml" not in text:
            continue

        def path_sub(s: str) -> str:
            return re.sub(r"tests/stages/([\w.+-]+)\.xml\b",
                          lambda mm: "tests/stages/{}.toml".format(mm.group(1))
                          if mm.group(1) in stems else mm.group(0), s)

        if rel.endswith(".rs"):
            new = "\n".join(path_sub(l) if l.lstrip().startswith("//") else l
                            for l in text.split("\n"))
        else:
            new = path_sub(text)
            if p == README or text_ref(rel):
                new = re.sub(r"(?<![\w.+/-])([\w.+-]+)\.xml\b",
                             lambda mm: mm.group(1) + ".toml" if mm.group(1) in stems else mm.group(0), new)
        if new != text:
            p.write_text(new, encoding="utf-8")
            changed.append(rel)
    return changed


def corpus_names() -> list[tuple[str, str]]:
    """(file name, assertion name) in run order, over every XML and TOML stage test."""
    out = []
    for p in sorted(list(STAGES.glob("*.xml")) + list(STAGES.glob("*.toml")), key=lambda q: str(q)):
        if p.suffix == ".xml":
            root = ET.parse(p).getroot()
            out += [(p.name, el.attrib.get("name", "")) for el in root if el.tag == "stringmatch"]
        else:
            out += [(p.name, mt["name"]) for mt in tomllib.loads(p.read_text()).get("match", [])]
    return out


def keys_of(files: set[str]) -> set[str]:
    """The baseline keys (data:<name> / @dupN over the whole corpus) of assertions in files."""
    seen: dict[str, int] = {}
    keys = set()
    for fname, name in corpus_names():
        seen[name] = seen.get(name, 0) + 1
        key = "data:" + name if seen[name] == 1 else "data:{} @dup{}".format(name, seen[name])
        if fname in files:
            keys.add(key)
    return keys


def drop_from_baseline(keys: set[str]) -> int:
    doc = json.loads(BASELINE.read_text(encoding="utf-8"))
    before = len(doc["passing"])
    doc["passing"] = [k for k in doc["passing"] if k not in keys]
    BASELINE.write_text(json.dumps(doc, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return before - len(doc["passing"])


# --- driver ----------------------------------------------------------------------------------

def survey() -> tuple[list[Path], dict[Path, str]]:
    xmls = sorted(STAGES.glob("*.xml"))
    refs = references({p.stem for p in xmls})
    ok, bad = [], {}
    for p in xmls:
        if p.stem in refs:
            bad[p] = "named by " + ", ".join(sorted(set(refs[p.stem])))
            continue
        try:
            m = model(p)
            check_round_trip(m, to_toml(m))
            ok.append(p)
        except Ineligible as e:
            bad[p] = str(e)
    return ok, bad


def convert(paths: list[Path]) -> None:
    converted = []
    for p in paths:
        m = model(p)
        text = to_toml(m)
        check_round_trip(m, text)
        p.with_suffix(".toml").write_text(text, encoding="utf-8")
        converted.append(p)
    names = {p.with_suffix(".toml").name for p in converted}
    for p in converted:
        subprocess.run(["git", "rm", "-q", str(p.relative_to(ROOT))], cwd=ROOT, check=True)
    dropped = drop_from_baseline(keys_of(names))
    subprocess.run(["git", "add", "--"] + [str(p.with_suffix(".toml").relative_to(ROOT)) for p in converted],
                   cwd=ROOT, check=True)
    changed = rewrite_references({p.stem for p in converted})
    print("converted {} files; {} baseline keys dropped; references rewritten in {} files".format(
        len(converted), dropped, len(changed)))
    for rel in changed:
        print("  " + rel)


def reprint() -> int:
    """Rewrite every TOML stage test whose XML is still at HEAD (after a converter fix)."""
    n = 0
    for p in sorted(STAGES.glob("*.toml")):
        if p.stem == "catalog":
            continue
        show = subprocess.run(["git", "show", "HEAD:tests/stages/{}.xml".format(p.stem)], cwd=ROOT,
                              capture_output=True)
        if show.returncode:
            continue
        with tempfile.TemporaryDirectory() as d:
            tmp = Path(d) / p.with_suffix(".xml").name
            tmp.write_bytes(show.stdout)
            m = model(tmp)
        text = to_toml(m)
        check_round_trip(m, text)
        p.write_text(text, encoding="utf-8")
        n += 1
    print("reprinted {} files".format(n))
    return 0


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("files", nargs="*", type=Path)
    ap.add_argument("--list", action="store_true", help="list eligible and ineligible files")
    ap.add_argument("--batch", type=int, help="convert the next N eligible files")
    ap.add_argument("--print", action="store_true", help="print the TOML of the named files")
    ap.add_argument("--reprint", action="store_true",
                    help="rewrite the TOML of files converted since HEAD (after a converter fix)")
    a = ap.parse_args(argv)
    if a.reprint:
        return reprint()
    if a.print:
        for f in a.files:
            sys.stdout.write(to_toml(model(f)))
        return 0
    if a.list:
        ok, bad = survey()
        print("{} convertible, {} stay XML".format(len(ok), len(bad)))
        for p, why in sorted(bad.items()):
            print("  {}: {}".format(p.name, why))
        return 0
    if a.batch:
        ok, _ = survey()
        convert(ok[: a.batch])
        return 0
    if a.files:
        ok, bad = survey()
        okset = {p.resolve() for p in ok}
        for f in a.files:
            if f.resolve() not in okset:
                print("{}: {}".format(f, bad.get(f.resolve(), "not a stage test")), file=sys.stderr)
                return 1
        convert([f.resolve() for f in a.files])
        return 0
    ap.print_help()
    return 2


if __name__ == "__main__":
    sys.exit(main())
