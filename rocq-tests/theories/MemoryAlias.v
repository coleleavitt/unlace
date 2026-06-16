(** * MemoryAlias: must/may-alias soundness + the Mod/Ref frame theorem.

    The single biggest source of LOST precision in a decompiler is conservative
    memory: if a write to pointer [A] might alias [B], the analyzer must drop
    [B]'s value to Top. This module proves the mathematical lever that RECOVERS
    that precision: when the alias analysis proves [must_not_alias A B], a write
    to [A] provably PRESERVES the byte-exact contents (and hence the abstract
    value / KnownBits) at [B].

    Model: a memory location is a byte range [base, base+size); memory is a
    function from byte addresses to bytes; a write updates exactly the bytes in
    its range. We prove:

      1. must_not_alias ⇒ the two byte sets are strictly disjoint;
      2. must_not_alias and must_alias (overlap) are mutually exclusive;
      3. FRAME: writing into [A] leaves every byte of a disjoint [B] unchanged
         (the precise-slice invalidation), so any per-byte fact about [B]
         survives — precision is preserved across the write.

    Zero admits/axioms. *)

From Stdlib Require Import ZArith Bool Lia.
Open Scope Z_scope.

(** A memory location: a base address and a positive size (byte count). *)
Record mloc := { m_base : Z; m_size : Z }.

(** The set of byte addresses a location covers: [base, base+size). *)
Definition in_loc (l : mloc) (a : Z) : Prop :=
  m_base l <= a < m_base l + m_size l.

(** [must_not_alias]: the ranges are disjoint (one ends at/before the other
    begins). [may_alias]/[must_alias]: they share a byte. *)
Definition must_not_alias (l1 l2 : mloc) : Prop :=
  m_base l1 + m_size l1 <= m_base l2 \/ m_base l2 + m_size l2 <= m_base l1.

Definition overlap (l1 l2 : mloc) : Prop :=
  exists a, in_loc l1 a /\ in_loc l2 a.

(* ------------------------------------------------------------------ *)
(** ** Alias soundness *)
(* ------------------------------------------------------------------ *)

(** must_not_alias ⇒ no common byte (strict disjointness of the byte sets). *)
Theorem must_not_alias_disjoint : forall l1 l2 a,
  must_not_alias l1 l2 -> in_loc l1 a -> ~ in_loc l2 a.
Proof.
  intros l1 l2 a Hna H1 H2.
  unfold must_not_alias, in_loc in *. lia.
Qed.

(** must_not_alias and overlap are mutually exclusive: an analysis cannot
    soundly claim both. *)
Theorem must_not_alias_excludes_overlap : forall l1 l2,
  must_not_alias l1 l2 -> ~ overlap l1 l2.
Proof.
  intros l1 l2 Hna [a [H1 H2]].
  apply (must_not_alias_disjoint l1 l2 a Hna H1 H2).
Qed.

(** must_not_alias is symmetric (aliasing is a symmetric relation). *)
Theorem must_not_alias_sym : forall l1 l2,
  must_not_alias l1 l2 -> must_not_alias l2 l1.
Proof. unfold must_not_alias. intros l1 l2 [H | H]; [right | left]; lia. Qed.

(* ------------------------------------------------------------------ *)
(** ** The Mod/Ref frame theorem *)
(* ------------------------------------------------------------------ *)

(** Memory: byte addresses to byte values. *)
Definition mem := Z -> Z.

(** [write l val m]: store byte [val] into every address of location [l],
    leaving the rest of memory unchanged. (A constant-store model; the frame
    argument is identical for any store payload.) *)
Definition write (l : mloc) (val : Z) (m : mem) : mem :=
  fun a => if (Z.leb (m_base l) a) && (Z.ltb a (m_base l + m_size l))
           then val else m a.

(** Bytes OUTSIDE the written location are untouched. *)
Lemma write_frame_byte : forall l val m a,
  ~ in_loc l a -> write l val m a = m a.
Proof.
  intros l val m a Hout. unfold write, in_loc in *.
  destruct (Z.leb (m_base l) a) eqn:Hle; [| reflexivity].
  destruct (Z.ltb a (m_base l + m_size l)) eqn:Hlt; [| reflexivity].
  apply Z.leb_le in Hle. apply Z.ltb_lt in Hlt. exfalso. apply Hout. lia.
Qed.

(** FRAME THEOREM: a write into a location that MUST-NOT-ALIAS [b] leaves every
    byte of [b] unchanged. Therefore any byte-level fact about [b] — and hence
    its recovered abstract value / KnownBits — survives the write. This is the
    formal statement that proven non-aliasing preserves precision: a disjoint
    store does NOT force [b]'s lattice value to Top. *)
Theorem write_preserves_disjoint : forall a_loc b_loc val m addr,
  must_not_alias a_loc b_loc ->
  in_loc b_loc addr ->
  write a_loc val m addr = m addr.
Proof.
  intros a_loc b_loc val m addr Hna Hb.
  apply write_frame_byte.
  (* addr in b, and a must-not-alias b, so addr not in a *)
  intro Ha. apply (must_not_alias_disjoint a_loc b_loc addr Hna Ha Hb).
Qed.

(** Consequence: the ENTIRE contents of a disjoint location [b] are preserved
    by the write (every byte agrees), so any predicate over [b]'s bytes that
    held before holds after — the precision-preserving frame for whole-location
    facts. *)
Theorem write_preserves_loc : forall a_loc b_loc val m,
  must_not_alias a_loc b_loc ->
  forall addr, in_loc b_loc addr -> write a_loc val m addr = m addr.
Proof.
  intros a_loc b_loc val m Hna addr Hb.
  apply (write_preserves_disjoint a_loc b_loc val m addr Hna Hb).
Qed.
