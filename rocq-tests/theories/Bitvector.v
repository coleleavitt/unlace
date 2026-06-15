(** * Bitvector: fixed-width machine-integer model for unlace proofs.

    This module is the shared foundation for the machine-checked specs that
    mirror unlace's Rust cores. We model a width-[w] machine integer as a
    mathematical integer [Z] kept canonical in the range [0, 2^w) by the
    [wrap] operation, exactly as a Rust [u64]/[uN] wraps modulo 2^w.

    Design choice (spec-mirroring, not extraction): we deliberately use [Z]
    + bit operations from the Rocq standard library so that the bit-level
    transfer functions in [KnownBits.v] can be discharged by bit-blasting
    (rewriting with [Z.land_spec]/[Z.lor_spec]/[Z.lxor_spec] then
    [Z.bits_inj]). This matches LLVM's [KnownBits.h] semantics, which is
    what the Rust [known_bits.rs] mirrors.

    Mirrors: [crates/unlace-ir/src/known_bits.rs] (width_mask),
             [crates/unlace-ir/src/value_lattice.rs] (u64 values). *)

From Stdlib Require Import ZArith Bool Lia.
Open Scope Z_scope.

(** A width is a nonnegative bit count. unlace tracks widths in 1..=64 but
    none of the algebra here needs the upper bound, so we only require
    [0 <= w]. *)
Definition width := Z.

(** [mask w] has exactly the low [w] bits set: [2^w - 1].
    Mirrors [KnownBits::width_mask] (which saturates at u64::MAX for w>=64;
    over [Z] there is no saturation, [Z.ones w = 2^w - 1]). *)
Definition mask (w : width) : Z := Z.ones w.

(** [wrap w x] is [x] reduced into [0, 2^w): the canonical representative of
    [x] as a width-[w] machine integer. Equivalent to [x mod 2^w] and to
    [Z.land x (mask w)] (proved below as [wrap_land]). *)
Definition wrap (w : width) (x : Z) : Z := Z.land x (mask w).

(** [in_range w x] says [x] is already a canonical width-[w] value. *)
Definition in_range (w : width) (x : Z) : Prop := 0 <= x < 2 ^ w.

(* ------------------------------------------------------------------ *)
(** ** Mask / wrap bit characterization *)
(* ------------------------------------------------------------------ *)

Lemma mask_spec_low : forall w m, 0 <= m < w -> Z.testbit (mask w) m = true.
Proof. intros w m H. unfold mask. now apply Z.ones_spec_low. Qed.

Lemma mask_spec_high : forall w m, 0 <= w <= m -> Z.testbit (mask w) m = false.
Proof. intros w m H. unfold mask. apply Z.ones_spec_high; lia. Qed.

Lemma mask_nonneg : forall w, 0 <= w -> 0 <= mask w.
Proof. intros w H. unfold mask. rewrite Z.ones_equiv. assert (0 < 2 ^ w) by (apply Z.pow_pos_nonneg; lia). lia. Qed.

(** [wrap] via modulo: the canonical-representative view. *)
Lemma wrap_mod : forall w x, 0 <= w -> wrap w x = x mod 2 ^ w.
Proof. intros w x H. unfold wrap, mask. now apply Z.land_ones. Qed.

(** [wrap] via masking: the bitwise view used in bit-blasting proofs. *)
Lemma wrap_land : forall w x, wrap w x = Z.land x (mask w).
Proof. reflexivity. Qed.

(** Bit characterization of [wrap]: keeps low bits, clears bits >= w. *)
Lemma wrap_spec_low : forall w x m, 0 <= m < w -> Z.testbit (wrap w x) m = Z.testbit x m.
Proof.
  intros w x m H. unfold wrap. rewrite Z.land_spec, mask_spec_low by lia.
  apply andb_true_r.
Qed.

Lemma wrap_spec_high : forall w x m, 0 <= w <= m -> Z.testbit (wrap w x) m = false.
Proof.
  intros w x m H. unfold wrap. rewrite Z.land_spec, mask_spec_high by lia.
  apply andb_false_r.
Qed.

(** [wrap] is idempotent: re-wrapping a canonical value is a no-op. *)
Lemma wrap_idem : forall w x, 0 <= w -> wrap w (wrap w x) = wrap w x.
Proof.
  intros w x H. apply Z.bits_inj'. intros n Hn.
  destruct (Z.lt_ge_cases n w) as [Hlt | Hge].
  - now rewrite !wrap_spec_low by lia.
  - now rewrite !wrap_spec_high by lia.
Qed.

(** A canonical value is a fixpoint of [wrap]. *)
Lemma wrap_in_range : forall w x, 0 <= w -> in_range w x -> wrap w x = x.
Proof.
  intros w x H Hr. rewrite wrap_mod by lia.
  apply Z.mod_small. exact Hr.
Qed.

(** [wrap] always produces a canonical value. *)
Lemma wrap_range : forall w x, 0 <= w -> in_range w (wrap w x).
Proof.
  intros w x H. unfold in_range. rewrite wrap_mod by lia.
  assert (0 < 2 ^ w) by (apply Z.pow_pos_nonneg; lia).
  split; [apply Z.mod_pos_bound | apply Z.mod_pos_bound]; lia.
Qed.

(** Two's-complement double negation: [wrap w (- wrap w (- x)) = wrap w x].
    The negation of a canonical value, re-negated and re-wrapped, is the
    original wrapped value. Used by the [--x = x] rewrite-soundness proof. *)
Lemma wrap_opp_opp : forall w x, 0 <= w -> wrap w (- wrap w (- x)) = wrap w x.
Proof.
  intros w x H. rewrite !wrap_mod by lia.
  assert (Hpos : 0 < 2 ^ w) by (apply Z.pow_pos_nonneg; lia).
  rewrite (Z.mod_eq (- x) (2 ^ w)) by lia.
  replace (- (- x - 2 ^ w * ((- x) / 2 ^ w)))
    with (x + ((- x) / 2 ^ w) * 2 ^ w) by ring.
  rewrite Z.mod_add by lia. reflexivity.
Qed.

(* ------------------------------------------------------------------ *)
(** ** Bit extensionality helper (the workhorse for KnownBits proofs) *)
(* ------------------------------------------------------------------ *)

(** Two integers are equal iff they agree on every bit. This is the
    [Int.same_bits_eq] analogue called out in the research blueprint;
    here it is just [Z.bits_inj']. *)
Lemma same_bits_eq : forall a b, (forall n, 0 <= n -> Z.testbit a n = Z.testbit b n) -> a = b.
Proof. intros a b H. apply Z.bits_inj'. exact H. Qed.

(** [wrap w 0 = 0] for ANY width (no [0 <= w] needed): masking zero is zero. *)
Lemma wrap_0 : forall w, wrap w 0 = 0.
Proof. intro w. unfold wrap. apply Z.land_0_l. Qed.

(** [wrap w 1 = 1] whenever the width admits the value 1 (i.e. [1 <= w]).
    Used by the [x*1=x], [x/1=x], [x%1=0] rewrite-soundness proofs. *)
Lemma wrap_1 : forall w, 1 <= w -> wrap w 1 = 1.
Proof.
  intros w Hw. rewrite wrap_mod by lia. apply Z.mod_small.
  split; [lia|]. assert (2 ^ 1 <= 2 ^ w) by (apply Z.pow_le_mono_r; lia).
  change (2 ^ 1) with 2 in *. lia.
Qed.

(** Sanity: wrapping at width 0 yields 0. *)
Example wrap_w0 : forall x, wrap 0 x = 0.
Proof. intro x. unfold wrap, mask. change (Z.ones 0) with 0. apply Z.land_0_r. Qed.
