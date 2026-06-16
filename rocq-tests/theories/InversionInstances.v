(** * InversionInstances: the novel abstract frameworks, instantiated on real
    unlace value-lattice operations.

    Turns the abstract [CompilationInversion] (decompilation-as-inversion Galois
    connection) and [PrecisionPipeline] (end-to-end precision monotonicity)
    results into CONCRETE theorems about the [ValueLattice] domain. Zero
    admits/axioms. *)

From Stdlib Require Import List.
Import ListNotations.
From Unlace Require Import ValueLattice CompilationInversion PrecisionPipeline.

(* ================================================================== *)
(** ** CompilationInversion on ValueLattice (identity GC instance) *)
(* ================================================================== *)

(** We instantiate the decompilation-as-inversion framework with the ValueLattice
    as BOTH the source-type and recovered-type domain, [vle] as both orders, and
    the identity abstraction/concretization/lowering/recovery. This is the
    exact-recovery instance: it witnesses that the abstract framework's
    hypotheses are all satisfiable by real unlace operations, and yields a
    concrete [recovery_sound] for value recovery. (Non-identity lowerings —
    where compilation genuinely erases information — plug into the same theorem
    by supplying a coarser [alpha]/[recover]; the identity instance is the
    completeness endpoint.) *)

(** Identity is a Galois connection on any preorder: [vle (id s) r <-> vle s (id r)].*)
Lemma id_galois : forall s r, vle ((fun x => x) s) r <-> vle s ((fun x => x) r).
Proof. intros s r. simpl. reflexivity. Qed.

(** Concrete recovery soundness for ValueLattice under exact (identity)
    compilation+recovery: the true value is always within the recovered class. *)
Theorem vl_recovery_sound : forall s : VL,
  vle s ((fun x => x) ((fun x => x) ((fun x => x) s))).
Proof.
  apply (recovery_sound VL VL VL vle vle
           vle_refl vle_trans vle_refl vle_trans
           (fun x => x) (fun x => x) (fun x => x) (fun x => x)
           id_galois).
  - (* recover_sound: vle (alpha s) (recover (lower s)) = vle s s *)
    intro s. apply vle_refl.
Qed.

(** Completeness at every value: exact (identity) recovery is principal — the
    decompiler recovers exactly the abstraction, i.e. [D s = alpha s]. This is
    the "100% precise" endpoint, instantiated. *)
Theorem vl_recovery_complete : forall s : VL,
  complete_at VL VL VL (fun x => x) (fun x => x) (fun x => x) s.
Proof.
  intro s.
  apply (most_precise_implies_complete VL VL VL vle vle_antisym
           (fun x => x) (fun x => x) (fun x => x)).
  - (* recover_sound: leR (alpha s) (recover (lower s)) = vle s s *)
    intro s0. apply vle_refl.
  - (* leR (D s) (alpha s) = vle s s *) apply vle_refl.
Qed.

(* ================================================================== *)
(** ** PrecisionPipeline on ValueLattice (join-with-fact passes) *)
(* ================================================================== *)

(** A concrete unlace-style pass: refine the current value by joining a fixed
    observed fact [c]. (Joining a known fact is exactly how forward value
    propagation incorporates a new constraint.) *)
Definition join_with (c : VL) : VL -> VL := fun s => join c s.

(** [join_with c] is precision-monotone in the [vle] order. *)
Lemma join_with_mono : forall c, mono VL vle (join_with c).
Proof.
  intros c a b Hab. unfold join_with.
  (* vle (join c a) (join c b) from join_monotone_both with vle c c *)
  apply join_monotone_both; [apply vle_refl | exact Hab].
Qed.

(** Any list of [join_with] passes is all-monotone. *)
Lemma join_with_list_mono : forall cs,
  all_mono VL vle (map join_with cs).
Proof.
  induction cs as [| c rest IH]; simpl.
  - constructor.
  - constructor; [apply join_with_mono | exact IH].
Qed.

(** CONCRETE END-TO-END PRECISION MONOTONICITY for a real unlace pass pipeline:
    running a sequence of fact-incorporation passes preserves precision —
    sharpening any input never degrades the final recovered value. *)
Theorem vl_pipeline_precision_monotone : forall cs a b,
  vle a b ->
  vle (run VL (map join_with cs) a) (run VL (map join_with cs) b).
Proof.
  intros cs a b Hab.
  apply (pipeline_precision_monotone VL vle (map join_with cs) a b).
  - apply join_with_list_mono.
  - exact Hab.
Qed.
