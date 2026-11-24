#!/usr/bin/env python3
"""The stage-test inventory, generated from the files in tests/stages.

Each test describes itself: the first paragraph of its leading comment (`#` lines in a TOML
test, `<!-- -->` in an XML one) is its description, falling back to its first assertion's name.
The inventory also lists each file's architecture and assertion count and the options its
script sets.

    python3 scripts/stage_index.py               # file: description, one per line
    python3 scripts/stage_index.py --markdown    # a Markdown table
    python3 scripts/stage_index.py --json        # every field, as JSON
    python3 scripts/stage_index.py --missing     # files with no leading comment
    python3 scripts/stage_index.py unlace-swift    # only files whose name contains a word
"""
import argparse
import json
import re
import sys
from pathlib import Path

try:
    import tomllib
except ModuleNotFoundError:
    tomllib = None

STAGES = Path(__file__).resolve().parent.parent / "tests" / "stages"
XML_COMMENT = re.compile(r"\s*<!--(.*?)-->", re.S)
XML_ARCH = re.compile(r'<binaryimage\s+arch="([^"]*)"')
XML_MATCH = re.compile(r'<stringmatch\s+name="([^"]*)"')
XML_OPTION = re.compile(r"<com>\s*option\s+(\S+)")


def leading_comment(text: str, suffix: str) -> list[str]:
    """The lines of the comment block a test file opens with, comment markers removed."""
    if suffix == ".xml":
        body = re.sub(r"^\s*<\?xml[^>]*\?>", "", text)
        m = XML_COMMENT.match(body)
        return [line.strip() for line in m.group(1).splitlines()] if m else []
    lines = []
    for line in text.splitlines():
        if not line.startswith("#"):
            break
        lines.append(line[1:].strip())
    return lines


def first_paragraph(lines: list[str]) -> str:
    """The comment's first paragraph as one line."""
    words = []
    for line in lines:
        if not line:
            if words:
                break
            continue
        words.append(line)
    return re.sub(r"\s+", " ", " ".join(words)).strip()


def toml_facts(text: str) -> dict:
    """Architecture, assertion names and options of a TOML test (empty without tomllib)."""
    if tomllib is None:
        return {}
    try:
        doc = tomllib.loads(text)
    except tomllib.TOMLDecodeError:
        return {}
    commands = doc.get("script", {}).get("commands", [])
    options = []
    for c in commands:
        com = c.get("com", "") if isinstance(c, dict) else c
        m = re.match(r"\s*option\s+(\S+)", com)
        if m and m.group(1) not in options:
            options.append(m.group(1))
    return {
        "arch": doc.get("image", {}).get("arch", ""),
        "matches": [m.get("name", "") for m in doc.get("match", [])],
        "options": options,
    }


def xml_facts(text: str) -> dict:
    """Architecture, assertion names and options of an XML test."""
    arch = XML_ARCH.search(text)
    options = []
    for o in XML_OPTION.findall(text):
        if o not in options:
            options.append(o)
    return {"arch": arch.group(1) if arch else "", "matches": XML_MATCH.findall(text), "options": options}


def entry(path: Path) -> dict:
    """One file's inventory row."""
    text = path.read_text(encoding="utf-8", errors="replace")
    comment = leading_comment(text, path.suffix)
    facts = xml_facts(text) if path.suffix == ".xml" else toml_facts(text)
    matches = facts.get("matches", [])
    description = first_paragraph(comment) or (matches[0] if matches else "")
    return {
        "file": path.name,
        "description": description,
        "commented": bool(first_paragraph(comment)),
        "arch": facts.get("arch", ""),
        "assertions": len(matches),
        "options": facts.get("options", []),
    }


def inventory(stages: Path = STAGES, words: list[str] = ()) -> list[dict]:
    """Every stage test in `stages`, sorted by file name."""
    files = sorted(p for p in stages.iterdir() if p.is_file() and p.suffix in (".toml", ".xml"))
    return [entry(p) for p in files if all(w in p.name for w in words)]


def shorten(text: str, width: int) -> str:
    return text if len(text) <= width else text[: width - 3].rstrip() + "..."


def markdown(rows: list[dict]) -> str:
    out = ["| File | Description | Arch | Assertions | Options |", "|---|---|---|---|---|"]
    for r in rows:
        desc = shorten(r["description"], 200).replace("|", "\\|")
        opts = ", ".join(f"`{o}`" for o in r["options"])
        out.append(f"| `{r['file']}` | {desc} | {r['arch']} | {r['assertions']} | {opts} |")
    return "\n".join(out) + "\n"


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("words", nargs="*", help="only files whose name contains every word")
    form = parser.add_mutually_exclusive_group()
    form.add_argument("--markdown", action="store_true")
    form.add_argument("--json", action="store_true")
    form.add_argument("--missing", action="store_true", help="files with no leading comment")
    parser.add_argument("--dir", type=Path, default=STAGES)
    args = parser.parse_args(argv)
    rows = inventory(args.dir, args.words)
    if args.json:
        print(json.dumps(rows, indent=1))
    elif args.markdown:
        sys.stdout.write(markdown(rows))
    elif args.missing:
        for r in rows:
            if not r["commented"]:
                print(r["file"])
    else:
        for r in rows:
            print(f"{r['file']}: {shorten(r['description'], 160)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
