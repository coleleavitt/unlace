# Prologue and Stack-Pointer Notes

Date: 2026-05-17

This note captures the local prologue/SP evidence used for the current Batch 17
implementation slice. It is the in-repo research copy for the "prologue and SP"
thread, so future work does not have to rediscover the same references.

## Local Evidence

- `research/opencode-sessions/root-exports/session-ses_2175.md` records earlier
  examples where stack-pointer bookkeeping leaked into C output, including
  prologue instructions called out as "should not appear".
- `research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_13B0F0.c` contains the
  `"resolve_stkvar_addresses result"` logging path, which confirms that stack
  variable recovery is an explicit frame-address resolution pass.
- `research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_3EEC80.c` calls
  `calc_stkvar_struc_offset`, showing that operand dtype/width and decoded
  instruction context participate in stack offset recovery.
- `research/decompiled-references/hexrays/ida_dump/hexx64/all/.calc_stkvar_struc_offset.c`,
  `.get_func_frame.c`, and `.func_has_stkframe_hole.c` are imported helper
  stubs for the same frame-model surface.

## Implementation Mapping

- `StackPointerTrackingPass` tracks SP deltas and classifies split-block
  callee-saved register stores as saved-register frame slots.
- `PrologueElimPass` now suppresses both entry-block prologues and split
  guard-block prologues such as `tmp = rsp - 8; rsp = tmp; STORE ram, tmp, rbp`.
- `recover_stack_frame` classifies saved-register slots so they are not treated
  as source locals.
- `c_printer` suppresses non-source stack slots and treats return operands in
  void functions as control-flow-only returns.
- `c_printer` now resolves `rip + absolute-target` address temps as static
  globals before array-subscript recovery, so low PIE/GOT addresses render as
  symbols or `qword_XXXX` instead of `rip`-derived array indexes.
- `c_printer` now inlines simple control-only comparison temps at
  `if`/`while`/ternary sites and keeps same-name declaration de-duplication
  from hiding a later needed `cond` declaration.
- Loop-helper cleanup now preserves single-block self-loop headers in LICM,
  IV elimination, and strength reduction; LICM also avoids mutating the CFG
  when no candidate survives the final hoistability check.
- The structurer now prints bottom-tested self-loop headers as `do/while`, and
  the printer can inline a same-base condition definition when HIR carries a
  stale SSA version for the branch condition.
- `ConditionSimplifyPass` now uses same-block raw-varnode definitions for local
  boolean folds, avoiding cross-block flag/register aliases.
- GVN rewrites are now dominance-checked, so an equivalent expression from a
  sibling path or prior loop iteration is not used as a `COPY` source unless it
  is available at the replacement site.
- `GlobalCopyPropPass` now keys cross-block copy equivalences by SSA varnode
  rather than raw register base. This keeps pre-loop constants from rewriting
  loop-header phi uses that happen to share the same machine register.
- `ConditionSimplifyPass` rebuilds var-map entries for changed instructions, so
  folded conditions such as `BoolNegate(IntEqual(a, b))` keep raw IR inputs and
  SSA input slots aligned.
- `c_printer` now has a narrow post-`do/while` return recovery for loop-carried
  Unique temps whose real SSA version is one step ahead of the printer's
  raw-HIR collection. It returns the visible loop copy when available, fixing
  stale `return result;` output in `sum_for`, `sum_while`, and `sum_do`.
- `c_printer` now renders empty-then/nonempty-else shells as inverted guards.
  This removes the loop-helper `if (...) { } else { ... }` scaffolding without
  broadening the currently gated HIR empty-if cleanup pass.
- A final C cleanup pass now prunes dead synthetic `cond` assignment segments
  and unused plain `vN` declarations after inline folding. It deliberately skips
  stack-frame/BYREF/global-looking lines, preserving the frame-provenance cases
  covered by the t232/byref printer tests.

## Remaining Work

- Move stack-frame rendering decisions out of printer fallbacks and into the
  lvar/storage provenance layer.
- Finish loop-helper induction/counter recovery and final variable splitting;
  optimized helpers now preserve the `i += 2` induction update and bound
  comparison and no longer emit stale post-loop `return result;` or empty
  then-block shells. Dead synthetic `cond`, `v34` copy noise, and initialized
  one-shot temps such as `v20` are gone from the loop helpers. Known non-void
  fallthrough helpers now get a C-valid zero tail return, removing `sum_for`'s
  final bare `return;`. The remaining loop-helper work is guard shaping, deeper
  lvar naming/splitting, and safe for-loop promotion from preserved induction
  state rather than printer-only synthesis.
