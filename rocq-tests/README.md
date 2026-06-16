# rocq-tests — machine-checked proofs for unlace decompiler cores

This is a [Rocq](https://rocq-prover.org/) (Coq) project that **mathematically
proves** the correctness of unlace's core static-analysis and IR-transformation
math. The goal is a provable-correctness lead over IDA/Ghidra/Hex-Rays on the
verified cores: every theorem here is checked by the Rocq kernel with **zero
admits and zero axioms**.

The proofs **spec-mirror** the Rust implementation (they do not extract from
it): each `.v` file restates a named Rust function as a Coq function arm-for-arm
and proves it satisfies a soundness / algebraic-law specification. A Rust↔Coq
conformance harness pins the mirror so the two cannot silently diverge (see
`docs/formal-verification.md`).

## Layout

| File | Mirrors | What is proven |
|------|---------|----------------|
| `theories/Bitvector.v` | `unlace-ir/src/known_bits.rs` (width math) | fixed-width `u64` model over `Z`: `mask`/`wrap` bit characterization, idempotence, range, bit-extensionality, two's-complement double-negation. |
| `theories/ValueLattice.v` | `unlace-ir/src/value_lattice.rs` | `join` commutativity/associativity/idempotence; partial-order laws; `join` is the least upper bound; `join`/`meet` concretization soundness (over/under-approximation); `join` monotonicity. |
| `theories/KnownBits.v` | `unlace-ir/src/known_bits.rs` | abstract-domain soundness of `and`/`or`/`xor` vs concrete bitvector ops; `from_constant` exactness; `has_conflict ⇒ γ empty`. |
| `theories/AlgebraicSimplify.v` | `unlace-passes/src/algebraic_simplify.rs` | Alive2-style peephole soundness (`x+0`, `x-x`, `x*1`, `x*0`, `x/1`, `x%1`, `x&0`, `x&MASK`, `x|MASK`, `x^x`, `x==x`, `--x`, `~~x`, …) + `add/mul` assoc/comm canonicalization. |
| `theories/KnownBits.v` (shift+BAT) | `unlace-ir/src/known_bits.rs` | `kshl` left-shift soundness + known-bit preservation; **`kand` Best-Abstract-Transformer optimality** (records every logically-forced bit). |
| `theories/ConstantRange.v` | `unlace-ir/src/known_bits.rs` | wrapping-interval domain: add/sub/join/meet/scale soundness + **precision-monotonicity**. |
| `theories/Kildall.v` | `unlace-passes` dataflow | generic semilattice flow: monotonicity, **least-fixpoint uniqueness / order-independence (determinism)**, precision-monotone transfer refinement. |
| `theories/RecordLayout.v` | `unlace-passes/src/abi_layout.rs` | greedy aligned field layout: every offset aligned, monotone, pairwise-disjoint, **greedy-minimal**. |
| `theories/TInfo.v` | `unlace-ir/src/tinfo.rs` | `get_best_fit_member` soundness/tightest-fit/completeness; `calc_gaps` padding bytes are covered by no field. |

### Novel theory modules (new results, not just mirrors)

| File | Novel result |
|------|--------------|
| `theories/CompilationInversion.v` | **Decompilation as the upper adjoint of compilation** — a Galois connection between source and recovered types; recovery soundness (no false negatives) and *completeness ⇔ exact inversion*. |
| `theories/PrincipalType.v` | **Principal-type uniqueness** for a meet-closed constraint engine, **no-false-negative** recovery, and **witness monotonicity** (alignment/range facts only sharpen). |
| `theories/PrecisionPipeline.v` | **End-to-end precision monotonicity** of a pass pipeline (lifts local BAT-optimality to a whole-decompiler invariant). |
| `theories/TypeInversion.v` | **Alignment-driven field exclusion** — alignment facts provably refute impossible struct-field candidates. |

### Concrete instantiations (framework → unlace's actual `ValueLattice`)

The abstract frameworks are discharged on unlace's real value domain, so the
guarantees hold for the actual lattice, not just an abstract model:

| File | Concrete result |
|------|-----------------|
| `theories/KildallValueLattice.v` | unlace's value-propagation dataflow is monotone, fixpoint-**unique / order-independent** (deterministic). |
| `theories/PrincipalTypeValueLattice.v` | value recovery has a **unique principal solution**, never excludes the truth, sharpens monotonically under witnesses. |
| `theories/InversionInstances.v` | concrete `recovery_sound` + `recovery_complete` and **end-to-end precision monotonicity** of a real `join_with`-pass pipeline. |

## Build

```bash
cd rocq-tests
make                 # builds every theory; fails on any proof error
```

Requires **Rocq 9.1** (`coqc`/`rocq` on `PATH`). Regenerate the Makefile after
adding a file to `_CoqProject`:

```bash
coq_makefile -f _CoqProject -o Makefile
```

## The no-admit invariant

`scripts/verify_proofs.sh` (run from the repo root) builds the project and fails
if any `Admitted`, `admit`, or `Axiom` appears in a proof. This is the gate that
keeps "proven" honest.

## Methodology

See `docs/formal-verification.md` for the spec-mirroring contract, the
gamma/soundness convention, the bibliography of papers each proof draws on
(CompCert `Lattice.v`, Verasco, Vellvm, Alive2, coq-bbv), and how to add a new
proof when a Rust core changes.
