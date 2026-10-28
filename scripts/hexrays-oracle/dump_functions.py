#!/usr/bin/env python3
"""Hex-Rays behavioral-oracle worker: dump one IDA database function by function.

Runs under an IDAlib-enabled Python (see README.md). Uses only IDA's public,
documented APIs (ida_hexrays.decompile, ida_hexrays.gen_microcode, mba_t print)
on our own test binaries. Writes, per function:

  functions/<ea>.json   pseudocode, prototype, lvars, ctree statistics
  microcode/<ea>.json   microcode text + statistics per maturity level

A function is done once functions/<ea>.json exists, so the worker is resumable.
Before each function it records the function in progress in `current.json`; the
driver (run_oracle.py) uses that file to enforce per-function timeouts.
"""

from __future__ import annotations

import argparse
import json
import os
import sys
import traceback
import warnings
from pathlib import Path

SCHEMA_VERSION = 1

MATURITIES = [
    "MMAT_GENERATED",
    "MMAT_PREOPTIMIZED",
    "MMAT_LOCOPT",
    "MMAT_CALLS",
    "MMAT_GLBOPT1",
    "MMAT_GLBOPT2",
    "MMAT_GLBOPT3",
    "MMAT_LVARS",
]

FLAG_MREGS = {"cf", "zf", "sf", "of", "pf", "af", "df", "if", "tf", "c", "z", "n", "v"}


def write_json(path: Path, value) -> None:
    tmp = path.with_suffix(path.suffix + ".tmp")
    tmp.write_text(json.dumps(value, indent=1, sort_keys=True) + "\n", encoding="utf-8")
    os.replace(tmp, path)


def ea_key(ea: int) -> str:
    return f"{ea:016x}"


def calling_convention_name(cc: int) -> str:
    import ida_typeinf

    names = {}
    for attr in dir(ida_typeinf):
        if attr.startswith("CM_CC_") and attr not in ("CM_CC_MASK",):
            value = getattr(ida_typeinf, attr)
            if isinstance(value, int):
                names.setdefault(value, attr[len("CM_CC_"):].lower())
    return names.get(cc & ida_typeinf.CM_CC_MASK, f"cc_{cc:#x}")


def argloc_text(loc, size: int) -> str:
    import ida_idp

    if loc.is_reg1():
        return f"reg:{ida_idp.get_reg_name(loc.reg1(), size) or loc.reg1()}"
    if loc.is_reg2():
        lo = ida_idp.get_reg_name(loc.reg1(), size // 2) or loc.reg1()
        hi = ida_idp.get_reg_name(loc.reg2(), size // 2) or loc.reg2()
        return f"reg2:{lo}:{hi}"
    if loc.is_stkoff():
        return f"stack:{loc.stkoff():#x}"
    if loc.is_scattered():
        return "scattered"
    if loc.is_badloc():
        return "none"
    return f"atype:{loc.atype()}"


def prototype(cfunc) -> dict:
    import ida_typeinf

    tif = cfunc.type
    ftd = ida_typeinf.func_type_data_t()
    import ida_lines

    out = {"decl": ida_lines.tag_remove(cfunc.print_dcl())}
    if not tif.get_func_details(ftd):
        out["details"] = None
        return out
    args = []
    for index, arg in enumerate(ftd):
        size = arg.type.get_size()
        args.append(
            {
                "index": index,
                "name": arg.name,
                "type": arg.type.dstr(),
                "size": size if size != ida_typeinf.BADSIZE else None,
                "location": argloc_text(arg.argloc, size if size != ida_typeinf.BADSIZE else 8),
            }
        )
    ret_size = ftd.rettype.get_size()
    out["details"] = {
        "calling_convention": calling_convention_name(ftd.get_cc()),
        "is_vararg": bool(ftd.is_vararg_cc()),
        "is_noreturn": bool(ftd.is_noret()),
        "return_type": ftd.rettype.dstr(),
        "return_location": argloc_text(ftd.retloc, ret_size if ret_size != ida_typeinf.BADSIZE else 8)
        if not ftd.rettype.is_void()
        else "none",
        "args": args,
    }
    return out


LVAR_FLAGS = [
    "is_arg_var",
    "is_result_var",
    "is_fake_var",
    "is_overlapped_var",
    "is_floating_var",
    "is_spoiled_var",
    "is_mapdst_var",
    "is_split_var",
    "is_used_byref",
    "is_noptr_var",
    "is_dummy_arg",
    "is_thisarg",
    "is_unknown_width",
    "is_automapped",
    "is_decl_unused",
    "is_shared",
    "has_nice_name",
    "has_user_name",
    "typed",
    "used",
]


def vdloc_text(loc, width: int) -> str:
    import ida_hexrays

    if loc.is_reg1():
        text = f"reg:{ida_hexrays.get_mreg_name(loc.reg1(), max(width, 1))}"
        if loc.is_reg2():
            text += f":{ida_hexrays.get_mreg_name(loc.reg2(), max(width, 1))}"
        return text
    if loc.is_stkoff():
        return f"stack:{loc.stkoff():#x}"
    if loc.is_scattered():
        return "scattered"
    return "other"


def lvars(cfunc) -> list[dict]:
    out = []
    for index, lv in enumerate(cfunc.get_lvars()):
        flags = []
        for name in LVAR_FLAGS:
            attr = getattr(lv, name, None)
            if attr is not None and (attr() if callable(attr) else attr):
                flags.append(name)
        out.append(
            {
                "index": index,
                "name": lv.name,
                "type": lv.type().dstr(),
                "width": lv.width,
                "location": vdloc_text(lv.location, lv.width),
                "defea": lv.defea,
                "flags": flags,
            }
        )
    return out


def ctree_stats(cfunc) -> dict:
    import ida_hexrays

    op_names = {}
    for attr in dir(ida_hexrays):
        if attr.startswith(("cot_", "cit_")) and attr not in ("cot_last", "cit_end"):
            op_names.setdefault(getattr(ida_hexrays, attr), attr)

    ops: dict[str, int] = {}
    helpers: dict[str, int] = {}
    call_arities: list[int] = []
    labels = 0

    class Visitor(ida_hexrays.ctree_visitor_t):
        def __init__(self):
            super().__init__(ida_hexrays.CV_FAST)

        def visit_insn(self, insn):
            nonlocal labels
            name = op_names.get(insn.op, f"op_{insn.op}")
            ops[name] = ops.get(name, 0) + 1
            if insn.label_num >= 0:
                labels += 1
            return 0

        def visit_expr(self, expr):
            name = op_names.get(expr.op, f"op_{expr.op}")
            ops[name] = ops.get(name, 0) + 1
            if expr.op == ida_hexrays.cot_helper:
                helpers[expr.helper] = helpers.get(expr.helper, 0) + 1
            elif expr.op == ida_hexrays.cot_call:
                call_arities.append(expr.a.size())
            return 0

    Visitor().apply_to(cfunc.body, None)
    loops = sum(ops.get(k, 0) for k in ("cit_for", "cit_while", "cit_do"))
    return {
        "ops": dict(sorted(ops.items())),
        "helpers": dict(sorted(helpers.items())),
        "call_arities": call_arities,
        "gotos": ops.get("cit_goto", 0),
        "labels": labels,
        "loops": loops,
        "ifs": ops.get("cit_if", 0),
        "switches": ops.get("cit_switch", 0),
        "calls": ops.get("cot_call", 0),
        "casts": ops.get("cot_cast", 0),
    }


def pseudocode_lines(cfunc) -> list[str]:
    import ida_lines

    return [ida_lines.tag_remove(line.line) for line in cfunc.get_pseudocode()]


def microcode_at(pfn, maturity_name: str) -> dict:
    import ida_hexrays
    import ida_lines

    maturity = getattr(ida_hexrays, maturity_name)
    hf = ida_hexrays.hexrays_failure_t()
    mbr = ida_hexrays.mba_ranges_t(pfn)
    mba = ida_hexrays.gen_microcode(
        mbr,
        hf,
        None,
        ida_hexrays.DECOMP_NO_WAIT | ida_hexrays.DECOMP_NO_CACHE | ida_hexrays.DECOMP_WARNINGS,
        maturity,
    )
    if mba is None:
        return {"error": hf.desc() if hasattr(hf, "desc") else str(hf.code)}

    class Printer(ida_hexrays.vd_printer_t):
        def __init__(self):
            super().__init__()
            self.lines: list[str] = []

        def _print(self, indent, line):
            self.lines.append(ida_lines.tag_remove(line).rstrip("\n"))
            return 1

    printer = Printer()
    mba._print(printer)

    opcode_names = {}
    for attr in dir(ida_hexrays):
        if attr.startswith("m_") and isinstance(getattr(ida_hexrays, attr), int):
            opcode_names.setdefault(getattr(ida_hexrays, attr), attr)

    opcodes: dict[str, int] = {}
    flag_regs: dict[str, int] = {}
    call_arities: list[int] = []
    insns = 0

    class Operands(ida_hexrays.mop_visitor_t):
        def visit_mop(self, op, tif, is_target):
            if op.t == ida_hexrays.mop_r:
                name = ida_hexrays.get_mreg_name(op.r, max(op.size, 1))
                if name in FLAG_MREGS:
                    flag_regs[name] = flag_regs.get(name, 0) + 1
            return 0

    for serial in range(mba.qty):
        blk = mba.get_mblock(serial)
        ins = blk.head
        while ins is not None:
            insns += 1
            name = opcode_names.get(ins.opcode, f"m_{ins.opcode}")
            opcodes[name] = opcodes.get(name, 0) + 1
            if ins.opcode == ida_hexrays.m_call and ins.d.t == ida_hexrays.mop_f and ins.d.f is not None:
                call_arities.append(ins.d.f.args.size())
            ins.for_all_ops(Operands())
            ins = ins.next

    return {
        "blocks": mba.qty,
        "insns": insns,
        "opcodes": dict(sorted(opcodes.items())),
        "flag_reg_refs": dict(sorted(flag_regs.items())),
        "call_arities": call_arities,
        "text": printer.lines,
    }


def function_inventory() -> list[dict]:
    import ida_funcs
    import ida_segment

    out = []
    for index in range(ida_funcs.get_func_qty()):
        pfn = ida_funcs.getn_func(index)
        if pfn is None:
            continue
        out.append(
            {
                "ea": pfn.start_ea,
                "end": pfn.end_ea,
                "name": ida_funcs.get_func_name(pfn.start_ea),
                "segment": ida_segment.get_segment_name(pfn.start_ea, 0) or "",
                "is_library": bool(pfn.flags & ida_funcs.FUNC_LIB),
                "is_thunk": bool(pfn.flags & ida_funcs.FUNC_THUNK),
            }
        )
    out.sort(key=lambda f: f["ea"])
    return out


def skip_reason(entry: dict) -> str | None:
    if entry["segment"] in ("extern", ".got", ".got.plt"):
        return f"segment {entry['segment']}"
    return None


def dump_function(entry: dict, microcode_levels: list[str]) -> tuple[dict, dict]:
    import ida_funcs
    import ida_hexrays

    pfn = ida_funcs.get_func(entry["ea"])
    hf = ida_hexrays.hexrays_failure_t()
    cfunc = ida_hexrays.decompile(pfn, hf, ida_hexrays.DECOMP_NO_WAIT)
    facts = {
        "schema": SCHEMA_VERSION,
        "ea": entry["ea"],
        "end": entry["end"],
        "name": entry["name"],
        "segment": entry["segment"],
        "is_library": entry["is_library"],
        "is_thunk": entry["is_thunk"],
    }
    if cfunc is None:
        facts["status"] = "decompile_failed"
        facts["error"] = hf.desc() if hasattr(hf, "desc") else str(hf.code)
    else:
        lines = pseudocode_lines(cfunc)
        facts.update(
            {
                "status": "ok",
                "pseudocode": lines,
                "line_count": len(lines),
                "prototype": prototype(cfunc),
                "lvars": lvars(cfunc),
                "ctree": ctree_stats(cfunc),
                "warnings": [w.text for w in cfunc.get_warnings()] if hasattr(cfunc, "get_warnings") else [],
            }
        )
    micro = {"schema": SCHEMA_VERSION, "ea": entry["ea"], "levels": {}}
    for level in microcode_levels:
        micro["levels"][level] = microcode_at(pfn, level)
    return facts, micro


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("database", help="binary or .i64 to open (a scratch copy; IDA writes next to it)")
    parser.add_argument("outdir", help="per-binary output directory")
    parser.add_argument("--analyze-only", action="store_true", help="run auto-analysis, save the database, exit")
    parser.add_argument("--no-microcode", action="store_true")
    parser.add_argument("--functions", default="", help="comma-separated hex start addresses to restrict to")
    args = parser.parse_args()
    # IDA 9.5 marks getn_func/get_func as deprecated; they remain the documented stable API.
    warnings.filterwarnings("ignore", category=DeprecationWarning)

    out = Path(args.outdir)
    (out / "functions").mkdir(parents=True, exist_ok=True)
    (out / "microcode").mkdir(parents=True, exist_ok=True)

    import idapro

    if idapro.open_database(args.database, run_auto_analysis=args.analyze_only) != 0:
        print(f"[oracle] open_database failed: {args.database}", file=sys.stderr, flush=True)
        return 2

    import ida_auto
    import ida_hexrays
    import ida_kernwin

    if args.analyze_only:
        ida_auto.auto_wait()
        idapro.close_database(True)
        return 0

    if not ida_hexrays.init_hexrays_plugin():
        print("[oracle] Hex-Rays decompiler unavailable for this database", file=sys.stderr, flush=True)
        idapro.close_database(False)
        return 3

    inventory = function_inventory()
    write_json(
        out / "inventory.json",
        {
            "schema": SCHEMA_VERSION,
            "ida_version": ida_kernwin.get_kernel_version(),
            "functions": inventory,
        },
    )
    wanted = {int(x, 16) for x in args.functions.split(",") if x}
    levels = [] if args.no_microcode else MATURITIES
    for entry in inventory:
        if wanted and entry["ea"] not in wanted:
            continue
        key = ea_key(entry["ea"])
        facts_path = out / "functions" / f"{key}.json"
        if facts_path.exists():
            continue
        reason = skip_reason(entry)
        if reason is not None:
            write_json(facts_path, {"schema": SCHEMA_VERSION, "ea": entry["ea"], "name": entry["name"], "status": "skipped", "error": reason})
            continue
        write_json(out / "current.json", {"ea": entry["ea"], "name": entry["name"]})
        try:
            facts, micro = dump_function(entry, levels)
        except Exception as exc:  # one bad function must not end the run
            facts = {
                "schema": SCHEMA_VERSION,
                "ea": entry["ea"],
                "name": entry["name"],
                "status": "exception",
                "error": repr(exc),
                "traceback": traceback.format_exc().splitlines(),
            }
            micro = None
        if micro is not None:
            write_json(out / "microcode" / f"{key}.json", micro)
        write_json(facts_path, facts)
    (out / "current.json").unlink(missing_ok=True)
    idapro.close_database(False)
    return 0


if __name__ == "__main__":
    sys.exit(main())
