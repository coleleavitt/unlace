(** * LossyInversion: decompilation-as-inversion under GENUINE information loss.

    The [InversionInstances] module instantiated the Galois-connection framework
    with the IDENTITY lowering — the exact-recovery endpoint. The honest test of
    the framework is a lowering that genuinely ERASES information, modelling what
    a real compiler does. Here we model the extreme case on the real [KnownBits]
    domain: compilation keeps only the operand WIDTH and discards every
    known-bit fact; decompilation can then recover only the fully-unknown value
    of that width.

    We prove, with zero admits/axioms:

      1. RECOVERY STAYS SOUND under total information loss — recovering [unknown]
         never lies: the true value is always in its concretization. (Soundness
         is robust; that is the whole point of over-approximation.)
      2. COMPLETENESS PROVABLY FAILS — there is a concrete witness
         ([from_constant 5 8]) where the lossy round-trip strictly coarsens the
         type. The framework therefore *detects exactly where* precision was
         lost, rather than silently claiming success.

    This is the machine-checked statement that the decompiler is sound but not
    complete under lossy compilation — and pinpoints the loss. *)

From Stdlib Require Import ZArith Bool Lia.
From Unlace Require Import Bitvector KnownBits.
Open Scope Z_scope.

(** Abstract precision order on [KnownBits]: gamma-inclusion. [kle a b] means
    "a is at least as precise as b" (a's concretization is contained in b's). *)
Definition kle (a b : KB) : Prop := forall x, gamma_kb a x -> gamma_kb b x.

Lemma kle_refl : forall a, kle a a.
Proof. unfold kle. auto. Qed.

Lemma kle_trans : forall a b c, kle a b -> kle b c -> kle a c.
Proof. unfold kle. auto. Qed.

(** The LOSSY compilation: keep only the width. *)
Definition lower (a : KB) : width := kb_width a.

(** The DECOMPILER: from a width alone, the best recoverable fact is "unknown". *)
Definition recover (w : width) : KB := unknown w.

(** [unknown] is the top (least precise) element among values of its width: any
    KB whose values are width-[w]-canonical is below [unknown w]. *)
Lemma kle_to_unknown : forall a,
  (forall x, gamma_kb a x -> in_range (kb_width a) x) ->
  kle a (unknown (kb_width a)).
Proof.
  unfold kle. intros a Hin x Hgx.
  unfold gamma_kb, unknown; simpl.
  split; [apply (Hin x Hgx) | split; apply Z.land_0_r].
Qed.

(** Every [gamma_kb] value is in range (the canonical-rep component). *)
Lemma gamma_kb_in_range : forall a x, gamma_kb a x -> in_range (kb_width a) x.
Proof. intros a x (Hr & _ & _). exact Hr. Qed.

(* ================================================================== *)
(** ** Recovery stays sound under total information loss *)
(* ================================================================== *)

(** The lossy round-trip [recover (lower a) = unknown (kb_width a)] is an
    over-approximation of [a]: [a ⊑ recover(lower a)]. So the decompiler's
    recovered fact never excludes a true value — soundness survives full
    erasure. *)
Theorem lossy_recovery_sound : forall a,
  kle a (recover (lower a)).
Proof.
  intro a. unfold recover, lower.
  apply kle_to_unknown. apply gamma_kb_in_range.
Qed.

(** Stated at the value level (the [recovery_sound] shape): every concrete
    value of [a] is still admitted after the lossy round-trip. *)
Theorem lossy_recovery_sound_values : forall a x,
  gamma_kb a x -> gamma_kb (recover (lower a)) x.
Proof. intros a x. apply lossy_recovery_sound. Qed.

(* ================================================================== *)
(** ** Completeness provably fails — and the witness is exhibited *)
(* ================================================================== *)

(** A completely-known constant carries real information that the lossy
    round-trip destroys: [from_constant 5 8] is strictly more precise than
    [unknown 8 = recover (lower (from_constant 5 8))]. We exhibit the value [2],
    which the recovered [unknown 8] admits but the original constant [5] does
    not — so the round-trip is NOT an equality, i.e. recovery is incomplete. *)
Theorem lossy_recovery_incomplete :
  recover (lower (from_constant 5 8)) <> from_constant 5 8.
Proof.
  unfold recover, lower, from_constant, unknown.
  (* Equality of records forces equality of the one-mask field:
     0 = Z.land 5 (mask 8). Refute by reading bit 0. *)
  intro Heq. injection Heq as Hzero Hone.
  (* Coq computes the one-mask field: [Z.land 5 (mask 8) = 5], so [Hone : 0 = 5].*)
  discriminate Hone.
Qed.

(** The semantic witness of the loss: value [2] is admitted by the recovered
    [unknown 8] but not by the true constant [5]. This *localizes* the lost
    precision — exactly what a precision audit needs. *)
Theorem lossy_loss_witness :
  gamma_kb (recover (lower (from_constant 5 8))) 2 /\
  ~ gamma_kb (from_constant 5 8) 2.
Proof.
  split.
  - (* 2 in gamma(unknown 8): in range and trivially consistent (masks are 0) *)
    unfold recover, lower, from_constant, unknown.
    unfold gamma_kb; simpl. split; [| split].
    + unfold in_range. change (2 ^ 8) with 256. lia.
    + reflexivity.
    + reflexivity.
  - (* 2 not in gamma(from_constant 5 8): bit 0 differs (5 has it, 2 doesn't) *)
    unfold from_constant; simpl. intros (_ & Hone & _).
    (* Hone : Z.land 2 (Z.land 5 (mask 8)) = Z.land 5 (mask 8); Coq computes
       Z.land 5 (mask 8) = 5 and Z.land 2 5 = 0, so Hone : 0 = 5. *)
    discriminate Hone.
Qed.
