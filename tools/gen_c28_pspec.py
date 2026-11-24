#!/usr/bin/env python3
"""Write the TMS320C28x device-family processor specs (tms320c28_<family>.pspec) from TI C2000Ware.

Usage: gen_c28_pspec.py <C2000Ware root> [<out-dir>]

C2000Ware's device support (device_support/<family>/headers) is BSD-3-Clause (docs/manifest.html and
the header of every file). For each family it has the register structures (include/*.h), the
variable each peripheral instance is (source/*GlobalVariableDefs.c: `volatile struct ADC_REGS
AdcaRegs;` placed in section `AdcaRegsFile`), and the linker command file that places each section
at its peripheral's address (cmd/*_Headers_nonBIOS*.cmd, CPU1's for a dual-core family). Every
register of every instance is labelled <variable>_<register> (AdcaRegs_ADCCTL1) at its word
address in ram, and each instance's frame is volatile. Reserved fields are not labelled, and an
array register is labelled at its first element.
"""
import re
import sys
from pathlib import Path

# C28x sizes in 16-bit words, and their alignment.
SCALAR = {
    "Uint16": 1, "int16": 1, "uint16_t": 1, "int16_t": 1, "bp_16": 1, "Uint8": 1, "uint8_t": 1, "char": 1,
    "Uint32": 2, "int32": 2, "uint32_t": 2, "int32_t": 2, "bp_32": 2, "float32": 2, "float": 2,
    "PINT": 2, "Uint64": 4, "uint64_t": 4, "int64": 4, "float64": 4,
}
BASE = '''  <programcounter register="PC"/>
  <context_data>
    <context_set space="ram">
        <set name="ctx_objmode" val="1" description="TODO"/>
        <set name="ctx_amode" val="0" description="C28x addressing mode"/>
        <set name="ctx_page0" val="0" description="PAGE0 stack addressing mode"/>
    </context_set>
  </context_data>'''


DEFINED = {"CPU1"}


def preprocess(text):
    """Keep the lines a CPU1 build compiles: #if/#ifdef/#elif/#else over defined(...) only."""
    def truth(expr):
        expr = re.sub(r"defined\s*\(?\s*(\w+)\s*\)?", lambda m: "1" if m.group(1) in DEFINED else "0", expr)
        expr = expr.replace("&&", " and ").replace("||", " or ").replace("!", " not ")
        if not re.fullmatch(r"[\s01()andornot]*", expr):
            return False
        try:
            return bool(eval(expr, {"__builtins__": {}}))
        except Exception:
            return False
    out, stack = [], []
    for line in strip_comments(text).split("\n"):
        d = re.match(r"\s*#\s*(ifdef|ifndef|if|elif|else|endif)\b\s*(.*)", line)
        live = all(s[0] for s in stack)
        if not d:
            if live:
                out.append(line)
            continue
        kw, arg = d.group(1), d.group(2).strip()
        if kw in ("ifdef", "ifndef", "if"):
            val = (arg in DEFINED) if kw == "ifdef" else (arg not in DEFINED) if kw == "ifndef" else truth(arg)
            stack.append([val, val])
        elif kw == "elif" and stack:
            s = stack[-1]
            s[0] = not s[1] and truth(arg)
            s[1] = s[1] or s[0]
        elif kw == "else" and stack:
            s = stack[-1]
            s[0] = not s[1]
            s[1] = True
        elif kw == "endif" and stack:
            stack.pop()
    return "\n".join(out)


def strip_comments(text):
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    return re.sub(r"//[^\n]*", "", text)


def parse_aggregates(texts):
    """name -> (kind, [(type, name, count)]) for every struct and union definition."""
    aggs = {}
    for text in texts:
        for m in re.finditer(r"\b(struct|union)\s+(\w+)\s*\{(.*?)\}\s*;", preprocess(text), re.S):
            fields = []
            for decl in m.group(3).split(";"):
                decl = " ".join(decl.split())
                if not decl:
                    continue
                d = re.match(r"^(?:volatile\s+)?((?:struct|union)\s+\w+|\w+)\s+(\w+)\s*(?:\[\s*(\w+)\s*\])?\s*(?::\s*\d+)?$", decl)
                if not d:
                    fields = None
                    break
                count = d.group(3)
                fields.append((d.group(1), d.group(2), int(count, 0) if count else 1, ":" in decl))
            if fields is not None:
                aggs.setdefault(m.group(2), (m.group(1), fields))
    return aggs


def layout(aggs, name, memo, depth=0):
    """(size, alignment) in words of a struct or union, or None when a member is unknown."""
    if name in memo:
        return memo[name]
    if name not in aggs or depth > 8:
        return None
    kind, fields = aggs[name]
    if kind == "union":
        # A register union's word is its `all` member; another union is its widest scalar member.
        sizes = [type_size(aggs, t, memo, depth) for t, n, c, bits in fields if not bits and n == "all"]
        if not sizes:
            sizes = [type_size(aggs, t, memo, depth) for t, n, c, bits in fields if not bits and t in SCALAR]
            sizes = [max(sizes)] if sizes and None not in sizes else []
        if not sizes or sizes[0] is None:
            return None
        memo[name] = sizes[0]
        return sizes[0]
    off, align = 0, 1
    for t, n, c, bits in fields:
        if bits:
            return None
        s = type_size(aggs, t, memo, depth)
        if s is None:
            return None
        size, a = s
        off = (off + a - 1) // a * a + size * c
        align = max(align, a)
    memo[name] = ((off + align - 1) // align * align, align)
    return memo[name]


def type_size(aggs, t, memo, depth):
    if t in SCALAR:
        return SCALAR[t], min(SCALAR[t], 2)
    m = re.match(r"(struct|union)\s+(\w+)$", t)
    return layout(aggs, m.group(2), memo, depth + 1) if m else None


def registers(aggs, struct, memo):
    """[(word offset, name)] of a peripheral structure's top-level registers, or None."""
    if struct not in aggs or aggs[struct][0] != "struct":
        return None
    out, off = [], 0
    for t, n, c, bits in aggs[struct][1]:
        s = type_size(aggs, t, memo, 0)
        if s is None or bits:
            return None
        size, a = s
        off = (off + a - 1) // a * a
        if not n.lower().startswith("rsvd"):
            out.append((off, n))
        off += size * c
    return out, off


def parse_cmd(text):
    text = preprocess(text)
    regions = {}
    for m in re.finditer(r"^\s*(\w+)\s*(?:\(\w+\))?\s*:\s*(?:origin|org|o)\s*=\s*(0x[0-9A-Fa-f]+|\d+)\s*,\s*(?:length|len|l)\s*=\s*(0x[0-9A-Fa-f]+|\d+)", text, re.M):
        regions[m.group(1)] = (int(m.group(2), 0), int(m.group(3), 0))
    sections = {}
    for m in re.finditer(r"^\s*(\w+)\s*:\s*>\s*(\w+)", text, re.M):
        sections[m.group(1)] = m.group(2)
    # UNION run = PIEVECTTABLE { PieVectTableFile GROUP { ... } }: the first member runs at the region.
    for m in re.finditer(r"UNION\s+run\s*=\s*(\w+)[^{]*\{\s*(\w+)", text):
        sections.setdefault(m.group(2), m.group(1))
    return regions, sections


def parse_globals(text):
    text = preprocess(text)
    placed = dict(re.findall(r'#pragma\s+DATA_SECTION\s*\(\s*(\w+)\s*,\s*"(\w+)"\s*\)', text))
    types = {v: t for t, v in re.findall(r"volatile\s+struct\s+(\w+)\s+(\w+)\s*;", text)}
    return placed, types


def pick_cmd(cmds):
    cands = [c for c in cmds if re.search(r"nonbios", c.name, re.I)]
    cpu1 = [c for c in cands if re.search(r"cpu1", c.name, re.I)]
    return (cpu1 or cands or [None])[0]


def family(root):
    hdr = root / "headers"
    texts = [p.read_text(errors="replace") for p in sorted((hdr / "include").glob("*.h"))]
    aggs = parse_aggregates(texts)
    cmd = pick_cmd(sorted((hdr / "cmd").glob("*.cmd")))
    glob = [p for p in sorted((hdr / "source").glob("*")) if re.search(r"globalvariabledefs\.c$", p.name, re.I)]
    if cmd is None or not glob:
        return None
    regions, sections = parse_cmd(cmd.read_text(errors="replace"))
    placed, types = parse_globals(glob[0].read_text(errors="replace"))
    memo, labels, frames, skipped = {}, {}, [], []
    for var in sorted(types):
        region = regions.get(sections.get(placed.get(var, ""), ""))
        regs = registers(aggs, types[var], memo)
        if region is None or regs is None:
            skipped.append(var)
            continue
        base = region[0]
        frames.append((base, base + max(regs[1], 1) - 1))
        for off, name in regs[0]:
            labels.setdefault(base + off, "%s_%s" % (var, name))
    return labels, frames, skipped, cmd.name


def write_pspec(path, fam, version, labels, frames):
    lines = ['<?xml version="1.0" encoding="UTF-8"?>', "",
             "<!-- Generated by tools/gen_c28_pspec.py from TI C2000Ware %s device support (BSD-3-Clause):" % version,
             "     the peripheral registers of the %s devices, as <instance>_<register>. -->" % fam.upper(),
             "<processor_spec>", BASE, '  <volatile outputop="write_volatile" inputop="read_volatile">']
    merged = []
    for lo, hi in sorted(frames):
        if merged and lo <= merged[-1][1] + 1:
            merged[-1][1] = max(merged[-1][1], hi)
        else:
            merged.append([lo, hi])
    for lo, hi in merged:
        lines.append('    <range space="ram" first="0x%x" last="0x%x"/>' % (lo, hi))
    lines += ['  </volatile>', '  <default_symbols>']
    for addr in sorted(labels):
        lines.append('    <symbol name="%s" address="ram:0x%x" entry="false"/>' % (labels[addr], addr))
    lines += ['  </default_symbols>', '</processor_spec>', '']
    Path(path).write_text("\n".join(lines))


def main():
    root = Path(sys.argv[1])
    out = Path(sys.argv[2]) if len(sys.argv) > 2 else Path(__file__).resolve().parents[1] / "specs/Ghidra/Processors/TMS320C28/data/languages"
    manifest = re.sub(r"<[^>]+>", " ", (root / "docs/manifest.html").read_text(errors="replace"))
    version = re.search(r"C28x Device Support\s+(\d+(?:\.\d+)+)", manifest)
    version = version.group(1) if version else "unknown"
    for fam_dir in sorted((root / "device_support").iterdir()):
        r = family(fam_dir) if fam_dir.name.startswith("f28") and (fam_dir / "headers").is_dir() else None
        if r is None or not r[0]:
            continue
        labels, frames, skipped, cmd = r
        write_pspec(out / ("tms320c28_%s.pspec" % fam_dir.name), fam_dir.name, version, labels, frames)
        sys.stderr.write("%s: %d registers from %s; instances not laid out: %s\n" % (fam_dir.name, len(labels), cmd, ", ".join(skipped) or "none"))


if __name__ == "__main__":
    main()
