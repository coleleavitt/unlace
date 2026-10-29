# Hex-Rays C++ exception structuring and the unlace implementation

Date: 2026-10-29. Evidence: the hexx64 9.3sp1 decompiled dump
(`~/SiteResearch/ida-pro/hexx64-ida-dump-93sp1/all/`), the
`fixtures/{cpp_exceptions,debug_cpp_exceptions}` binaries, and current unlace
output. Function names below are dump file names (`sub_XXXX.c`).

## 1. How Hex-Rays structures try/catch

### 1.1 Where the work happens

The table decoding (MSVC `FuncInfo`, Itanium LSDA) is not in `hexx64`. It lives
in the separate `eh34` plugin (`plugins/eh34.so`, listed as missing in
`research/ida-hexrays-docs/MISSING_DUMPS_INVENTORY.md`). `hexx64` only knows a
small helper vocabulary that `eh34` puts into the microcode, and it carries
that vocabulary through the optimizer, the structurer, and the ctree:

| helper          | meaning (inferred from its uses)                              |
|-----------------|---------------------------------------------------------------|
| `__eh34_try`    | start of a protected region (`try`)                           |
| `__eh34_wind`   | start of a cleanup region (`__wind`, destructor unwinding)    |
| `__eh34_catch`  | handler entry                                                 |
| `__eh34_unwind` | cleanup handler entry                                         |
| `__eh34_throw`  | a throw expression, later a `cit_throw` statement             |

Every helper name check uses the prefix `__eh34_` (`sub_286810`, `sub_2874A0`,
`sub_1399E0`).

### 1.2 Microcode: the try start is a conditional jump

`sub_1399E0(mblock, want_try)` reads the block's tail instruction. It matches
`m_jcnd` (opcode 42) whose condition is a `mop_d` sub-instruction. The
sub-instruction may be wrapped in `m_lnot` (opcode 6), and then the function
returns -1 instead of 1. Inside is `m_call` (56) on a helper operand (`mop_h`,
type 11) named `__eh34_try` or `__eh34_wind`. With `want_try == 0`, any
`__eh34_*` helper matches.

So `eh34` makes the handler reachable with an ordinary two-way branch at the
start of the protected range:

```
jcnd  __eh34_try(...), @handler     ; or jcnd !__eh34_try(...)
```

Callers:

* `sub_139AB0(mba, blk, succ)` asks whether `succ` is the try edge of `blk`. It
  picks `succset[(sign == -1)]`, so the negated form swaps the successors.
* `sub_16AC30` and `sub_16E400` are microcode block optimizations. They return
  early when the block is an eh34 dispatch, so jump threading and block merging
  cannot destroy it.
* `sub_3120C0` builds per-block flags for the control-flow structurer. It sets
  bit `0x8` for an eh34 dispatch block and `0x18` when the condition is negated.
  The structurer therefore sees try regions as specially marked two-way blocks.

### 1.3 Ctree: `cit_try` and `cit_throw`

The statement opcodes follow the 9.x `ctype_t` numbering: 70 `cit_empty`,
71 `cit_block`, 72 `cit_expr`, 73 `cit_if`, ... 82 `cit_asm`, **83 `cit_try`**,
**84 `cit_throw`**. Helper call expressions are `cot_call` (57) on `cot_helper`
(68).

* `ctry_t` is 72 bytes (deserializer `sub_85210`, case `'S'` = 83). It holds the
  try body (`cblock_t`, +0), `catchs` (`qvector<ccatch_t>`, +24/+32/+40), two
  32-bit state numbers (+48, +56), and an `is_wind` flag (+64). The
  serialization keys are `"try.size"`, `"block.size"` and `"catchexps.size"`
  (`sub_85210`, `sub_83310`).
* `ccatch_t` is 48 bytes: a handler `cblock_t` plus a vector of catch
  expressions (the caught object and its type).
* The verifier `sub_325CD0` enforces:
  * a `__wind` block has exactly one catch, and that catch has no
    expressions (errors 0xCDE3, 0xCDE4);
  * a `try` has at least one catch (error 0xCE02).
* The printer `sub_269460` prints keyword `off_4E0060[83]` (`try`). It prints
  `__wind` instead when `is_wind` is set. `sub_1AF8F0` holds the matching
  syntax-element text (`"try"`).
* `sub_35D930` counts try, wind and catch statements, and `sub_35D980` counts
  remaining `__eh34_*` calls. `sub_368430` prints them as the debug trailer
  `// #eh34_calls=%d #try=%d #catch=%d #wind=%d #gotos=%d`.

### 1.4 Ctree cleanup

`sub_28E690` is the per-statement cleanup visitor. Its eh34 rules:

* `sub_28C4D0`: a `cit_expr` that calls helper `__eh34_throw(x)` becomes
  `cit_throw` with operand `x`.
* `sub_289100`: a statement that calls `__eh34_catch` or `__eh34_unwind` and
  carries a label hands the label to a new or neighboring `cit_empty`. The
  marker can then be removed without losing goto targets.
* `sub_2874A0` refuses to fold an `if` whose condition is an `__eh34_` call.

### 1.5 Related options

* `sub_F5430` recognizes `_Unwind_SjLj_Register` / `_Unwind_SjLj_Unregister`
  (SjLj exception frames).
* `sub_33D120` has the option "Keep code that sets up and removes exception
  frames, e.g. calls to `_Unwind_SjLj_Register`". By default such code is
  hidden.
* `sub_1D3280` recognizes MSVC x86 `EH_prolog` / `EH_epilog` thunks.

## 2. Unlace before this change

* `unlace_loader::gcc_except_table` decoded the LSDA. The pipeline function
  `populate_eh_landing_pads` filled `SsaFunction::eh_landing_pads`,
  `eh_landing_pad_catches` and `eh_cleanup_landing_pads`.
* Nothing branches to a landing pad, so its blocks were unreachable. SSA left
  them unrenamed and the structurer never emitted them. The old heuristic
  `wrap_landing_pads` split a HIR sequence at a pad's first statement, so it
  never fired on real binaries. Its only tests used synthetic CFGs in which a
  pad was a normal branch target. On `debug_cpp_exceptions` the whole handler
  was missing from the output.
* LSDA decode bugs:
  * Action filter 0 (a cleanup) was recorded as `catch (...)`.
  * Imported typeinfo (`DW.ref._ZTISt9exception`, a relocated slot that holds
    zero in the file) also decoded to 0, which is the catch-all value.
* The printer rendered an all-catch-all `TryCatch` as MSVC `__try/__except`.
* Constant `CBRANCH`es survived SCCP. The structurer then printed them with
  the fallback condition (`int v0; // reg?` and `if (v0)`).

## 3. What is implemented

The implementation follows the Hex-Rays design (section 1.2 and 1.3):

1. **`unlace_ir::eh`** (new). This is the shared IR shape, modeled on
   `unlace_ir::syscall`: `CALLOTHER(EH_TAG, EhHelper)` with
   `EhHelper::{Try, Exception, Selector}`. `landing_pad_data_regs(arch)` gives
   the registers that carry the exception pointer and the selector
   (x86-64: rax/rdx, x86: eax/edx, AArch64: x0/x1).
2. **`unlace_struct::eh_dispatch::install_eh_dispatch`** (new, runs before SSA).
   For each catch landing pad it inserts a dispatch block in front of the try
   start: `flag = __eh_try(); CBRANCH pad, flag` (true: handler, false: try
   body). It also prepends `exception = __eh_exception()` and
   `selector = <filter>` to the pad. The selector is a constant when every call
   site names exactly one catch clause and no cleanup. Otherwise it is
   `__eh_selector()`. With a constant, SCCP folds the pad's
   `cmp rdx, 1; jne _Unwind_Resume` dispatch.
3. **Pipeline** (`unlace-cli`). `catch_landing_pads` groups the LSDA call sites
   by pad. The try start is the first call site of the pad. Cleanup-only pads
   are left alone. Pads and try starts become block leaders in
   `build_function_from_insns`, then `install_eh_dispatch` runs.
   `function_lsda` now owns the LSDA lookup, and `populate_eh_landing_pads`
   uses it as well.
4. **`recover_try_catch`** runs right after region structuring, before any
   other HIR pass. It rewrites every `if` on a `__eh_try` flag into
   `HirNode::TryCatch` (false arm = try body, true arm = handler) and drops the
   flag definition. This mirrors the `cit_if` to `cit_try` step.
5. **SCCP** now turns a `CBRANCH` with a constant condition into a `BRANCH` and
   drops the dead edge and its phi inputs (`fold_constant_branches`). This is
   part of standard Wegman-Zadeck SCCP. It removes the selector dispatch, and it
   also fixes the garbage `reg?` conditions noted in section 2.
6. **Loader fixes**:
   * Filter 0 is a cleanup, not a catch clause.
   * An indirect type-table slot that has a relocation stays the slot address.
   * The pipeline names the type from the relocation symbol
     (`_ZTISt9exception` becomes `std::exception`).
7. **Printer**:
   * `__eh_*` helpers render as `__eh_try()` and similar.
   * A catch-all prints as C++ `catch (...)`, not `__except`.
   * The `__cxa_begin_catch` result names the caught object, even when
     `__eh_exception()` definitions or dead statements come before the call.
8. **Removed**: the unreachable-pad heuristic (`structure_with_landing_pads*`,
   `wrap_landing_pads`, and the 6 tests that drove it).
   `structure_with_options` lost its `landing_pad_addrs` parameter.

### Result on `debug_cpp_exceptions` (`safe_call`)

```c
    try {
        v3 = may_throw(x);
        v7 = 0;
    } catch (struct std__exception v4) {
        v_24 = v4;
        ...
        v10 = v_24->__vftable->method_2();
        v5 = printf("caught: %s\n", (char *)v11);
        v7 = 0xffffffff;
        /* end catch */
        v6 = __cxa_end_catch();
    }
    result = (_DWORD)v7;
    return result;
```

Before this change, the output stopped after `v2 = 0; return result;` and the
handler was missing.

The `-O2` `cpp_exceptions` fixture splits the handler into
`safe_call(int) [clone .cold]`. Two pads (filters `[0,1]` and `[1]`) both jump
to one shared selector dispatch, so the output nests two `try` blocks. Each
catch arm holds only its pad prologue, and the shared
`if (sel != 1) _Unwind_Resume(...) else { begin_catch ... }` follows the outer
`try`. The control flow is correct but not idiomatic.

## 4. Gaps and next steps

1. **Cleanup pads (`__wind` / `__unwind`)**. Done (section 5): cleanup-only
   pads dispatch on `EhHelper::Wind` and print as `__try { } __finally { }`.
   Hex-Rays prints `__wind { } __unwind { }`; the printer keyword is the
   remaining difference.
2. **`throw` statements**. `__cxa_allocate_exception` + ctor + `__cxa_throw`
   should become `throw T(...)`, like `sub_28C4D0` does for `cit_throw`.
3. **Multiple catch clauses on one pad**. The selector dispatch inside the pad
   (`if (sel == 1) ... else if (sel == 2) ...`) should be split into one catch
   arm per type filter. Today every arm shares the whole handler body (the
   behavior of the old `catch_arms_for_landing_pad`).
4. **Shared dispatch across pads** (the `.cold` case above). Merge pads that
   reach one selector dispatch into a single try, or move the dispatch into the
   handler.
5. **Catch parameter rendering**. Today it is `catch (struct std__exception v4)`.
   It should be `catch (const std::exception &e)`. The binding variable is
   still declared at function scope, the `struct` keyword and sanitized `__`
   names come from the RTTI naming path, and the `__cxa_end_catch()` call is
   still printed.
6. **MSVC**. C-style SEH (`__C_specific_handler`) is done (section 5).
   C++ EH (`__CxxFrameHandler3/4`) is not: `cpp_eh.rs` / `seh_lower.rs` stay
   `unwired`, and the `FuncInfo` `pIPtoStateMap` walk is still needed to turn
   state numbers into addresses. After that, the same dispatch shape can
   serve MSVC x64 catch funclets. `unlace_passes::msvc_seh` (also `unwired`)
   is a dead end: it annotates `SsaFunction::seh_regions`, which nothing
   reads, and it decodes `HandlerAddress == 1` as `__finally`; in the real
   scope table `1` is `EXCEPTION_EXECUTE_HANDLER` and `JumpTarget == 0`
   marks a `__finally` funclet.
7. **Pre-existing issues seen on these fixtures**:
   * `_Noreturn` on `safe_call` (noreturn analysis counts unreachable
     `_Unwind_Resume` blocks).
   * `--x; if (x != 1)` after `sub/jne` (the condition uses the value before
     the decrement).
   * The `[rsp+0]` spill renders as an undefined temp.

## 5. Update 2026-10-29: cleanup pads and MSVC `__try` / `__except`

Measured on `fixtures/{cpp_exceptions,debug_cpp_exceptions}` and on a
`clang-cl /O1` PE built from `__try`/`__except`/`__finally` test functions.

1. **One dispatch shape, three handler kinds.** `unlace_struct::LandingPad`
   carries a `LandingPadKind`: `Catch { selector }` (as before), `Cleanup`
   (an LSDA pad no call site names a catch clause for), and
   `SehExcept { filter }` (an MSVC scope record). `install_eh_dispatch` emits
   `EhHelper::Try`, `EhHelper::Wind`, or `EhHelper::Except` (whose third
   operand is the filter's `HandlerAddress` encoding, see
   `unlace_ir::eh::SehFilter`), and `recover_try_catch` turns the dispatch
   `if` into `HirNode::TryCatch`, `HirNode::TryFinally`, or the new
   `HirNode::TryExcept { try_body, filter, except_body }`. The printer renders
   `__try { } __except (EXCEPTION_EXECUTE_HANDLER) { }` or
   `__except (sub_1058()) { }` for a filter funclet. MSVC handlers receive no
   `__eh_exception` / `__eh_selector` registers.
2. **Loader.** `unlace_loader::seh::SehFunction` now carries the handler VA
   and the decoded `__C_specific_handler` scope table (`SehScope`,
   `SehScopeHandler::{Except, Finally}`), from the full `UNWIND_INFO` record.
   The table is accepted only when every record is a well-formed sub-range of
   the function, which rejects `__CxxFrameHandler3` (`FuncInfo` RVA) and
   `__GSHandlerCheck` (cookie offset) data. `__finally` scopes are decoded
   but not lowered: their funclet is outlined (`JumpTarget == 0`,
   `HandlerAddress` = funclet), and clang inlines a copy on the normal path.
3. **Layout edges around a handler.** The lifter does not know that
   `__cxa_throw` before a pad and `_Unwind_Resume` at its end are noreturn, so
   the pad gets a layout fall-through edge in and out. Four small rules keep
   those edges from distorting the structure:
   * `build_cfg` never falls through into a dispatch block (the last lifted
     block used to fall into the dispatch appended after it and create a
     fake loop through the pad);
   * `install_eh_dispatch` removes the pad from the successor lists of
     blocks that only fall into it, so the SSA passes do not see the pad as
     live along that path;
   * the structurer never takes a handler as the join of a dispatch `if`;
     the join is the post-dominator of the protected arm, else the first
     non-handler candidate (`find_join_point`, `eh_handlers`), and handlers
     are never goto targets. Without this the pad post-dominated a throwing
     try body and was emitted after an `if` with an empty arm, and a
     noreturn pad let the protected arm swallow the outer join;
   * the call-site scans that walk back from a call for its argument setup
     (`callee_guess::site::window_before`, `vararg_detect`) cross an
     exception dispatch block, since the try start splits the call off from
     its setup.
4. **Result.** `may_throw` prints
   `__try { ctor; __cxa_throw } __finally { __cxa_free_exception; _Unwind_Resume }`
   and `safe_call`'s catch arm holds
   `__try { printf; __cxa_end_catch } __finally { __cxa_end_catch; _Unwind_Resume }`,
   with the `result = v7; return result` join back after the `try`. On the
   PE test, `__try { result = work(); } __except (EXCEPTION_EXECUTE_HANDLER) { return -1; } return result;`
   and `__except (sub_140001058())` for an expression filter. The golden
   `tests/golden/expected/cpp_exceptions.c` was refreshed for this.
