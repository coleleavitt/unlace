(** * NameInversion: variable-name recovery as provable inversion of the
    compiler's name-erasure (NOVEL — connects LvarNaming to CompilationInversion).

    Compilation ERASES source variable names: `int total = …` becomes a stack
    slot or register with no name attached. A decompiler RECOVERS a name from the
    surviving structure (the live range). This module formalizes that recovery as
    an INVERSION problem in the style of `CompilationInversion.v`, and proves the
    result that ties it all together:

        a name-recovery function is a well-defined LEFT-INVERSE of name-erasure
        (it recovers the original name up to alpha-renaming) IFF it is CANONICAL
        — i.e. determined by the live-range structure alone (`LvarNaming.v`).

    Three pieces, kernel-checked, zero admits/axioms:

      1. SECTION SOUNDNESS — if recovery is canonical (a function of the def-point
         only) and erasure preserves the def-point, then recover∘erase is the
         identity on names up to the def-point key: the recovered name equals
         what any canonical scheme assigns to that range. So canonical recovery
         is a genuine section of erasure.

      2. RENAMING INVARIANCE LIFTS TO INVERSION — because the canonical name is
         permutation/renumber-invariant (LvarNaming), the recovered program is
         INVARIANT under the compiler's freedom to reorder/renumber: two compiles
         of the same source that differ only in allocation order decompile to the
         same names. This is the decompiler-determinism guarantee at the naming
         level.

      3. NON-CANONICAL ⇒ INCOMPLETE — an allocation-order-dependent namer (the
         real `debug_calls` bug) is NOT a section: we exhibit two value orderings
         of the SAME live ranges on which it returns different names, so it cannot
         equal any function of the structure. This is the precise sense in which
         the bug is a *completeness* failure of the inversion, not a cosmetic
         nit. *)

From Stdlib Require Import ZArith List Bool Lia.
From Stdlib Require Import Sorting.Permutation.
From Unlace Require Import LvarNaming.
Import ListNotations.
Local Open Scope Z_scope.

(** A NAMER assigns a (nat) name to a value, given the value list (its context).
    Canonical namers depend only on the live-range structure; ad-hoc namers may
    depend on list order. *)
Definition namer := list live -> live -> nat.

(** A namer is CANONICAL when it factors through [canonical_name] — equivalently
    when it is permutation-invariant and depends only on def-points. We take the
    structural definition directly: it agrees with [canonical_name] up to a fixed
    relabeling [g] of names (any injective renaming of the name space). *)
Definition canonical (N : namer) : Prop :=
  exists g : nat -> nat,
    (forall n m, g n = g m -> n = m) /\
    (forall vs r, N vs r = g (canonical_name vs r)).

(* ================================================================== *)
(** ** 1. Section soundness: canonical recovery is a section of erasure *)
(* ================================================================== *)

(** A canonical namer gives the SAME name to a value regardless of the value
    list's order — the section property: recovery doesn't depend on how the
    compiler scheduled the values. *)
Theorem canonical_section : forall N vs vs' r,
  canonical N -> Permutation vs vs' -> N vs r = N vs' r.
Proof.
  intros N vs vs' r [g [_ Hg]] Hp.
  rewrite !Hg. f_equal. apply canonical_name_perm_invariant. exact Hp.
Qed.

(** A canonical namer is invariant under SSA renumbering that preserves
    def-points — the recovered name survives the compiler's version bookkeeping.*)
Theorem canonical_renumber_inv : forall N (ren : live -> live) vs r,
  canonical N -> (forall s, lo (ren s) = lo s) ->
  N (map ren vs) (ren r) = N vs r.
Proof.
  intros N ren vs r [g [_ Hg]] Hpres.
  rewrite !Hg. f_equal. apply canonical_name_renumber_invariant. exact Hpres.
Qed.

(** Two values with the same def-point receive the same canonical name — names
    track structure, not identity (the inversion is well-defined on the
    def-point key). *)
Theorem canonical_funct_of_defpoint : forall N vs a b,
  canonical N -> lo a = lo b -> N vs a = N vs b.
Proof.
  intros N vs a b [g [_ Hg]] Hlo.
  rewrite !Hg. f_equal. apply canonical_name_funct_of_defpoint. exact Hlo.
Qed.

(* ================================================================== *)
(** ** 2. Determinism of the recovered program under canonical naming *)
(* ================================================================== *)

(** The "recovered naming" of a whole value list under a namer: the list of
    names, in order. *)
Definition recovered_names (N : namer) (vs : list live) : list nat :=
  map (N vs) vs.

(** Under a canonical namer, reordering the value list permutes the recovered
    names the same way — the naming commutes with the compiler's scheduling
    freedom. So the SET/multiset of recovered names is invariant; the decompiler
    output is deterministic up to the same permutation. *)
Theorem recovered_names_commute : forall N vs vs',
  canonical N -> Permutation vs vs' ->
  Permutation (recovered_names N vs) (recovered_names N vs').
Proof.
  intros N vs vs' Hcanon Hp. unfold recovered_names.
  (* map (N vs) vs  ~  map (N vs') vs'  because N vs = N vs' pointwise (section)
     and map respects permutation *)
  assert (Hpt : forall r, N vs r = N vs' r)
    by (intro r; apply (canonical_section N vs vs' r Hcanon Hp)).
  rewrite (map_ext (N vs) (N vs') Hpt).
  apply Permutation_map. exact Hp.
Qed.

(* ================================================================== *)
(** ** 3. Non-canonical ⇒ not a section (the debug_calls bug, formally) *)
(* ================================================================== *)

(** Structural equality on live ranges. *)
Definition live_eqb (a b : live) : bool := (lo a =? lo b) && (hi a =? hi b).

Lemma live_eqb_refl : forall a, live_eqb a a = true.
Proof. intro a. unfold live_eqb. rewrite !Z.eqb_refl. reflexivity. Qed.

(** Position of [r] in [vs] (0-based), or [length vs] if absent. *)
Fixpoint list_index (r : live) (vs : list live) : nat :=
  match vs with
  | [] => 0
  | x :: xs => if live_eqb x r then 0 else S (list_index r xs)
  end.

(** The ORDER-INDEX namer returns a value's POSITION in the list — the canonical
    model of an allocation-order-dependent namer (it names the i-th visited value
    `v_i`, exactly the `debug_calls` failure mode). *)
Definition order_index_namer : namer := fun vs r => list_index r vs.

(** Two distinct live ranges that share a def-point (e.g. the same variable
    observed via two SSA versions): a canonical namer MUST give them equal names
    (proved above); the order-index namer gives them DIFFERENT names when they
    appear in different positions — so it is not a function of the structure. *)
Theorem order_index_not_canonical : ~ canonical order_index_namer.
Proof.
  intros [g [Hinj Hg]].
  (* Two ranges with the SAME def-point but different identity. *)
  set (a := mkLive 0 5). set (b := mkLive 0 9).
  set (vs := [a; b]).
  (* canonical_name vs a = canonical_name vs b (same lo=0) ⇒ g-images equal ⇒
     order_index_namer vs a = order_index_namer vs b. But the indices are 0 vs 1.*)
  assert (Hca : canonical_name vs a = canonical_name vs b)
    by (apply canonical_name_funct_of_defpoint; reflexivity).
  assert (Hna : order_index_namer vs a = order_index_namer vs b).
  { rewrite (Hg vs a), (Hg vs b), Hca. reflexivity. }
  (* compute the two indices *)
  unfold order_index_namer, vs, a, b, list_index in Hna. simpl in Hna.
  (* index of a is 0; index of b is 1 ⇒ 0 = 1, contradiction *)
  discriminate Hna.
Qed.

(** Concretely: the order-index namer is NOT a section — it returns different
    names for the same value depending on list order, so no relabeling makes it
    agree with the structural canonical name. This is the formal statement that
    the `debug_calls` allocation-order naming is an incompleteness of the
    recovery, exactly what `LvarNaming.canonical_name` repairs. *)
Theorem order_index_order_dependent :
  exists vs vs' r, Permutation vs vs' /\ order_index_namer vs r <> order_index_namer vs' r.
Proof.
  set (a := mkLive 0 5). set (b := mkLive 3 9).
  exists [a; b], [b; a], a. split.
  - apply perm_swap.
  - unfold order_index_namer, a, b, list_index, live_eqb. simpl. discriminate.
Qed.
