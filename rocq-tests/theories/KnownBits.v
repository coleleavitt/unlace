(** * KnownBits: abstract-domain soundness vs concrete bitvector semantics.

    Mirrors [crates/unlace-ir/src/known_bits.rs], which itself mirrors LLVM's
    [llvm/Support/KnownBits.h]. A [KnownBits] tracks, per bit position, whether
    the bit is known-0, known-1, or unknown, via two masks:

      - [zero]: set bit = "this position is known to be 0"
      - [one] : set bit = "this position is known to be 1"

    Concretization: a concrete width-[w] value [x] is described by abstract
    element [a] iff every known-one bit of [a] is 1 in [x] and every known-zero
    bit of [a] is 0 in [x]:

      gamma_kb a x  :=  (x AND a.one) = a.one  /\  (x AND a.zero) = 0     (mod 2^w)

    We prove the abstract transfer functions are SOUND: for concrete [x] in
    gamma_kb a and [y] in gamma_kb b, the concrete result is in gamma_kb of the
    abstract result. The proofs are by bit-blasting: rewrite through
    [Z.land_spec]/[Z.lor_spec]/[Z.lxor_spec] and conclude per-bit with [btauto]
    / boolean reasoning, then lift to equality with [Z.bits_inj'].

    Mirrors: [KnownBits::and], [::or], [::xor], [::from_constant],
             [::has_conflict], [::is_constant], [::is_zero]. *)

From Stdlib Require Import ZArith Bool Lia Btauto.
From Unlace Require Import Bitvector.
Open Scope Z_scope.

(** Abstract element: two masks + a width. Mirrors the Rust struct fields. *)
Record KB := mkKB { kb_zero : Z; kb_one : Z; kb_width : width }.

(** [from_constant v w] : the fully-known abstract value for constant [v].
    Mirrors [KnownBits::from_constant]: zero = (!v) & mask, one = v & mask. *)
Definition from_constant (v : Z) (w : width) : KB :=
  mkKB (Z.land (Z.lnot v) (mask w)) (Z.land v (mask w)) w.

(** [unknown w] : fully-unknown. Mirrors [KnownBits::unknown]. *)
Definition unknown (w : width) : KB := mkKB 0 0 w.

(** Concretization. We require [x] to be a canonical width-[w] value and to
    agree with the known bits. (Working modulo the width mask everywhere lets
    the bit-blasting proofs ignore bits >= w.) *)
Definition gamma_kb (a : KB) (x : Z) : Prop :=
  in_range (kb_width a) x /\
  Z.land x (kb_one a) = kb_one a /\
  Z.land x (kb_zero a) = 0.

(** [has_conflict a] : a bit is both known-0 and known-1. Mirrors
    [KnownBits::has_conflict]. *)
Definition has_conflict (a : KB) : Prop := Z.land (kb_zero a) (kb_one a) <> 0.

(* ------------------------------------------------------------------ *)
(** ** Transfer functions, mirrored arm-for-arm *)
(* ------------------------------------------------------------------ *)

(** [kand]: mirrors [KnownBits::and].
    zero = a.zero | b.zero ; one = a.one & b.one. *)
Definition kand (a b : KB) : KB :=
  mkKB (Z.lor (kb_zero a) (kb_zero b))
       (Z.land (kb_one a) (kb_one b))
       (kb_width a).

(** [kor]: mirrors [KnownBits::or].
    zero = a.zero & b.zero ; one = a.one | b.one. *)
Definition kor (a b : KB) : KB :=
  mkKB (Z.land (kb_zero a) (kb_zero b))
       (Z.lor (kb_one a) (kb_one b))
       (kb_width a).

(** [kxor]: mirrors [KnownBits::xor], including the [both_known] gate.
    both_known = (a.zero|a.one) & (b.zero|b.one) & mask
    one  = ((a.one & b.zero) | (a.zero & b.one)) & both_known
    zero = ((a.one & b.one) | (a.zero & b.zero)) & both_known *)
Definition kxor (a b : KB) : KB :=
  let m := mask (kb_width a) in
  let both_known := Z.land (Z.land (Z.lor (kb_zero a) (kb_one a))
                                   (Z.lor (kb_zero b) (kb_one b))) m in
  mkKB (Z.land (Z.lor (Z.land (kb_one a) (kb_one b))
                      (Z.land (kb_zero a) (kb_zero b))) both_known)
       (Z.land (Z.lor (Z.land (kb_one a) (kb_zero b))
                      (Z.land (kb_zero a) (kb_one b))) both_known)
       (kb_width a).

(* ================================================================== *)
(** ** Bit-level helper: characterize gamma_kb per bit *)
(* ================================================================== *)

(** gamma_kb [a] [x], read at a single bit [n]:
      - if [a.one] has bit n set, then [x] has bit n set;
      - if [a.zero] has bit n set, then [x] has bit n clear. *)
Lemma gamma_kb_bit_one : forall a x n,
  gamma_kb a x -> Z.testbit (kb_one a) n = true -> Z.testbit x n = true.
Proof.
  intros a x n (_ & Hone & _) Hb.
  apply (f_equal (fun z => Z.testbit z n)) in Hone.
  rewrite Z.land_spec in Hone. rewrite Hb in Hone.
  rewrite andb_true_r in Hone. exact Hone.
Qed.

Lemma gamma_kb_bit_zero : forall a x n,
  gamma_kb a x -> Z.testbit (kb_zero a) n = true -> Z.testbit x n = false.
Proof.
  intros a x n (_ & _ & Hzero) Hb.
  apply (f_equal (fun z => Z.testbit z n)) in Hzero.
  rewrite Z.land_spec in Hzero. rewrite Hb, Z.bits_0 in Hzero.
  rewrite andb_true_r in Hzero. exact Hzero.
Qed.

(** Reassemble a gamma_kb fact from per-bit facts. The [in_range] component is
    supplied separately (transfer functions preserve width via the concrete
    operation staying in range). *)
Lemma gamma_kb_intro : forall a x,
  in_range (kb_width a) x ->
  (forall n, 0 <= n -> Z.testbit (kb_one a) n = true -> Z.testbit x n = true) ->
  (forall n, 0 <= n -> Z.testbit (kb_zero a) n = true -> Z.testbit x n = false) ->
  gamma_kb a x.
Proof.
  intros a x Hr Hone Hzero. split; [exact Hr | split].
  - apply same_bits_eq. intros n Hn.
    rewrite Z.land_spec. destruct (Z.testbit (kb_one a) n) eqn:E.
    + rewrite (Hone n Hn E). reflexivity.
    + apply andb_false_r.
  - apply same_bits_eq. intros n Hn.
    rewrite Z.land_spec, Z.bits_0. destruct (Z.testbit (kb_zero a) n) eqn:E.
    + rewrite (Hzero n Hn E). reflexivity.
    + apply andb_false_r.
Qed.

(* ================================================================== *)
(** ** Soundness of AND *)
(* ================================================================== *)

Theorem kand_sound : forall a b x y,
  kb_width a = kb_width b ->
  in_range (kb_width a) (Z.land x y) ->
  gamma_kb a x -> gamma_kb b y -> gamma_kb (kand a b) (Z.land x y).
Proof.
  intros a b x y Hw Hr Ha Hb.
  apply gamma_kb_intro; simpl.
  - exact Hr.
  - (* one bit: (a.one & b.one) set => x&y set *)
    intros n Hn Hbit. rewrite Z.land_spec in Hbit.
    apply andb_true_iff in Hbit as [H1 H2].
    rewrite Z.land_spec.
    rewrite (gamma_kb_bit_one a x n Ha H1), (gamma_kb_bit_one b y n Hb H2).
    reflexivity.
  - (* zero bit: (a.zero | b.zero) set => x&y clear *)
    intros n Hn Hbit. rewrite Z.lor_spec in Hbit.
    rewrite Z.land_spec.
    apply orb_true_iff in Hbit as [H1 | H1].
    + rewrite (gamma_kb_bit_zero a x n Ha H1). reflexivity.
    + rewrite (gamma_kb_bit_zero b y n Hb H1), andb_false_r. reflexivity.
Qed.

(* ================================================================== *)
(** ** Soundness of OR *)
(* ================================================================== *)

Theorem kor_sound : forall a b x y,
  kb_width a = kb_width b ->
  in_range (kb_width a) (Z.lor x y) ->
  gamma_kb a x -> gamma_kb b y -> gamma_kb (kor a b) (Z.lor x y).
Proof.
  intros a b x y Hw Hr Ha Hb.
  apply gamma_kb_intro; simpl.
  - exact Hr.
  - (* one bit: (a.one | b.one) set => x|y set *)
    intros n Hn Hbit. rewrite Z.lor_spec in Hbit.
    rewrite Z.lor_spec.
    apply orb_true_iff in Hbit as [H1 | H1].
    + rewrite (gamma_kb_bit_one a x n Ha H1). reflexivity.
    + rewrite (gamma_kb_bit_one b y n Hb H1), orb_true_r. reflexivity.
  - (* zero bit: (a.zero & b.zero) set => x|y clear *)
    intros n Hn Hbit. rewrite Z.land_spec in Hbit.
    apply andb_true_iff in Hbit as [H1 H2].
    rewrite Z.lor_spec.
    rewrite (gamma_kb_bit_zero a x n Ha H1), (gamma_kb_bit_zero b y n Hb H2).
    reflexivity.
Qed.

(* ================================================================== *)
(** ** Soundness of XOR *)
(* ================================================================== *)

(** The XOR transfer is only informative where BOTH inputs are known at a
    position (the [both_known] gate). The soundness proof confirms that gate is
    correct: wherever both_known has bit n, the abstract result's known bit
    matches xorb of the two concrete bits. *)
Theorem kxor_sound : forall a b x y,
  kb_width a = kb_width b ->
  in_range (kb_width a) (Z.lxor x y) ->
  gamma_kb a x -> gamma_kb b y -> gamma_kb (kxor a b) (Z.lxor x y).
Proof.
  intros a b x y Hw Hr Ha Hb.
  apply gamma_kb_intro; unfold kxor; simpl.
  - exact Hr.
  - (* one bit *)
    intros n Hn Hbit.
    rewrite Z.land_spec in Hbit. apply andb_true_iff in Hbit as [Hsel Hbk].
    (* both_known true at n: both inputs known at n *)
    rewrite !Z.land_spec, !Z.lor_spec in Hbk.
    apply andb_true_iff in Hbk as [Hk Hmask].
    apply andb_true_iff in Hk as [HkA HkB].
    rewrite Z.lor_spec, !Z.land_spec in Hsel.
    rewrite Z.lxor_spec.
    (* Case on which selector fired: (a.one&b.zero) or (a.zero&b.one) *)
    apply orb_true_iff in Hsel as [Hs | Hs];
      apply andb_true_iff in Hs as [Hs1 Hs2].
    + rewrite (gamma_kb_bit_one a x n Ha Hs1), (gamma_kb_bit_zero b y n Hb Hs2).
      reflexivity.
    + rewrite (gamma_kb_bit_zero a x n Ha Hs1), (gamma_kb_bit_one b y n Hb Hs2).
      reflexivity.
  - (* zero bit *)
    intros n Hn Hbit.
    rewrite Z.land_spec in Hbit. apply andb_true_iff in Hbit as [Hsel Hbk].
    rewrite Z.lxor_spec.
    rewrite Z.lor_spec, !Z.land_spec in Hsel.
    apply orb_true_iff in Hsel as [Hs | Hs];
      apply andb_true_iff in Hs as [Hs1 Hs2].
    + rewrite (gamma_kb_bit_one a x n Ha Hs1), (gamma_kb_bit_one b y n Hb Hs2).
      reflexivity.
    + rewrite (gamma_kb_bit_zero a x n Ha Hs1), (gamma_kb_bit_zero b y n Hb Hs2).
      reflexivity.
Qed.

(* ================================================================== *)
(** ** from_constant is exact *)
(* ================================================================== *)

(** A canonical constant is described by its own [from_constant] element:
    the abstraction loses nothing. *)
Theorem from_constant_sound : forall v w,
  0 <= w -> in_range w v -> gamma_kb (from_constant v w) v.
Proof.
  intros v w Hw Hr. unfold from_constant, gamma_kb; simpl.
  split; [exact Hr | split].
  - (* v AND (v AND mask) = v AND mask  (the known-one field) *)
    rewrite Z.land_assoc, Z.land_diag. reflexivity.
  - (* v AND ((lnot v) AND mask) = 0, proved bitwise *)
    apply same_bits_eq. intros n Hn.
    rewrite !Z.land_spec, Z.lnot_spec, Z.bits_0 by lia. btauto.
Qed.

(** from_constant has no conflict (the two masks are disjoint). *)
Theorem from_constant_no_conflict : forall v w,
  ~ has_conflict (from_constant v w).
Proof.
  intros v w. unfold has_conflict, from_constant; simpl.
  intro H. apply H.
  (* (lnot v & mask) AND (v & mask) = 0, proved bitwise *)
  apply same_bits_eq. intros n Hn.
  rewrite !Z.land_spec, Z.lnot_spec, Z.bits_0 by lia. btauto.
Qed.

(* ================================================================== *)
(** ** Conflict implies empty concretization *)
(* ================================================================== *)

(** An abstract element with a conflict (some bit both known-0 and known-1)
    describes NO concrete value: gamma is empty. This justifies the Rust
    [has_conflict] guard. *)
Theorem conflict_gamma_empty : forall a x,
  has_conflict a -> ~ gamma_kb a x.
Proof.
  intros a x Hc Hg.
  apply Hc.
  (* zero AND one = 0, proved bitwise from gamma facts. *)
  apply same_bits_eq. intros n Hn. rewrite Z.land_spec, Z.bits_0.
  destruct (Z.testbit (kb_zero a) n) eqn:Ez; [|apply andb_false_l].
  destruct (Z.testbit (kb_one a) n) eqn:Eo; [|apply andb_false_r].
  (* both set => x bit is both true and false: contradiction *)
  assert (Hx1 : Z.testbit x n = true) by (eapply gamma_kb_bit_one; eauto).
  assert (Hx0 : Z.testbit x n = false) by (eapply gamma_kb_bit_zero; eauto).
  rewrite Hx1 in Hx0. discriminate.
Qed.
