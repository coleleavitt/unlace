(** * StackFrame: soundness of the stack-local fusion sweep.

    The producer's stack-frame recovery
    (`unlace-passes/src/stack_frame_recovery.rs`) turns a set of observed stack
    accesses (offset + access width) into a set of stack LOCALS by an ascending
    "fusion sweep": walking observations by increasing offset, an access that
    lands strictly inside the previous kept slot (`offset - prev_off < prev.size`
    with `offset > prev_off`) is FOLDED into it (widening the slot); otherwise it
    starts a NEW slot. The property that makes recovered locals trustworthy —
    they don't alias each other — is that the kept slots are pairwise byte
    DISJOINT.

    We model the sweep exactly (a fold with a "head = last kept slot" accumulator
    that grows on a fold and prepends on a keep) and prove:

      1. KEEP-GUARD soundness: a new slot is kept only when it begins at or after
         the previous slot's end (`off >= prev_off + prev_size`) — the exact
         negation of the Rust fold condition under ascending offsets.
      2. FROZEN SIZE: folding grows only the HEAD slot; a slot's size never
         changes once a later slot is kept (it is no longer the head). So a
         fold can never retroactively make an earlier slot overlap a later one.
      3. GLOBAL DISJOINTNESS: the swept slot list is pairwise byte-disjoint.

    These are the frame-separation invariants; the shipping fusion decision is
    conformance-bound to them in `unlace-passes/tests/stackframe_conformance.rs`.
    Zero admits/axioms. *)

From Stdlib Require Import ZArith List Bool Lia.
Import ListNotations.
Local Open Scope Z_scope.

(** A slot is [(offset, size)]; the accumulator holds kept slots in DESCENDING
    offset order (head = most-recently-kept = the only slot a fold can widen). *)
Definition slot := (Z * Z)%type.

(** The Rust fold predicate: observation at [off] lands strictly inside the kept
    slot at [poff] of size [psz]. *)
Definition folds_into (off poff psz : Z) : bool :=
  (off - poff <? psz) && (poff <? off).

(** One sweep step. [w] is the observation's max access width (> 0). *)
Definition step (kept : list slot) (off w : Z) : list slot :=
  match kept with
  | (poff, psz) :: ktail =>
      if folds_into off poff psz
      then (poff, Z.max psz w) :: ktail        (* fold: widen the head *)
      else (off, w) :: kept                     (* keep: new head slot *)
  | [] => [(off, w)]
  end.

Fixpoint sweep (kept : list slot) (obs : list (Z * Z)) : list slot :=
  match obs with
  | [] => kept
  | (off, w) :: rest => sweep (step kept off w) rest
  end.

(* ================================================================== *)
(** ** 1. Keep-guard soundness *)
(* ================================================================== *)

(** If the fold condition is FALSE and offsets are ascending ([poff < off]),
    then the new observation starts at or after the previous slot's end. This is
    the single decision that makes kept slots disjoint. *)
Theorem keep_guard_disjoint : forall off poff psz,
  poff < off -> folds_into off poff psz = false ->
  poff + psz <= off.
Proof.
  intros off poff psz Hlt Hff. unfold folds_into in Hff.
  apply andb_false_iff in Hff. destruct Hff as [H | H].
  - apply Z.ltb_ge in H. lia.
  - apply Z.ltb_ge in H. lia.  (* poff < off contradicts this branch, but lia closes *)
Qed.

(* ================================================================== *)
(** ** 2. Disjointness predicate + frozen-tail observation *)
(* ================================================================== *)

(** Slots in DESCENDING offset order are pairwise disjoint when each adjacent
    pair [(b,szb) :: (a,sza)] has [a + sza <= b]. (Transitively this gives
    disjointness of all pairs, since offsets descend.) *)
Fixpoint disjoint_desc (l : list slot) : Prop :=
  match l with
  | (b, _) :: (((a, sza) :: _) as tl) => a + sza <= b /\ disjoint_desc tl
  | _ => True
  end.

(** Every slot offset in the accumulator is < a bound [m] (the next observation
    offset). Threaded so the keep-step can use ascending order. *)
Definition all_off_lt (l : list slot) (m : Z) : Prop :=
  Forall (fun s => fst s < m) l.

(** A fold widens only the head and preserves [disjoint_desc]: growing the head
    slot's size affects only the head-vs-next-observation relation, never the
    already-established [a + sza <= b] of the pair below it. *)
Lemma step_fold_preserves_disjoint : forall poff psz w ktail,
  disjoint_desc ((poff, psz) :: ktail) ->
  disjoint_desc ((poff, Z.max psz w) :: ktail).
Proof.
  intros poff psz w ktail H.
  destruct ktail as [| (a, sza) tl].
  - simpl. exact I.
  - simpl in H |- *. exact H.   (* a + sza <= poff is unchanged by head size *)
Qed.

(** A keep prepends a strictly-higher slot that begins at/after the old head's
    end, preserving [disjoint_desc]. *)
Lemma step_keep_preserves_disjoint : forall off w poff psz ktail,
  poff + psz <= off ->
  disjoint_desc ((poff, psz) :: ktail) ->
  disjoint_desc ((off, w) :: (poff, psz) :: ktail).
Proof.
  intros off w poff psz ktail Hge Hd. simpl. split; [exact Hge | exact Hd].
Qed.

(* ================================================================== *)
(** ** 3. Global disjointness of the swept slot list *)
(* ================================================================== *)

(** [step] preserves disjointness, given ascending offsets (the head offset is
    below the new observation offset). *)
Lemma step_preserves_disjoint : forall kept off w,
  disjoint_desc kept -> all_off_lt kept off -> 0 < w ->
  disjoint_desc (step kept off w).
Proof.
  intros kept off w Hd Hlt Hw. unfold step.
  destruct kept as [| (poff, psz) ktail].
  - simpl. exact I.
  - destruct (folds_into off poff psz) eqn:Hff.
    + apply step_fold_preserves_disjoint. exact Hd.
    + (* keep: head offset poff < off (from all_off_lt), guard false ⇒ disjoint *)
      assert (Hpoff : poff < off).
      { inversion Hlt as [| ? ? Hh _]; subst. exact Hh. }
      apply step_keep_preserves_disjoint; [| exact Hd].
      apply keep_guard_disjoint; assumption.
Qed.

(** [step] keeps every kept offset below the NEXT observation offset [m], given
    the current observation [off < m] and the accumulator already [< off]
    (so after the step, the new head [off < m] and the old ones stay [< m]). *)
Lemma step_preserves_all_off_lt : forall kept off w m,
  all_off_lt kept off -> off < m -> all_off_lt (step kept off w) m.
Proof.
  intros kept off w m Hlt Hoff. unfold step, all_off_lt in *.
  destruct kept as [| (poff, psz) ktail].
  - constructor; [simpl; exact Hoff | constructor].
  - destruct (folds_into off poff psz).
    + (* fold: head offset poff unchanged, still < off < m; tail < off < m *)
      inversion Hlt as [| ? ? Hh Ht]; subst. simpl in Hh.
      constructor; [simpl; lia |].
      revert Ht. apply Forall_impl. intros s Hs. lia.
    + (* keep: new head off < m; old all < off < m *)
      constructor; [simpl; exact Hoff |].
      revert Hlt. apply Forall_impl. intros s Hs. lia.
Qed.

(** Observations are strictly ascending by offset. *)
Fixpoint ascending (obs : list (Z * Z)) : Prop :=
  match obs with
  | (o1, _) :: (((o2, _) :: _) as tl) => o1 < o2 /\ ascending tl
  | _ => True
  end.

Definition widths_pos (obs : list (Z * Z)) : Prop :=
  Forall (fun ow => 0 < snd ow) obs.

(** MAIN: sweeping a strictly-ascending, positive-width observation list onto a
    disjoint accumulator (whose offsets are all below the first observation)
    yields a pairwise-DISJOINT slot list. With [kept = []] this is exactly the
    frame-separation guarantee: every recovered stack local is byte-disjoint
    from every other. *)
Theorem sweep_disjoint : forall obs kept,
  disjoint_desc kept ->
  (match obs with (o,_)::_ => all_off_lt kept o | [] => True end) ->
  ascending obs -> widths_pos obs ->
  disjoint_desc (sweep kept obs).
Proof.
  induction obs as [| (off, w) rest IH]; intros kept Hd Hbound Hasc Hwp.
  - simpl. exact Hd.
  - simpl. apply IH.
    + apply step_preserves_disjoint; [exact Hd | exact Hbound |].
      inversion Hwp as [| ? ? Hh _]; subst. simpl in Hh. exact Hh.
    + (* bound for the recursive call: all offsets of (step ...) < next obs off *)
      destruct rest as [| (o2, w2) rest2]; [exact I |].
      simpl in Hasc. destruct Hasc as [Hlt _].
      apply step_preserves_all_off_lt; [exact Hbound | exact Hlt].
    + destruct rest as [| (o2, w2) rest2]; [exact I |].
      simpl in Hasc. destruct Hasc as [_ Ht]. exact Ht.
    + inversion Hwp; assumption.
Qed.

(** Specialized to the producer's actual entry point ([kept = []]): the swept
    locals of any ascending, positive-width observation stream are pairwise
    disjoint. *)
Corollary sweep_from_empty_disjoint : forall obs,
  ascending obs -> widths_pos obs -> disjoint_desc (sweep [] obs).
Proof.
  intros obs Hasc Hwp. apply sweep_disjoint.
  - exact I.
  - destruct obs as [| (o, w) rest]; [exact I | apply Forall_nil].
  - exact Hasc.
  - exact Hwp.
Qed.
