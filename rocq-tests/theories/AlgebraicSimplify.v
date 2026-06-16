(** * AlgebraicSimplify: Alive2-style peephole rewrite soundness.

    Mirrors the rewrite rules in [crates/unlace-passes/src/algebraic_simplify.rs].
    The Rust pass rewrites an SSA instruction to one of its inputs or to a
    constant when an algebraic identity applies. We model an IR expression as a
    small datatype [expr], give it a denotation [eval] into width-[w] machine
    integers (all results wrapped modulo 2^w, matching the Rust varnode byte
    size), and prove each rewrite is SEMANTICS-PRESERVING:

        eval w rho (simplify_RULE e) = eval w rho e.

    This is exactly the Alive2 / Menendez-Nagarakatte proof obligation
    ("lhs ≡ rhs under the precondition"), discharged in Rocq over an exact
    fixed-width-bitvector semantics rather than via an SMT solver.

    Rules certified (from the [try_simplify] dispatch table):
      IntAdd  x+0=x      IntSub x-0=x, x-x=0   IntMult x*1=x, x*0=0
      IntDiv  x/1=x      IntRem x%1=0
      IntAnd  x&0=0, x&MASK=x, x&x=x           IntOr  x|0=x, x|MASK=MASK
      IntXor  x^0=x, x^x=0                     IntEqual x==x=1  IntNotequal x!=x=0
      IntNegate double-negate (--x = x)        bit-not double (~~x = x). *)

From Stdlib Require Import ZArith Bool Lia.
From Unlace Require Import Bitvector.
Open Scope Z_scope.

(** Minimal IR expression over a fixed width [w], mirroring the [IrOp] arms the
    pass rewrites. [EVar] is an opaque SSA value; [ENum] a constant. *)
Inductive expr : Type :=
  | EVar  (id : nat)
  | ENum  (c : Z)
  | EAdd  (a b : expr)
  | ESub  (a b : expr)
  | EMul  (a b : expr)
  | EDiv  (a b : expr)        (* unsigned division on canonical reps *)
  | ERem  (a b : expr)
  | EAnd  (a b : expr)
  | EOr   (a b : expr)
  | EXor  (a b : expr)
  | ENeg  (a : expr)          (* two's-complement negation (IntNegate) *)
  | ENot  (a : expr)          (* bitwise complement within width *)
  | EEq   (a b : expr)        (* IntEqual:    1 if equal else 0 *)
  | ENe   (a b : expr).       (* IntNotequal: 0 if equal else 1 *)

Definition env := nat -> Z.

(** MODELING ASSUMPTIONS (read before trusting these theorems):

    - Values are UNSIGNED canonical reps in [0, 2^w): every [eval] result is
      [wrap]ped, and the rewrite rules certified here ([x/1], [x%1], etc.) are
      the ones the Rust pass applies to [IrOp::IntDiv]/[IntRem], which operate
      on those canonical reps. On non-negative reps [Z.div] (floor) coincides
      with [Z.quot] (truncation), so the unsigned division semantics are
      modeled faithfully; we do NOT here model signed [IntSDiv]/[IntSRem].
    - Each rule is proved as an unconditional identity over ALL canonical
      inputs — these rewrites carry no precondition in the Rust pass either
      (e.g. [x/1] is always [x]; the div-by-zero case never has divisor 1).
    - We model the rules the pass actually fires (the [try_simplify] table).
      Address-fold and SSA-structural rules (load/store addr folding, subpiece
      compose, phi-all-same) are about IR plumbing, not bitvector algebra, and
      are out of scope for this file. *)

(** [eval w rho e] denotes [e] as a canonical width-[w] machine integer.
    EVERY result is wrapped to the width, mirroring the byte-sized varnodes
    the Rust pass operates on. Booleans 0/1 are wrapped too (a width-0 value
    collapses to 0, which the [w >= 1] hypotheses below exclude when needed). *)
Fixpoint eval (w : width) (rho : env) (e : expr) : Z :=
  match e with
  | EVar i   => wrap w (rho i)
  | ENum c   => wrap w c
  | EAdd a b => wrap w (eval w rho a + eval w rho b)
  | ESub a b => wrap w (eval w rho a - eval w rho b)
  | EMul a b => wrap w (eval w rho a * eval w rho b)
  | EDiv a b => wrap w (Z.div (eval w rho a) (eval w rho b))
  | ERem a b => wrap w (Z.rem (eval w rho a) (eval w rho b))
  | EAnd a b => wrap w (Z.land (eval w rho a) (eval w rho b))
  | EOr  a b => wrap w (Z.lor  (eval w rho a) (eval w rho b))
  | EXor a b => wrap w (Z.lxor (eval w rho a) (eval w rho b))
  | ENeg a   => wrap w (- eval w rho a)
  | ENot a   => wrap w (Z.lnot (eval w rho a))
  | EEq  a b => wrap w (if Z.eqb (eval w rho a) (eval w rho b) then 1 else 0)
  | ENe  a b => wrap w (if Z.eqb (eval w rho a) (eval w rho b) then 0 else 1)
  end.

(** Every [eval] result is already canonical: re-wrapping is a no-op. Immediate
    because the head of every arm is a [wrap]. *)
Lemma eval_wrap : forall w rho e, 0 <= w -> wrap w (eval w rho e) = eval w rho e.
Proof. intros w rho e Hw. destruct e; simpl; apply wrap_idem; lia. Qed.

(** Bits at or above the width are zero (the canonical-rep invariant, bitwise).*)
Lemma eval_high_zero : forall w rho e n, 0 <= w -> w <= n -> Z.testbit (eval w rho e) n = false.
Proof.
  intros w rho e n Hw Hn. rewrite <- (eval_wrap w rho e Hw).
  apply wrap_spec_high; lia.
Qed.

(* ================================================================== *)
(** ** Additive identities: IntAdd x+0=x, IntSub x-0=x *)
(* ================================================================== *)

(** [simplify_commutative_const] for IntAdd with expected 0: [x + 0 -> x]
    (and by [join_comm]-style symmetry, [0 + x -> x]). *)
Theorem add_zero_r : forall w rho x, 0 <= w -> eval w rho (EAdd x (ENum 0)) = eval w rho x.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.add_0_r. apply eval_wrap; lia.
Qed.

Theorem add_zero_l : forall w rho x, 0 <= w -> eval w rho (EAdd (ENum 0) x) = eval w rho x.
Proof.
  intros w rho x Hw. simpl. apply eval_wrap; lia.
Qed.

(** [simplify_rhs_const] for IntSub with expected 0: [x - 0 -> x]. *)
Theorem sub_zero_r : forall w rho x, 0 <= w -> eval w rho (ESub x (ENum 0)) = eval w rho x.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.sub_0_r. apply eval_wrap; lia.
Qed.

(** [simplify_same_ssa_to_const] for IntSub: [x - x -> 0]. *)
Theorem sub_self : forall w rho x, 0 <= w -> eval w rho (ESub x x) = wrap w 0.
Proof.
  intros w rho x Hw. simpl. rewrite Z.sub_diag. reflexivity.
Qed.

(* ================================================================== *)
(** ** Multiplicative identities: x*1=x, x*0=0, x/1=x, x%1=0 *)
(* ================================================================== *)

(** [simplify_commutative_const] for IntMult with expected 1: [x * 1 -> x]. *)
Theorem mul_one_r : forall w rho x, 0 <= w -> eval w rho (EMul x (ENum 1)) = eval w rho x.
Proof.
  intros w rho x Hw. cbn [eval].
  destruct (Z.eq_dec w 0) as [->|Hnz].
  - rewrite <- (eval_wrap 0 rho x) by lia. now rewrite !wrap_w0.
  - rewrite wrap_1 by lia. rewrite Z.mul_1_r. apply eval_wrap; lia.
Qed.

(** [simplify_commutative_const_to_const] for IntMult expected 0 result 0:
    [x * 0 -> 0]. *)
Theorem mul_zero_r : forall w rho x, 0 <= w -> eval w rho (EMul x (ENum 0)) = wrap w 0.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.mul_0_r. apply wrap_0.
Qed.

(** [simplify_rhs_const] for IntDiv expected 1: [x / 1 -> x]. *)
Theorem div_one_r : forall w rho x, 0 <= w -> eval w rho (EDiv x (ENum 1)) = eval w rho x.
Proof.
  intros w rho x Hw. cbn [eval].
  destruct (Z.eq_dec w 0) as [->|Hnz].
  - rewrite <- (eval_wrap 0 rho x) by lia. now rewrite !wrap_w0.
  - rewrite wrap_1 by lia. rewrite Z.div_1_r. apply eval_wrap; lia.
Qed.

(** [simplify_rhs_const_to_const] for IntRem expected 1 result 0:
    [x % 1 -> 0]. *)
Theorem rem_one_r : forall w rho x, 0 <= w -> eval w rho (ERem x (ENum 1)) = wrap w 0.
Proof.
  intros w rho x Hw. cbn [eval].
  destruct (Z.eq_dec w 0) as [->|Hnz].
  - now rewrite !wrap_w0.
  - rewrite wrap_1 by lia. rewrite Z.rem_1_r. apply wrap_0.
Qed.

(* ================================================================== *)
(** ** Bitwise identities: x&0=0, x&MASK=x, x&x=x, x|0=x, x|MASK=MASK *)
(* ================================================================== *)

(** [simplify_commutative_const_to_const] for IntAnd expected 0 result 0:
    [x & 0 -> 0]. *)
Theorem and_zero_r : forall w rho x, 0 <= w -> eval w rho (EAnd x (ENum 0)) = wrap w 0.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.land_0_r. apply wrap_0.
Qed.

(** [simplify_commutative_all_ones] for IntAnd: [x & MASK -> x], where MASK is
    the all-ones constant of the operand width ([is_all_ones]). *)
Theorem and_mask_r : forall w rho x, 0 <= w ->
  eval w rho (EAnd x (ENum (mask w))) = eval w rho x.
Proof.
  intros w rho x Hw. cbn [eval].
  (* wrap w (mask w) = mask w *)
  assert (Hm : wrap w (mask w) = mask w) by (unfold wrap; apply Z.land_diag).
  rewrite Hm.
  (* wrap w (land (eval x) (mask w)) = eval x.
     land with mask = wrap; then wrap is idempotent on eval. *)
  change (Z.land (eval w rho x) (mask w)) with (wrap w (eval w rho x)).
  rewrite wrap_idem by lia. apply eval_wrap; lia.
Qed.

(** IntAnd idempotence [x & x -> x] (the [simplify] same-input case). *)
Theorem and_self : forall w rho x, 0 <= w -> eval w rho (EAnd x x) = eval w rho x.
Proof.
  intros w rho x Hw. simpl. rewrite Z.land_diag. apply eval_wrap; lia.
Qed.

(** [simplify_commutative_const] for IntOr expected 0: [x | 0 -> x]. *)
Theorem or_zero_r : forall w rho x, 0 <= w -> eval w rho (EOr x (ENum 0)) = eval w rho x.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.lor_0_r. apply eval_wrap; lia.
Qed.

(** [simplify_commutative_all_ones_to_all_ones] for IntOr: [x | MASK -> MASK].*)
Theorem or_mask_r : forall w rho x, 0 <= w ->
  eval w rho (EOr x (ENum (mask w))) = wrap w (mask w).
Proof.
  intros w rho x Hw. cbn [eval].
  assert (Hm : wrap w (mask w) = mask w) by (unfold wrap; apply Z.land_diag).
  rewrite Hm.
  (* wrap w (lor (eval x) (mask w)) = mask w, bitwise:
     above w both sides 0; below w mask=1 forces lor=1. *)
  apply same_bits_eq. intros n Hn.
  destruct (Z.lt_ge_cases n w).
  - rewrite wrap_spec_low by lia. rewrite Z.lor_spec, mask_spec_low by lia.
    rewrite orb_true_r. reflexivity.
  - rewrite wrap_spec_high by lia. symmetry. apply mask_spec_high; lia.
Qed.

(* ================================================================== *)
(** ** XOR identities: x^0=x, x^x=0 *)
(* ================================================================== *)

(** [simplify_commutative_const] for IntXor expected 0: [x ^ 0 -> x]. *)
Theorem xor_zero_r : forall w rho x, 0 <= w -> eval w rho (EXor x (ENum 0)) = eval w rho x.
Proof.
  intros w rho x Hw. simpl.
  rewrite Z.lxor_0_r. apply eval_wrap; lia.
Qed.

(** [simplify_same_ssa_to_const] for IntXor: [x ^ x -> 0]. *)
Theorem xor_self : forall w rho x, 0 <= w -> eval w rho (EXor x x) = wrap w 0.
Proof.
  intros w rho x Hw. simpl. rewrite Z.lxor_nilpotent. reflexivity.
Qed.

(* ================================================================== *)
(** ** Comparison identities: x==x -> 1, x!=x -> 0 *)
(* ================================================================== *)

(** [simplify_same_ssa_to_const] for IntEqual: [x == x -> 1]. *)
Theorem eq_self : forall w rho x, 0 <= w -> eval w rho (EEq x x) = wrap w 1.
Proof.
  intros w rho x Hw. simpl. rewrite Z.eqb_refl. reflexivity.
Qed.

(** [simplify_same_ssa_to_const] for IntNotequal: [x != x -> 0]. *)
Theorem ne_self : forall w rho x, 0 <= w -> eval w rho (ENe x x) = wrap w 0.
Proof.
  intros w rho x Hw. simpl. rewrite Z.eqb_refl. reflexivity.
Qed.

(* ================================================================== *)
(** ** Double-negation / double-not: --x = x, ~~x = x *)
(* ================================================================== *)

(** [simplify_double_negate] for IntNegate: [-(-x) -> x]. Two's-complement,
    proved over the wrapping semantics. *)
Theorem neg_neg : forall w rho x, 0 <= w -> eval w rho (ENeg (ENeg x)) = eval w rho x.
Proof.
  intros w rho x Hw. cbn [eval].
  destruct (Z.eq_dec w 0) as [->|Hnz].
  - rewrite <- (eval_wrap 0 rho x) by lia. now rewrite !wrap_w0.
  - (* wrap w (- wrap w (- e)) = e, where e = eval x is already canonical. *)
    rewrite wrap_opp_opp by lia. apply eval_wrap; lia.
Qed.

(** [simplify_double_negate] for the bitwise complement: [~(~x) -> x]. *)
Theorem not_not : forall w rho x, 0 <= w -> eval w rho (ENot (ENot x)) = eval w rho x.
Proof.
  intros w rho x Hw. simpl.
  apply same_bits_eq. intros n Hn.
  destruct (Z.lt_ge_cases n w).
  - rewrite (wrap_spec_low w) by lia.
    rewrite Z.lnot_spec by lia.
    rewrite (wrap_spec_low w) by lia.
    rewrite Z.lnot_spec by lia.
    rewrite negb_involutive.
    rewrite <- (eval_wrap w rho x Hw). rewrite (wrap_spec_low w) by lia. reflexivity.
  - rewrite (wrap_spec_high w) by lia.
    rewrite (eval_high_zero w rho x n) by lia. reflexivity.
Qed.

(* ================================================================== *)
(** ** Canonicalization: associativity / commutativity of +, *

    The decompiler canonicalizes expression trees before matching algebraic
    rewrites (e.g. reordering operands of a commutative op, re-associating a
    chain of adds). These restructurings must be SEMANTICS-PRESERVING under the
    wrapping evaluation. The wrap-distribution lemmas in [Bitvector.v] are what
    make this work: a sub-tree may be wrapped at every node, yet the whole tree
    still evaluates equal to the un-restructured form. *)

(** Commutativity of [+]: [x + y ≡ y + x]. *)
Theorem add_comm : forall w rho x y, 0 <= w ->
  eval w rho (EAdd x y) = eval w rho (EAdd y x).
Proof. intros w rho x y Hw. simpl. rewrite Z.add_comm. reflexivity. Qed.

(** Associativity of [+]: [(x + y) + z ≡ x + (y + z)]. *)
Theorem add_assoc : forall w rho x y z, 0 <= w ->
  eval w rho (EAdd (EAdd x y) z) = eval w rho (EAdd x (EAdd y z)).
Proof.
  intros w rho x y z Hw. simpl.
  rewrite wrap_add_distr_l by lia. rewrite wrap_add_distr_r by lia.
  rewrite Z.add_assoc. reflexivity.
Qed.

(** Commutativity of [*]: [x * y ≡ y * x]. *)
Theorem mul_comm : forall w rho x y, 0 <= w ->
  eval w rho (EMul x y) = eval w rho (EMul y x).
Proof. intros w rho x y Hw. simpl. rewrite Z.mul_comm. reflexivity. Qed.

(** Associativity of [*]: [(x * y) * z ≡ x * (y * z)]. *)
Theorem mul_assoc : forall w rho x y z, 0 <= w ->
  eval w rho (EMul (EMul x y) z) = eval w rho (EMul x (EMul y z)).
Proof.
  intros w rho x y z Hw. simpl.
  rewrite wrap_mul_distr_l by lia. rewrite wrap_mul_distr_r by lia.
  rewrite Z.mul_assoc. reflexivity.
Qed.
