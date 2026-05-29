# Research: residual structural diffs (irreducible CFG, gotos, leaked temps)

Downloaded + text-extracted into `research/papers/` (wget2 + pdftotext).
This synthesis is from the ACTUAL paper text, not snippets.

## Papers (in research/papers/)

| file | paper | venue | relevance |
|------|-------|-------|-----------|
| `sailr_usenix2024.txt` | Ahoy SAILR! There is No Need to DREAM of C | USENIX Sec 2024 | **primary** — compiler-aware structuring; root-causes spurious gotos |
| `dream_ndss2015.txt` / `_alt` | No More Gotos (DREAM) | NDSS 2015 | condition-based refinement, goto-free structuring |
| `dewolf_arxiv2022.txt` | dewolf: Improving Decompilation via User Surveys | arXiv 2022 | readability metrics, what users want (fewer vars, fewer gotos *but keep real ones*) |
| `fuzzflesh_ecoop2025.txt` | FuzzFlesh | ECOOP 2025 | irreducible-CFG handling as a decompiler correctness oracle |
| `x87_formal_saarland.txt` | Formal Spec of x87 FP | 2008 | (already used for t54) |
| `fp_pitfalls_monniaux.txt` | Pitfalls of verifying FP | TOPLAS 2008 | x87 80-bit semantics |

## Key finding (SAILR) — reframes the whole goto problem

SAILR's thesis (abstract + §1): **"the measure of decompiler success is NOT to
eliminate all gotos"** — real source has gotos (Linux 6.1 has 3,754). Only
*spurious* gotos should be removed, and they exist because **structuring
algorithms fail to invert goto-inducing COMPILER optimizations**. So the fix is
*compiler-aware de-optimization*, not more aggressive goto-elimination (which
DREAM-style approaches over-do, harming similarity to source).

### SAILR's catalog of goto-inducing optimizations (§3.3)
Grouped by effect:
- **ISD — Irreducible Statement Duplication** (opts A, E, F: e.g. Jump
  Threading, loop-header copying, software thread-cache reordering): the
  compiler *duplicates* a subgraph guarded by a redundant condition. Example
  (Fig 4): `if(a&&b){first}; second; if(b){third}` → jump-threading duplicates
  `second` + a `goto label_1` because `b` is known-true inside `a&&b`.
- **ISC — Irreducible Statement Condensing** (opts B, C, D: cross-jumping /
  tail-merging): many equivalent statements condensed into one with new edges.
- **Misc** (G builtin inlining, H switch-lowering to nested-if, I non-returning
  functions causing bogus CFG successors).

### SAILR's ISD reversal algorithm (§4.x, the actionable recipe)
1. During structuring, identify which edges became **gotos**.
2. Find **candidate duplicate pairs**: statements with *storage equivalence*
   (same operand storage locations, same call targets).
3. Expand each candidate into a maximal **similar subgraph** via BFS + match
   statements with **Knuth-Morris-Pratt** (KMP).
4. Confirm: both subgraph tails share a common successor, and **at least one
   tail has a goto edge** (the one identified in step 1).
5. **Merge** the duplicated subgraphs back into one → the goto disappears and
   the original structured shape returns.

### Non-returning functions (opt I) — cheap, high-value
GCC drops the fallthrough edge after `exit`/`abort`/`__stack_chk_fail`/etc. If
the decompiler doesn't know a callee is noreturn, it adds a bogus successor →
goto. Fix: a noreturn-function set + CFG-successor pruning. (unlace already has
some noreturn detection — verify it covers the CRT set and prunes successors.)

## DREAM — condition-based refinement (the structuring core)
(`dream_ndss2015.txt` §IV)
1. **Reaching conditions**: for nodes ns→ne compute `cr(ns,ne)` via the CFG
   slice; a node executes iff its reaching condition holds.
2. **Acyclic regions**: represent a region as `if(cr(h,n1)){n1};…;if(cr(h,nk)){nk}`
   then **condition-based refinement** groups nodes whose reaching conditions
   share `c` vs `¬c∧R` into if/else and switch — *no gotos needed* for any
   acyclic region (this is the pattern-independent part).
3. **Cyclic regions** (loops): structure the loop body, then handle abnormal
   entries/exits by hoisting them into the reaching-condition framework rather
   than emitting goto.
4. **Irreducible graphs**: DREAM still structures via reaching conditions
   (condition duplication) rather than node-splitting+goto.

CAUTION: DREAM-style full reaching-condition structuring is a *core rewrite* of
the structurer — high blast radius. CLAUDE.md forbids casual structurer-core
edits. The SAILR-style targeted de-optimization passes (ISD merge, noreturn
successor pruning) are POST-passes on the structured output / CFG and are far
lower risk.

## Leaked temps (Hex-Rays microcode model)
From Hex-Rays' own talks (recon2018 "Decompiler internals: microcode") +
IDA docs: temp reduction = **assignment propagation** — propagate a single-def
single-use value into its sole consumer, gated by:
- the def must be **pure** (no side effects) OR the propagation must not cross
  another def/use of any operand (preserves evaluation order);
- **call results / volatile loads are NOT propagated** across other calls
  (ordering) — exactly the guard unlace's printer already applies.
Hex-Rays also does **variable mapping** (MAPDST): coalescing SSA temps with
non-overlapping live ranges into one named var. unlace has `variable_merge` +
`register_coalesce`; the residual leaked temps are mostly the *legitimately
non-foldable* call-result chains (verified in t51) plus folding gaps.

## Delegation plan (disjoint subsystems — advisor-mandated)

The structurer core is one shared hot file → do NOT parallelize edits to it.
Scope each agent to a DISJOINT crate/file:

1. **Agent A — noreturn successor pruning (SAILR opt I), CFG-level.** Lowest
   risk, isolated to noreturn analysis + CFG edge pruning in unlace-passes /
   pre-SSA. Verify CRT noreturn set (exit/abort/__stack_chk_fail/__cxa_throw/
   _Unwind_Resume/longjmp/panic handlers); prune the bogus fallthrough edge.
2. **Agent B — leaked-temp expression propagation (Hex-Rays model).** Isolated
   to the printer's fold / out-of-SSA path; extend single-def-single-use
   propagation with the pure/ordering guards; must NOT touch call-result
   ordering. Disjoint from A.
3. **Defer** the DREAM/SAILR-ISD structuring-core work as a DESIGN task (too
   high blast radius for ad-hoc agents) — write a design doc, don't rewrite the
   structurer in parallel.

Each agent: isolated worktree, run full gate set, no structurer-core edits,
commit only if green; I integrate via cherry-pick + combined re-verify.
