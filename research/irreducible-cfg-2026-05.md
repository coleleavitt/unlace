# Irreducible CFG Recovery — Academic Notes (2026-05)

Research compiled while doing Phase-2 deferred follow-ups for unlace's structurer.
This file is durable project memory; intended for future authors of `node_split.rs`,
`tail_duplication.rs`, `irreducible.rs`, and the `structurer.rs` irreducible fallback.

## Primary references

1. **Janssen, J. & Corporaal, H. — "Making Graphs Reducible with Controlled Node
   Splitting"**. *ACM Transactions on Programming Languages and Systems (TOPLAS)*,
   Vol. 19, No. 6, November 1997.
   <https://dl.acm.org/doi/10.1145/267959.269971>
   - Canonical paper on minimising code growth when splitting nodes to make
     an irreducible CFG reducible.
   - Defines an *SCC-aware* node-splitting cost model: split candidates are
     ranked by `(replication_cost, entry_count_reduction, becomes-reducible)`.
   - Key result: greedy "shrink the largest SCC body" is NOT optimal; you may
     need to accept a single non-shrinking split when it *strictly reduces the
     entry count* of an SCC. After a finite sequence of such splits the SCC
     becomes a single-entry region (reducible).
   - Bound: total replicated code ≤ 2× original SCC body in worst case;
     ~10-20% for real programs.

2. **Yakdan, K., Eschweiler, S., Gerhards-Padilla, E. & Smith, M. — "No More
   Gotos: Decompilation Using Pattern-Independent Control-Flow Structuring and
   Semantics-Preserving Transformations"**. NDSS 2015 (DREAM).
   <https://net.cs.uni-bonn.de/fileadmin/ag/martini/Staff/yakdan/dream_ndss2015.pdf>
   - Replaces interval/structural pattern matching with *pattern-independent*
     structuring driven by ASTs and *condition rewriting* (Reaching Conditions,
     Condition-Aware Code Motion).
   - Eliminates gotos via:
     - **CAR** (Condition-Aware Refinement): each statement carries a Boolean
       *reaching condition* (`rc(s)`); statements with equal `rc` merge.
     - **Region duplication** (tail-duplication analogue): duplicates the
       *minimal* set of blocks needed to break entry multiplicity of an SCC.
     - **Schema-based loop refinement**: rewrites `do { ...; if(¬c) break; } while(true)`
       into `while(c)…`, hoists invariant exits, folds redundant break/continue.

3. **Yakdan, K. et al. — DREAM++ "Helping Johnny to Analyze Malware"**. IEEE
   S&P 2016. <https://net.cs.uni-bonn.de/fileadmin/ag/martini/Staff/yakdan/dream_oakland2016.pdf>
   - Adds function-pointer recovery, inlined-code de-duplication, expression
     simplification.
   - User-study evidence: naming + type phases dominate RE reading time once
     gotos are gone — supports prioritising lvar/type recovery in unlace.

4. **Schwartz, E. J., Lee, J., Woo, M. & Brumley, D. — "Native x86 Decompilation
   Using Semantics-Preserving Structural Analysis and Iterative Refinement"**.
   USENIX Security 2013 (Phoenix on top of BAP).
   <https://www.usenix.org/system/files/conference/usenixsecurity13/sec13-paper_schwartz.pdf>
   - Two new ideas over classical structural analysis:
     1. *Iterative refinement*: when no schema matches the current region,
        remove one edge (highest-replication / easiest-to-recognise back-edge)
        and retry. Each removed edge becomes a `goto`.
     2. *Semantics preservation*: every rewrite is provably behaviour-equal.
   - Data: iterative refinement reduces residual gotos by 7-12× vs plain
     structural analysis without controlled node splitting.

5. **Cifuentes, C. — "Reverse Compilation Techniques"** (PhD thesis, 1994).
   Chapter 6: interval analysis for loop detection, `T1/T2` reducibility
   transforms. Foundational.

6. **van der Spek, H. L. M., Holm, C. W. M. & Wijshoff, H. A. G. — "Using
   Hammock Graphs to Structure Programs"**. *IEEE TSE*, 2008.
   <https://backoffice.biblio.ugent.be/download/291746/451220>
   - Pre-processes CFG into *hammock graphs* (single-entry single-exit
     regions). Converts irreducible hammocks into reducible ones via
     *node replication confined to the hammock*. Locality bounds replication.

7. **dewolf — "Improving Decompilation by leveraging User Surveys"**. NDSS BAR
   2023. <https://www.ndss-symposium.org/wp-content/uploads/2023/03/bar2023-23001-paper.pdf>
   - For-loop recovery post-pass, statement-level CSE, comment hoisting.

8. **Decompilation Wiki — Gotoless and Schema-Based Structuring**.
   <https://decompilation.wiki/fundamentals/structuring/gotoless/>
   <https://decompilation.wiki/fundamentals/structuring/schema-based/>

## Mapping to unlace modules

| Concept                         | unlace file(s)                              |
| ------------------------------- | -------------------------------------------- |
| Interval analysis / dominators  | `crates/unlace-struct/src/loop_classify.rs`  |
| SCC detection (Tarjan)          | `crates/unlace-struct/src/irreducible.rs`    |
| Controlled node splitting       | `crates/unlace-struct/src/node_split.rs`     |
| Region duplication              | `crates/unlace-struct/src/tail_duplication.rs` |
| Iterative-refinement analogue   | `crates/unlace-struct/src/structurer.rs` fallback path |
| Schema-based refinement         | `loop_normalize.rs`, `while_to_for.rs`, `eager_returns.rs` |
| Condition-aware refinement      | `condition_dup.rs`, `short_circuit.rs`       |
| Goto elimination                | `goto_elim.rs`, `goto_coalesce.rs`, `goto_to_break.rs`, `goto_to_continue.rs` |
| Cross-scope back-edge safety    | `label_cleanup.rs` (fixed 2026-05-27 commit 4da39dbd6) |

## Open issues identified by this research

1. **`split_irreducible_entries` heuristic is strictly *largest-body shrinkage*.**
   Janssen-Corporaal allows accepting a split that *strictly reduces
   entry_count* of any SCC, even if `largest_body` stays the same. Multi-round
   non-shrinking splits are permitted.

2. **No iterative-refinement fallback à la Phoenix.** When `split_irreducible_entries`
   bails, the structurer emits gotos for *every* back-edge. Phoenix-style
   refinement removes one edge at a time and retries the schema match, often
   turning N gotos into 1.

3. **`tail_duplicate_aggressive` is unused.** Wiring it in (gated by a goto-count
   reduction check) is the cheapest way to lower goto counts on the medium
   corpus.

4. **`__stack_chk_fail` is not pattern-recognised.** Phoenix, DREAM, and
   Hex-Rays all detect the stack-canary prologue/epilogue and elide it (or
   emit a comment). Unlace should match the prologue `mov rax, fs:0x28; mov
   [rsp+CANARY], rax` and epilogue `mov rax, [rsp+CANARY]; xor rax, fs:0x28;
   jne stk_fail` and mark both cosmetic; codegen elides them.

## Sources to download

- <https://net.cs.uni-bonn.de/fileadmin/ag/martini/Staff/yakdan/dream_ndss2015.pdf>
- <https://net.cs.uni-bonn.de/fileadmin/ag/martini/Staff/yakdan/dream_oakland2016.pdf>
- <https://www.usenix.org/system/files/conference/usenixsecurity13/sec13-paper_schwartz.pdf>
- <https://dl.acm.org/doi/10.1145/267959.269971>
- <https://backoffice.biblio.ugent.be/download/291746/451220>
- <https://www.ndss-symposium.org/wp-content/uploads/2023/03/bar2023-23001-paper.pdf>
