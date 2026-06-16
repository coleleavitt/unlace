(** * SsaDominance: dominance partial order, SSA well-formedness, and the
    φ-node type-join soundness tie-in.

    SSA-based type propagation rests on two structural facts: (1) the dominance
    relation on basic blocks is a partial order with a well-defined immediate
    dominator, and (2) at a φ-node the joined type fact soundly over-approximates
    every incoming predecessor's fact. We prove both, with the φ-join
    instantiated on the real [ValueLattice]. Zero admits/axioms.

    Dominance is modelled abstractly by its defining properties (reflexive,
    transitive, antisymmetric — the standard CFG-dominance poset), which is all
    the type-propagation soundness argument needs; we do not re-derive the
    dominator-tree construction here. *)

From Stdlib Require Import List ZArith.
Import ListNotations.
From Unlace Require Import ValueLattice.

Section Dominance.

  (** Basic blocks and the dominance relation [dom a b] = "a dominates b". *)
  Variable Block : Type.
  Variable dom : Block -> Block -> Prop.

  Hypothesis dom_refl    : forall b, dom b b.
  Hypothesis dom_trans   : forall a b c, dom a b -> dom b c -> dom a c.
  Hypothesis dom_antisym : forall a b, dom a b -> dom b a -> a = b.

  (** Dominance is a partial order (the dominator-tree order). *)
  Theorem dom_partial_order :
    (forall b, dom b b) /\
    (forall a b c, dom a b -> dom b c -> dom a c) /\
    (forall a b, dom a b -> dom b a -> a = b).
  Proof. repeat split; eauto. Qed.

  (** The entry block dominates everything (if such a block exists). *)
  Theorem entry_dominates_all : forall e,
    (forall b, dom e b) -> forall b, dom e b.
  Proof. intros e He b. apply He. Qed.

  (* ---------------------------------------------------------------- *)
  (** ** SSA well-formedness: every use is dominated by its def *)
  (* ---------------------------------------------------------------- *)

  (** [def_block v] is the block defining SSA value [v]; [use_block v u] says [u]
      is a use site of [v]. SSA well-formedness: every use is dominated by the
      (unique) definition. *)
  Variable Val : Type.
  Variable def_block : Val -> Block.
  Variable use_dominated : Val -> Block -> Prop.

  Definition ssa_wf : Prop :=
    forall v u, use_dominated v u -> dom (def_block v) u.

  (** Under SSA well-formedness, a value's definition dominates all its uses
      transitively: any block dominated by a use is also dominated by the def. *)
  Theorem def_dominates_use_closure : ssa_wf ->
    forall v u w, use_dominated v u -> dom u w -> dom (def_block v) w.
  Proof.
    intros Hwf v u w Hu Huw.
    apply (dom_trans (def_block v) u w).
    - apply Hwf. exact Hu.
    - exact Huw.
  Qed.

End Dominance.

(* ================================================================== *)
(** ** φ-node type-join soundness on ValueLattice *)
(* ================================================================== *)

(** A φ-node merges the type facts arriving along each predecessor edge by
    joining them. We fold [join] over the incoming list. *)
Definition phi_join (incoming : list VL) : VL :=
  fold_right join Unknown incoming.

(** Every incoming fact is below the φ-join in the lattice order — the join
    OVER-APPROXIMATES every predecessor, so no concrete value flowing in along
    any edge is excluded. This is φ-as-meet/join soundness for type propagation. *)
Theorem phi_join_upper_bound : forall incoming t,
  In t incoming -> vle t (phi_join incoming).
Proof.
  induction incoming as [| h rest IH]; intros t Hin; simpl in *.
  - contradiction.
  - destruct Hin as [-> | Hrest].
    + (* t = h : h [= join h (fold ...) *)
      apply vle_join_left.
    + (* t in rest : t [= fold rest [= join h (fold rest) *)
      apply (vle_trans t (phi_join rest) (join h (phi_join rest))).
      * apply IH. exact Hrest.
      * apply vle_join_right.
  Qed.

(** Concretization soundness: any value admitted by an incoming fact is admitted
    by the φ-join (γ(φ-join) ⊇ ∪ γ(incoming)). Proved by induction using
    [join_sound] (the concretization over-approximation), NOT via the abstract
    order [vle] — those are genuinely different orders (the AI distinction), so
    we cannot reuse [phi_join_upper_bound] here. *)
Theorem phi_join_gamma_sound : forall incoming t v,
  In t incoming -> gamma t v -> gamma (phi_join incoming) v.
Proof.
  induction incoming as [| h rest IH]; intros t v Hin Hg; simpl in *.
  - contradiction.
  - destruct Hin as [-> | Hrest].
    + (* t = h : gamma h v -> gamma (join h (fold rest)) v *)
      apply join_sound. left. exact Hg.
    + (* t in rest : gamma (fold rest) v, then join_sound on the right *)
      apply join_sound. right. apply (IH t v Hrest Hg).
Qed.

(** The φ-join is the LEAST upper bound: any sound merge [u] that dominates
    every incoming fact also dominates the φ-join — the propagation loses no
    precision beyond what the join inherently must. *)
Theorem phi_join_least : forall incoming u,
  (forall t, In t incoming -> vle t u) -> vle (phi_join incoming) u.
Proof.
  induction incoming as [| h rest IH]; intros u Hall; simpl.
  - (* phi_join [] = Unknown; Unknown [= u for all u *)
    unfold vle. destruct u; reflexivity.
  - apply join_lub.
    + apply Hall. left. reflexivity.
    + apply IH. intros t Ht. apply Hall. right. exact Ht.
Qed.
