(** * ConstantRangeInstances: the abstract frameworks on the REAL ConstantRange
    interval domain.

    Extends the framework-to-real-code grounding beyond [ValueLattice] to the
    interval domain. We instantiate:

      - [PrecisionPipeline] with [rle] (interval inclusion = "tighter is more
        precise") and concrete range-refinement passes [rmeet_with c], proving a
        real range-narrowing pipeline is end-to-end precision-monotone AND
        reductive (only ever tightens);
      - [PrincipalType] uniqueness / no-false-negative on intervals, so range
        recovery returns THE unique tightest range and never excludes the truth.

    Zero admits/axioms. *)

From Stdlib Require Import List ZArith Lia.
Import ListNotations.
From Unlace Require Import ConstantRange PrecisionPipeline PrincipalType.
Local Open Scope Z_scope.

(** [rle] is antisymmetric (needed for principal uniqueness). *)
Lemma rle_antisym : forall a b, rle a b -> rle b a -> a = b.
Proof.
  unfold rle. intros [la ha] [lb hb]; simpl. intros [??] [??].
  assert (la = lb) by lia. assert (ha = hb) by lia. subst. reflexivity.
Qed.

(* ================================================================== *)
(** ** PrecisionPipeline on ConstantRange (range-narrowing passes) *)
(* ================================================================== *)

(** A concrete range-refinement pass: intersect the current range with an
    observed fact range [c]. This is exactly how interval analysis incorporates
    a new bound (a comparison, an array length, an alignment-derived range). *)
Definition rmeet_with (c : range) : range -> range := fun r => rmeet c r.

(** Range-narrowing is precision-monotone in [rle]. *)
Lemma rmeet_with_mono : forall c, mono range rle (rmeet_with c).
Proof.
  intros c a b Hab. unfold rmeet_with, rle, rmeet in *; simpl in *.
  destruct Hab. lia.
Qed.

(** Range-narrowing is reductive: the result is at least as precise (tighter)
    as the input — it only ever narrows. *)
Lemma rmeet_with_reductive : forall c, reductive range rle (rmeet_with c).
Proof.
  intros c r. unfold rmeet_with, rle, rmeet; simpl. lia.
Qed.

Lemma rmeet_list_mono : forall cs, all_mono range rle (map rmeet_with cs).
Proof.
  induction cs as [| c rest IH]; simpl; constructor;
    [apply rmeet_with_mono | exact IH].
Qed.

Lemma rmeet_list_reductive : forall cs, all_reductive range rle (map rmeet_with cs).
Proof.
  induction cs as [| c rest IH]; simpl; constructor;
    [apply rmeet_with_reductive | exact IH].
Qed.

(** CONCRETE END-TO-END PRECISION MONOTONICITY for a real interval-refinement
    pipeline: narrowing any input range never degrades the final precision. *)
Theorem range_pipeline_precision_monotone : forall cs a b,
  rle a b ->
  rle (run range (map rmeet_with cs) a) (run range (map rmeet_with cs) b).
Proof.
  intros cs a b Hab.
  apply (pipeline_precision_monotone range rle (map rmeet_with cs) a b).
  - apply rmeet_list_mono.
  - exact Hab.
Qed.

(** CONCRETE REDUCTIVITY: running the whole interval pipeline only tightens —
    the final range is at least as precise as the starting range. *)
Theorem range_pipeline_reductive : forall cs s,
  rle (run range (map rmeet_with cs) s) s.
Proof.
  intros cs s.
  apply (pipeline_reductive range rle rle_refl rle_trans (map rmeet_with cs) s).
  - apply rmeet_list_mono.
  - apply rmeet_list_reductive.
Qed.

(* ================================================================== *)
(** ** PrincipalType on ConstantRange *)
(* ================================================================== *)

(** UNIQUENESS: an interval-recovery constraint has at most one principal
    (tightest) solution — "the recovered range" is well-defined. [rle] is
    already "tighter than", so it is the [tle] of [PrincipalType] directly. *)
Theorem range_principal_unique : forall (C : range -> Prop) p q,
  principal range rle C p -> principal range rle C q -> p = q.
Proof.
  apply (principal_unique range rle rle_antisym).
Qed.

(** NO FALSE NEGATIVE: if the true range [tsrc] satisfies the recovered
    constraint, the principal solution is at least as tight and never excludes
    it. *)
Theorem range_no_false_negative : forall (C : range -> Prop) p tsrc,
  C tsrc -> principal range rle C p -> rle p tsrc.
Proof.
  apply (no_false_negative range rle).
Qed.

(** WITNESS MONOTONICITY: adding an observed range witness keeps recovery sound
    and orders the principals (the original principal is below the refined). *)
Theorem range_refine_principal_in_upset : forall (C W : range -> Prop) p p',
  principal range rle C p -> principal range rle (refine range C W) p' -> rle p p'.
Proof.
  apply (refine_principal_in_upset range rle).
Qed.

Theorem range_refine_shrinks : forall (C W : range -> Prop) t,
  refine range C W t -> C t.
Proof.
  apply (refine_shrinks_solutions range).
Qed.
