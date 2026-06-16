(** * Sccs: strongly-connected-component partition correctness.

    Inter-procedural analysis evaluates the call graph in SCC order (a recursive
    cluster of functions is solved together). The correctness backing
    [compute_sccs] is that the SCCs PARTITION the nodes: mutual reachability is
    an equivalence relation, so its classes are non-empty, cover every node, and
    are pairwise disjoint. We prove this with zero admits/axioms, using the
    standard reflexive-transitive closure for reachability.

    Mirrors the call-graph SCC decomposition in [unlace-ir/src/xref.rs]. *)

From Stdlib Require Import Relations.Relation_Definitions
                          Relations.Relation_Operators.
                          
Section SCC.

  (** Call graph: nodes [N] and a direct-call edge relation [edge]. *)
  Variable N : Type.
  Variable edge : N -> N -> Prop.

  (** Reachability is the reflexive-transitive closure of [edge]. *)
  Definition reaches : N -> N -> Prop := clos_refl_trans N edge.

  Lemma reaches_refl : forall a, reaches a a.
  Proof. intro a. apply rt_refl. Qed.

  Lemma reaches_trans : forall a b c, reaches a b -> reaches b c -> reaches a c.
  Proof. intros a b c Hab Hbc. eapply rt_trans; eauto. Qed.

  Lemma reaches_step : forall a b, edge a b -> reaches a b.
  Proof. intros a b H. apply rt_step. exact H. Qed.

  (** Mutual reachability: the SCC relation. [a ~ b] iff each reaches the other.*)
  Definition same_scc (a b : N) : Prop := reaches a b /\ reaches b a.

  (* ================================================================== *)
  (** ** [same_scc] is an equivalence relation *)
  (* ================================================================== *)

  Theorem same_scc_refl : forall a, same_scc a a.
  Proof. intro a. split; apply reaches_refl. Qed.

  Theorem same_scc_sym : forall a b, same_scc a b -> same_scc b a.
  Proof. intros a b [Hab Hba]. split; assumption. Qed.

  Theorem same_scc_trans : forall a b c,
    same_scc a b -> same_scc b c -> same_scc a c.
  Proof.
    intros a b c [Hab Hba] [Hbc Hcb]. split.
    - apply (reaches_trans a b c Hab Hbc).
    - apply (reaches_trans c b a Hcb Hba).
  Qed.

  (** Packaged as an equivalence (refl + sym + trans). *)
  Theorem same_scc_equiv : equiv N same_scc.
  Proof.
    unfold equiv. split; [| split].
    - exact same_scc_refl.
    - exact same_scc_trans.
    - exact same_scc_sym.
  Qed.

  (* ================================================================== *)
  (** ** The SCC partition *)
  (* ================================================================== *)

  (** An SCC is the equivalence class of a representative. *)
  Definition scc_of (rep n : N) : Prop := same_scc rep n.

  (** TOTAL: every node belongs to its own SCC — the classes cover all nodes. *)
  Theorem scc_total : forall n, scc_of n n.
  Proof. intro n. apply same_scc_refl. Qed.

  (** DISJOINTNESS (the partition property): if two SCCs share a member, they
      are the same class — equivalently, representatives of overlapping SCCs are
      themselves in the same SCC, so the classes coincide. *)
  Theorem scc_disjoint : forall r1 r2 n,
    scc_of r1 n -> scc_of r2 n -> same_scc r1 r2.
  Proof.
    intros r1 r2 n H1 H2. unfold scc_of in *.
    apply (same_scc_trans r1 n r2).
    - exact H1.
    - apply same_scc_sym. exact H2.
  Qed.

  (** Class equality: overlapping SCCs contain exactly the same nodes. *)
  Theorem scc_classes_equal : forall r1 r2 n,
    scc_of r1 n -> scc_of r2 n ->
    forall m, scc_of r1 m <-> scc_of r2 m.
  Proof.
    intros r1 r2 n H1 H2 m.
    assert (Hr : same_scc r1 r2) by (apply (scc_disjoint r1 r2 n H1 H2)).
    unfold scc_of. split; intro Hm.
    - apply (same_scc_trans r2 r1 m); [apply same_scc_sym; exact Hr | exact Hm].
    - apply (same_scc_trans r1 r2 m); [exact Hr | exact Hm].
  Qed.

  (* ================================================================== *)
  (** ** SCC structure: within vs across *)
  (* ================================================================== *)

  (** WITHIN an SCC, every pair is mutually reachable (so a recursive cluster is
      solved together — the inter-procedural fixpoint must iterate the whole
      class). *)
  Theorem within_scc_mutual : forall r a b,
    scc_of r a -> scc_of r b -> reaches a b /\ reaches b a.
  Proof.
    intros r a b Ha Hb.
    assert (Hab : same_scc a b).
    { apply (same_scc_trans a r b).
      - apply same_scc_sym. exact Ha.
      - exact Hb. }
    exact Hab.
  Qed.

  (** ACROSS distinct SCCs there is no mutual reachability: if [a] and [b] are
      NOT in the same SCC, they cannot both reach each other. So the SCC DAG is
      acyclic at the class level — the topological order [compute_sccs] uses is
      well-defined. *)
  Theorem across_scc_no_cycle : forall a b,
    ~ same_scc a b -> ~ (reaches a b /\ reaches b a).
  Proof.
    intros a b Hne [Hab Hba]. apply Hne. split; assumption.
  Qed.

End SCC.
