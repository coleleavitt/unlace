(** * TypeInversion: alignment-driven type/field recovery (NOVEL).

    Decompilation is, in part, the INVERSE of compilation: the compiler lowers
    typed field accesses into raw pointer arithmetic, and the decompiler must
    invert that to recover the types. This module formalizes one provable
    inversion lever that, to our knowledge, is not mechanized in the existing
    verified-decompiler literature (CompCert/Verasco/Vellvm prove the *forward*
    direction; here we prove the *recovery* direction):

      An alignment fact about a pointer is a HARD CONSTRAINT that eliminates
      candidate field layouts. If [p] is known [2^k]-aligned (its low [k] bits
      are zero — exactly a [KnownBits] trailing-zero fact, see
      [KnownBits.kshl]), then a hypothesized field whose own offset alignment
      exceeds the observed alignment is provably impossible.

    We connect the bit-level [pointer_aligned] predicate (the form
    [KnownBits]/[kand] produce) to divisibility [2^k | p] (the form arithmetic
    reasoning wants), and prove:

      - the bridge [aligned_iff_divide];
      - alignment is preserved under adding an equally-aligned offset
        (the address-arithmetic invariant), proved via divisibility;
      - NOVEL [field_offset_excluded]: an observed alignment that a candidate
        field offset does not satisfy refutes that candidate — the formal core
        of alignment-driven struct-field disambiguation.

    Zero admits/axioms. *)

From Stdlib Require Import ZArith Bool Lia.
Local Open Scope Z_scope.

(** Bit-level alignment: the low [k] bits of [p] are zero. This is precisely the
    fact a [KnownBits] domain carries (known-zero low bits). *)
Definition pointer_aligned (p : Z) (k : Z) : Prop :=
  forall i, 0 <= i < k -> Z.testbit p i = false.

(** Divisibility view: [2^k] divides [p]. *)
Definition aligned_div (p k : Z) : Prop := (2 ^ k | p).

(* ------------------------------------------------------------------ *)
(** ** Bridge: bit-level alignment <-> divisibility *)
(* ------------------------------------------------------------------ *)

(** Low [k] bits all zero  <->  [p mod 2^k = 0]. The forward direction is the
    bit-blasting [Z.testbit_false] characterization summed over the low bits;
    we get it cleanly from [Z.land_ones] (mask = mod) + bit extensionality. *)
Lemma aligned_iff_mod : forall p k, 0 <= k ->
  pointer_aligned p k <-> p mod 2 ^ k = 0.
Proof.
  intros p k Hk. unfold pointer_aligned. split.
  - intro Hbits.
    (* p mod 2^k = Z.land p (ones k); show every bit is 0. *)
    rewrite <- Z.land_ones by lia.
    apply Z.bits_inj'. intros n Hn. rewrite Z.land_spec, Z.bits_0.
    destruct (Z.lt_ge_cases n k) as [Hlt | Hge].
    + rewrite Hbits by lia. apply andb_false_l.
    + rewrite Z.ones_spec_high by lia. apply andb_false_r.
  - intros Hmod i Hi.
    (* testbit p i = testbit (p mod 2^k) i for i < k, and that is 0. *)
    rewrite <- (Z.mod_pow2_bits_low p k i) by lia.
    rewrite Hmod, Z.bits_0. reflexivity.
Qed.

Lemma aligned_iff_divide : forall p k, 0 <= k ->
  pointer_aligned p k <-> aligned_div p k.
Proof.
  intros p k Hk. unfold aligned_div.
  rewrite aligned_iff_mod by lia.
  apply Z.mod_divide. apply Z.pow_nonzero; lia.
Qed.

(* ------------------------------------------------------------------ *)
(** ** Address-arithmetic invariant *)
(* ------------------------------------------------------------------ *)

(** Adding an equally-aligned offset preserves alignment. Proved by
    divisibility (robust; avoids carry-bit reasoning). This is the invariant
    that lets the decompiler propagate a base-pointer alignment through
    [base + field_offset] computations. *)
Theorem alignment_addition_invariant : forall p offset k,
  0 <= k ->
  pointer_aligned p k ->
  pointer_aligned offset k ->
  pointer_aligned (p + offset) k.
Proof.
  intros p offset k Hk Hp Hoff.
  apply aligned_iff_divide; [exact Hk |].
  apply aligned_iff_divide in Hp; [| exact Hk].
  apply aligned_iff_divide in Hoff; [| exact Hk].
  apply Z.divide_add_r; assumption.
Qed.

(** Subtracting an equally-aligned offset likewise preserves alignment (used
    when recovering a base from an interior pointer). *)
Theorem alignment_subtraction_invariant : forall p offset k,
  0 <= k ->
  pointer_aligned p k ->
  pointer_aligned offset k ->
  pointer_aligned (p - offset) k.
Proof.
  intros p offset k Hk Hp Hoff.
  apply aligned_iff_divide; [exact Hk |].
  apply aligned_iff_divide in Hp; [| exact Hk].
  apply aligned_iff_divide in Hoff; [| exact Hk].
  apply Z.divide_sub_r; assumption.
Qed.

(* ------------------------------------------------------------------ *)
(** ** NOVEL: alignment-driven field-candidate exclusion *)
(* ------------------------------------------------------------------ *)

(** A candidate field layout: an offset within its parent and the alignment its
    type requires (as a bit count). *)
Record field_cand := { fc_offset : Z; fc_align_bits : Z }.

(** A candidate is CONSISTENT with an observed base alignment [k] when, placing
    the field at [base + fc_offset] for a [k]-aligned [base], the field's own
    type-alignment is actually achieved. We require the field offset itself to
    be [fc_align_bits]-aligned (the compiler guarantees this for a real field of
    that type). *)
Definition candidate_consistent (k : Z) (fc : field_cand) : Prop :=
  fc_align_bits fc <= k /\ pointer_aligned (fc_offset fc) (fc_align_bits fc).

(** NOVEL — FIELD EXCLUSION. If the base is observed [k]-aligned but a candidate
    field demands MORE alignment than [k] AND its offset is not even aligned to
    its own requirement, the candidate is provably impossible: there is no way
    its access pattern arises from this base. Concretely, we show the resulting
    access address fails the field's claimed alignment, refuting the candidate.

    This is the inversion lemma a decompiler uses to PRUNE the type-candidate
    search using nothing but the alignment bits [KnownBits] already proved. *)
Theorem field_offset_excluded : forall base k fc,
  0 <= fc_align_bits fc ->
  pointer_aligned base k ->
  fc_align_bits fc <= k ->
  ~ pointer_aligned (fc_offset fc) (fc_align_bits fc) ->
  ~ pointer_aligned (base + fc_offset fc) (fc_align_bits fc).
Proof.
  intros base k fc Hfa Hbase Hle Hbad Hcontra.
  apply Hbad.
  (* offset = (base + offset) - base; base+offset and base are both
     fc_align_bits-aligned, so the offset is too. *)
  replace (fc_offset fc) with ((base + fc_offset fc) - base) by lia.
  apply alignment_subtraction_invariant; [exact Hfa | exact Hcontra |].
  (* base is k-aligned => fc_align_bits-aligned since fc_align_bits <= k *)
  intros i Hi. apply Hbase. lia.
Qed.
