(** * FlagConditions: x86 EFLAGS condition-code → relational soundness (NOVEL).

    Decompilers must invert the compiler's lowering of `a < b` (and friends) into
    EFLAGS arithmetic: `cmp a, b` sets ZF/SF/OF/CF from `a - b`, and a following
    `setl`/`jle`/… reads a boolean COMBINATION of those flags. unlace's flag
    simplification recovers the relational operator from that combination. This
    theory grounds that recovery: it models the four EFLAGS bits produced by a
    width-`w` subtraction and proves the standard condition-code identities are
    SOUND — i.e. each flag combination equals the corresponding relational
    comparison of the (signed or unsigned) operands.

    To our knowledge these condition-code↔relational equivalences are not
    separately mechanized for a decompiler's *inversion* direction (CompCert
    proves the forward x86 semantics; here we prove the boolean flag expressions
    a `setcc`/`jcc` reads are exactly the high-level comparisons, which is what
    licenses rewriting `SF⊕OF` back to `a < b`).

    Model. We work over fixed width `w >= 1`. `uval w v = v mod 2^w` is the
    unsigned value; `sval w v` is its two's-complement signed value. The flags of
    `a - b` are defined by their architectural meaning:

      ZF = (uval a == uval b)
      CF = (uval a <u uval b)            (borrow out of the subtraction)
      SF = sign bit of the wrapped result
      OF = signed overflow of a - b

    and we prove, for the jcc/setcc the producer inverts:

      JE   ZF              ⟺  a == b              (mod 2^w)
      JB   CF              ⟺  a <u b              (unsigned)
      JBE  CF || ZF        ⟺  a <=u b             (unsigned)
      JL   SF != OF        ⟺  a <s b              (signed)
      JLE  ZF || (SF!=OF)  ⟺  a <=s b             (signed)

    All proofs are kernel-checked, zero admits/axioms. *)

From Stdlib Require Import ZArith Bool Lia.
Local Open Scope Z_scope.

Section Flags.
  Variable w : Z.
  Hypothesis Hw : 1 <= w.

  Definition modulus : Z := 2 ^ w.
  Definition half    : Z := 2 ^ (w - 1).

  Lemma modulus_pos : 0 < modulus.
  Proof. unfold modulus. apply Z.pow_pos_nonneg; lia. Qed.

  Lemma half_pos : 0 < half.
  Proof. unfold half. apply Z.pow_pos_nonneg; lia. Qed.

  (** [modulus = 2 * half]:  2^w = 2 * 2^(w-1). *)
  Lemma modulus_two_half : modulus = 2 * half.
  Proof.
    unfold modulus, half. rewrite <- Z.pow_succ_r by lia.
    f_equal. lia.
  Qed.

  (** Unsigned and signed interpretations of a width-[w] bit pattern. *)
  Definition uval (v : Z) : Z := v mod modulus.
  Definition sval (v : Z) : Z :=
    let u := v mod modulus in if u <? half then u else u - modulus.

  Lemma uval_range : forall v, 0 <= uval v < modulus.
  Proof. intro v. unfold uval. apply Z.mod_pos_bound, modulus_pos. Qed.

  (** Signed value lies in [-half, half). *)
  Lemma sval_range : forall v, - half <= sval v < half.
  Proof.
    intro v. unfold sval. pose proof (uval_range v) as Hu. unfold uval in Hu.
    pose proof modulus_two_half.
    destruct (v mod modulus <? half) eqn:E.
    - apply Z.ltb_lt in E. lia.
    - apply Z.ltb_ge in E. lia.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** The four EFLAGS of [a - b], by architectural meaning *)
  (* ---------------------------------------------------------------- *)

  Definition zf (a b : Z) : bool := uval a =? uval b.
  Definition cf (a b : Z) : bool := uval a <? uval b.           (* borrow *)
  Definition sf (a b : Z) : bool := half <=? ((a - b) mod modulus).  (* result sign bit *)
  (** OF: signed overflow — the true signed difference escapes [-half, half). *)
  Definition of_ (a b : Z) : bool :=
    let d := sval a - sval b in negb ((- half <=? d) && (d <? half)).

  (* ---------------------------------------------------------------- *)
  (** ** Unsigned condition codes *)
  (* ---------------------------------------------------------------- *)

  (** JE / SETE: ZF holds iff the operands are equal modulo 2^w. *)
  Theorem je_iff_eq : forall a b, zf a b = true <-> uval a = uval b.
  Proof. intros a b. unfold zf. apply Z.eqb_eq. Qed.

  (** JB / SETB: CF holds iff a is unsigned-below b. *)
  Theorem jb_iff_ult : forall a b, cf a b = true <-> uval a < uval b.
  Proof. intros a b. unfold cf. apply Z.ltb_lt. Qed.

  (** JBE / SETBE: CF∨ZF holds iff a is unsigned-below-or-equal b. *)
  Theorem jbe_iff_ule : forall a b, (cf a b || zf a b) = true <-> uval a <= uval b.
  Proof.
    intros a b. rewrite orb_true_iff.
    rewrite jb_iff_ult, je_iff_eq. lia.
  Qed.

  (** JA / SETA: ¬(CF∨ZF) holds iff a is unsigned-above b. *)
  Theorem ja_iff_ugt : forall a b, (cf a b || zf a b) = false <-> uval a > uval b.
  Proof.
    intros a b. split.
    - intro H. destruct (Z.le_gt_cases (uval a) (uval b)) as [Hle | Hgt].
      + apply jbe_iff_ule in Hle. rewrite Hle in H. discriminate.
      + lia.
    - intro H. destruct (cf a b || zf a b) eqn:E; [| reflexivity].
      apply jbe_iff_ule in E. lia.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** Signed condition codes — the headline result *)
  (* ---------------------------------------------------------------- *)

  (** The bridge lemma tying SF and OF to the signed comparison. The producer's
      key rewrite is `SF ⊕ OF ⟹ a <s b`; we prove [xorb (sf a b) (of_ a b)]
      equals the signed-less-than test on [sval]. The proof is by the standard
      case analysis on whether [a - b] overflows the signed range. *)
  Lemma sf_value : forall a b,
    sf a b = (half <=? ((a - b) mod modulus)).
  Proof. reflexivity. Qed.

  (** For [d] just below the modulus boundary on the negative side,
      [d mod modulus = d + modulus]. *)
  Lemma mod_neg_shift : forall d, - modulus < d < 0 -> d mod modulus = d + modulus.
  Proof.
    intros d Hd. pose proof modulus_pos.
    rewrite <- (Z.mod_add d 1 modulus) by lia.
    rewrite Z.mod_small by lia. lia.
  Qed.

  (** The signed value is congruent to the raw value modulo 2^w. *)
  Lemma sval_mod : forall v, sval v mod modulus = v mod modulus.
  Proof.
    intro v. unfold sval. pose proof modulus_pos as Hm.
    destruct (v mod modulus <? half) eqn:E.
    - apply Zmod_mod.
    - (* (v mod modulus - modulus) mod modulus = v mod modulus *)
      rewrite Zminus_mod, Z_mod_same_full, Z.sub_0_r, Zmod_mod, Zmod_mod.
      reflexivity.
  Qed.

  (** Result wraps to the signed difference modulo 2^w. *)
  Lemma sub_mod_eq : forall a b, (a - b) mod modulus = (sval a - sval b) mod modulus.
  Proof.
    intros a b. rewrite Zminus_mod, (Zminus_mod (sval a)).
    rewrite (sval_mod a), (sval_mod b). reflexivity.
  Qed.

  (** SF⊕OF ⟺ signed less-than. *)
  Theorem jl_iff_slt : forall a b,
    xorb (sf a b) (of_ a b) = true <-> sval a < sval b.
  Proof.
    intros a b. unfold sf, of_.
    set (d := sval a - sval b).
    pose proof (sval_range a) as Ha. pose proof (sval_range b) as Hb.
    pose proof modulus_two_half as Hmh. pose proof half_pos as Hhp.
    rewrite sub_mod_eq. fold d.
    (* d ∈ (-2*half, 2*half); split on overflow and sign *)
    assert (Hdr : - modulus < d < modulus) by (unfold d in *; lia).
    destruct (- half <=? d) eqn:Elo; destruct (d <? half) eqn:Ehi; simpl.
    - (* no overflow: d in [-half, half); d mod modulus = d + (modulus if d<0) *)
      apply Z.leb_le in Elo. apply Z.ltb_lt in Ehi.
      destruct (Z.le_gt_cases 0 d) as [Hpos | Hneg].
      + (* d >= 0: d mod modulus = d < half ⇒ SF=false; result <0 false ⇒ d>=0 ⇒ ¬(a<b) *)
        rewrite Z.mod_small by lia.
        replace (half <=? d) with false by (symmetry; apply Z.leb_gt; lia).
        simpl. unfold d. lia.
      + (* d < 0: d mod modulus = d + modulus ∈ [half, modulus) ⇒ SF=true ⇒ a<b *)
        rewrite mod_neg_shift by lia.
        replace (half <=? d + modulus) with true by (symmetry; apply Z.leb_le; lia).
        simpl. unfold d. lia.
    - apply Z.leb_le in Elo. apply Z.ltb_ge in Ehi. (* d >= half: positive overflow *)
      (* d in [half, modulus); d mod modulus = d ⇒ SF=true; OF=true ⇒ xor=false; a>=b *)
      rewrite Z.mod_small by lia.
      replace (half <=? d) with true by (symmetry; apply Z.leb_le; lia).
      simpl. unfold d. lia.
    - apply Z.leb_gt in Elo. apply Z.ltb_lt in Ehi. (* d < -half: negative overflow *)
      (* d in (-modulus, -half); d mod modulus = d + modulus ∈ (0, half) ⇒ SF=false;
         OF=true ⇒ xor=true; and d<0 ⇒ a<b *)
      rewrite mod_neg_shift by lia.
      replace (half <=? d + modulus) with false by (symmetry; apply Z.leb_gt; lia).
      simpl. unfold d. lia.
    - apply Z.leb_gt in Elo. apply Z.ltb_ge in Ehi. lia. (* impossible: d<-half ∧ d>=half *)
  Qed.

  (** ZF ⟺ signed equality (signed and unsigned equality coincide on width-w). *)
  Theorem je_iff_seq : forall a b, zf a b = true <-> sval a = sval b.
  Proof.
    intros a b. rewrite je_iff_eq. unfold uval, sval. split.
    - intro H. rewrite H. reflexivity.
    - intro H. pose proof modulus_pos as Hm.
      pose proof (Z.mod_pos_bound a modulus Hm).
      pose proof (Z.mod_pos_bound b modulus Hm).
      destruct (a mod modulus <? half) eqn:Ea; destruct (b mod modulus <? half) eqn:Eb;
        try apply Z.ltb_lt in Ea; try apply Z.ltb_ge in Ea;
        try apply Z.ltb_lt in Eb; try apply Z.ltb_ge in Eb; lia.
  Qed.

  (** JLE / SETLE: ZF∨(SF⊕OF) ⟺ signed less-or-equal. The headline producer
      rewrite for the common `x <= 1` pattern. *)
  Theorem jle_iff_sle : forall a b,
    (zf a b || xorb (sf a b) (of_ a b)) = true <-> sval a <= sval b.
  Proof.
    intros a b. rewrite orb_true_iff, jl_iff_slt.
    rewrite (je_iff_seq a b). lia.
  Qed.

  (** JG / SETG: ¬(ZF∨(SF⊕OF)) ⟺ signed greater-than. *)
  Theorem jg_iff_sgt : forall a b,
    (zf a b || xorb (sf a b) (of_ a b)) = false <-> sval a > sval b.
  Proof.
    intros a b. split.
    - intro H. destruct (Z.le_gt_cases (sval a) (sval b)) as [Hle | Hgt].
      + apply jle_iff_sle in Hle. rewrite Hle in H. discriminate.
      + lia.
    - intro H. destruct (zf a b || xorb (sf a b) (of_ a b)) eqn:E; [| reflexivity].
      apply jle_iff_sle in E. lia.
  Qed.

End Flags.
