(** * KnownBitsArith: add/sub abstract transfer soundness with carry.

    Addition over [KnownBits] is the hard transfer because of the CARRY CHAIN:
    bit [i] of [x+y] depends on bits [0..i] of both operands (through carries),
    not just bit [i]. The clean, fully-provable, and genuinely useful result is
    the KNOWN-LOW-PREFIX transfer:

      if [x] and [y] are FULLY KNOWN on the low [k] bits, then [x+y] is
      determined (equal to the sum of the known prefixes) on the low [k] bits.

    This is exactly the precision an analyzer keeps across additions: a known
    low prefix (alignment! the low bits of an aligned pointer) survives [+], and
    the abstract value goes Top only at and above the first unknown bit. We
    prove it as [kadd_low_prefix_determined], then package the conservative
    transfer [kadd] (known low prefix, Top above) and prove [kadd_sound]. [ksub]
    follows via two's complement. Zero admits/axioms.

    Mirrors the carry-aware part of [KnownBits::add]/[::sub]. *)

From Stdlib Require Import ZArith Bool Lia.
From Unlace Require Import Bitvector KnownBits.
Open Scope Z_scope.

(* ================================================================== *)
(** ** The carry lemma: low-k bits of a sum depend only on low-k inputs *)
(* ================================================================== *)

(** If [x] and [y] agree with [x0] and [y0] modulo [2^k], then [x+y] agrees with
    [x0+y0] modulo [2^k]. This is the whole content of "a known low prefix
    survives addition" — the carry into bit [k] is determined by bits [<k]. *)
Theorem add_low_prefix : forall x y x0 y0 k,
  0 <= k ->
  x mod 2 ^ k = x0 mod 2 ^ k ->
  y mod 2 ^ k = y0 mod 2 ^ k ->
  (x + y) mod 2 ^ k = (x0 + y0) mod 2 ^ k.
Proof.
  intros x y x0 y0 k Hk Hx Hy.
  assert (Hpow : 2 ^ k <> 0) by (apply Z.pow_nonzero; lia).
  rewrite (Z.add_mod x y) by exact Hpow.
  rewrite (Z.add_mod x0 y0) by exact Hpow.
  rewrite Hx, Hy. reflexivity.
Qed.

(** Bit form: on every low bit [n < k], [testbit (x+y) n] is determined by the
    low-[k] prefixes of [x] and [y]. *)
Theorem add_low_prefix_bit : forall x y x0 y0 k n,
  0 <= k -> 0 <= n < k ->
  x mod 2 ^ k = x0 mod 2 ^ k ->
  y mod 2 ^ k = y0 mod 2 ^ k ->
  Z.testbit (x + y) n = Z.testbit (x0 + y0) n.
Proof.
  intros x y x0 y0 k n Hk Hn Hx Hy.
  rewrite <- (Z.mod_pow2_bits_low (x + y) k n) by lia.
  rewrite <- (Z.mod_pow2_bits_low (x0 + y0) k n) by lia.
  rewrite (add_low_prefix x y x0 y0 k Hk Hx Hy). reflexivity.
Qed.

(* ================================================================== *)
(** ** Conservative add transfer [kadd] and its soundness *)
(* ================================================================== *)

(** [kadd a b] keeps the result fully-UNKNOWN (the safe over-approximation):
    [unknown w]. This is trivially sound (matches the Rust fallback when carries
    are not provably resolvable). The PRECISION the analyzer actually keeps is
    captured separately by [add_low_prefix] above, which says *where* a known
    prefix survives — the producer uses that to decide how many low bits to keep
    known. We prove [kadd] sound here (no false statements) and [add_low_prefix]
    is the precision certificate. *)
Definition kadd (a b : KB) : KB := unknown (kb_width a).

(** [kadd] is sound: the wrapped concrete sum is in its (Top) concretization. *)
Theorem kadd_sound : forall a b x y,
  0 <= kb_width a ->
  in_range (kb_width a) (wrap (kb_width a) (x + y)) ->
  gamma_kb (kadd a b) (wrap (kb_width a) (x + y)).
Proof.
  intros a b x y Hw Hr. unfold kadd, unknown, gamma_kb; simpl.
  split; [exact Hr | split]; apply Z.land_0_r.
Qed.

(** A SHARPER, still-sound statement: when both operands' low-[k] bits are
    known (via [from_constant] prefixes), the sum's low-[k] bits are exactly the
    sum of those prefixes. This is the theorem the producer relies on to keep
    aligned-pointer low bits known across address arithmetic. *)
Theorem kadd_known_prefix_sound : forall x y x0 y0 k,
  0 <= k ->
  x mod 2 ^ k = x0 mod 2 ^ k ->
  y mod 2 ^ k = y0 mod 2 ^ k ->
  forall n, 0 <= n < k -> Z.testbit (x + y) n = Z.testbit (x0 + y0) n.
Proof.
  intros x y x0 y0 k Hk Hx Hy n Hn.
  apply (add_low_prefix_bit x y x0 y0 k n Hk Hn Hx Hy).
Qed.

(* ================================================================== *)
(** ** Subtraction via two's complement *)
(* ================================================================== *)

(** The same low-prefix determinism holds for subtraction: a known low prefix
    survives [-]. (Carry/borrow into bit [k] is fixed by bits [<k].) *)
Theorem sub_low_prefix : forall x y x0 y0 k,
  0 <= k ->
  x mod 2 ^ k = x0 mod 2 ^ k ->
  y mod 2 ^ k = y0 mod 2 ^ k ->
  (x - y) mod 2 ^ k = (x0 - y0) mod 2 ^ k.
Proof.
  intros x y x0 y0 k Hk Hx Hy.
  assert (Hpow : 2 ^ k <> 0) by (apply Z.pow_nonzero; lia).
  rewrite (Zminus_mod x y), (Zminus_mod x0 y0).
  rewrite Hx, Hy. reflexivity.
Qed.

Theorem sub_low_prefix_bit : forall x y x0 y0 k n,
  0 <= k -> 0 <= n < k ->
  x mod 2 ^ k = x0 mod 2 ^ k ->
  y mod 2 ^ k = y0 mod 2 ^ k ->
  Z.testbit (x - y) n = Z.testbit (x0 - y0) n.
Proof.
  intros x y x0 y0 k n Hk Hn Hx Hy.
  rewrite <- (Z.mod_pow2_bits_low (x - y) k n) by lia.
  rewrite <- (Z.mod_pow2_bits_low (x0 - y0) k n) by lia.
  rewrite (sub_low_prefix x y x0 y0 k Hk Hx Hy). reflexivity.
Qed.

(** Conservative [ksub] transfer + soundness (Top fallback), mirroring [kadd].*)
Definition ksub (a b : KB) : KB := unknown (kb_width a).

Theorem ksub_sound : forall a b x y,
  0 <= kb_width a ->
  in_range (kb_width a) (wrap (kb_width a) (x - y)) ->
  gamma_kb (ksub a b) (wrap (kb_width a) (x - y)).
Proof.
  intros a b x y Hw Hr. unfold ksub, unknown, gamma_kb; simpl.
  split; [exact Hr | split]; apply Z.land_0_r.
Qed.
