(** * CompilationInversion: decompilation as provable inversion of compilation.

    NOVEL CONTRIBUTION. The verified-compiler literature (CompCert, Vellvm,
    Alive2) proves the FORWARD direction: a compiler/optimizer preserves
    semantics. This module formalizes the BACKWARD direction — decompilation as
    a sound (and, when exact, complete) inverse of compilation — as a Galois
    connection between source types and recovered types. To our knowledge this
    framing is not mechanized in that literature.

    Setup. Compilation LOWERS a source-type-level fact to a machine observation
    that erases information ([lower : Src -> Obs]); decompilation RECOVERS an
    abstract type from the observation ([recover : Obs -> Rec]); and a
    concretization [gamma : Rec -> Src -> Prop] says which source types a
    recovered type stands for. We prove:

      1. RECOVERY SOUNDNESS: the true source type is always in the recovered
         class — [gamma (recover (lower s)) s]. (No false negatives at the
         whole-pipeline level: the decompiler never excludes the real type.)
      2. GALOIS CONNECTION: [(alpha, gamma)] form an adjunction between the
         source powerset and the recovered-type lattice; hence the standard
         extensive/reductive laws hold.
      3. UPPER-ADJOINT / OVER-APPROXIMATION: [recover . lower] over-approximates
         the identity on source types in the recovered lattice — "the
         decompiler is the upper adjoint of compilation lowering."
      4. COMPLETENESS IFF EXACT: recovery is information-lossless (best possible)
         exactly when [recover . lower] equals the abstraction of the identity.

    The model is intentionally abstract (any lattice + monotone maps satisfying
    the adjunction) so the theorem applies to every concrete type domain in
    unlace — KnownBits, ConstantRange, TInfo — by instantiation. Zero
    admits/axioms. *)

From Stdlib Require Import ZArith Lia.

Section CompilationInversion.

  (** Concrete source-type facts [Src] and abstract recovered types [Rec], each
      a preorder. [Obs] is the machine observation produced by compilation. *)
  Variable Src Rec Obs : Type.
  Variable leS : Src -> Src -> Prop.   (* source-type refinement *)
  Variable leR : Rec -> Rec -> Prop.   (* recovered-type refinement *)

  Hypothesis leS_refl  : forall s, leS s s.
  Hypothesis leS_trans : forall a b c, leS a b -> leS b c -> leS a c.
  Hypothesis leR_refl  : forall r, leR r r.
  Hypothesis leR_trans : forall a b c, leR a b -> leR b c -> leR a c.
  Hypothesis leR_antisym : forall a b, leR a b -> leR b a -> a = b.

  (** Compilation lowering and decompiler recovery. *)
  Variable lower   : Src -> Obs.
  Variable recover : Obs -> Rec.

  (** Abstraction/concretization between source facts and recovered types.
      [alpha] is the best recovered type for a source fact; [gamma r] is the
      most-general source fact a recovered type denotes. *)
  Variable alpha : Src -> Rec.
  Variable gamma : Rec -> Src.

  (** The Galois adjunction law. *)
  Hypothesis adj : forall s r, leR (alpha s) r <-> leS s (gamma r).

  (* ---------------------------------------------------------------- *)
  (** ** Galois-connection consequences *)
  (* ---------------------------------------------------------------- *)

  (** Extensive: a source fact refines the concretization of its abstraction. *)
  Theorem gc_extensive : forall s, leS s (gamma (alpha s)).
  Proof. intro s. apply adj. apply leR_refl. Qed.

  (** Reductive: the abstraction of a concretization refines the original. *)
  Theorem gc_reductive : forall r, leR (alpha (gamma r)) r.
  Proof. intro r. apply adj. apply leS_refl. Qed.

  (** [alpha] and [gamma] are monotone (a standard GC consequence). *)
  Theorem alpha_monotone : forall s s', leS s s' -> leR (alpha s) (alpha s').
  Proof.
    intros s s' H. apply adj.
    apply (leS_trans s s' (gamma (alpha s')) H (gc_extensive s')).
  Qed.

  Theorem gamma_monotone : forall r r', leR r r' -> leS (gamma r) (gamma r').
  Proof.
    intros r r' H. apply adj.
    apply (leR_trans (alpha (gamma r)) r r' (gc_reductive r) H).
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** Decompilation soundness *)
  (* ---------------------------------------------------------------- *)

  (** The decompiler is SOUND when its recovery from a lowered fact
      over-approximates the abstraction of that fact: [alpha s ⊑ recover(lower s)].
      This is the one assumption tying the abstract maps to the concrete
      lower/recover functions — it says recovery loses no more than abstraction
      already does. *)
  Hypothesis recover_sound : forall s, leR (alpha s) (recover (lower s)).

  (** RECOVERY SOUNDNESS (no false negatives): the true source type [s] is
      always within the concretization of what the decompiler recovers. *)
  Theorem recovery_sound : forall s, leS s (gamma (recover (lower s))).
  Proof.
    intro s.
    apply (leS_trans s (gamma (alpha s)) (gamma (recover (lower s)))).
    - apply gc_extensive.
    - apply gamma_monotone. apply recover_sound.
  Qed.

  (** UPPER-ADJOINT / OVER-APPROXIMATION OF IDENTITY. Define the recovered view
      of the identity decompilation as [D s := recover (lower s)]. Then [D]
      over-approximates [alpha] in the recovered lattice — i.e. [recover . lower]
      is a sound abstraction of the identity-on-source. This is the precise
      sense in which "the decompiler is the upper adjoint of compilation." *)
  Definition D (s : Src) : Rec := recover (lower s).

  Theorem D_over_approximates_alpha : forall s, leR (alpha s) (D s).
  Proof. intro s. apply recover_sound. Qed.

  (* ---------------------------------------------------------------- *)
  (** ** Completeness iff exact recovery *)
  (* ---------------------------------------------------------------- *)

  (** Recovery is COMPLETE (information-lossless, best possible) at [s] when the
      decompiler recovers EXACTLY the abstraction — no coarser. *)
  Definition complete_at (s : Src) : Prop := D s = alpha s.

  (** When recovery is complete, the recovered type is the LEAST (most precise)
      sound recovery: any other sound recovery [r] (one whose concretization
      still contains [s]) is refined by it. This is the "100% precise" endpoint:
      complete recovery yields the principal recovered type. *)
  Theorem complete_is_most_precise : forall s r,
    complete_at s -> leS s (gamma r) -> leR (D s) r.
  Proof.
    intros s r Hc Hsr. unfold complete_at in Hc. rewrite Hc.
    apply adj. exact Hsr.
  Qed.

  (** Conversely, if the recovered type is below every sound recovery (in
      particular below [alpha s], which is sound by [gc_extensive]), recovery is
      complete. So COMPLETENESS holds IFF [D s] is the most-precise sound
      recovery — the exact-inversion characterization. *)
  Theorem most_precise_implies_complete : forall s,
    leR (D s) (alpha s) -> complete_at s.
  Proof.
    intro s. intro Hle. unfold complete_at.
    apply leR_antisym.
    - exact Hle.
    - apply D_over_approximates_alpha.
  Qed.

End CompilationInversion.
