## Research

# Verified Static Analysis and IR Transformation with Coq/Rocq

A direct caveat up front: the search evidence returned here is thin and largely off-target. The auto-searches surfaced a few genuinely relevant papers — "Verifying Peephole Rewriting In SSA Compiler IRs" [2][3], "The Denotational Semantics of SSA" [2][4], "The Trusted Computing Base of the CompCert Verified Compiler" [1], "Precondition Inference for Peephole Optimizations in LLVM" [3] — but the core CompCert, Verasco, Vellvm, Crellvm, Alive2, and coq-bbv sources did **not** appear in the evidence blocks (DBLP and Semantic Scholar returned zero hits [5][6]). So below I clearly mark which specific claims are backed by the returned evidence and which come from well-established knowledge of these systems that the search simply failed to retrieve. Treat the un-cited theorem statements as a replication blueprint to verify against the actual source repos, not as evidence-grounded claims.

---

## 1. Abstract interpretation lattices

**Replication blueprint (not in evidence; from CompCert/Verasco design).** The standard CompCert/Verasco approach packages a lattice as a typeclass/record with carrier type `t`, an order `ge : t -> t -> Prop`, a `top`, a `bot`, and a `lub` (join). CompCert's `backend/Lattice.v` defines `SEMILATTICE` as a module type with these proof obligations:

```coq
Module Type SEMILATTICE.
  Parameter t : Type.
  Parameter eq : t -> t -> Prop.
  Parameter beq : t -> t -> bool.
  Parameter ge : t -> t -> Prop.
  Parameter bot : t.
  Parameter lub : t -> t -> t.
  Axiom ge_refl  : forall x y, eq x y -> ge x y.
  Axiom ge_trans : forall x y z, ge x y -> ge y z -> ge x z.
  Axiom ge_bot   : forall x, ge x bot.
  Axiom ge_lub_left  : forall x y, ge (lub x y) x.
  Axiom ge_lub_right : forall x y, ge (lub x y) y.
End SEMILATTICE.
```

Note CompCert uses a **semilattice** (join + bot + a partial order that need not be a full lattice) because Kildall's worklist algorithm only needs `lub`, `ge`, and a well-founded-enough ascending condition — it does **not** require meet, absorption, or a complete lattice in the textbook sense.

If you want the full algebraic-lattice properties you asked for (commutativity, associativity, idempotence, absorption), state them as derived lemmas over `lub`/`glb` and an order defined by `x <= y := lub x y == y`:

```coq
Lemma lub_comm  : forall x y, lub x y == lub y x.
Lemma lub_assoc : forall x y z, lub (lub x y) z == lub x (lub y z).
Lemma lub_idem  : forall x, lub x x == x.
Lemma absorb    : forall x y, lub x (glb x y) == x.
```

The standard proof structure: define `==` as `ge x y /\ ge y x`, prove it's a setoid equivalence, then prove each algebraic law by `ge`-antisymmetry (prove `ge` both directions using `ge_lub_left/right` and the universal property `forall z, ge z x -> ge z y -> ge z (lub x y)` — you will want to add this universal property as an axiom, since CompCert's base signature omits it).

**Monotonicity of transfer functions.** State as:

```coq
Definition monotone (f : t -> t) := forall x y, ge x y -> ge (f x) (f y).
```

Every per-instruction transfer function in a verified analysis carries a `transf_mono` proof; Kildall's correctness consumes these.

**Soundness of a known-bits / value-range domain.** The Verasco design (not in evidence; standard knowledge) uses a **galois-connection-free, gamma-only** formulation: each domain provides `gamma : t -> ℘(concrete)` (a concretization to sets of concrete bitvectors), and soundness is monotonicity of `gamma` plus per-operation soundness:

```coq
Definition gamma_monotone := forall a b, ge a b -> gamma b ⊆ gamma a.
Theorem add_sound : forall a b x y,
  In x (gamma a) -> In y (gamma b) ->
  In (Int.add x y) (gamma (abstract_add a b)).
```

For a **known-bits** domain over `w`-bit values, represent abstract elements as a pair of masks `(zeros, ones)` (a bit known-0, known-1, or unknown). Concretization:

```coq
Definition gamma_kb (a : knownbits) (x : Int.int) : Prop :=
  Int.and x a.(known_one)  = a.(known_one) /\
  Int.and x a.(known_zero) = Int.zero.
```

Then prove `add_sound`, `and_sound`, `shl_sound`, etc., each by bit-blasting through your bitvector library's lemmas (see §2). For a **value-range** domain, use interval pairs over `Int.int` with `gamma_range a x := Int.le a.lo x /\ Int.le x a.hi` and prove transfer-function soundness with care around wraparound (the hard cases are exactly the overflow cases — your `add_sound` must either widen to `top` on overflow or track the wrap).

---

## 2. Soundness of peephole / algebraic rewrite rules over fixed-width bitvectors

**Evidence-backed:** The most directly relevant retrieved work is **"Verifying Peephole Rewriting In SSA Compiler IRs"** (Bhat, Keizer, Hughes, Goens, Grosser, 2024) [2][3], which builds machine-checked peephole-rewrite verification for SSA-based IRs (in the MLIR/Lean tradition) — this is the closest published template for what you want, including handling rewrites in an SSA setting rather than just straight-line expressions. Also relevant: **"Precondition Inference for Peephole Optimizations in LLVM"** (Menendez, Nagarakatte, 2016) [3], which is the Alive-lineage work showing how peephole rules are made correct by *strengthening preconditions* — the key insight you should mirror is that most "obvious" identities are only valid under side conditions, and the proof obligation is the implication `precondition -> (lhs = rhs)`.

**Replication blueprint (coq-bbv / CompCert Integers; not in evidence).** Pick one bitvector backend:

- **CompCert `Integers.Int` / `Int64`**: values are `{ intval : Z; ... }` with a modulus proof; operations defined modulo `2^w`. Rich lemma library (`Int.add_zero`, `Int.mul_one`, `Int.and_idem`, `Int.shl_zero`, etc.).
- **coq-bbv `word n`**: dependently-typed `word : nat -> Type`, with `wzero`, `wplus`, `wmult`, `wand`, `wlshift`, and a `wordToNat`/`wordToZ` interpretation plus arithmetic lemmas.

State each algebraic rewrite as a closed equality on the bitvector type:

```coq
(* CompCert Integers flavor *)
Theorem add_zero  : forall x, Int.add x Int.zero = x.
Theorem mul_one   : forall x, Int.mul x Int.one  = x.
Theorem neg_neg   : forall x, Int.neg (Int.neg x) = x.
Theorem shl_zero  : forall x, Int.shl x Int.zero = x.
Theorem and_self  : forall x, Int.and x x = x.
```

```coq
(* coq-bbv flavor *)
Theorem wplus_wzero : forall n (x : word n), wplus x (wzero n) = x.
Theorem wmult_wone  : forall n (x : word n), wmult x (natToWord n 1) = x.
```

Proof structure: most of these are direct from the library lemmas or fall to `ring` after you instantiate the appropriate ring structure (CompCert proves `Int` is a commutative ring; coq-bbv has `word` ring instances). For shift identities and bit-twiddling that `ring` can't close, the canonical tactic is to reflect to `Z`, push through `Z.testbit` / `Int.bits_*` lemmas, and finish with `Z.testbit_eq`/extensionality on bits (`Int.same_bits_eq`: two ints are equal iff they agree on all bits `0..w-1`).

**To mirror a Rust simplify pass:** define a Coq datatype `expr` mirroring your IR's expression node, an evaluator `eval : env -> expr -> Int.int`, your `simplify : expr -> expr` function, and the soundness theorem:

---
_Plan of 6 step(s), 6 answered:_
- [1] ✅ papers: Verasco verified abstract interpretation static analyzer CompCert
- [2] ✅ papers: Vellvm verified LLVM IR Coq formal semantics SSA dominance
- [3] ✅ arxiv: Alive2 verifying LLVM peephole optimizations SMT bitvector soundness
- [4] ✅ papers: Vellvm dominance SSA verification Coq Zdancewic Crellvm translation validation LLVM
- [5] ✅ scholar: CompCert Kildall dataflow analysis verified fixpoint lattice Coq
- [6] ✅ dblp: Vellvm verified LLVM Coq Zdancewic

**Follow-up questions:**
- What are the limitations or criticisms of How do production decompilers and binary analysis tools use the Coq/Rocq proof assistant to formally verify their static analyses and IR transformations? I need concrete, citable techniques for machine-checking: (1) abstract interpretation lattices — proving join/meet form a complete lattice (commutativity, associativity, idempotence, absorption), monotonicity of transfer functions, and soundness of a known-bits / value-range abstract domain w.r.t. a concrete bitvector semantics; (2) soundness of peephole/algebraic IR rewrite rules over fixed-width bitvectors (e.g. x+0=x, x*1=x, double-negation, shift identities) using a bitvector library like coq-bbv or CompCert Integers; (3) SSA-form well-formedness and dominance invariants; (4) verified dataflow fixpoint iteration (Kildall's algorithm as in CompCert). Cover CompCert, Verasco, Vellvm/VIR, Crellvm, Alive/Alive2-style peephole verification, and the coq-bbv bitvector library. For each, give the exact theorem statements and proof structure I would replicate in a fresh Rocq project that mirrors a Rust decompiler's value-lattice and algebraic-simplify passes. Also cover how to structure a _CoqProject + dune build for Rocq 9.1, and how to keep proofs in sync with a Rust implementation (extraction vs. spec-mirroring)?
- What are the main alternatives to How do production decompilers and binary analysis tools use the Coq/Rocq proof assistant to formally verify their static analyses and IR transformations? I need concrete, citable techniques for machine-checking: (1) abstract interpretation lattices — proving join/meet form a complete lattice (commutativity, associativity, idempotence, absorption), monotonicity of transfer functions, and soundness of a known-bits / value-range abstract domain w.r.t. a concrete bitvector semantics; (2) soundness of peephole/algebraic IR rewrite rules over fixed-width bitvectors (e.g. x+0=x, x*1=x, double-negation, shift identities) using a bitvector library like coq-bbv or CompCert Integers; (3) SSA-form well-formedness and dominance invariants; (4) verified dataflow fixpoint iteration (Kildall's algorithm as in CompCert). Cover CompCert, Verasco, Vellvm/VIR, Crellvm, Alive/Alive2-style peephole verification, and the coq-bbv bitvector library. For each, give the exact theorem statements and proof structure I would replicate in a fresh Rocq project that mirrors a Rust decompiler's value-lattice and algebraic-simplify passes. Also cover how to structure a _CoqProject + dune build for Rocq 9.1, and how to keep proofs in sync with a Rust implementation (extraction vs. spec-mirroring)?
- What are the latest developments in How do production decompilers and binary analysis tools use the Coq/Rocq proof assistant to formally verify their static analyses and IR transformations? I need concrete, citable techniques for machine-checking: (1) abstract interpretation lattices — proving join/meet form a complete lattice (commutativity, associativity, idempotence, absorption), monotonicity of transfer functions, and soundness of a known-bits / value-range abstract domain w.r.t. a concrete bitvector semantics; (2) soundness of peephole/algebraic IR rewrite rules over fixed-width bitvectors (e.g. x+0=x, x*1=x, double-negation, shift identities) using a bitvector library like coq-bbv or CompCert Integers; (3) SSA-form well-formedness and dominance invariants; (4) verified dataflow fixpoint iteration (Kildall's algorithm as in CompCert). Cover CompCert, Verasco, Vellvm/VIR, Crellvm, Alive/Alive2-style peephole verification, and the coq-bbv bitvector library. For each, give the exact theorem statements and proof structure I would replicate in a fresh Rocq project that mirrors a Rust decompiler's value-lattice and algebraic-simplify passes. Also cover how to structure a _CoqProject + dune build for Rocq 9.1, and how to keep proofs in sync with a Rust implementation (extraction vs. spec-mirroring)?
