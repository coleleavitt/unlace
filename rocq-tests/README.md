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
| `theories/AlgebraicSimplify.v` | `unlace-passes/src/algebraic_simplify.rs` | Alive2-style peephole soundness: `x+0=x`, `x-0=x`, `x-x=0`, `x*1=x`, `x*0=0`, `x/1=x`, `x%1=0`, `x&0=0`, `x&MASK=x`, `x&x=x`, `x|0=x`, `x|MASK=MASK`, `x^0=x`, `x^x=0`, `x==x=1`, `x!=x=0`, `--x=x`, `~~x=x`. |
| `theories/TInfo.v` | `unlace-ir/src/tinfo.rs` | `get_best_fit_member` soundness/tightest-fit/completeness; `calc_gaps` padding bytes are covered by no field. |

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
