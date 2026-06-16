(** * KildallValueLattice: the abstract Kildall framework, instantiated on
    unlace's REAL ValueLattice.

    The [Kildall] section proves dataflow monotonicity / fixpoint-uniqueness /
    determinism for ANY lawful semilattice. Here we discharge those laws from
    the already-proven [ValueLattice] theorems and obtain CONCRETE corollaries
    about unlace's actual value-propagation domain — turning "provable in
    principle" into "proved for unlace's code." Zero admits/axioms.

    The only adapter needed: [Kildall]'s [join_assoc] is stated in the
    orientation [join x (join y z) = join (join x y) z], the mirror of
    [ValueLattice.join_assoc]; we bridge with one [symmetry]. The [vle_def]
    obligation ([vle x y <-> join x y = y]) holds definitionally because
    [ValueLattice.vle x y := join x y = y]. *)

From Stdlib Require Import ZArith.
From Unlace Require Import ValueLattice Kildall.

(** Kildall's associativity orientation, derived from ValueLattice's. *)
Lemma vl_join_assoc' : forall x y z, join x (join y z) = join (join x y) z.
Proof. intros. symmetry. apply join_assoc. Qed.

(** [vle] characterization matching Kildall's [vle_def]. *)
Lemma vl_vle_def : forall x y, vle x y <-> join x y = y.
Proof. intros x y. unfold vle. reflexivity. Qed.

(* ================================================================== *)
(** ** Concrete dataflow corollaries for ValueLattice *)
(* ================================================================== *)

Section ValueLatticeDataflow.

  (** Any monotone transfer function over the value lattice (e.g. a per-
      instruction abstract evaluator). *)
  Variable transfer : VL -> VL.
  Hypothesis transfer_mono : forall x y, vle x y -> vle (transfer x) (transfer y).

  (** unlace's value-propagation FLOW STEP is monotone: rising predecessor
      states / node values only raise the result. (Kildall's worklist
      ascending-chain property, for the real lattice.) *)
  Theorem vl_flow_step_monotone : forall c1 c2 i1 i2,
    vle c1 c2 -> vle i1 i2 ->
    vle (flow_step VL join transfer c1 i1)
        (flow_step VL join transfer c2 i2).
  Proof.
    apply (flow_step_monotone VL join vle
             join_comm vl_join_assoc' join_idem vl_vle_def
             transfer transfer_mono).
  Qed.

  (** The flow step never loses information already at a node. *)
  Theorem vl_flow_step_increasing : forall c i,
    vle c (flow_step VL join transfer c i).
  Proof.
    apply (flow_step_increasing VL join vle
             vl_join_assoc' join_idem vl_vle_def transfer).
  Qed.

  (** DETERMINISM: unlace's value-propagation fixpoint is UNIQUE — independent
      of worklist/visit order. Any imprecision in a recovered value is a
      property of the binary's constraints, not an artifact of scheduling. *)
  Theorem vl_least_fixpoint_unique : forall s1 s2 input,
    is_fixpoint VL join transfer s1 input ->
    (forall s, is_fixpoint VL join transfer s input -> vle s1 s) ->
    is_fixpoint VL join transfer s2 input ->
    (forall s, is_fixpoint VL join transfer s input -> vle s2 s) ->
    s1 = s2.
  Proof.
    apply (least_fixpoint_unique VL join vle
             join_comm vl_vle_def transfer).
  Qed.

  (** A post-fixpoint bounds the iteration: the worklist never overshoots a
      valid solution. *)
  Theorem vl_post_fixpoint_is_bound : forall c s input,
    vle c s -> vle (transfer input) s ->
    vle (flow_step VL join transfer c input) s.
  Proof.
    apply (post_fixpoint_is_bound VL join vle
             vl_join_assoc' vl_vle_def transfer).
  Qed.

End ValueLatticeDataflow.

(** join is monotone in both arguments on the real lattice (the Kildall-derived
    form; complements [ValueLattice.join_monotone_both]). *)
Theorem vl_join_mono_both : forall x1 x2 y1 y2,
  vle x1 x2 -> vle y1 y2 -> vle (join x1 y1) (join x2 y2).
Proof.
  apply (join_mono VL join vle
           join_comm vl_join_assoc' join_idem vl_vle_def).
Qed.
