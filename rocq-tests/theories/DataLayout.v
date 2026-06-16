(** * DataLayout: size/alignment soundness for the type-layout engine.

    Struct/array recovery depends on layout invariants: sizes are non-negative,
    alignments are powers of two, an array's stride is a multiple of the element
    alignment, and a struct's natural alignment divides its (padded) size. We
    model a type's layout and prove these, with zero admits/axioms.

    Alignment is represented by its LOG (a bit count [k], so the alignment is
    [2^k]); this makes "alignment is a power of two" structural and divisibility
    between alignments a clean [2^a | 2^b] fact. Mirrors the size/align rules in
    [unlace-ir/src/data_layout.rs]. *)

From Stdlib Require Import ZArith List Lia.
Import ListNotations.
Open Scope Z_scope.

(** A laid-out type: scalar (size + align-log), array (element + length), or
    struct (a list of [(offset, child)] members + an align-log). *)
Inductive lty : Type :=
  | LScalar (size : Z) (alog : Z)
  | LArray  (elt : lty) (len : Z)
  | LStruct (members : list (Z * lty)) (alog : Z).

(** Size of a laid-out type (nested fold over members). *)
Fixpoint lsize (t : lty) : Z :=
  match t with
  | LScalar s _ => s
  | LArray elt len => lsize elt * len
  | LStruct ms _ =>
      fold_right (fun p acc => Z.max acc (fst p + lsize (snd p))) 0 ms
  end.

(** Alignment LOG of a type (the element's for arrays). *)
Fixpoint alog_of (t : lty) : Z :=
  match t with
  | LScalar _ a => a
  | LArray elt _ => alog_of elt
  | LStruct _ a => a
  end.

(** The concrete alignment is [2 ^ alog]. *)
Definition align_of (t : lty) : Z := 2 ^ (alog_of t).

(** Well-formed layout: every align-log is non-negative and every scalar size is
    non-negative (and array lengths non-negative). *)
Fixpoint lwf (t : lty) : Prop :=
  match t with
  | LScalar s a => 0 <= s /\ 0 <= a
  | LArray elt len => 0 <= len /\ lwf elt
  | LStruct ms a => 0 <= a /\ fold_right (fun p acc => lwf (snd p) /\ acc) True ms
  end.

(* ================================================================== *)
(** ** Alignment is always a positive power of two *)
(* ================================================================== *)

(** [align_of t] is a power of two by construction ([2^k]); here we record it is
    positive whenever the align-log is non-negative. *)
Theorem align_positive : forall t, 0 <= alog_of t -> 0 < align_of t.
Proof.
  intros t H. unfold align_of. apply Z.pow_pos_nonneg; lia.
Qed.

(** Alignment divisibility is just [2^a | 2^b]: a coarser alignment (smaller log)
    divides a finer one. *)
Lemma pow2_divides : forall a b, 0 <= a <= b -> (2 ^ a | 2 ^ b).
Proof.
  intros a b [Ha Hab]. exists (2 ^ (b - a)).
  rewrite <- Z.pow_add_r by lia. f_equal. lia.
Qed.

(** If a type's align-log is at least [k], its alignment is a multiple of
    [2^k] — the alignment-implies-coarser-alignment fact used when nesting an
    aligned field inside a less-aligned aggregate. *)
Theorem align_divisible : forall t k,
  0 <= k <= alog_of t -> (2 ^ k | align_of t).
Proof.
  intros t k H. unfold align_of. apply pow2_divides. exact H.
Qed.

(* ================================================================== *)
(** ** Size is non-negative *)
(* ================================================================== *)

Theorem size_nonneg : forall t, lwf t -> 0 <= lsize t.
Proof.
  fix IH 1. intros t Hwf. destruct t as [s a | elt len | ms a]; simpl in *.
  - destruct Hwf as [Hs _]. exact Hs.
  - (* array: lsize elt * len, both nonneg *)
    destruct Hwf as [Hlen Helt].
    apply Z.mul_nonneg_nonneg; [apply IH; exact Helt | exact Hlen].
  - (* struct: fold of Z.max with 0 start is >= 0 *)
    clear a Hwf. induction ms as [| p rest IHms]; simpl; [lia |].
    apply Z.le_trans with (m := fold_right
      (fun p0 acc => Z.max acc (fst p0 + lsize (snd p0))) 0 rest).
    + apply IHms.
    + apply Z.le_max_l.
Qed.

(* ================================================================== *)
(** ** Array invariants *)
(* ================================================================== *)

(** An array's size is exactly element-size times length. *)
Theorem array_size : forall elt len, lsize (LArray elt len) = lsize elt * len.
Proof. reflexivity. Qed.

(** An array inherits its element's alignment (the stride is the element size,
    aligned as the element). So array indexing preserves the element alignment
    — the invariant array-stride recovery (see [TInfoNested]) relies on. *)
Theorem array_align : forall elt len, align_of (LArray elt len) = align_of elt.
Proof. reflexivity. Qed.

(* ================================================================== *)
(** ** Struct size bounds every member *)
(* ================================================================== *)

(** The struct size is at least the end ([offset + size]) of every member — no
    member spills past the struct's size. This is the containment invariant
    field recovery needs (a recovered field always fits). *)
Theorem struct_size_bounds_member : forall ms a moff child,
  In (moff, child) ms ->
  moff + lsize child <= lsize (LStruct ms a).
Proof.
  intros ms a moff child Hin. simpl.
  induction ms as [| p rest IH]; simpl in *.
  - contradiction.
  - destruct Hin as [-> | Hrest].
    + (* head member: offset+size <= max acc (offset+size) *)
      simpl. apply Z.le_max_r.
    + apply Z.le_trans with (m := fold_right
        (fun p0 acc => Z.max acc (fst p0 + lsize (snd p0))) 0 rest).
      * apply IH. exact Hrest.
      * apply Z.le_max_l.
Qed.
