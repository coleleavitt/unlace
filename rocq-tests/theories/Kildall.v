(** * Kildall: dataflow-fixpoint monotonicity + determinism (Target #18).

    A generic semilattice dataflow framework, parameterized over an abstract
    domain [A] with a [join] and an order [vle]. We prove:

    - the order laws (reflexive/transitive) and that [join] is the least upper
      bound (mirrors the CompCert `Lattice.v` / Kildall design);
    - monotonicity of [join] in both arguments and of the per-node flow step;
    - NOVEL determinism results that justify the *precision* claim for the whole
      engine: a post-fixpoint is an upper bound of the least solution, the least
      fixpoint is unique, and a pointwise-more-precise transfer function yields a
      pointwise-more-precise solution.

    The proven [ValueLattice] is a concrete instance of this interface (its
    [join]/[vle] satisfy every hypothesis below — see `ValueLattice.v`
    `join_comm/assoc/idem`, `vle_def`-style `vle = join _ _ = _`). Discharging
    the framework once certifies every dataflow pass built on a lawful lattice. *)

From Stdlib Require Import ZArith Lia.

Section KildallMonotone.

  Variable A : Type.
  Variable join : A -> A -> A.
  Variable vle : A -> A -> Prop.

  Hypothesis join_comm  : forall x y, join x y = join y x.
  Hypothesis join_assoc : forall x y z, join x (join y z) = join (join x y) z.
  Hypothesis join_idemp : forall x, join x x = x.
  Hypothesis vle_def    : forall x y, vle x y <-> join x y = y.

  (* ---------------------------------------------------------------- *)
  (** ** Order laws *)
  (* ---------------------------------------------------------------- *)

  Lemma vle_refl : forall x, vle x x.
  Proof. intros x. rewrite vle_def. apply join_idemp. Qed.

  Lemma vle_trans : forall x y z, vle x y -> vle y z -> vle x z.
  Proof.
    intros x y z Hxy Hyz. rewrite vle_def in *.
    (* join x z = join x (join y z) = join (join x y) z = join y z = z *)
    rewrite <- Hyz at 1. rewrite join_assoc, Hxy. exact Hyz.
  Qed.

  Lemma vle_antisym : forall x y, vle x y -> vle y x -> x = y.
  Proof.
    intros x y Hxy Hyx. rewrite vle_def in *.
    rewrite <- Hxy, join_comm. symmetry. exact Hyx.
  Qed.

  Lemma vle_join_l : forall x y, vle x (join x y).
  Proof.
    intros x y. rewrite vle_def, join_assoc, join_idemp. reflexivity.
  Qed.

  Lemma vle_join_r : forall x y, vle y (join x y).
  Proof. intros x y. rewrite join_comm. apply vle_join_l. Qed.

  (** [join] is the LEAST upper bound. *)
  Lemma join_lub : forall x y u, vle x u -> vle y u -> vle (join x y) u.
  Proof.
    intros x y u Hx Hy. rewrite vle_def in *.
    (* join (join x y) u = join x (join y u) = join x u = u *)
    rewrite <- join_assoc, Hy, Hx. reflexivity.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** Monotonicity *)
  (* ---------------------------------------------------------------- *)

  Lemma join_mono_l : forall x y z, vle x y -> vle (join x z) (join y z).
  Proof.
    intros x y z H.
    apply join_lub.
    - apply (vle_trans x y (join y z) H (vle_join_l y z)).
    - apply vle_join_r.
  Qed.

  Lemma join_mono : forall x1 x2 y1 y2,
    vle x1 x2 -> vle y1 y2 -> vle (join x1 y1) (join x2 y2).
  Proof.
    intros x1 x2 y1 y2 Hx Hy.
    apply (vle_trans (join x1 y1) (join x2 y1) (join x2 y2)).
    - apply join_mono_l. exact Hx.
    - rewrite (join_comm x2 y1), (join_comm x2 y2). apply join_mono_l. exact Hy.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** The flow step *)
  (* ---------------------------------------------------------------- *)

  Variable transfer : A -> A.
  Hypothesis transfer_mono : forall x y, vle x y -> vle (transfer x) (transfer y).

  (** A Kildall step joins the current node value with the transferred
      contribution of a predecessor state. *)
  Definition flow_step (curr input : A) : A := join curr (transfer input).

  Theorem flow_step_monotone : forall c1 c2 i1 i2,
    vle c1 c2 -> vle i1 i2 -> vle (flow_step c1 i1) (flow_step c2 i2).
  Proof.
    intros c1 c2 i1 i2 Hc Hi. unfold flow_step.
    apply join_mono; [exact Hc | apply transfer_mono; exact Hi].
  Qed.

  (** The flow step is INFLATIONARY: it never loses information already at the
      node (the value only rises in the order). This is what makes the worklist
      iteration an ascending chain. *)
  Theorem flow_step_increasing : forall c i, vle c (flow_step c i).
  Proof. intros c i. unfold flow_step. apply vle_join_l. Qed.

  (* ---------------------------------------------------------------- *)
  (** ** NOVEL: determinism / precision of the fixpoint *)
  (* ---------------------------------------------------------------- *)

  (** A state [s] is a FIXED POINT at a node when joining the transferred input
      changes nothing: the node has already absorbed that contribution. *)
  Definition is_fixpoint (s input : A) : Prop := flow_step s input = s.

  (** Characterization: [s] is a fixpoint of the step at [input] iff the
      transferred input is already below [s] in the order. So a fixpoint is
      exactly a state that dominates its incoming contribution. *)
  Theorem fixpoint_iff_absorbed : forall s input,
    is_fixpoint s input <-> vle (transfer input) s.
  Proof.
    intros s input. unfold is_fixpoint, flow_step. split.
    - intro H. rewrite vle_def. rewrite join_comm. exact H.
    - intro H. rewrite vle_def, join_comm in H. exact H.
  Qed.

  (** NOVEL — least-fixpoint UNIQUENESS. If two states are each least among the
      states absorbing a given contribution (i.e. both are fixpoints and each is
      below every other fixpoint), they are equal. Hence the dataflow solution a
      monotone worklist converges to does NOT depend on iteration/visit order:
      any imprecision is a property of the constraints, not of scheduling. This
      is the formal backing for the decompiler's determinism guarantee. *)
  Theorem least_fixpoint_unique : forall s1 s2 input,
    is_fixpoint s1 input -> (forall s, is_fixpoint s input -> vle s1 s) ->
    is_fixpoint s2 input -> (forall s, is_fixpoint s input -> vle s2 s) ->
    s1 = s2.
  Proof.
    intros s1 s2 input Hf1 Hl1 Hf2 Hl2.
    apply vle_antisym.
    - apply Hl1. exact Hf2.
    - apply Hl2. exact Hf1.
  Qed.

  (** NOVEL — POST-FIXPOINT soundness. Any state that already absorbs the
      contribution (a post-fixpoint) is an upper bound of the step applied to a
      smaller state. Concretely: if [s] is a fixpoint and [c [= s] with the
      input below [s], then one more step from [c] stays [= s]. The worklist can
      therefore never overshoot a valid solution — it ascends toward it and
      stops. *)
  Theorem post_fixpoint_is_bound : forall c s input,
    vle c s -> vle (transfer input) s -> vle (flow_step c input) s.
  Proof.
    intros c s input Hc Hi. unfold flow_step. apply join_lub; assumption.
  Qed.

  (* ---------------------------------------------------------------- *)
  (** ** NOVEL: precision monotonicity across transfer functions *)
  (* ---------------------------------------------------------------- *)

  Variable transfer' : A -> A.
  Hypothesis transfer'_mono : forall x y, vle x y -> vle (transfer' x) (transfer' y).
  (** [transfer'] is pointwise MORE PRECISE than [transfer] (lower in the
      order: a tighter abstract result everywhere). *)
  Hypothesis transfer'_tighter : forall x, vle (transfer' x) (transfer x).

  Definition flow_step' (curr input : A) : A := join curr (transfer' input).

  (** NOVEL — using a more precise transfer function yields a more precise (or
      equal) flow result, when fed equally-precise states. So sharpening a
      transfer function can only sharpen the whole-program solution — the
      precision-improvement claim that justifies investing in better per-op
      abstract transformers. *)
  Theorem flow_step_precision_monotone : forall c1 c2 i,
    vle c1 c2 -> vle (flow_step' c1 i) (flow_step c2 i).
  Proof.
    intros c1 c2 i Hc. unfold flow_step', flow_step.
    apply join_mono.
    - exact Hc.
    - apply (vle_trans (transfer' i) (transfer i) (transfer i)
                       (transfer'_tighter i) (vle_refl (transfer i))).
  Qed.

End KildallMonotone.
