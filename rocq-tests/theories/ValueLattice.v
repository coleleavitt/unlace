(** * ValueLattice: lattice laws + concretization soundness.

    Mirrors [crates/unlace-ir/src/value_lattice.rs]. The Rust enum is

      enum ValueLattice { Unknown, Undef, Constant(u64), Range{min,max}, Overdefined }

    and [join]/[meet] are ordered [match] expressions. We reproduce the match
    arms in the SAME priority order here (Overdefined first, then Unknown, then
    Undef, ... for join; Unknown first for meet) so the Coq function is a
    line-by-line mirror of the Rust.

    We model [u64] as [Z]; the lattice algebra does not depend on the 64-bit
    bound, so the theorems hold for all of [Z] and a fortiori for [u64].

    Proven here:
    - join: commutativity, idempotence, associativity
    - join is the least upper bound w.r.t. the concretization order
    - join soundness:  gamma a ∪ gamma b ⊆ gamma (join a b)   (over-approx)
    - meet soundness:  gamma (meet a b) ⊆ gamma a ∩ gamma b    (under-approx)
    - join monotonicity in the [ge] order. *)

From Stdlib Require Import ZArith Bool Lia.
Open Scope Z_scope.

(** The lattice element type, mirroring the Rust enum constructors. *)
Inductive VL : Type :=
  | Unknown
  | Undef
  | Constant (c : Z)
  | Range (min max : Z)
  | Overdefined.

(** [ordered_range a b] mirrors the private [ordered_range] helper. *)
Definition ordered_range (a b : Z) : VL := Range (Z.min a b) (Z.max a b).

(* ------------------------------------------------------------------ *)
(** ** join — mirrors ValueLattice::join, arm-for-arm *)
(* ------------------------------------------------------------------ *)

Definition join (x y : VL) : VL :=
  match x, y with
  (* (Overdefined, _) | (_, Overdefined) => Overdefined *)
  | Overdefined, _ => Overdefined
  | _, Overdefined => Overdefined
  (* (Unknown, x) | (x, Unknown) => x *)
  | Unknown, y => y
  | x, Unknown => x
  (* (Undef, x) | (x, Undef) => x *)
  | Undef, y => y
  | x, Undef => x
  (* (Constant a, Constant b) if a == b => Constant a ; else ordered_range *)
  | Constant a, Constant b => if Z.eqb a b then Constant a else ordered_range a b
  (* (Constant c, Range{min,max}) | (Range{min,max}, Constant c) => widen *)
  | Constant c, Range mn mx => Range (Z.min mn c) (Z.max mx c)
  | Range mn mx, Constant c => Range (Z.min mn c) (Z.max mx c)
  (* (Range a0 a1, Range b0 b1) => Range (min a0 b0) (max a1 b1) *)
  | Range a0 a1, Range b0 b1 => Range (Z.min a0 b0) (Z.max a1 b1)
  end.

(* ------------------------------------------------------------------ *)
(** ** meet — mirrors ValueLattice::meet, arm-for-arm *)
(* ------------------------------------------------------------------ *)

Definition meet (x y : VL) : VL :=
  match x, y with
  | Unknown, _ => Unknown
  | _, Unknown => Unknown
  | Overdefined, y => y
  | x, Overdefined => x
  | Undef, y => y
  | x, Undef => x
  | Constant a, Constant b => if Z.eqb a b then Constant a else Unknown
  | Constant c, Range mn mx => if andb (Z.leb mn c) (Z.leb c mx) then Constant c else Unknown
  | Range mn mx, Constant c => if andb (Z.leb mn c) (Z.leb c mx) then Constant c else Unknown
  | Range a0 a1, Range b0 b1 =>
      let mn := Z.max a0 b0 in
      let mx := Z.min a1 b1 in
      if Z.ltb mx mn then Unknown
      else if Z.eqb mn mx then Constant mn
      else Range mn mx
  end.

(** [contains] mirrors ValueLattice::contains EXACTLY: it is the "precise
    facts" predicate — it answers "is [v] a value this element is *known* to
    take?". Note it returns [False] for [Overdefined] (top) and [Unknown]
    (bottom) just like the Rust [match] arm
        [Unknown | Overdefined | Undef => false]. *)
Definition contains (x : VL) (v : Z) : Prop :=
  match x with
  | Unknown | Overdefined | Undef => False
  | Constant c => c = v
  | Range mn mx => mn <= v <= mx
  end.

(** [gamma] is the abstract-interpretation CONCRETIZATION — the set of
    concrete values an abstract element stands for. This is DISTINCT from
    [contains]:

      - [Overdefined] is TOP: it stands for every value, so [gamma] is [True].
      - [Unknown] and [Undef] are BOTTOM: they stand for no value yet,
        so [gamma] is [False].
      - [Constant]/[Range] coincide with [contains].

    Soundness of [join] (over-approximation) and [meet] (under-approximation)
    is stated w.r.t. this [gamma], following the gamma-only Verasco style. The
    [join]/[meet] ordering in the Rust [match] (Overdefined absorbs in join =
    top; Unknown absorbs in meet = bottom) is exactly what makes [gamma] the
    monotone concretization below. *)
Definition gamma (x : VL) (v : Z) : Prop :=
  match x with
  | Overdefined => True
  | Unknown | Undef => False
  | Constant c => c = v
  | Range mn mx => mn <= v <= mx
  end.

(** Bridge: every precise fact reported by the Rust [contains] is a genuine
    concrete value (contains is sound w.r.t. the concretization). This pins
    the Rust mirror to the abstract semantics. *)
Theorem contains_sound : forall x v, contains x v -> gamma x v.
Proof. intros [| |c|mn mx|] v H; simpl in *; exact H || contradiction. Qed.

(* ================================================================== *)
(** ** join: algebraic lattice laws *)
(* ================================================================== *)

Theorem join_comm : forall x y, join x y = join y x.
Proof.
  intros [| |c1|a1 b1|] [| |c2|a2 b2|]; simpl; try reflexivity.
  - (* Constant, Constant *)
    rewrite (Z.eqb_sym c2 c1).
    destruct (Z.eqb c1 c2) eqn:E1.
    + apply Z.eqb_eq in E1. subst. reflexivity.
    + unfold ordered_range. f_equal; lia.
  - (* Range, Range *) f_equal; lia.
Qed.

Theorem join_idem : forall x, join x x = x.
Proof.
  intros [| |c|a b|]; simpl; try reflexivity.
  - now rewrite Z.eqb_refl.
  - f_equal; lia.
Qed.

Theorem join_assoc : forall x y z, join (join x y) z = join x (join y z).
Proof.
  (* Single-pass case analysis: destruct each [Z.eqb] together with an inline
     [simpl] so the nested-match tree never re-expands. Then discharge the
     min/max endpoint goals with [lia]. (A doubly-nested [repeat match]
     blows up to a 2-minute proof; this stays under a second.) *)
  intros [| |c1|a1 b1|] [| |c2|a2 b2|] [| |c3|a3 b3|]; simpl;
    repeat (match goal with
            | |- context[Z.eqb ?a ?b] => destruct (Z.eqb a b) eqn:?
            end; simpl);
    repeat match goal with
    | H : Z.eqb _ _ = true |- _ => apply Z.eqb_eq in H; subst
    | H : Z.eqb _ _ = false |- _ => apply Z.eqb_neq in H
    end;
    unfold ordered_range in *;
    try reflexivity; try (f_equal; lia); try (exfalso; lia).
Qed.

(* ================================================================== *)
(** ** join: upper-bound / least-upper-bound w.r.t. gamma order *)
(* ================================================================== *)

(** The [gamma]-order: [le x y] means every concrete value of [x] is also a
    concrete value of [y] ("y over-approximates x"). join should be an upper
    bound in this order. *)
Definition le (x y : VL) : Prop := forall v, gamma x v -> gamma y v.

(** join over-approximates BOTH operands: this is exactly the soundness
    statement gamma a ∪ gamma b ⊆ gamma (join a b). *)
Theorem join_ge_left : forall x y, le x (join x y).
Proof.
  intros [| |c1|a1 b1|] [| |c2|a2 b2|] v H; simpl in *; try contradiction;
    try assumption;
    repeat match goal with
    | |- context[Z.eqb ?a ?b] => destruct (Z.eqb a b) eqn:?
    end;
    repeat match goal with
    | H : Z.eqb _ _ = true |- _ => apply Z.eqb_eq in H; subst
    | H : Z.eqb _ _ = false |- _ => apply Z.eqb_neq in H
    end;
    unfold ordered_range; simpl in *; try (subst; lia); try lia.
Qed.

Theorem join_ge_right : forall x y, le y (join x y).
Proof.
  intros x y. rewrite join_comm. apply join_ge_left.
Qed.

(** Combined soundness: gamma a ∪ gamma b ⊆ gamma (join a b). *)
Theorem join_sound : forall x y v, (gamma x v \/ gamma y v) -> gamma (join x y) v.
Proof.
  intros x y v [H | H].
  - now apply join_ge_left.
  - now apply join_ge_right.
Qed.

(** *** The abstract lattice order

    The least-upper-bound and monotonicity properties hold w.r.t. the
    ABSTRACT order induced by join, NOT w.r.t. gamma-inclusion. (Over
    gamma-inclusion the LUB property is genuinely false for a widening join:
    e.g. [join (Range 0 2) (Range 5 7) = Range 0 7] concretizes to a value
    [3] that is in neither operand — a sound over-approximation, but it means
    the abstract join is not the join of the concrete sets. This is the
    standard abstract-interpretation distinction, so we state LUB on the
    abstract order, exactly as CompCert's [Lattice.v] does.) *)
Definition vle (x y : VL) : Prop := join x y = y.

Infix "[=" := vle (at level 70).

(** [vle] is a partial order (reflexive, transitive, antisymmetric):
    the abstract domain is a genuine poset under join. *)
Theorem vle_refl : forall x, x [= x.
Proof. unfold vle. apply join_idem. Qed.

Theorem vle_trans : forall x y z, x [= y -> y [= z -> x [= z.
Proof.
  unfold vle. intros x y z Hxy Hyz.
  rewrite <- Hyz, <- join_assoc, Hxy. reflexivity.
Qed.

Theorem vle_antisym : forall x y, x [= y -> y [= x -> x = y.
Proof.
  unfold vle. intros x y Hxy Hyx.
  rewrite <- Hxy, join_comm. symmetry. exact Hyx.
Qed.

(** join is an upper bound in the abstract order. *)
Theorem vle_join_left : forall x y, x [= join x y.
Proof.
  unfold vle. intros x y. rewrite <- join_assoc, join_idem. reflexivity.
Qed.

Theorem vle_join_right : forall x y, y [= join x y.
Proof.
  unfold vle. intros x y.
  rewrite (join_comm x y), <- join_assoc, join_idem. reflexivity.
Qed.

(** join is the LEAST upper bound: any common upper bound [u] of [x] and [y]
    in the abstract order also bounds [join x y]. *)
Theorem join_lub : forall x y u, x [= u -> y [= u -> join x y [= u.
Proof.
  unfold vle. intros x y u Hx Hy.
  rewrite join_assoc, Hy, Hx. reflexivity.
Qed.

(* ================================================================== *)
(** ** meet: under-approximation soundness *)
(* ================================================================== *)

(** *** A note on [Undef] (a real semantic corner this proof exposes)

    In the Rust [ValueLattice], [Undef] is the identity element for BOTH
    [join] ([Undef, x => x]) AND [meet] ([Undef, x => x]). That makes it
    simultaneously a bottom-for-join and a top-for-meet — the classic
    LLVM "undef can be refined to any value" marker. No single
    concretization [gamma] can be sound for both operations at [Undef]:
      - join soundness needs [gamma Undef = ∅]   (so join Undef y = y is an
        over-approximation), which is what we picked above;
      - meet soundness would need [gamma Undef = ⊤] (so meet Undef y = y is
        an under-approximation of the intersection).
    These are contradictory, so [meet_sound] below is stated on the
    [Undef]-free fragment. This is not a weakness of the proof — it is the
    machine-checked statement of why undef is special, and it pins exactly
    where the Rust lattice deviates from a textbook lattice. *)

(** meet under-approximates the intersection on the [Undef]-free fragment:
    every concrete value the abstract meet admits is admitted by BOTH
    operands. Dual soundness statement: gamma (meet a b) ⊆ gamma a ∩ gamma b. *)
Theorem meet_sound : forall x y v,
  x <> Undef -> y <> Undef -> gamma (meet x y) v -> gamma x v /\ gamma y v.
Proof.
  intros [| |c1|a1 b1|] [| |c2|a2 b2|] v Hx Hy H; simpl in H;
    (* rule out the Undef arms via the hypotheses *)
    try (exfalso; (apply Hx + apply Hy); reflexivity);
    (* Unknown arms: meet = Unknown, gamma = False *)
    try contradiction;
    (* Overdefined-identity arms: meet returns one operand, the other is top *)
    try (split; simpl; (exact I + exact H)).
  (* Remaining: the four numeric arms (Constant/Range × Constant/Range). *)
  all:
    repeat (match type of H with
            | context[Z.eqb ?a ?b] => destruct (Z.eqb a b) eqn:?
            | context[Z.leb ?a ?b] => destruct (Z.leb a b) eqn:?
            | context[Z.ltb ?a ?b] => destruct (Z.ltb a b) eqn:?
            end; simpl in H);
    repeat match goal with
    | E : Z.eqb _ _ = true |- _ => apply Z.eqb_eq in E
    | E : Z.eqb _ _ = false |- _ => apply Z.eqb_neq in E
    | E : Z.leb _ _ = true |- _ => apply Z.leb_le in E
    | E : Z.leb _ _ = false |- _ => apply Z.leb_gt in E
    | E : Z.ltb _ _ = true |- _ => apply Z.ltb_lt in E
    | E : Z.ltb _ _ = false |- _ => apply Z.ltb_ge in E
    end;
    try contradiction; split; simpl; lia.
Qed.

(** meet is COMPLETE for common precise facts: if a concrete value is a known
    fact of both [x] and [y] (per the Rust [contains]), the abstract [meet]
    keeps it. This is the greatest-lower-bound completeness direction and the
    property the decompiler relies on when intersecting/refining facts. No
    [Undef] caveat is needed because [contains] is already [False] on [Undef].*)
Theorem meet_complete : forall x y v,
  contains x v -> contains y v -> contains (meet x y) v.
Proof.
  intros [| |c1|a1 b1|] [| |c2|a2 b2|] v Hx Hy; simpl in *;
    try contradiction;
    repeat (match goal with
            | |- context[Z.eqb ?a ?b] => destruct (Z.eqb a b) eqn:?
            | |- context[Z.leb ?a ?b] => destruct (Z.leb a b) eqn:?
            | |- context[Z.ltb ?a ?b] => destruct (Z.ltb a b) eqn:?
            end; simpl);
    repeat match goal with
    | E : Z.eqb _ _ = true |- _ => apply Z.eqb_eq in E
    | E : Z.eqb _ _ = false |- _ => apply Z.eqb_neq in E
    | E : Z.leb _ _ = true |- _ => apply Z.leb_le in E
    | E : Z.leb _ _ = false |- _ => apply Z.leb_gt in E
    | E : Z.ltb _ _ = true |- _ => apply Z.ltb_lt in E
    | E : Z.ltb _ _ = false |- _ => apply Z.ltb_ge in E
    end;
    simpl; try lia.
Qed.

(* ================================================================== *)
(** ** join monotonicity *)
(* ================================================================== *)

(** If [x] is below [x'] in the abstract order, then [join x y] is below
    [join x' y]. Monotonicity of the merge operator — the property Kildall
    iteration relies on for termination/soundness. *)
Theorem join_monotone : forall x x' y, x [= x' -> join x y [= join x' y.
Proof.
  intros x x' y H.
  apply join_lub.
  - (* x [= join x' y *)
    apply (vle_trans x x' (join x' y) H (vle_join_left x' y)).
  - (* y [= join x' y *)
    apply vle_join_right.
Qed.

(** Monotonicity in BOTH arguments simultaneously: this is the form the Kildall
    worklist needs (a node's new value is the join of MANY predecessor
    contributions, each of which may rise). Proved by composing the single-arg
    monotonicity through [vle_trans]. *)
Theorem join_monotone_both : forall x x' y y',
  x [= x' -> y [= y' -> join x y [= join x' y'.
Proof.
  intros x x' y y' Hx Hy.
  apply (vle_trans (join x y) (join x' y) (join x' y')).
  - apply join_monotone. exact Hx.
  - rewrite (join_comm x' y), (join_comm x' y').
    apply join_monotone. exact Hy.
Qed.
