# Formal-methods bibliography for unlace proofs

Downloaded papers (PDF in `pdf/`, extracted text in `txt/`) that inform the
machine-checked cores in `rocq-tests/`. Each row maps a paper to the proof
obligation / `.v` file it backs. This is prioritization + provenance input,
not proof of current unlace behavior — the proofs themselves are in
`rocq-tests/`.

| Paper | File | Informs | unlace proof |
|-------|------|---------|--------------|
| Leroy, *Formally verified compiler back-end / CompCert* (CACM) | `compcert-cacm.txt` | `SEMILATTICE` signature, Kildall dataflow fixpoint, `Lattice.v` order/LUB design | `ValueLattice.v` (order/LUB/monotonicity); future `Kildall.v` |
| Jourdan et al., *Verasco: a verified C static analyzer* (POPL'15) | `verasco-popl15.txt` | gamma-only abstract-domain soundness; transfer-function soundness via concretization | `KnownBits.v`, `ValueLattice.v` (the γ/soundness convention) |
| Zhao, Zdancewic et al., *Vellvm: Verifying the LLVM IR* (POPL'12) | `vellvm-popl12.txt` | verified LLVM IR semantics, SSA + dominance invariants | future `Dominance.v` / `SsaWf.v` (COVERAGE #10/#11) |
| Lopes et al., *Alive2: Bounded Translation Validation for LLVM* (PLDI'21) | `alive2-pldi21.txt` | peephole correctness as lhs ≡ rhs over bitvectors; poison/undef handling | `AlgebraicSimplify.v` (rewrite-soundness method) |
| Smith, *The Simple Essence of Polymorphic Type Inference for Machine Code / BinSub* (arXiv 2409.01841) | `bbv-bitvector.txt` | clean reformulation of Retypd subtyping; bitvector type lattices | future type-solver proofs; `ValueLattice.v` lattice framing |
| Noonan, Loginov, Cok, *Polymorphic Type Inference for Machine Code / Retypd* (PLDI'16) | `retypd-pldi16.txt` | subtyping-constraint type inference, constraint simplification | future `RecordLayout.v` / type-solver constraint core (COVERAGE #14) |
| Basque et al., *Ahoy SAILR! …structuring* (USENIX'24) | `sailr-usenix24.txt` | compiler-aware de-optimization; goto-equivalence; which structuring artifacts to undo | structuring passes (not yet proved); validates the post-process-over-core rule |
| Yakdan et al., *DREAM: No More Gotos* (NDSS'15) | `dream-ndss15.txt` | pattern-independent, goto-free structuring; condition-based semantics-preserving control | structuring correctness backlog |
| Chen et al., *DIRTY: Augmenting Decompiler Output…* (2022) | `dirty-2022.txt` | joint retyping + renaming baseline; variable-name/type recovery framing | type/variable-recovery metric design (parity axis 3) |
| (deep-research synthesis) | `deep-research-coq-verified-analysis.md` | replication blueprint: exact theorem statements + proof structure for lattices, KnownBits, peephole, SSA, Kildall | all of `rocq-tests/` |
| Giacobazzi & Ranzato, *completeness in abstract interpretation* + Ranzato, *A Constructive Framework for Galois Connections* | `deep-research-novel-theorem-design.md` | the soundness-vs-completeness vocabulary and constructive Galois-connection tooling behind the novel modules | `CompilationInversion.v`, `PrincipalType.v`, `PrecisionPipeline.v` |

## How this maps to the proof roadmap

- **Already proven** (`ValueLattice.v`, `KnownBits.v`, `AlgebraicSimplify.v`,
  `TInfo.v`, `Bitvector.v`) draw on CompCert (lattice/LUB), Verasco
  (γ-soundness), Alive2 (peephole equivalence), and IDA's `calc_tinfo_gaps` /
  `get_best_fit_member`.
- **Next targets** in `rocq-tests/COVERAGE.md` map to: CompCert Kildall
  (`Kildall.v`, #18), Vellvm dominance (`Dominance.v`/`SsaWf.v`, #10/#11), and
  Retypd/BinSub (record layout + type-solver core, #14).

## Acquisition notes

PDFs fetched from arXiv and author/institution open-access copies. A few
sources (Menendez precondition-inference PLDI'17, OSPREY S&P'21, TyGr USENIX'24)
returned non-PDF responses at fetch time and are listed here for manual
acquisition; their ideas are summarized in
`docs/research-ida-parity-gaps-2026-05.md`. Re-run acquisition with
`scripts/` curl block in this directory's git history.
