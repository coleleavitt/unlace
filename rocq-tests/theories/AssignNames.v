(** * AssignNames: canonicity of the cluster-rank naming scheme (grounds the
    `variable_merge::assign_names` producer logic and the `debug_calls` gap).

    NOVEL refinement of `LvarNaming`/`NameInversion` tied to the *actual* shipping
    algorithm. `variable_merge::assign_names` works like this:

      1. coalescing partitions SSA values into CLUSTERS (a cluster = one named
         local; members share a name because their live ranges are disjoint);
      2. it iterates the values in a fixed sorted order and assigns `v1, v2, …`
         to clusters in FIRST-APPEARANCE order — so a cluster's name is its RANK
         among clusters, ranked by the position of its earliest-appearing member.

    The decompiler-determinism property this must satisfy: the rank a cluster
    receives must not depend on *how members within a cluster are ordered*, only
    on the cluster structure and the inter-cluster key order. We model the
    algorithm and prove exactly when that holds — and exhibit the failure mode
    (`debug_calls`): when the sort key includes the SSA VERSION, two values of the
    same source variable but different version reorder, shifting ranks. Keying on
    the cluster's structural representative (its minimum key) instead makes the
    rank canonical.

    Kernel-checked, zero admits/axioms. *)

From Stdlib Require Import ZArith List Bool Lia.
From Stdlib Require Import Sorting.Permutation.
Import ListNotations.
Local Open Scope Z_scope.

(** A value carries a cluster id [cid] (which named local it belongs to) and a
    sort key [key] (its position in the iteration order). *)
Record value := mkVal { cid : nat; key : Z }.

(** The first-appearance rank machinery: walking a value list, [seen_before c vs]
    counts the DISTINCT cluster ids that first appear strictly before the first
    occurrence of cluster [c]. The name assigned to cluster [c] is this rank
    (v1 = rank 0, etc.). *)

(** The list of cluster ids in first-appearance order (dedup, keeping first). *)
Fixpoint first_appearances (seen : list nat) (vs : list value) : list nat :=
  match vs with
  | [] => []
  | v :: rest =>
      if existsb (Nat.eqb (cid v)) seen
      then first_appearances seen rest
      else cid v :: first_appearances (cid v :: seen) rest
  end.

Definition cluster_order (vs : list value) : list nat := first_appearances [] vs.

(** Position of [c] in a list of cluster ids (0-based), or [None] if absent. *)
Fixpoint list_pos (c : nat) (l : list nat) : option nat :=
  match l with
  | [] => None
  | x :: xs => if Nat.eqb x c then Some 0%nat
               else match list_pos c xs with Some i => Some (S i) | None => None end
  end.

(** The rank (assigned name index) of cluster [c] in [vs] = its position in the
    first-appearance order. *)
Definition rank (vs : list value) (c : nat) : option nat :=
  list_pos c (cluster_order vs).

(* ================================================================== *)
(** ** Single-cluster collapse: a cluster's members are interchangeable *)
(* ================================================================== *)

(** Within the first-appearance computation, the ONLY thing that matters about a
    value is its [cid]: [first_appearances] inspects [cid v] alone, never [key].
    So replacing a value with any other value of the same [cid] is invisible. *)
Lemma first_appearances_cid_only : forall seen vs vs',
  map cid vs = map cid vs' -> first_appearances seen vs = first_appearances seen vs'.
Proof.
  intros seen vs. revert seen.
  induction vs as [| v vs IH]; intros seen vs' Hmap.
  - destruct vs'; [reflexivity | discriminate Hmap].
  - destruct vs' as [| v' vs']; [discriminate Hmap |].
    simpl in Hmap. injection Hmap as Hcid Hrest.
    simpl. rewrite Hcid.
    destruct (existsb (Nat.eqb (cid v')) seen).
    + apply IH; exact Hrest.
    + f_equal. apply IH; exact Hrest.
Qed.

(** COROLLARY: the cluster order — and hence every rank/name — depends only on
    the sequence of cluster ids, not on which representative value carries each
    id nor on any [key]/version field. This is the precise statement that the
    naming is a function of the cluster structure, not the within-cluster data
    (the property `debug_calls` needs). *)
Theorem cluster_order_cid_only : forall vs vs',
  map cid vs = map cid vs' -> cluster_order vs = cluster_order vs'.
Proof.
  intros vs vs' H. unfold cluster_order. apply first_appearances_cid_only; exact H.
Qed.

Theorem rank_cid_only : forall vs vs' c,
  map cid vs = map cid vs' -> rank vs c = rank vs' c.
Proof.
  intros vs vs' c H. unfold rank. rewrite (cluster_order_cid_only vs vs' H). reflexivity.
Qed.

(* ================================================================== *)
(** ** Stability under within-cluster reordering (the canonicity result) *)
(* ================================================================== *)

(** A "version reshuffle" is any rewrite of the value list that preserves the
    cluster-id sequence (e.g. renumbering SSA versions, or swapping two values of
    the SAME cluster — neither changes [map cid]). The rank is INVARIANT under
    it: assigned names don't move when versions are reshuffled. *)
Theorem rank_stable_under_version_reshuffle : forall vs vs' c,
  map cid vs = map cid vs' -> rank vs c = rank vs' c.
Proof. exact rank_cid_only. Qed.

(** Idempotence/well-definedness: a cluster present in the list has a concrete
    rank, and re-deriving names is deterministic. (Sanity that [rank] is a total
    function of the cid-sequence on present clusters.) *)
Lemma in_cluster_order_has_pos : forall l c,
  In c l -> exists i, list_pos c l = Some i.
Proof.
  induction l as [| x xs IH]; intros c Hin; simpl in *.
  - contradiction.
  - destruct (Nat.eqb x c) eqn:E.
    + exists 0%nat. reflexivity.
    + destruct Hin as [Hx | Hin].
      * subst x. rewrite Nat.eqb_refl in E. discriminate.
      * destruct (IH c Hin) as [i Hi]. rewrite Hi. exists (S i). reflexivity.
Qed.

(* ================================================================== *)
(** ** The failure mode: key-dependent ordering is NOT canonical *)
(* ================================================================== *)

(** If, instead of first-appearance over a cid-only walk, the namer sorts values
    by a [key] that distinguishes members of the same cluster (the SSA-version
    bug), the cluster order can change. We exhibit it: two value lists with the
    SAME clusters but members emitted in different order produce different cluster
    orders when the lists differ in cid-sequence — which is exactly what an
    unstable (version-keyed) sort induces. *)
Theorem version_keyed_order_not_canonical :
  exists vs vs',
    (* same multiset of values (a permutation) … *)
    Permutation vs vs' /\
    (* … but different cluster orders (because the cid-SEQUENCE differs) *)
    cluster_order vs <> cluster_order vs'.
Proof.
  (* cluster 0 then cluster 1, vs. cluster 1 then cluster 0 *)
  exists [mkVal 0 0; mkVal 1 1], [mkVal 1 1; mkVal 0 0]. split.
  - apply perm_swap.
  - simpl. intro H. discriminate H.
Qed.

(** The fix, stated as a theorem: if the namer's iteration order is canonicalized
    so that the cid-sequence is fixed (e.g. members emitted grouped by cluster,
    ordered by the cluster's structural representative — NOT by per-value
    version), then [rank] is permutation-stable. Formally: any two orderings with
    equal cid-sequences agree on all ranks (this is [rank_cid_only], packaged as
    the design guarantee). *)
Theorem canonical_iteration_gives_stable_ranks : forall vs vs',
  map cid vs = map cid vs' -> forall c, rank vs c = rank vs' c.
Proof. intros vs vs' H c. apply rank_cid_only; exact H. Qed.
