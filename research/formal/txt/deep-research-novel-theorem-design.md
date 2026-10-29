## Research

The web evidence returned for this query is almost entirely off-target: the searches surfaced generic Coq formalizations (Gödel-Rosser incompleteness [1], modal logic, Coq code formatting) and ML-based decompilation papers [3] rather than the formal-methods literature you're targeting. The genuinely relevant hits are the Giacobazzi–Ranzato completeness line [5] and Ranzato's constructive Galois-connection framework [5]. I'll flag clearly where I'm reasoning from domain knowledge versus the evidence, which is thin here.

A caveat up front: I cannot, from this evidence set, confirm a negative ("nobody has machine-checked X"). The searches did not return CompCert, Verasco, Vellvm, Alive2, or Retypd papers at all, so treat all "novelty" claims as hypotheses to verify against those specific artifacts, not as established by these results.

---

## (1) Decompilation as provable inversion of compilation (Galois connection between source and recovered types)

**Theorem shape.**
Let `L : SrcType → MachProg` be a (deterministic, possibly lossy) lowering relation and `D : MachProg → RecType` the decompiler. Define a concretization `γ : RecType → ℘(SrcType)` (recovered type denotes the set of source types consistent with it) and abstraction `α`. The central theorem:

- *Soundness of recovery:* `∀ s, s ∈ γ(D(L(s)))` — the true source type is always in the recovered class.
- *Galois connection:* `(α, γ)` form a Galois connection between `(℘(SrcType), ⊆)` and `(RecType, ⊑)`, and `D ∘ L` is a *sound abstraction* of the identity: `id ⊑ γ ∘ α` on the relevant lattice.
- *Observational equivalence:* recompiling any `s' ∈ γ(D(L(s)))` yields `L(s') ≈_obs L(s)` under a fixed observation relation on machine states.

**Minimal semantic model.** A small-step or denotational semantics for `MachProg`, an observation relation `≈_obs` (trace or final-state equivalence), and the two posets with their order. You do *not* need a full ISA; a typed register/memory model with the type-relevant observations (sizes, signedness, pointer-ness) suffices.

**Literature vs. novel.** The Galois-connection machinery and a constructive Coq-friendly formulation of it exist [5] (Ranzato's *A Constructive Framework for Galois Connections* is the right tooling reference, and the Giacobazzi–Ranzato completeness work [5] gives the soundness/completeness vocabulary). What is *not* present in the evidence is any formalization framing **decompilation itself as the upper adjoint of a compilation lowering**, with the observational-equivalence-class as the concretization. That framing — "the decompiler is sound iff `D∘L ⊒ id` in the type lattice, and best/complete iff equality holds" — appears novel relative to what these searches surfaced. The neural/constraint decompilers [3] make no such formal claim.

**Coq technique.** Galois connection as a record (`α`, `γ`, adjunction law); `≈_obs` as a coinductively defined bisimulation if you use traces, or an inductive simulation relation; the recompilation-equivalence as a simulation-diagram lemma. Ranzato's constructive GC framework [5] is your template to avoid classical-choice pitfalls.

---

## (2) Completeness / principal-type recovery (most-specific unique type)

**Theorem shape.**
Under stated constraints `C` (e.g., all field accesses are size-and-alignment-witnessed, no untyped union punning, closed-world callgraph), the constraint set `Φ(P)` generated from machine program `P` has a **principal solution**:

- `∃ τ*. Solves(τ*, Φ) ∧ ∀ τ. Solves(τ, Φ) → τ* ⊑ τ` (most-specific), and
- *no false negative*: the true source type `τ_src` satisfies `τ* ⊑ τ_src` (recovery never excludes the real type).

**Minimal semantic model.** A subtype lattice with meet, a constraint language (subtype/subsumption constraints à la Retypd), and a closure/saturation relation. Your existing (e) ConstantRange soundness and (f) alignment-driven TypeInversion are exactly the "witness" predicates that discharge the side conditions.

**Literature vs. novel.** The closest evidence is the *Weak subsumption constraints for type diagnosis* incremental algorithm [3] and the general completeness-of-abstract-domains framing [5]. Principal types via unification are classical (Hindley–Milner), but a **machine-checked principal-type / no-false-negative theorem for binary type recovery, tied to physical witnesses (alignment, ranges)** is not in the returned evidence and is plausibly novel against Retypd (which, in its published form, proves soundness of constraint solving but — based on the absence of any Coq Retypd hit [2]) is not machine-checked.

**Coq technique.** Confluence of the constraint-closure rewrite system via **Newman's lemma** (local confluence + termination ⇒ confluence ⇒ unique normal form = principal solution). Termination feeds directly into (5). Define `Solves` inductively; prove uniqueness by anti-symmetry on `⊑` using your ValueLattice laws (b).

---

## (3) Precision metrics as a partial order with end-to-end monotonicity

**Theorem shape.**
Define a precision order `≼_prec` on analysis results (refinement of the abstract value lattice). For each pass `T_i`, prove *precision monotonicity*: `a ≼_prec b → T_i(a) ≼_prec T_i(b)`. Then by composition `T_n ∘ … ∘ T_1` is precision-monotone, giving an **end-to-end precision-preservation theorem**: more precise input never yields less precise output.

**Minimal semantic model.** The lattice from (b) plus a separate precision preorder (often the same `⊑` but you may want a quotient that collapses representationally-distinct-but-equally-precise results). Each pass as a monotone endofunction.

**Literature vs. novel.** Monotonicity of transfer functions and the soundness side are standard (Kildall, which you already have in (b)). The **precision metric as an explicitly axiomatized partial order proved monotone end-to-end across a decompiler pass pipeline** is not in the evidence; this is essentially a *constructive completeness/precision* result in the Giacobazzi–Ranzato sense [5] but stated operationally over a pass sequence. Your KnownBits best-abstract-transformer optimality (a) is one local instance — the novel contribution is lifting it to a pipeline invariant.

**Coq technique.** Plain structural induction over the pass list; each pass discharges a `Proper (≼_prec ==> ≼_prec)` instance. Use `setoid`/`Proper`/`Morphisms` so `rewrite` works under the preorder. No well-founded recursion needed unless passes iterate to fixpoint (then reuse Kildall machinery).

---

## (4) SSA phi-placement + dominance frontier soundness tied to type propagation

**Theorem shape.**
For program `P` with CFG `G`:

- *Placement correctness:* phi-nodes placed by the dominance-frontier algorithm satisfy the **SSA invariant** — every use is dominated by exactly one reaching definition, and a phi is inserted at exactly the iterated dominance frontier of each definition site.
- *Type-propagation tie-in:* the join computed at each phi equals the lattice meet/join of the incoming type facts, and this join is sound w.r.t. concrete semantics (`γ(phi-join) ⊇ ⋃ γ(incoming)`).

**Minimal semantic model.** A CFG with a dominance relation (you need a verified dominator-tree or at least the dominance partial order), the SSA well-formedness predicate, and your ValueLattice (b) for the join.

**Literature vs. novel.** This is the area where I'd most strongly caution about novelty: **Vellvm and related projects have machine-checked SSA semantics and dominance**, and the searches simply failed to surface them (the only "dominance/SSA" hit is your own codebase [6]). So *SSA dominance soundness alone is likely NOT novel*. The plausibly-novel piece is the **coupling of dominance-frontier-correct phi placement to a typed lattice propagation with a soundness statement about the phi-join as a type abstraction** — i.e., phi-as-meet in the type domain. Verify against Vellvm before claiming this.

**Coq technique.** Inductive characterization of dominance + well-founded induction on the dominator tree for the iterated-DF fixpoint termination; the type-join soundness is a monotonicity/Galois lemma reusing (b) and the GC tooling [5].

---

## (5) Decid

---
_Plan of 6 step(s), 6 answered:_
- [1] ✅ papers: machine-checked decompilation soundness type recovery Coq formal verification
- [2] ✅ scholar: Retypd principal type inference constraint solving decidability machine code
- [3] ✅ papers: type recovery binary decompilation principal types constraint solving Retypd
- [4] ✅ arxiv: abstract interpretation Galois connection completeness machine-checked Coq soundness
- [5] ✅ papers: completeness abstract interpretation Giacobazzi Ranzato backward completeness Galois connection
- [6] ✅ dblp: verified SSA dominance frontier phi placement formal proof

**Follow-up questions:**
- What are the limitations or criticisms of What formal-methods results in decompilation and abstract interpretation are NOT yet machine-checked, so that a new Coq/Rocq project could state genuinely novel theorems? I already have machine-checked: (a) KnownBits abstract-domain soundness AND Best-Abstract-Transformer optimality (kand loses no recoverable bit), (b) ValueLattice lattice laws + Kildall monotonicity/fixpoint-uniqueness/determinism, (c) algebraic_simplify peephole soundness + add/mul assoc-comm canonicalization, (d) struct RecordLayout alignment+disjointness+greedy-minimality, (e) ConstantRange interval soundness + precision-monotonicity, (f) alignment-driven TypeInversion (alignment facts exclude impossible struct-field candidates). I want to design NEW theorems not found in CompCert/Verasco/Vellvm/Alive2/Retypd literature, specifically about: (1) DECOMPILATION AS PROVABLE INVERSION OF COMPILATION — can we formalize a compiler lowering relation L(type-level program)=machine program and prove a decompiler recovers a program in the same observational-equivalence class, i.e. a Galois connection between source types and recovered types? (2) COMPLETENESS / no-false-negative theorems for type recovery: under what stated constraints is the recovered type the UNIQUE most-specific type (principal type), and how is that proved (unification/constraint-closure confluence)? (3) precision metrics as a partial order with a proof that a pass is precision-monotone end-to-end; (4) soundness of SSA phi-node placement + dominance frontier as machine-checked invariants tied to type propagation; (5) decidability/termination of a constraint-based type-reconstruction engine (Retypd-style) with a measured ranking function. For each, give the precise theorem statement shape, the minimal semantic model needed, what is already done in the literature vs what would be novel, and the likely Coq proof technique (Galois connection, well-founded recursion, confluence/Newman's lemma, bisimulation). Cite sources?
- What are the main alternatives to What formal-methods results in decompilation and abstract interpretation are NOT yet machine-checked, so that a new Coq/Rocq project could state genuinely novel theorems? I already have machine-checked: (a) KnownBits abstract-domain soundness AND Best-Abstract-Transformer optimality (kand loses no recoverable bit), (b) ValueLattice lattice laws + Kildall monotonicity/fixpoint-uniqueness/determinism, (c) algebraic_simplify peephole soundness + add/mul assoc-comm canonicalization, (d) struct RecordLayout alignment+disjointness+greedy-minimality, (e) ConstantRange interval soundness + precision-monotonicity, (f) alignment-driven TypeInversion (alignment facts exclude impossible struct-field candidates). I want to design NEW theorems not found in CompCert/Verasco/Vellvm/Alive2/Retypd literature, specifically about: (1) DECOMPILATION AS PROVABLE INVERSION OF COMPILATION — can we formalize a compiler lowering relation L(type-level program)=machine program and prove a decompiler recovers a program in the same observational-equivalence class, i.e. a Galois connection between source types and recovered types? (2) COMPLETENESS / no-false-negative theorems for type recovery: under what stated constraints is the recovered type the UNIQUE most-specific type (principal type), and how is that proved (unification/constraint-closure confluence)? (3) precision metrics as a partial order with a proof that a pass is precision-monotone end-to-end; (4) soundness of SSA phi-node placement + dominance frontier as machine-checked invariants tied to type propagation; (5) decidability/termination of a constraint-based type-reconstruction engine (Retypd-style) with a measured ranking function. For each, give the precise theorem statement shape, the minimal semantic model needed, what is already done in the literature vs what would be novel, and the likely Coq proof technique (Galois connection, well-founded recursion, confluence/Newman's lemma, bisimulation). Cite sources?
- What are the latest developments in What formal-methods results in decompilation and abstract interpretation are NOT yet machine-checked, so that a new Coq/Rocq project could state genuinely novel theorems? I already have machine-checked: (a) KnownBits abstract-domain soundness AND Best-Abstract-Transformer optimality (kand loses no recoverable bit), (b) ValueLattice lattice laws + Kildall monotonicity/fixpoint-uniqueness/determinism, (c) algebraic_simplify peephole soundness + add/mul assoc-comm canonicalization, (d) struct RecordLayout alignment+disjointness+greedy-minimality, (e) ConstantRange interval soundness + precision-monotonicity, (f) alignment-driven TypeInversion (alignment facts exclude impossible struct-field candidates). I want to design NEW theorems not found in CompCert/Verasco/Vellvm/Alive2/Retypd literature, specifically about: (1) DECOMPILATION AS PROVABLE INVERSION OF COMPILATION — can we formalize a compiler lowering relation L(type-level program)=machine program and prove a decompiler recovers a program in the same observational-equivalence class, i.e. a Galois connection between source types and recovered types? (2) COMPLETENESS / no-false-negative theorems for type recovery: under what stated constraints is the recovered type the UNIQUE most-specific type (principal type), and how is that proved (unification/constraint-closure confluence)? (3) precision metrics as a partial order with a proof that a pass is precision-monotone end-to-end; (4) soundness of SSA phi-node placement + dominance frontier as machine-checked invariants tied to type propagation; (5) decidability/termination of a constraint-based type-reconstruction engine (Retypd-style) with a measured ranking function. For each, give the precise theorem statement shape, the minimal semantic model needed, what is already done in the literature vs what would be novel, and the likely Coq proof technique (Galois connection, well-founded recursion, confluence/Newman's lemma, bisimulation). Cite sources?
