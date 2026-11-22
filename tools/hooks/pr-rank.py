#!/usr/bin/env python3
"""Rank open coleleavitt/unlace PRs by what merging them buys and how cheap they are to review.

  pr-rank.py [--author @me] [--repo OWNER/NAME] [--json out.json] [--issue N]   (markdown table on stdout; --issue updates an issue)

Signals per PR: measured impact claims in the body (before/after rows, "a -> b" deltas, datatest
moves), size, area (from touched paths), CI state, mergeability, stack position (what it is
stacked on, what it unblocks) and age. The score is a sort key, not a verdict; the JSON carries
every field so an LLM or a person can re-rank.
"""
import argparse, json, re, subprocess, sys
from datetime import datetime, timezone

REPO = "coleleavitt/unlace"
AREAS = [  # first match wins
    ("tests/stages", "tests"), ("docs/", "docs"),
    ("unlace-analysis", "loader"), ("p0_knowledge", "options"), ("p1_", "lift"), ("p2_", "lift"),
    ("p3_", "bandb"), ("p4_", "bandb"), ("p5_", "bandb"), ("p6_", "bandb"),
    ("p7_", "structure"), ("p8_", "structure"), ("p9_", "emit"),
    ("substrate", "ir"), ("infra", "ir"), ("specs/", "sleigh"), ("unlace-sleigh", "sleigh"),
    ("scripts/", "tooling"), (".github", "tooling"),
]
PLATFORMS = [("swift", "apple"), ("objc", "apple"), ("macho", "apple"), ("dyld", "apple"),
             ("kernelcache", "apple"), ("aarch64", "arm"), ("arm64", "arm"), ("/arm", "arm"), ("thumb", "arm"), ("cortex", "arm-firmware"),
             ("pe_", "windows"), ("pdb", "windows"), ("msvc", "windows"), ("dwarf", "elf"),
             ("elf", "elf"), ("uefi", "uefi"), ("golang", "go"), ("gotypes", "go")]


def gh(*args):
    return json.loads(subprocess.run(["gh", *args], check=True, capture_output=True, text=True).stdout)


def impact(body):
    deltas = re.findall(r"(\d[\d,.]*)\s*(?:->|→)\s*(\d[\d,.]*)", body)
    rows = sum(1 for line in body.splitlines() if line.startswith("|") and re.search(r"\d", line) and not set(line) <= set("|-: "))
    datatests = re.search(r"(\d+)\s*/\s*675", body)
    return {"deltas": len(deltas), "table_rows": rows,
            "datatests_moved": int(datatests.group(1)) if datatests else None,
            "measured": bool(deltas or rows)}


def area_of(files):
    seen = {}
    for f, w in files:
        if "/tests/" in f or "/fixtures/" in f or f.endswith((".json", ".md", ".xml", ".toml")):
            continue
        for key, a in AREAS:
            if key in f:
                seen[a] = seen.get(a, 0) + w
                break
    core = {k: v for k, v in seen.items() if k not in ("tests", "docs")}
    return max(core, key=core.get) if core else (max(seen, key=seen.get) if seen else "other")


def platform_of(text):
    t = text.lower()
    return sorted({p for key, p in PLATFORMS if key in t})


def ci_state(rollup):
    concl = [(c.get("conclusion") or c.get("status") or "").upper() for c in rollup or []]
    if not concl:
        return "none"
    if any(c in ("FAILURE", "ERROR", "CANCELLED", "TIMED_OUT") for c in concl):
        return "failing"
    if all(c in ("SUCCESS", "NEUTRAL", "SKIPPED") for c in concl):
        return "green"
    return "pending"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--author", default="@me")
    ap.add_argument("--json")
    ap.add_argument("--repo", default=REPO, help="repository whose open PRs are ranked")
    ap.add_argument("--issue", help="issue number (in --repo) to update with the table")
    a = ap.parse_args()
    prs = gh("pr", "list", "-R", a.repo, "--state", "open", "--author", a.author, "--limit", "200", "--json",
             "number,title,additions,deletions,changedFiles,mergeable,createdAt,headRefName,body,statusCheckRollup,isDraft,files")
    by_num = {p["number"]: p for p in prs}
    rows = []
    now = datetime.now(timezone.utc)
    for p in prs:
        body = p["body"] or ""
        files = [(f["path"], f["additions"] + f["deletions"]) for f in p.get("files") or []]
        stacked = sorted({int(n) for n in re.findall(r"stacked on\s+#(\d+)", body, re.I)} & set(by_num))
        imp = impact(body)
        size = p["additions"] + p["deletions"]
        rows.append({
            "number": p["number"], "title": p["title"].removeprefix("[AUTOMATED] "), "branch": p["headRefName"],
            "area": area_of(files), "platforms": platform_of(p["title"] + " " + " ".join(f for f, _ in files)),
            "size": size, "files": p["changedFiles"], "mergeable": p["mergeable"], "ci": ci_state(p["statusCheckRollup"]),
            "draft": p["isDraft"], "stacked_on": stacked, "age_days": (now - datetime.fromisoformat(p["createdAt"].replace("Z", "+00:00"))).days,
            **imp})
    for r in rows:
        r["unblocks"] = sorted(x["number"] for x in rows if r["number"] in x["stacked_on"])
    for r in rows:
        ready = r["mergeable"] == "MERGEABLE" and r["ci"] == "green" and not r["stacked_on"] and not r["draft"]
        s = 0.0
        s += 3 if ready else (-2 if r["mergeable"] == "CONFLICTING" or r["ci"] == "failing" else 0)
        s += 2 if r["measured"] else 0
        s += min(r["deltas"], 5) * 0.3
        s += 1.5 * len(r["unblocks"])
        s -= 1 if r["stacked_on"] else 0
        s -= min(r["size"] / 2000, 3)
        s += 0.5 if r["datatests_moved"] == 0 else 0
        r["ready"], r["score"] = ready, round(s, 2)
    rows.sort(key=lambda r: -r["score"])
    if a.json:
        json.dump(rows, open(a.json, "w"), indent=1)
    out = ["| # | PR | area | platform | size | state | measured | stack | score |", "|---|---|---|---|---|---|---|---|---|"]
    for i, r in enumerate(rows, 1):
        state = "ready" if r["ready"] else f'{r["mergeable"].lower()}, CI {r["ci"]}'
        stack = ("on " + ", ".join(f"#{n}" for n in r["stacked_on"])) if r["stacked_on"] else ""
        if r["unblocks"]:
            stack += ("; " if stack else "") + "unblocks " + ", ".join(str(n) for n in r["unblocks"])
        meas = f'yes ({r["deltas"]} deltas)' if r["measured"] else "no"
        out.append(f'| {i} | #{r["number"]}: {r["title"][:70]} | {r["area"]} | {", ".join(r["platforms"])} | {r["size"]} | {state} | {meas} | {stack} | {r["score"]} |')
    md = "\n".join(out)
    print(md)
    if a.issue:
        body = ("[AUTOMATED] Open PRs ranked by `pr-rank.py` (impact claims, size, CI, conflicts, stack). "
                f"PR numbers are {a.repo} pull requests. Generated " + now.strftime("%Y-%m-%d %H:%M UTC") + ".\n\n" + md)
        subprocess.run(["gh", "issue", "edit", a.issue, "-R", a.repo, "--body", body], check=True)


if __name__ == "__main__":
    sys.exit(main())
