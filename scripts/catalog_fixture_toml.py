#!/usr/bin/env python3
"""Convert a `phase catalog` JSON capture into the TOML fixture read by catalog_bytecompat.rs.

The capture is the JSON array the catalog emits (one object per settable, no `current` field
when no program is loaded). The TOML form has one `[[option]]` table per entry and one key per
line, so a change to one option's catalog text is a line-level diff instead of a 1 MB line.

    target/release/decomp_dbg ... 'phase catalog' > cap.json   (see catalog_bytecompat.rs)
    python3 scripts/catalog_fixture_toml.py cap.json > crates/unlace-decomp/tests/fixtures/phase_catalog.toml
    python3 scripts/catalog_fixture_toml.py --check cap.json crates/unlace-decomp/tests/fixtures/phase_catalog.toml

Entry order, key order within an entry, and every value are preserved exactly; the output is
re-parsed with tomllib and compared with the input before it is written.
"""
import json
import re
import sys
import tomllib

HEADER = (
    "# The `phase catalog` capture with no program loaded: one [[option]] table per settable,\n"
    "# in catalog order, keys in the order the emitter writes them. Read by\n"
    "# crates/unlace-decomp/tests/catalog_bytecompat.rs. Regenerate with\n"
    "# scripts/catalog_fixture_toml.py from a fresh capture; never edit by hand.\n"
)

BARE_KEY = re.compile(r"^[A-Za-z0-9_-]+$")


def basic_string(s):
    out = ['"']
    for ch in s:
        if ch == '"':
            out.append('\\"')
        elif ch == "\\":
            out.append("\\\\")
        elif ch == "\n":
            out.append("\\n")
        elif ch == "\t":
            out.append("\\t")
        elif ch == "\r":
            out.append("\\r")
        elif ch == "\b":
            out.append("\\b")
        elif ch == "\f":
            out.append("\\f")
        elif ord(ch) < 0x20 or ch == "\x7f":
            out.append("\\u%04x" % ord(ch))
        else:
            out.append(ch)
    out.append('"')
    return "".join(out)


def value(v):
    if isinstance(v, bool):
        return "true" if v else "false"
    if isinstance(v, str):
        return basic_string(v)
    if isinstance(v, list) and all(isinstance(x, str) for x in v):
        return "[" + ", ".join(basic_string(x) for x in v) + "]"
    raise TypeError("unsupported catalog value: %r" % (v,))


def render(entries):
    parts = [HEADER]
    for entry in entries:
        lines = ["[[option]]"]
        for key, v in entry.items():
            k = key if BARE_KEY.match(key) else basic_string(key)
            lines.append("%s = %s" % (k, value(v)))
        parts.append("\n".join(lines) + "\n")
    return "\n".join(parts)


def load_capture(path):
    with open(path, encoding="utf-8") as f:
        data = json.load(f)
    if not isinstance(data, list) or not all(isinstance(e, dict) for e in data):
        raise SystemExit("%s: expected a JSON array of objects" % path)
    return data


def main(argv):
    if len(argv) == 4 and argv[1] == "--check":
        capture = load_capture(argv[2])
        with open(argv[3], "rb") as f:
            fixture = tomllib.load(f).get("option")
        if fixture != capture:
            raise SystemExit("%s does not match %s" % (argv[3], argv[2]))
        print("ok: %d entries" % len(capture))
        return 0
    if len(argv) != 2:
        raise SystemExit(__doc__)
    entries = load_capture(argv[1])
    text = render(entries)
    if tomllib.loads(text).get("option") != entries:
        raise SystemExit("internal error: TOML does not round-trip to the capture")
    sys.stdout.write(text)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
