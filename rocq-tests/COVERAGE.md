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
| 4 | `TInfo::get_best_fit_member` | `unlace-ir/src/tinfo.rs` | tightest containing field; sound/complete | **partial** (flat case proven; nested struct/union/array recursion TODO) | `TInfo.v` |
| 5 | `TInfo::calc_gaps` | `unlace-ir/src/tinfo.rs` | gap bytes covered by no field | **partial** (uncovered-byte lemmas proven; full disjoint-cover partition TODO) | `TInfo.v` |
| 6 | fixed-width wrap/mask math | `unlace-ir/src/known_bits.rs` (width_mask) | `wrap`/`mask` bit characterization, idempotence | **proven** | `Bitvector.v` |
| 7 | `KnownBits::shl` | `unlace-ir/src/known_bits.rs` | left-shift transfer soundness + known-bit-preservation (precision) | **proven** | `KnownBits.v` (`kshl_sound`, `kshl_preserves_known_one/zero`) |
| 8 | `KnownBits::add/sub` (carry) | `unlace-ir/src/known_bits.rs` | arithmetic transfer soundness w/ carry | **unproven** | TODO |
| 9 | `ConstantRange` interval arithmetic | `unlace-ir/src/known_bits.rs` | interval add/sub/join/meet/scale soundness + precision-monotone | **proven** | `ConstantRange.v` |
| 10 | `DominatorTree` / `idom` | `unlace-ir/src/ssa.rs` | dominance is a tree; idom well-defined | **unproven** | TODO `Dominance.v` |
| 11 | SSA φ-placement well-formedness | `unlace-ir/src/ssa.rs`, `verify.rs` | every use dominated by its def | **unproven** | TODO `SsaWf.v` |
| 12 | `compute_sccs` (call graph) | `unlace-ir/src/xref.rs` | SCC partition correctness | **unproven** | TODO |
| 13 | `DataLayout::type_size/align` | `unlace-ir/src/data_layout.rs` | size/align monotonic, align divides size for arrays | **unproven** | TODO `DataLayout.v` |
| 14 | `compute_record_layout` | `unlace-passes/src/abi_layout.rs` | field offsets aligned, non-overlapping, greedy-minimal | **proven** | `RecordLayout.v` |
| 15 | `reg_alias::write_kills` / `aliases` | `unlace-ir/src/reg_alias.rs` | alias relation symmetric; write-kill sound | **unproven** | TODO `RegAlias.v` |
| 16 | `MemoryLocation::must_alias/must_not_alias` | `unlace-ir/src/memory_ssa.rs` | must/no-alias are mutually exclusive & sound | **unproven** | TODO `MemorySSA.v` |
| 17 | `alias_analysis::can_modref` | `unlace-passes/src/alias_analysis.rs` | mod/ref lattice soundness | **unproven** | TODO |
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

### Runtime conformance fuzzer

`crates/unlace-ir/tests/coq_conformance.rs` now also runs a **property-based
fuzzer** (deterministic xorshift, ~2M cases × 7 properties ≈ 14M checks): it
hammers the exact Rocq-proven invariants — KnownBits and/or/xor soundness, kand
BAT-optimality bound, kshl soundness, ValueLattice join laws + soundness,
algebraic identities + assoc/comm, and the `add_low_prefix` carry law — in
compiled Rust, so any Rust↔Coq drift is caught statistically as well as on the
proof witnesses.

## Summary

- **Proven cores:** `ValueLattice`, `KnownBits` (bitwise + shift + BAT-optimality),
  `Bitvector`, `ConstantRange`, `Kildall`, `RecordLayout`; partial
  `AlgebraicSimplify`, `TInfo`; **novel** `CompilationInversion`, `PrincipalType`,
  `PrecisionPipeline`, `TypeInversion`.
- **Theorems kernel-checked:** `scripts/verify_proofs.sh` reports
  **Axioms: <none>** across all modules (coqchk).
- **Next highest-value targets:** `add/sub` carry transfer (#8); SSA dominance
  + φ-placement (#10/#11) tied to type propagation; nested `TInfo` recursion;
  wiring `CompilationInversion`/`PrincipalType` to concrete unlace type-solver
  instances.

This ledger is the source of truth for "what is mathematically proven". Update
the row when a TODO lands a `.v`, and add a conformance check in
`crates/unlace-ir/tests/coq_conformance.rs`.
