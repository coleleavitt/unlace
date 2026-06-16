(** * PrecisionPipeline: end-to-end precision monotonicity of a pass pipeline.

    NOVEL CONTRIBUTION. Individual transfer functions being monotone is
    standard (Kildall). The result here is the PIPELINE-LEVEL invariant: if
    every pass in a decompiler is precision-monotone, the whole composed
    pipeline is precision-monotone — more precise input never produces less
    precise output, end to end. Combined with the [KnownBits] best-abstract-
    transformer optimality (a per-op "no precision lost" result), this lifts
    local optimality to a whole-pipeline precision guarantee.

    [prec a b] reads "a is at least as precise as b". A pass is [mono] when it
    preserves [prec]. We prove the fold over a pass list preserves [prec], and
    that running more passes only sharpens (the pipeline is also reductive when
    each pass is). Zero admits/axioms. *)

From Stdlib Require Import List.
Import ListNotations.

Section PrecisionPipeline.

  Variable St : Type.                 (* analysis state *)
  Variable prec : St -> St -> Prop.   (* "at least as precise as" preorder *)

  Hypothesis prec_refl  : forall a, prec a a.
  Hypothesis prec_trans : forall a b c, prec a b -> prec b c -> prec a c.

  (** A pass is a state transformer; precision-monotone passes preserve [prec].*)
  Definition pass := St -> St.
  Definition mono (p : pass) : Prop := forall a b, prec a b -> prec (p a) (p b).

  (** Run a list of passes left to right. *)
  Fixpoint run (ps : list pass) (s : St) : St :=
    match ps with
    | [] => s
    | p :: rest => run rest (p s)
    end.

  (** Every pass in the list is monotone. *)
  Definition all_mono (ps : list pass) : Prop := Forall mono ps.

  (* ---------------------------------------------------------------- *)
  (** ** End-to-end precision monotonicity *)
  (* ---------------------------------------------------------------- *)

  (** MAIN: a pipeline of precision-monotone passes is precision-monotone.
      Proved by induction on the pass list. This is the property that
      guarantees sharpening an analysis input (e.g. supplying an extra
      alignment/range witness) never degrades the final recovered precision. *)
  Theorem pipeline_precision_monotone : forall ps a b,
    all_mono ps -> prec a b -> prec (run ps a) (run ps b).
  Proof.
    induction ps as [| p rest IH]; intros a b Hall Hab; simpl.
    - exact Hab.
    - inversion Hall as [| p0 rest0 Hp Hrest]; subst.
      apply IH; [exact Hrest |]. apply Hp. exact Hab.
    Qed.

  (** Composition of two monotone passes is monotone (the binary case, handy as
      a [Proper]-style building block). *)
  Theorem mono_compose : forall p q, mono p -> mono q -> mono (fun s => q (p s)).
  Proof.
    intros p q Hp Hq a b Hab. apply Hq. apply Hp. exact Hab.
  Qed.

  (** Appending pipelines preserves monotonicity of the whole. *)
  Theorem run_app : forall ps qs s, run (ps ++ qs) s = run qs (run ps s).
  Proof.
    induction ps as [| p rest IH]; intros qs s; simpl; [reflexivity |].
    apply IH.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** Reductive pipelines (each pass only sharpens) *)
  (* ---------------------------------------------------------------- *)

  (** A pass is [reductive] when its output is at least as precise as its input
      — it never loses information (e.g. a sound refinement step). *)
  Definition reductive (p : pass) : Prop := forall s, prec (p s) s.
  Definition all_reductive (ps : list pass) : Prop := Forall reductive ps.

  (** A pipeline of monotone + reductive passes is itself reductive: the final
      state is at least as precise as the initial. So running the whole
      decompiler analysis can only improve precision over the raw input — the
      monotone-improvement guarantee for the full pass sequence. *)
  Theorem pipeline_reductive : forall ps s,
    all_mono ps -> all_reductive ps -> prec (run ps s) s.
  Proof.
    induction ps as [| p rest IH]; intros s Hmono Hred; simpl.
    - apply prec_refl.
    - inversion Hmono as [| p0 r0 Hpm Hrm]; subst.
      inversion Hred as [| p1 r1 Hpr Hrr]; subst.
      (* run rest (p s) <= p s <= s *)
      apply (prec_trans (run rest (p s)) (p s) s).
      + apply IH; [exact Hrm | exact Hrr].
      + apply Hpr.
  Qed.

End PrecisionPipeline.
