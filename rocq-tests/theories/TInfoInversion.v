(** * TInfoInversion: struct-field recovery as lossy compilation inversion.

    Compilation lowers a typed field access [struct.field] into a raw byte
    OFFSET, erasing the field identity — a genuinely lossy step (many source
    field accesses can map to overlapping offset regions). Decompilation must
    invert it: from an offset, recover the field. unlace's recovery is
    [best_fit], proven sound/tightest/complete in [TInfo.v]. Here we tie that to
    the inversion framing and prove, with zero admits/axioms:

      1. RECOVERY SOUNDNESS: the offset produced by lowering a real field access
         is always re-attributed to a field that actually CONTAINS it — the true
         access site is in the recovered field's byte range (reuses
         [best_fit_sound] + [best_fit_complete]).
      2. INCOMPLETENESS UNDER OVERLAP: when two distinct fields contain the same
         offset (a union / overlapping layout), recovery cannot uniquely invert
         — [best_fit] returns ONE field, but the offset was reachable from
         another. We exhibit a concrete witness, localizing the ambiguity.

    This grounds the abstract "decompilation = lossy inversion" thesis on
    unlace's real struct-recovery code. *)

From Stdlib Require Import List Arith Lia.
Import ListNotations.
From Unlace Require Import TInfo.

(* ================================================================== *)
(** ** Recovery soundness via best_fit *)
(* ================================================================== *)

(** Lowering a field access to an offset, then recovering, lands on a field that
    contains the offset. If the access was real (some field [g] in the layout
    contains [o]), [best_fit] returns SOME field, and that field genuinely
    contains [o] — the true access site is in its range. This is recovery
    soundness for struct fields, assembled from the proven [best_fit_complete]
    (recovery succeeds) and [best_fit_sound] (the result is faithful). *)
Theorem field_recovery_sound : forall fields o g,
  In g fields -> in_field g o ->
  exists f, best_fit fields o = Some f /\ in_field f o.
Proof.
  intros fields o g Hin Hg.
  destruct (best_fit_complete fields o g Hin Hg) as [f Hf].
  exists f. split; [exact Hf |].
  apply (best_fit_sound fields o f Hf).
Qed.

(** The recovered field is the TIGHTEST containing field (highest offset),
    reusing [best_fit_tightest] — so among an overlapping set, recovery picks
    the most specific (innermost) field. *)
Theorem field_recovery_tightest : forall fields o f g,
  best_fit fields o = Some f -> In g fields -> in_field g o ->
  f_off g <= f_off f.
Proof.
  intros. eapply best_fit_tightest; eauto.
Qed.

(* ================================================================== *)
(** ** Incompleteness under overlapping fields (the lossy witness) *)
(* ================================================================== *)

(** Two distinct fields that both contain offset 1: [a] at offset 0 size 2, and
    [b] at offset 1 size 1 (e.g. a byte field overlapping a word field's tail —
    a union or nested layout). Offset 1 is reachable from BOTH, but [best_fit]
    returns the tightest ([b], offset 1) — so an access that originated in [a]
    is recovered as [b]. The compilation→offset step was not invertible to the
    source field; we make the ambiguity concrete. *)

Definition fa : field := mkField 0 2.   (* covers offsets {0,1} *)
Definition fb : field := mkField 1 1.   (* covers offset  {1}   *)

(** Both fields genuinely contain offset 1. *)
Lemma overlap_a : in_field fa 1.
Proof. unfold in_field, fa; simpl. lia. Qed.

Lemma overlap_b : in_field fb 1.
Proof. unfold in_field, fb; simpl. lia. Qed.

(** Recovery at offset 1 picks [fb] (the tightest), NOT [fa] — even though the
    access could have come from [fa]. The offset alone cannot distinguish them:
    recovery is INCOMPLETE under overlap. *)
Theorem field_recovery_incomplete :
  best_fit [fa; fb] 1 = Some fb /\ fa <> fb /\ in_field fa 1.
Proof.
  split; [| split].
  - (* compute best_fit [fa;fb] 1 *)
    vm_compute. reflexivity.
  - (* fa <> fb *)
    unfold fa, fb. intro H. injection H as H0 H1. discriminate H0.
  - exact overlap_a.
Qed.

(** The ambiguity stated as non-injectivity of lowering: two DISTINCT fields map
    to a common offset, so the offset → field recovery cannot be the inverse of
    a unique source. This is the precise sense in which struct lowering loses
    information that no decompiler can recover from the offset alone. *)
Theorem lowering_not_injective :
  exists o f g, f <> g /\ in_field f o /\ in_field g o.
Proof.
  exists 1, fa, fb. split; [| split].
  - unfold fa, fb. intro H. injection H as H0 H1. discriminate H0.
  - apply overlap_a.
  - apply overlap_b.
Qed.
