(** * ConstantRange: interval abstract domain soundness (Target #9).

    Mirrors the [ConstantRange] interval reasoning in
    [crates/unlace-ir/src/known_bits.rs]. An abstract value is an inclusive
    unsigned interval [lo, hi] over [Z]; its concretization is the set of values
    in that interval. We prove the transfer functions are SOUND (the concrete
    result lands in the abstract result) and, NOVEL, PRECISION-MONOTONE (tighter
    inputs give a tighter — never wider — output, and the abstract order refines
    the concretization order).

    Scope/assumption: we model the non-overflowing case (results stay within
    [0, 2^w)); the saturating/wrapping interval join is a separate obligation.
    This is the domain behind address-range reasoning for struct/array access.

    Zero admits/axioms. *)

From Stdlib Require Import ZArith Lia.
Local Open Scope Z_scope.

Record range := { lo : Z; hi : Z }.

(** Concretization: the inclusive interval as a value predicate. *)
Definition rgamma (r : range) (v : Z) : Prop := lo r <= v <= hi r.

(** Well-formed (non-empty) range. *)
Definition wf (r : range) : Prop := lo r <= hi r.

(** Abstract order: interval inclusion. *)
Definition rle (r1 r2 : range) : Prop := lo r2 <= lo r1 /\ hi r1 <= hi r2.

(* ------------------------------------------------------------------ *)
(** ** Order is a preorder; abstract order refines gamma *)
(* ------------------------------------------------------------------ *)

Lemma rle_refl : forall r, rle r r.
Proof. intros r. unfold rle. lia. Qed.

Lemma rle_trans : forall a b c, rle a b -> rle b c -> rle a c.
Proof. intros a b c [??] [??]. unfold rle. lia. Qed.

(** The abstract order is SOUND for the concretization: a tighter interval
    concretizes to a subset. (Galois-style monotonicity of gamma.) *)
Theorem rle_gamma_mono : forall a b v, rle a b -> rgamma a v -> rgamma b v.
Proof. intros a b v [??] [??]. unfold rgamma. lia. Qed.

(* ------------------------------------------------------------------ *)
(** ** Transfer functions + soundness *)
(* ------------------------------------------------------------------ *)

(** Interval addition: [lo1+lo2, hi1+hi2]. *)
Definition radd (a b : range) : range := {| lo := lo a + lo b; hi := hi a + hi b |}.

Theorem radd_sound : forall a b x y,
  rgamma a x -> rgamma b y -> rgamma (radd a b) (x + y).
Proof. intros a b x y [??] [??]. unfold rgamma, radd; simpl. lia. Qed.

(** Interval subtraction: [lo1-hi2, hi1-lo2]. *)
Definition rsub (a b : range) : range := {| lo := lo a - hi b; hi := hi a - lo b |}.

Theorem rsub_sound : forall a b x y,
  rgamma a x -> rgamma b y -> rgamma (rsub a b) (x - y).
Proof. intros a b x y [??] [??]. unfold rgamma, rsub; simpl. lia. Qed.

(** Join (convex hull): [min lo, max hi]. *)
Definition rjoin (a b : range) : range :=
  {| lo := Z.min (lo a) (lo b); hi := Z.max (hi a) (hi b) |}.

Theorem rjoin_sound_l : forall a b v, rgamma a v -> rgamma (rjoin a b) v.
Proof. intros a b v [??]. unfold rgamma, rjoin; simpl. lia. Qed.

Theorem rjoin_sound_r : forall a b v, rgamma b v -> rgamma (rjoin a b) v.
Proof. intros a b v [??]. unfold rgamma, rjoin; simpl. lia. Qed.

(** Join is an upper bound in the abstract order, and the LEAST one. *)
Theorem rjoin_ub_l : forall a b, rle a (rjoin a b).
Proof. intros a b. unfold rle, rjoin; simpl. lia. Qed.

Theorem rjoin_ub_r : forall a b, rle b (rjoin a b).
Proof. intros a b. unfold rle, rjoin; simpl. lia. Qed.

Theorem rjoin_lub : forall a b u, rle a u -> rle b u -> rle (rjoin a b) u.
Proof. intros a b u [??] [??]. unfold rle, rjoin; simpl. lia. Qed.

(* ------------------------------------------------------------------ *)
(** ** Meet (intersection) + completeness *)
(* ------------------------------------------------------------------ *)

Definition rmeet (a b : range) : range :=
  {| lo := Z.max (lo a) (lo b); hi := Z.min (hi a) (hi b) |}.

(** A value in BOTH operands is in their meet (greatest-lower-bound
    completeness — what range refinement relies on). *)
Theorem rmeet_complete : forall a b v,
  rgamma a v -> rgamma b v -> rgamma (rmeet a b) v.
Proof. intros a b v [??] [??]. unfold rgamma, rmeet; simpl. lia. Qed.

(** Conversely the meet is SOUND: anything it admits is in both. *)
Theorem rmeet_sound : forall a b v,
  rgamma (rmeet a b) v -> rgamma a v /\ rgamma b v.
Proof. intros a b v [??]. unfold rgamma, rmeet in *; simpl in *. lia. Qed.

(* ------------------------------------------------------------------ *)
(** ** NOVEL: precision monotonicity of the transfer functions *)
(* ------------------------------------------------------------------ *)

(** Addition is MONOTONE in the abstract order: tighter input intervals give a
    tighter (never wider) result interval. So refining either operand's range
    can only refine the sum — the precision-propagation property that keeps
    address/offset ranges from blowing up. *)
Theorem radd_precision_monotone : forall a a' b b',
  rle a a' -> rle b b' -> rle (radd a b) (radd a' b').
Proof. intros a a' b b' [??] [??]. unfold rle, radd; simpl. lia. Qed.

(** Subtraction is likewise monotone. *)
Theorem rsub_precision_monotone : forall a a' b b',
  rle a a' -> rle b b' -> rle (rsub a b) (rsub a' b').
Proof. intros a a' b b' [??] [??]. unfold rle, rsub; simpl. lia. Qed.

(** Join is monotone in both arguments (Kildall-style). *)
Theorem rjoin_precision_monotone : forall a a' b b',
  rle a a' -> rle b b' -> rle (rjoin a b) (rjoin a' b').
Proof. intros a a' b b' [??] [??]. unfold rle, rjoin; simpl. lia. Qed.

(* ------------------------------------------------------------------ *)
(** ** NOVEL: left-shift range soundness (address arithmetic) *)
(* ------------------------------------------------------------------ *)

(** Multiplying a non-negative range by a positive constant scale (the value of
    a left-shift by a known amount, [2^s]) is sound: [x*k ∈ [lo*k, hi*k]]. This
    is the interval-domain counterpart of [KnownBits.kshl] for offset scaling in
    array indexing / pointer arithmetic. *)
Definition rscale (a : range) (k : Z) : range :=
  {| lo := lo a * k; hi := hi a * k |}.

Theorem rscale_sound : forall a x k,
  0 <= k -> 0 <= lo a -> rgamma a x -> rgamma (rscale a k) (x * k).
Proof.
  intros a x k Hk Hlo [Hx1 Hx2]. unfold rgamma, rscale; simpl.
  split.
  - apply Z.mul_le_mono_nonneg_r; lia.
  - apply Z.mul_le_mono_nonneg_r; lia.
Qed.

(** Scaling preserves precision order too. *)
Theorem rscale_precision_monotone : forall a a' k,
  0 <= k -> rle a a' -> rle (rscale a k) (rscale a' k).
Proof.
  intros a a' k Hk [Hlo Hhi]. unfold rle, rscale; simpl.
  split; apply Z.mul_le_mono_nonneg_r; lia.
Qed.
