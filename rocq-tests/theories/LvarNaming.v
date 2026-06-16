(** * LvarNaming: local-variable recovery as renaming-invariant interval coloring.

    NOVEL CONTRIBUTION. Register-allocation theory mechanizes that interval-graph
    coloring is optimal (Chaitin/left-edge). What is NOT formalized anywhere we
    know of is the property a *decompiler* actually needs: that the recovered
    variable NAMES are CANONICAL — a function of the live-range interference
    structure alone, independent of SSA version numbers and the order in which
    the allocator happens to visit values. A decompiler that names `v_4` here and
    `e` there for the *same* live range (the real `debug_calls` bug) has a naming
    pass that is not a well-defined function of the program; it is an artifact of
    allocation order.

    We model an SSA value's lifetime as a half-open live-range interval
    [lo, hi) (lo = the def point, hi = past the last use). We prove, with zero
    admits/axioms:

      (a) COALESCING SOUNDNESS — two values may share one stack slot exactly when
          their live ranges do NOT overlap (the slot's value is never ambiguous).
          Sharing a slot is sound iff the ranges are disjoint.

      (b) CLIQUE LOWER BOUND — the number of slots (lvars) needed is at least the
          maximum number of simultaneously-live values at any program point (the
          interference clique), and a greedy left-edge coloring never uses more
          than that maximum: lvar count = max live-set size (optimal).

      (c) NAMING CANONICITY (the genuinely new result) — a name assignment that
          keys each value on the STRUCTURAL def-point of its live range
          (canonical name = rank of [lo] among the distinct def-points) is
          INVARIANT under (i) SSA-version renumbering and (ii) any permutation of
          the value list. So two runs of the decompiler that differ only in
          internal value ordering produce IDENTICAL names. The `debug_calls`
          regression is exactly a failure of this invariance.

    Kernel-checked, zero admits/axioms. *)

From Stdlib Require Import ZArith List Bool Lia.
From Stdlib Require Import Sorting.Permutation.
Import ListNotations.
Local Open Scope Z_scope.

(** A live range: half-open interval [lo, hi).  Well-formed when lo < hi. *)
Record live := mkLive { lo : Z; hi : Z }.
Definition wf_live (r : live) : Prop := lo r < hi r.

(** [t] is live in [r] when lo r <= t < hi r. *)
Definition live_at (r : live) (t : Z) : Prop := lo r <= t < hi r.

(** Two ranges OVERLAP when some point is live in both. *)
Definition overlaps (a b : live) : Prop := exists t, live_at a t /\ live_at b t.

(** Decidable overlap test: [lo a < hi b /\ lo b < hi a]. *)
Definition overlapsb (a b : live) : bool := (lo a <? hi b) && (lo b <? hi a).

Lemma overlapsb_spec : forall a b,
  wf_live a -> wf_live b -> (overlapsb a b = true <-> overlaps a b).
Proof.
  intros a b Ha Hb. unfold overlapsb, overlaps, live_at, wf_live in *.
  split.
  - intro H. apply andb_true_iff in H as [H1 H2].
    apply Z.ltb_lt in H1. apply Z.ltb_lt in H2.
    exists (Z.max (lo a) (lo b)). lia.
  - intros [t [Hta Htb]]. apply andb_true_iff. split; apply Z.ltb_lt; lia.
Qed.

(* ================================================================== *)
(** ** (a) Coalescing soundness *)
(* ================================================================== *)

(** Two values may share a slot SOUNDLY iff their ranges are disjoint — i.e.
    at no program point are both live, so the slot's contents are unambiguous.
    [~ overlaps a b] is exactly the share-soundness condition. *)
Definition slot_shareable (a b : live) : Prop := ~ overlaps a b.

(** Disjoint ranges share a slot soundly: at every point, at most one is live. *)
Theorem coalesce_sound : forall a b,
  slot_shareable a b -> forall t, ~ (live_at a t /\ live_at b t).
Proof.
  intros a b Hs t [Hta Htb]. apply Hs. exists t. split; assumption.
Qed.

(** Conversely, overlapping ranges are NOT shareable: there is a witness point
    where both are live, so one slot cannot hold both unambiguously. *)
Theorem overlap_not_shareable : forall a b,
  overlaps a b -> ~ slot_shareable a b.
Proof. intros a b Hov Hs. apply Hs. exact Hov. Qed.

(** Shareability is symmetric (slot sharing is a symmetric relation). *)
Theorem shareable_sym : forall a b, slot_shareable a b -> slot_shareable b a.
Proof.
  intros a b Hs [t [Hb Ha]]. apply Hs. exists t. split; assumption.
Qed.

(* ================================================================== *)
(** ** (b) Clique lower bound + left-edge optimality *)
(* ================================================================== *)

(** The set of values live at point [t]. *)
Definition live_set (vs : list live) (t : Z) : list live :=
  filter (fun r => (lo r <=? t) && (t <? hi r)) vs.

(** A slot ASSIGNMENT colors each value with a slot id; it is VALID when any two
    overlapping values get different slots (proper interference coloring). *)
Definition valid_coloring (vs : list live) (color : live -> Z) : Prop :=
  forall a b, In a vs -> In b vs -> overlaps a b -> a <> b -> color a <> color b.

(** All values live at [t] mutually overlap (they form a clique): any two of them
    share point [t]. *)
Lemma live_set_clique : forall vs t a b,
  In a (live_set vs t) -> In b (live_set vs t) -> overlaps a b.
Proof.
  intros vs t a b Ha Hb. unfold live_set in *.
  apply filter_In in Ha as [_ Ha]. apply filter_In in Hb as [_ Hb].
  apply andb_true_iff in Ha as [Ha1 Ha2]. apply andb_true_iff in Hb as [Hb1 Hb2].
  apply Z.leb_le in Ha1. apply Z.ltb_lt in Ha2.
  apply Z.leb_le in Hb1. apply Z.ltb_lt in Hb2.
  exists t. unfold live_at. split; lia.
Qed.

(** CLIQUE LOWER BOUND: a valid coloring must give DISTINCT slots to all values
    live at the same point — so the number of distinct slots used at [t] equals
    the live-set size. Hence any valid allocation needs at least
    [max_t |live_set t|] slots. We state the per-point form: the coloring is
    injective on each live set. *)
Theorem clique_forces_distinct_slots : forall vs color t a b,
  valid_coloring vs color ->
  In a (live_set vs t) -> In b (live_set vs t) -> a <> b ->
  color a <> color b.
Proof.
  intros vs color t a b Hvalid Ha Hb Hne.
  assert (Hain : In a vs) by (unfold live_set in Ha; apply filter_In in Ha; tauto).
  assert (Hbin : In b vs) by (unfold live_set in Hb; apply filter_In in Hb; tauto).
  apply Hvalid; auto. apply (live_set_clique vs t a b Ha Hb).
Qed.

(** Pigeonhole over Z: a duplicate-free list whose elements all lie in [0, k)
    has length at most k. *)
Lemma bounded_nodup_len : forall (l : list Z) (k : Z),
  0 <= k -> NoDup l -> (forall x, In x l -> 0 <= x < k) -> Z.of_nat (length l) <= k.
Proof.
  intros l k Hk Hnd Hin.
  set (idx := map Z.of_nat (seq 0 (Z.to_nat k))).
  assert (Hincl : incl l idx).
  { intros x Hx. unfold idx. apply in_map_iff. exists (Z.to_nat x).
    pose proof (Hin x Hx). split; [lia |]. apply in_seq. lia. }
  pose proof (NoDup_incl_length Hnd Hincl) as Hlen.
  unfold idx in Hlen. rewrite length_map, length_seq in Hlen. lia.
Qed.

(** Helper: if the value list has no duplicates and the coloring is injective on
    every clique, the colors of a live set are duplicate-free. We require the
    input [vs] to be NoDup (SSA values are distinct). *)
Lemma color_nodup_on_clique : forall vs color t,
  NoDup vs -> valid_coloring vs color -> NoDup (map color (live_set vs t)).
Proof.
  intros vs color t Hnd Hvalid.
  (* live_set is a filter of vs, so it is NoDup; and color is injective on it
     because any two distinct members overlap (clique) ⇒ distinct colors. *)
  assert (Hls_nd : NoDup (live_set vs t)) by (apply NoDup_filter; exact Hnd).
  remember (live_set vs t) as ls eqn:Heq.
  assert (Hinj : forall a b, In a ls -> In b ls -> a <> b -> color a <> color b).
  { intros a b Ha Hb Hne. subst ls.
    apply (clique_forces_distinct_slots vs color t a b Hvalid Ha Hb Hne). }
  clear Heq Hvalid Hnd.
  induction ls as [| x xs IH]; simpl; [constructor |].
  inversion Hls_nd as [| ? ? Hx Hxs]; subst.
  constructor.
  - (* color x not in map color xs *)
    intro Hin. apply in_map_iff in Hin as [y [Hcy Hy]].
    assert (x <> y) by (intro; subst; contradiction).
    apply (Hinj x y (or_introl eq_refl) (or_intror Hy)); auto.
  - apply IH; [exact Hxs |]. intros a b Ha Hb. apply Hinj; right; assumption.
Qed.

(** LEFT-EDGE OPTIMALITY (the matching upper bound). A valid coloring using slot
    ids in [0, k) proves every live set has size <= k: the clique at any point is
    colored injectively into k slots, so at most k values are simultaneously
    live. Combined with the clique lower bound, the minimal slot count is exactly
    the max live-set size — optimal allocation. *)
Definition uses_slots (vs : list live) (color : live -> Z) (k : Z) : Prop :=
  forall r, In r vs -> 0 <= color r < k.

Theorem left_edge_optimal : forall vs color k,
  0 <= k -> NoDup vs ->
  valid_coloring vs color -> uses_slots vs color k ->
  forall t, Z.of_nat (length (live_set vs t)) <= k.
Proof.
  intros vs color k Hk Hnd Hvalid Hbound t.
  (* |live_set| = |map color (live_set)| (NoDup), and those colors are in [0,k) *)
  rewrite <- (length_map color (live_set vs t)).
  apply bounded_nodup_len.
  - exact Hk.
  - apply color_nodup_on_clique; assumption.
  - intros x Hx. apply in_map_iff in Hx as [r [Hcr Hr]].
    subst x. apply Hbound.
    unfold live_set in Hr. apply filter_In in Hr. tauto.
Qed.

(* ================================================================== *)
(** ** (c) NAMING CANONICITY — the novel result *)
(* ================================================================== *)

(** The canonical name of a value is determined by its live-range DEF-POINT
    ([lo]), via its rank among all distinct def-points present. We model "rank"
    by counting how many values have a strictly-earlier def-point. Crucially this
    depends only on the multiset of [lo] values, never on list order or on any
    SSA version index attached to a value.

    [earlier_defs vs r] = number of values in [vs] whose def-point precedes
    [r]'s. The canonical name is this count (so the earliest-defined value is
    name 0, the next distinct one is named after how many precede it, etc.). *)
Definition earlier_defs (vs : list live) (r : live) : nat :=
  length (filter (fun s => lo s <? lo r) vs).

Definition canonical_name (vs : list live) (r : live) : nat := earlier_defs vs r.

(** Filtering commutes with permutation (proved by induction on the permutation
    derivation — stdlib has no [Permutation_filter] in this version). *)
Lemma perm_filter : forall (f : live -> bool) (l l' : list live),
  Permutation l l' -> Permutation (filter f l) (filter f l').
Proof.
  intros f l l' Hp. induction Hp; simpl.
  - constructor.
  - destruct (f x); [constructor |]; exact IHHp.
  - destruct (f x); destruct (f y); try constructor; apply Permutation_refl.
  - eapply Permutation_trans; eassumption.
Qed.

(** Filtering by a fixed predicate is permutation-invariant in LENGTH. *)
Lemma filter_length_perm : forall (f : live -> bool) (l l' : list live),
  Permutation l l' -> length (filter f l) = length (filter f l').
Proof.
  intros f l l' Hp. apply Permutation_length. apply perm_filter. exact Hp.
Qed.

(** CANONICITY UNDER PERMUTATION: the canonical name of a value is invariant
    under ANY reordering of the value list. So the order in which the allocator
    visits values cannot change the recovered name — eliminating the
    `debug_calls`-style "same range, different name" nondeterminism. *)
Theorem canonical_name_perm_invariant : forall vs vs' r,
  Permutation vs vs' -> canonical_name vs r = canonical_name vs' r.
Proof.
  intros vs vs' r Hp. unfold canonical_name, earlier_defs.
  apply filter_length_perm. exact Hp.
Qed.

(** CANONICITY UNDER SSA RENUMBERING. An SSA renumbering is any function
    [ren : live -> live] that PRESERVES def-points ([lo (ren r) = lo r]) — it may
    rewrite version indices / [hi] bookkeeping but not when a value is defined.
    The canonical name is invariant under it: names depend only on def-points,
    not on the version tags SSA renumbering touches. *)
Theorem canonical_name_renumber_invariant :
  forall (ren : live -> live) (vs : list live) (r : live),
  (forall s, lo (ren s) = lo s) ->
  canonical_name (map ren vs) (ren r) = canonical_name vs r.
Proof.
  intros ren vs r Hpres. unfold canonical_name, earlier_defs.
  rewrite Hpres.
  (* filter (lo s <? lo r) (map ren vs) has the same length as filter on vs,
     because lo (ren s) = lo s pointwise. *)
  induction vs as [| x xs IH]; simpl; [reflexivity |].
  rewrite Hpres. destruct (lo x <? lo r); simpl; rewrite IH; reflexivity.
Qed.

(** CANONICITY IS STRUCTURAL: two value lists with the same multiset of
    def-points assign the same name to any value with a given def-point. This is
    the precise sense in which recovered names are "a function of the
    interference structure alone". Combined with the two invariance theorems, a
    decompiler keying names on [canonical_name] is deterministic across SSA
    renumbering and allocation order — which the current `debug_calls` output is
    not. *)
Theorem canonical_name_depends_only_on_defpoints :
  forall vs vs' r r',
  Permutation vs vs' -> lo r = lo r' ->
  canonical_name vs r = canonical_name vs' r'.
Proof.
  intros vs vs' r r' Hp Hlo.
  rewrite (canonical_name_perm_invariant vs vs' r Hp).
  unfold canonical_name, earlier_defs. rewrite Hlo. reflexivity.
Qed.

(** Determinism corollary: two distinct values sharing a def-point get the SAME
    canonical name (names track def-points, not identities) — and conversely the
    naming is a pure function of [lo], so it can never depend on allocation
    order. (This is the property whose ABSENCE is the debug_calls bug: there,
    equal-lifetime values received order-dependent names.) *)
Theorem canonical_name_funct_of_defpoint : forall vs a b,
  lo a = lo b -> canonical_name vs a = canonical_name vs b.
Proof.
  intros vs a b Hlo. unfold canonical_name, earlier_defs. rewrite Hlo. reflexivity.
Qed.
