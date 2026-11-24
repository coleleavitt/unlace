"""Heuristic prefilter / scoring for angr-vs-unlace comparisons.

This is the cheap, deterministic ranking that orders the sweep's opportunities so the
expensive judgment (is the reference *actually* better, and what ONE unlace feature closes
the gap) can focus on the top of the list. The real decision is made by an LLM (the
worker / decider) reading the ranked backlog -- this module only sorts.

Scoring weights structural wins by how much they matter for decompiler quality:
switch/loop recovery and goto/label elimination outrank mere line-count wins.
"""
from __future__ import annotations

# Maps a signal phrase fragment to (points, opportunity-kind, hint about existing coverage).
_WEIGHTS = [
    ("recovered a switch",       5, "switch-recovery",  "check loweredswitch / switchmodbound (S2 switch-model)"),
    ("recovery-failure marker",  4, "recovery-failure", "unlace aborted/failed structuring here"),
    ("fewer gotos",              3, "goto-reduction",   "uncovered: control-flow structuring (no unlace option yet)"),
    ("recovered more loops",     3, "loop-recovery",    "uncovered: loop structuring"),
    ("fewer labels",             2, "label-reduction",  "uncovered: control-flow structuring"),
    ("cast noise",               1, "type-cleanup",     "partial: see type-facing options"),
    ("shorter",                  1, "conciseness",      "uncovered: structuring / expression folding"),
]


def classify(comp: dict) -> dict:
    """Score one comparison dict (ComparisonResult.to_dict()).

    Returns {score, reasons, kinds, covered_hint, comparable}. A non-comparable result
    (one side failed) is scored 0 but tagged so the sweep can surface it separately --
    a unlace failure where the reference succeeds is itself an opportunity.
    """
    sigs = comp.get("signals", []) or []
    score = 0
    reasons = []
    kinds = []
    hints = []
    for sig in sigs:
        for frag, pts, kind, hint in _WEIGHTS:
            if frag in sig:
                score += pts
                reasons.append(sig)
                if kind not in kinds:
                    kinds.append(kind)
                if hint not in hints:
                    hints.append(hint)
                break

    # honor a precomputed flag (the sweep drops the heavy texts before ranking)
    if "comparable" in comp:
        comparable = bool(comp["comparable"])
    else:
        comparable = bool(comp.get("ref_text")) and bool(comp.get("unlace_text"))
    if not comparable:
        # reference produced output but unlace failed entirely -> a strong, separate signal
        unlace_failed = comp.get("unlace_failed")
        if unlace_failed is None:
            unlace_failed = bool(comp.get("ref_text")) and not comp.get("unlace_text")
        if unlace_failed:
            score = max(score, 4)
            kinds.append("unlace-failed")
            reasons.append("unlace produced no output (%s)" % (comp.get("unlace_error") or "?"))
            hints.append("unlace could not decompile this function at all")

    return {
        "score": score,
        "reasons": reasons,
        "kinds": kinds,
        "covered_hint": "; ".join(hints) if hints else "",
        "comparable": comparable,
    }


def rank(comparisons):
    """Sort a list of comparison dicts by descending opportunity score.

    Returns a list of {rank, score, reasons, kinds, covered_hint, ...comparison-summary}.
    """
    scored = []
    for comp in comparisons:
        c = classify(comp)
        scored.append((c, comp))
    scored.sort(key=lambda t: (t[0]["score"], len(t[0]["reasons"])), reverse=True)

    ranked = []
    for i, (c, comp) in enumerate(scored, 1):
        ranked.append({
            "rank": i,
            "score": c["score"],
            "kinds": c["kinds"],
            "reasons": c["reasons"],
            "covered_hint": c["covered_hint"],
            "comparable": c["comparable"],
            "test_name": comp.get("test_name", ""),
            "arch": comp.get("arch"),
            "custom_options": comp.get("custom_options"),
            "confidence": comp.get("confidence"),
            "selector": comp.get("selector"),
            "func_name": comp.get("func_name"),
            "func_addr": comp.get("func_addr"),
            "binary": comp.get("binary"),
            "unlace_mode": comp.get("unlace_mode"),
            "ref_metrics": comp.get("ref_metrics", {}),
            "unlace_metrics": comp.get("unlace_metrics", {}),
            "signals": comp.get("signals", []),
            "ref_error": comp.get("ref_error"),
            "unlace_error": comp.get("unlace_error"),
        })
    return ranked
