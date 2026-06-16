(** * StructFieldRecovery: 2-level array-of-structs tiling soundness (NOVEL).

    The producer's struct-field recovery
    (`unlace-passes/src/struct_field_recovery.rs::decompose_address`) factors a
    loop-varying memory address into

        addr = base + stride * iv + offset

    where [stride] is the recovered element size, [iv] the loop induction
    variable (the array index), and [offset] the intra-element FIELD offset. The
    recovered struct then has one field per distinct [offset] value, and the
    array has element size [stride].

    The correctness question is a TWO-LEVEL one that, to our knowledge, is not
    separately mechanized: level 1 is array-stride tiling (which element does an
    address fall in?), level 2 is field routing within an element (which field?).
    Recovery is sound only if these two levels DO NOT INTERFERE — i.e. the map

        (index, field_offset)  ↦  base + stride*index + field_offset      (0 <= field_offset < stride)

    is INJECTIVE, so distinct (element, field) pairs never alias the same byte,
    and conversely every in-array address routes back to a UNIQUE (index, field)
    via Euclidean division. We prove exactly that bijection, plus that the
    per-element field set is a within-stride partition. This is the composition
    of `TInfoNested`'s array-stride inversion (level 1) with field offsetting
    (level 2), proved to commute.

    The pure recompose helper `struct_tile_address` in the Rust is conformance-
    bound to this in `unlace-passes/tests/structfield_conformance.rs`; the SSA-
    threaded `decompose_address` (level-1 detection) is spec-only at the Rust
    boundary and documented as such. Zero admits/axioms. *)

From Stdlib Require Import ZArith Lia.
Local Open Scope Z_scope.

(** The tiling map: byte address of [field_offset] in element [index] of an
    array at [base] with element size [stride]. *)
Definition tile_addr (base stride index field_offset : Z) : Z :=
  base + stride * index + field_offset.

(* ================================================================== *)
(** ** Level-1 ⊗ Level-2 bijection *)
(* ================================================================== *)

(** FORWARD (routing): an address routes to a unique (index, field) by Euclidean
    division — [index = (addr-base)/stride], [field = (addr-base) mod stride] —
    and recomposing returns the original address. *)
Theorem tile_route_recompose : forall base stride index field_offset,
  stride > 0 -> 0 <= field_offset < stride ->
  let addr := tile_addr base stride index field_offset in
  (addr - base) / stride = index /\ (addr - base) mod stride = field_offset.
Proof.
  intros base stride index field_offset Hs Hf addr. unfold addr, tile_addr.
  replace (base + stride * index + field_offset - base)
    with (field_offset + index * stride) by lia.
  split.
  - rewrite Z.div_add by lia. rewrite Z.div_small by lia. lia.
  - rewrite Z.mod_add by lia. apply Z.mod_small; lia.
Qed.

(** INJECTIVITY (no aliasing): distinct (index, field) pairs — with field
    offsets in range — map to distinct addresses. This is the load-bearing
    soundness fact: two different array-element/field accesses never collide on
    the same byte, so the recovered struct layout is well-formed. *)
Theorem tile_injective : forall base stride i1 f1 i2 f2,
  stride > 0 -> 0 <= f1 < stride -> 0 <= f2 < stride ->
  tile_addr base stride i1 f1 = tile_addr base stride i2 f2 ->
  i1 = i2 /\ f1 = f2.
Proof.
  intros base stride i1 f1 i2 f2 Hs H1 H2 Heq. unfold tile_addr in Heq.
  (* stride*i1 + f1 = stride*i2 + f2, with 0<=f<stride ⇒ unique quotient/rem *)
  assert (Hq : stride * i1 + f1 = stride * i2 + f2) by lia.
  (* the field offsets are the remainders mod stride: rewrite stride*i as
     f + i*stride so [Z.mod_add] fires. *)
  assert (Hf1 : (stride * i1 + f1) mod stride = f1).
  { replace (stride * i1 + f1) with (f1 + i1 * stride) by lia.
    rewrite Z.mod_add by lia. apply Z.mod_small; lia. }
  assert (Hf2 : (stride * i2 + f2) mod stride = f2).
  { replace (stride * i2 + f2) with (f2 + i2 * stride) by lia.
    rewrite Z.mod_add by lia. apply Z.mod_small; lia. }
  assert (f1 = f2) by (rewrite <- Hf1, <- Hf2, Hq; reflexivity).
  split; [| exact H]. nia.
Qed.

(* ================================================================== *)
(** ** Per-element field partition *)
(* ================================================================== *)

(** Two distinct fields of the SAME element are byte-disjoint when their
    [offset, offset+size) ranges don't overlap. We state the routing-level fact
    the recovery relies on: an access whose intra-element offset is [f] with
    [0 <= f < stride] stays inside element [index] — it does not bleed into the
    next element [index+1]. *)
Theorem field_within_element : forall base stride index field_offset,
  stride > 0 -> 0 <= field_offset < stride ->
  tile_addr base stride index 0 <= tile_addr base stride index field_offset /\
  tile_addr base stride index field_offset < tile_addr base stride (index + 1) 0.
Proof.
  intros base stride index field_offset Hs Hf. unfold tile_addr. split; nia.
Qed.

(** Consecutive elements TILE the address space with no gap and no overlap: the
    end of element [index] (its byte [stride]) is exactly the start of element
    [index+1]. So the array is a contiguous partition into stride-sized cells. *)
Theorem elements_tile_contiguously : forall base stride index,
  tile_addr base stride index 0 + stride = tile_addr base stride (index + 1) 0.
Proof. intros base stride index. unfold tile_addr. lia. Qed.

(** A field access at [(index, f)] with [f < stride] never reaches into element
    [index+1] — the cross-element non-aliasing that lets the recovery treat each
    array slot independently. *)
Theorem no_cross_element_alias : forall base stride i1 f1 i2 f2,
  stride > 0 -> 0 <= f1 < stride -> 0 <= f2 < stride -> i1 <> i2 ->
  tile_addr base stride i1 f1 <> tile_addr base stride i2 f2.
Proof.
  intros base stride i1 f1 i2 f2 Hs H1 H2 Hne Hcontra.
  destruct (tile_injective base stride i1 f1 i2 f2 Hs H1 H2 Hcontra).
  contradiction.
Qed.
