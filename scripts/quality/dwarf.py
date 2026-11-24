"""Per-function ground truth from an unstripped binary's DWARF (pyelftools only).

One record per `DW_TAG_subprogram` with code (`DW_AT_low_pc` or `DW_AT_ranges`),
keyed by its entry address. Everything is what the compiler itself wrote down:

- prototype: return type, parameters in declaration order, variadic-ness;
- locals: every `DW_TAG_variable` under the subprogram and its lexical blocks
  (not under inlined subroutines: those are the callee's);
- types: a C spelling plus the `structscore.parse_type` record the TRex score
  reads, the DWARF signedness, and the binary layout of any struct a parameter
  or local points to (`structscore.struct_layout`: typedefs resolved, anonymous
  members expanded, padding explicit);
- `noreturn` (`DW_AT_noreturn`), `inlined` (callee names of every
  `DW_TAG_inlined_subroutine`), `calls` (`DW_TAG_call_site` /
  `DW_TAG_GNU_call_site`: target name and entry, tail-call flag) and `lines`
  (the line table's statement addresses inside the function's ranges);
- `decl_file`/`decl_line`, which the source-side facts use to find the body.

Globals (`DW_TAG_variable` at CU scope with a `DW_OP_addr` location) are returned
separately, keyed by address. For a relocatable object, pyelftools applies the
`.rela.debug_*` relocations, so an address is the offset inside the function's
own section; `corpus.symbol_sections` supplies which section that is.
"""
from __future__ import annotations

import os
from pathlib import Path

from ..decbench import structscore as ss

_SUBPROGRAM = "DW_TAG_subprogram"
_CALL_SITES = ("DW_TAG_call_site", "DW_TAG_GNU_call_site")
_MAX_DEPTH = 16


def _str(v) -> str | None:
    if isinstance(v, bytes):
        return v.decode("utf-8", "replace")
    return v


def _origin(die):
    """The DIE a concrete instance takes its name/type from (abstract origin, specification)."""
    seen = 0
    while die is not None and seen < 4:
        seen += 1
        for attr in ("DW_AT_abstract_origin", "DW_AT_specification"):
            if attr in die.attributes:
                try:
                    die = die.get_DIE_from_attribute(attr)
                    break
                except Exception:  # noqa: BLE001
                    return die
        else:
            return die
    return die


def _get(die, name):
    """An attribute from the DIE or, failing that, its origin chain."""
    v = ss._attr(die, name)
    if v is None:
        o = _origin(die)
        if o is not die and o is not None:
            v = ss._attr(o, name)
    return v


def _die_name(die) -> str | None:
    return _str(_get(die, "DW_AT_name"))


def spelling(die, depth: int = 0) -> str:
    """A C spelling of a type DIE (typedef names kept, `void` for none)."""
    if die is None:
        return "void"
    if depth > 12:
        return "?"
    tag = die.tag
    name = ss._name(die)
    if tag in ("DW_TAG_base_type", "DW_TAG_typedef", "DW_TAG_unspecified_type"):
        return name or "?"
    if tag in ("DW_TAG_structure_type", "DW_TAG_class_type"):
        return f"struct {name}" if name else "struct <anon>"
    if tag == "DW_TAG_union_type":
        return f"union {name}" if name else "union <anon>"
    if tag == "DW_TAG_enumeration_type":
        return f"enum {name}" if name else "enum <anon>"
    if tag == "DW_TAG_pointer_type":
        inner = ss._type_die(die)
        if inner is not None and inner.tag == "DW_TAG_subroutine_type":
            return f"{spelling(ss._type_die(inner), depth + 1)} (*)(...)"
        return spelling(inner, depth + 1) + " *"
    if tag in ("DW_TAG_const_type", "DW_TAG_volatile_type", "DW_TAG_restrict_type",
               "DW_TAG_atomic_type"):
        word = tag[len("DW_TAG_"):-len("_type")]
        return f"{word} {spelling(ss._type_die(die), depth + 1)}"
    if tag == "DW_TAG_array_type":
        count = ""
        for sub in die.iter_children():
            ub = ss._attr(sub, "DW_AT_upper_bound")
            ct = ss._attr(sub, "DW_AT_count")
            if isinstance(ub, int):
                count = str(ub + 1)
            elif isinstance(ct, int):
                count = str(ct)
        return f"{spelling(ss._type_die(die), depth + 1)}[{count}]"
    if tag == "DW_TAG_subroutine_type":
        return "FUNCTION"
    return name or tag


def _resolved_spelling(die) -> str:
    """The spelling with typedefs and qualifiers resolved (what TRex classifies)."""
    base, ptr = ss._resolve(die)
    if base is None:
        core = "void"
    elif base.tag == "DW_TAG_base_type":
        core = ss._name(base) or "?"
    elif base.tag == "DW_TAG_enumeration_type":
        core = "int"
    elif base.tag in ("DW_TAG_structure_type", "DW_TAG_class_type", "DW_TAG_union_type"):
        core = "struct " + ss.struct_identity(base)
    elif base.tag == "DW_TAG_array_type":
        return _resolved_spelling(ss._type_die(base)) + "[]"
    elif base.tag == "DW_TAG_subroutine_type":
        return "void (*)(void)" if ptr else "FUNCTION"
    else:
        core = ss._name(base) or "?"
    return core + (" " + "*" * ptr if ptr else "")


def type_info(die) -> dict:
    base, ptr = ss._resolve(die)
    rec = ss.parse_type(_resolved_spelling(die))
    layout = None
    if base is not None and base.tag in ("DW_TAG_structure_type", "DW_TAG_class_type"):
        layout = ss.struct_layout(base)
    return {
        "spelling": spelling(die),
        "resolved": _resolved_spelling(die),
        "ptr": rec["ptr"], "base": rec["base"], "kind": rec["kind"],
        "size": ss._die_size(die) if die is not None else 0,
        "unsigned": ss.die_sign(die) if die is not None else None,
        "layout": layout,
    }


def _ranges(die, dwarf) -> list[tuple[int, int]]:
    low = ss._attr(die, "DW_AT_low_pc")
    high_attr = die.attributes.get("DW_AT_high_pc")
    if isinstance(low, int) and high_attr is not None:
        high = high_attr.value
        if high_attr.form not in ("DW_FORM_addr", "DW_FORM_addrx", "DW_FORM_addrx1",
                                  "DW_FORM_addrx2", "DW_FORM_addrx3", "DW_FORM_addrx4"):
            high = low + high
        return [(low, high)]
    if "DW_AT_ranges" in die.attributes:
        try:
            rl = dwarf.range_lists()
            if rl is None:
                return []
            entries = rl.get_range_list_at_offset(die.attributes["DW_AT_ranges"].value,
                                                  cu=die.cu)
        except Exception:  # noqa: BLE001
            return []
        out, base = [], 0
        cu_low = ss._attr(die.cu.get_top_DIE(), "DW_AT_low_pc")
        base = cu_low if isinstance(cu_low, int) else 0
        for e in entries:
            if hasattr(e, "base_address"):
                base = e.base_address
                continue
            begin, end = getattr(e, "begin_offset", None), getattr(e, "end_offset", None)
            if begin is None or end is None:
                continue
            if getattr(e, "is_absolute", False):
                out.append((begin, end))
            else:
                out.append((base + begin, base + end))
        return [r for r in out if r[1] > r[0]]
    return []


def _file_name(dwarf, cu, index) -> str | None:
    """`DW_AT_decl_file` -> a path, per the CU's line-program file table."""
    if not isinstance(index, int):
        return None
    try:
        lp = dwarf.line_program_for_CU(cu)
    except Exception:  # noqa: BLE001
        return None
    if lp is None:
        return None
    version = lp.header.version
    files = lp.header.file_entry
    pos = index if version >= 5 else index - 1
    if pos < 0 or pos >= len(files):
        return None
    entry = files[pos]
    name = _str(entry.name)
    dirs = lp.header.include_directory
    di = entry.dir_index
    top = cu.get_top_DIE()
    comp_dir = _str(ss._attr(top, "DW_AT_comp_dir")) or ""
    if version >= 5:
        directory = _str(dirs[di]) if 0 <= di < len(dirs) else comp_dir
    else:
        directory = _str(dirs[di - 1]) if 0 < di <= len(dirs) else comp_dir
    path = os.path.join(directory or "", name)
    if not os.path.isabs(path):
        path = os.path.join(comp_dir, path)
    return os.path.normpath(path)


def _walk(die, out: dict, depth: int = 0) -> None:
    """Locals, inlined callees and call sites under one subprogram."""
    if depth > _MAX_DEPTH:
        return
    for child in die.iter_children():
        tag = child.tag
        if tag == "DW_TAG_variable":
            name = _die_name(child)
            tdie = ss._type_die(_origin(child)) if "DW_AT_type" not in child.attributes \
                else ss._type_die(child)
            if ss._attr(child, "DW_AT_external") or ss._attr(child, "DW_AT_declaration"):
                continue
            out["locals"].append({"name": name, "depth": depth,
                                  "static": _is_static_storage(child),
                                  "type": type_info(tdie)})
        elif tag == "DW_TAG_lexical_block":
            _walk(child, out, depth + 1)
        elif tag == "DW_TAG_inlined_subroutine":
            out["inlined"].append(_die_name(child) or "?")
            _walk_inlined(child, out, depth + 1)
        elif tag in _CALL_SITES:
            out["calls"].append(_call_site(child))


def _walk_inlined(die, out: dict, depth: int) -> None:
    if depth > _MAX_DEPTH:
        return
    for child in die.iter_children():
        if child.tag == "DW_TAG_inlined_subroutine":
            out["inlined"].append(_die_name(child) or "?")
            _walk_inlined(child, out, depth + 1)
        elif child.tag == "DW_TAG_lexical_block":
            _walk_inlined(child, out, depth + 1)
        elif child.tag in _CALL_SITES:
            out["calls"].append(_call_site(child))


_ADDR_OPS = (0x03, 0xA1, 0xFB)  # DW_OP_addr, DW_OP_addrx, DW_OP_GNU_addr_index


def _is_static_storage(die) -> bool:
    loc = ss._attr(die, "DW_AT_location")
    return isinstance(loc, list) and bool(loc) and loc[0] in _ADDR_OPS


def _uleb(data: list[int]) -> int:
    out, shift = 0, 0
    for byte in data:
        out |= (byte & 0x7F) << shift
        shift += 7
        if not byte & 0x80:
            break
    return out


def _static_address(die, dwarf, little: bool) -> int | None:
    """The address of a `DW_OP_addr`/`DW_OP_addrx` location (clang's DWARF 5 uses addrx)."""
    loc = ss._attr(die, "DW_AT_location")
    if loc[0] == 0x03:
        return int.from_bytes(bytes(loc[1:1 + die.cu.structs.address_size]),
                              "little" if little else "big")
    try:
        return dwarf.get_addr(die.cu, _uleb(loc[1:]))
    except Exception:  # noqa: BLE001
        return None


def _call_site(die) -> dict:
    target, entry, noreturn = None, None, False
    for attr in ("DW_AT_call_origin", "DW_AT_abstract_origin"):
        if attr in die.attributes:
            try:
                callee = die.get_DIE_from_attribute(attr)
                target = _die_name(callee)
                low = ss._attr(callee, "DW_AT_low_pc")
                entry = low if isinstance(low, int) else None
                noreturn = bool(_get(callee, "DW_AT_noreturn"))
            except Exception:  # noqa: BLE001
                pass
            break
    tail = bool(ss._attr(die, "DW_AT_call_tail_call") or ss._attr(die, "DW_AT_GNU_tail_call"))
    pc = ss._attr(die, "DW_AT_call_return_pc") or ss._attr(die, "DW_AT_low_pc")
    return {"target": target, "target_entry": entry, "tail": tail, "noreturn": noreturn,
            "pc": pc if isinstance(pc, int) else None,
            "indirect": target is None}


def _line_addresses(dwarf) -> dict[int, list[int]]:
    """CU offset -> sorted statement addresses from its line program."""
    out: dict[int, list[int]] = {}
    for cu in dwarf.iter_CUs():
        try:
            lp = dwarf.line_program_for_CU(cu)
        except Exception:  # noqa: BLE001
            continue
        if lp is None:
            continue
        addrs = set()
        for entry in lp.get_entries():
            st = entry.state
            if st is not None and not st.end_sequence and st.is_stmt:
                addrs.add(st.address)
        out[cu.cu_offset] = sorted(addrs)
    return out


def extract(path: Path) -> dict:
    """{functions: {entry: record}, globals: {address: record}, arch, pointer_size}."""
    from elftools.elf.elffile import ELFFile
    import bisect
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        result = {"arch": elf.get_machine_arch(), "elfclass": elf.elfclass,
                  "relocatable": elf["e_type"] == "ET_REL",
                  "functions": {}, "globals": {}}
        if not elf.has_dwarf_info():
            return result
        dwarf = elf.get_dwarf_info()
        lines = _line_addresses(dwarf)
        for cu in dwarf.iter_CUs():
            top = cu.get_top_DIE()
            cu_lines = lines.get(cu.cu_offset, [])
            producer = _str(ss._attr(top, "DW_AT_producer"))
            for die in top.iter_children():
                if die.tag == "DW_TAG_variable" and _is_static_storage(die):
                    addr = _static_address(die, dwarf, elf.little_endian)
                    if addr is None or not _die_name(die):
                        continue
                    result["globals"][addr] = {"name": _die_name(die),
                                               "type": type_info(ss._type_die(_origin(die)))}
                    continue
                if die.tag != _SUBPROGRAM:
                    continue
                ranges = _ranges(die, dwarf)
                if not ranges:
                    continue
                origin = _origin(die)
                entry_pc = ss._attr(die, "DW_AT_entry_pc")
                entry = entry_pc if isinstance(entry_pc, int) else ranges[0][0]
                params, variadic = [], False
                src = origin if origin is not None else die
                for child in src.iter_children():
                    if child.tag == "DW_TAG_formal_parameter":
                        params.append({"index": len(params), "name": _die_name(child),
                                       "type": type_info(ss._type_die(child))})
                    elif child.tag == "DW_TAG_unspecified_parameters":
                        variadic = True
                if not params and src is not die:
                    for child in die.iter_children():
                        if child.tag == "DW_TAG_formal_parameter":
                            params.append({"index": len(params), "name": _die_name(child),
                                           "type": type_info(ss._type_die(_origin(child)))})
                body = {"locals": [], "inlined": [], "calls": []}
                _walk(die, body)
                fn_lines = []
                for lo, hi in ranges:
                    i = bisect.bisect_left(cu_lines, lo)
                    while i < len(cu_lines) and cu_lines[i] < hi:
                        fn_lines.append(cu_lines[i])
                        i += 1
                decl_file = _file_name(dwarf, die.cu if src is die else src.cu,
                                       _get(die, "DW_AT_decl_file"))
                result["functions"][entry] = {
                    "name": _die_name(die) or f"sub_{entry:x}",
                    "linkage_name": _str(_get(die, "DW_AT_linkage_name")),
                    "entry": entry,
                    "ranges": ranges,
                    "size": sum(hi - lo for lo, hi in ranges),
                    "external": bool(_get(die, "DW_AT_external")),
                    "declared_inline": bool(_get(die, "DW_AT_inline")),
                    "noreturn": bool(_get(die, "DW_AT_noreturn")),
                    "decl_file": decl_file,
                    "decl_line": _get(die, "DW_AT_decl_line"),
                    "producer": producer,
                    "return": type_info(ss._type_die(src)),
                    "params": params,
                    "variadic": variadic,
                    **body,
                    "lines": fn_lines,
                }
        by_name = {}
        for entry, fn in result["functions"].items():
            by_name.setdefault(fn["name"], entry)
        for fn in result["functions"].values():
            for call in fn["calls"]:
                if call["target_entry"] is None and call["target"] in by_name:
                    call["target_entry"] = by_name[call["target"]]
    return result
