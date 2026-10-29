# Hex-Rays Type Recovery (hexx64 9.3sp1)

Reverse-engineering notes on how Hex-Rays recovers types. Souremote code execution: the hexx64 9.3sp1
decompiled dump (`~/SiteResearch/<ida>-pro/hexx64-<ida>-dump-93sp1/all`, 8401 functions;
addresses match `research/hexrays-algorithms-deep.md`). Studying the plugin is permitted by
EULA section 2.1.

**Evidence caveat.** The decompiled dump drops the arguments of every kernel import call
(`get_tinfo_property(...)`, `interr()`, ...). To recover them, the sections below disassembled
the shipped `hexx64.so` with objdump and read the immediates loaded before each PLT call
(`mov esi/edx`). That compiled code is a slightly different build. Functions were matched to the dump
by INTERR codes and by the multiset of imports each one calls. Each claim is labelled
`[confirmed]`, `[inferred]` or `[guess]` (section 5 uses `[C]`/`[I]`/`[G]`). The 1879
recovered GTA/STA/`create_tinfo` call sites are in `research/hexrays-type-recovery-gta-callsites.tsv`.

## Overview: where type recovery runs

Most type recovery runs at the **ctree** level, not in microcode. It runs inside one
fixpoint loop:

```
sub_2523C0  (ctree build + retype loop, max 10 rounds)   [confirmed: `for (i = 0; i != 10; ++i)`]
  repeat:
    rebuild ctree from mba
    sub_270860  CPA: pointer-arithmetic correction (CMAT_CPA=5)
                  -> cot_idx / cot_memptr / cot_memref (S2, S3, S4)
                  -> records per-object accesses (sub_27E790) for later widening
    sub_2AC820  one lvar typing round: weighted constraint system (S1)
    sub_27D2C0  apply widened globals/frame members (sub_27BC20 / sub_27AE10) (S3, S4)
  until neither sub_2AC820 nor sub_27D2C0 changed anything
  last resort: sub_29E310 scalar fallback (get_scalar_bt, CVAR_PARTIAL)
```

Function signatures are mostly decided earlier, in microcode, by `mba_t::examine_calls`
(`sub_FA4C0`). Prototype evidence from call sites then flows back to callees through
`set_type` merging and `set_tinfo` (S5).

### Corrections to earlier notes

- `sub_40FBC0` is the **x86 microcode generator**, not an "expression/type inference dispatcher".
  `CLAUDE.md` and older session notes have this wrong. (S2)
- `sub_E0600` (`get_struct_operand` + `udt_type_data_t__get_best_fit_member`) is **not** the
  ctree member resolver. It resolves an indirect-call target from a user struct-offset operand.
  The real member path is `sub_273A40` -> `sub_272C50` (S3). The doc comment in unlace's
  `crates/unlace-output/src/c_printer/member_path.rs` cites `sub_E0600` incorrectly.
- `score_tinfo` and `compare_tinfo` are only **tie-breakers** in lvar typing. The main ranking
  is support from compatible votes plus an "unknownness" penalty (`sub_32E340`). (S1)
- Hex-Rays does **not** automatically build structs for pointer parameters. Automatic struct and
  array creation applies only to memory objects: globals and frame members. A new struct for
  a pointer comes only from the user action "Create new struct type" (`sub_399920`). Kuna's
  `kuna_structsynth` follows the opposite policy. (S3, S4)

### Function index (central functions)

| Function | Lines | Role | Section |
|---|---|---|---|
| `sub_2523C0` | 268 | ctree build + retype fixpoint (max 10 rounds) | S1, S2, S4 |
| `sub_2AC820` | 224 | one lvar typing round | S1 |
| `sub_2AA180` | 1169 | constraint-generation visitor (edges between type terms) | S1, S2 |
| `sub_2A1C00` / `sub_2A1180` | 335 / 318 | candIDAte collection and voting per lvar | S1 |
| `sub_2A3780` | 699 | solver: pick candIDAte, replace type only if less unknown | S1, S2 |
| `sub_29E310` | 61 | scalar fallback | S1 |
| `sub_270860` | 222 | CPA driver | S2, S3, S4 |
| `sub_276380` | 890 | CPA `leave_expr` per-operator dispatcher | S2, S3, S4 |
| `sub_273A40` | 916 | access-path walker (array/member peel loop) | S3, S4 |
| `sub_272C50` | 449 | `cot_memptr`/`cot_memref` builder | S3 |
| `sub_272540` | 300 | union member selection | S3 |
| `sub_270E10` | 429 | `cot_idx` builder; grows the indexed object | S3, S4 |
| `sub_26B8E0` / `sub_26AAE0` | 205 / 87 | offset linearisation / scale % elsize test | S2, S4 |
| `sub_26E0C0` | 724 | residual index + scale normalisation | S2 |
| `sub_246B40` | 309 | retype-or-cast (cast insertion) | S2 |
| `sub_27E790` | 67 | record accesses per memory object | S3, S4 |
| `sub_27BC20` / `sub_27AE10` | 793 / 567 | widen objects; synthesize arrays / structs | S3, S4 |
| `sub_2309F0` | 354 | create or retype frame members (`_BYTE[n]`) | S3, S4 |
| `sub_FA4C0` | 263 | `mba_t::examine_calls` | S5 |
| `sub_F4760` | 495 | `build_callinfo` | S5 |
| `sub_E9680` | 742 | callee prototype lookup order | S5 |
| `sub_E1F80` | 1098 | argument guesser for unknown callees | S5 |
| `sub_EB240` | 826 | printf/scanf format-string varargs | S5 |
| `sub_37E500` -> `sub_36ECF0` | – | the function's own calling convention | S5 |
| `sub_381E90` -> `sub_37EEC0` | – | `set_type` rank-aware merge (interprocedural) | S5 |

### What unlace lacks (summary across sections)

- Lvar typing is a flat `PrimitiveType` join (a conflict gives Unknown). It has no votes, no
  unknownness ordering, no pointee/shape terms, and no rebuild loop. (S1)
- `PrimitiveType::Ptr` has no pointee, and `PointsTo` constraints in `type_constraint_solver`
  are not acted on. (S2)
- Member paths are printer-only and come only from DWARF pointees. There is no CPA pass, no
  union choice, no `ADJ`, no nearest-member fallback, and no object widening. Two resolvers
  duplicate each other. (S3)
- Arrays: unlace has stride annotation, fusion of 3 or more stack slots, and subscripts at
  print time. It lacks the access map, global widening and divisor normalisation. (S4)
- Signatures: unlace lacks argloc types, rank-aware merge, minimum stack arity over all call
  sites, purged bytes, and a `__usercall` producer. Today `UsercallSpec` exists only in the
  printer. (S5)

---

## Hex-Rays 9.3sp1 type propagation (hexx64): the ctree-level type-inference engine

Scope: how Hex-Rays moves types between lvars, expressions, call arguments/returns and
through assignments/arithmetic; how it ranks competing types; where `score_tinfo`,
`compare_tinfo`, `lexcompare_tinfo` and `guess_tinfo` sit; and the fixpoint driver.
Lvar allocation, the microcode pipeline and the printer are covered elsewhere and are not repeated.

Evidence: `hexx64` 9.3sp1 examined dump (one file per function). Line counts are dump lines.
Confidence tags: **[confirmed]** = read directly from the examined code; **[inferred]** = follows
from the code plus SDK layouts but some detail is elided; **[guess]** = plausible, not proven.

> Dump caveat. Kernel imports are printed without arguments (`get_tinfo_property()`,
> `compare_tinfo()`, `score_tinfo()`), because the dump has no import prototypes.
> So the `GTA_*` property id, the `TCMP_*` flags and the operand order are **not
> recoverable** from this dump. Below, the meaning of a `get_tinfo_property()` call is
> inferred from how its result is masked against `type_t` bits from `typeinf.hpp`:
>
> | mask test on result | meaning (`typeinf.hpp`) |
> |---|---|
> | `(v & 0xF) == 0xA / 0xB / 0xC / 0xD` | `BT_PTR` / `BT_ARRAY` / `BT_FUNC` / `BT_COMPLEX` |
> | `(v & 0x3F) == 0x30` | `BT_UNKNOWN` (`_UNKNOWN`) |
> | `(v & 0x3F) == 1` | `BT_VOID` (`void`, e.g. `void *` pointee) |
> | `(v & 0x3F) == 0x2D` | `BTF_ENUM` |
> | `(v & 0x3F) == 0x3D` | `BTF_TYPEDEF` (named type) |
> | `(v & 0xE) == 0 && (v & 0x30) != 0` | sized placeholder `_BYTE/_WORD/_DWORD/_QWORD/_OWORD/_UNKNOWN` |
> | `(v & 0x3E) != 0 && (v & 0xF) <= 8` | integral or `bool` (not `void`, not `BT_UNK`) |
> | `(v & 0xF) == 9` | `BT_FLOAT` |
> | `(v & 0x40)` on a pointee | `BTM_CONST` |
>
> One helper predicate appears everywhere: `sub_29A1B0` (13 lines) = "type is concrete":
> not empty, not a sized placeholder, and its resolved type is not `BT_UNKNOWN`
> **[confirmed]**. I write it `is_concrete(t)` below.

### 0. Big picture

Hex-Rays type propagation is **not** a microcode/SSA dataflow pass. It runs on the
**ctree**, after lvar allocation, inside the ctree-building driver. One round is a
**weighted constraint system**:

1. A ctree visitor walks every expression and emits **edges** `(term_a, term_b, relation)`
   into an ordered set. Identical edges are merged and their **weight** grows.
2. Edges touching an untyped lvar (or the return value) turn into **candidate types** for
   that lvar. Each candidate carries a **vote count** and an **"unknownness" penalty**.
3. Per lvar, the candidates are sorted by penalty, then each candidate's **support** (its
   own votes plus the votes of compatible candidates) picks the winner.
4. The winner replaces the current lvar type only if it is strictly less unknown
   (or wins a `score_tinfo`/`compare_tinfo` tie-break). Signedness is decided by a
   separate signed/unsigned vote.
5. A second phase pushes call-site evidence **backwards into callee prototypes**.
6. If any lvar type changed, the driver **throws the ctree away, rebuilds it from microcode
   and repeats** (at most 10 rounds). Placeholder types get a scalar fallback at round 3.

So the lattice is not a classic join-semilattice. It is: "fewer undefined components is
better" (`sub_32E340`), then evidence weight, then `score_tinfo` as a final tie-breaker.
Conflicts are never collapsed to "unknown"; the best-supported type wins.

```
sub_2523C0  ctree build + retype fixpoint (10 rounds)               [confirmed]
 └─ round i: sub_250510 build ctree from mba; ...; sub_256040
     └─ sub_2AC820(cfunc, i)          one type round, returns "changed"
         ├─ sub_29D1D0                 ctree_visitor (vtbl off_4E0DF8) -> sub_2AA180 per expr
         │    └─ edge emitters sub_2A9A40/2A8DC0/2A94E0/2A9000/2A8440/2A8780/2A8CB0/2A9670
         │         └─ sub_2A8310 normalize (sub_2A62C0 -> sub_2A5BF0) + merge (sub_2A7AB0) + insert (sub_2A77F0)
         └─ sub_2AC610
              ├─ phase 1 lvars:  sub_2A1C00 collect -> sub_2A3780 choose+apply
              ├─ phase 2 callees: sub_2A1800 collect -> sub_2ABC40 choose+apply prototypes
              └─ sub_29E1A0 substitute changed types through ctree + lvar types
```

### 1. Key data structures (reconstructed)

SDK layouts used (from `hexrays.hpp`, all **[confirmed]** by consistent offsets in the dump):

- `cfunc_t`: `+0 entry_ea`, `+8 mba`, `+16 body`, `+56 maturity` (set to 0, 1 = `CMAT_BUILT`,
  8 = `CMAT_FINAL` in `sub_2523C0`). `+216` is an undocumented decompiler-context pointer
  (`ctx0`); `ctx0+112` holds a type helper (`tctx`, pointer size at `+80`/`+84`).
- `mba_t`: `+0 flags` (`MBA_NICE` = byte 3 bit 1 tested in `sub_2523C0`), `+4 flags2`
  (`MBA2_IS_CTR` 0x10 tested in `sub_2A0060`), `+432/+440 vars` (`lvars_t` data/size),
  `+480 retvaridx`, `+464` argidx size **[inferred]**, `+320 final_type` **[inferred]**
  (guards inference of the return var and of the prototype), `+1376` a set of call
  addresses whose callee prototype may be refined **[inferred]**, `+1496/+1504` type helpers.
- `lvar_t` is **104 bytes**: `+0 location (vdloc_t)`, `+8 stkoff` when `location.type == ALOC_STACK (1)`,
  `+24 flags (CVAR_*)`, `+32 name`, `+56 cmt`, `+80 tif`, `+88 width`, `+92 defblk`, `+96 divisor`.
  Used flags: `CVAR_TYPE 0x2`, `CVAR_NOWD 0x10`, `CVAR_RESULT 0x80`, `CVAR_ARG 0x100`,
  `CVAR_FLOAT 0x800`, `CVAR_PARTIAL 0x4000`, `CVAR_NOPTR 0x40000`.
- `cexpr_t`: `+8 op`, `+24 x` (or `v.mba` for `cot_var`), `+32 y` (or `v.idx`), `+40 z`,
  `+48 type`, `+56 exflags`. Ops seen: `asg 2`, `tern 16`, comparisons `22..31`, `add 35`,
  `sub 36`, `cast 48`, `ptr 51`, `ref 52`, `postinc/postdec 53/54`, `call 57`, `idx 58`,
  `memref/memptr 59/60`, `num 61`, `obj 64`, `var 65`, `helper 68`, statement `cit_return 80`.

Private structures of the type engine (offsets **[confirmed]**, names mine):

#### `TypeTerm` (16 bytes; copy `sub_29F770`, destroy `sub_29EC30`, compare `sub_29E6F0`)
```
+0 u32 kind;  +4 u32 hints;  +8 payload
kind 0  Hint        no type, only `hints` bits                         [confirmed]
kind 1  Concrete    payload = tinfo_t                                  [confirmed]
kind 2  PtrTo       payload = TypeTerm*  -> resolves to "pointer to T" [confirmed: sub_29B3C0 builds ptr]
kind 3  Shape       payload = map<offset, TypeTerm> (built from *(p+k)) -> struct/array-like [inferred]
kind 4  Wrap        payload = TypeTerm*  -> derived type via create_tinfo [guess: array-of / pointee]
kind 5  Int         payload = int (ordinal-like key)                   [guess]
kind 6  Expr        payload = cexpr_t*                                 [confirmed]
kind 7  RetVal      payload = cfunc_t* (the function's return value)   [confirmed]
kind 8  CallSlot    payload = {cexpr_t* call, int argidx}; argidx -1 = call result [confirmed]
```
`hints` bits **[inferred from emitters and consumers]**:
`0x1` unsigned use, `0x2` signed use, `0x4` weak evidence (+1 penalty; set for partially
typed sources), `0x8` "cannot be a pointer", `0x10` "pointee is not a pointer",
`0x20` "is a pointer to something unknown", `0x40` "written through, pointee must be non-const",
`0x80` "comes from a numeric constant" (`0x88` = constant that is not a mapped address).

#### `TypeEdge` (node in a custom RB-tree at `ctx+16`; tagged parent pointers, bit 1 = header/nil)
```
node+24 TypeTerm a;  node+40 TypeTerm b;  node+56 int rel;  node+64 int weight
```
Ordered by `(cmp(a), cmp(b), rel)` via `sub_29E6F0` **[confirmed, sub_2A77F0]**.
`rel` values **[inferred]**: `1` = equal (assignment, cast, return, call arg, typed source);
`2` = weak relation / hint (comparison, ternary arms, `*p` means "p is a pointer");
`3` = pointer arithmetic `x ± y`. Only rel 1 and 2 feed lvar candidates (`sub_2A1C00`, `sub_2A1800`).

#### `Candidate` (32 bytes) and `LvarEntry` (48 bytes)
```
Candidate: +0 TypeTerm src; +16 tinfo_t tif; +24 int votes; +28 int penalty
LvarEntry: +0 lvar_t* (or CallSlot* in phase 2); +8 qvector<Candidate>;
           +32 int signed_votes; +36 int unsigned_votes; +40 int hints_or
```

#### Context (`ctx`, stack object in `sub_2AC820`)
`+0 ctx0` (cfunc+216), `+8 cfunc`, `+16/+24` edge set root/size, `+32` old→new type map
(used by `sub_2A6CC0`/`sub_2A69F0`, consumed by `sub_29E1A0`), `+48` list of returned lvars,
`+72 round number` (the `i` of the driver; −1 for the "last chance" call), `+76` callee-change counter.

### 2. Algorithms

#### 2.1 Fixpoint driver: ctree build + retype loop (`sub_2523C0`, 268 lines)

**Purpose.** Builds the ctree from microcode and iterates type inference until stable.
This is the fixpoint driver asked for; it is a **whole-rebuild loop**, not a worklist **[confirmed]**.

**Algorithm.**
1. Fire `hxe_pre_structural` (8) and `hxe_structural` (9) through `sub_33E140`, run structural analysis (`sub_3120C0`); throw `vd_failure_t` on error.
2. For `i = 0..9`:
   1. Reset the ctree body; free the previous one.
   2. `cfunc.maturity = CMAT_ZERO`; event `hxe_maturity`; **build ctree** (`sub_250510`); `maturity = CMAT_BUILT`.
   3. Ctree cleanups (`sub_2585C0`, `sub_3252D0`, `sub_241D00`).
   4. If `!(mba.flags & MBA_NICE)`: stop here (raw output, no type inference).
   5. If `i == 3`: run the scalar fallback `sub_29E310` (see 2.8).
   6. If `sub_256040(cfunc)` (ctree transformations ran):
      `changed = sub_2AC820(cfunc, i) || sub_27D2C0(ctx0)`;
      if not changed: `changed = sub_2AC820(cfunc, -1) || sub_29E310(cfunc)`;
      if still not changed: **break** (fixpoint).
3. Post: if `i == 10` mark the function (`sub_3311F0(..., 13)`, a warning); final ctree passes;
   if `!mba.final_type` build the final prototype from lvars (`sub_37C180`, the `calc_arglocs` user);
   lvar naming (`sub_2112D0`); `maturity = CMAT_FINAL`.

```text
for round in 0..10:
    rebuild_ctree_from_microcode()
    if round == 3: fallback_scalar_types()
    if not ctree_transforms_ran(): continue
    if infer_types(round) or other_ctx_change(): continue
    if infer_types(-1) or fallback_scalar_types(): continue
    break
```

Key quotes: `for ( i = 0; i != 10; ++i )`, `if ( i == 3 ) goto LABEL_17;` → `sub_29E310(a1, ...)`,
`if ( !sub_2AC820(a1, i) && !sub_27D2C0(...) ) { if ( !sub_2AC820(a1, 0xFFFFFFFF) && !sub_29E310(...) ) break; }`.

**Why rebuild.** Lvar types feed the ctree builder (casts, pointer arithmetic, member
access). A new type is only visible after a rebuild, so each round re-derives the ctree
from the same microcode with the improved lvar types.

**Callers.** `sub_14BF70` (main decompile path), `sub_34A920` (11715-line UI/command dispatcher),
`sub_3901D0`, `sub_3DD450`. **Kuna counterpart.** Ghidra's action loop re-runs `ActionInferTypes`
inside the main action group with a 7-pass settle ceiling (`coreaction_render::ActionInferTypes`),
but without a full IR rebuild. **Unlace status.** No equivalent. Unlace types SSA varnodes
before structuring; the printer never re-asks the type engine. `reanalysis.rs` is a
whole-program signature fixpoint (cap 10, `DEFAULT_REANALYSIS_CAP`), not a per-function
retype-and-rebuild loop.

#### 2.2 One inference round (`sub_2AC820`, 224 lines + `sub_2AC610`, 114 lines)

**Purpose.** Run one round of constraint collection and solving; return "something changed".

**Algorithm** **[confirmed]**:
1. Build `ctx = {ctx0, cfunc, edges = {}, ...; ctx+72 = round}`.
2. `sub_29D1D0(&ctx)`: run a ctree visitor (vtable `off_4E0DF8`, flags 2) over `cfunc.body`;
   its `visit_expr` is `sub_2AA180` (2.3), which fills the edge set.
3. **Return-this rule**: if `sub_36E1B0(mba)` and the first argument lvar is untyped, add
   edge `(Expr(var argidx[0]), RetVal)` with rel 1. The fake `cot_var` is built on the stack
   (`LODWORD(v28) = 65 ... DWORD2(v30) = ***(a1+48)`) **[inferred: constructors returning `this`]**.
4. `sub_2AC610`:
   - phase 1: `sub_2A1C00` collects lvar candidates; `n1 = sub_2A3780` applies them;
   - phase 2: `sub_2A1800` collects call-slot candidates; `n2 = sub_2ABC40` refines callee prototypes;
   - `sub_29E1A0(cfunc, ctx+32)`: substitute every changed type (old→new map) through the
     ctree and all lvar types (`visit_subtypes` inside `sub_32E220`) **[inferred]**.
   - return `n1 + n2`.
5. Return `n1 + n2 > 0`.

#### 2.3 Constraint generation visitor (`sub_2AA180`, 1169 lines)

**Purpose.** For each expression `e` (with its parent stack at `visitor+16/+24`), emit edges and
hints. This is the **transfer-function table** of type propagation **[confirmed structure;
individual rules below confirmed unless tagged]**. Every "edge" call goes through `sub_2A8310`.
`Expr(e)` terms are first evaluated by `sub_2A0060` (2.4), so an expression with a trustworthy
type becomes `Concrete` right away.

| Context (parent / op) | Emitted constraint | Emitter |
|---|---|---|
| parent `asg`, `e` is lhs: `x = y` | `(Expr x, Expr y)` rel 1. Skipped when `y` is literal `0` (could be `NULL` or int) and for `v = &v`. If `y` is narrower than a pointer, or is a cast chain that narrows below pointer size or passes through a float: `x` gets hint `0x8` (not a pointer). If `x` is `*p`: `p` gets `0x40` (written through). If `x` evaluates to `T*` with non-const `T`: `y` gets `0x40`. If `y` is `&a.f` / `&p->f` with member offset 0: also `(Expr x, Concrete(pointer to the enclosing struct))` rel 1, once per nesting level | `sub_2A9A40` |
| parent `call`, `e` is argument `n` | `(CallSlot{call,n}, Expr e)` rel 1. If the formal is `T*` with non-const `T`: hint `0x40` on `e`. Concrete callee types are verified (`verify_tinfo`) and recorded (`sub_2A7000`) | inline |
| parent `call`, `e` is callee `helper` named `memcpy` | special no-op (`sub_2A8B40`) | inline |
| `e` is `call(cast(...))` result | becomes `CallSlot{call,-1}` = return slot (2.4) | `sub_2A0060` |
| statement `return e` | `(RetVal, Expr e)` rel 1; returned untyped lvars are listed at `ctx+48` | `sub_2A8CB0` |
| `cast(x)` with same float-ness | `(Expr cast, Expr x)` rel 1; sign hint (`1`/`2`, plus `0x8` when compared with a non-address constant) on `x` if sizes match | inline + `sub_2A8780` |
| `x + y`, `x - y` | `(Expr x, Expr y)` rel 3 (pointer arithmetic). A constant operand is ignored when it is too large or not a mapped address | `sub_2A94E0` |
| comparisons `x op y` | `(Expr x, Expr y)` rel 2 unless either side is `bool`. For `==`/`!=` only when a side is pointer/array/function typed. Then sign hints by operator signedness (`sub_255000(op)`), only for operands whose lvar width equals the operand size | `sub_2A8DC0`, `sub_2A8960` |
| `c ? y : z` | `(Expr y, Expr z)` rel 2 | `sub_2A8DC0(y, z, 16)` |
| `* / % << >> \| ^ &` and compound assigns | each operand gets hint `0x8` (not a pointer); sign hints by operator | `sub_2A8690(...,0)` → `sub_2A8440(e, 8)`, `sub_2A8960` |
| `*p` (`cot_ptr`) | `(PtrTo(Hint 0), Expr p)` rel 2 → "p is a pointer". If `p` is `(T*)&y` or a cast of an array with a concrete pointee: `(Expr y, Concrete pointee)` rel 2 | `sub_2A9000(p, 0)` |
| `&x` under asg/compare | both sides of the parent get "is a pointer" | `sub_2A9000(0, parent)` |
| `a[i]` | vars inside `i` get "not a pointer" (subtree visitor `off_4E0E38`) **[inferred]** | `sub_2A8690(i, 1)` |
| value-used operands, `EXFL_FPOP` (0x4) expressions | the underlying lvar (looking through `?:`, comma, `*(T*)&v`) is appended to a ctx list (`sub_299330`); consumer not traced **[inferred]** | `sub_299AE0` |
| `*(p + k)` with hint `0x8` on the deref | `p` additionally gets `0x10` (pointee is not a pointer) | `sub_2A8440` |
| `x + num` where `num` has a user struct-offset representation (`is_stroff`) | `(Expr x, Concrete(struct named by stroff path, as pointer if size differs))` rel 1 | `sub_2A9670` |
| `cot_var` whose expression type differs from the lvar type (`lexcompare_tinfo`) | `(Concrete e.type, Expr e)` rel 1 **[inferred]** | inline |

**Callers/callees.** Reached only through the vtable `off_4E0DF8` (0 direct callers).
**Kuna counterpart.** `typeop.rs` `getInputLocal/getOutputLocal` + `build_localtypes`
(per-p-code-op local types), and `propagate_type` per opcode in `coreaction_infertypes.rs`.
**Unlace status.** Partial. `type_constraint_solver::collect_constraints` emits
`Equal/Subtype/PointsTo/SameType` per SSA op, with a capability lattice (integer, unsigned,
pointer, bool, float, memory, callable). It has no hints for "written through" (const),
"cannot be pointer" from narrow assignments, `idx` index operands, user stroff operands, or
the `return this` rule. It runs on SSA varnodes, not on ctree expressions.

#### 2.4 Term evaluation: which sources are trusted (`sub_2A0060`, 126 lines; `sub_29F9A0`, 182 lines)

**Purpose.** Turn a raw `Expr`/`RetVal`/`CallSlot` term into a `Concrete` type when the
source is trustworthy. This decides **which types are fixed seeds** of the propagation **[confirmed]**.

`sub_29F9A0(Expr e)` returns `Concrete` when:
- `e` is a comparison or logical op (`lor`, `land`, `lnot`, `eq..ult`) → `bool` (`BT_BOOL` = 8);
- `e` is an operator with an intrinsic signedness (`sub_255000(op) != 0`) → `e.type`;
- `e` is `|`, `^`, `&`, `~`, `.`/`->` and `e.type` is concrete → `e.type`;
- `*x` → evaluate `x`, take its pointee;
- `&x` → evaluate `x`, make a pointer to it;
- `f(...)` where `f` is a `cot_obj` with a known prototype (`sub_374CE0`) → return type;
- `cot_obj` with a known type (`sub_374CE0`) → `e.type`;
- `cot_var` whose lvar has `CVAR_TYPE` → `e.type` (typed lvars are seeds);
- for member reads through a bitfield-like chain it walks `memref` up while the size matches.

Otherwise the term stays `Expr` and becomes a **variable** of the system.

`sub_2A0060` adds:
- `RetVal`: if `mba.final_type`, the declared return type; if `MBA2_IS_CTR`, the type of argument 0
  (constructors return `this`) **[confirmed: `(*(_BYTE *)(v14 + 4) & 0x10) != 0` → `sub_13D280(v14, 0)`]**;
- `call((cast)f)(...)` becomes `CallSlot{call,-1}` unless the cast type already gives a return type;
- `CallSlot{call,n}`: `get_tinfo_property(... 25+n)` on the callee type (the `v11 = idx+1 <= 0x100`
  guard matches `GTA_FUNC_ARG = 25+n`, `GTA_FUNC_RET = 24` for `n = -1`) **[inferred]**;
  it stays unresolved when the callee is a cast, `*(cast)`, unknown size, or a placeholder.
- finally `hints |= sub_29C0C0(term)`: weak flag `0x4` for terms derived from
  `CVAR_PARTIAL` lvars or from arithmetic on untyped lvars; `0x80`/`0x88` for numeric
  constants (`0x88` when the value is not a mapped address, via `sub_2993E0`) **[confirmed]**.

**Unlace status.** `type_infer.rs` seeds from composites and op semantics, and
`printf_type_infer.rs`/`libc_signatures.rs` seed from known prototypes. There is no notion
of "trusted vs untrusted" source per term and no `0x80` "came from a constant" weakening.

#### 2.5 Edge normalization, merge and weights (`sub_2A8310` 76, `sub_2A62C0` 36, `sub_2A5BF0` 262, `sub_2A7AB0` 373, `sub_2A77F0` 190)

**Purpose.** Canonicalize each edge, merge it with an existing edge for the same lvar, and
keep a weight per distinct edge **[confirmed unless tagged]**.

**Algorithm.**
1. `sub_2A62C0`: evaluate both sides (`sub_2A0060`), then repeat `sub_2A5BF0` while it changes the edge
   and a side is still `*expr`.
2. `sub_2A5BF0` rewrites (for rel 1):
   - `(Expr *(p + k), T)` → `(Expr p, PtrTo(Shape{k: T}))` when `p + k` splits into base and a
     scaled constant (`sub_29C9F0` multiplies `k` by the pointee size) **[inferred: struct/array shape]**;
   - `(Expr *p, T)` → `(Expr p, PtrTo T)` when sizes agree (pointer to `T`);
   - `(Expr v, X)` where `v` is a pointer-typed expression (not `va_list`) → strip one pointer level
     on both sides (`sub_2A0430`);
   - `(Concrete T, Expr *q)` with the same size and float-ness → `(Concrete T, Expr q)` with `T*`;
   - `CallSlot` sides whose call is not in `mba+1376` are replaced by the argument expression.
3. `sub_2A8310`: drop the edge if both sides are `Concrete`, or a side is a zero literal, or both
   sides compare equal (`sub_29E6F0 == 0`).
4. If a side is `Expr(cot_var v)` and rel != 3: `sub_2A7AB0(ctx, v.idx, edge, side, w)` scans existing
   edges on the same lvar and the same side:
   - both other sides `Concrete`, same rel: if `compare_tinfo` says equal → keep (absorb);
     else `meet = sub_29D550(til, old, new)`; if non-empty → replace the old edge with
     `(.., Concrete meet, rel)` and **weight = old weight + new weight**;
   - both other sides `PtrTo(Shape)`: merge the offset maps (`sub_2A64C0`, `sub_29E4E0`);
     if compatible → one merged edge with summed weight;
   - other side `PtrTo(Hint)` vs any `PtrTo`: absorb.
5. Otherwise `sub_2A77F0` inserts the edge or does `weight += w + 1` on an existing identical edge.

**`sub_29D550` (109 lines): the pairwise meet of two concrete types** **[inferred]**:
- equal by `lexcompare_tinfo` → either one;
- one side is a placeholder (`_DWORD`, `_UNKNOWN`) → the other (concrete wins);
- two pointers: if one pointee is `void`, or a function-pointer preference applies (`(v & 0xF) == 12`),
  keep the more specific pointer; else no meet;
- two concrete scalars → `sub_242920`, a C **usual-arithmetic-conversion** routine: it decays,
  converts enums to integers of the same size, rejects floats and wide types, and returns
  `int` (7) or `unsigned int` (0x24/0x27) using the target `int` size at `inf+130`.

So equality constraints between two concrete integer types do not fail. They meet at
the C common type.

**Kuna counterpart.** Ghidra has no weights: `propagate_one_type` pushes a type and stops
where the new type is not more specific (`typeOrder`). **Unlace status.** `PrimitiveType::join`
(`crates/unlace-ir/src/ssa.rs:204`) returns `Unknown` on conflict, keeps `Int` for
`Int`/`UnsignedInt`, and has no weights, no struct-shape terms and no pointee (`Ptr` is opaque).

#### 2.6 Candidate collection and voting (`sub_2A1C00`, 335 lines; `sub_2A1180`, 318 lines)

**Purpose.** Turn edges into per-lvar candidate lists with votes **[confirmed]**.

`sub_2A1C00(ctx, out)`:
1. For each edge with rel 1 or 2, for each side `s` that is `Expr(cot_var v)` (or `v++`/`v--`)
   or `RetVal` (mapped to `mba.vars[retvaridx]`): if `v` is untyped (`!(flags & CVAR_TYPE)`), add the
   **other** side as a candidate, weight = edge weight (`node+64`).
   A `PtrTo` candidate is skipped when the lvar's current type is an array (`(t & 0xF) == 0xB`).
   The width is the lvar width unless `CVAR_NOWD` is set on a non-argument lvar.
2. **Frame-member seed.** Build microcode frame info (`sub_1CE9E0`, `get_func_frame`). For each untyped
   stack lvar (`location.type == ALOC_STACK`), look up the frame member at `8 * stkoff` with
   `find_tinfo_udt_member`. Accept its type only if it is concrete, not a pointer to a placeholder,
   not `float`-shaped, valid (`sub_32CB80`), of the same width, and of the same float-ness. Add it as
   a candidate with **weight 1** (user frame types are just one vote).

`sub_2A1180(mba, out, key, term, weight, width)`:
1. Resolve the term to a `tinfo_t` (`sub_29B3C0`). Reject `BT_UNKNOWN` and placeholders. If `width`
   is known and differs from the type size, keep it only if the type is bool-like (`sub_29CC80`:
   `bool` or a typedef named `bool`/`_BOOL*`).
2. Find or append the `LvarEntry` for `key`. Candidate `penalty = sub_32E340(tif) + (hints & 4 ? 1 : 0)`.
3. If an equal candidate exists (`sub_29E6F0`), `votes += 1`; else append with `votes = weight`.
4. Signedness: `hints & 2` → `signed_votes += weight`; `hints & 1` → `unsigned_votes += weight`.
5. `entry.hints_or |= term.hints`. A pure `Hint` term only contributes hints and sign votes.

**Unlace status.** No votes. `type_infer.rs` and the constraint solver both write the
joined type directly, so one strong use and one weak use count the same.
`lvar_collect.rs` collects frame members as lvars, but frame types are not a weighted candidate.

#### 2.7 Choosing the winner (`sub_2A3210` 271, `sub_29DAA0` 268, `sub_29E8A0` 42, `sub_2A23A0` 473)

**Purpose.** Pick one type per `LvarEntry` **[confirmed unless tagged]**.

1. `flags = entry.hints_or & 0x68`; if `signed_votes != unsigned_votes`, add `1` (unsigned) or `2` (signed)
   by majority (`*a2 = ((*(a4+32) > v10) + 1) | v8`).
2. Normalize every candidate (`sub_29C470`): resolve its type, apply `0x40` (strip `const` from the pointee,
   `sub_32C700`), apply `0x10` (`T**` → `intN*` with pointer-size `N`), decay arrays, recompute
   `penalty = (pointee is void ? 1 : sub_32E340(tif)) + (weak ? 1 : 0)`.
3. `std::sort` (`sub_2A23A0` introsort with depth `2*log2(n)`, insertion tails `sub_2A0A30`/`sub_2A0830`)
   using comparator `sub_29E8A0`:
   1. `penalty` ascending (fewer unknown parts first);
   2. if one is an `enum` and the other an integer/enum: `score_tinfo` decides;
   3. `votes`, then term order (`sub_29E6F0`). (The examined comparator orders `votes`
      ascending; this only matters for exact ties of support below. **[inferred]**)
4. If exactly one candidate is `PtrTo(Shape)` with members, resolve it now (`sub_29F880`).
5. `sub_29DAA0(mba, &winners, cands, filter, ptr_ok = !(entry.hints_or & 8))`:
   - the `filter` is a per-lvar visitor (`off_4E0EA0` in phase 1, `off_4E0EB8` in phase 2) **[guess: rejects types the lvar cannot hold]**;
   - **pointer preference:** when `ptr_ok` and any accepted candidate is a pointer, only pointer
     candidates are considered;
   - take the first concrete candidate and all following candidates with the **same penalty** (one class);
   - for each candidate `c` in the class: `support(c) = c.votes + Σ d.votes` over other members `d`
     that are compatible with `c`: same `void*`-ness and `sub_245630(d → c)` (castable), with extra rules
     for pointers (`sub_29D2B0`), same-size structs (`sub_29B010`), and float constants
     (`num` of same size whose value fits);
   - keep all candidates with maximal support.
6. If several winners remain: ignore `LPVOID` typedefs; drop pointers to `void`/placeholders when a
   named pointer typedef exists; drop constant-derived (`0x80`) candidates when a non-constant integral
   candidate exists. The first survivor is the result; its hint bits `4`/`0x80` are passed up.

#### 2.8 Applying the winner to lvars: the penalty lattice (`sub_2A3780`, 699 lines; `sub_32E340`, 21; `sub_29A3A0`, 318)

**Purpose.** Decide whether the winner replaces the lvar's current type, apply it, count changes.

**The ordering (`sub_32E340`)** **[confirmed]**:
```c
uint unknownness(tinfo t) {
  if (is placeholder or BT_UNK) return (t & 0x30) != 0;  // _BYTE.._UNKNOWN -> 1
  if (scalar: (t & 0xF) <= 9)   return 0;                // int, bool, float
  return count of placeholder subtypes via visit_subtypes; // ptr/array/func/struct
}
```
Lower is better. This is the de facto lattice height: `_QWORD` (1) > `_QWORD *` (1) > `int *` (0).

**Algorithm per entry:**
1. **Round 0 deferral:** if `ctx.round == 0`, the entry is not deferred yet (`!(flags & 8)`), and a
   candidate is `&w` for another still-untyped lvar `w`, move the entry to the end of the list
   (so `w` gets its type first).
2. Skip `CVAR_RESULT` when `mba.final_type`. `CVAR_NOPTR` sets the "cannot be pointer" flag.
3. `best = sub_2A3210(...)`; `new = unknownness(best)`. `new += 1` (`++v102`) when the winner is
   weak (`4`), or when it comes from a numeric constant (`0x80`, no sign votes) while the lvar already
   has a concrete integral type of the same size (keep the existing type).
4. Apply the voted sign (`sub_299900`: `set_tinfo_property` sign change, or a new integer of the same
   size via `sub_32C430`; strip `const` if `0x40`). Bool-like types are resized to the lvar width (`sub_29CA60`).
5. **Width check:** if `size(best) != lvar.width` and the width is fixed → reject. If smaller,
   a microcode visitor (`off_4E0E78`, `sub_11FBB0`) checks that all uses fit, else reject.
6. `old = unknownness(lvar.tif) + (lvar is CVAR_PARTIAL ? 1 : 0)`.
7. If `compare_tinfo(old_tif, best)` holds: replace only if `new < old` and the old pointee is not
   `void`, or on equal score if the new type is a typedef and the old is not.
8. Else `sub_36E320(mba, lvar, best)` must allow the change. Then, roughly:
   - old is a placeholder → replace;
   - pointer vs non-pointer conflicts: a pointer replaces a non-pointer unless flag `8`;
     `void *` / `_UNKNOWN *` lose to concrete pointers;
   - otherwise replace iff `new < old`; on a tie, `sub_29A3A0` (function types) or
     `score_tinfo(best) > score_tinfo(old)`, or a typedef with `BTM_CONST` cleared.
9. Apply with `sub_1EF950` (lvar `set_lvar_type`), clear `CVAR_NOWD`, set `CVAR_TYPE` (`| 2`),
   set `CVAR_PARTIAL` when the winner was weak; count the change. A changed `CVAR_FLOAT` lvar
   triggers `sub_1F1240` (re-check float usage).
10. From round 2 on (`ctx.round > 1`), lvars not retyped in this round lose `CVAR_PARTIAL`.

**`sub_29A3A0(til, old, new, strict)`: function-type tie-break** **[confirmed for the scoring structure]**.
Both types are reduced to `BT_FUNC` (`sub_299470` strips pointer/typedef). It compares
`func_type_data_t` (`get_tinfo_details`): `score_tinfo` of the return types, ±1 when exactly one is a
typedef, `+1` for the new type when it has fewer args and its CC is `CM_CC_ELLIPSIS`/`CM_CC_SPECIALE`
(otherwise `interr 52458`), then per argument: add `score_tinfo` of both, `−1` penalty per concrete
non-`void` pointer argument, ±1 typedef bonus. The new type wins iff unknownness is equal and its
total `score_tinfo` is higher.

**Callers/callees.** `sub_2AC610` → `sub_2A3780` → `sub_2A3210`, `sub_29A3A0`, `score_tinfo`,
`compare_tinfo`, `sub_1EF950`, `sub_299900`.
**Kuna counterpart.** Ghidra's `Datatype::typeOrder` and `TypeFactory::typeOrder` metatype ordering;
`write_back` copies temp types to permanent ones. Ghidra prefers the "more specific" metatype and
does not count unknown sub-components or use votes.
**Unlace status.** `PrimitiveType` has no placeholder-vs-concrete distinction beyond `Unknown`, so the
"fewer undefined components" order and the `score_tinfo` tie-break have no counterpart. There is no
`CVAR_PARTIAL`-style "weakly typed, may be replaced later" state.

#### 2.9 Backward propagation into callee prototypes (`sub_2A1800` 201, `sub_2ABC40` 364, `sub_2A6CC0` 113)

**Purpose.** Use the types of actual arguments and of the used result to refine the callee's
function type **[confirmed structure, inferred details]**.

1. `sub_2A1800`: for each rel 1/2 edge with a `CallSlot{call, n}` side whose callee is not a
   `helper`: read the formal `GTA_FUNC_ARG n` (or `GTA_FUNC_RET`). Continue only if the call is
   in `mba+1376` (refinable calls), or if the current formal type still has unknown parts.
   Deduplicate slots by `(callee expr, n, call ea)` and add the other side as a candidate
   (`sub_2A1180`, keyed by the slot).
2. `sub_2ABC40`: for each slot: choose the winner (`sub_2A3210`, filter `off_4E0EB8`), apply the
   sign; require `n < nargs` unless the callee is variadic (`interr 52453`). If the winner differs
   from the formal (`lexcompare_tinfo`), group by callee: rebuild the callee's function type with
   arg `n` replaced (`sub_32DC20`). Pure renames that `compare_tinfo` treats as equal are skipped.
3. For each callee whose type changed: `sub_2A6CC0` applies it to the callee expression, but only
   when the new prototype wins `sub_29A3A0` against the old one:
   - `cot_obj`/`memref`/`memptr` callee: compare and copy (assert on `memptr`, `interr 50473`);
   - `*(cast)fp` chains: rebuild the pointer chain (`sub_32C540`) and record old→new in `ctx+32`
     (`sub_2A69F0`, keyed with `lexcompare_tinfo`) for `sub_29E1A0`;
   - `cot_var` callee (function pointer lvar): only if untyped.
4. The count of applied prototypes (`ctx+76`) is added to the round's change count.

**Kuna counterpart.** Ghidra propagates through `CPUI_CALL` inputs with prototype-locked types
(`call_input_type_local`) but does not rewrite the callee prototype from caller evidence.
**Unlace status.** `caller_param_propagate.rs` merges argument types into
`FunctionSignatureRegistry` with `PrimitiveType::join` (conflict → `Unknown`), and
`reanalysis.rs` re-runs callers. There is no per-call-site vote, no variadic check, and no
`score_tinfo`-style comparison of old vs new prototype.

#### 2.10 Scalar fallback (`sub_29E310`, 61 lines)

**Purpose.** Give placeholder-typed lvars a scalar type when inference stalls **[confirmed]**.
For every lvar whose type is empty, a placeholder, or resolves to `BT_UNKNOWN`, but whose
type is not itself `BT_UNKNOWN`: `get_scalar_bt(size)` → `sub_1EF950(lvar, ..., (final_type << 4) | 8)`
and set `CVAR_PARTIAL` (0x4000). Called at round 3 and as the last resort. Because the result is
`CVAR_PARTIAL`, later evidence can still replace it (2.8 step 6 adds `+1` to the old penalty).

**Unlace status.** Unlace prints unknown varnodes with width-based defaults in the printer;
there is no "partial" type that later evidence may override.

#### 2.11 Where `guess_tinfo` is used (`sub_380880`, 187 lines; `sub_338DC0`, 74 lines; `sub_C1380`/`sub_C19E0`)

`guess_tinfo` is **not** part of lvar propagation. It is used to get types of **external
objects** referenced by the ctree **[confirmed]**:
- `sub_380880` is a cached "type of address" lookup (map `ea → (tinfo, confidence)`):
  `get_tinfo`, thunk target (`calc_thunk_func_target`), an arch/processor hook (vtable `+152`),
  then `guess_tinfo(ea)` (mode 3) or `sub_338DC0` (guess a function prototype from the call
  graph: `get_first_fcref_from`, `guess_tinfo`). Guessed addresses are remembered in a set
  (`a1+72`); failure caches `BT_UNKNOWN` (`&dword_30`). Confidence `1` = stored type, `3` = guessed.
- `sub_3810A0` wraps it; `sub_29B3C0` (term resolver) calls it for numeric constants that are
  mapped addresses, so `p = 0x401000` can type `p` as a pointer to the global's type.
- `sub_C1380`/`sub_C19E0` use `guess_tinfo` for struct-offset (`is_stroff`, `get_stroff_path`)
  operand types during microcode generation.

#### 2.12 `score_tinfo`, `compare_tinfo`, `lexcompare_tinfo`: roles

- **`lexcompare_tinfo`**: total order only. Used for set/map keys (`sub_29E6F0` term order,
  `sub_2A69F0` old→new map), "did the type change" checks (`sub_2ABC40`, visitor `cot_var` rule),
  and the first test of the meet (`sub_29D550`). `sub_29E6F0` negates it when both sides are
  integral/enum, so integral types sort in reverse order **[confirmed]**.
- **`compare_tinfo`**: semantic equality/castability. Used to absorb duplicate edges
  (`sub_2A7AB0`), to decide whether a type change is real (`sub_2A3780`, `sub_2ABC40`), and in the
  function-type tie-break (`sub_29A3A0`). Its `TCMP_*` flags are not visible in this dump.
- **`score_tinfo`** (kernel, "how informative is this type"): only a **tie-breaker**:
  enum vs integer ordering (`sub_29E8A0`, `sub_2A23A0`, `sub_2A0830/0A30/0CB0`), equal-penalty
  replacement (`sub_2A3780`), and prototype comparison (`sub_29A3A0`). The 0x298000–0x2A5000 cluster
  is the engine's term algebra, sort helpers and these tie-breaks, not a separate scoring pass.

### 3. Comparison summary

| Aspect | Hex-Rays (this engine) | Kuna (Ghidra port) | Unlace |
|---|---|---|---|
| IR level | ctree, after lvar allocation | p-code varnodes | SSA varnodes (`type_infer.rs`, `type_constraint_solver.rs`) |
| Driver | rebuild ctree + retype, ≤10 rounds | `ActionInferTypes`, ≤7 passes | per-pass fixpoint (≤100 iters); `reanalysis.rs` signature cap 10 |
| Conflict | weighted votes + support + penalty | `typeOrder` "more specific wins" | `join` → `Unknown` |
| Order | unknown-components count, then votes, then `score_tinfo` | metatype order | flat (Unknown < concrete) |
| Signedness | separate signed/unsigned vote | op-local types | `Int` wins over `UnsignedInt` in join; solver has an unsigned capability |
| Pointers | `PtrTo(term)`, `Shape{off: term}`, const stripping, "not a pointer" hints | pointer types with `downChain` | `Ptr` without pointee in primitive lattice; composites separate |
| Prototypes | caller evidence refines callee arg/ret, gated by `score_tinfo` comparison | locked prototypes | `caller_param_propagate.rs` join into registry |
| Fallback | `get_scalar_bt` + `CVAR_PARTIAL` (replaceable) | `TYPE_UNKNOWN` | printer default |

### 4. Gaps / open questions

1. `get_tinfo_property`, `compare_tinfo`, `score_tinfo` arguments are elided. The exact `GTA_*`
   ids (except the `25+n` arg slot), the `TCMP_*` flags and the operand order of each `score_tinfo`
   pair need the disassembly or the IDA database. The direction of the enum/integer tie-break is
   therefore unknown.
2. Term kinds 4 and 5 were not seen being created in the functions read; their meaning is a guess.
3. The per-lvar filter visitors `off_4E0EA0` / `off_4E0EB8` and the use-site visitor `off_4E0E78`
   were not resolved (vtables, not functions in the dump index).
4. `sub_36E320` (permission to retype an lvar), `sub_245630` (compatibility in support voting),
   `sub_29D2B0`, `sub_29B010` and `sub_32DC20` (rebuild function type with one arg changed) were
   only read at the call sites.
5. `mba+1376` (refinable call set) and `mba+320` (`final_type`) are inferred from usage, not from an SDK offset table.
6. The vote order in the sort comparator is ascending; it only affects exact support ties.
   This should be confirmed against a disassembly before relying on it.
7. `sub_27D2C0(ctx0+808)` is a second "changed" source in the driver; it is outside this engine and was not traced.
   The consumer of the lvar list built by `sub_299AE0` (546 lines) was not traced either.
8. Struct synthesis from `Shape` terms (`sub_29BE20`, `sub_29BCC0`, `sub_2A64C0`) is only sketched here;
   it overlaps with struct-recovery research and needs its own pass.

---

## S2 — Hex-Rays pointer type inference from usage (hexx64 9.3sp1)

Scope: how an lvar or expression becomes a pointer, how pointer arithmetic is
normalised (`p + N*sizeof(T)` → `p[N]`), the `char *` / `void *` defaults,
shifted pointers, and cast insertion in the ctree. Pipeline, lvar allocation
and the printer are covered elsewhere and are not repeated.

### 0. Method, and two corrections to the brief

* **The examined dump drops import arguments.** Of 1716 calls to
  `get_tinfo_property{,4}` in the dump, 1714 are printed as `get_tinfo_property()`
  (the thunk has no prototype). So the GTA property cannot be read from the
  `.c` files. I recovered it from the real compiled code instead:
  `hexrays/ida-9.3sp1/hexx64.so` in the repo (same image: `sub_40FBC0` starts at
  `0x40fbc0` with the same prologue). `objdump -d -M intel` → for each
  `call get_tinfo_property@plt` (0x2d050) / `get_tinfo_property4@plt` (0x2bbd0),
  walk back to the last `esi` write. Same for `create_tinfo` (`esi` = `bt`),
  `get_stock_tinfo` (`esi` = `stock_type_id_t`), `compare_tinfo` (`edx` = TCMP flags)
  and `get_tinfo_details` (`esi` = `bt2`). The full table (1879 rows) is in
  `s2_gta_callsites.tsv` next to this file. Every "prop = X" claim below is
  **[confirmed from asm]**. The order of property calls in the `.c` text does
  **not** follow address order, so do not map them by position.
* **`sub_40FBC0` is not a type dispatcher.** It is the x86 per-instruction
  microcode generator (`a1+48` = `insn.itype`, FPU helper names `"__FSCALE__"`,
  `"fabs"`, `interpret_insn` call, 1903 lines). It sits in a vtable at
  `0x4e9cd8` and makes only two property calls (GTA_FUNC_RET, GTA_REALTYPE).
  [confirmed from code]. The real type work is in the ctree builder cluster
  `0x240000–0x2AD000`, described below.

GTA usage over the whole image [confirmed from asm]:

| prop | calls | | prop | calls |
|---|---|---|---|---|
| GTA_REALTYPE (2) | 1170 | | GTA_PTRARR_SIZE (14) | 31 |
| GTA_PTR_OBJ (9) | 163 | | GTA_PTRARR_SUBTIF (13) | 25 |
| GTA_TYPE_SIGN (3) | 98 | | GTA_FINAL_ELEM (289) | 17 |
| GTA_SAFE_PTR_OBJ (10) | 68 | | GTA_IS_FUNCPTR (6) | 5 |
| GTA_ARRAY_ELEM (11) | 34 | | GTA_IS_SHIFTED_PTR (285) | **3** |

`create_tinfo` bt values: BT_PTR(0x0A) 45 sites, BTF_TYPEDEF(0x3D) 28,
BT_ARRAY(0x0B) 22, BT_FUNC(0x0C) 19, BT_COMPLEX(0x0D) 5.

#### 0.1 Shared vocabulary (used by every function below)

**tinfo encoding.** `typid_t` is `uint64` (typeinf.hpp `typedef uint64 typid_t`),
so `tinfo_t` is 8 bytes. Simple types are stored inline: the code writes
`typid = 7` (int), `8` (bool), `0x15` (`__int64`), `0x25` (`unsigned __int64`),
`0x27` (`unsigned int`), `0x19` (double) directly. The low byte of a typid is
tested directly as a `type_t` (`test dil,dil` = empty). [confirmed from asm]

Type-class tests seen everywhere (`rt` = `get_tinfo_property(t, GTA_REALTYPE)`):

| test | meaning |
|---|---|
| `(rt & 0xF) == 0xA` / `0xB` / `0xC` | BT_PTR / BT_ARRAY / BT_FUNC |
| `(rt & 0xF) - 10 <= 1` | pointer or array ("pointer-like") |
| `(rt & 0xF) - 10 <= 2` | pointer, array or function |
| `(rt & 0x2F) == 0xD` | struct or union (not enum, not typedef) |
| `(rt & 0x3F) == 0x2D` | enum |
| `(rt & 0x3F) == 1` | `void` (used on the pointee: "is `void *`") |
| `(rt & 0x3F) == 0x30` | BT_UNKNOWN |
| `(rt & 0xE) == 0 && (rt & 0x30) != 0` | sized-unknown `_BYTE/_WORD/_DWORD/_QWORD/_OWORD` ("weak") |
| `(rt & 0x3E) != 0 && (rt & 0xF) <= 8` | integer or bool |
| `(rt & 0xF) == 9` | floating point |

**cexpr_t** (hexrays.hpp order, offsets from asm/pseudocode) [confirmed]:
`+0 ea`, `+8 op` (ctype_t), `+12 label_num`, `+16 index`, `+24 x` (or `n`/`obj_ea`/`v.mba`),
`+32 y` (or `m`, `a`, `v.idx`), `+40 z` or `ptrsize`, `+48 type`, `+56 exflags`
(EXFL_CPADONE=1, EXFL_PARTIAL=0x20, EXFL_FPOP=4). New nodes are 64-byte `qalloc`s.

**lvar_t** (104 bytes, `mba+432` = vector data, `mba+440` = count) [confirmed]:
`+0 location.type` (1 = ALOC_STACK), `+8 location.stkoff`, `+16 defea`,
`+24 flags` (CVAR_TYPE=2, CVAR_NOWD=0x10, CVAR_ARG=0x100, CVAR_RESULT=0x80,
CVAR_PARTIAL=0x4000, CVAR_NOPTR=0x40000), `+32 name`, `+56 cmt`, `+80 tif`,
`+88 width`, `+92 defblk`, `+96 divisor`.

**Type cache** (`X`, built by `sub_32B210`, 142 lines) [confirmed from asm]:

| off | content | source |
|---|---|---|
| `+0x70` | owner context `Y`; `Y+0x54` = pointer size, `Y+0x50` = int-ish size, `Y+0x60` = back to `X` | |
| `+0xC8` | `char *` | `get_stock_tinfo(STI_PCHAR)` |
| `+0xD0` | `const char *` | STI_PCCHAR |
| `+0xD8` | `_BYTE *` | STI_PBYTE |
| `+0xE0` | `int *` | STI_PINT |
| `+0xE8` | `void *` | STI_PVOID |
| `+0xF0` | `const void *` | STI_PCVOID |
| `+0xF8` | `va_list` | named type |
| `+0x108/+0x110`, `+0x118/+0x120` | signed/unsigned pointer-sized int (`__int64`/`unsigned __int64` when the size is 8, else `int`/`unsigned int`) | `typid = 0x15/0x25` or `7/0x27` |
| `+0x128` | `__m64` | named type |

The ctree code reaches `X` as `visitor+72` and as `ctx+0x60`. `compare_tinfo`
flags used: TCMP_AUTOCAST(2) and TCMP_EQUAL(0) in `sub_32A510`; 0x11 in
`calc_type` for `?:`.

---

### 1. Where pointer typing runs: the ctree typing fixpoint

#### ctree build/retype loop (`sub_2523C0`, 268 lines)

**Purpose.** Builds the ctree from microcode and repeats until types settle.
This is where pointer arithmetic correction and lvar type inference run.
[confirmed from code]

**Algorithm sketch.**
1. Fire `hxe_maturity`-style callbacks via `sub_33E140(…, 8/9/10, …)`.
2. `for i in 0..10`:
   1. `sub_250510` regenerates the ctree body (`cfunc+16`).
   2. `i == 3` → `sub_29E310` (not analysed).
   3. If the mba flag at `*(mba+3) & 2` is set (type recovery enabled):
      * `sub_256040(cfunc)` = **pointer arithmetic correction (§2)**; returns true when it ran.
      * then `sub_2AC820(cfunc, i)` = **constraint-based lvar typing (§3)**;
        `sub_27D2C0` = apply recorded global/data types (`apply_tinfo` in `sub_27BC20`).
      * Exit when neither the lvar typing (`sub_2AC820(cfunc,i)`, then
        `sub_2AC820(cfunc,-1)`) nor the global typing changed anything:
        `if(!sub_2AC820(a1,i) && !sub_27D2C0(..)) if(!sub_2AC820(a1,-1) && !sub_29E310(a1,-1,…)) break;`
3. If `i == 10` (did not converge) a fallback path runs (`sub_3311F0(mba,-1,13)`).

**Takeaway.** Hex-Rays does not type pointers in one pass. It rebuilds the
whole ctree after each round of lvar retyping, up to 10 times. A newly
discovered `T *p` changes how every `*(p+k)` is shaped in the next round.

**Kuna counterpart.** `coreaction_infertypes.rs` (Ghidra `ActionInferTypes`)
has a "7-pass settle ceiling". It is an iteration cap on the lattice, not a
rebuild of the output tree.
**Unlace status.** `TypeInferPass` (`type_infer.rs`) iterates on SSA up to 100
rounds over `PrimitiveType`. There is no "retype, then re-shape C
expressions" loop. The printer shapes addresses once (`c_printer/typed_access.rs`).

---

### 2. Pointer arithmetic correction ("cpa", EXFL_CPADONE)

#### cpa driver (`sub_270860`, 222 lines; called by `sub_256040`, 78 lines)

**Purpose.** Runs three ctree visitors over the body. [confirmed from code]
The vtables were found through `R_X86_64_RELATIVE` relocations
(`[~D1, ~D0, visit_insn, visit_expr, leave_insn, leave_expr]`).

| visitor | vtable | flags | callback | role |
|---|---|---|---|---|
| A | `0x4E07D0` | 0 | `visit_expr` = `sub_26A8B0` (199) | per-lvar **divisor** (GCD of assigned scaled values) |
| B | `0x4E0790` | 6 = CV_PARENTS\|CV_POST | `visit_expr` = `sub_269F40`, `leave_expr` = `sub_276380` | **pointer arithmetic correction** |
| C | `0x4E0810` | 2 = CV_PARENTS | `sub_270050` (454) | divide a scaled index var by its divisor |

**Algorithm sketch.**
1. Visitor A: for `v = n`, `v = x*n`, `v += x*n` (cot_asg / asgadd with a
   `cot_num` factor), `divisor[v] = gcd(divisor[v], n)`. Any other compound
   assignment or inc/dec of `v` sets it to 1. Result: `lvar.divisor`
   (`lvar+96`) = that GCD, or 1.
   `v20 % v22 … *v21 = v22` (Euclid loop) [confirmed from code].
2. Visitor B: post-order. `visit_expr` (`sub_269F40`) prunes subtrees already
   marked `EXFL_CPADONE` (except `cot_memref`):
   `if ((e->exflags & 1) && e->op != 59) cv_flags |= CV_PRUNE`.
   `leave_expr` does the work (below). An INTERR 50210 fires if it returns non-zero.
3. Visitor C: for each lvar collected by B whose divisor ≠ 1 and is not
   rejected by `sub_1C27D0(lvar, mba, width)`, walk again. If every use can be
   divided, rewrite and set `lvar.divisor /= k` (`*(v15+96) /= v50`).
   Effect [inferred]: an index kept as a byte offset (`i*4`) is turned back into
   an element index.
4. Then `sub_27DE80`, `sub_23FD50(cfunc,5)`, `sub_3252D0` (ctree verify).

**Kuna counterpart.** None as a separate phase. Ghidra types `PTRADD/PTRSUB`
during lifting/rules (`propagateAddIn2Out` in `coreaction_infertypes.rs`;
`kuna_elemptr.rs` adds an "element access" vote for `base + W*i`).
**Unlace status.** No divisor analysis. `typed_access.rs` decomposes
`p + scale*i + c` at print time, only when `p` has a declared (DWARF) pointee.

#### cpa `leave_expr` — per-operator dispatcher (`sub_276380`, 890 lines)

**Purpose.** For every expression, after its children are done, decide
whether it is pointer arithmetic or a memory access. If so, rebuild it as
`p[i]`, `p->m`, `&p[i]`, `p + i` with correct scaling, and insert casts.
INTERR 50201/50202 fire if `cot_idx` / `cot_memref` / `cot_memptr` are
already present. So **this pass is what creates `x[i]`, `x.m` and `x->m` from raw
arithmetic**. [confirmed from code]

**Key data.** The visitor object: `+8 cv_flags`, `+16/+24` parents vector
(`parents.back()` = `*(a1+16) + 8*(a1+24) - 8`), `+64` cfunc/ctx, `+72` type
cache `X`. It fills a **cpa request** on its stack and passes it to `sub_275B20`.
Request fields [inferred from initialisation in `sub_276380` and use in `sub_26E0C0`]:

| off | field |
|---|---|
| `+0` | `X` (cache), `+8` visitor |
| `+16` | parents, `+24` parent |
| `+32` | `e` (the expression being rewritten) |
| `+40` | base pointer expr, `+48` extra index expr (for `+=`) |
| `+56/+64/+72` | **term vector** `{expr*, ea, numfmt, coef}` × n (32 B each) |
| `+88` / `+96` | positive / negative constant byte offset |
| `+104/+112` | ea and number format of the first constant |
| `+128` | ea for the result |
| `+436` | access size (deref width) |
| `+440` | "deref already produced" |
| `+448..+453` | flags: is-compound-assign (`+=`), scaled, cast-inserted, … |

**Algorithm sketch (per `e->op`).**
0. Skip if `e` is CPADONE or the parent is `cot_memref`/`cot_ref`.
   Record a type hint for `obj`/`var` operands. `sub_26B3D0` gets the global ea
   or the stack-var frame member; `sub_27E790(mba+808, …)` stores it for the
   global-typing step (`sub_27D2C0` → `apply_tinfo`) [inferred].
1. `cot_asg` (2) → `sub_248660` (295): unifies the pointer casts on both
   sides of `*(T1*)a = *(T2*)b`. If one side is weak (`_DWORD *`) and the other
   has a real pointee, the weak cast is rebuilt as a pointer to the better
   type (`create_tinfo(BT_PTR)` at `0x248ad3`/`0x248fc7`). Matching derefs are
   then stripped (`*(_QWORD*)&a = *(_QWORD*)&b` → `a = b`). [inferred]
2. `cot_asgadd/asgsub` (6/7) when `x` is pointer-like: base = `x`, index = `y`,
   compound flag set.
3. `cot_add` (35): `sub_26BDF0(e, strip)` picks the pointer operand. It prefers
   `x` unless `x` is not pointer-like or `x` is a `cot_ref`; then it uses `y`.
   The other operand is the index. [confirmed from code]
4. `cot_sub` (36): ptr − ptr. If `get_ptrarr_objsize(x.type) > 1`
   (`esi=0xe` at `0x2775d3`), cast `x` to **`char *`** (`X+0xC8`):
   `sub_246B40(x, X, X+200)`. If the types still differ (`sub_245650`), cast
   `y` to `x`'s type. Then recompute the type → integer. ptr − int follows the
   `cot_add` path. [confirmed]
5. `cot_cast` (48) → `sub_26C6D0` (80): drop pointless pointer casts. Example:
   a cast to a weak `_DWORD *` under a deref whose size fits (`sub_26C510`), or a
   `(void *)` cast under a subtraction. Otherwise a cast-of-pointer whose parent
   is `cot_ptr`/`cot_call` and whose pointee is a struct (`(rt&0x2F)==0xD`) also
   becomes a cpa candidate.
6. `cot_ptr` (51) `*x`: strip casts down to the pointer `p`
   (`sub_254FC0`). If `p.type` is a **shifted pointer**
   (`esi=0x11d` at `0x276dbb`) the access always goes to cpa with access size =
   `e->ptrsize`. Otherwise it goes to cpa only when the pointee
   (`GTA_SAFE_PTR_OBJ`, `0x27780a`) is a struct/union or an array, so `*p`
   becomes `p->first` / `p[0]`. Special case `*(T*)&v` with equal sizes and
   matching float-ness (`sub_323990`): fold to `v` or to a member.
7. `cot_call` (57): the callee position is retyped from its function type.
8. `cot_obj`/`cot_var` (64/65) of struct/union type used where the parent is not
   a member access → cpa (offset 0 member).
9. Fallback (`LABEL_41`): a struct-typed lvalue used in scalar context.
   * If `e` is `ptr|idx|memref|memptr|obj|var` (bitmask `25473`=`0x6381` over
     `op-51`): build `*(intN *)&e` with `sub_247510` (make ref),
     `sub_32C2C0` (pointer to an int of the access size), `sub_244320` (make deref).
   * Else cast to an int of the same size (`sub_32C430`, signedness from `sub_255000(op)`).
10. After a rewrite, `sub_283B00` recomputes the types of the parents up to the
    nearest cast. It sets `cv_flags |= 8` (CV_RESTART) and `exflags |= CPADONE`.

**Callers/callees.** Called through visitor B. Main callees: `sub_275B20` (cpa
builder), `sub_248660`, `sub_26C6D0`, `sub_246B40`, `sub_247510`, `sub_244320`,
`sub_283B00`, `sub_27E790`.

#### cpa builder (`sub_275B20`, 326 lines) and linear-form decomposition (`sub_26BEA0` 237, `sub_26B8E0` 205, `sub_275A30` 56)

**Purpose.** Turns `base ± Σ coefᵢ·termᵢ ± c` into a typed access.
[confirmed from code for the decomposition; inferred for the builder ordering]

**Algorithm sketch.**
1. `sub_26BEA0(req, base)` finds the **root pointer**. It strips casts, then:
   * `p + q` / `p - q`: if the pointer operand is already CPADONE, the other
     operand is scaled by `get_ptrarr_objsize(p.type)` (prop 14). If not, the
     scale is 1, because the operand is still a byte offset.
   * `&x[i]`: `i` is scaled by `get_tinfo_size(elem)`. INTERR 50196 if `x[i]`
     is not CPADONE, INTERR 50197 if the size is −1.
   * `&x.m` / `&x->m`: `m` is added to `req+88` (overflow-checked against
     `INT_MAX` or `INT64_MAX` by pointer size). `sub_32D810` checks whether the
     member is the only one (a "wrapper" struct).
   * Then it descends to the next base.
2. `sub_26B8E0(req, expr, ea, coef, fmt)` is the **linear decomposer**:
   * `x << n` (n ≤ 31): coef <<= n.
   * `x * num`: coef *= num.
   * `x + y`: recurse on both.
   * `x - num`: recurse on `x` with +coef, then `num` with −coef.
   * `-x`: coef = −coef.
   * `num`: `req.pos += coef*val` or `req.neg -= …`, overflow-checked.
   * Anything else: push the term `{expr, ea, fmt, coef}`.
   * coef == 0 → INTERR 50195.
3. `sub_275A30` normalises each term (`sub_26BCB0`) and sorts the terms with
   comparator `sub_269EF0` (introsort).
4. `sub_271E40` (110 lines): if the root is `&stkvar` and the offset runs past
   the end of the variable (`stkoff + width`), retarget to the next stack lvar at
   or after that offset, if it is an **array** and the leftover is a multiple of
   its element size. This produces `&next_array[k]`. Frame-argument range excluded.
   [confirmed from code]
5. If the root is a `cot_ref`, struct descent happens in `sub_273A40` (916
   lines; uses `get_tinfo_details`, `GTA_IS_VARSTRUCT`, builds
   `create_tinfo(BT_PTR)` at `0x274438`). Not analysed in depth here; see S-struct.
6. `sub_26E0C0` builds what is left over (next section).
7. If the result is narrower than the access size, or float-ness differs, build
   a typed deref (`sub_2476A0`). Otherwise wrap: `make_pointer(found)` →
   `make_ref` → `make_deref(access size, is_float)`.

#### residual index builder and scale normalisation (`sub_26E0C0`, 724 lines)

**Purpose.** Given the root pointer `R`, the term list and the constant
`c = pos − neg`, produce `R + idx` with the scale divided out. If the scale
cannot be divided out, cast `R` to a pointer to an element that does fit.
This is the `p + N*sizeof(T)` → `p + N` / `p[N]` step. [confirmed from code; the
size props come from asm: 3× GTA_PTRARR_SIZE, 7× GTA_PTR_OBJ, 1× GTA_PTRARR_SUBTIF]

**Algorithm sketch.**
```
esz = get_ptrarr_objsize(R.type)            // element size of R
if parent is cast and access size known:
    pick s = access size if every coef % s == 0 and c % s == 0
for s in (esz):                             // main rule
    if all(coefᵢ % s == 0) and c % s == 0:
        coefᵢ /= s; c /= s; scaled = true
op = req.is_compound ? cot_asgadd(6) : cot_add(35)
if not scaled and R.type is not already char* (sub_32A510(X, R.type, X+0xC8)):
    // cannot index in R's units: cast R
    cast = new cot_cast(R) with exflags = CPADONE
    if R's pointee is a scalar <= 8 bytes and its size is a power of two:
        try halving: esz/2, esz/4, … (<= 32) while every coef and c divide;
        if the new pointee size has a matching pointed type, retype R
        to that narrower pointer and divide
    else: cast type = pointer of byte units
    set EXFL_PARTIAL (0x20) and a "partial type" STA property
idx = sub_26DC70(req, c)                     // Σ coef*term + c as a ctree
choose + or - (sub_26AD80: uses GTA_PTRARR_SIZE and sign of c)
node = new cexpr(op, x=R', y=idx); calc_type; exflags |= CPADONE (| PARTIAL)
```
Post-fixups:
* If the parent is a call and this is the callee, the type must be a function
  pointer (INTERR 52694).
* Pointer-to-array is collapsed to a pointer to the final element (`sub_26DF30`,
  GTA_FINAL_ELEM).
* A float context gets a cast to `uintptr` (`X+0x120`).
* `make_deref` (`sub_244320`) is applied when the access size differs from the
  element size. INTERR 51708 fires if an array element is not 1-byte-alignable.

INTERR 52124/52125 fire in the `R - idx` path if `R` is a pointer whose type
changed, or whose element size is not 1.

**Kuna counterpart.** `kuna_elemptr.rs` commits `T *` when every access through
a base is `W` wide, lands on a whole element, and at least one index is
computed. That is the same divisibility idea, but done as a type vote, not a
tree rewrite. Ghidra's PTRADD carries the element size in the op itself.
**Unlace status.** `typed_access.rs` (`p + scale*i + c` → `p[i]`, `p->m`,
`p[2].m`) and `member_path.rs` (best-fit member) do this at print time, and
only for DWARF-declared pointees. Missing: the divisibility search with
halving, the byte-pointer cast fallback, `EXFL_PARTIAL`, adjacent-stack-array
retargeting, and the divisor-based index normalisation.

---

### 3. Expression typing helpers used by cpa

#### calc_type — result type per operator (`sub_2436E0`, 293 lines)

**Purpose.** `cexpr_t::calc_type`. Called through `sub_2441C0(e, ctx, recursive)`
as `sub_2436E0(out, X, e, &x->type, &y->type, &z->type, lenient)`.
[confirmed from asm: `rcx`=x.type, `r8`=y.type, `r9`=z.type]

**Pointer rules.**
| op | rule |
|---|---|
| `x + y` | ptr+int → `x.type`; int+ptr → `y.type`; ptr+ptr → INTERR 51654 (or empty when `lenient`) |
| `x - y` | ptr−int → `x.type`; ptr−ptr → if `sizeof(x.type) == ptrsize` then `X+0x118` (signed ptr-sized int, i.e. ptrdiff) else signed int of that size; int−ptr → INTERR 51653 |
| `*x` | `GTA_PTRARR_SUBTIF(x.type)` (`esi=0xd` at `0x243b2b`: pointer **or array** element). If `ptrsize > 0` and it differs from that size → int of `ptrsize` (`sub_32C270`). If `x` is not a pointer: must be a struct, else INTERR 51091 |
| `&x` | if `x.type` is an array (`get_tinfo_details(BT_ARRAY)`), then `elem *` (`create_tinfo(BT_PTR)` at `0x243c8d`), else `make_pointer(x.type)` |
| `x[y]` | `GTA_PTRARR_SUBTIF(x.type)`, else INTERR 50397 |
| `x.m` | member at offset `m` (`sub_23E280(out, x.type, m, exflags>>8 & 1 /*VFTABLE*/)`) |
| `x->m` | `x.type` must be a pointer: `GTA_PTR_OBJ` → member; else INTERR 50398 |
| `!`, `&&`, `\|\|`, comparisons | `bool` (typid 8) |
| `<<`, `>>` | promote to int if smaller than `X+0x82` (int size) |
| `?:` | unify with `compare_tinfo(…, 0x11)`, arithmetic conversion `sub_242920` |

#### make_pointer (`sub_32C540`, 32 lines) — the `void *` default

```
out = (tif nonempty && (rt & 0xF) != BT_BITFIELD)
        ? create_tinfo(BT_PTR, BT_PTR, ptr_type_data{obj=tif})   // INTERR 51632 on failure
        : copy(X->cache + 0xE8)                                 // void *
```
[confirmed from asm: `esi=edx=0xa`, `add rsi,0xe8`]. So `&<untyped>` and
"pointer to nothing known" is `void *`. `sub_32C2C0` / `sub_32C430` / `sub_32C270`
build "pointer to intN" and "intN" with sign from `get_scalar_bt(size)`.

#### retype-or-cast (`sub_246B40`, 309 lines) and cast/ref/deref constructors

**Purpose.** `sub_246B40(e, X, &T)` gives `e` the type `T`, inserting a
`cot_cast` only when needed. This is the **cast insertion point** used by all
cpa code. [confirmed from code]

**Algorithm sketch.**
1. Recompute `e.type`. Ignore a weak or empty `T`, except for an enum of a
   different size.
2. Strip pointer attributes from `T` (`del_tinfo_attr`).
3. **float vs non-float mismatch**: a `cot_num` becomes `cot_fnum` (op 62,
   `sub_11D360` converts the value). Otherwise `sub_248280` inserts a conversion.
4. **numbers** (`cot_num`, not enum/char/stroff-formatted):
   * size ≤ 8 → retype the literal (`sub_240CD0`).
   * `T` is a pointer and the value is a mapped address (`is_mapped`, fits the
     address mask) → replace the number with `&obj` (`sub_247D90` + `sub_247510`),
     then retype recursively. This is how **a constant becomes a pointer to a global**.
   * On 64-bit, a value that fits in an int keeps the `int` literal type (typid `0x17`).
   * enum `T` → enum member lookup (`sub_240760`).
5. If `!castable(e.type, T)` (`sub_32A510`: TCMP_AUTOCAST, or `va_list`
   equivalence via `X+0xF8`/`X+0x100`) and the sizes match → `sub_244D80(e, T)`
   wraps `e` in `cot_cast(T)` (it allocates a 64-byte node, moves `e` into `x`,
   sets `op=48`). Otherwise the type is just copied.
6. Helper-call (`cot_helper`) intrinsics have their prototype return type
   rewritten (INTERR 51943).

Constructors [confirmed from code]:
* `sub_247510(X, e)` = make_ref: `&*p` → `p`; `&(T)*p` → `p` typed
  `make_pointer(T)`; else a new `cot_ref`.
* `sub_244320(X, e, size, is_float)` = make_deref: `*&v` → `v` (non-array
  obj/var); else cast to a pointer to a sized int and a new `cot_ptr` with
  `ptrsize = size`.
* `sub_255850(dst, src)` replaces `dst` by `src`. `sub_283B00` re-types the
  parents after a change.

**Kuna counterpart.** Ghidra inserts casts at print time
(`CastStrategy`, `kuna_ctypes`/`kuna_declhightype` in `p9_emit`).
**Unlace status.** `unlace-output` has a `CExpr` cast node, but casts come from
printer rules, not from a typed retype-with-castability check. There is no
`castable(T1, T2)` predicate over a rich type, and no number → `&global`
retyping during typing.

---

### 4. Constraint-based lvar typing (how a variable *becomes* a pointer)

#### round driver (`sub_2AC820` 224 → `sub_2AC610` 114)

**Purpose.** One round of lvar/global type inference over the current ctree.
It returns "changed". [confirmed from code]

**Algorithm sketch.**
1. Build the solver state `S = {X (cfunc+216), cfunc}`.
   `sub_29D1D0` runs the **constraint-generating visitor** (vtable `0x4E0DF8`,
   `visit_expr` = `sub_2AA180`) over the body.
2. If the function has a result lvar, seed: `term(var result) ≡ return type` (weight 1).
3. `sub_2AC610`:
   * `sub_2A1C00` collects the lvar candidates.
   * `sub_2A3780` solves the lvars (count of changes).
   * `sub_2A1800` collects the global/data candidates.
   * `sub_2ABC40` solves those.
   * Returns the sum; `> 0` means changed.

**Data model** [inferred from construction sites; kinds confirmed by switch arms]:
* **term** = `{int kind; uint flags; payload}` (16+ bytes):
  | kind | payload | meaning |
  |---|---|---|
  | 0 | attribute bits in `flags` | property only: `8` = used as integer/scalar, `0x10` = pointee used as integer, `0x40` = passed to a non-const pointer parameter, `1`/`2` signedness |
  | 1 | `tinfo_t` | a concrete type |
  | 2 | `term *` | "pointer to ⟨term⟩" (a fresh inner kind-0 term = unknown pointee) |
  | 3 | list | struct shape (via `sub_29BE20`) [guess] |
  | 4 | `term *` | "array of ⟨term⟩" (`create_tinfo(BT_ARRAY)` at `0x29b7d2`) |
  | 6 | `cexpr_t *` | type of an expression |
  | 7 | — | the function's return value |
  | 8 | `{call*, argidx}` | argument slot of a call; `argidx = -1` = the call's result |
* **equation** = `(termA, termB, relation)` added by `sub_2A8310(S, &pair, 0)`.
  Relation 1 = same type, 2 = "A describes B" (attribute or pointer-shape),
  3 = additive (`x ± y`, one side may be a pointer). It is dropped when either
  side is the literal `0`. An expression that is a `cot_var` is routed to that
  lvar's candidate list (`sub_2A7AB0`); otherwise it goes to a general list (`sub_2A77F0`).

#### constraint generator (`sub_2AA180`, 1169 lines — visit_expr)

**Purpose.** Turns each use of an expression into typing evidence.
[confirmed from code; the reading of individual flag bits is inferred]

**Algorithm sketch (by context).**
| context | constraint |
|---|---|
| parent `x = y` | `sub_2A9A40`: `term(x) ≡ term(y)` unless `y` is the literal 0 |
| `e` is an argument of a call | `term(arg slot) ≡ term(e)`. If the formal is a non-const pointer → `attr 0x40` on `e` (`sub_2A8440(…, 64)`). With a known prototype, `sub_2A7000` may push `e`'s type back into the callee's prototype (interprocedural) |
| `memcpy(d, s, n)` helper | `sub_2A8B40` links `d`/`s` |
| `return e` | `sub_2A8CB0`: `term(e) ≡ return type`; the result lvar is queued |
| arithmetic/bitwise/shift/mul/div operands, compound-asg rhs | `sub_2A8690(op, 0)` → `attr 8` ("used as integer") on each operand, and on `*x`'s pointer as `attr 0x10` |
| `x[y]` | `attr 8` on `y` only (index), via a sub-visitor |
| comparisons, `?:` | `sub_2A8DC0(x, y, op)`: `term(x) ≡ term(y)`, plus a sign hint |
| `x + y`, `x - y` | `sub_2A94E0`: relation 3 between `x` and `y`. If either is a number that is not a mapped address, nothing is emitted (so `p + 8` gives no "p is int" vote) |
| `(T)x` | `term(e) ≡ term(x)` when float-ness agrees; `sub_2A8780` sign hint on `x` |
| **`*x`** | `sub_2A9000(S, x, 0)`: `ptr-to(?) ≡ term(x)` (relation 2). If `x` is `(T*)&y` or `(T*)array` with a non-weak, non-unknown pointee: also `term(y) ≡ T`'s pointee (so `*(int*)&v` types `v` as `int`) |
| **`&e`** | `sub_2A9000(S, 0, parent)`: if the parent is `=` or a comparison, both of its operands get `ptr-to(?)` |
| `num` under `+` with a stroff representation | `sub_2A9670`: struct-offset hint |
| `var` with a defined type | `term(e) ≡ var.type` |
| `exflags & EXFL_FPOP` | `sub_299AE0`: float use |

**Term normalisation** (`sub_2A0060`, 126 lines) [confirmed from code]:
* kind 8 → kind 1 with `get_tinfo_property(calltype, GTA_FUNC_ARG + idx)`
  (the one computed-register property call). It stays symbolic if the call is
  through a cast, or the arg type is unknown, size −1 or weak (`sub_32E340`).
* kind 7 → kind 1 with `GTA_FUNC_RET` when the mba has a final type (`mba+320`).
* kind 6 → `sub_29F9A0`: trusted expression types become kind 1:
  * typed lvars (`CVAR_TYPE`), and globals and calls with a user prototype (`sub_374CE0`);
  * `*x` of a trusted pointer → pointed type (GTA_PTR_OBJ);
  * `&x` → pointer to it, or element pointer for arrays;
  * comparisons → bool.
* `flags |= sub_29C0C0(term)`: bit 4 when an untyped lvar takes part in
  pointer-sized `+/-` (so a "pointer" vote may come from `var + num`); bits
  128/136 for numbers that look like addresses (`sub_2993E0`).

#### candidate collection and solver (`sub_2A1C00` 335, `sub_2A3780` 699, `sub_2A3210` 271)

**Purpose.** Choose one type per lvar from its weighted candidates, preferring
specific, non-weak, non-`void` pointer types. [confirmed from code for control
flow; scoring semantics inferred]

**Algorithm sketch.**
1. `sub_2A1C00`:
   * For each relation-1/2 equation whose side is a `var`, `&var` or
     `var++/--`, or the result var: `sub_2A1180(mba, out, lvar, term, weight, width)`
     appends a candidate (array-typed lvars are skipped).
   * Also, for each untyped stack lvar: look up the IDB frame member at
     `stkoff` (`get_func_frame` + `find_tinfo_udt_member`). If it is a real type
     (not weak, not unknown, not float-only), add it as a weight-1 candidate.
2. `sub_2A3780`, per lvar entry (48 B: `{lvar*, cand vec, …, +32/+36 two
   counters, +40 flags}`):
   1. **Ordering:** if a candidate is `&other` and `other` is still untyped,
      re-append the entry at the end (dependency order).
   2. Skip the result var when the function type is final.
   3. `best = sub_2A3210(entry)` (**merge**):
      * normalise each candidate with `sub_29C470` (see below);
      * sort (`sub_2A23A0`, `sub_2A0A30` comparators) and select (`sub_29DAA0`);
      * if any candidate is a pointer, drop `void *` / weak-pointee candidates;
        a `LPVOID` typedef name is treated as `void *`;
      * collect the flags (`4` = float, `0x80`).
   4. `w_new = is_weak(best)`, `w_old = is_weak(lvar.tif)` (+1 if CVAR_PARTIAL).
      `sub_32E340` = "contains a sized-unknown (`_DWORD`-style) part".
   5. If the width differs: reject, unless the lvar is CVAR_NOWD or the new type
      is narrower and a split visitor (`0x4E0E78`) succeeds.
   6. Decision:
      * same type and `w_new < w_old` → accept;
      * otherwise `sub_36E320(mba, lvar, best)` must allow the change; then
        **pointer rules**: a non-`void` pointer beats `void *`; a pointer does not
        replace an integer while the integer attribute (`attr 8`) is present,
        unless a per-mba switch (`sub_29D2B0`) permits it;
      * otherwise lower weakness wins; ties → `sub_29A3A0` (function-pointer
        tiebreak), then `score_tinfo(new) > score_tinfo(old)` for complex types.
   7. Accept → `sub_1EF950(lvar, X, best, …)` (set lvar type), update
      CVAR_TYPE/CVAR_PARTIAL, count.
   8. After the loop, CVAR_PARTIAL is cleared on vars not touched in later rounds.
3. `sub_29C470` (74) normalises one candidate. It materialises the term
   (`sub_29B3C0`), then:
   * `attr 0x40` + pointer to const → drop the const (`sub_32C700`);
   * `attr 0x10` on a pointer-to-pointer → pointer to a ptr-sized int
     (`sub_32C270` + `make_pointer`);
   * array → pointer to element;
   * badness = 1 for `void *` (pointee `(rt&0x3F)==1`) or weak, +1 for float flag.
4. `sub_29B3C0` (209) **materialises** a term:
   * kind 2 → `create_tinfo(BT_PTR, inner)` (`0x29b541`); with an unknown inner it fails, so no candidate;
   * kind 4 → `create_tinfo(BT_ARRAY)`;
   * kind 6 `var` → `var.tif` (array → element pointer);
   * kind 6 `&var` → `make_pointer(var.tif)`;
   * kind 6 `num` that is an address of a typed item (`sub_2993E0`,
     `sub_261AA0`, `sub_3810A0`) → pointer to that item's type, or `void *`;
   * kind 8 → `GTA_FUNC_ARG + i`;
   * a BT_UNKNOWN result is replaced by a copy.

**Where `char *` / `void *` come from** [confirmed sites]:
* `void *`: `make_pointer` of an empty, unknown or bitfield type (`X+0xE8`).
* `char *`: the ptr−ptr normalisation (`X+0xC8`), and the "already byte-scaled"
  check in `sub_26E0C0` (`sub_32A510(X, R.type, X+200)`).
* `X+0xD0` (STI_PCCHAR, `const char *`) is probably the type of string literals. [guess: I did not trace a `cot_str` use site]
* No rule makes a plain dereferenced variable `char *` by default. Without a
  concrete pointee the candidate does not materialise. The variable keeps its
  microcode integer type and is printed through casts (`*(_DWORD *)(a1 + 8)`).
  [inferred]

**Kuna counterpart.**
* `coreaction_infertypes.rs`: a bidirectional lattice with `typeOrder` trimming
  instead of weighted candidates.
* `kuna_ptrfromuse.rs` ("a function input used only as a memory base is a pointer").
* `kuna_charptr.rs` (`char *` from char-only uses / declared `char *` callee args).
* `kuna_ptrdepth.rs` (cap pointer nesting; Hex-Rays has the analogous "pointer
  to pointer used as integer → pointer to intN" collapse in `sub_29C470`).
**Unlace status.**
* `type_constraint_solver.rs` is "TIE-style" with
  `Equal/Subtype/PointsTo/SameType`, but `PointsTo` only marks `addr` as
  `PrimitiveType::Ptr`. Its doc says "the pointee component is recorded but
  not yet acted on".
* `PrimitiveType::Ptr` carries no pointee. Pointees live only in
  `composite_var_types: BTreeMap<SsaVarnode, Type>` (written by
  `printf_type_infer`, `whole_prog_type_unify`, `cpp_method`).
  `seed_from_composites` collapses every `Type::Ptr(_)`/struct/array to
  `PrimitiveType::Ptr`.
* Missing: weighted candidates with weakness/score ordering; the "integer
  attribute blocks pointer" rule; `void *` demotion when a typed pointer
  exists; frame-member seeding; pushing types back into callee prototypes;
  dependency ordering for `&other` candidates.

---

### 5. Shifted pointers (GTA_IS_SHIFTED_PTR, 3 call sites)

#### cot_ptr through a shifted pointer (`sub_276380` @ `0x276dbb`)

If `is_shifted_ptr(p.type)` then `*p` always goes through cpa with the access
size taken from `e->ptrsize`. So `*(p + k)` is resolved against the shifted
pointer's parent struct and delta (`ADJ(p)->field`). [confirmed from asm; the
ADJ rendering itself is in the printer, not checked]

#### user struct-offset operands → typed pointer (`sub_C1380` 146, `sub_C19E0` 358; dispatcher `sub_C25B0` 7)

**Purpose.** A microcode-level hint. It runs when the original instruction
operand has a user struct-offset representation (IDA "T" key).
[confirmed from code; the exact output form is inferred]

**Algorithm sketch.**
1. The insn must be `m_stx`/`m_ldx` (opcode 1/2). The address operand is
   `d` (`insn+64`) for stx and `r` (`insn+48`) for ldx (`mop_t` 16 B: `+0 t`, `+8`
   payload). The address is `mop_d` of `m_add`/`m_sub` (12/13).
2. Scan operands 0..7 for `is_stroff` and get `get_stroff_path`. Then
   `guess_tinfo(tid) == GUESS_FUNC_OK(2)` gives the struct type.
3. `sub_32D810` resolves the member at the delta. `sub_BA670` (254, recursive)
   walks arrays/structs (GTA_ARRAY_ELEM, GTA_PTRARR_SUBTIF). It requires
   `!is_shifted_ptr(…)` in `sub_C1380`. `sub_C19E0` handles the shifted case
   with `print_tinfo` for the name.
4. `sub_B9100` builds the typed access path. `sub_C0E10` rewrites the operand
   as a typed pointer (+ member path). Failure → `sub_C0A20` (attach
   annotation only). Success sets `visitor+72 = 1` (changed).

**Kuna counterpart.** None found (no shifted-pointer concept in `p5_types`).
**Unlace status.** No shifted-pointer type (`rg -i shifted` hits only lifter
temporaries). No use of IDB struct-offset operand representations.

---

### Gaps / open questions

1. `sub_273A40` (916 lines): the struct/member descent inside cpa (`p->a.b[i].c`)
   was not traced. It is the bridge to the struct-recovery section
   (`get_best_fit_member` users: `sub_E0600`).
2. The exact semantics of equation relation codes 2 and 3, and the kind-0
   attribute bits beyond 8/0x10/0x40, are inferred from use sites only.
   `sub_2A7AB0` (373) and `sub_2A77F0` were not read.
3. `sub_29DAA0` (268, candidate selection) and the sort comparators
   `sub_2A23A0`/`sub_2A0A30`/`sub_2A0830` decide precedence among equal-weakness
   candidates. Not decoded.
4. `sub_2ABC40` / `sub_2A1800` (global-variable typing) and `sub_27BC20`
   (`apply_tinfo` to the IDB, `"va_list"` special case) were only identified.
5. Visitor C (`sub_270050`, 454 lines): which index variables it rewrites, and
   how, is inferred from its driver only.
6. The `hxe_*` event numbers passed to `sub_33E140` (8/9/10) were not mapped to
   hexrays.hpp names.
7. I did not run IDA. The confirmations are static (pseudocode +
   disassembly), not traced on a sample. A useful next step is a small
   C fixture (`int *p; p[i]`, `char *s; s+i`, `struct S *q; q->f`, ptr−ptr,
   `*(int*)&local`). Compare Hex-Rays output against these rules and against
   unlace `--log unlace::cprinter` traces.
8. For unlace the main structural gap is a pointee-carrying type in the SSA
   lattice. `PrimitiveType::Ptr` has no pointee, and `composite_var_types` is a
   second source of truth that is collapsed back into `Ptr`. All the Hex-Rays
   rules above (scaling by `GTA_PTRARR_SIZE`, `void *` demotion, the
   attribute-8 veto) need the pointee.

---

## S3 — Hex-Rays struct field recovery: offset access → `memptr`/`memref`, frame structs, synthesized types

Scope: how hexx64 (Hex-Rays 9.3sp1) turns `base + offset` into `x->m` / `x.m` / `x[i]`,
how it chooses union members, how it uses user struct offsets (`stroff`) from the
disassembly, how it creates stack frame members, and when it creates new array or
struct types. The pipeline, lvar allocation and the printer are covered in
`research/hexrays-algorithms-deep.md` and `research/hexrays-algorithm-map.md` and are
not repeated here.

### Method and evidence levels

* Pseudocode: the per-function hexx64 dump (addresses below are dump addresses).
* **The dump drops all arguments of kernel imports** (`get_tinfo_property()` with no
  arguments; 1710 of 1712 call sites). To recover `GTA_*`, `STA_*`, `STRMEM_*` and
  `apply_tinfo` flags, I disassembled the stripped `hexx64.so` from the local binaries
  tree with `objdump`. That build is **not byte-identical** to the dump build
  (function addresses are shifted non-linearly), so each dump function was matched to
  a binary function (FDE ranges from `.eh_frame`) by the Jaccard similarity of its
  import-call multiset. Match scores are quoted as `bin@addr (J=…)`. Argument values
  are the `mov esi/edx, imm` before each `call …@plt`.
* String literals the dump does not show (format strings passed to internal helpers)
  were read from the binary's `.rodata` (`"ADJ"`, `"fld_%d"`).
* Labels: **[confirmed]** = read directly in dump code or binary disassembly;
  **[inferred]** = follows from several confirmed facts; **[guess]** = plausible, not
  verified.

SDK layouts used throughout (x64, from `hexrays.hpp` / `typeinf.hpp`, consistent with
every access seen in the dump):

| struct | field offsets |
|---|---|
| `citem_t` / `cexpr_t` (64 bytes, `qalloc(64)`) | `ea`+0, `op`+8, `label_num`+0xC, `index`+0x10, `x`+0x18, `y`/`m`/`a`+0x20, `z`/`ptrsize`+0x28, `type`+0x30, `exflags`+0x38 |
| `udm_t` (144 bytes; vectors stride 144) | `offset` (bits)+0, `size` (bits)+8, `name`+16, `cmt`+40, `type`+64, `repr`+72, `effalign`+128, `tafld_bits`+132, `fda`+136 |
| `minsn_t` | `opcode`+0, `iprops`+4, `next`+8, `prev`+16, `ea`+24, `l`+32, `r`+48, `d`+64 (`mop_t` is 16 bytes: `t`+0, `oprops`+1, `valnum`+2, `size`+4, union +8) |
| `ctree_visitor_t` / `cfunc_parentee_t` | `vtable`+0, `cv_flags`+8, `parents`+16 (ptr,size,cap), `bodies`+40, `func`+64 |
| `lvar_t` | stride 104 in `mba->vars` (`mba+432`) |

Type-byte tests that recur: `(realtype & 0x2F) == 0x0D` → struct or union;
`(realtype & 0x3F) == 0x1D` (dec 29) → union; `& 0xF == 0xA` → pointer; `0xB` → array;
`0xC` → function; `0x9` → bool. (`get_tinfo_property(tif, GTA_REALTYPE=2)`, confirmed
from the binary at every call site checked.)

### Where it sits in the pipeline

```
microcode (before lvars)
  sub_C25B0 → sub_C1380 / sub_C19E0     seed operand types from user `stroff` in the disassembly
  sub_1F8DC0 → sub_CE6F0                 idioms: CONTAINING_RECORD, _LIST_ENTRY, lvar pairs
                └ sub_C8120              "recognized structure copy" (calc_tinfo_gaps, tinfo_get_innermost_udm)
  sub_E9680 → sub_E7130 → sub_E0600      icall target = struct member named by the call insn's stroff
  sub_232C90/… → sub_2309F0              create/retype IDA stack-frame members for stack lvars

ctree (sub_2523C0, up to 10 iterations)
  build ctree (CMAT_BUILT) … sub_256040
     └ sub_270860   CPA driver; ends with set_maturity(CMAT_CPA = 5)
          visitor vtbl off_4E0790, cv_flags = CV_PARENTS|CV_POST (6)
          └ sub_276380  per-expression CPA callback (sets EXFL_CPADONE, CV_RESTART)
               └ sub_275B20 → sub_273A40  walk "base + offset" through the pointee type
                    ├ sub_272C50  struct/union member → new cot_memptr / cot_memref
                    │    ├ find_tinfo_udt_member(STRMEM_SKIP_EMPTY|OFFSET), sub_32D810 fallback
                    │    └ sub_272540  union member choice (user path, insn stroff path, scoring)
                    ├ sub_270E10  array / pointer step → cot_idx (may retype an object to an array)
                    └ "ADJ" helper for negative offsets (shifted pointers)
               └ sub_27E790  record (object, stride, offset, type) in an access map
  sub_27D2C0 → sub_27D1E0 → sub_27BC20 → sub_27AE10
               turn the access map into array / `fld_%d` struct types; apply them
               (apply_tinfo for globals, STA_UDM_TYPE for frame members); if anything changed,
               the outer loop re-runs ctree generation

user actions
  sub_399920 "Create new struct type..." → sub_2574C0 (struct from one variable's accesses)
```

`sub_2523C0` fires `hxe_maturity` (event 10) with `CMAT_ZERO`/`CMAT_BUILT` around ctree
generation and loops at most 10 times; when `sub_27D2C0` (apply collected types) or
`sub_2AC820`/`sub_29E310` report a change it regenerates; on hitting 10 it emits warning
13 [confirmed: `for ( i = 0; i != 10; ++i )`, `sub_3311F0(..., -1, 13, ...)` when
`i == 10`]. The loop body is guarded by an mba flag bit (`(*(_BYTE *)(v34 + 3) & 2)`)
[confirmed]; which user option sets it is unknown [guess: a "propagate types" setting].

---

#### CPA visitor callback (`sub_276380`, 890 lines)

**Purpose.** The pointer-arithmetic-correction (CPA) step. For each expression whose
type is a pointer or a struct, rewrite raw arithmetic or dereferences into typed
accesses. This is where `*(T *)(p + 8)` becomes `p->field`. [confirmed by the
`CMAT_CPA` maturity set in its driver and by what it builds]

**Key data structures.**
* `a1` is a `cfunc_parentee_t`-style visitor: `parents` vector at +16/+24, the parent
  is `parents[size-1]` (`*(*(a1+16) + 8 * *(a1+24) - 8)`); `a1+64` = `cfunc_t*`;
  `a1+72` = a per-function type context (`cfunc+216` in the driver), whose `+112` is
  the til/type helper and whose `+808` is the access map (below) [confirmed offsets;
  names inferred].
* Returning with `*(a1+8) |= 8` sets `CV_RESTART` [confirmed: header value `CV_RESTART
  0x0008`].
* `exflags & 1` = `EXFL_CPADONE`, checked on entry and set on exit [confirmed].
* A ~0x1D0-byte path-context struct is built on the stack (`v115…v139`) and passed to
  `sub_275B20`: `+0` cfunc ctx, `+8` visitor, `+0x10` &parents, `+0x18` parent,
  `+0x20` the expression, `+0x28` pointer-base expression, `+0x30` variable index term,
  `+0x58` remaining byte offset, `+0x60` target delta, `+0x80` ea, `+0x88` current type,
  `+0x1B4` access size [confirmed from the field stores; roles inferred].

**Algorithm sketch.**
1. Skip if `EXFL_CPADONE` is set, or if the parent is a `cot_memref` (59) or `cot_ref`
   (52) [confirmed: `== 59 || == 52 → return 0`].
2. Peel `cot_cast(cot_ref(x))` of equal size and `cot_ref(x)` to the underlying object.
   If the object is a `cot_obj`/stack `cot_var`, compute its key with `sub_26B3D0` and
   record a whole-object access through `sub_27E790` (feeds array/struct synthesis).
3. Dispatch on `op`:
   * `cot_asg` (2): `sub_248660`.
   * `cot_asgadd`/`cot_asgsub` (6/7) on a pointer: base = `x`, offset = `y`.
   * `cot_add` (35): `sub_26BDF0(e,0|1)` picks the pointer operand; the other operand is
     the offset.
   * `cot_sub` (36): pointer − pointer or pointer − int (`sub_246B40`/`sub_245650`
     reconcile types first).
   * `cot_cast` (48): handles `(T*)&x` and cast-of-pointer chains via `sub_26C6D0`.
   * `cot_ptr` (51): `*(&x)` collapses; `*(cast(&x))` with equal sizes collapses to `x`;
     otherwise the address operand is the base, access size = `ptrsize`.
   * `cot_ref` (52), `cot_call` (57), `cot_obj`/`cot_var` (64/65): a struct-typed object
     used as a scalar becomes a member access at offset 0.
   * `cot_idx`, `cot_memref`, `cot_memptr` must not appear yet: INTERR 50201 and 50202
     [confirmed]. So CPA runs before any member/index node exists.
4. Fill the path context and call `sub_275B20`, which returns the rebuilt expression.
   Splice it in (`sub_255850` replace, `sub_255630` free), set `EXFL_CPADONE`, request a
   restart.
5. If no typed path is possible and the expression is a struct used through a pointer,
   fall back to a cast: `sub_32C2C0` makes `T *` and `sub_244320` wraps the expression
   (step at lines 452–482).

**Callers/callees.** No direct callers, so it is a visitor vtable slot [inferred: likely
`leave_expr`, because `CV_POST` is set and it checks `EXFL_CPADONE` on children first].
Driver `sub_270860` (calls `sub_23FD50(a1, 5, …)` = set `CMAT_CPA`) [confirmed].
Callees: `sub_275B20`, `sub_27E790`, `sub_26B3D0`, `sub_26AE90` (expected type from
context), `sub_32A510` (type compatible?), `sub_283B00`.

**Kuna counterpart.** Ghidra splits this across `RulePtrArith` (+ `AddTreeState`,
`crates/kuna-decomp/src/substrate/addtreestate.rs`, 791 lines, full port) and
`RuleStructOffset0` (`p3_dataflow/ruleaction_5.rs:828` and `:1035`). In Kuna both rule
bodies are **no-op stubs** (`STUB(W6)/STUB(W3-varnode)`). Rendering then uses
`Datatype::get_sub_type` / `down_chain` (`substrate/dtype.rs:2757`, `:7082`).

**Unlace status.** No IR- or AST-level CPA pass. The C printer does the rewrite at print
time: `c_printer/typed_access.rs` (`p + scale*i + c` through a declared pointee, 259
lines) and `c_printer/member_path.rs` (235 lines). These only work when the base has a
**DWARF-declared** pointee (`Pointee::Struct(String)` looked up by name in
`StructLayouts`). There is no `EXFL_CPADONE`-like "done" mark, no restart, and no
recording of accesses for later type synthesis.

---

#### Access-path builder (`sub_273A40`, 916 lines) with entry `sub_275B20` (326 lines)

**Purpose.** Starting from a base expression of known pointee type and a remaining byte
offset, emit the chain of `cot_idx` / `cot_memptr` / `cot_memref` (and `ADJ(...)`) until
the remaining offset is 0 or no type matches. [confirmed]

**Key data structures.** The path context (above). `sub_26CA00` loads the current
pointee type into ctx+0x88 and returns its size; ctx+444 records whether that type came
from a pointer (1) or array (|2) [confirmed]. ctx+0x58 is the remaining offset and
ctx+0x60 the delta to reach; INTERR 50183 fires if a step consumes more than the
remaining offset [confirmed].

**Algorithm sketch.**
```
sub_275B20(ctx):
    base = sub_26BEA0(ctx, ptr_expr); copy it
    if variable index present: sub_26B8E0 normalises sign (cot_sub/cot_asgsub ⇒ −1)
    e = sub_271E40(ctx, base)                 # try a direct struct-typed rewrite
    if e is cot_ref: record access(obj_key, stride, offset, type) via sub_27E790
    e = sub_273A40(ctx, e)                    # the walk
    e = sub_26E0C0(ctx, e, ...)               # final type fit, may add casts
    if access size > type size: wrap in a cast (sub_2476A0)
    ...
sub_273A40(ctx, e):
    loop:
      if e is cot_ref:  undo &x when x is not an array (sub_255850); INTERR 50191/50192
      elsize = sub_26CA00(ctx, e)            # pointee size of current level
      rem = ctx.off - ctx.delta
      if rem < 0 and type is a struct with a declared shift (v158 = shifted-ptr delta):
          build helper call  ADJ(e)  of the shifted parent type         # [confirmed "ADJ"]
          continue
      if index term or rem >= elsize:
          e = sub_270E10(ctx, e, ...)  → cot_idx / pointer step; ctx.off -= n*elsize
          continue
      if current type is struct/union:
          if sub_26D870(ctx, rem): stop (an insn stroff names a different struct)
          e = sub_272C50(ctx, ..., rem, ...)     → new memptr/memref
          if ctx.off == ctx.delta and the result type already equals the target: stop
          continue
      if array of struct at rem: pick first array member, continue
      stop
```
The negative-offset branch builds a one-argument function type whose argument is
named `"ptr"` and a `cot_helper` named by `qvsnprintf` from the rodata string
`"ADJ"` (binary `0x41a2f5`), then a `cot_call` (op 57) [confirmed]. This is IDA 9's
shifted-pointer rendering, `ADJ(p)->field`.

The divide-by-element step handles signed offsets and the 32/64-bit sign bit
(`0x80000000` vs `0x8000000000000000` chosen by `mba->...+24 == 8`) [confirmed].

**Callers/callees.** `sub_276380 → sub_275B20 → sub_273A40`. Callees: `sub_272C50`,
`sub_270E10`, `sub_26CA00`, `sub_26D3F0/26D4E0/26D610` (index/stride checks),
`sub_26D870` (insn `is_stroff` + `compare_tinfo`), `sub_26D9B0`, `sub_26D070`
(can the walk go through this pointer level?), `sub_2426C0` (helper ctor),
`create_tinfo`.

**Kuna counterpart.** `AddTreeState::{spanAddTree, calcSubtype, buildMultiples,
buildExtra}` in `addtreestate.rs` split one add-tree into PTRADD (multiples), PTRSUB
(sub-type offset) and an extra INT_ADD; the nested walk is
`Datatype::get_sub_type`/`down_chain` in `dtype.rs`. Kuna has no shifted-pointer form.

**Unlace status.** `MemberPath` in `member_path.rs` does the nested walk (struct → field
→ nested struct / array element) with a depth cap of 16, but only for **exact leaf
hits** (`within == 0 && field.size == width`); partial accesses stay raw. No `ADJ`
(negative offsets fall back to raw output), no index merging into an inner array, no
union handling (union layouts are not in `StructLayouts`).

---

#### Member node builder (`sub_272C50`, 449 lines) + byte-offset lookup (`sub_32D810`, 43 lines)

Binary: `sub_272C50` ↔ bin@0x270f90 (J=0.85); `sub_32D810` ↔ bin@0x32a3b0 (J=0.80).

**Purpose.** Find the member of the current struct/union at the remaining offset and
allocate the `cot_memptr`/`cot_memref` node. [confirmed]

**Key data structures.** A stack `udm_t` (`v58`: `offset` bits = `8 * a5`, `name`
`v59/v60`, `type` at +64, `tafld_bits` read through the qword at +128: `v66 & 0x20_0000_0000`
= `TAFLD_BASECLASS`, `v66 & 0x100_0000_0000` = `TAFLD_VFTABLE`) [confirmed layout,
flag mapping inferred from the 32-bit shift].

**Algorithm sketch.**
1. `kind = realtype & 0x3F`. If union (29): member index = `sub_272540(...)` and the
   lookup uses `STRMEM_INDEX` (edx = 1). Else the lookup uses
   `STRMEM_SKIP_EMPTY | STRMEM_OFFSET` (edx = `0x20000000`) on `8 * offset` bits.
   [confirmed from binary `mov DWORD PTR [rbp-0x188],0x1` / `0x20000000` before
   `find_tinfo_udt_member@plt`]
2. If no member starts there, scan **downwards**: for `off = min(sizeof(udt), offset-1)
   … 0`, call `sub_32D810(udm, &type, off, 0)` which is `find_tinfo_udt_member` with
   `STRMEM_SKIP_EMPTY | STRMEM_AUTO` (`0x20000002`; with `a4 & 2` it adds
   `STRMEM_VFTABLE`) [confirmed: `and ecx,2; sbb; and edx,0xf0000000; add
   edx,0x30000002`]. So Hex-Rays picks the nearest member at or before the offset,
   then lets the outer loop handle the remainder (often as an index into that member).
   Note: **it does not call `udt_type_data_t::get_best_fit_member` here**; the only
   caller of that kernel function in hexx64 is `sub_E0600` [confirmed by call graph].
3. Array adjustments (only when an index term is pending): if the chosen member is not
   an array but the previous/next member is, retarget to that neighbour so that
   `s.arr[i]` wins over `s.scalar` (`get_tinfo_details` + neighbours at `±1`, `0xB` test)
   [confirmed code; intent inferred].
4. If a target delta is pending (`ctx+0x78`), retry the lookup at `offset − delta`.
5. Abort on bitfield members: `(realtype & 0xF) == 0xE` is `BT_BITFIELD` [confirmed check
   and SDK value]. Bitfields are handled elsewhere, not as `memref`.
6. Choose the opcode: `cot_memptr` (60) if the current base is a pointer (`& 0xF == 0xA`)
   else `cot_memref` (59). Special case: base expression is `cot_ref` (52) ⇒ use its
   operand and `memref` (so `&s` + off ⇒ `s.m`, `&p->m` collapses later). If an enclosing
   `cot_ptr` would read a smaller size, keep track for the cast step.
7. Allocate the node (`qalloc(64)`): `ea=-1`, `op=59/60`, `x=base`, `m = offset_bytes`
   (or member **index** for unions: `m = v11` when `kind == 29`), `ptrsize = sizeof(member
   type)`, `type = member type`, `exflags = EXFL_CPADONE (1)` [confirmed field stores at
   +8, +24, +32, +40, +48, +56]. `ctx.off -= m` for structs.
8. Base-class collapsing: while the new node is a `memref` of a member with
   `TAFLD_BASECLASS` and its child is again `memref`/`memptr`, fold the child's offset
   into the parent (`m += child.m`), drop the child and set `EXFL_VFTABLE` (0x100);
   then `sub_2441C0` re-types [confirmed loop; the exact purpose — hiding base-class
   hops on the way to `__vftable` — is inferred].
9. Member name: copied from the `udm_t` into the caller's qstring unless the member is a
   base class, in which case the type name is printed (`print_tinfo`).
10. INTERR 50209 guards a second "scalar via pointer" member in one walk.

**Callers/callees.** Only `sub_273A40`. Callees: `find_tinfo_udt_member`,
`sub_32D810`, `sub_272540`, `get_tinfo_details`, `sub_26A3D0`, `sub_32CB80`
(make pointer type), `sub_3311F0` (warning 23 when the pointer type cannot be built),
`sub_255850`, `sub_2441C0`.

**Kuna counterpart.** `Datatype::get_sub_type` (`dtype.rs:2757`; Ghidra `TypeStruct::
getSubType` uses a binary search for the field containing the offset, i.e. "containing",
not "starting at"), `nearest_arrayed_component_forward/backward` (`dtype.rs:2902/2970`)
for the neighbouring-array preference. Kuna's ported `RuleStructOffset0` would emit the
offset-0 PTRSUB but is a stub.

**Unlace status.** `member_containing` (member_path.rs:122) = "first named member whose
bytes contain `offset`". There is also a second, separate resolver,
`TInfo::get_best_fit_member` in `crates/unlace-ir/src/tinfo.rs:229`, used only by tests
(`tinfo_conformance.rs`). Missing compared to Hex-Rays: union member choice, nearest-
preceding-member fallback, array-neighbour preference, base-class collapsing, the
`EXFL_VFTABLE` mark, and `ptrsize` on the member node.

---

#### Union member selection (`sub_272540`, 300 lines)

**Purpose.** Pick which union member a `memref`/`memptr` goes through. [confirmed]

**Algorithm sketch** (priority order):
1. **User choice**: the first time, load the user's saved union selection for this ea
   (`sub_257F10(cfunc->user_unions?, ea, ctx+0x98)`) into a queue; pop one index per
   union level [confirmed queue at ctx+0x98/+0xA0; the user-unions source is inferred].
2. **Instruction stroff path**: if the defining insn operand is marked struct-offset
   (`is_stroff`), take `get_stroff_path`; for path element tid → `get_udm_by_tid` and,
   if the member type is compatible (`sub_32A510`), use that member and shift the path
   [confirmed].
3. **Scoring**: enumerate members that can sit at this offset (`sub_3349B0`, 64-byte
   candidate records), drop zero-sized ones, keep arrays only when nothing else fits,
   and choose with `sub_2719D0` against the expected type (the type a parent `cot_ptr`
   or cast asks for) [confirmed structure; scoring internals not read].
4. Fallback: `find_tinfo_udt_member` on the original offset.
Returns the member index or −1.

**Kuna counterpart.** `unionresolve.rs` (1784 lines) + `unionresolve_run.rs` — Ghidra's
`ScoreUnionFields` with per-opcode score matrices. The driver is partly stubbed.

**Unlace status.** None. `TInfo::get_best_fit_member` picks the first union field large
enough; nothing in the printer path uses it.

---

#### Index / pointer step and on-the-fly array retyping (`sub_270E10`, 429 lines)

**Purpose.** Consume `n * elsize` of the offset as an array index; build `cot_idx`
(58) or a `cot_ptr` (51) plus index; and, when a scalar global or stack variable is
indexed past its end, retype that object as an array. [confirmed]

**Algorithm sketch.**
1. For `cot_obj` (64): skip functions and items that are not data (`get_flags_ex &
   0x600`). For `cot_var` (65) on the stack (`lvar.location.type == 1`): find the frame
   member (`sub_1D0250`), get its details, and compute how many elements fit before the
   next frame member: `n = (next.offset − this.offset) / this.size` [confirmed:
   `(*(v72 + 144*(v63+1)) − v77[0]) >> 3) / (v77[1] >> 3)`].
2. If `n > 1`: `create_tinfo(BT_ARRAY)` of `n` elements; for a stack var call
   `sub_278FC0` (which calls `sub_278EB0` → `set_tinfo_property4(STA_UDM_TYPE = 12)` on
   the frame member) [STA value confirmed in `sub_2309F0`/`sub_27BC20`; for `sub_278EB0`
   the binary match is weak, J=0.5 → inferred]. Mark the mba as changed
   (`*(…+104) = 1`).
3. Build the index expression (`sub_26CE90`). If the element size differs from the
   pointee size, rescale and check `is_mul_ok` [confirmed].
4. Emit `cot_idx(x=base, y=index)` with `EXFL_CPADONE`, or for a non-array base first
   `cot_ptr(base)` with `ptrsize = sizeof(elem)` [confirmed op stores 58 and 51].
5. If the base is already `cot_idx`, fold the new index into it: `y = y + k`
   (`cot_add` 35) or `y − k` (`cot_sub` 36 when `k` is a negated number) [confirmed].

**Kuna counterpart.** `AddTreeState::buildMultiples` (PTRADD); `kuna_elemptr.rs` decides
"pointer used only as an array of T" (2743 lines).

**Unlace status.** `typed_access.rs` renders `p[i]`, `p[i - 1]`, `p[2].m` for declared
pointees; `struct_field_recovery.rs` (t213) infers array-of-struct layouts from loop
strides into `SsaFunction::array_struct_layouts` (wired: `unlace-cli/src/pipeline.rs:2834`).
There is no retyping of an indexed global or stack slot into an array.

---

#### Icall target from an instruction struct offset (`sub_E0600`, 75 lines; caller `sub_E7130`, 45 lines)

Binary: `sub_E0600` ↔ bin@0xe6bd0 (J=0.56, but the full import sequence matches);
`sub_E7130` ↔ bin@0xe70a0 (J=1.0).

**Purpose.** For an indirect call whose instruction operand the user marked as a struct
offset (`call [rax+18h]` shown as `call [rax+Vtbl.Release]`), resolve the struct member
and return its **member tid**, which the call analysis then uses as the callee
identity, so the call gets the member's function-pointer type. [confirmed for the tid;
the use as callee type is inferred]

**Algorithm sketch.**
```
sub_E7130(ctx, &out, insn, force):
    if !force and insn.r.t != mop_z:              # m_icall: r = target
        if insn.r.t == mop_v: out = insn.r.g; return 1
    if !sub_1D2A70(ctx, insn.ea):
        out = sub_E0600(insn.ea)
        if out == BADADDR: out = get_first_fcref_from(insn.ea)
    else if insn.l.t == mop_v: out = l.g (or prev_not_tail for tails)   # m_call
sub_E0600(ea):
    get_flags_ex; if !is_stroff(ea, n): return -1
    plen = get_struct_operand(&disp, &delta, path, ea, n)   # tried for two operands
    remaining = disp + delta
    for each level:
        get_type_by_tid(path[i])
        if realtype & 0x3F == union(0x1D): member = get_udm_by_tid(path[++i])   # path names the union member
        else: get_tinfo_details; idx = udt_type_data_t__get_best_fit_member(remaining)
        find_tinfo_udt_member(...)  ; require 8*remaining >= member.offset
        remaining -= member.offset / 8
        if member type is struct/union: descend (get_tinfo_tid), continue
        break
    if remaining != 0: return -1
    return get_tinfo_property4(member, GTA_UDM_TID)        # [confirmed esi=0x129]
```
`m_call` = 0x38 (56) [confirmed: `v90 = *(_DWORD *)a2 != 56` in `sub_E9680`].

**Callers/callees.** `sub_E9680` (call-info builder, 742 lines) → `sub_E7130` →
`sub_E0600`. This is the **only** user of `get_best_fit_member` and `get_struct_operand`
in hexx64.

**Kuna counterpart.** `kuna_calltargettype.rs` (call target typing; not stroff-based —
there is no user stroff in a stripped-binary analyzer).

**Unlace status.** No equivalent (no user struct-offset annotations exist). **Note:**
the module doc of `crates/unlace-output/src/c_printer/member_path.rs:4` says Hex-Rays
resolves `*(T *)(p + off)` "the same way here (hexx64 `sub_E0600`, …
get_best_fit_member)". That attribution is wrong: `sub_E0600` resolves indirect-call
targets from a disassembly struct offset. The ctree member lookup is `sub_272C50` +
`sub_32D810` (`find_udm` by offset, then nearest preceding member).

---

#### Access recording and array / struct synthesis for globals and frame members (`sub_27E790` 67, `sub_27BC20` 793, `sub_27AE10` 567 lines)

Binary: `sub_27BC20` ↔ bin@0x275de0 (J=0.81); `sub_27AE10` ↔ bin@0x274d60 (J=0.74).

**Purpose.** While CPA rewrites accesses, record every access to a **memory object**
(global data item or stack frame member). After CPA, if the accesses run past the
object's current extent, give the object a new type — an array, an array of structs, or
an anonymous struct with `fld_N` members — write it to the database, and re-decompile.
This is the only automatic struct creation in Hex-Rays. [confirmed]

**Key data structures.**
* Object key = `sub_26B3D0(expr)`: `cot_obj` → its ea; stack `cot_var` → the frame
  member's tid via `get_tinfo_property4(udm, GTA_UDM_TID = 0x129)` [confirmed
  `mov esi,0x129` in bin@0x2698b0].
* Access map at `typectx+808`: an RB-tree map key → set of records
  `{lvar ref (16 B, optional), stride (int), offset (int), type (tinfo), type size}`
  plus `max_end` at value+48 [confirmed field stores in `sub_27E790`]. Calls from
  `sub_276380` record (stride 0, offset 0, whole type); calls from `sub_275B20` record
  (variable-index stride, constant offset, accessed type).
* `sub_27E790` only records an access whose offset is a multiple of the type size when
  a stride is present (`a3 >= size || !a3) && (size <= 0 || !(a4 % size))`) [confirmed].

**Algorithm sketch.**
```
sub_27D2C0(typectx):  changed = any(sub_27BC20(cfunc, key, records) for key in map); clear map
sub_27BC20(cfunc, key, recs):
    skip special frame members (is_special_frame_member)
    need = max over recs of (offset + sizeof(type))          # sub_278DE0
    if key is a frame member (get_udm_by_tid != -1): cur = member size
    else: skip if not data / is a string/struct item; cur = get_item_end − ea,
          limit = calc_max_item_end − ea (or the pointer value for spec segments)
    stride = sub_278A80(recs)   # common element size: every rec has offset%size==0,
                                #   stride%size==0, one size for all; −1 otherwise
    if stride > 1 and some rec was strided: round the limit to a multiple of stride
    if cur already covers need and limit: return 0
    t = sub_27AE10(recs, cfunc, limit, strided, &newtype)
    for globals: apply_tinfo(ea, t, TINFO_STRICT=4)          # [confirmed edx=4]
                 throw vd_failure_t(-17) if the item became a function (aflags 0x400000)
    for frame members: sub_278EB0 → set_tinfo_property4(STA_UDM_TYPE=12)  # [confirmed esi=0xC]
    for each record's lvar: sub_1EF510 retypes the lvar (pointer → element type)
sub_27AE10(recs, cfunc, total, strided, out):
    s = sub_278A80(recs)
    if s > 0: out = array(elem = widest type of size s, n = total / s)
    else if (p = sub_278CA0(recs)) > 0:       # period: max stride, all strides multiples,
        fold recs modulo p; elem = sub_27AE10(folded, p); out = array(elem, total / p)
    else:                                       # plain layout
        walk recs by offset; for a hole insert `_BYTE[gap]` (type 0x11);
        keep the best type per offset (sub_2782C0 ranks types); append trailing `_BYTE[]`
        if one member: out = that type
        else: build udt: members named sprintf("fld_%d", i)      # [confirmed rodata 0x41a2f9]
              create_tinfo(BT_COMPLEX)                            # [confirmed esi=13]
    out = pointer/finished via sub_32CB80; INTERR 50184-50188 guard invariants
```

**Callers/callees.** Record: `sub_276380`, `sub_275B20` → `sub_27E790` →
`sub_27E520` (map insert), `sub_27AC10` (set insert). Apply: `sub_2523C0` loop →
`sub_27D2C0` → `sub_27D1E0` → `sub_27BC20` → `sub_27AE10`, `sub_278EB0`,
`sub_278FC0`, `apply_tinfo`, `sub_1EF510`.

**Kuna counterpart.** `kuna_structsynth.rs` (1575 lines) + `ledger.rs`/`nest.rs`/
`kuna_structmerge.rs`/`kuna_structheadless.rs`. Kuna synthesizes `struct_N` for
**pointer parameters and returned pointers** from constant-offset loads and stores, and
shares layouts program-wide. Hex-Rays does the opposite: it never auto-synthesizes a
struct for a pointer argument; it only widens **memory objects** (globals, frame slots)
that the code accesses past their end.

**Unlace status.** Partly present, in a different shape:
* `ptr_struct_infer.rs` (report only), `struct_field_detect.rs` (writes `Type::Struct`
  onto `composite_var_types`; registered in `pass.rs:1258`), `struct_field_recovery.rs`
  (array-of-struct from loop strides), `whole_prog_type_unify.rs` (`__anon_<hash>` per
  layout). `struct_boundary.rs` is `#[cfg(feature = "unwired")]`.
* These are keyed by an **SSA base pointer**, like Kuna, not by memory object.
* Missing: "object accessed past its end ⇒ array / `fld_N` struct" for globals and
  stack slots; the period (array-of-struct) detection on global/stack objects; writing
  the type back and re-running the pipeline until a fixed point.

---

#### Stack frame member creation (`sub_2309F0`, 354 lines)

Binary: ↔ bin@0x22e0d0 (J=0.98).

**Purpose.** Make sure the IDA stack frame has a member covering a stack lvar's byte
range, creating or retyping it. Hex-Rays writes its stack variables back into IDA's
frame structure. [confirmed]

**Algorithm sketch.**
1. Reject `off + size > 0x100000` (`MAX_SUPPORTED_STACK_SIZE`) [confirmed].
2. Normalise through `sub_227A10`; convert the mba stack offset to a frame offset
   (`off − region.base`, `sub_1CFD00`).
3. `tinfo_get_func_frame(&frame, pfn)`; `find_tinfo_udt_member(udm, frame, …)` at bit
   offset `8*off` (flags register not a constant at that call site → unknown). If the
   found member starts at the offset stored in `mba->…+120` and has the expected size
   and `realtype & 0x3F == 0x39`, return 0 [confirmed condition; which special slot
   this is (return address?) is a guess].
4. No frame yet: `add_frame(pfn, 0, 0, …)` and reload [confirmed `xor esi,esi; xor
   edx,edx`].
5. `sub_333710(frame, start, end)`: refuse if the range collides with existing members.
6. Clip at the saved-registers / args boundary (`a1+144`, `a1+936` callback); if the
   range would straddle it, fail.
7. Type: `get_dtype_by_size(size)`; if no scalar fits, `create_tinfo(BT_ARRAY=11)` of
   `_BYTE[size]` [confirmed `esi=0xb, edx=0xb`].
8. New member → `add_frame_member(pfn, nullptr /*auto name*/, offset, tif, …)`
   [confirmed `xor esi,esi`]; existing member
   → `set_tinfo_property4(frame, STA_UDM_TYPE=12, idx, tif)` [confirmed `esi=0xc`].
   On failure delete overlapping members (`delete_frame_members`) and retry once.
9. Set mba flag `0x8000000` (frame changed) and return the member name through `a6`.

**Callers/callees.** `sub_231430`, `sub_232200`, `sub_232C90` (the latter two carry the
string `" and stkvar "`, i.e. stkvar/lvar mapping). Frame lookups elsewhere:
`sub_1CFF80` (`get_func_frame` + `find_tinfo_udt_member` at `8*off`), `sub_1D0250`,
`sub_1CEB10` (`get_stkarg_area_info`).

**Kuna counterpart.** None found under `p5_types` (Ghidra keeps its own stack space map).

**Unlace status.** `stack_frame_recovery.rs` (1908 lines; wired from
`lvar_collect.rs:942`) groups RSP/RBP-relative accesses into `StackLocal` slots and fuses
adjacent overlapping widths. It is analysis-only. There is no frame "database" to write
back to, no array-from-indexing on a slot (see `sub_270E10`), and no overlap check
against declared frame members from PDB/DWARF.

---

#### User action "Create new struct type…" (`sub_399920`, 478 lines → `sub_2574C0`, 250 lines)

**Purpose.** On the user's request, build a struct for one pointer variable from its
accesses, show it in an editable dialog, save it and retype the variable. [confirmed by
strings: `"The following new type will be created"`, `"Could not create %s, maybe it
already exists?"`; the action label `"Create new struct type..."` is registered in
`sub_3BE870`]

**Algorithm sketch.**
1. `sub_2574C0(cfunc, item, &udt)`: the variable must be pointer-sized and integer or
   pointer typed. A ctree visitor (`off_4DFDD8`, `CV_PARENTS`) collects
   `offset → access type` for every `*(T *)(var + off)`.
2. Members in offset order; an access that starts inside the previous member is
   dropped (no overlap, no union). `udm.offset = 8*off`, `udm.size = 8*sizeof(T)`
   (unknown size ⇒ default int of `typectx+130` bytes). Pack alignment = largest power
   of two dividing every offset, starting from `typectx+133`.
3. Name: `"struct_"` + first free suffix (`get_named_type` loop) [confirmed bytes
   `0x75727473 "stru"`, `"ct_"`]. Member names come from `sub_32BAA0`.
4. `print_tinfo`, dialog, `decode_decl` of the edited text, `save_tinfo`, then
   `create_tinfo` of the pointer and apply: lvar → `sub_398E20`, global →
   `apply_tinfo`.

**Kuna counterpart.** `kuna_structsynth` does this automatically for parameters.

**Unlace status.** No user actions (CLI only). The closest is `struct_field_detect`.

---

#### Microcode helpers (short)

* **`sub_C1380` (146) / `sub_C19E0` (358)** — seed types from disassembly struct
  offsets. For `m_stx` (1) / `m_ldx` (2) whose address is a sub-instruction (`mop_d`),
  scan up to 8 operands for `is_stroff`, take `get_stroff_path`, call `guess_tinfo` on
  the base (accept result 2), find the member at the path delta (`sub_32D810`) and
  propagate the struct pointer type into the address operand (`sub_C0E10`) [confirmed
  control flow; opcode numbers per `mcode_t`].
* **`sub_C8120` (1351)** — "recognized structure copy". Folds a chain of moves into
  one udt-sized `m_mov` when the source/destination types are structs (`& 0x2F ==
  0xD`) or arrays. Uses `tinfo_get_innermost_udm` to find the member covering a partial
  copy and `calc_tinfo_gaps` to allow copies that skip padding. Also handles
  `memcpy`/`strcpy`/`memset` inlines (strings `handle_inlined_memcpy_strcpy33`,
  `handle_inlined_memset58`) [confirmed strings; details inferred].
* **`sub_CE6F0` (367)** — block-level idiom pass: `"recognized CONTAINING_RECORD"`,
  `_LIST_ENTRY` / `RtlpCheckListEntry`, `"straighten lvar pairs"`, and it calls
  `sub_C8120` [confirmed strings/calls]. The ctree `ADJ()` form and the
  `hx:DelContainingRecord` action (`sub_3C0FD0`) are the user-visible ends of the same
  feature.

### Gaps / open questions

1. `sub_2719D0` (union member scoring) and `sub_3349B0` (candidate enumeration) were
   not read; the exact scoring rules are unknown.
2. `sub_26E0C0` (724 lines, final type fit after the walk) and `sub_271E40` were only
   skimmed. They decide when a cast is kept instead of a member access.
3. The `find_tinfo_udt_member` flags in `sub_2309F0` and `sub_1CFF80` come from a
   register, not an immediate; they are not recovered.
4. `sub_278EB0` ↔ binary match is weak (J=0.50); its `STA_UDM_TYPE` value is inferred
   from the same call shape in `sub_2309F0` and `sub_27BC20`.
5. Which option bit enables the type-iteration loop in `sub_2523C0` (and therefore the
   automatic array / `fld_N` synthesis) is not identified.
6. Whether `sub_276380` is `visit_expr` or `leave_expr` of vtable `off_4E0790` is
   inferred, not confirmed (no data-section dump).
7. Unlace follow-ups suggested by this map:
   * correct the `sub_E0600` attribution in `c_printer/member_path.rs`;
   * merge the two member resolvers (`TInfo::get_best_fit_member` and
     `StructLayouts::member_path`) into one owned by `unlace-ir`;
   * add the nearest-preceding-member fallback and array-neighbour preference before
     attempting unions or `ADJ`;
   * consider the Hex-Rays object-widening rule (global/stack object accessed past its
     end ⇒ array or `fld_N` struct) as a separate, measurable pass, distinct from the
     pointer-parameter struct synthesis that Unlace and Kuna already attempt.

---

## S4 — Array detection in Hex-Rays (hexx64 9.3sp1 dump)

Scope: how the ctree "corrected pointer arithmetic" (CPA) stage turns `base + idx*scale` into `cot_idx`, how it
records object accesses, and how it widens globals / frame members / lvars into arrays (and arrays of structs) between
ctree rebuilds. Pipeline, lvar allocation and the printer are covered elsewhere and are not repeated.

**Method / evidence notes**

- Decompiled bodies come from the dump (`sub_XXXXXX.c`). The dump strips call arguments of kernel imports, so the
  `GTA_*` / `STA_*` selector of every `get_tinfo_property*` / `set_tinfo_property*` call was recovered from the shipped
  `plugins/hexx64.so` (objdump: the `mov $N,%esi` before each `call …@plt`). That `.so` is a *different build* from the
  dump (function addresses shift by about ±0x1000–0x8000 and the layout is reshuffled). I matched functions by unique
  INTERR codes (`sub_383060(N)` in the dump = `mov $N,%edi; call 37ea20` in the `.so`), confirmed by matching import sets.
  "bin 0x…" below is the address in the shipped `.so`. Only properties read this way are labelled [confirmed from code].
- Struct offsets follow `hexrays.hpp`: `cexpr_t` = `citem_t{ea@0, op@8, label_num@12, index@16}` + union `x@24`,
  `y@32`, `z/ptrsize/m@40`, `type@48`, `exflags@56` (64-byte allocation; `exflags |= 1` = `EXFL_CPADONE`).
  `var_ref_t` = `{mba@24, idx@32}`. `lvar_t` (104 bytes, `mba->vars` at `mba+432`, count `mba+440`):
  `location.type@0` (1=`ALOC_STACK`, 2=`ALOC_DIST`), `location.sval/stkoff@8`, `defea@16`, `flags@24`, `name@32`,
  `cmt@56`, `tif@80`, `width@88`, `defblk@92`, `divisor@96`. `mba+456/+464` = `argidx` (intvec of argument lvars).
  `udm_t` = 144 bytes, `offset@0` / `size@8` in bits.
- Realtype bytes are compared against BT codes: `&0xF` 0xA=`BT_PTR`, 0xB=`BT_ARRAY`, 0xC=`BT_FUNC`; `&0x2F|0x3F` 0x0D
  = `BTF_STRUCT`, 0x2D = enum, 0x11 = `BT_UNK_BYTE` (`_BYTE`), `&0x1F` 0x12 = 8-bit char/int8.

---

#### 1. CPA stage and the 10-pass rebuild loop (`sub_270860`, 222 lines; `sub_2523C0`, 268 lines; `sub_27D2C0`, 8 lines)

**Purpose.** `sub_270860` is the CMAT_CPA stage. It runs the pointer-arithmetic visitor over the ctree and then sets
maturity 5. `sub_2523C0` is the ctree build driver ("cfunc build"). It regenerates the ctree up to 10 times while
array widening or type propagation keeps changing types.

**Key data structures.**
- CPA visitor object (vtable `off_4E0790`, `cv_flags = 6` = `CV_PARENTS|CV_POST`). `parents` qvector at visitor+16/+24;
  `cfunc` at +72; returning with `cv_flags |= 8` (`CV_RESTART`) after a rewrite. [inferred: `sub_276380` is its
  `visit_expr`. It has no direct callers, it uses the parents stack at +16/+24, and it sets `|= 8`.]
- Access map `vd+808` (an rb-tree keyed by object id). It is cleared by `sub_2799E0`/`sub_2795E0` before every pass and
  filled during CPA (see §4).
- `cfunc+80/+88` (`v13[10]/v13[11]` in `sub_26CC70`): lvar indices whose index use was divided (see §2).

**Algorithm sketch.**
```
sub_270860(cfunc):                                   [confirmed from code]
  1. visitor off_4E07D0 over body → per-lvar divisor table; for each lvar i:
        lvar[i].divisor (+96) = observed divisor or 1
  2. CPA visitor off_4E0790 (flags 6) over body      (fills access map, builds cot_idx/memref)
  3. for each lvar index collected in cfunc+80 with divisor != 1 and !sub_1C27D0(lvar):
        visitor off_4E0810 (dry run); if it can rewrite every use → rerun with apply=1;
        lvar.divisor /= factor                        [inferred: rescales a byte-offset index variable
                                                        so that p[i/4] becomes p[i]]
  4. sub_27DE80(vd+808): drop map entries with one plain access (stride 0, no lvar); sort/dedupe the rest
  5. sub_23FD50(cfunc, 5)  → CMAT_CPA; sub_3252D0(cfunc,0,0)

sub_2523C0(cfunc):                                    [confirmed from code]
  sub_2799E0(vd)                         // clear access map
  for i in 0..10:
     rebuild ctree from microcode (sub_250510), maturity 1 (CMAT_BUILT), sub_3252D0, sub_241D00
     if i == 3: sub_29E310(...)
     if sub_256040(cfunc)  /* → sub_270860, returns "CPA ok" */:
        if !sub_2AC820(cfunc,i) /* type-lattice round, 0x29xxxx–0x2Axxxx cluster */
           && !sub_27D2C0(vd)   /* apply array widening, then clear map */:
             if !sub_2AC820(cfunc,-1) && !sub_29E310(cfunc,-1): break
  if i == 10: warning #13 (sub_3311F0(...,13,...))
  … lvar naming (sub_2112D0), final transforms, maturity 8 (CMAT_FINAL)
```
`sub_27D2C0` = `sub_27D1E0(vd+808)` (calls `sub_27BC20` on each map entry and ORs the results) then clears the map.
So the "rerun up to 10 times" is a fixed-point loop over (array widening ∪ type propagation) [confirmed].

**Callers/callees.** `sub_256040 → sub_270860`. `sub_2523C0` is called by `sub_14BF70`, `sub_3DD450`, `sub_3901D0`, `sub_34A920`.

**Kuna counterpart.** There is no ctree loop. Ghidra/Kuna does array typing inside the action pipeline:
`p6_variables/varmap.rs` (`ScopeLocal::restructure`, `MapState::gather`) for frames, and `p5_types/kuna_elemptr.rs` for
pointer element types. Kuna's restart model is Ghidra's `ActionRestartGroup`, not a bounded 10-iteration ctree rebuild.

**Unlace status.** Unlace has no fixed-point "re-type, then rebuild output" loop. Array decisions are made once in passes
(`stack_frame_recovery`, `type_infer`) and again at print time (`c_printer`). It also has no index-variable divisor
normalisation.

---

#### 2. Offset linearisation and element-size matching (`sub_26B8E0`, 205 lines; `sub_26AAE0`, 87 lines; `sub_26CC70`, 106 lines; `sub_26CA00`, 28 lines; `sub_26D3F0`, 19 lines)

**Purpose.** Turn the offset operand of `ptr ± expr` into a constant plus a list of scaled terms. Then decide, for the
current element size, whether a term is an index (`term = idx*scale` with `scale % elsize == 0`) and build the index
expression.

**Key data structures (CPA state `cpa_t`, built on the stack in `sub_276380` and passed as `a1`).**
`+0` cfunc, `+8` visitor, `+16` parents, `+24` parent expr, `+32` the add/sub expr, `+40` base operand, `+48` offset operand,
`+56/+64` term vector / count (32-byte entries `{expr@0, ea@8, signedness@16, scale@24}`), `+88` positive constant sum,
`+96` negative constant sum, `+136` current pointee/element type, `+436` access size, `+440` number of `cot_idx` built,
`+444` mode (1 = base is a pointer, 2 = base is an array, |2 = "stepped into array"), `+453` "already dereferenced" flag.
Offsets are [confirmed from code] for use. Names are [inferred].

**Algorithm sketch.** [confirmed from code unless marked]
```
sub_26B8E0(cpa, e, ea, k=±1, sign):        // linearise k*e
  switch e.op:
    cot_num:   c = k*value; overflow-check for 32-bit targets
               c >= 0 ? cpa+88 += c : cpa+96 += -c
    cot_add:   recurse(x,k); recurse(y,k)
    cot_sub:   (only if y is const) recurse(x,k); recurse(y,-k)
    cot_neg:   recurse(x,-k)
    cot_mul:   one side const c → recurse(other, k*c)          // idx*scale
    cot_shl:   y const n (<=31) → push term {x, scale = k<<n}  // shifted index
    default:   push term {e, scale = k}

sub_26CA00(cpa) → element size:       mode=1, elem = GTA_PTR_OBJ(type)    if realtype==BT_PTR
                                       mode|=2, elem = GTA_ARRAY_ELEM(type) if realtype==BT_ARRAY
                                       return get_tinfo_size(elem)   (-1 if verify_tinfo fails)
sub_26D3F0: pointer whose pointee is an array → elem = GTA_ARRAY_ELEM(pointee);
            const idx = (cpa+88 - cpa+96) / sizeof(elem); mode |= 2

sub_26AAE0(cfunc, term, elsize):      // "is term a multiple of elsize?"
  if term.expr is cot_var: return (lvar.divisor * term.scale) % elsize == 0   // lvar_t+96
  if term.scale % elsize == 0: return true
  cot_shl by const n: term.scale <<= n; term.expr = x; recheck      (absorbs nested shifts)
  cot_mul by const c: term.scale *= c;  term.expr = other; recheck
  else false

sub_26CC70(cpa, expr, term, scale, elsize):   // build the index expression
  if scale % elsize == 0:  idx = expr * (scale/elsize)     (sub_26A690 omits ×1)
  elif elsize % scale == 0: idx = expr / (elsize/scale)    (cot_udiv, op 39);
                            remember expr's lvar in cfunc+80 → divisor pass in §1
```
Effect: `*(T*)(p + 4*i)`, `*(T*)(p + (i<<2))`, and `*(T*)(p + j)` where `j` is known to be a multiple of 4
(lvar `divisor`) all become `p[i]` / `p[j/4]` when `sizeof(T)==4`. The divisor pass can later turn `p[j/4]` into `p[j]`. The
GTA selectors are confirmed in the `.so`: `sub_26CA00` (bin 0x26b140) reads `GTA_REALTYPE, GTA_PTR_OBJ, GTA_REALTYPE,
GTA_ARRAY_ELEM`, and `sub_26D3F0` (bin 0x26bb30) reads `GTA_REALTYPE, GTA_ARRAY_ELEM`. `sub_26CB90` (bin 0x26b2d0) reads
`GTA_PTRARR_SUBTIF` and then `GTA_REALTYPE`: element types up to `BT_PTR`, or enum, can be indexed directly.

**Callers/callees.** `sub_275B20 → sub_26B8E0` (sign −1 when the parent is `cot_sub`/`cot_asgsub`). `sub_273A40 → sub_26D4E0 → sub_26AAE0`.
`sub_270E10 → sub_26CE90 → sub_26CC70`.

**Kuna counterpart.** `substrate/addtreestate.rs` (Ghidra `AddTreeState`/`RulePtrArith`: splits an add tree into
multiple-of-size and non-multiple parts and emits `PTRADD`/`PTRSUB`). `p5_types/kuna_elemptr.rs` recognises `x*W`,
`x<<log2 W`, and unscaled `W==1` index forms to propose `T*`. Kuna has no lvar "divisor" analogue.

**Unlace status.** `crates/unlace-passes/src/type_infer.rs::detect_array_strides` only annotates `IntAdd/Ptradd/Ptrsub`
whose operand is `IntMult` or `IntLeft` by a constant, with the stride in {1,2,4,8,16}. It does no recursive linearisation, has no
negative-constant split, no divisor reasoning, and no `idx/k` form. `c_printer::try_frame_local_indexed_subscript` renders
`((cast*)&v_N)[i]` at print time, for frame locals only.

---

#### 3. Pointer-arithmetic peel loop (`sub_273A40`, 916 lines; struct step `sub_272C50`, 449 lines)

**Purpose.** Given the base expression and the linearised offset, repeatedly peel one level:
array index → struct member → array index …, until the constant offset is used up. Each level is `cot_idx`, `cot_memref`
(59), or `cot_memptr` (60).

**Algorithm sketch.** [confirmed from code; the exact intent of some guards is inferred]
```
loop:
  es  = sub_26CA00(cpa)                          // element size of current level
  rem = cpa+88 - cpa+96                          // remaining constant byte offset
  q   = floor(rem / es)                          // negative rem rounds toward -inf (v14-1 fix-up)
  if mode==1 && base is a stack arg lvar (CVAR_ARG) && sub_26D3F0(...):
        wrap base in cot_ptr(ptrsize=sizeof)     // pointer-to-array deref first
  if terms present and sub_26D4E0(term0 divisible by es, no overflow) and elem not ptr/arr:
        e = sub_270E10(cpa, base, term0, mult, …, q, 0)       // base[term0/es + q]
        remove term0; rem -= q*es; continue
  if sub_26D610(...)                              // array mode, or pointer-to-array, or struct w/o var tail
        e = sub_270E10(cpa, base, NULL, 1, …, q, q==0)  // base[q]
        rem -= q*es; continue
  if current type is struct (realtype&0x2F==0xD):
        e = sub_272C50(...)   → x.m / x->m at member containing rem; rem -= member.offset; continue
  stop (leftover offset stays as raw arithmetic)
```
`sub_272C50` details [confirmed]: `find_tinfo_udt_member(udm.offset = 8*rem)`. If that fails it scans back byte by byte
(`sub_32D810`). If index terms are still pending and the member found is not struct/array, it looks at neighbours: if
the *previous* member is an array (realtype `BT_ARRAY`), it retargets to that array. Reading
`GTA_SAFE_PTR_OBJ`/`GTA_REALTYPE` there means `s.buf[i]` wins over `s.next_field` for an index that runs past `buf`.
Op is 60 (`->`) when the current expr is a pointer, 59 otherwise. `m` (+32) = member index, `ptrsize` (+40) = member size.

**Callers/callees.** `sub_275B20 → sub_273A40 → {sub_270E10, sub_272C50, sub_26D4E0, sub_26D610, sub_26D3F0, sub_26CA00}`.

**Kuna counterpart.** Ghidra `RulePtrArith`/`RuleStructOffset0`/`TypeStruct::nearestArrayedComponentForward`
(`varmap.rs::spacebase_nearest_arrayed_forward/backward` ports the latter).

**Unlace status.** The printer handles one level: frame-local subscript (`try_frame_local_indexed_subscript`) and loop
array-of-struct field access (`try_array_struct_field_access`, `struct_field_recovery.rs`, t213/t231). It does not
iterate array → member → array, and it does not retarget to a preceding array member.

---

#### 4. `cot_idx` builder with in-place widening of the indexed object (`sub_270E10`, 429 lines; index builder `sub_26CE90`, 80 lines)

**Purpose.** Build `base[idx]` (op 58). If the base is a *non-array object* that is being indexed, first try to change
that object's type to an array.

**Signature.** `sub_270E10(cpa, base, term|NULL, mult, &extra, const_idx, idx_is_zero)`.

**Algorithm sketch.** [confirmed from code; GTA selectors confirmed in bin 0x26faa0]
```
if GTA_REALTYPE(base.type) ∉ {BT_PTR, BT_ARRAY}:            // indexing a scalar/struct object
  case base.op == cot_obj (64):
      skip if type is BT_FUNC or flags&MS_CLS != FF_DATA (get_flags_ex)
      newtype = array_type_data{elem = current elem type, nelems = 0}   → T[] (unsized)
      sub_278EB0(mba, obj_ea, newtype, NULL, &res, -1)                  // deferred global retype
  case base.op == cot_var (65):
      lv = mba->vars[idx]
      if lexcompare(lv.type, expr.type)!=0: require lv.type is already BT_ARRAY (else INTERR 50204)
      elif lv.location is ALOC_STACK:
          udm_idx = sub_1D0250(mba, &udm, lv.stkoff)      // frame member at stkoff
          require udm_idx is not the last frame member; udm.size >= 8 bits
          nelems = ((next.offset - udm.offset)/8) / (udm.size/8)  // copies that fit before next member
          require nelems != 1
          tid = get_tinfo_property4(frame, GTA_UDM_TID, udm_idx)   // 0x129
          newtype = elem[nelems]; sub_278FC0(mba, tid, newtype, &var_ref, &res, udm_idx)  (§6)
  on success: *(vd + 104) = 1                               // "types changed" flag
if base element is indexable (sub_26CB90) and !sub_2567C0(base):
   mode==3 (array):  idx = sub_26CE90(cpa, term, mult, extra, const_idx)
   mode==1 (pointer): s = GTA_PTRARR_SIZE(type); n = get_tinfo_size(type)
                     if n != s: rescale (const_idx/n must be exact; mult *= n; term.scale *= s)
                     idx = sub_26CE90(...); base = sub_26B730(base)   // &base / base.m first
   scalar (no idx yet, size matches): base = cot_ptr(base, ptrsize=size)
   e = new cexpr{op=cot_idx, x=base, y=idx}; calc type; exflags|=EXFL_CPADONE; cpa+440++
elif base.op == cot_idx and !idx_is_zero:                   // fold into existing subscript
   y = y + idx   (cot_add 35, or cot_sub 36 for cot_neg / negative constant)
```
`sub_26CE90` = `term.expr*(scale/elsize) + const_idx`. Constant-only terms are folded into one `cot_num` with an
overflow check, and the sign is taken from the target bitness.

**Kuna counterpart.** Ghidra emits `PTRADD(base, idx, elsize)` in `RulePtrArith`, and the printer renders `[]`. Arrays
for frame/global objects come from `RangeHint`/`restructure` (§5–6), not from the expression builder.

**Unlace status.** Missing: retyping the indexed object from inside the expression rewrite. The frame-gap-based `nelems`
(`next_member.offset - this.offset`) has no counterpart. Unlace's `detect_arrays` needs ≥3 adjacent equal-size slots and
a taken address.

---

#### 5. Object access map and array/struct synthesis (`sub_276380`, 890 lines; `sub_275B20`, 326 lines; recorder `sub_27E790`, 67 lines; widen `sub_27BC20`, 793 lines; synthesise `sub_27AE10`, 567 lines)

**Purpose.** During CPA, record every access to every global/stack object (offset, stride, access type). After CPA,
for objects accessed past their current end or with a stride, synthesise an array, an array of structs, or a padded struct type
and apply it. The new type takes effect on the next rebuild (§1).

**Key data structures.** [offsets confirmed from code; names inferred]
- Map key `objid` = `sub_26B3D0(expr)`: `obj_ea` for `cot_obj`. For a `cot_var` on an `ALOC_STACK` lvar it is the frame
  member's TID (`get_tinfo_property4(frame, GTA_UDM_TID, idx)`; TIDs live in `INF_PRIVRANGE`).
- Map value (`a3` in `sub_27BC20`): `+0/+8` rb-set of accesses / count, `+16` max end (offset+size) seen, `+20` flag
  "address passed to a call whose parameter is a pointer".
- Access node (rb node, payload from +24): `+24 mba`, `+32 lvar idx (-1 = global)`, `+40 stride`, `+44 offset`,
  `+48 tinfo (STA_CLR_MODIFS applied: set_tinfo_property(…,6) in bin 0x2792d0)`, `+56 size`.

**Algorithm sketch.**
```
record (sub_27E790(map, objid, stride, off, type, var_ref, addr_flag)):        [confirmed]
   strip const/volatile; skip BT_FUNC
   if (off==0 && stride==0) || ((stride==0 || stride>=size) && off % size == 0): insert access
   map[objid].maxend = max(maxend, off+size)
 sources: sub_276380 records each bare object reference (off 0, stride 0; addr_flag when &obj is a call arg);
          sub_275B20 records each ptr-arith on &obj with stride = scale of the first index term, off = const part.

widen (sub_27BC20(mba, objid, A)):                                              [confirmed unless marked]
  0. bail if no accesses or is_special_frame_member(objid)  (return addr / saved regs)
  1. ext    = max(off+size)                          (sub_278DE0)
     minstr = smallest stride >= max(ext,1)          (array period candidate)
     lv     = first access with an lvar;  lvar_end = max frame end of lvars whose type is already BT_ARRAY
     past_end = (minstr != 0) || ext > sizeof(current type)
  2. udm = get_udm_by_tid(objid)
     GLOBAL (udm == -1):
        skip if objid > max ea, AFL_USERTI (0x2000000) set, or item is FF_DATA|FF_STRUCT (0x60000000)
        room = calc_max_item_end(ea) - ea          // how far the item may grow
        cur  = get_item_end(ea) - ea
        (special-segment ea: room from the pointed-to value; [guess] about intent)
     FRAME (udm != -1):  GTA_FRAME_FUNC(frame) must succeed (INTERR 52696)
        room = from udm.offset to the next named member or lvar_end, clipped so the new range does not start
               another ALOC_STACK lvar (scan of mba->vars)
  3. es = common element size (sub_278A80: all sizes equal, offsets and strides divisible) ; if es>1 && past_end:
        room = es * floor(room/es)
     bail if cur >= room, room < ext, or room < minstr
     bail if the item is already data of element size es and covers the accesses
  4. newtype = sub_27AE10(A, til, room, past_end, &t, 0)
  5. acceptance:
       struct result   → must be a named type ref (typid & TYPID_ISREF 0x100)
       scalar result   → bail if room==cur && minstr==elsize, or the item is an FF_STRUCT
       array result    → get_tinfo_details(BT_ARRAY): elem, nelems
           elem realtype&0x3F == BTF_STRUCT → reject at this point  [confirmed in bin 0x277007; why is open]
           unless (frame && growth < stack alignment && end stays aligned):
             nelems==2 && elem is an integer (BT_INT8..BT_INT) && total>3 → reject
             nelems==2 && objid in INF_PRIVRANGE && elem is _BYTE/_WORD-like && total>3 → reject
             elem is a pointer and !GTA_IS_FUNCPTR → reject
             elem typedef named "va_list" → reject
  6. apply:
       global: if get_tinfo fails or sub_278410(old,new,minstr) prefers new → apply_tinfo(ea,new)
               if apply made the ea AFL_NORET (0x400000) → throw vd_failure_t(MERR_REDO = -17)
       frame:  old member type t0; if t0's GTA_FINAL_ELEM is unknown/_BYTE-like, or its GTA_PTR_OBJ is void,
               or it is a float → set directly, else require sub_278410/sub_32CB80;
               set_tinfo_property4(frame, STA_UDM_TYPE=12, udm_idx, new)   [confirmed bin 0x276436]
     then for every access: global → sub_278EB0 (deferred typed apply);
          lvar → collect lvars at the same frame offset whose width <= new size and that accept the type
                 (sub_1EF510) → sub_278FC0 (§6); sub_374BA0 refresh

synthesise (sub_27AE10(A, til, total, force_array, &out, period)):             [confirmed]
  es = sub_278A80(A)                         // uniform element size, merged elem type into out
  if es > 0:  if total/es != 1 || force_array:  out = elem[total/es]
  else:
     st = sub_278CA0(A)                     // common stride: strides must be multiples of the smallest
                                            // (that smallest is st), and max access size <= st
     if st > 1:  fold every access to (off % st, stride % st); dedupe;
                 inner = sub_27AE10(folded, til, 0, 0, &out, st)        // struct of size st
                 out = inner[total/st]                                   // ARRAY OF STRUCTS
     else:  build a struct from accesses sorted by offset: one member per distinct offset
            (types merged by sub_2782C0 rank), gaps = _BYTE[n] (0x11 = BT_UNK_BYTE),
            tail pad up to `period`; members named via sub_6B870 (printf); a single struct member collapses
  sub_32CB80(out) must validate (INTERR 50188)
```
GTA/STA selectors in `sub_27BC20` (bin 0x275de0) are [confirmed]: `GTA_REALTYPE, GTA_FINAL_ELEM (0x121), GTA_PTR_OBJ,
STA_UDM_TYPE (set4 0xc), GTA_FRAME_FUNC (0x12c), GTA_IS_FUNCPTR`, plus `get_tinfo_details(…, BT_ARRAY=0xb, …)`.

**Callers/callees.** `sub_276380 (CPA visit_expr) → {sub_26B3D0, sub_27E790, sub_275B20}`; `sub_275B20 → {sub_26B8E0,
sub_275A30, sub_271E40, sub_273A40, sub_27E790}`; `sub_27D2C0 → sub_27D1E0 → sub_27BC20 → {sub_27AE10, sub_278EB0,
sub_278FC0, apply_tinfo, set_tinfo_property4, calc_max_item_end, get_item_end, get_udm_by_tid}`.

**Kuna counterpart.** Frames: `p6_variables/varmap.rs` `RangeHint::{reconcile, absorb, merge}` +
`ScopeLocal::restructure` (open ranges become arrays). Kuna extensions: `kuna_arrayextent.rs` (an indexed array may
grow past Ghidra's 4-element default) and `kuna_arraysize.rs` (buffer length taken from call-stated sizes such as
`snprintf`/`memset`/`__*_chk`, not from the gap to the next object). Globals/pointers: `p5_types/kuna_elemptr.rs`
(constant data address used as an indexed base prints as `dat_X[i]`). Kuna has no array-of-struct synthesis by stride
folding. `kuna_structsynth.rs` builds structs from constant offsets only.

**Unlace status.** Unlace has no per-object access map, no global widening (`calc_max_item_end`-style bound), no
stride-folded array-of-structs for frame/global objects, and no `_BYTE[n]` gap filler in synthesised structs.
`struct_field_recovery.rs` (t213) infers array-of-struct layouts only from loop induction (`base + STRIDE*iv + off`),
and they are printed by `try_array_struct_field_access`.

---

#### 6. Lvar-level arrays: frame members covering overlapping accesses (`sub_2309F0`, 354 lines; arg merge `sub_278FC0`, 163 lines; frame retype `sub_278EB0`, 33 lines)

**Purpose.** (a) During lvar allocation, when a stack access is not contained in its variable, enlarge or create the
frame member so that it covers the union. If the size is not a scalar size, the member becomes `_BYTE[n]`. (b) When
array widening makes a stack *argument* larger, absorb the following argument lvars that now fall inside it.

**Algorithm sketch.**
```
sub_2309F0(mba, stkoff, size, type?, flags, &name_out):                        [confirmed]
  bail if no frame func or stkoff+size > 0x100000
  sub_227A10 may adjust (stkoff,size) (alignment/known regions; then drop `type`)
  frame offset range [lo,hi) = stkoff - region.base (sub_1CFD00)
  udm = find_tinfo_udt_member(frame, 8*lo)
     existing member == retaddr slot of exactly ptr size and realtype&0x3F==0x39 → no-op
     if found: lo = udm.offset/8, covered_end = (udm.offset+udm.size)/8; already covering hi → return 0
  ensure a frame exists (add_frame); sub_333710(frame, lo, hi) → refuse
  refuse if the range straddles the locals/args boundary (min(mba+144, callee-specific))
  if (hi-lo) != size: drop the type hint; size = hi-lo
  size = max(size, get_data_elsize(get_dtype_by_size(size)))
  sub_2288F0 / overlap sets (mba+832/+848) checks; sub_22D9A0 clears conflicting members
  t = integer type of exactly `size` (sub_32C270); if none: t = _BYTE[size]   // 1-byte elem, nelems=size
  new member → add_frame_member; existing → set_tinfo_property4(frame, STA_UDM_TYPE, udm, t)
  on failure with flags&1: delete_frame_members and retry once
  mba->flags |= 0x8000000; return 1/2 (2 = boundary/existing case), -1 = refused
 callers: sub_231430 / sub_232200 (lvar allocation, sub_232C90 → …): called when an access
          [a, a+n) is outside the lvar's [stkoff, stkoff+width) → new width = end - lvar.stkoff  [inferred role]

sub_278EB0(mba, tid_or_ea, newtype, lvar?, frame, udm_idx):                     [confirmed]
  pending = sub_374C40(mba, key)  // deferred-type table at mba+1128 (ea → {tinfo, priority})
  existing priority 0 → refuse; priority <=1 and global → refuse
  if udm_idx != -1: set_tinfo_property4(frame, STA_UDM_TYPE=12, udm_idx, newtype)   [bin 0x267260]
  if lvar: sub_1EF510/sub_1EF8F0 (check/assign lvar type)
  sub_381E90(mba, key, newtype, 3, 0)    // verify_tinfo, store in deferred table with priority 3

sub_278FC0(mba, tid, newtype, var_ref, frame, udm_idx):                         [confirmed; role inferred]
  lv = vars[var_ref.idx]
  if lv is CVAR_ARG (flags bit 0x100) and lv.width != sizeof(newtype):
     lv.width > new → refuse
     walk argidx (mba+456/+464) after lv: while the next arg's stack range lies inside lv's new
       range (sub_1C31B0/sub_1C3380 + sub_64780/sub_318470/sub_317F40 interval tests): absorb it
     sub_278EB0(...); absorbed args: flags = (flags & ~0x8100) | CVAR_NOTARG(0x100000); erase from argidx
  else sub_278EB0(...)
```

**Kuna counterpart.** `varmap.rs` `MapState`/`RangeHint::absorb` merges overlapping stack hints into one symbol, and
`restructure` lays out arrays. `kuna_bytehonest.rs` and `kuna_localstackviews.rs` deal with byte views of frame storage.
There is no direct `_BYTE[n]` fallback rule. Ghidra types such ranges as `undefinedN`/arrays of `undefined1`.

**Unlace status.** `stack_frame_recovery.rs::detect_arrays` fuses ≥3 adjacent equal-size slots with an escaping address.
It rejects runs that cover DWARF-named scalars or parameter homes. Nothing makes a variable grow to cover an access that
crosses its end, and nothing creates a `_BYTE[n]` frame member for an odd-sized union of overlapping accesses (unlace
splits or leaves raw `*(_QWORD *)(base+off)`). Stack argument absorption on widening is absent.

---

#### 7. Char arrays for strings (`sub_E7D60`, 50 lines; bin 0xe20a0)

**Purpose.** Create a string literal (a `char[n]` item) at a global whose address is used as a `char *`.

**Algorithm sketch.** [confirmed from code; GTA selectors confirmed]
```
sub_E7D60(ea, ptrtype):
  skip is_spec_ea(ea)
  pointee = GTA_PTR_OBJ(ptrtype); require GTA_REALTYPE(pointee) & 0x1F == 0x12   (8-bit char/int8)
  flags = get_flags_ex(ea)
  if item already defined: skip if it has a user name only (flags & (FF_NAME|FF_LABL)) == FF_NAME;
                           else require get_tinfo(ea) and compare_tinfo(old, pointee-array)
  create_strlit(ea, …)
  if pointee is const (BTM_CONST 0x40): set_tinfo(ea, const char[])
```
Callers: `sub_24D8E0` (call-argument building: `mop_a` of a `mop_v`, i.e. `&global` passed where the prototype says
`char *`) and `sub_E8020` (string-contents lookup for printing; it retries after creating the literal).

**Kuna counterpart.** `p5_types/kuna_rodatastring.rs` and `kuna_charptr.rs` (char-printable array symbols planted by
string analysis), and `constseq.rs` (stack string sequences).

**Unlace status.** Unlace resolves string-table addresses at print time (`try_global_var_name` and string tables). It
does not retype the global as `char[n]` in a database or IR type map.

---

### Gaps / open questions

1. `sub_27BC20` step 5 rejects arrays whose element realtype is a plain struct (bin 0x277007), yet `sub_27AE10` can build
   `struct[n]`. Either array-of-struct results only survive through another path (e.g. `sub_278EB0` priority
   handling, or the struct element is a named ref whose `&0x3F` differs), or this path deliberately types only the
   lvars. This needs a runtime trace on a sample with a strided struct array.
2. The visitor vtables (`off_4E0790`, `off_4E07D0`, `off_4E0810`) were not resolved to their `visit_expr` bodies. The
   claim that `sub_276380` is the CPA `visit_expr`, and the purpose of the divisor rewrite visitor, are inferred.
3. `sub_2AC820` / `sub_29E310` (the 0x298000–0x2A5000 tinfo lattice) share the 10-iteration loop with array widening.
   Their interaction (e.g. a widened array changing call-argument types) is not documented here.
4. The negative-offset branch of `sub_273A40` (it builds a function type with one arg named `"ptr"` and a `cot_call`)
   looks like a CONTAINING_RECORD / shifted-pointer helper. It was not analysed.
5. The binary `.so` is a different build from the dump. Every GTA claim was checked by matching INTERR codes, but the
   mapping for helpers without INTERR codes (`sub_278EB0` → bin 0x267260, `sub_26CB90` → 0x26b2d0) rests on matching
   call shape and import sets.
6. Unlace priority order (smallest steps first): (a) recursive offset linearisation with shl/mul folding and the
   multiple-of-elsize test (§2); (b) a per-object access map with stride → `T[n]` / `struct[n]` synthesis and
   `_BYTE[n]` gaps (§5); (c) frame-member growth to cover crossing accesses (§6). Each needs golden evidence before it
   lands, per the repo rules.

---

## S5 — Function signature recovery in Hex-Rays 9.3sp1 (hexx64)

Scope: how hexx64 decides the prototype of every **callee** (argument count, locations, types,
calling convention, return value, spoiled registers, varargs) when it builds `mcallinfo_t`
during the `MMAT_CALLS` stage, how it decides the **current function's own** convention
(including the `__usercall`/`__userpurge` fallback), and how guessed callee types flow back
into the database. Pipeline order, lvar allocation and the printer are covered in
`research/hexrays-algorithms-deep.md` / `hexrays-algorithm-map.md` and are not repeated.

Confidence tags: **[C]** confirmed from the decompild code (quoted), **[I]** inferred from
structure, offsets and call graph, **[G]** guess.

### 0. Anchors and how they were found

The `HEXDSP` dispatcher is `sub_34A920` (625 `case NLL:` arms). Indexing it with the
`hexcall_t` enum from `hexrays.hpp` (622 names, `hx_user_numforms_begin` = 0) names the public
entry points without guessing **[C]**:

| hexcall_t | index | function | lines |
|---|---|---|---|
| `hx_mba_t_analyze_calls` | 397 | `sub_FA4C0` | 263 |
| `hx_mcallinfo_t_set_type` | 313 | `sub_335200` | 366 |
| `hx_mcallinfo_t_get_type` | 314 | `sub_336290` | 350 |
| `hx_mcallinfo_t_lexcompare` | 312 | `sub_32ED90` | 167 |
| `hx_mcallarg_t_set_regarg` | 311 | `sub_32F0D0` | 8 |
| `hx_get_type` / `hx_set_type` | 171/172 | `sub_381D00` / `sub_382090` (thin wrappers) | 4/4 |
| `hx_mba_t_get_func_output_lists` | 415 | `sub_1390C0` | 77 |
| `hx_mba_t_idaloc2vd` / `vd2idaloc_` | 387/390 | `sub_1C5FB0` / `sub_1C7740` | 8/5 |
| `hx_mba_t_alloc_lvars` | 399 | `sub_1FAD30` | 121 |
| `hx_cfunc_t_get_func_type` | 538 | `sub_3767A0` | 80 |
| `hx_arglocs_overlap` | 177 | `sub_1C4AE0` | 226 |

Event numbers passed to the hook dispatcher `sub_33E140(hooks, ev, ...)` match
`hexrays_event_t`: 16 = `hxe_build_callinfo`, 17 = `hxe_callinfo_built`, 18 = `hxe_calls_done`
**[C]**. Warning ids passed to `sub_3311F0(mba, ea, id, ...)` match `warnid_t`: 2
`WARN_ILL_FUNCTYPE`, 7 `WARN_DEP_UNK_CALLS`, 38 `WARN_BAD_CALL_SP`, 51 `WARN_UNBALANCED_STACK`,
55 `WARN_SUBFRAME_OVERFLOW` **[C]**.

`get_tinfo_property()` arguments are elided by the dump (it prints `get_tinfo_property()` with
no arguments in 468 of 469 call sites), so the GTA_* number is usually not visible. Where the
property is named below it is inferred from what the result is stored into (for example a
value stored into the context's `nargs` slot right after a `< 0` failure check is
`GTA_FUNC_NARGS`) **[I]**.

#### Structure layouts verified against the code

`mcallinfo_t` (SDK order; offsets proven by `qalloc_or_throw(312)` in `sub_EFB00` and the
`dead_regs = return_regs` copy in `sub_F4760` at `+240 <- +96`) **[C]**:

| off | field | evidence |
|---|---|---|
| 0 | `callee` | `*(_QWORD *)v4 = *(a1+312)` |
| 8 | `solid_args` | `*(_DWORD *)(v4 + 8) = *(a1+348)` (ctx nargs) |
| 12 | `call_spd` | `*(_DWORD *)(v4 + 12) = *(a1+328)` |
| 16 | `stkargs_top` | `= call_spd + fti.stkargs` |
| 20 | `cc` | from ctx `+360`, else compiler default `(cm & 0xF0)` / `+140` when `0xC0` |
| 24 | `args` (`qvector<mcallarg_t>`, 80-byte elements) | `sub_82440(v4+24, n)` resize |
| 48 | `retregs` | |
| 72 | `return_type` | |
| 80 | `return_argloc` (type at 80, payload at 88) | `*(v78+80) == 2` (ALOC_DIST) |
| 96 | `return_regs` (mlist_t = 16-byte rlist + 24-byte ivlset) | `sub_1390C0(mba, v4+96, ...)` |
| 136 | `spoiled` | `sub_64280(v4+136, ...)`, `sub_316CB0(v4+152, ...)` |
| 176 | `pass_regs` | |
| 216 | `visible_memory` | set to `xmmword_424800` (ALLMEM) unless `FCI_PURE` |
| 240 | `dead_regs` | |
| 280 | `flags` (FCI_*) | `*(v4+280) & 0x10` = `FCI_PURE` |
| 284 | `role` | `!*(_DWORD *)(v4 + 284)` = `ROLE_UNK` checks |
| 288 | `fti_attrs` | swapped with ctx `+48..+64` |

`mcallarg_t` (80 bytes): `mop_t` 0..16, `ea` 16, `type` 24, `name` 32, `argloc` 56, `flags` 72
(`sub_336290` copies `+24/+32/+56/+72` into `funcarg_t` `+64/+16/+0/+72`) **[C]**.
`funcarg_t` (80 bytes): `argloc` 0, `name` 16, `cmt` 40, `type` 64, `flags` 72 **[C]**.
`func_type_data_t` on the stack: vector 0..24, `flags` 24, `_new_callcnv` 28, `rettype` 32,
`retloc` 40, `stkargs` 56, `spoiled` 64, `_old_cc` 88. Every builder writes the convention with
the inlined `helper_set_cc` idiom `if ((cc & 0xFFFFFF0F) != 0 || cc == 192) { new_cc = cc; old_cc = 0xC0; } else old_cc = cc;` **[C]**.

`mblock_t` has an 8-byte header before `nextb` (all SDK offsets +8): `flags` +24, `head` +48,
`tail` +56, `mba` +64, `serial` +72 (`*(v18 + 24) |= 0x800u` is `MBL_CALL`) **[C]**.
`minsn_t`: `opcode` 0, `iprops` 4, `ea` 24, `l` 32, `r` 48, `d` 64; `d.t == 8` is `mop_f`
(the `mcallinfo_t *` lives at `+72`) **[C]**. `mba_t` matches the SDK field order: `entry_ea` 40,
`qty` 64, `npurged` 68, `cc` 72, `retsize` 116, `shadow_args` 120, `stacksize` 136,
`inargoff` 144, `final_type` 320, `vars` 432 (lvar_t = 104 bytes), `argidx` 456/464,
`retvaridx` 480 **[C for the fields used below; the +8 shift between `label` and `vars` is not
explained]**.

---

#### 1. Call-info driver: `mba_t::analyze_calls` (`sub_FA4C0`, 263 lines)

**Purpose.** For every block that ends in `m_call`/`m_icall`, build its `mcallinfo_t`, then mark
the mba `MBA_CALLS`. Handles ordering between calls whose arguments depend on each other.

**Key data.** `mba+64` qty, `mba+528` natural block array, block `flags` bit `0x800`
(`MBL_CALL`), tail opcode `*v19 - 56 <= 1` (`m_call`=0x38, `m_icall`=0x39), `tail->d.t == 8`
(already has `mop_f`).

**Algorithm.**
1. Optional preprocessing (`a2 & 7` → `sub_14A660`), `sub_1EBDA0`, `sub_190300` (use/def
   list rebuild) **[I]**.
2. Pass 1, in natural order: for each call block without call info, skip Go
   `runtime_morestack` calls (`sub_F7B20` strncmp, then mark the block) **[C]**; call
   `sub_F4760(blk, (a2&1) | 4)`. A result other than 1 counts the block as pending; otherwise
   set `MBL_CALL` **[C]**.
3. If nothing is pending: run the verifier with the label `"analyze_calls"`, check every block
   has `MBL_CALL` (interr 50114), set `mba->flags |= 0x1000` (`MBA_CALLS`), fire
   `hxe_calls_done` **[C]**.
4. Otherwise (and only when `a2 & 0x10`), compute a DFS order of the block graph
   (`sub_6DDE0`: DFS from every node with no predecessors, then the remaining nodes) and walk
   it from the end, retrying `sub_F4760(blk, v20)` with `v20 = (a2&1) | 6` (bit 2 now allows
   varargs). Blocks still unresolved go into an `std::set` worklist **[C structure, I order
   semantics]**.
5. Worklist loop: retry each pending block; remove those that return 1. When a full sweep
   makes no progress, emit `WARN_DEP_UNK_CALLS` ("found interdependent unknown calls") on the
   first pending block and clear bit 4 (`v20 &= ~4u`), which lets `sub_F4760` guess instead of
   waiting. A second stall is interr 50113 **[C]**.
6. Any hard failure (`sub_F4760` → 0) stores the call `ea` in `mba+488` (`error_ea`) and
   returns -1 **[C]**.

Flag bits of the second argument to `sub_F4760` **[I]**: bit 1 = caller option passed
through, bit 2 (`0x2`) = varargs may be resolved now, bit 3 (`0x4`) = defer calls whose
arguments come from other still-unknown calls.

**Callers/callees.** Called from the optimizer driver through hx 397; calls `sub_F4760`,
`sub_6DDE0`, `sub_149220` (global DCE, when `a2 & 8`), `sub_3311F0`, `sub_33E140`.

**Kuna counterpart.** `p4_calls/coreaction_protos.rs` (ports Ghidra's `ActionPrototypeTypes`,
`ActionActiveParam`, `ActionDefaultParams`): there is no single "all calls of the function are
typed" barrier; trials stay open and are re-scored on every iteration.

**Unlace status.** No equivalent barrier. `call_args.rs::recover_direct_call_args` runs once
before optimization and only for callees with a known libc signature or a known parameter count
(`recover_direct_call_args_with_param_counts`). No retry order, no
"interdependent unknown calls" handling.

---

#### 2. Per-call builder: `build_callinfo` (`sub_F4760`, 495 lines)

**Purpose.** Build and attach one `mcallinfo_t` to the tail `m_call` of a block. The verifier
label `"build_callinfo"` at the end names it **[C]**.

**Algorithm.**
1. Helper calls (`tail->l.t == 11`, `mop_h`) only get `MBL_CALL` **[C]**.
2. Build a large on-stack context (`v81..v115`: block, mba, hooks, a `func_type_data_t`,
   callee ea, flags `a2` at `v112`) and fire `hxe_build_callinfo`; a plugin may return a ready
   `mcallinfo_t` in `v78` **[C]**.
3. If no plugin answered: when the cached callee type is already a function
   (`(prop & 0xF) == 0xC`, BT_FUNC) take its convention; else call `sub_E9680` (section 3) to
   determine the callee prototype. A failure returns `2 * v114` (0 = hard fail, 2 = retry
   later) **[C]**.
4. Varargs are deferred: if `(a2 & 2) == 0` and the convention is `CM_CC_ELLIPSIS` (0x40) or
   `CM_CC_SPECIALE` (0xD0), return 0 **[C]** (the driver retries with bit 2 set).
5. Mark the block for propagation (`flags = flags & ~0x200 | 0x80`: clear `MBL_LIST`, set
   `MBL_PROP`) and call `sub_EFB00` (section 5) to build the `mcallinfo_t` **[C]**.
6. Attach: `tail->d` cleared, `d.size = sub_330290(ci, mba)` (return value size), `d.f = ci`,
   `d.t = mop_f` **[C]**.
7. No-return: if `sub_11C750` (wraps `func_does_return`) says the callee does not return,
   `dead_regs = return_regs`, copy `return_regs.mem` and split the block (`sub_FECE0`) **[C]**.
8. Return location kind for the destination operand **[C]**: a struct return
   (`(prop & 0x2F) == 0xD`) marks `d.oprops |= 2` (`OPROP_UDT`) and records the call ea in a
   per-mba set; otherwise look at `return_argloc.type`: `ALOC_DIST` (2) with any stack piece →
   2, else 3; `ALOC_STACK` → 2, register → 3. `sub_F2530(blk, tail, kind)` creates the
   destination; failure returns 0.
9. Scattered returns that do not fit in two registers go through `sub_1CBA80` (791 lines,
   `for_all_arglocs` over the pieces) **[I]**.
10. Set `MBL_CALL`, verify, fire `hxe_callinfo_built`, return 1 **[C]**.

**Kuna counterpart.** `p4_calls/funcdata_callsite.rs` + `fspec.rs` (`FuncCallSpecs`).

**Unlace status.** Calls stay opaque `Call` IR ops with an input list. There is no per-call
object holding `return_regs`/`spoiled`/`pass_regs`/`dead_regs`/`visible_memory`;
`abi_clobber.rs` applies a fixed clobber set per ABI.

---

#### 3. Callee prototype lookup: `sub_E9680` (742 lines) with the type cache `sub_380880`

**Purpose.** Find the best available prototype for the call target, in a fixed order of
trust, and fall back to guessing it from the call site.

**Order of sources** **[C unless marked]**:
1. Resolve the callee ea (`sub_E7130`: `mop_v` target, otherwise the first code xref from the
   call, `get_first_fcref_from`; tails resolve to the owning function with `prev_not_tail`).
2. `get_op_tinfo` on the call instruction (a user-set operand type, i.e. an explicit type for an
   indirect call).
3. Cached/IDB type of the callee: `sub_3810A0(hooks, ea, tif, 2)` → `sub_380880`.
4. For a call through a data item (`(flags & 0x600) == 0x400` and an offset operand): the type
   of `get_first_dref_from`.
5. The demangled name: `demangle_name`, then `decode_decl` of `"_QWORD " + demangled` (or
   `"_DWORD "` on 32-bit, `*(a1[2]+144)` is the 64-bit flag). The result must pass
   `sub_E0550` and the validator `sub_32CB80`.
6. Guess from the call site: `sub_E1F80` (section 4).

When a pointer type is found (`(prop & 0xF) == 0xA`) it is dereferenced to the function type
(GTA_PTR_OBJ) **[I]**. Once a function type is known, the context takes
`nargs = get_tinfo_property()` (fails on `< 0`, so GTA_FUNC_NARGS) and
`cc = get_tinfo_property()` (GTA_FUNC_CC) **[I]**. A type that fails validation is dropped with
`WARN_ILL_FUNCTYPE` and its `print_type` text (`"?"` when printing fails) **[C]**.

**Guessed prototype assembly** (the branch after `sub_E1F80`) **[C]**:
- One `funcarg_t` per guessed argument. If the callee does not return (`func_does_return`
  false) the type gets `FTI_NORET` (`flags |= 2`) and `rettype = void`; for user conventions
  (`cc - 208 <= 0x2F`) each argument receives an explicit location: `ALOC_REG1` (3) with the
  next register from the GP list then the FP list, and `ALOC_STACK` (1) for the rest.
- Otherwise `sub_E7020` assigns types and locations, with the `AFL_RETFP` aflag
  (`aflags & 0x4000000`) selecting a floating-point return.
- On targets where register width is at most 7 bytes, pairs of slots are folded (the
  `v57 = v91 - v97 + ... - 2` loop deletes every second argument) **[I: 32-bit pairs for
  64-bit values]**.
- A processor-module hook (`vtbl+128` of the arch object, default `sub_E37F0`) can reject or
  rewrite the guess; then `sub_F2040` builds the tinfo (`create_tinfo` + `calc_arglocs`).

**Commit** (`sub_E7260`, 36 lines) **[C]**: re-read cc and nargs, assert `sub_32CB80` (interr
52086), wrap in a pointer for indirect targets (`sub_32C540`), and call
`sub_F34C0(mba, callee, tif, 2)`. That stores the type with rank `GUESSED_FUNC` through
`sub_381E90` (section 8) and then marks **every other call block in the function that targets
the same callee and has no call info yet** for re-propagation (`flags & ~0x200 | 0x80`). This is
how one guess is shared by all call sites of the same callee inside one function.

**Type cache `sub_380880` (187 lines)** **[C]**: an `std::map<ea, entry>` hangs off
`hooks+1128`. An entry holds a `tinfo_t` (`+48`) and a rank (`+56`), where the rank uses
`type_source_t`: 0 `GUESSED_NONE` (user), 1 `GUESSED_WEAK` (IDB), 2 `GUESSED_FUNC`,
3 `GUESSED_DATA`. On a miss:
`get_tinfo(ea)`; thunks (`func->flags & FUNC_THUNK`, tested as `*(char *)(func + 16) < 0`) use
the type of `calc_thunk_func_target`; then a processor hook (`vtbl+152`); then the built-in
runtime table `sub_338B00`; then `guess_tinfo` (rank 3 request) or `sub_338DC0` (guess only for
real code, following thunk chains with `get_first_fcref_from`). Types that fail
`sub_32CB80` are recorded in a reject set and replaced by the sentinel `0x30`
(`(*(entry+48) & 0x3F) == 0x30` means "no usable type"). `sub_3810A0` refuses a cached type when
the caller asked for rank ≤ 1 and the entry rank is worse:
`v9 = a4 & 0xF1FFFFFF; if (v9 <= 1 && v9 < rank) return 0` (the mask removes the `TS_*` bits).

**Built-in runtime table `sub_338B00` (90 lines)** **[C]**: `runtime_newobject` and
`runtime_morestack*` get a hard-coded `decode_decl`; names starting `objc_msgSend` and a sorted
17-entry name table (`off_4EE5A0`, binary-searched with `strcmp`) map to `get_stock_tinfo`
(STI_* stock types). The table contents live in `.data` and are not in the dump.

**Validator `sub_32CB80` (287 lines)** **[C]**: `lower_type`, `get_func_details`,
`nargs < mba_limit` (`*(a2+656)`), Go ABI gate (Go register ABI only when the Go version
netnode value is > 0x74 and != 117), return location checked by `sub_32C920`
(`verify_argloc` + `for_all_arglocs`), then per argument: no register argument under the old
Go ABI; size must be > 0 and ≤ 0xFFFF for `ALOC_DIST`; float arguments need a supported float
size (`sub_11CB40`); `verify_argloc`; a `for_all_arglocs` visitor (vtable `off_4E3668`) checks
that each piece maps to a micro register or stack slot; user conventions also check
non-overlap (`sub_1C6910`); `print_tinfo` must succeed. Finally `verify_tinfo() == 0`.

**Callers/callees.** Called by `sub_F4760`, `sub_EE7A0` (user-defined call types, string
`"argument #%d in a user-defined function type can not be applied to unmerged function"`) and
`sub_FDF80` (re-typing an existing call, via `sub_FF080`).

**Kuna counterpart.** `p4_calls/fspec.rs` (`FuncProto` / `ProtoModel` lookup),
`p0_knowledge/database.rs` (symbol scope); `kuna_calleetrial.rs`, `kuna_langabi.rs`,
`kuna_rustabi.rs` for language runtimes.

**Unlace status.** `libc_signatures.rs` (hard-coded libc table) + `unlace-flirt` names +
`FunctionSignatureRegistry` (`BTreeMap<u64, FunctionSignature>`, `unlace-ir/src/ssa.rs:140`).
Missing: user/operand types for indirect calls, thunk-target types, prototypes parsed from
demangled names (the `"_QWORD " + demangled` trick is cheap and useful), a validator that
rejects types the ABI cannot place, and a rank on each stored type.

---

#### 4. Unknown-callee argument guesser (`sub_E1F80`, 1098 lines)

**Purpose.** When no prototype exists, count the arguments and pick a convention from what the
call site actually sets up. Returns the convention; the argument count is written into the
context (`a1+348`), register lists into `a1[12..]`/`a1[15..]`.

**Key data.** A candidate is a 208-byte object built by `sub_D10B0(cand, hooks, cc)`:
`callregs_t` at 0 (`policy` 0, `nregs` 4, `gpregs` 8..32, `fpregs` 32..56), `cc` at 72,
`mba` at 80, GP-argument bitset at 144, FP-argument bitset at 160, extra register vector at
176, a hook result at 200, "maybe more arguments on the stack" byte at 205 **[C for the
callregs part, I for the rest]**. `sub_64880` = bitset empty, `sub_64C00` = highest set bit.

**Algorithm.**
1. Stack arguments: `nstk = sub_E0380(ctx) / slot_size` **[C]**. `sub_E0380` takes the stack
   argument bytes of this call (`sub_D7430`) and then decodes **every other call to the same
   callee** in the database (`get_first_fcref_to`/`get_next_fcref_to`, `decode_insn`,
   `is_call_insn`, `sub_D73B0`) and keeps the minimum. So the stack argument count is the
   minimum over all call sites. A negative count or one above the limit gives
   `WARN_BAD_CALL_SP` and 0 arguments.
2. Go stack ABI module (`*(a1[2]+148) == 1`): return `CM_CC_GOSTK` (0x100) **[C]**.
3. Name test on the callee name **[C]**: any lowercase letter or `@` → `v15 = 1, v16 = 0`; a
   non-empty name with neither → `v15 = v16 = 1`.
4. Register candidates **[C]**: `sub_DEB50(cand, 0x70 FASTCALL, insn, f)`,
   `sub_DEB50(cand, 0x80 THISCALL, insn, f)` and, for Go, `sub_DEB50(cand, 0xB0 GOLANG, insn, f)`.
   `sub_DEB50` initialises the register lists for the convention, asks the processor hook
   (`vtbl+360`) and scans backwards from the call with `sub_DE000`, setting a bit for every
   argument register that is defined before the call (separately for GP and FP lists when the
   policy is `ARGREGS_INDEPENDENT` or `ARGREGS_FP_MASKS_GP`). The candidate with more arguments
   wins; ties compare the register vectors element by element.
5. `sub_DE780` decides whether the register list was exhausted (all GP or all FP slots used),
   which means more arguments may be on the stack; then the stack is scanned again by
   `sub_E0FE0` (769 lines) or `sub_DFFC0` and the count is raised **[I]**.
6. `sub_DAE40` trims register arguments when the stack count proves fewer slots **[I]**.
7. Result **[C values, I mapping to cases]**: the winning candidate's cc (0x70/0x80/0xB0);
   `0x20 CM_CC_VOIDARG` when nothing is passed; `0x50 CM_CC_STDCALL` (lowercase name, callee
   pops); `0x60 CM_CC_PASCAL` (all-uppercase name, callee pops); `0x100`/`0xB0` for Go; otherwise
   the processor default from `sub_D06A0(ph)`. The winning candidate's state is swapped into
   the context with long `_mm_loadu_si128` swap sequences (`a1+88..a1+292`).

**Kuna counterpart.** `kuna_calleearity*.rs` (one callee, one arity across call sites),
`kuna_callsitestackargs.rs`, `kuna_calleevote.rs`, `kuna_entryreads.rs`. Kuna reconciles arity
per callee after the fact; Hex-Rays takes the minimum stack size over all call sites up front.

**Unlace status.** `vararg_detect.rs` compares register-write counts across call sites to flag
variadic callees, and `call_args.rs` reloads stack arguments from same-block stores. There is
no per-convention candidate scoring, no minimum-over-callers stack size and no name-based
STDCALL/PASCAL choice.

---

#### 5. `mcallinfo_t` construction (`sub_EFB00`, 670 lines) and argument operands (`sub_E5020`, 468 lines)

**Purpose.** Turn the chosen `func_type_data_t` into an `mcallinfo_t` with one `mcallarg_t`
per argument, located in microcode, and compute the output and spoiled lists.

**Algorithm (`sub_EFB00`)** **[C]**:
1. `get_func_details`; reject unless the return is void or its size is a supported scalar
   size, the pointer size, or 16.
2. Allocate the 312-byte `mcallinfo_t`; `callee`, `solid_args`.
3. `n = sub_ED8C0(ctx, &fti, ci)` (argument locations, see below); fail if `n < nargs`.
4. Fill `call_spd`, `stkargs_top = call_spd + fti.stkargs`, `cc`, resize `args`, copy
   `rettype`/`retloc`, `flags |= ctx flags`.
5. For each argument: `sub_E5020(&ci->args[i], blk, &fti[i], call_spd, cc, 1)`. For variadic
   conventions, find where pushed stack arguments end: `sub_E82F0` looks for the store that
   writes the slot, and `sub_32F330` checks whether the slot is below the outgoing-argument top;
   stack arguments past that point are cut.
6. After each argument the processor hook `sub_BE340(arch, ci, name, 1)` can adjust the call
   info; if a second hook (`vtbl+136`) and `sub_F1700` want a different type, the type is
   rebuilt by `sub_F3650` and the whole loop restarts at step 3 (`goto LABEL_5`).
7. Drop trailing register arguments that are in the context's "not an argument" list
   (`ctx+264`) (pairs with section 4's ambiguous registers) and, for a guessed type
   (`ctx+366 == 1`), recreate the tinfo and commit it with `sub_E7260`.
8. `sub_1390C0` (`mba_t::get_func_output_lists`) fills `return_regs` and the spoiled list from the
   type (it reads `fti.spoiled` when `FTI_SPOILED` is present, otherwise the convention's
   default clobber set) **[I for the spoiled detail]**; copy both halves of the mlist into
   `ci->spoiled`.
9. `visible_memory = ALLMEM` unless `FCI_PURE`.
10. `WARN_SUBFRAME_OVERFLOW` when the last argument is on the stack and `stkargs_top` passes the
    frame of the function chunk (`mba+1472` table).

**`sub_ED8C0` (308 lines)** **[C structure, I purpose]**: variadic conventions go straight to
`sub_EC750` (vararg counting, which calls `sub_EB240`). For a guessed `__cdecl`/`__fastcall`
prototype (`(cc & ~0x40) == 0x30`) of a callee other than the current function, with at least
two arguments whose last one is a 1-byte stack argument, it **tries the same prototype as
variadic**: copy the type, drop the last argument, set `old_cc = 0x40` (ELLIPSIS),
`calc_arglocs`, require identical locations for the kept arguments (`compare_arglocs`), and
count varargs with `sub_EC750`. If that finds more than `nfixed + 1` arguments, the variadic
prototype replaces the guess (`sub_F3650`).

**`sub_E5020` — one `mcallarg_t`** **[C]**:
- Copy `name`, `argloc`, `flags`; `size = get_tinfo_size(type)` or the slot size.
- `FAI_UNUSED` (0x10): the operand becomes a helper call named `"UNUSED_ARG"`
  (`sub_335B10`), and the flag is cleared.
- Otherwise convert with `mba_t::idaloc2vd` (`sub_1C5FB0`): `ALOC_REG1` → `mop_r`;
  `ALOC_REG2` → `mop_r` of double width, or a pair built by `sub_1252A0` when the two
  registers are not adjacent; `ALOC_STACK` → `mop_S` (`stkvar_ref_t {mba, off}` allocated as 16
  bytes) after alignment to a power of two ≤ 2 × slot size (Go conventions keep the slot
  size), and only when the slot lies inside `mba->stacksize`.

**`mcallinfo_t::get_type` (`sub_336290`, 350 lines)** **[C]** converts back:
`solid_args` funcargs, `cc` via `helper_set_cc`, `FCI_PURE → FTI_PURE`,
`FCI_NORET → FTI_NORET`, `FCI_EXPLOCS → FTI_EXPLOCS`, `create_tinfo(BT_FUNC)`,
`set_tinfo_attrs(fti_attrs)`, and interr 50657 when `verify_tinfo` fails.

**Kuna counterpart.** `fspec.rs` (`ParamListStandard::fillinMap`, `assignMap`),
`kuna_typedcallabi.rs`, `kuna_hiddenretarg.rs`, `kuna_msvcbyval.rs`, `kuna_returnpair.rs`.

**Unlace status.** `sysv_eightbyte.rs` (SysV aggregate classification) and `abi_layout.rs` model
the ABI rules, but there is no argument-location type (nothing like `argloc_t`/`vdloc_t`:
`rg 'argloc|ArgLoc'` finds nothing), so a call argument cannot be "the stack slot at +0x10" or
"the pair rdx:rax". There is no `UNUSED_ARG` placeholder and no spoiled list per call.

---

#### 6. Format-string varargs (`sub_EB240`, 826 lines)

**Purpose.** Expand a printf/scanf-family call into concrete variadic arguments using the
constant format string.

**Algorithm** **[C for calls and literals, I for the exact gating]**:
1. Skip when `ctx+365` is set (set in `sub_E9680` for pointer types whose attribute text
   matched `stristr`) and when the option byte `hooks+712` is 0. The option has three values:
   1 = only functions that declare a format attribute, 2 = also by name **[I]**.
2. Callee name via `sub_1D2AB0` (strips `_veneer`, `_from_arm`, `_from_thumb`).
3. `sub_E7590`: read the `format` type attribute (`unpack_dd`) or match names with `stristr`
   against `"printf"`, `"scanf"`, `"strfmon"`, `"snprintf"`; result = kind, index of the format
   argument and of the first vararg. With no match and option 1, stop; else assume the last
   fixed argument is the format.
4. Build the `mcallarg_t` of the format argument (`sub_E5020`) and read its string from the
   database (`sub_E8020`: `get_flags_ex`, `prev_not_tail`, `strlen`). `sub_E7D60` can also
   create the string literal in the database (`create_strlit`, then `set_tinfo` as a
   `char` array) — a side effect on the IDB **[C]**.
5. `sub_E4160` parses the format: length modifiers `"hlLjt"`, conversions `"dioux"`, types
   `wchar_t`, `intmax_t`, `ptrdiff_t`, built with `get_stock_tinfo`/`create_tinfo` **[C]**.
6. When the callee is unknown and there was no format attribute, accept only formats whose
   varargs are all non-float and no wider than a slot.
7. Append the types (`sub_EABB0` resize to `nargs + nvar`), then `calc_varglocs` for
   non-user conventions; user conventions or a failure fall back to a manual layout with
   `callregs_t` (`sub_D10B0`).
8. Build the mlist of every location the varargs occupy (`sub_63E80` + `sub_64280` +
   `sub_316CB0`) and walk the definitions before the call (`sub_129150`, `sub_127A20`) to make
   sure each location is really written; otherwise the expansion is refused.

User-defined varargs have their own checker `sub_2C43C0` ("wrong location in the user-defined
vararg #%d", "fix unaligned location in the user-defined vararg #%d") **[C]**.

**Kuna counterpart.** `p1_partition/kuna_formatstring.rs` (off/static/full modes),
`p4_calls/kuna_varargformat.rs`, `kuna_varargstackargs.rs`, `kuna_varargtail.rs`,
`p5_types/kuna_varargfloat.rs` (FP-register varargs become `double`).

**Unlace status.** `printf_type_infer.rs` decodes formats but is detection-only;
`vararg_detect.rs` also parses printf formats and marks callees variadic. Neither appends
typed variadic arguments to the call or checks that the locations are written.

---

#### 7. The function's own convention: `sub_37E500` → `sub_37BF90` → `sub_36ECF0` / `sub_3716A0`

**Purpose.** During lvar allocation, settle which lvars are the arguments and which
convention describes them; fall back to `__usercall`/`__userpurge` when no standard convention
fits.

**`sub_37E500` (93 lines, called from `mba_t::alloc_lvars` `sub_1FAD30`)** **[C]**: clear
`mba->flags2 & 0x40`, rebuild argument lvars (`sub_37A500`, 1018 lines), optionally demote leading
arguments (`flags &= ~(CVAR_ARG|CVAR_THISARG)`, `|= CVAR_NOTARG`), run `sub_37BF90(mba, 0)` and a
second time with 1 for user conventions when an option bit (`hooks+606 & 0x10`) is set, fix up
scattered argument locations (`sub_1C4240`), set `flags2 |= 0x40`.

**`sub_37BF90` (84 lines)** **[C]**:
1. If the current `mba->cc` is accepted by `sub_3716A0` and the type is final
   (`mba->final_type`, `+320`), keep it.
2. Else loop: `cc = sub_36ECF0(mba)`; accept when `sub_37B940(mba, cc)` (re-lay the argument
   lvars for the cc) and `sub_3716A0(mba, cc, a2|4)` agree.
3. Otherwise fall back to a user convention: `0xD0 CM_CC_SPECIALE` when the function is variadic
   (`vtbl+56` on `mba+936`), else `0xF0 CM_CC_SPECIAL`; if `mba->npurged > 0` use
   `0xE0 CM_CC_SPECIALP` (this is `__userpurge`). `sub_371DC0` may drop an argument and the loop
   repeats while the argument count changes.
4. `THISCALL` (128) marks the first argument as `this` (`sub_36A560`). A final user type with no
   arguments becomes `0x20 CM_CC_VOIDARG`.

**`sub_36ECF0` (307 lines, the only caller of `guess_func_cc`)** **[C]**:
- Variadic function → `0x40`.
- Build `func_type_data_t` from `argidx`: each argument location via `mba_t::vd2idaloc_`
  (`sub_1C7740`), its type, and `stkargs = sub_36EC70(mba)` = end of the last stack argument
  minus `inargoff`, rounded up to the slot size.
- Go module with every argument and the return on the stack → `0x100`.
- `guess_func_cc(fti, ...)` twice (the second call presumably with relaxed `CC_*` flags such as
  `CC_ALLOW_ARGPERM`/`CC_ALLOW_REGHOLES` **[I]**); still `CM_CC_UNKNOWN` with arguments is
  interr 51139.
- `FASTCALL` on 32-bit x86 is rechecked as `THISCALL` when the first thiscall register equals
  the first fastcall register and `sub_36EA50` (two microcode visitors) shows the first
  argument used like a `this` pointer of pointer width → 128.
- A user convention from `guess_func_cc` is replaced by `0x70` here; the user fallback is
  decided by the caller.

**`sub_3716A0` (271 lines) — "does cc fit these argument lvars?"** **[C]**: count stack
arguments; check register arguments with `sub_1EEEF0`. Then per convention:
`CDECL (0x30)` all arguments on the stack and `npurged <= 0`; `STDCALL/PASCAL` all on the stack
and not variadic; `FASTCALL/THISCALL` not variadic, and when `npurged` is known it must equal the
computed stack size (`sub_36EC70`), then the register order is checked by `sub_370720` (which
lays out a type with `sub_D81C0` and compares); `ELLIPSIS` requires variadic; `SPECIALE`
requires variadic, `SPECIALP` requires purged bytes, `SPECIAL` requires non-variadic;
`UNKNOWN`/`VOIDARG` require no arguments.

**Kuna counterpart.** `p0_knowledge/kuna_evalcurrentproto.rs` (evaluates the function's own
prototype with the merged model the compiler spec nominates) and `ProtoModelMerged::selectModel`
in `fspec.rs`; `kuna_inputparamgap.rs`, `kuna_stackarggap.rs`.

**Unlace status.** `calling_convention.rs` detects SysV vs MS x64 from entry-block
read-before-write (`classify_calling_convention`); `calling_conv_finalize.rs` produces a
`FinalizedSignature`; `CallingConvention` has SystemV, MicrosoftX64, AArch64, Cdecl, Stdcall,
Thiscall, Unknown (no fastcall, no user conventions). The printer can print `__usercall` /
`__userpurge` (`UsercallSpec`, `c_printer/mod.rs:816`), but `rg UsercallSpec` finds no producer.
No purged-bytes model (`rg purged` finds nothing), so `__stdcall` vs `__cdecl` and `__userpurge`
cannot be decided from `ret N`. Two convention enums exist (`ssa.rs::CallingConvention`,
`tinfo.rs::CallingConv`).

---

#### 8. Interprocedural flow: `set_type` merge (`sub_381E90` → `sub_37EEC0`) and IDB write (`sub_374E50`)

**Purpose.** Store a callee type with its rank, merge it with what is already known, and
persist it, so later decompilations (of this and other functions) see it.

**`sub_381E90` (75 lines, `hx_set_type`)** **[C]**: reject a by-value struct type with no
reference flag (interr 50227) and anything failing `verify_tinfo` (interr 50226). With
`force` (`a5`) insert as is into the cache map; otherwise merge with `sub_37EEC0`. Then
`sub_1460B0` (walks a dependent set, probably to invalidate cached results **[G]**).

**`sub_37EEC0` (986 lines) — merge rules** **[C for the gates, I for the per-argument part]**:
- Function types only for code addresses (`FF_CODE` + `FF_FUNC`) or special eas.
- Rank `GUESSED_WEAK` is not a valid input (interr 50228).
- An existing valid entry with a **better** rank wins (`entry.rank < new_rank` → no change).
- Identical types (`compare_tinfo` / `lexcompare_tinfo`) → no change.
- Rank `GUESSED_NONE` (user) replaces.
- Otherwise get both function details and merge **per argument**: compare locations
  (`compare_arglocs`, `sub_1C5FB0` + `sub_369CC0` for overlapping vdlocs) and merge each pair with
  `sub_36B620`. That function keeps float vs integer apart and, when `TS_SHRINK` (0x4000000) is
  set, prefers the smaller of two sizes, but only if both sizes take the same number of
  slots. `TS_NOELL` (0x8000000) blocks merging into an ellipsis. The merged type is created
  with `create_tinfo` and checked (interrs 50222/50224/50225).
- Changed entries are written to the database with `sub_374E50`.

**`sub_374E50` (26 lines)** **[C]**: if the address does not have `AFL_USERTI` (0x2000000, "the
type information is definitive"), `set_tinfo(ea, tif)` (re-creating the function type from its
details first), then `upd_abits` for ranks ≤ 3, which records `AFL_HR_GUESSED_FUNC` /
`AFL_HR_GUESSED_DATA` so the type is shown as guessed (`WARN_GUESSED_TYPE`) and can be
overwritten later.

**Other database writes seen in this area** **[C]**: `set_purged` (`sub_100140`, tail-call
conversion, after comparing with `get_ind_purged`; may emit `WARN_UNBALANCED_STACK`),
`create_strlit` + `set_tinfo` for format strings (`sub_E7D60`), and `save_tinfo` /
`set_tinfo_property4` in `sub_399920` — but that last one is the interactive "create new struct
type" action (literal `"struct_"`, `"The following new type will be created"`), not automatic
recovery.

**Kuna counterpart.** `p4_calls/kuna_protoorder.rs` (callee-before-caller order, `types` /
`lock` modes, decline rules), `kuna_calleevote.rs` (caller → callee pointer-type votes over a
closed caller set), `p5_types/kuna_libcfit.rs`.

**Unlace status.** `caller_param_propagate.rs` merges caller argument types into the callee
slot with the `PrimitiveType::join` lattice (Unknown is replaced, conflicts become Unknown);
`interproc_fixpoint.rs` re-runs functions whose signatures changed; `whole_prog_cc.rs` drops dead
parameters and propagates void returns. Missing compared with Hex-Rays: a rank per stored
type (user > debug info/IDB > guessed-function > guessed-data) that decides who may overwrite
whom — `TypeSource` exists in `unlace-ir/src/tinfo.rs:489` but `FunctionSignature` does not
carry it; per-argument location-aware merging (Unlace's merge is by index in ABI order); and a
"guessed" mark on the stored result.

---

### Comparison summary

| Capability | Hex-Rays (hexx64) | Kuna | Unlace |
|---|---|---|---|
| Per-call record with locations, spoiled, return regs | `mcallinfo_t`/`mcallarg_t` | `FuncCallSpecs` | no |
| Unknown callee: arg count | candidates per cc, min stack bytes over all call sites | per-site trials + `calleearity` reconcile | libc table / callee body only |
| Callee type sources | operand type, IDB, thunk target, data ref, demangled decl, runtime table, guess | symbol DB + spec models | libc table, FLIRT, registry |
| Varargs | deferred pass, format parsing with location checks, cdecl→`...` retry | format modes, FP-vararg double | detection only |
| Own convention | `guess_func_cc` + per-cc fit check + usercall/userpurge fallback | merged model `selectModel` | SysV/MS x64 entry reads |
| Purged bytes | `npurged`, `set_purged`, `WARN_BAD_PURGED` | stack model | none |
| Interprocedural merge | ranked `set_type`, per-arg merge, IDB write with guessed abits | protoorder + calleevote | join lattice, fixpoint |

### Gaps / open questions

1. `get_tinfo_property` arguments are elided by the dump, so the GTA_* numbers above are
   inferred from use. A disassembly of `sub_E9680` around LABEL_39/LABEL_42 would confirm
   GTA_FUNC_NARGS (23) and GTA_FUNC_CC (20).
2. `sub_36B260` ("which type is better") decompils to a body that returns 0 after only copies;
   its real comparison is not recovered.
3. The exact rules of `sub_DEB50`/`sub_DE000` (how far back the register scan goes, which
   definitions count, how the processor hook at `vtbl+360` changes the list) need a separate
   read of `sub_DE000` and `sub_D1010`.
4. The 17 built-in runtime names (`off_4EE5A0`) and the `.data` stock-type mapping are not in the
   dump.
5. `sub_E0FE0` (769 lines) / `sub_DFFC0`: stack-argument scanning when all register slots are
   used was not traced.
6. Meaning of the option bytes `hooks+148` (Go mode: 1 vs 2), `hooks+712` (format parsing) and
   `hooks+606 & 0x10` (second user-cc pass) is inferred from use, not from a name.
7. `sub_37A500` (1018 lines), which builds the argument lvars before the convention check, and
   `sub_D81C0` (2068 lines), which lays out a prototype into lvars/vdlocs, were only mapped by
   callers; they belong with the lvar section.
8. Unlace actions in priority order, from the evidence above: (a) an argument-location type
   (register, register pair, stack offset, scattered) shared by call sites and prototypes;
   (b) a rank on `FunctionSignature` and rank-aware merge; (c) unknown-callee arity from the
   minimum stack-argument size over all call sites plus per-convention register candidates;
   (d) purged bytes and the `__usercall`/`__userpurge` producer for the existing printer
   support; (e) turning `printf_type_infer.rs` from detection into call-argument expansion.
