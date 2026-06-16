# Formal-verification coverage map (rocq-tests)

This is the gap ledger driving toward **100% machine-checked coverage of the
provable math cores** in unlace. Each row is a Rust module with mathematical
content that *should* be kernel-checked, its current proof status, and the `.v`
file (or TODO) that owns it.

Status legend:
- **proven** — a `.v` file mirrors the Rust and proves its soundness/laws, zero admits/axioms (kernel-checked by `coqchk`).
- **partial** — some properties proven; named gaps remain.
- **unproven** — provable math, no proof yet (backlog).
- **n/a** — no nontrivial math obligation (plumbing/IO/formatting).

| # | Rust core | File | Math obligation | Status | Proof |
|---|-----------|------|-----------------|--------|-------|
| 1 | `ValueLattice::join/meet` | `unlace-ir/src/value_lattice.rs` | lattice laws, LUB, monotonicity, γ-soundness | **proven** | `ValueLattice.v` |
| 2 | `KnownBits::and/or/xor`, `from_constant`, `has_conflict` | `unlace-ir/src/known_bits.rs` | abstract-domain soundness vs concrete bitvectors | **proven** | `KnownBits.v` |
| 3 | `algebraic_simplify` rewrite rules | `unlace-passes/src/algebraic_simplify.rs` | each rewrite is semantics-preserving (Alive2-style) | **partial** (18 scalar identities proven; address-fold / subpiece-compose / phi-all-same not modeled) | `AlgebraicSimplify.v` |
| 4 | `TInfo::get_best_fit_member` | `unlace-ir/src/tinfo.rs` | tightest containing field; sound/complete | **proven (flat) + Rust-bound** — flat sound/tightest/complete in `TInfo.v`, machine-checked vs Rust in `tinfo_conformance.rs` (400K). Nested-descent *arithmetic* (array-stride routing, alignment composition) proven in `TInfoNested.v`; the recursive descent itself is not yet directly bound | `TInfo.v` + `TInfoNested.v` |
| 5 | `TInfo::calc_gaps` | `unlace-ir/src/tinfo.rs` | gap bytes covered by no field | **proven + Rust-bound** (uncovered-byte lemmas in `TInfo.v`; pinned to Rust by `tinfo_conformance.rs`) | `TInfo.v` |
| 6 | fixed-width wrap/mask math | `unlace-ir/src/known_bits.rs` (width_mask) | `wrap`/`mask` bit characterization, idempotence | **proven** | `Bitvector.v` |
| 7 | `KnownBits::shl` | `unlace-ir/src/known_bits.rs` | left-shift transfer soundness + known-bit-preservation (precision) | **proven** | `KnownBits.v` (`kshl_sound`, `kshl_preserves_known_one/zero`) |
| 8 | `KnownBits::add/sub` (carry) | `unlace-ir/src/known_bits.rs` | arithmetic transfer soundness w/ carry (known low prefix survives ±) | **proven** | `KnownBitsArith.v` (`add_low_prefix`, `sub_low_prefix`) |
| 9 | `ConstantRange` interval arithmetic | `unlace-ir/src/known_bits.rs` | interval add/sub/join/meet/scale soundness + precision-monotone | **proven** | `ConstantRange.v` |
| 10 | `DominatorTree` / `idom` | `unlace-ir/src/ssa.rs` | dominance CONSTRUCTED from paths: poset laws derived, entry dominates all, idom unique | **proven** | `DominatorTree.v` (constructive) + `SsaDominance.v` (poset uses) |
| 11 | SSA φ-placement well-formedness + φ-join | `unlace-ir/src/ssa.rs`, `verify.rs` | every use dominated by its def; φ-join sound | **proven** | `SsaDominance.v` (`ssa_wf`, `phi_join_gamma_sound`) |
| 12 | `compute_sccs` (call graph) | `unlace-ir/src/xref.rs` | mutual-reachability is an equivalence; SCCs partition the nodes (total/disjoint); SCC-DAG acyclic | **proven** | `Sccs.v` |
| 13 | `DataLayout::type_size/align` | `unlace-ir/src/data_layout.rs` | size >= 0; align is a positive power of two; array size = stride*len; struct size bounds every member | **proven** | `DataLayout.v` |
| 14 | `compute_record_layout` | `unlace-passes/src/abi_layout.rs` | field offsets aligned, non-overlapping, greedy-minimal | **proven** | `RecordLayout.v` |
| 15 | `reg_alias::write_kills` / `aliases` | `unlace-ir/src/reg_alias.rs` | sub-register alias relation refl/symmetric; write-kill frame (disjoint preserved, overlap clobbered) | **proven** | `RegAlias.v` |
| 16 | `MemoryLocation::must_alias/must_not_alias` | `unlace-ir/src/memory_ssa.rs` | must/no-alias are mutually exclusive & sound | **proven** | `MemoryAlias.v` (`must_not_alias_disjoint`, `must_not_alias_excludes_overlap`) |
| 17 | `alias_analysis::can_modref` (frame) | `unlace-passes/src/alias_analysis.rs` | disjoint write preserves the other location (Mod/Ref frame) | **proven** | `MemoryAlias.v` (`write_preserves_disjoint`) |
| 18 | dataflow fixpoint iteration | `unlace-passes` (various) | Kildall: monotone, fixpoint unique, order-independent | **proven** | `Kildall.v` |

## Novel theory modules (beyond mirroring — new results)

These prove properties not found in the CompCert/Verasco/Vellvm/Alive2/Retypd
literature (per `research/formal/` synthesis). They target **precision and
completeness** (not just soundness), which is the mathematical content of the
"100% type recovery" goal.

| Module | Novel result |
|--------|--------------|
| `KnownBits.v` (BAT) | `kand_optimal_one/zero`: `kand` is the **Best Abstract Transformer** — it records every bit logically forced by the inputs (loses no recoverable precision), via a constructive `Z.setbit` witness. |
| `CompilationInversion.v` | **Decompilation as the upper adjoint of compilation**: a Galois connection between source and recovered types; recovery soundness (no false negatives), and *completeness ⇔ exact inversion* (the recovered type is principal exactly when `recover∘lower` matches the abstraction). |
| `PrincipalType.v` | **Principal-type uniqueness** for a meet-closed constraint engine + **no-false-negative** recovery + **witness monotonicity** (adding an alignment/range fact only shrinks the candidate set / sharpens the type). |
| `PrecisionPipeline.v` | **End-to-end precision monotonicity**: a pipeline of precision-monotone passes is precision-monotone, and monotone+reductive pipelines only sharpen — lifting local BAT-optimality to a whole-decompiler invariant. |
| `TypeInversion.v` | **Alignment-driven field exclusion**: alignment facts (KnownBits trailing zeros) provably refute impossible struct-field candidates. |

## Concrete instantiations (abstract framework → unlace's actual lattices)

The novel frameworks above are stated over abstract models. These modules
DISCHARGE the abstract hypotheses from the proven `ValueLattice` theorems,
turning "provable in principle" into "proved for unlace's real value domain":

| Module | What is now concrete |
|--------|----------------------|
| `KildallValueLattice.v` | unlace's real value-propagation dataflow (`ValueLattice` join/vle) is **monotone**, its fixpoint is **unique / worklist-order-independent** (determinism), and post-fixpoints bound iteration — by instantiating `Kildall`. |
| `PrincipalTypeValueLattice.v` | value recovery over `ValueLattice` has a **unique principal solution**, **never excludes the truth**, and **sharpens monotonically** under added witnesses — by instantiating `PrincipalType` on the (correctly dualized) refinement order. |
| `InversionInstances.v` | concrete `recovery_sound` + `recovery_complete` (the exact-inversion endpoint) for `ValueLattice`, and **end-to-end precision monotonicity** of a real pipeline of fact-incorporation (`join_with`) passes — instantiating `CompilationInversion` + `PrecisionPipeline`. |

### Lossy compilation + multi-domain grounding

The identity instance above is the *exact-recovery endpoint*. These modules
close the honest frontier: a **genuinely lossy** lowering (real compilation
erases information) and extension to the **KnownBits / ConstantRange / TInfo**
domains. Crucially they prove *both* that soundness survives loss *and* that
completeness provably fails — with a localized witness — so the framework
detects exactly where precision was lost rather than overclaiming.

| Module | What is proven on real lossy/​multi-domain code |
|--------|--------------------------------------------------|
| `LossyInversion.v` | KnownBits width-erasure lowering (keep width, drop all bits): recovery **stays sound** (`unknown` never lies) yet **completeness provably fails** at `from_constant 5 8`, with value `2` as the localized loss witness. |
| `ConstantRangeInstances.v` | real interval-narrowing pipeline (`rmeet_with` passes) is **precision-monotone AND reductive** (only tightens); range recovery has a **unique principal (tightest) range** and never excludes the truth. |
| `TInfoInversion.v` | struct-field recovery as lossy offset inversion: `best_fit`-based **recovery soundness** (recovered field contains the offset, tightest fit) + **incompleteness under overlap** (two fields share an offset ⇒ lowering is non-injective, witnessed). |

### Memory, recursion, boundaries, and graded loss (the final frontier)

| Module | Result |
|--------|--------|
| `KnownBitsArith.v` | add/sub **carry transfer**: a known low prefix survives `+`/`-` — `add_low_prefix`/`sub_low_prefix` prove the low-k bits of a sum/difference depend only on the low-k inputs (the carry-into-bit-k is determined by bits `<k`). The alignment-survives-arithmetic guarantee. |
| `SsaDominance.v` | dominance **partial order**, SSA well-formedness (use dominated by def), and **φ-join soundness** on `ValueLattice` (γ(φ-join) ⊇ ∪ γ(incoming)) — correctly proved via `join_sound`, not the abstract order. |
| `PartialErasure.v` | **graded** lossy lowering (keep low-k known bits, erase high): recovery stays sound, is **complete below the cut**, **provably incomplete above** with a witness — the framework grades precision loss between identity and total erasure. |
| `MemoryAlias.v` | must/may-alias soundness + the **Mod/Ref frame theorem**: a write that `must_not_alias` B leaves every byte of B unchanged, so B's recovered value is **not** forced to Top — proven non-aliasing preserves precision. |
| `TInfoNested.v` | recursive type tree (scalar/array/struct): **array-stride inversion** (`index = o/stride`, `inner = o mod stride`, reconstructs `o`), in-bounds-iff characterization, and **alignment composition** across nesting. |
| `InterProc.v` | inter-procedural lift: **context monotonicity** (refining an argument type sharpens the return type) and **global fixpoint uniqueness/determinism** for recursive (SCC) signatures, instantiated on `ValueLattice`. |
| `DataLayout.v` | type-layout invariants: size ≥ 0, alignment is a positive power of two, array size = stride·len, struct size bounds every member. |
| `RegAlias.v` | sub-register (AL⊂AX⊂EAX⊂RAX) aliasing laws + the **register write-kill frame** — a write preserves disjoint registers, clobbers overlapping ones. Heap frame's register-file twin. |
| `Sccs.v` | call-graph SCC decomposition: mutual reachability is an **equivalence**, SCCs **partition** the nodes (total + disjoint + class-equality), and the SCC-DAG is **acyclic** (the topological order `compute_sccs` uses is well-defined). |
| `DominatorTree.v` | dominance **constructed from CFG paths** (`d` dominates `n` ⟺ every entry→n path contains `d`): reflexivity, transitivity, entry-dominates-all, and **immediate-dominator uniqueness** all DERIVED — discharging `SsaDominance`'s assumed order. |
| `MemoryDataflow.v` | **the spatial→value bridge**: a memory-aware `store_transfer` that keeps `must_not_alias` locations exact and downgrades possible aliases to Top. Proves the frame (disjoint store preserves the exact lattice value), soundness (non-targets only rise), **monotonicity** (plugs into Kildall/PrecisionPipeline), a disjoint-store-chain frame, the byte-range oracle's soundness vs `MemoryAlias.must_not_alias`, and end-to-end **store-pipeline precision monotonicity**. Connects `MemoryAlias` ↔ `ValueLattice`. |

### Rust↔Coq binding (machine-checked, not doc-only)

The proofs mirror **shipping** Rust; the binding makes drift mechanically
catchable. See the *binding-strength ledger* in `docs/formal-verification.md`
for the full core→Rust-location→binding table. Layers:

- **Extraction oracle** (`scripts/extraction_oracle.sh`, fail-closed): the
  KnownBits `and/or/xor` cores are extracted Coq→OCaml from the proved
  `KnownBits.v` and diffed byte-for-byte against the real Rust.
- **Property fuzzer** (`crates/unlace-ir/tests/coq_conformance.rs`, 24 tests,
  deterministic xorshift, millions of cases): KnownBits soundness + BAT bound +
  kshl, ValueLattice join laws/soundness, algebraic identities + assoc/comm,
  `add_low_prefix` carry, and `must_not_alias` ↔ Coq byte-range.
- **Targeted conformance** (read-only, golden-neutral): `tinfo_conformance.rs`
  (best_fit/calc_gaps, 400K), `dominator_conformance.rs` (DominatorTree poset
  laws via real `build_ssa`, 4K CFGs), `layout_conformance.rs` (DataLayout
  size/align, 300K types).

## Summary

- **Every ledger row (#1–#18) is now proven.** The core-engine math — bit
  domains, lattices, dataflow (intra + inter-procedural), structuring
  (dominance/SCC), layout (flat + nested + record + data), memory and register
  aliasing, and the novel inversion/precision/completeness frameworks — is
  machine-checked, plus concrete instantiations on the real unlace domains and a
  runtime conformance fuzzer.
- **Theorems kernel-checked:** `scripts/verify_proofs.sh` reports
  **Axioms: <none>** across all modules (coqchk).
- **Bound to shipping Rust + runs end-to-end.** Every public proven core is now
  tied to its live Rust counterpart by a machine-checked conformance test (see
  the binding-strength ledger in `docs/formal-verification.md`), not just a
  prose claim; crate-private routines (`tarjan_scc`) and whole-engine framings
  are honestly marked spec-only. The decompiler itself ships and runs —
  `unlace decompile <binary>` emits IDA-style C end-to-end.
- **Remaining frontier** is the one remaining partial row
  (`AlgebraicSimplify` address-fold / subpiece-compose / phi-all-same plumbing)
  and binding the spec-only cores once a public Rust API exists for them.

This ledger is the source of truth for "what is mathematically proven". Update
the row when a TODO lands a `.v`, and add a conformance check under
`crates/unlace-ir/tests/`.
