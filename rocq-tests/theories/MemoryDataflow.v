(** * MemoryDataflow: a memory-aware abstract store transfer that bridges the
    SPATIAL alias proofs ([MemoryAlias]) into the VALUE-precision pipeline
    ([ValueLattice] / [Kildall] / [PrecisionPipeline]).

    The value dataflow so far assumed registers/locations update cleanly. Real
    code has [Store] instructions: a store to pointer [w] must (a) update [w]'s
    abstract value, (b) PRESERVE the exact lattice value of every location proven
    [must_not_alias w] (so spatial precision becomes value precision), and (c)
    safely DOWNGRADE possibly-aliasing locations to [Overdefined] (Top). We model
    this [store_transfer] and prove, with zero admits/axioms:

      1. FRAME: a store leaves the exact value of a non-aliasing location
         unchanged (the spatial→value precision bridge);
      2. SOUNDNESS: every non-target location only RISES in [vle] (a sound
         over-approximation — values never silently sharpen);
      3. MONOTONICITY: [store_transfer] is monotone in the incoming abstract
         memory, so it plugs into [Kildall]/[PrecisionPipeline] as a transfer;
      4. CHAIN FRAME: a sequence of stores all disjoint from [l] preserves [l]'s
         exact value end-to-end (memory-aware precision across a basic block).

    A concrete section ties the abstract alias oracle to [MemoryAlias]'s
    byte-range [must_not_alias] and shows a store pipeline is precision-monotone. *)

From Stdlib Require Import List ZArith Bool Lia.
Import ListNotations.
From Unlace Require Import ValueLattice MemoryAlias PrecisionPipeline.

(** [Overdefined] is the top of [vle]: every element is below it. *)
Lemma vle_top : forall x, vle x Overdefined.
Proof. intro x. unfold vle. destruct x; reflexivity. Qed.

Lemma join_top_r : forall x, join x Overdefined = Overdefined.
Proof. intro x. destruct x; reflexivity. Qed.

Section MemoryDataflow.

  (** Abstract memory: a map from locations to lattice values. *)
  Variable Loc : Type.
  Variable Leq : Loc -> Loc -> bool.        (* location equality test *)
  Hypothesis Leq_spec : forall a b, Leq a b = true <-> a = b.

  (** A decidable alias oracle: [no_alias w l = true] means the analysis PROVED
      [w] and [l] do not alias (so a store to [w] is safe at [l]). It must be
      SOUND: a "no_alias" verdict is only issued for genuinely distinct
      locations (modelled by the location-equality test — equal locations always
      alias, so the oracle must not claim no-alias for them). *)
  Variable no_alias : Loc -> Loc -> bool.
  Hypothesis no_alias_irrefl : forall l, no_alias l l = false.

  Definition amem := Loc -> VL.

  (** [store_transfer w v m]: write [v] to [w]; keep locations proven
      non-aliasing; downgrade everything else (possible aliases) to Top. *)
  Definition store_transfer (w : Loc) (v : VL) (m : amem) : amem :=
    fun l =>
      if Leq l w then v
      else if no_alias w l then m l
      else Overdefined.

  (* ================================================================== *)
  (** ** (1) Frame: non-aliasing locations keep their exact value *)
  (* ================================================================== *)

  Theorem store_preserves_disjoint : forall w v m l,
    Leq l w = false ->
    no_alias w l = true ->
    store_transfer w v m l = m l.
  Proof.
    intros w v m l Hneq Hna. unfold store_transfer.
    rewrite Hneq, Hna. reflexivity.
  Qed.

  (* ================================================================== *)
  (** ** (2) Soundness: every non-target location only rises in vle *)
  (* ================================================================== *)

  Theorem store_sound : forall w v m l,
    Leq l w = false -> vle (m l) (store_transfer w v m l).
  Proof.
    intros w v m l Hneq. unfold store_transfer. rewrite Hneq.
    destruct (no_alias w l).
    - apply vle_refl.       (* preserved exactly *)
    - apply vle_top.        (* downgraded to Top, which is above everything *)
  Qed.

  (** The stored location gets exactly the new value. *)
  Theorem store_writes_target : forall w v m,
    store_transfer w v m w = v.
  Proof.
    intros w v m. unfold store_transfer.
    rewrite (proj2 (Leq_spec w w) eq_refl). reflexivity.
  Qed.

  (* ================================================================== *)
  (** ** (3) Monotonicity in the incoming abstract memory *)
  (* ================================================================== *)

  (** Pointwise order on abstract memories. *)
  Definition mem_le (m1 m2 : amem) : Prop := forall l, vle (m1 l) (m2 l).

  (** [store_transfer w v] is monotone: a more-precise incoming memory yields a
      more-precise result, so it is a valid [Kildall]/[PrecisionPipeline]
      transfer (it never manufactures imprecision). *)
  Theorem store_monotone : forall w v m1 m2,
    mem_le m1 m2 -> mem_le (store_transfer w v m1) (store_transfer w v m2).
  Proof.
    intros w v m1 m2 Hle l. unfold store_transfer.
    destruct (Leq l w).
    - apply vle_refl.
    - destruct (no_alias w l).
      + apply Hle.            (* both preserve, monotone by hypothesis *)
      + apply vle_refl.       (* both = Top *)
  Qed.

  (* ================================================================== *)
  (** ** (4) Chain frame: many disjoint stores preserve a location *)
  (* ================================================================== *)

  (** Apply a list of [(w, v)] stores left to right. *)
  Fixpoint store_seq (stores : list (Loc * VL)) (m : amem) : amem :=
    match stores with
    | [] => m
    | (w, v) :: rest => store_seq rest (store_transfer w v m)
    end.

  (** If [l] is proven non-aliasing with — and distinct from — every store
      target in the sequence, its exact value survives the WHOLE block. This is
      the memory-aware precision frame: a value held in a location untouched by a
      basic block's stores is preserved with full precision. *)
  Theorem disjoint_chain_preserves : forall stores m l,
    (forall w v, In (w, v) stores -> Leq l w = false /\ no_alias w l = true) ->
    store_seq stores m l = m l.
  Proof.
    induction stores as [| [w v] rest IH]; intros m l Hall; simpl.
    - reflexivity.
    - (* peel the head store, then recurse *)
      assert (Hhead : Leq l w = false /\ no_alias w l = true)
        by (apply (Hall w v); left; reflexivity).
      destruct Hhead as [Hneq Hna].
      rewrite IH.
      + apply store_preserves_disjoint; assumption.
      + intros w' v' Hin. apply (Hall w' v'). right. exact Hin.
  Qed.

End MemoryDataflow.

(* ================================================================== *)
(** ** Concrete tie-in: MemoryAlias byte ranges as the alias oracle *)
(* ================================================================== *)

(** A decidable [must_not_alias] test on byte ranges: one location ends at or
    before the other begins. *)
Definition mloc_no_alias (w l : mloc) : bool :=
  (Z.leb (m_base w + m_size w) (m_base l)) ||
  (Z.leb (m_base l + m_size l) (m_base w)).

(** SOUNDNESS of the boolean oracle vs [MemoryAlias.must_not_alias]: a "true"
    verdict implies the proven-disjoint [must_not_alias] Prop. So the memory
    dataflow's frame theorem fires exactly when the spatial analysis proved
    non-aliasing — the bridge from byte-range disjointness to value preservation. *)
Theorem mloc_no_alias_sound : forall w l,
  mloc_no_alias w l = true -> must_not_alias w l.
Proof.
  intros w l H. unfold mloc_no_alias, must_not_alias in *.
  apply orb_true_iff in H as [H | H].
  - left. apply Z.leb_le. exact H.
  - right. apply Z.leb_le. exact H.
Qed.

(** A location does not "no-alias" itself when it has positive size (equal
    ranges overlap) — the irreflexivity the abstract transfer requires. *)
Theorem mloc_no_alias_irrefl : forall l,
  0 < m_size l -> mloc_no_alias l l = false.
Proof.
  intros l Hsz. unfold mloc_no_alias.
  apply orb_false_iff. split; apply Z.leb_gt; lia.
Qed.

(** Concrete corollary: when the byte-range oracle proves disjointness, a store
    preserves the other location's exact abstract value — spatial precision
    becoming value precision over the real [MemoryAlias] model. *)
Theorem mloc_store_preserves : forall (Leq : mloc -> mloc -> bool) w v m l,
  Leq l w = false ->
  mloc_no_alias w l = true ->
  store_transfer mloc Leq mloc_no_alias w v m l = m l.
Proof.
  intros Leq w v m l Hneq Hna.
  apply store_preserves_disjoint; assumption.
Qed.

(* ================================================================== *)
(** ** A pipeline of store passes is precision-monotone *)
(* ================================================================== *)

(** Instantiating [PrecisionPipeline] with abstract memory as the state, the
    pointwise order [mem_le] as the precision order, and each store as a pass:
    a sequence of stores is END-TO-END precision-monotone. This is the final
    bridge — the memory-aware transfer composes into the verified precision
    pipeline, so refining the input abstract memory never degrades the output
    after an arbitrary block of stores. *)
Section StorePipeline.

  Variable Loc : Type.
  Variable Leq : Loc -> Loc -> bool.
  Variable no_alias : Loc -> Loc -> bool.

  (** [mem_le] is reflexive and transitive (a precision preorder). *)
  Lemma mem_le_refl : forall m, mem_le Loc m m.
  Proof. intros m l. apply vle_refl. Qed.

  Lemma mem_le_trans : forall a b c,
    mem_le Loc a b -> mem_le Loc b c -> mem_le Loc a c.
  Proof. intros a b c Hab Hbc l. apply (vle_trans (a l) (b l) (c l) (Hab l) (Hbc l)). Qed.

  (** Each store is a precision-monotone pass. *)
  Lemma store_pass_mono : forall w v,
    mono (amem Loc) (mem_le Loc) (store_transfer Loc Leq no_alias w v).
  Proof.
    intros w v m1 m2 H. apply store_monotone. exact H.
  Qed.

  (** A list of stores yields an all-monotone pass list. *)
  Lemma store_passes_mono : forall stores,
    all_mono (amem Loc) (mem_le Loc)
      (map (fun wv => store_transfer Loc Leq no_alias (fst wv) (snd wv)) stores).
  Proof.
    induction stores as [| [w v] rest IH]; simpl; constructor;
      [apply store_pass_mono | exact IH].
  Qed.

  (** END-TO-END: running a block of stores preserves precision monotonicity. *)
  Theorem store_pipeline_precision_monotone : forall stores m1 m2,
    mem_le Loc m1 m2 ->
    mem_le Loc
      (run (amem Loc) (map (fun wv => store_transfer Loc Leq no_alias (fst wv) (snd wv)) stores) m1)
      (run (amem Loc) (map (fun wv => store_transfer Loc Leq no_alias (fst wv) (snd wv)) stores) m2).
  Proof.
    intros stores m1 m2 H.
    apply (pipeline_precision_monotone (amem Loc) (mem_le Loc)
             (map (fun wv => store_transfer Loc Leq no_alias (fst wv) (snd wv)) stores) m1 m2).
    - apply store_passes_mono.
    - exact H.
  Qed.

End StorePipeline.
