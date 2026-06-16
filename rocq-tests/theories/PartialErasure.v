(** * PartialErasure: GRADED information loss (between identity and total).

    [InversionInstances] proved the IDENTITY (exact) instance; [LossyInversion]
    proved the TOTAL-erasure instance. Real compilation sits in between: it
    erases SOME information and keeps the rest. We model a partial-erasure
    lowering on [KnownBits] that keeps the known bits BELOW a cut [k] and erases
    everything at/above [k] (e.g. an optimizer that proves the low alignment
    bits but loses high-bit value info). We prove, with zero admits/axioms:

      1. RECOVERY STAYS SOUND (no false negatives) for any cut [k];
      2. GRADED COMPLETENESS — recovery is COMPLETE on the preserved low-[k]
         prefix (the kept known bits round-trip exactly) but PROVABLY INCOMPLETE
         above [k] (a high known bit is lost), with a concrete witness.

    This is the machine-checked statement that the inversion framework GRADES
    precision loss: it is neither all-or-nothing. The "100% precise" endpoint is
    [k = width] (nothing erased); total erasure is [k = 0]. *)

From Stdlib Require Import ZArith Bool Lia.
From Unlace Require Import Bitvector KnownBits.
Open Scope Z_scope.

(** Partial erasure at cut [k]: keep each mask's low [k] bits, clear the rest.
    [recover_k] rebuilds the [KnownBits] from the surviving low-[k] masks. *)
Definition erase_high (m k : Z) : Z := Z.land m (mask k).

Definition recover_k (a : KB) (k : Z) : KB :=
  mkKB (erase_high (kb_zero a) k) (erase_high (kb_one a) k) (kb_width a).

(* ------------------------------------------------------------------ *)
(** ** Recovery stays sound for any cut *)
(* ------------------------------------------------------------------ *)

(** A bit kept by [erase_high m k] was set in [m]. *)
Lemma erase_high_sub : forall m k n,
  Z.testbit (erase_high m k) n = true -> Z.testbit m n = true.
Proof.
  intros m k n H. unfold erase_high in H.
  rewrite Z.land_spec in H. apply andb_true_iff in H as [Hm _]. exact Hm.
Qed.

(** The partially-erased element is an OVER-approximation of the original: it
    has fewer known bits, so it admits every value the original did. Hence
    recovery never excludes a true value — soundness for any cut [k]. *)
Theorem partial_recovery_sound : forall a k x,
  gamma_kb a x -> gamma_kb (recover_k a k) x.
Proof.
  intros a k x Hg.
  destruct Hg as (Hr & Hone & Hzero).
  unfold gamma_kb, recover_k; simpl. split; [exact Hr | split].
  - (* land x (erase_high one k) = erase_high one k *)
    apply same_bits_eq. intros n Hn.
    rewrite Z.land_spec.
    destruct (Z.testbit (erase_high (kb_one a) k) n) eqn:E.
    + (* kept bit: it was in one, and x has it (from Hone) *)
      apply erase_high_sub in E as Eone.
      assert (Hx : Z.testbit x n = true).
      { apply (f_equal (fun z => Z.testbit z n)) in Hone.
        rewrite Z.land_spec, Eone, andb_true_r in Hone. exact Hone. }
      rewrite Hx. reflexivity.
    + apply andb_false_r.
  - (* land x (erase_high zero k) = 0 *)
    apply same_bits_eq. intros n Hn.
    rewrite Z.land_spec, Z.bits_0.
    destruct (Z.testbit (erase_high (kb_zero a) k) n) eqn:E.
    + apply erase_high_sub in E as Ezero.
      assert (Hx : Z.testbit x n = false).
      { apply (f_equal (fun z => Z.testbit z n)) in Hzero.
        rewrite Z.land_spec, Z.bits_0, Ezero, andb_true_r in Hzero. exact Hzero. }
      rewrite Hx. reflexivity.
    + apply andb_false_r.
Qed.

(* ------------------------------------------------------------------ *)
(** ** Graded completeness: complete below the cut, incomplete above *)
(* ------------------------------------------------------------------ *)

(** COMPLETE BELOW THE CUT: every known bit of the original below [k] survives
    the round-trip exactly. The preserved prefix loses nothing. *)
Theorem partial_complete_below : forall a k n,
  0 <= n < k ->
  Z.testbit (kb_one a) n = true ->
  Z.testbit (kb_one (recover_k a k)) n = true.
Proof.
  intros a k n Hn Hbit. unfold recover_k, erase_high; simpl.
  rewrite Z.land_spec, Hbit, mask_spec_low by lia. reflexivity.
Qed.

Theorem partial_complete_below_zero : forall a k n,
  0 <= n < k ->
  Z.testbit (kb_zero a) n = true ->
  Z.testbit (kb_zero (recover_k a k)) n = true.
Proof.
  intros a k n Hn Hbit. unfold recover_k, erase_high; simpl.
  rewrite Z.land_spec, Hbit, mask_spec_low by lia. reflexivity.
Qed.

(** INCOMPLETE ABOVE THE CUT: a known bit at/above [k] is genuinely lost. Take
    [a = from_constant 255 8] (all 8 bits known-one) and cut [k = 4]: bit 5 is
    known in the original but erased after recovery — the witness. *)
Theorem partial_incomplete_above :
  Z.testbit (kb_one (from_constant 255 8)) 5 = true /\
  Z.testbit (kb_one (recover_k (from_constant 255 8) 4)) 5 = false.
Proof.
  split.
  - (* from_constant 255 8 one-mask = 255 land mask 8 = 255; bit 5 = true *)
    unfold from_constant; simpl. reflexivity.
  - (* recovered one-mask = (255 land mask 8) land mask 4 = 15; bit 5 = false *)
    unfold recover_k, erase_high, from_constant; simpl. reflexivity.
Qed.

(** Therefore the partial round-trip is NOT the identity (it strictly coarsens):
    recovery at cut [4] differs from the original [from_constant 255 8]. *)
Theorem partial_recovery_incomplete :
  recover_k (from_constant 255 8) 4 <> from_constant 255 8.
Proof.
  intro Heq.
  pose proof partial_incomplete_above as [Horig Hrec].
  rewrite Heq in Hrec. rewrite Horig in Hrec. discriminate Hrec.
Qed.
