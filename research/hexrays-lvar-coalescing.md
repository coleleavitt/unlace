# Hex-Rays lvar allocation and coalescing (hexx64 9.3sp1 dump) vs unlace

Status: research note, 2026-10-29. Section 11 records the changes made after it.

Souremote code execution: one pseudo-C file per function in
`/home/cole/SiteResearch/IDA-pro/hexx64-IDA-dump-93sp1/all/` (directory name is
lowercase `IDA` on disk). Citations are `sub_XXXX:line` in those files.

Struct offsets are matched to the public `hexrays.hpp` layouts (`mba_t`,
`lvar_t`, `chain_t`, `graph_chains_t`). Each match is marked **[SDK]**. A
statement marked **[inference]** is not proven by the dump alone.

## 0. Correction of earlier notes

`research/hexrays-algorithms-deep.md` and `research/hexrays-algorithm-map.md`
describe `sub_21B2A0` as an "interference graph + coalesce orchestrator" and
`sub_215AC0` as a "type/liverange compatibility check". The dump does not
support this:

- `sub_21B2A0` **sorts** the lvar vector and remaps every reference to the new
  order. It builds the identity permutation (`sub_21B2A0:104-119`), sorts it
  with `sub_215AC0` as the less-than predicate (intro sort `sub_21B070` plus an
  insertion-sort tail, `:135-153`), returns early when the order did not change
  (`:235-244`), swaps the 104-byte `lvar_t` records into place (`:357-391`),
  builds the inverse map (`:387`) and calls `sub_216E00(mba, &inv, 1)` (`:399`).
  When `get_merge_state()&3` is set (IDB-merge mode) it uses a different inline
  comparator (`:169-233`).
- `sub_215AC0` is that **sort comparator**. It does not test interference.
- No function in the lvar allocator builds an interference graph or computes
  live intervals. Hex-Rays does no graph-coloring coalescing.

## 1. Data structures

| Object | Evidence | Meaning |
|---|---|---|
| `mba+432/+440/+448` | `sub_1F6560:116-144` (push of a 104-byte record) | `lvars_t vars` qvector (data, size, alloc) **[SDK]** |
| `mba+456/+464` | `sub_215AC0:86-118`, `sub_216E00:22-33` | `argidx` (lvar indexes of the arguments, in order) **[SDK]** |
| `mba+480` | `sub_216E00:19-21`, `sub_2196C0:195-212` | `retvaridx` **[SDK]** |
| `mba+1256/+1264` | `sub_219BD0:33-35`, `sub_216AF0` | user `lvar_saved_info_t` vector (96-byte records) **[SDK]** |
| `mba+1280/+1288` | `sub_2196C0:50-131`, `sub_219F90:84-93` | `lvar_mapping_t` = `std::map<lvar_locator_t, lvar_locator_t>` (from → to) **[SDK]** |
| `mba+784` | `sub_1F8DC0:476-495` | `mbl_graph_t`; `sub_110340(g,0)` / `sub_1108E0(g,0)` return the use-def and def-use `graph_chains_t` (lock count `+24` is incremented; `sub_104E10` decrements it) **[SDK]** |

`lvar_t` (104 bytes): `+0` location type (`1` stack, `2` scattered, `3`/`4`
register / register pair), `+8` location value, `+16` `defea`, `+24` flags,
`+32` name, `+56` comment, `+80` tinfo, `+88` width, `+92` `defblk`. Flags
seen in this code, with SDK names: `0x80` RESULT, `0x100` ARG, `0x400` OVER,
`0x1000` SPOILED, `0x2000` MAPDST, `0x20000` REGNAME, `0x100000` NOTARG,
`0x200000` AUTOMAP, `0x2000000` SHARED **[SDK]**.

`chain_t` (a node in a per-block `std::set`; the chain starts at node `+24`):
`+0` intvec of block serials, `+24` key offset (register number or stack
offset), `+32` key type (`1` = `mop_r`, `5` = `mop_S`), `+40` width, `+44`
`varnum` (lvar index, `-1` = not allocated), `+48` chain flags. Evidence:
`sub_202D40:47-59`, `sub_202840:47,95-97`, `sub_104E40:64,71-74` **[SDK]**.

Live ranges are **not** stored as intervals or point sets. They are only the
block-level def-use and use-def chains: one chain per (block, location key), and
each chain lists the blocks that hold the matching defs or uses.

## 2. Pipeline position

1. During global optimization at maturity 6, the optimizer clears
   `MBA_LVARS0` (`0x40000`), runs a *trial* `prealloc_lvars`
   (`sub_14B8B0:245-255` calls `sub_1FAB30`), and optimizes again if the trial
   asks for it (`:254-255`, `goto LABEL_24`). Once the loop settles it sets
   `MBA_LVARS0` (`sub_14B8B0:339`).
2. `sub_1FAD30` is `alloc_lvars`. It returns early when maturity > 7 (`:33`).
   Then it runs:
   - `prealloc_lvars` (`sub_1FAB30` → `sub_1F8DC0`, `:45`),
   - several cleanups (`:53-79`),
   - user lvar settings and user mappings (`sub_219BD0`, `:80`),
   - **automatic mapping** (`sub_21A2C0`, `:87`),
   - the final **sort** (`sub_21B2A0`, `:97`).

   It then sets maturity 8 = `MMAT_LVARS` (`sub_330F20(a1,8)`, `:118`) and
   prints "after alloc_lvar" (`:119`).
3. Naming (`sub_2112D0`) runs later, over the sorted `vars`.

## 3. prealloc_lvars (`sub_1F8DC0`): an lvar is one web of one location

### 3.1 Setup

- `sub_21F320(mba+944)` runs first when `MBA_LVARS0` is clear (`:287`). It
  walks the def-use chains of stack (`mop_S`) locations and grows an aligned
  stack region stored in its argument (`sub_21F320:188-280`), or derives the
  region from `retvaridx` (`:146-181`). **[inference]** This sizes one reserved
  stack area (the return buffer or the outgoing-argument area). It is not a
  general frame layout, so the old label "stack frame layout" overstates it.
- It sets `MBA_GLBOPT|MBA_CHVARS` (`|= 0x210000`, `:295`) and stores the
  current lvar count in `mba+792` (`:297`).
- The body is a retry loop (`while(2)`, `:377`). It gets the use-def and
  def-use chains (`:476-495`) and runs `sub_207F40` (`:520`), which prepares
  register chains and may split them (`sub_207F40:72-180`).

### 3.2 Allocating chains to lvars

`sub_104E40` is `graph_chains_t::for_all_chains(visitor, gca_flags)`:

- `:24-28` decode `GCA_EMPTY=1`, `GCA_SPEC=2`, `GCA_ALLOC=4`, `GCA_NALLOC=8` and
  `GCA_OFIRST/OLAST=0x10/0x20`.
- `:52-62` skip empty chains.
- `:63-67` skip "special" register chains. The test is a virtual call at
  `+264` on `mba+1504` with the register number. **[inference]** This filters
  out sp/flags-like registers.
- `:69-75` filter on `varnum == -1`.
- `:77` calls `visit_chain(nblock, chain)`.

`prealloc_lvars` calls it with flag 8, so only unallocated chains are visited
(`sub_1F8DC0:667`).

The visitor for each unallocated chain is `sub_2036E0` (it receives `nblock`
and `chain`):

1. `sub_202D40` finds or creates the lvar for this chain (`sub_2036E0:140`):
   - The key is `(type, off, width)` from the chain (`sub_202D40:47-62`).
   - `defea` comes from `sub_2024F0` (`:65`). Without `MBA_PRCDEFS` (`mba
     flags & 1`), or in block 0, `defea` is the **block start ea**
     (`sub_2024F0:17-18`). Otherwise it is the ea of the first defining
     instruction found by `sub_201E10` (`:25-49`).
   - It looks up an existing lvar by locator (`sub_1F0540`, `sub_202D40:172`)
     or by location and `defea` (`sub_1F06E0`, `:183`). It creates one only if
     none exists: `sub_1F6B00` for registers (`:190`) and `sub_232C90` for
     stack (`:196`). Both push through `sub_1F6560`.
   - The lvar index goes to the visitor (`+44`, `:210`). Under a condition
     from `sub_1C3110` it sets `0x2000000` (SHARED, `:206-208`).

   So **lvar identity is `(location, defea)`**. Two webs of the same register
   that start in the same block (imprecise defea) or at the same instruction
   reuse one lvar and are marked SHARED.
2. `sub_202840` floods the web (`sub_2036E0:291`). It writes `chain.varnum`
   (`sub_202840:97`) and fills a missing `defea` (`:64-93`). Then, for every
   block serial in the chain's list (`:98-179`), it looks up the chain with the
   **same location key** in that block of the *other* graph. The du and ud
   graphs alternate at each level (`:105-107`). The lookup is `sub_104DF0`
   (`:119`), and the function recurses (`:134`). It returns the **maximum chain
   width** in the web (`:159-160`), and that width becomes the lvar width.
   A chain that already carries a *different* varnum is a fatal
   inconsistency except in one mode (`:162-176`, `BUG()`).
3. Pair / scattered / widened locations (`sub_2036E0:147-287, 345-513`) get
   the lvar width and location adjusted. `sub_202CA0` → `sub_108C40` can split
   or rewrite chains when a web does not fit (`:600-640, 678-707`). On failure
   the code sets `+40 = 20` and the retry loop runs again.

Phi-like joins in this scheme: the microcode is not SSA. A value that reaches a
block from two predecessors is one use-def chain whose block list names both
defining blocks. The flood fill in step 2 therefore pulls both definitions
into **one lvar**. No copy is inserted and no interference test is made.
`MAPDST` copies are not involved here (see §5).

### 3.3 Rewriting operands to `mop_l`

- A per-block pass (`sub_1FCF80` with visitor `off_4DEDB8`,
  `sub_1F8DC0:702-850`) walks every instruction twice
  (`sub_1FCF80:181,222`). It collects the operands that must become lvar
  references into the map at `mba+800`. Between the two walks it builds the
  instruction's def list (`sub_127A20(...,129)`, `:151`). It marks lvars whose
  location the instruction overwrites with `0x1000` SPOILED (`:195-206`).
- When `MBA_LVARS0` is set, every collected operand is overwritten in place
  (`sub_1F8DC0:1206-1380`):
  - Any old `mop_S` / scattered payload is freed (`:1230-1332`).
  - The operand type becomes `9` (`mop_l`) (`:1336`).
  - A 24-byte `lvar_ref_t {mba, off, idx}` is allocated (`:1339-1344`).

  The chain `varnum` therefore turns directly into `mop_l.idx`. The `off`
  field keeps partial accesses (the chain is narrower than the lvar).
- When `MBA_LVARS0` is clear (the trial run), it applies user info and
  straightens pairs (`sub_219BD0`, `sub_CE6F0` "straighten lvar pairs",
  `sub_1C8C30` "unpacked scattered destination operand", `:1386-1390`). These
  can clear `MBA_GLBOPT` to request more optimization. Then it **truncates
  `vars` back to the saved count** (`sub_1F5AE0(vars, mba+792)`, `:1391`;
  `sub_1F5AE0` is `qvector::resize`) and returns 1 when re-optimization is
  needed (`:1395-1400`).
- Final checks: `SPOILED` is cleared (`:1212-1218`). With `MBA_LVARS0` set,
  allocated chains are revisited with `GCA_ALLOC` (`:1453-1459`); otherwise the
  chain varnums are reset (`sub_105060`, `:1463-1464`). Then "after
  prealloc_lvars" is printed (`:1450`).

### 3.4 Temporaries (kregs)

Nothing in `prealloc_lvars` or `sub_104E40` excludes kernel registers by
number. A `mop_r` kreg chain is allocated like any other register chain. The
only filter is the virtual "special register" test (`sub_104E40:63-67`).
`sub_1F6B00` treats register numbers ≤ 7 differently (`sub_1F6B00:58,136`). It
also consults `sub_1C7A10` and `sub_1338F0` (register-range checks on
`mba+1504`), which affect location normalization and naming (`:52-112`).

**[inference]** Hex-Rays temps rarely become user lvars for two reasons:

- Microcode instructions nest (`mop_d` sub-instructions), so most
  intermediate values never need a temporary.
- Global propagation at maturities 5-7 removes the remaining single-use kreg
  definitions before `MMAT_LVARS`.

A value that must survive in a named location usually lives in the
machine-code register or stack slot it came from. That register web becomes
the lvar.

## 4. User settings and user mappings (`sub_219BD0`)

- `sub_219BD0:35-98` applies saved names, types and flags to the matching
  lvars. `0x10` becomes CVAR_UNUSED (`0x1000000`); `0x20` becomes `0x8000000`.
  A rejected user type prints "incorrect user-defined type" (`:52-56`).
- `:99-199` validates every user mapping. Each side must resolve to an lvar
  (`sub_216660`); a mapping onto an arg or result lvar is rejected with
  "incorrect user-defined mapping" (`sub_216660:12-19`). Invalid entries are
  erased (`sub_2188C0`). Then `sub_2196C0` applies the mappings (`:159,199`).

## 5. Automatic mapping (`sub_21A2C0` + visitor `sub_215490`)

This is the only automatic merge of *different* locations. It covers one
pattern: **a local that is a whole-width copy of an argument**.

The visitor `sub_215490` runs for every operand (`mba->for_all_ops`,
`sub_21A2C0:101`; `sub_11FBB0` → `sub_11F9E0` = `for_all_topinsns`). It keeps
one 32-byte record per lvar (`{cand_insn, n_writes, n_reads, poisoned}`,
`sub_215490:44-52`).

A read of lvar X (`mop_l`, `:42`) records a candidate only if all of these hold:

- X has no write recorded so far (`:53-54`).
- X is ARG (`0x100`), the reference has offset 0, and the reference size equals
  X's width. X is not RESULT or MAPDST (`:65-68`).
- The current instruction is `m_mov` (4), or `m_f2f` (67) with equal sizes. The
  operand is its `l`, and `d` is a `mop_l` Y with offset 0 (`:71-76`).
- Y's width equals X's width (`:84`). Y has no user `LVINF_NOMAP` (`0x8`)
  setting (`:87-100`). Y is not ARG or RESULT (`:103`), and Y has no write
  recorded yet (`:106`).
- Neither X nor Y fails `sub_1C27D0` (`:106-110`). This test is a
  `sub_1EF9B0(mba, stkoff, width)` check for stack locations and is always
  false for registers. **[inference]** It probably detects an aliased or
  address-taken stack slot.
- A minsn visitor `off_4DF748` over a precomputed block set for the current
  block finds no conflict (`:112-148`). **[inference]** This is a
  dominance/reachability check that Y is not touched where the copy does not
  reach.

The candidate instruction is then stored on Y (`:150`). An operand with
`OPROP` bit `0x10` (undefined value) poisons the lvar (`:161-164`).

Selection (`sub_21A2C0:105-138`): Y is mapped onto X when all of these hold:

- Y has a candidate and is not poisoned.
- X was **never written** (`:116`).
- Y is written exactly once **or** X is read exactly once.
- Neither has REGNAME (`0x20000`) (`:119-122`).
- `sub_219F90(mba, Y, X)` accepts. It refuses when `width(Y) > width(X)`
  (`sub_219F90:59`). Without `MBA_PRCDEFS`, it also refuses a non-arg Y whose
  location `sub_1F06C0` matches another lvar (`:60-65`). It then inserts
  `Y→X` into `mba+1280` (`:84-93`).

Y gets AUTOMAP (`0x200000`, `:128`). If anything was mapped, `sub_2196C0`
runs (`:140`).

`sub_2196C0` (apply mappings) works as follows:

1. It turns locator pairs into an index map (`:70-131`) and path-compresses
   chains of mappings (`:133-157`).
2. It rewrites the map transitively (`:160-183`).
3. It remaps every `mop_l` together with `argidx` and `retvaridx` through
   `sub_216E00` (`:209`). The RESULT flag is protected around the call
   (`:195-212`).
4. It sets **MAPDST** (`0x2000`) on every mapping target (`:213-227`).
5. It **deletes the now self-copies**: `m_mov`, or same-size `m_f2f`, whose
   `l` and `d` are equal (`sub_125B60`), removed by `sub_A3480` (`:228-259`).

No live-range or interference test appears anywhere in mapping. Safety comes
from the narrow pattern: X is never written, and Y is written once or X is
read once.

`sub_216E00` (remap) runs the `mop_l` visitor `off_4DF6D0` over all operands
(`:13-18`). It rewrites `retvaridx` (`:19-21`) and each `argidx` entry
(`:22-33`), then calls a virtual hook on `mba+936` with the map (`:34`).
Related helper: `sub_21BBF0` rewrites `chain.varnum` from old to new (`:3-4`).

## 6. Order and naming

`sub_215AC0(mba, a, b)` returns `a < b` as follows:

- ARG lvars come first (`:27-35`), in `argidx` order (`:86-118`).
- Register lvars (location type 3/4) come before stack lvars (`:36-48`).
- Two register lvars are ordered by `defea` (`:49-54`), then by locator
  (`sub_1C2AD0`, `:56`), then by name (`:76-82`).
- Stack and other lvars are ordered by locator (`sub_1C2AD0`), then by `defea`
  (`:56-68`).

So declaration order is: arguments, then registers by first definition, then
stack slots by offset.

`sub_2112D0` (naming):

- "this" for the first argument of a member function (`:59-69`).
- Formatted names for arguments (`:79-94`) and for unnamed (`!(flags&4)`)
  non-arg lvars (`:100-121`).
- REGNAME lvars get `_` plus the upper-cased register name (`:124-171`).

## 7. Summary of the Hex-Rays model

1. **Allocation unit = def-use web of one location.** This is a flood fill over
   use-def and def-use chains keyed by `(mop_r reg | mop_S off)`
   (`sub_202840`). Joins merge for free because the chains span blocks.
2. **Identity = `(location, defea)`.** Separate webs of one register become
   separate lvars unless they share a defea (then SHARED).
3. **Width = max over the web.** Narrower accesses keep `lvar_ref_t.off` and
   their size, so a size mismatch never splits or refuses a merge.
4. **No interference graph, no type gate.** Types attach to lvars later; the
   allocator only compares widths.
5. **Cross-location merging = mapping only:** user mappings, plus
   AUTOMAP of `local = arg` copies, followed by deletion of the resulting
   `v = v` copies.

## 8. unlace today

Pipeline order (`crates/unlace-cli/src/pipeline.rs:2870-2928`): `DeadPhiElim`
→ `ExpressionTree` → **`VariableMergePass`** → `LvarCollect` →
**`RegisterCoalescePass`**. A Unique-space base that reaches the printer is
declared with the comment `// temp` (`crates/unlace-output/src/c_printer/mod.rs:17974`).

`crates/unlace-passes/src/variable_merge.rs`:

- All SSA versions of one base are clustered unconditionally (`clusters_by_base`,
  `:567-573`). Register, stack and RAM bases are never merged across bases
  (`:682-690`).
- Only Unique bases take part in cross-base merging (`:173-177`). Two bases
  merge when their `MergeKey {size, joined PrimitiveType}` is equal
  (`:108-118, 545-559`) and their point sets do not intersect (`:562-565`). The
  merge is greedy first fit in `BTreeMap` order (`:592-699`). Above
  `max_coalescible_vars` everything falls back to one cluster per base
  (`:178-196`).
- Live points include the def point and every use point (`:466-491`), so for
  `y = Copy(x)` where `x` dies, both contain that instruction and **interfere**.
- Tests show the intent is to merge unrelated temps with disjoint ranges
  (`test_coalesce_disjoint_ranges`, `test_chain_coalesce`). The register they
  are copied into (`r0 = Copy(u0)`) is never part of the cluster.

`crates/unlace-passes/src/register_coalesce.rs`:

- Only phi pairs are tried (`:74-89`). Copy edges are not.
- `same_base_class` forbids Register↔anything-else and requires equal size for
  other spaces (`:293-301`).
- Interference uses one closed interval `[min,max]` per SSA var over a linear
  numbering of blocks in `BTreeMap` (BlockId) order (`:541-638, 660-668`). The
  phi input is placed at the predecessor's end and the output at block start.
- Pointer/scalar and address/arith vetoes apply (`:252-274`).
- The live-range split by role (`partition_register_phases`, `:404-534`) is
  dead code.
- The pass only renames to `cN` (`:718-783`). It removes no instruction.

## 9. Differences that can explain leaked `// temp` declarations

Ordered by expected impact. Each item is a hypothesis to measure with
`--log unlace::variable_merge=debug,unlace::register_coalesce=debug` on the
leaking functions before any change.

1. **A temp is never mapped onto the location it is copied to or from.** In
   Hex-Rays the lvar *is* the register or stack web (§3.2), and the only
   cross-location merge is a copy mapping that also deletes the copy (§5). In
   unlace, `Copy` between Unique and Register is never coalesced:
   - `variable_merge` keeps physical bases separate and merges Unique only with
     Unique (`variable_merge.rs:173-177, 682-690`).
   - `register_coalesce::same_base_class` rejects Register↔Unique
     (`register_coalesce.rs:297-299`).

   A multi-use temp `u` with `rax_k = Copy(u)` therefore stays `vN; // temp`
   next to the register variable. A Hex-Rays-style fix is copy coalescing:
   give `u` the register's name and drop the `v = v` copy. It applies when `u`
   does not overlap other versions of that register's cluster, the widths are
   compatible (`u` not wider), and the target is not address-taken.

   Related, needs measuring: the block-local copy propagation goes the other way
   (`copy_prop.rs:118-170`: uses of `reg = COPY u` are rewritten to `u`). That
   *lengthens* temp lifetimes and can make the register copy dead. Hex-Rays
   keeps the location and propagates the kreg away.

2. **Copy-related pairs interfere by construction.** Both unlace liveness models
   count the def point and the last-use point. `y = Copy(x)` (or `i1 = i + 1`
   against `phi i`) therefore shares a point, or touches the same interval end
   (`variable_merge.rs:466-491`, `register_coalesce.rs:667`). Standard copy
   coalescing (Chaitin, Budimlić, Boissinot) exempts the copy's source from
   interfering with its destination. Hex-Rays avoids the question: same-location
   webs merge by connectivity, and AUTOMAP needs no interference test.

   `register_coalesce` also linearizes blocks in BlockId order with one
   `[min,max]` interval. Any loop-carried phi therefore looks interfering.
   This affects names more than temp count, because same-base versions are
   already clustered by `variable_merge`.

3. **Size and type refusal.**
   - Unlace needs equal `size` and an equal *joined* `PrimitiveType`
     (`Unknown` merges only with `Unknown`, `variable_merge.rs:545-559`), and
     equal size in `same_base_class`.
   - Hex-Rays never splits a web on width: it takes the max width
     (`sub_202840:159-160`) and keeps narrow accesses as `lvar_ref_t.off`/size.
     Types do not gate allocation.
   - AUTOMAP only needs `width(dst) ≤ width(src)` (`sub_219F90:59`), with exact
     equality at candidate time (`sub_215490:84`).

   Two temps of different inferred types, or a 4-byte piece of an 8-byte temp,
   stay separate in unlace and each prints as a temp.

4. **The merge goal differs.** `variable_merge` merges *unrelated* temps with
   disjoint ranges (a name-reuse heuristic). That reduces the number of
   declarations but every survivor is still a Unique `// temp`. Hex-Rays never
   merges unrelated values. Its merges remove copies (`sub_2196C0:228-259`) and
   so remove statements. Coalescing driven by copy edges (item 1) targets the
   leak; disjoint-range reuse does not.

5. **No defea-style web identity for registers.** Unlace clusters all versions
   of a register base together (`clusters_by_base`). It does not split
   disconnected webs, and `partition_register_phases` is unwired. Hex-Rays
   splits each disconnected web into its own lvar (identity `(location,
   defea)`). This mainly affects correctness and pointer/scalar mixing, not
   temp count. It matters for item 1: merging a temp into "the register" should
   merge it into **the web that contains the copy**, not into every version of
   the register.

## 10. Open questions (not resolved from the dump)

The following are not resolved from the dump:

- the vtable `+264` "special register" test in `for_all_chains`
  (`sub_104E40:65`): does it exclude kregs?
- the block set and the `off_4DF748` visitor in automap
  (`sub_215490:112-148`);
- what exactly `sub_21F320` sizes;
- the `sub_1C3110` condition behind SHARED (`sub_202D40:207`);
- `sub_219F90:133-134`, which sets `0x200000` when the saved info has bit `0x8`.

## 11. What unlace changed after this note (2026-10-29)

The changes follow the Hex-Rays model above: keep values in their locations
(registers), propagate temporaries away, and only then name what is left.
None of them merges unrelated temps; they remove the reasons a temp survives.

| Cause of a leaked temp (measured on `fixtures/medium.elf`) | Change | Where |
|---|---|---|
| Flag webs (`ZF`/`SF`/`OF`/`PF` phis at loop heads) kept every flag computation, and the temps those read, alive | Dead-phi pruning also covers x86 RFLAGS phis; the late sweep runs `DeadFlagElimPass` (exact SSA uses) and DCE to a fixpoint. Early DCE keeps its conservative register-alias rule: making it exact before SCCP broke `medium:main` (exit 241/3) | `dce.rs` `DeadPhiElimPass` |
| A temp stored to a register (`u = rbx + 1; rbx = ZEXT u`) is still read as `u` afterwards (copy propagation points reads at the temp) | Reads of a temp go back through a register version that provably holds it: the register a view temp was read from, a register it was stored to, or a register its source was copied to. "Provably" = no instruction or phi defines that register on any path from the copy to the read (dominance + reachability check) | new `temp_home.rs` `TempHomePass` |
| `dec edx; jne` keeps the old counter value for the test (`u = edx; edx -= 1; if (u != 1)`) | `==`/`!=` against a constant are rebased onto the new value (`edx != 0`) | `temp_home.rs` |
| A register view outlives its register because the `mov` that copied it was deleted (`mov edi, eax; shr eax, 1; and edi, 1`) | The view (or a computed value whose operands change before its last read) becomes the write of the register its last reader writes, when nothing touches that register in between (Hex-Rays: the value keeps its location) | `temp_home.rs` `rehome_views` |
| `cmp a, b; je; jle` tests `ZF || SF != OF` in another block, so the flags print as named temps | Folded to `a <= b` / `a < b` when the operands still hold | `temp_home.rs` `fold_signed_flag_tests` |
| Callee-saved restores (`pop rbx` → `rbx = *rsp`) before `RETURN` | Removed when nothing after them in the block reads the register | `dce.rs` `dead_exit_register_writes` |
| Duplicated tails (structurer) define one SSA temp twice, which the printer treats as a merge | Each identical copy gets its own SSA version and its readers follow it | `c_printer` `split_duplicated_temp_defs` |
| Temp names merged by `variable_merge` looked like redefinitions to the fold pass | Ranges of temps read by folded expressions extend to where the expression prints; temp offsets no longer count as overlapping storage | `variable_merge.rs`, `c_printer` `share_printed_storage` |

Correctness fixes found on the way (each exposed by the cleaner IR):

- HIR CSE treated `rdx` and `edx` as unrelated, so a write to `rdx` did not
  invalidate a cached `edx != esi` (`hir_cse.rs`).
- A temp declared inside a `do { }` body was read by the `while (...)`
  condition, outside its scope (`c_printer` hoist planning).
- The do-while condition rebase added the loop step again when the operand
  already read the updated register (`while (v1 != 9)` for `!= 8`).
- `rbp` used as a general register (`lea ebp, [rdi-2]`) printed as a stack
  address (`(uintptr_t)(buf + 40)`).
- Values the SSA pass marked foldable but the printer kept as statements lost
  their declaration (`result_1 = "unknown";` with no `result_1`).

### Measured (worktree build, `unlace decompile`)

| | before | after |
|---|---|---|
| `medium.elf` `vN // temp` declarations | 22 | 5 |
| `medium.elf` output lines | 1522 | 1000 |
| corpus `quality` leaked temps (gate) | 32 | 9 |
| type-recovery report `leaked_temp_decls` | 100 | 33 |
| `debug_medium.elf` `vN // temp` | 73 | 4 |
| `semantic-report` | 36 pass | 36 pass |

The five left in `medium.elf` are stack-frame recovery bugs, not
allocation: `f_rec_power` allocates its frame after a branch (shrink-wrap),
so `rsp` offsets there are read in the wrong coordinate (`*(v1 + 4)`);
`f_ackermann` reads a spill slot through an `rsp + 8` that LICM hoisted to the
entry, and the slot is classified as non-local; `f_rec_fib` keeps an old
`ebp` value across blocks.
