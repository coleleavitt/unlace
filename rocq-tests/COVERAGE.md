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
| 7 | `KnownBits::shl/lshr/ashr` | `unlace-ir/src/known_bits.rs` | shift transfer-function soundness | **unproven** | TODO `KnownBitsShift.v` |
| 8 | `KnownBits::add/sub` (carry) | `unlace-ir/src/known_bits.rs` | arithmetic transfer soundness w/ carry | **unproven** | TODO |
| 9 | `ConstantRange` interval arithmetic | `unlace-ir/src/known_bits.rs` | interval add/sub/and soundness incl. wrap | **unproven** | TODO `ConstantRange.v` |
| 10 | `DominatorTree` / `idom` | `unlace-ir/src/ssa.rs` | dominance is a tree; idom well-defined | **unproven** | TODO `Dominance.v` |
| 11 | SSA φ-placement well-formedness | `unlace-ir/src/ssa.rs`, `verify.rs` | every use dominated by its def | **unproven** | TODO `SsaWf.v` |
| 12 | `compute_sccs` (call graph) | `unlace-ir/src/xref.rs` | SCC partition correctness | **unproven** | TODO |
| 13 | `DataLayout::type_size/align` | `unlace-ir/src/data_layout.rs` | size/align monotonic, align divides size for arrays | **unproven** | TODO `DataLayout.v` |
| 14 | `compute_record_layout` | `unlace-passes/src/abi_layout.rs` | field offsets non-overlapping, respect align | **unproven** | TODO `RecordLayout.v` |
| 15 | `reg_alias::write_kills` / `aliases` | `unlace-ir/src/reg_alias.rs` | alias relation symmetric; write-kill sound | **unproven** | TODO `RegAlias.v` |
| 16 | `MemoryLocation::must_alias/must_not_alias` | `unlace-ir/src/memory_ssa.rs` | must/no-alias are mutually exclusive & sound | **unproven** | TODO `MemorySSA.v` |
| 17 | `alias_analysis::can_modref` | `unlace-passes/src/alias_analysis.rs` | mod/ref lattice soundness | **unproven** | TODO |
| 18 | dataflow fixpoint iteration | `unlace-passes` (various) | Kildall: terminates, computes a fixpoint (needs (1)+monotonicity) | **unproven** | TODO `Kildall.v` |

## Summary

- **Proven cores:** 3 fully (`ValueLattice`, `KnownBits` bitwise, `Bitvector`), 2 partially (`AlgebraicSimplify`, `TInfo`).
- **Theorems kernel-checked:** see `coqchk` summary in `scripts/verify_proofs.sh` output (currently **Axioms: <none>** across all modules).
- **Next highest-value targets** (precision/correctness leverage):
  1. `Kildall.v` (#18) — depends on the already-proven `join` monotonicity (#1); proving the fixpoint engine sound certifies *every* dataflow pass at once.
  2. `KnownBitsShift.v` + `add/sub` (#7, #8) — completes the LLVM-parity bit domain.
  3. `RecordLayout.v` (#14) + nested `TInfo` (#4/#5) — directly targets the dominant struct-recovery precision gap.

This ledger is the source of truth for "what is mathematically proven". Update
the row when a TODO lands a `.v`, and add a conformance check in
`crates/unlace-ir/tests/coq_conformance.rs`.
