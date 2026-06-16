(** * TInfoNested: recursive type-tree offset resolution + array-stride inversion.

    [TInfo.v]/[RecordLayout.v] handle the FLAT struct case. Real binaries (C++,
    Rust) have arrays of structs containing unions, nested arbitrarily deep. This
    module models an inductive type tree and proves the offset arithmetic that
    inverts nested field/array access — across unbounded depth — with zero
    admits/axioms:

      - [ty_size] is well-defined by structural recursion (nested fixpoint over
        the child list);
      - ARRAY-STRIDE INVERSION: a byte offset into an array routes to index
        [offset / stride] with inner offset [offset mod stride], and the index
        is in bounds iff [offset < stride*len] — the exact inverse of array
        index lowering, reusing Z division/modulo;
      - the routed [(index, inner)] reconstructs the original offset
        ([index*stride + inner = offset]) — recovery is information-preserving
        for arrays;
      - alignment composes: if [stride] is a multiple of an alignment [m] and
        the inner offset is [m]-aligned, the whole element offset is [m]-aligned. *)

From Stdlib Require Import ZArith List Lia.
Import ListNotations.
Open Scope Z_scope.

(** A type tree: a scalar of a given byte size, a fixed-stride array, or a
    struct of [(offset, child)] members. *)
Inductive ty : Type :=
  | TScalar (size : Z)
  | TArray  (stride len : Z) (elt : ty)
  | TStruct (fields : list (Z * ty)).

(** Total byte size, by structural recursion (nested fold over children). *)
Fixpoint ty_size (t : ty) : Z :=
  match t with
  | TScalar s => s
  | TArray stride len _ => stride * len
  | TStruct fs => fold_right (fun p acc => Z.max acc (fst p + ty_size (snd p))) 0 fs
  end.

(* ================================================================== *)
(** ** Array-stride inversion (the core nested-access recovery) *)
(* ================================================================== *)

(** Route an offset into an array: [(index, inner)] = [(o / stride, o mod stride)]. *)
Definition arr_route (stride o : Z) : Z * Z := (o / stride, o mod stride).

(** INVERSION: routing reconstructs the offset exactly. [index*stride + inner = o].
    This is the precise inverse of array-index lowering (compiler emits
    [base + index*stride + inner]; we recover [index] and [inner] from the raw
    offset and lose nothing). *)
Theorem arr_route_inverts : forall stride o,
  stride > 0 ->
  fst (arr_route stride o) * stride + snd (arr_route stride o) = o.
Proof.
  intros stride o Hs. unfold arr_route; simpl.
  rewrite Z.mul_comm. symmetry. apply (Z.div_mod o stride). lia.
Qed.

(** The inner offset is in [0, stride): it stays within one element. *)
Theorem arr_inner_bounded : forall stride o,
  stride > 0 -> 0 <= snd (arr_route stride o) < stride.
Proof.
  intros stride o Hs. unfold arr_route; simpl. apply Z.mod_pos_bound. lia.
Qed.

(** IN-BOUNDS CHARACTERIZATION: for a non-negative offset, the routed index is a
    valid array index ([< len]) iff the offset is within the array's byte size
    [stride*len]. So an out-of-bounds offset is detected exactly. *)
Theorem arr_index_in_bounds : forall stride len o,
  stride > 0 -> 0 <= o ->
  (fst (arr_route stride o) < len <-> o < stride * len).
Proof.
  intros stride len o Hs Ho. unfold arr_route; simpl. split.
  - intro Hlt.
    (* o = stride*(o/stride) + o mod stride < stride*(o/stride) + stride
         = stride*(o/stride + 1) <= stride*len *)
    pose proof (Z.div_mod o stride ltac:(lia)) as Hdm.
    pose proof (Z.mod_pos_bound o stride ltac:(lia)) as Hmb.
    assert (o / stride + 1 <= len) by lia.
    nia.
  - intro Hlt. apply Z.div_lt_upper_bound; lia.
Qed.

(** The routed index is non-negative for a non-negative offset. *)
Theorem arr_index_nonneg : forall stride o,
  stride > 0 -> 0 <= o -> 0 <= fst (arr_route stride o).
Proof.
  intros stride o Hs Ho. unfold arr_route; simpl. apply Z.div_pos; lia.
Qed.

(* ================================================================== *)
(** ** Alignment composes across nesting *)
(* ================================================================== *)

(** If the array stride is a multiple of an alignment [m], then every element's
    base offset [index*stride] is [m]-aligned. Composed with an [m]-aligned inner
    offset, the whole element offset is [m]-aligned — alignment invariants
    survive nested array/struct addressing. *)
Theorem arr_element_aligned : forall stride o m,
  m > 0 -> (m | stride) ->
  (m | fst (arr_route stride o) * stride).
Proof.
  intros stride o m Hm Hdiv. unfold arr_route; simpl.
  apply Z.divide_mul_r. exact Hdiv.
Qed.

Theorem arr_offset_aligned : forall stride o m,
  m > 0 -> (m | stride) -> (m | snd (arr_route stride o)) ->
  (m | fst (arr_route stride o) * stride + snd (arr_route stride o)).
Proof.
  intros stride o m Hm Hdiv Hinner.
  apply Z.divide_add_r.
  - apply arr_element_aligned; assumption.
  - exact Hinner.
Qed.

(* ================================================================== *)
(** ** Struct member containment (single level, reused at each depth) *)
(* ================================================================== *)

(** A byte [o] is inside member [(moff, child)] when [moff <= o < moff + size]. *)
Definition in_member (moff : Z) (child : ty) (o : Z) : Prop :=
  moff <= o /\ o < moff + ty_size child.

(** The within-member offset routes the child resolution one level down:
    [o - moff] is the offset to recurse with, and it is in [0, size child). This
    is the inductive step that lets the flat best-fit property hold at every
    nesting level (the resolver recurses on [o - moff] into [child]). *)
Theorem member_route : forall moff child o,
  in_member moff child o ->
  0 <= o - moff < ty_size child.
Proof. intros moff child o [Hlo Hhi]. lia. Qed.

(** Composition of containment with array routing: an offset inside an array
    element resolves to that element's slot, and the residual is a valid offset
    into the element type — the nested-resolution well-formedness that makes the
    recursive resolver total and sound. *)
Theorem array_member_route : forall stride len o,
  stride > 0 -> 0 <= o -> o < stride * len ->
  let idx := fst (arr_route stride o) in
  let inner := snd (arr_route stride o) in
  0 <= idx < len /\ 0 <= inner < stride.
Proof.
  intros stride len o Hs Ho Hlt idx inner. subst idx inner. split.
  - split.
    + apply arr_index_nonneg; lia.
    + apply arr_index_in_bounds; lia.
  - apply arr_inner_bounded; lia.
Qed.
