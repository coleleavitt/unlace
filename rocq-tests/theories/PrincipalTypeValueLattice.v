(** * PrincipalTypeValueLattice: the abstract PrincipalType engine, instantiated
    on unlace's REAL ValueLattice.

    [PrincipalType] proves principal-type uniqueness / no-false-negative /
    witness-monotonicity for any meet-semilattice-with-Top. Here we discharge
    those hypotheses from the proven [ValueLattice] theorems and obtain CONCRETE
    results for unlace's value domain.

    Order convention (this is the load-bearing detail). [PrincipalType]'s [tle]
    is "MORE SPECIFIC THAN" and its [meet] is the greatest-lower-bound in THAT
    order, with [Top] the least-specific element. In [ValueLattice], the
    information order is [vle] where [Unknown] is BOTTOM and the [join] is the
    LUB (the least element ABOVE both). "More specific" is therefore the DUAL of
    [vle], and the [join] is the *meet* in the dual order. So:

      - [tle a b]  := [vle b a]    (dual: "a is more specific than b")
      - [meet]     := [join]       (the GLB in the dual order = LUB in [vle])
      - [Top]      := [Unknown]    (the [vle]-bottom = dual-Top = "no info")

    Under the dual order every PrincipalType hypothesis discharges from an
    existing ValueLattice theorem: [meet_lb_l] is [vle_join_left] read in the
    dual, [meet_glb] is [join_lub], [tle_top] is [Unknown [= x]. Zero
    admits/axioms. *)

From Stdlib Require Import ZArith.
From Unlace Require Import ValueLattice PrincipalType.

(** The "more specific than" order: the dual of the information order [vle]. *)
Definition tsub (a b : VL) : Prop := vle b a.

(** [Unknown] is the [vle]-bottom (refines every element), hence the dual-Top. *)
Lemma vl_unknown_bot : forall x, vle Unknown x.
Proof. intro x. unfold vle. destruct x; reflexivity. Qed.

(** Dual-order laws, each from a ValueLattice theorem. *)
Lemma tsub_refl : forall a, tsub a a.
Proof. intro a. unfold tsub. apply vle_refl. Qed.

Lemma tsub_trans : forall a b c, tsub a b -> tsub b c -> tsub a c.
Proof. unfold tsub. intros a b c Hab Hbc. apply (vle_trans c b a Hbc Hab). Qed.

Lemma tsub_antisym : forall a b, tsub a b -> tsub b a -> a = b.
Proof. unfold tsub. intros a b Hab Hba. apply (vle_antisym a b Hba Hab). Qed.

(** [join] is the meet (GLB) in the dual order. *)
Lemma join_meet_lb_l : forall a b, tsub (join a b) a.
Proof. intros a b. unfold tsub. apply vle_join_left. Qed.

Lemma join_meet_lb_r : forall a b, tsub (join a b) b.
Proof. intros a b. unfold tsub. apply vle_join_right. Qed.

Lemma join_meet_glb : forall a b c, tsub c a -> tsub c b -> tsub c (join a b).
Proof. unfold tsub. intros a b c Hca Hcb. apply join_lub; assumption. Qed.

Lemma tsub_top : forall t, tsub t Unknown.
Proof. intro t. unfold tsub. apply vl_unknown_bot. Qed.

(* ================================================================== *)
(** ** Concrete principal-type results for ValueLattice *)
(* ================================================================== *)

(** UNIQUENESS: a value-recovery constraint has at most one principal (most
    specific, in the [tsub] order) solution in the real ValueLattice — "the
    recovered value" is well-defined. *)
Theorem vl_principal_unique : forall (C : VL -> Prop) p q,
  principal VL tsub C p -> principal VL tsub C q -> p = q.
Proof.
  apply (principal_unique VL tsub tsub_antisym).
Qed.

(** NO FALSE NEGATIVE: if the true value [tsrc] satisfies the recovered
    constraint, the principal solution is at least as specific as it ([tsub])
    and never excludes it. *)
Theorem vl_no_false_negative : forall (C : VL -> Prop) p tsrc,
  C tsrc -> principal VL tsub C p -> tsub p tsrc.
Proof.
  apply (no_false_negative VL tsub).
Qed.

(** A meet-closed value constraint takes its step within the solution set,
    sharpening toward the GLB (= [join] in the dual order). *)
Theorem vl_meet_closed_step : forall (C : VL -> Prop) a b,
  meet_closed VL join C -> C a -> C b ->
  C (join a b) /\ tsub (join a b) a /\ tsub (join a b) b.
Proof.
  apply (meet_closed_step VL tsub join
           join_meet_lb_l join_meet_lb_r).
Qed.

(** WITNESS MONOTONICITY: refining a value constraint with an observed witness
    (an alignment / range / known-bits fact) keeps recovery sound and orders
    the principals — adding facts only sharpens, never invalidates. *)
Theorem vl_refine_keeps_sound : forall (C W : VL -> Prop) p',
  principal VL tsub (refine VL C W) p' -> C p' /\ W p'.
Proof.
  apply (refine_keeps_sound VL tsub).
Qed.

Theorem vl_refine_principal_in_upset : forall (C W : VL -> Prop) p p',
  principal VL tsub C p -> principal VL tsub (refine VL C W) p' -> tsub p p'.
Proof.
  apply (refine_principal_in_upset VL tsub).
Qed.

(** Refinement genuinely shrinks the candidate set: every solution of the
    witnessed constraint solves the original. *)
Theorem vl_refine_shrinks : forall (C W : VL -> Prop) t,
  refine VL C W t -> C t.
Proof.
  apply (refine_shrinks_solutions VL).
Qed.
