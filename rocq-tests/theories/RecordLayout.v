(** * RecordLayout: aligned, disjoint struct field layout (Target #14).

    Mirrors the greedy ABI field-layout computation in
    [crates/unlace-passes/src/abi_layout.rs] (and the IDA struct-recovery
    layout). Given a list of field specs (size + alignment), [layout_fields]
    places each field at the next offset that satisfies its alignment. We prove:

    - every placed offset is ALIGNED to the field's alignment;
    - offsets are MONOTONE (each field starts at/after the running cursor);
    - any two distinct placed fields are DISJOINT (non-overlapping) — the
      well-formedness property reconstructed structs must satisfy;
    - NOVEL: the layout is GREEDY-MINIMAL (each field sits at the least aligned
      offset >= the cursor — no smaller valid placement exists), which is what
      makes the recovered offsets match compiler output rather than merely being
      *some* valid layout.

    All proofs are over [Z] with [f_size >= 0]; zero admits/axioms. *)

From Stdlib Require Import ZArith List Lia.
Import ListNotations.
Local Open Scope Z_scope.

Record field_spec   := { f_size  : Z; f_align : Z }.
Record field_layout := { fl_offset : Z; fl_size : Z; fl_align : Z }.

Definition aligned (offset align : Z) : Prop :=
  align > 0 -> offset mod align = 0.

Definition fields_disjoint (f1 f2 : field_layout) : Prop :=
  fl_offset f1 + fl_size f1 <= fl_offset f2 \/
  fl_offset f2 + fl_size f2 <= fl_offset f1.

(** [align_to offset align]: the least value >= [offset] that is a multiple of
    [align] (identity for non-positive alignment). *)
Definition align_to (offset align : Z) : Z :=
  if Z_le_dec align 0 then offset
  else
    let r := offset mod align in
    if Z.eq_dec r 0 then offset else offset + (align - r).

(* ------------------------------------------------------------------ *)
(** ** align_to properties *)
(* ------------------------------------------------------------------ *)

Lemma align_to_ge : forall offset align, align_to offset align >= offset.
Proof.
  intros offset align. unfold align_to.
  destruct (Z_le_dec align 0); [lia|].
  destruct (Z.eq_dec (offset mod align) 0); [lia|].
  pose proof (Z.mod_pos_bound offset align). lia.
Qed.

Lemma align_to_aligned : forall offset align,
  align > 0 -> aligned (align_to offset align) align.
Proof.
  intros offset align Hpos. unfold aligned, align_to. intro _Hdummy.
  destruct (Z_le_dec align 0); [lia|].
  destruct (Z.eq_dec (offset mod align) 0) as [Heq | Hne]; [exact Heq|].
  (* offset + (align - offset mod align) = (offset - offset mod align) + align,
     and (offset - offset mod align) = (offset / align) * align. *)
  assert (Hdiv : offset - offset mod align = offset / align * align)
    by (pose proof (Z.div_mod offset align ltac:(lia)); lia).
  replace (offset + (align - offset mod align))
    with (offset / align * align + align) by lia.
  rewrite Z.add_mod by lia. rewrite Z_mod_mult, Z_mod_same by lia.
  reflexivity.
Qed.

(** NOVEL — greedy minimality of [align_to]: no smaller aligned offset >=
    [offset] exists. This is the property that pins the recovered layout to the
    compiler's, not merely to *a* valid one. *)
Lemma align_to_least : forall offset align k,
  align > 0 -> offset <= k -> k mod align = 0 -> align_to offset align <= k.
Proof.
  intros offset align k Hpos Hge Hkmod. unfold align_to.
  destruct (Z_le_dec align 0); [lia|].
  destruct (Z.eq_dec (offset mod align) 0); [lia|].
  (* k is a multiple of align and >= offset; the next multiple >= offset is
     offset + (align - offset mod align), which is <= k. *)
  pose proof (Z.mod_pos_bound offset align ltac:(lia)) as Hb.
  pose proof (Z.div_mod offset align ltac:(lia)) as Hdm.
  pose proof (Z.div_mod k align ltac:(lia)) as Hdk.
  rewrite Hkmod, Z.add_0_r in Hdk.
  (* offset/align < k/align would give offset/align+1 <= k/align *)
  assert (offset / align < k / align \/ offset / align = k / align) as [Hlt|Heqd].
  { assert (offset / align <= k / align).
    { apply Z.div_le_mono; lia. } lia. }
  - nia.
  - rewrite Heqd in Hdm. nia.
Qed.

(* ------------------------------------------------------------------ *)
(** ** The layout builder *)
(* ------------------------------------------------------------------ *)

Fixpoint layout_fields (offset : Z) (specs : list field_spec) : list field_layout :=
  match specs with
  | [] => []
  | s :: ss =>
      let ao := align_to offset (f_align s) in
      {| fl_offset := ao; fl_size := f_size s; fl_align := f_align s |}
        :: layout_fields (ao + f_size s) ss
  end.

(** Every placed offset is lower-bounded by the start offset (monotonicity). *)
Lemma layout_fields_lower_bound : forall ss offset f,
  (forall s, In s ss -> f_size s >= 0) ->
  In f (layout_fields offset ss) ->
  fl_offset f >= offset.
Proof.
  induction ss as [| s ss' IH]; intros offset f Hsizes Hin; simpl in Hin.
  - contradiction.
  - destruct Hin as [Heq | Hin_rest].
    + subst f. simpl. pose proof (align_to_ge offset (f_align s)). lia.
    + assert (Hs : f_size s >= 0) by (apply Hsizes; left; reflexivity).
      assert (Hrest : forall s0, In s0 ss' -> f_size s0 >= 0)
        by (intros s0 H0; apply Hsizes; right; exact H0).
      pose proof (IH (align_to offset (f_align s) + f_size s) f Hrest Hin_rest).
      pose proof (align_to_ge offset (f_align s)). lia.
Qed.

(** Every placed field is aligned to its declared alignment. *)
Theorem layout_fields_aligned : forall ss offset f,
  In f (layout_fields offset ss) ->
  aligned (fl_offset f) (fl_align f).
Proof.
  induction ss as [| s ss' IH]; intros offset f Hin; simpl in Hin.
  - contradiction.
  - destruct Hin as [Heq | Hin_rest].
    + subst f. simpl. unfold aligned. intro Hpos.
      apply (align_to_aligned offset (f_align s) Hpos Hpos).
    + apply (IH (align_to offset (f_align s) + f_size s) f Hin_rest).
Qed.

(** MAIN: any two distinct placed fields are disjoint (non-overlapping). *)
Theorem layout_fields_disjoint : forall ss offset f1 f2,
  (forall s, In s ss -> f_size s >= 0) ->
  In f1 (layout_fields offset ss) ->
  In f2 (layout_fields offset ss) ->
  f1 <> f2 ->
  fields_disjoint f1 f2.
Proof.
  induction ss as [| s ss' IH]; intros offset f1 f2 Hsizes Hin1 Hin2 Hneq;
    simpl in Hin1, Hin2.
  - contradiction.
  - assert (Hs : f_size s >= 0) by (apply Hsizes; left; reflexivity).
    assert (Hrest : forall s0, In s0 ss' -> f_size s0 >= 0)
      by (intros s0 H0; apply Hsizes; right; exact H0).
    destruct Hin1 as [Heq1 | Hin1r]; destruct Hin2 as [Heq2 | Hin2r].
    + subst f1 f2. exfalso. apply Hneq; reflexivity.
    + subst f1. unfold fields_disjoint. left. simpl.
      pose proof (layout_fields_lower_bound ss'
        (align_to offset (f_align s) + f_size s) f2 Hrest Hin2r). lia.
    + subst f2. unfold fields_disjoint. right. simpl.
      pose proof (layout_fields_lower_bound ss'
        (align_to offset (f_align s) + f_size s) f1 Hrest Hin1r). lia.
    + apply (IH (align_to offset (f_align s) + f_size s) f1 f2 Hrest Hin1r Hin2r Hneq).
Qed.
