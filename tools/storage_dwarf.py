"""Compare the `storage` of `unlace decompile-all --json --storage` variables with DWARF.

For every function of a binary that carries DWARF, each variable the decompiler
reports under a name DWARF also gives to a parameter or local of that function
is compared address by address inside the function: where DWARF places the
variable (location expressions and location lists, register or CFA-relative
stack slot or static address) against where the `storage` ranges place it.

Each byte of the function falls in one bucket per variable:
  agree     both name a location there and one unlace piece is DWARF's
  disagree  both name a location there and none matches
  dwarf     only DWARF names one (the engine's range is the live range)
  unlace    only unlace names one

`disagree_when` is the part of `disagree` where DWARF's location is a piece of
the variable's `storage` with other ranges: the two differ on when the piece
holds the variable, not on where the variable can be.

`places` counts the distinct locations DWARF gives the compared variables and
`places_listed` how many of them are a `storage` piece of the variable, whatever
its ranges (a declared home with no range counts).

The buckets are counted twice: for the bytes a DWARF location list covers (the
compiler tracked the variable through the code, the precise case) and, with an
`expr_` prefix, for the bytes one location expression covers for a whole scope
(an unoptimized frame slot, which DWARF also claims before the prologue has
stored a parameter there).

Usage: python3 tools/storage_dwarf.py --unlace target/debug/unlace BINARY...
"""
from __future__ import annotations

import argparse
import json
import subprocess
import sys
from bisect import bisect_right
from collections import Counter

from elftools.dwarf.dwarf_expr import DWARFExprParser
from elftools.dwarf.locationlists import BaseAddressEntry, LocationEntry, LocationExpr, LocationParser
from elftools.elf.elffile import ELFFile

X86_64 = ["rax", "rdx", "rcx", "rbx", "rsi", "rdi", "rbp", "rsp"] + [f"r{i}" for i in range(8, 16)]
X86_64 += ["rip"] + [f"xmm{i}" for i in range(16)]
I386 = ["eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi"]
AARCH64 = [f"x{i}" for i in range(31)] + ["sp"]
ARM = [f"r{i}" for i in range(13)] + ["sp", "lr", "pc"]

# (DWARF register names by number, CFA minus the stack pointer at entry)
ARCHES = {
    "EM_X86_64": (X86_64, 8),
    "EM_386": (I386, 4),
    "EM_AARCH64": (AARCH64, 0),
    "EM_ARM": (ARM, 0),
}


def family(arch: str, name: str) -> str:
    """The widest register a register name is part of."""
    n = name.lower()
    if arch == "EM_X86_64":
        legacy = {"ax": "rax", "bx": "rbx", "cx": "rcx", "dx": "rdx", "si": "rsi", "di": "rdi",
                  "bp": "rbp", "sp": "rsp"}
        if n[:1] in "er" and n[1:] in legacy:
            return legacy[n[1:]]
        if n in legacy:
            return legacy[n]
        if len(n) == 2 and n[1] in "lh" and n[0] + "x" in legacy:
            return legacy[n[0] + "x"]
        if n in ("sil", "dil", "bpl", "spl"):
            return legacy[n[:2]]
        if n.startswith("r") and n[1:].rstrip("dwb").isdigit():
            return "r" + n[1:].rstrip("dwb")
        for prefix in ("ymm", "zmm"):
            if n.startswith(prefix):
                n = "xmm" + n[3:]
        if n.startswith("xmm"):
            return n.split("_")[0]
    if arch == "EM_386":
        legacy = {"ax": "eax", "bx": "ebx", "cx": "ecx", "dx": "edx", "si": "esi", "di": "edi",
                  "bp": "ebp", "sp": "esp"}
        if n in legacy:
            return legacy[n]
        if len(n) == 2 and n[1] in "lh" and n[0] + "x" in legacy:
            return legacy[n[0] + "x"]
    if arch == "EM_AARCH64" and n[:1] == "w" and n[1:].isdigit():
        return "x" + n[1:]
    return n


class Cfa:
    """The CFA rule at a pc, from `.eh_frame` or `.debug_frame`."""

    def __init__(self, dwarf):
        self.rows = []
        entries = []
        for has, get in ((dwarf.has_EH_CFI, dwarf.EH_CFI_entries), (dwarf.has_CFI, dwarf.CFI_entries)):
            try:
                if has():
                    entries += list(get())
            except Exception:  # noqa: BLE001
                continue
        for entry in entries:
            if not hasattr(entry, "cie") or entry.cie is None:
                continue
            start = entry["initial_location"]
            end = start + entry["address_range"]
            try:
                table = entry.get_decoded().table
            except Exception:  # noqa: BLE001
                continue
            for i, row in enumerate(table):
                stop = table[i + 1]["pc"] if i + 1 < len(table) else end
                rule = row["cfa"]
                if rule.expr is None and rule.reg is not None:
                    self.rows.append((row["pc"], stop, rule.reg, rule.offset))
        self.rows.sort()
        self.starts = [r[0] for r in self.rows]

    def segments(self, lo: int, hi: int):
        """`(lo, hi, cfa register, cfa offset)` pieces of `[lo, hi)`."""
        i = max(bisect_right(self.starts, lo) - 1, 0)
        while i < len(self.rows) and self.rows[i][0] < hi:
            start, stop, reg, off = self.rows[i]
            a, b = max(lo, start), min(hi, stop)
            if a < b:
                yield a, b, reg, off
            i += 1


def scope_ranges(die, dwarf, cu_base):
    attrs = die.attributes
    if "DW_AT_low_pc" in attrs and "DW_AT_high_pc" in attrs:
        low = attrs["DW_AT_low_pc"].value
        high = attrs["DW_AT_high_pc"]
        return [(low, high.value if high.form == "DW_FORM_addr" else low + high.value)]
    if "DW_AT_ranges" in attrs:
        lists = dwarf.range_lists()
        if lists is None:
            return []
        out, base = [], cu_base
        try:
            entries = lists.get_range_list_at_offset(attrs["DW_AT_ranges"].value, cu=die.cu)
        except Exception:  # noqa: BLE001
            return []
        for e in entries:
            if hasattr(e, "base_address"):
                base = e.base_address
            elif getattr(e, "is_absolute", False):
                out.append((e.begin_offset, e.end_offset))
            else:
                out.append((base + e.begin_offset, base + e.end_offset))
        return out
    return []


def type_size(die):
    seen, count = 0, 1
    while die is not None and seen < 16:
        seen += 1
        if "DW_AT_byte_size" in die.attributes:
            return count * die.attributes["DW_AT_byte_size"].value
        if die.tag in ("DW_TAG_pointer_type", "DW_TAG_reference_type", "DW_TAG_rvalue_reference_type"):
            return count * die.cu["address_size"]
        if die.tag == "DW_TAG_array_type":
            for bound in die.iter_children():
                if "DW_AT_count" in bound.attributes:
                    count *= bound.attributes["DW_AT_count"].value
                elif "DW_AT_upper_bound" in bound.attributes:
                    count *= bound.attributes["DW_AT_upper_bound"].value + 1
        if "DW_AT_type" not in die.attributes or not isinstance(count, int):
            return None
        try:
            die = die.get_DIE_from_attribute("DW_AT_type")
        except Exception:  # noqa: BLE001
            return None
    return None


def origin(die):
    for attr in ("DW_AT_abstract_origin", "DW_AT_specification"):
        if attr in die.attributes:
            try:
                return die.get_DIE_from_attribute(attr)
            except Exception:  # noqa: BLE001
                return None
    return None


def attr_of(die, name):
    seen = 0
    while die is not None and seen < 4:
        seen += 1
        if name in die.attributes:
            return die.attributes[name].value
        die = origin(die)
    return None


def text(value):
    return value.decode("utf-8", "replace") if isinstance(value, bytes) else value


class Dwarf:
    def __init__(self, path: str):
        self.file = open(path, "rb")
        self.elf = ELFFile(self.file)
        self.arch = self.elf["e_machine"]
        self.dwarf = self.elf.get_dwarf_info()
        self.exprs = DWARFExprParser(self.dwarf.structs)
        self.locs = LocationParser(self.dwarf.location_lists())
        self.cfa = Cfa(self.dwarf)
        self.regs, self.cfa_bias = ARCHES[self.arch]

    def reg(self, number: int):
        return self.regs[number] if 0 <= number < len(self.regs) else None

    def places(self, expr, lo, hi, frame_base, size):
        """`(lo, hi, key)` for a location expression valid over `[lo, hi)`."""
        try:
            ops = self.exprs.parse_expr(expr)
        except Exception:  # noqa: BLE001
            return
        parts, current = [], None
        for op in ops:
            name = op.op_name
            if name == "DW_OP_piece":
                if current is not None:
                    parts.append((current, op.args[0]))
                current = None
            elif current is not None or name in ("DW_OP_stack_value", "DW_OP_entry_value",
                                                 "DW_OP_GNU_entry_value", "DW_OP_implicit_value"):
                return
            elif name.startswith("DW_OP_reg"):
                number = op.args[0] if name == "DW_OP_regx" else int(name[len("DW_OP_reg"):])
                current = ("reg", number)
            elif name == "DW_OP_fbreg":
                current = ("fb", op.args[0])
            elif name.startswith("DW_OP_breg"):
                number = op.args[0] if name == "DW_OP_bregx" else int(name[len("DW_OP_breg"):])
                current = ("breg", number, op.args[-1])
            elif name == "DW_OP_addr":
                current = ("addr", op.args[0])
            elif name == "DW_OP_call_frame_cfa":
                current = ("cfa", 0)
            else:
                return
        if current is not None:
            parts.append((current, size))
        for part, width in parts:
            yield from self.resolve(part, lo, hi, frame_base, width)

    def resolve(self, part, lo, hi, frame_base, width):
        kind = part[0]
        if kind == "reg":
            name = self.reg(part[1])
            if name:
                yield lo, hi, ("reg", family(self.arch, name))
        elif kind == "addr":
            yield lo, hi, ("mem", part[1], width)
        elif kind == "cfa":
            yield lo, hi, ("stack", part[1] + self.cfa_bias, width)
        elif kind == "breg":
            for a, b, reg, off in self.cfa.segments(lo, hi):
                if reg == part[1]:
                    yield a, b, ("stack", part[2] - off + self.cfa_bias, width)
        elif kind == "fb":
            for a, b, base in frame_base(lo, hi):
                if base[0] == "stack":
                    yield a, b, ("stack", base[1] + part[1], width)

    def location(self, attr, die):
        """An attribute's location: one expression, a location list, or None.

        A block form is an expression in every DWARF version: Go writes one in
        version 4, where pyelftools expects `DW_FORM_exprloc`.
        """
        if attr is None:
            return None
        if attr.form.startswith("DW_FORM_block"):
            return LocationExpr(attr.value)
        try:
            if self.locs.attribute_has_location(attr, die.cu["version"]):
                return self.locs.parse_from_attribute(attr, die.cu["version"], die)
        except Exception:  # noqa: BLE001
            return None
        return None

    def frame_base(self, die):
        loc = self.location(die.attributes.get("DW_AT_frame_base"), die)
        if not isinstance(loc, LocationExpr):
            return lambda lo, hi: iter(())

        def base(lo, hi):
            try:
                ops = self.exprs.parse_expr(loc.loc_expr)
            except Exception:  # noqa: BLE001
                return
            if len(ops) != 1:
                return
            name = ops[0].op_name
            if name == "DW_OP_call_frame_cfa":
                yield lo, hi, ("stack", self.cfa_bias)
            elif name.startswith("DW_OP_reg") or name.startswith("DW_OP_breg"):
                prefix = "DW_OP_breg" if name.startswith("DW_OP_breg") else "DW_OP_reg"
                number = int(name[len(prefix):]) if name[len(prefix):].isdigit() else ops[0].args[0]
                extra = ops[0].args[-1] if prefix == "DW_OP_breg" else 0
                for a, b, reg, off in self.cfa.segments(lo, hi):
                    if reg == number:
                        yield a, b, ("stack", extra - off + self.cfa_bias)

        return base

    def variable(self, die, scopes, frame_base, cu_base):
        loc = self.location(die.attributes.get("DW_AT_location"), die)
        if loc is None:
            return []
        type_die = None
        holder = die if "DW_AT_type" in die.attributes else origin(die)
        if holder is not None and "DW_AT_type" in holder.attributes:
            try:
                type_die = holder.get_DIE_from_attribute("DW_AT_type")
            except Exception:  # noqa: BLE001
                type_die = None
        size = type_size(type_die) or 1
        out = []
        if isinstance(loc, LocationExpr):
            for lo, hi in scopes:
                out += [(*place, "expr") for place in self.places(loc.loc_expr, lo, hi, frame_base, size)]
            return out
        base = cu_base
        for entry in loc:
            if isinstance(entry, BaseAddressEntry):
                base = entry.base_address
            elif isinstance(entry, LocationEntry):
                lo, hi = entry.begin_offset, entry.end_offset
                if not getattr(entry, "is_absolute", False):
                    lo, hi = lo + base, hi + base
                if lo < hi:
                    out += [(*place, "list") for place in self.places(entry.loc_expr, lo, hi, frame_base, size)]
        return out

    def functions(self):
        """`[{names, low, high, variables: {name: [(lo, hi, key, origin)] | None}}]`."""
        out = []
        for cu in self.dwarf.iter_CUs():
            top = cu.get_top_DIE()
            cu_base = top.attributes["DW_AT_low_pc"].value if "DW_AT_low_pc" in top.attributes else 0
            for die in top.iter_children():
                if die.tag != "DW_TAG_subprogram":
                    continue
                ranges = scope_ranges(die, self.dwarf, cu_base)
                if not ranges:
                    continue
                names = {text(attr_of(die, n)) for n in ("DW_AT_name", "DW_AT_linkage_name")} - {None}
                variables: dict = {}
                self.walk(die, ranges, self.frame_base(die), cu_base, variables)
                low = min(lo for lo, _ in ranges)
                out.append({"names": names, "low": low, "high": max(hi for _, hi in ranges),
                            "variables": variables})
        return out

    def walk(self, die, scopes, frame_base, cu_base, variables, depth=0):
        if depth > 32:
            return
        for child in die.iter_children():
            if child.tag in ("DW_TAG_formal_parameter", "DW_TAG_variable"):
                name = text(attr_of(child, "DW_AT_name"))
                if name is None:
                    continue
                places = self.variable(child, scopes, frame_base, cu_base)
                # A name two scopes of the function declare is ambiguous.
                variables[name] = None if name in variables else places
            elif child.tag == "DW_TAG_lexical_block":
                inner = scope_ranges(child, self.dwarf, cu_base) or scopes
                self.walk(child, inner, frame_base, cu_base, variables, depth + 1)


def unlace_places(arch: str, variable: dict):
    """`(pieces, [(start, end, piece)])` of one variable row."""
    pieces, held = [], []
    for piece in variable.get("storage", []):
        if piece["space"] == "register":
            if not piece["register"]:
                continue
            key = ("reg", family(arch, piece["register"]))
        elif piece["space"] == "stack":
            key = ("stack", piece["offset"], piece["size"])
        elif piece["space"] == "ram":
            key = ("mem", piece["offset"], piece["size"])
        else:
            continue
        pieces.append(key)
        held += [(r["start"], r["end"], key) for r in piece["ranges"]]
    return pieces, held


def matches(a, b) -> bool:
    if a[0] != b[0]:
        return False
    if a[0] == "reg":
        return a[1] == b[1]
    return a[1] < b[1] + b[2] and b[1] < a[1] + a[2]


def compare(dwarf_places, unlace_ranges, pieces, low: int, high: int) -> Counter:
    """Bytes of `[low, high)` per bucket; `pieces` are the variable's storage keys."""
    cuts = {low, high}
    for lo, hi, *_ in dwarf_places + unlace_ranges:
        cuts.update(c for c in (lo, hi) if low <= c <= high)
    cuts = sorted(cuts)
    listed = any(origin == "list" for *_, origin in dwarf_places)
    prefix = "" if listed else "expr_"
    out = Counter()
    for a, b in zip(cuts, cuts[1:]):
        d = [k for lo, hi, k, _ in dwarf_places if lo <= a and b <= hi]
        u = [k for lo, hi, k in unlace_ranges if lo <= a and b <= hi]
        if d and u:
            if any(matches(x, y) for x in d for y in u):
                out[prefix + "agree"] += b - a
            else:
                out[prefix + "disagree"] += b - a
                if any(matches(x, y) for x in d for y in pieces):
                    out[prefix + "disagree_when"] += b - a
        elif d:
            out[prefix + "dwarf"] += b - a
        elif u:
            out[prefix + "unlace"] += b - a
    return out


def check(unlace: str, path: str, extra: list[str]) -> dict:
    with open(path, "rb") as f:
        elf = ELFFile(f)
        if elf["e_machine"] not in ARCHES or not elf.has_dwarf_info():
            return {"skipped": "no DWARF or an architecture this script has no register table for"}
    info = Dwarf(path)
    truth = info.functions()
    command = [unlace, "decompile-all", path, "--json", "--storage", *extra]
    run = subprocess.run(command, capture_output=True, check=False)
    try:
        doc = json.loads(run.stdout)
    except ValueError:
        return {"skipped": "unlace printed no document"}
    # A name two subprograms carry (a static function of two units) is ambiguous.
    by_name = {}
    for entry in truth:
        for name in entry["names"]:
            by_name[name] = None if name in by_name else entry
    total = Counter()
    rows = []
    for function in doc["functions"]:
        entry = next((by_name[n] for n in [function["name"], *function.get("aliases", [])]
                      if by_name.get(n)), None)
        if entry is None or function.get("code") is None:
            continue
        total["functions"] += 1
        shift = function["address"] - entry["low"]
        # A parameter and the frame slot it is spilled to are two rows of one name.
        named: dict[str, tuple] = {}
        for variable in function.get("variables", []):
            pieces, held = named.setdefault(variable["name"], ([], []))
            more = unlace_places(info.arch, variable)
            pieces.extend(more[0])
            held.extend(more[1])
        for name, (pieces, held) in named.items():
            places = entry["variables"].get(name)
            if not places:
                continue
            ranges = [(lo - shift, hi - shift, key) for lo, hi, key in held]
            result = compare(places, ranges, pieces, entry["low"], entry["high"])
            # Whatever the ranges say: is each place DWARF names one of the pieces?
            given = {key for _, _, key, _ in places}
            result["places"] = len(given)
            result["places_listed"] = sum(any(matches(key, piece) for piece in pieces) for key in given)
            total["variables" if any(o == "list" for *_, o in places) else "expr_variables"] += 1
            total.update(result)
            rows.append({"function": function["name"], "variable": name, **result})
    return {"totals": dict(total), "rows": rows}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--unlace", default="target/debug/unlace")
    parser.add_argument("--arg", action="append", default=[], help="passed through to unlace")
    parser.add_argument("--rows", action="store_true", help="print one line per variable")
    parser.add_argument("binaries", nargs="+")
    args = parser.parse_args()
    grand = Counter()
    for path in args.binaries:
        try:
            result = check(args.unlace, path, args.arg)
        except Exception as error:  # noqa: BLE001
            result = {"skipped": f"{type(error).__name__}: {error}"}
        if "skipped" in result:
            print(f"{path}: skipped ({result['skipped']})", file=sys.stderr)
            continue
        grand.update(result["totals"])
        grand["binaries"] += 1
        if args.rows:
            for row in result["rows"]:
                print(json.dumps({"binary": path, **row}))
    summary = dict(grand)
    for prefix in ("", "expr_"):
        both = grand[prefix + "agree"] + grand[prefix + "disagree"]
        located = both + grand[prefix + "dwarf"]
        summary[prefix + "agreement"] = round(grand[prefix + "agree"] / both, 4) if both else None
        summary[prefix + "dwarf_covered"] = round(both / located, 4) if located else None
    summary["places_listed_share"] = (
        round(grand["places_listed"] / grand["places"], 4) if grand["places"] else None
    )
    print(json.dumps(summary, sort_keys=True))
    return 0


if __name__ == "__main__":
    sys.exit(main())
