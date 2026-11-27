"""Per-function scorecards: one decompiled record against its ground truth.

Every metric is registered in `METRICS` with its direction, so a comparison can
say *improved* or *worse* without knowing the metric. A metric that does not
apply to a function (no struct parameter, no source body, ...) is simply absent
from that function's card, never scored 0: absence and failure stay apart.

Ground-truth metrics read the DWARF record and its facts (`dwarf.py`,
`srcfacts.py`); source-free metrics read only unlace's output, so they also
score binaries with no ground truth at all (`gt` given with no facts).
"""
from __future__ import annotations

import re
from collections import Counter

from . import cfg, textmetrics
from ..decbench import structscore as ss

# name -> (higher_is_better, description). None: informational, no direction.
METRICS: dict[str, tuple[bool | None, str]] = {
    "found": (True, "unlace lists a function at the ground-truth entry"),
    "decompiled": (True, "the function decompiled (code present, no error)"),
    "proto_exact": (True, "return type, parameter count, variadic-ness and every parameter type match (TRex 6, or 5 with the sign unjudgeable)"),
    "param_count_exact": (True, "parameter count matches"),
    "param_count_err": (False, "|predicted - true| parameter count"),
    "variadic_match": (True, "variadic-ness matches"),
    "return_trex": (True, "TRex score 0..6 of the return type"),
    "param_trex": (True, "mean TRex score 0..6 over the true parameters (missing ones score 0)"),
    "local_type_f1": (True, "multiset F1 of local types by (pointer level, primitive class and width | struct)"),
    "local_count_err": (False, "|predicted - true| local variable count"),
    "struct_field_f1": (True, "field (offset, size) F1 of struct-pointer parameters against their DWARF layout"),
    "callee_recall": (True, "share of the direct callees DWARF call sites name that the code calls"),
    "noreturn_agree": (True, "unlace's does-not-return verdict agrees with DW_AT_noreturn"),
    "addr_coverage": (True, "share of the line table's statement addresses that unlace's line mappings cover"),
    "cfg_ged": (False, "structural CFG edit distance (upper bound) to the source body"),
    "cfg_ged_norm": (False, "cfg_ged / (source nodes + edges)"),
    "cfg_exact": (True, "cfg_ged == 0"),
    "loop_count_err": (False, "|loops in the C - loops in the source|"),
    "if_count_err": (False, "|if statements in the C - if statements in the source|"),
    "switch_count_err": (False, "|switches in the C - switches in the source|"),
    "gotos": (False, "goto statements in the C"),
    "gotos_excess": (False, "gotos in the C beyond those in the source"),
    "unstructured_gotos": (False, "jumps the back-end had no form for (unstructured_gotos)"),
    "warnings": (False, "engine warnings on the function"),
    "casts": (False, "C-style casts in the C"),
    "undefined_vars": (False, "variables typed with a width-only spelling (undefined8, ...)"),
    "lines": (None, "lines of C"),
    "recompiles": (True, "the function's definition has no compiler error in decompile-project's .c (--project)"),
    "global_type_trex": (True, "TRex score of a recovered global's type (--project; binary row)"),
    "txt_flag_vars": (False, "variables carrying a condition flag in the printed C (flag-register comment, flag idiom or NZCV pack)"),
    "txt_empty_blocks": (False, "`{}` bodies in the printed C"),
    "txt_dead_stores": (False, "assignments to locals or parameters that are never read in the function (text)"),
    "txt_leaked_temps": (False, "declarations the printer marks `// temp`"),
    "txt_register_carriers": (False, "declarations tied to a machine register (`// rax`, `// reg?`)"),
    "txt_raw_stack_accesses": (False, "`*(T *)(...)` dereferences addressed off the stack or frame pointer"),
    "null_deref_sites": (False, "`*(T *)(0LL)` literals in the C (text shape, no ground truth)"),
    "impossible_lvalue_sites": (False, "loads or stores whose address is a literal under 0x1000 in the C"),
    "lost_frame_offset_sites": (False, "stack-frame-relative addresses (rsp/rbp/sp/fp/bp +/-) left in the C as pointer arithmetic"),
    "leaked_temp_decls": (False, "`vN` temporaries declared in the C with a // temp comment"),
    "stale_return_result": (False, "`return result;` sites whose result variable is not declared or not assigned"),
}

_CAST = re.compile(r"\(\s*(?:const\s+|unsigned\s+|signed\s+|struct\s+|volatile\s+)*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*\s*\**\s*\)\s*(?=[\w(*&!~-])")
_CAST_EXCLUDE = re.compile(r"\b(?:if|while|for|switch|return|sizeof)\s*$")


_NULL_DEREF = re.compile(r"\*\([^)]*\*\)\(0LL\)")
# A store or load whose address is a literal under 0x1000: leftover stack/SP
# arithmetic that propagation folded to a constant. 0LL is the null-deref row.
_IMPOSSIBLE_LVALUE = re.compile(r"\*\([^)]*\*\)\(?0x[0-9a-fA-F]{1,3}(?:LL?)?\)?\s*=")
# Stack-frame-relative addresses (rsp/rbp/sp/fp/bp +/-) that reached the C as
# pointer arithmetic. Text-shape: real inline asm can light it too.
_LOST_FRAME = re.compile(r"\*\([^)]*\*\)\([^)]*\b(?:rsp|rbp|esp|ebp|sp|fp|bp)\b\s*[+\-]")
_TEMP_NAME = re.compile(r"v_?[0-9]+")
_RESULT_ASSIGNS = ("result =", "result +=", "result -=", "result *=", "result /=", "result &=",
                   "result |=", "result ^=", "result <<=", "result >>=", "++result", "--result")


def leaked_temp_decls(code: str) -> int:
    """Declarations `vN` carrying a `// temp` comment: a temporary that was never named."""
    n = 0
    for line in code.splitlines():
        trimmed = line.strip()
        if "// temp" not in trimmed:
            continue
        decl = trimmed.split("//", 1)[0].rstrip()
        if decl.endswith(";") and any(_TEMP_NAME.fullmatch(tok) for tok in re.split(r"[^A-Za-z0-9_]", decl)):
            n += 1
    return n


def stale_return_results(code: str) -> int:
    """`return result;` sites when `result` is never declared or never assigned."""
    returns = code.count("return result;")
    if returns == 0:
        return 0
    declared = any(
        not line.lstrip().startswith("return ")
        and any(s in line for s in (" result;", " result =", " result,"))
        for line in code.splitlines()
    )
    if declared and any(s in code for s in _RESULT_ASSIGNS):
        return 0
    return returns


def count_casts(code: str) -> int:
    clean = cfg.strip_noise(code)
    n = 0
    for m in _CAST.finditer(clean):
        before = clean[:m.start()].rstrip()
        if _CAST_EXCLUDE.search(before) or (before and (before[-1].isalnum() or before[-1] in "_)]")):
            continue
        n += 1
    return n


def signature(code: str) -> tuple[str, list[str], bool] | None:
    """(return type spelling, parameter spellings, variadic) of the first definition."""
    clean = cfg.strip_noise(code)
    i = clean.find("(")
    m = None
    while i >= 0:
        head = clean[:i].rstrip()
        m = re.search(r"([A-Za-z_]\w*)\s*$", head)
        if m and m.group(1) not in ("if", "while", "for", "switch", "return", "sizeof"):
            break
        i = clean.find("(", i + 1)
    if i < 0 or m is None:
        return None
    line_start = clean.rfind("\n", 0, m.start()) + 1
    ret = clean[line_start:m.start()].strip()
    ret = re.sub(r"\b(?:static|inline|extern|__\w+|noreturn|_Noreturn)\b", " ", ret)
    ret = " ".join(ret.split())
    depth, j = 0, i
    while j < len(clean):
        if clean[j] == "(":
            depth += 1
        elif clean[j] == ")":
            depth -= 1
            if depth == 0:
                break
        j += 1
    inner = clean[i + 1:j].strip()
    params, depth, cur = [], 0, []
    for ch in inner:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            params.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        params.append("".join(cur).strip())
    variadic = "..." in params
    params = [p for p in params if p not in ("...", "void")]
    return ret or "void", params, variadic


def _param_type(decl: str) -> str:
    """`unsigned int *p` -> `unsigned int *` (the declarator's name dropped)."""
    decl = re.sub(r"\[[^\]]*\]", "*", decl)
    m = re.match(r"(.*?)([A-Za-z_]\w*)\s*$", decl)
    if m and m.group(1).strip() and not m.group(1).strip().endswith(("struct", "union", "enum")):
        return m.group(1).strip()
    return decl.strip()


def _trex(pred_spelling: str | None, gt_type: dict) -> tuple[int, bool]:
    """(score 0..6, exact) of one predicted spelling against a GT type record."""
    if pred_spelling is None:
        return 0, False
    pred = ss.parse_type(pred_spelling)
    gt = {"ptr": gt_type["ptr"], "base": gt_type["base"], "kind": gt_type["kind"],
          "unsigned": bool(gt_type.get("unsigned")), "size": gt_type.get("size")}
    if gt["kind"] == "void" and gt["ptr"] == 0:
        return (6, True) if pred["kind"] == "void" and pred["ptr"] == 0 else (0, False)
    passed, sign_unknown = ss.trex_predicates(pred, gt, gt_sign=gt_type.get("unsigned"))
    score = ss.trex_score(passed)
    return score, score == 6 or (score == 5 and sign_unknown)


def _type_key(rec: dict) -> str | None:
    if rec["kind"] in ("uncommitted", "none"):
        return None
    if rec["kind"] == "struct":
        return f"{rec['ptr']}:struct"
    cls = ss.PRIMITIVES.get(rec["base"], (rec["kind"], None))
    return f"{rec['ptr']}:{cls[0]}{'' if rec['ptr'] else cls[1]}"


def _bag_f1(pred: list[str], gold: list[str]) -> float:
    if not pred and not gold:
        return 1.0
    common = sum((Counter(pred) & Counter(gold)).values())
    if common == 0:
        return 0.0
    p, r = common / len(pred), common / len(gold)
    return 2 * p * r / (p + r)


def _field_f1(pred_fields: list[dict], gt_fields: list[dict]) -> float:
    gold = {(f["offset"], f["size"]) for f in gt_fields if f["kind"] != "pad"}
    got = {(f["offset"], f["size"]) for f in pred_fields if not f["name"].startswith("_pad")}
    if not gold:
        return 1.0 if not got else 0.0
    common = len(gold & got)
    if not common:
        return 0.0
    p, r = common / len(got), common / len(gold)
    return 2 * p * r / (p + r)


def _pred_layouts(rec: dict) -> dict:
    defs = "\n".join(t.get("definition") or "" for t in rec.get("types") or [])
    return ss.header_layouts(defs) if defs else {}


def _noreturn_claim(rec: dict) -> bool:
    """Does unlace say this function itself does not return?

    Only the function-level verdict counts: the header warning (line 1, at the entry
    address) that unlace prints for a function whose every path ends in a no-return
    call or halt. A call-site "does not return" warning says that the callee does not
    return, not this function, so it is not a claim about the record.
    """
    entry = rec.get("address")
    for w in rec.get("warnings") or []:
        text = f"{w.get('kind', '')} {w.get('message', '')}".lower()
        at_header = w.get("line") == 1 and (entry is None or w.get("address") == entry)
        if at_header and ("no-return" in text or "does not return" in text):
            return True
    head = (rec.get("code") or "").split("{", 1)[0]
    return bool(re.search(r"noreturn|_Noreturn|__noreturn", head))


def source_free(rec: dict) -> dict:
    """Metrics that need no ground truth."""
    code = rec.get("code") or ""
    out = {
        "decompiled": float(bool(code) and not rec.get("error")),
        "unstructured_gotos": float(rec.get("unstructured_gotos") or 0),
        "warnings": float(len(rec.get("warnings") or [])),
    }
    if code:
        toks = cfg.tokenize(code)
        out["gotos"] = float(sum(1 for t in toks if t == "goto"))
        out["casts"] = float(count_casts(code))
        out["null_deref_sites"] = float(len(_NULL_DEREF.findall(code)))
        out["impossible_lvalue_sites"] = float(len(_IMPOSSIBLE_LVALUE.findall(code)))
        out["lost_frame_offset_sites"] = float(len(_LOST_FRAME.findall(code)))
        out["leaked_temp_decls"] = float(leaked_temp_decls(code))
        out["stale_return_result"] = float(stale_return_results(code))
        out["lines"] = float(code.count("\n") + 1)
        for name, value in textmetrics.measure(code).items():
            out[f"txt_{name}"] = float(value)
        out["undefined_vars"] = float(sum(
            1 for v in rec.get("variables") or []
            if ss.parse_type(v.get("type") or "")["kind"] == "uncommitted"))
    return out


SOURCE_FREE_COUNTS = ("null_deref_sites", "impossible_lvalue_sites", "lost_frame_offset_sites",
                      "leaked_temp_decls", "stale_return_result")


def binary_source_free(doc: dict) -> dict:
    """The counters of SOURCE_FREE_COUNTS summed over every function of a
    decompile-all document: the only signal a binary without DWARF gets."""
    totals = {k: 0.0 for k in SOURCE_FREE_COUNTS}
    for rec in doc.get("functions") or []:
        card = source_free(rec)
        for k in totals:
            totals[k] += card.get(k, 0.0)
    return totals


def score(gt_fn: dict, rec: dict | None, ctx: dict) -> dict:
    """The scorecard of one ground-truth function. `ctx`:
    `shift` (pred address - gt address for this function), `names` (pred entry
    -> name), `gt_shift` (binary-wide pred - gt shift) and `noreturn_names`."""
    if rec is None:
        return {"found": 0.0}
    out = {"found": 1.0, **source_free(rec)}
    code = rec.get("code") or ""
    if not code or rec.get("error"):
        return out
    facts = gt_fn.get("facts") or {}

    sig = signature(code)
    variables = rec.get("variables") or []
    args = sorted((v for v in variables if v.get("kind") == "arg"),
                  key=lambda v: v.get("arg_index") if v.get("arg_index") is not None else 99)
    if sig:
        ret, sig_params, variadic = sig
        params = [v.get("type") for v in args] if args else [_param_type(p) for p in sig_params]
        gt_params = gt_fn["params"]
        out["param_count_exact"] = float(len(params) == len(gt_params))
        out["param_count_err"] = float(abs(len(params) - len(gt_params)))
        out["variadic_match"] = float(variadic == bool(gt_fn.get("variadic")))
        r_score, r_exact = _trex(ret, gt_fn["return"])
        out["return_trex"] = float(r_score)
        exact = r_exact and len(params) == len(gt_params) and variadic == bool(gt_fn.get("variadic"))
        if gt_params:
            scores = []
            for i, gp in enumerate(gt_params):
                s, e = _trex(params[i] if i < len(params) else None, gp["type"])
                scores.append(s)
                exact = exact and e
            out["param_trex"] = sum(scores) / len(scores)
        out["proto_exact"] = float(exact)

        layouts = None
        f1s = []
        for i, gp in enumerate(gt_params):
            layout = gp["type"].get("layout")
            if not layout or gp["type"]["ptr"] != 1:
                continue
            if layouts is None:
                layouts = _pred_layouts(rec)
            pred = ss.parse_type(params[i]) if i < len(params) else None
            pl = layouts.get(pred["base"]) if pred and pred["kind"] == "struct" else None
            f1s.append(_field_f1(pl["fields"], layout["fields"]) if pl else 0.0)
        if f1s:
            out["struct_field_f1"] = sum(f1s) / len(f1s)

    gt_locals = [l for l in gt_fn.get("locals") or [] if not l.get("static")]
    pred_locals = [v for v in variables if v.get("kind") in ("stack", "register")]
    if gt_locals or pred_locals:
        out["local_count_err"] = float(abs(len(gt_locals) - len(pred_locals)))
        gold = [k for k in (_type_key(l["type"]) for l in gt_locals) if k]
        got = [_type_key(ss.parse_type(v.get("type") or "")) for v in pred_locals]
        out["local_type_f1"] = _bag_f1([k for k in got if k], gold) if gold or got else 1.0

    direct = {c["target"]: c.get("target_entry") for c in gt_fn.get("calls") or []
              if c.get("target") and not c.get("indirect")}
    if direct:
        idents = set(t for t in cfg.tokenize(code))
        names = ctx.get("names") or {}
        shift = ctx.get("gt_shift") or 0
        hit = 0
        for target, entry in direct.items():
            cands = {target, "_" + target}
            if entry is not None and entry + shift in names:
                cands.add(names[entry + shift])
            if entry is not None:
                cands.add(f"sub_{entry + shift:x}")
            hit += bool(cands & idents)
        out["callee_recall"] = hit / len(direct)

    out["noreturn_agree"] = float(_noreturn_claim(rec) == bool(gt_fn.get("noreturn")))

    gt_lines = gt_fn.get("lines") or []
    if gt_lines:
        shift = ctx.get("shift") or 0
        mapped = {a for m in rec.get("line_mappings") or [] for a in m.get("addresses") or []}
        if mapped:
            out["addr_coverage"] = sum(1 for a in gt_lines if a + shift in mapped) / len(gt_lines)

    src_cfg = facts.get("cfg")
    if isinstance(src_cfg, dict) and "nodes" in src_cfg:
        body = cfg.split_definitions(code)
        if body is not None:
            try:
                pred_cfg = cfg.build(body, ctx.get("noreturn_names") or ())
            except (ValueError, RecursionError):
                pred_cfg = None
            if pred_cfg is not None:
                d = cfg.ged(src_cfg, pred_cfg)
                out["cfg_ged"] = float(d)
                out["cfg_ged_norm"] = d / max(1, src_cfg["nodes"] + len(src_cfg["edges"]))
                out["cfg_exact"] = float(d == 0)
                sc, pc = src_cfg["counts"], pred_cfg["counts"]
                out["loop_count_err"] = float(abs(sc["loop"] - pc["loop"]))
                out["if_count_err"] = float(abs(sc["if"] - pc["if"]))
                out["switch_count_err"] = float(abs(sc["switch"] - pc["switch"]))
                out["gotos_excess"] = float(max(0, pc["goto"] - sc["goto"]))
    return out
