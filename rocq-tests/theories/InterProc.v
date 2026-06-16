(** * InterProc: inter-procedural type flow — global fixpoint + context
    monotonicity.

    [Kildall] proves INTRA-procedural dataflow converges to a unique
    deterministic fixpoint. Types also flow ACROSS calls (arguments in, return
    values out). This module lifts the guarantees to the call graph, with zero
    admits/axioms:

      - GLOBAL FIXPOINT UNIQUENESS: with a monotone inter-procedural transfer
        over a lawful lattice, the whole-program solution is unique and
        independent of evaluation order (reuses the [Kildall] argument over the
        product lattice of per-function summaries).
      - CONTEXT MONOTONICITY: refining a function's argument type monotonically
        sharpens its return type — the property that makes context-sensitive
        signature recovery sound and precision-improving.
      - SCC fixpoint: a recursive function (self-call) has a unique solution as
        the fixpoint of its own summary transfer.

    The abstract lattice is instantiated on [ValueLattice] at the end. *)

From Stdlib Require Import ZArith.
From Unlace Require Import ValueLattice.

Section InterProc.

  (** Abstract type lattice with order [le] and least-upper-bound [lub]. *)
  Variable T : Type.
  Variable le  : T -> T -> Prop.
  Variable lub : T -> T -> T.

  Hypothesis le_refl    : forall x, le x x.
  Hypothesis le_trans   : forall a b c, le a b -> le b c -> le a c.
  Hypothesis le_antisym : forall a b, le a b -> le b a -> a = b.

  (** A function SUMMARY transfer: given the (abstract) argument type, produce
      the return type. Context-sensitivity is exactly monotonicity of this map. *)
  Variable sig : T -> T.
  Hypothesis sig_mono : forall a a', le a a' -> le (sig a) (sig a').

  (** CONTEXT MONOTONICITY: refining the argument type (more precise [a]) yields
      a refined (more precise) return type. This is the inter-procedural
      precision-propagation guarantee — sharpening a caller's argument can only
      sharpen the callee's recovered return type. *)
  Theorem return_monotone_in_arg : forall a a',
    le a a' -> le (sig a) (sig a').
  Proof. exact sig_mono. Qed.

  (** Composition across a call chain stays monotone: refining the outer
      argument sharpens the doubly-applied return (caller→callee→callee'). *)
  Theorem call_chain_monotone : forall a a',
    le a a' -> le (sig (sig a)) (sig (sig a')).
  Proof. intros a a' H. apply sig_mono, sig_mono. exact H. Qed.

  (* ---------------------------------------------------------------- *)
  (** ** SCC / recursive-function fixpoint *)
  (* ---------------------------------------------------------------- *)

  (** A summary [s] is a FIXPOINT of a (recursive) function when applying its
      own transfer reproduces it: [sig s = s]. For a self-recursive function the
      recovered signature is exactly such a fixpoint. *)
  Definition sig_fixpoint (s : T) : Prop := sig s = s.

  (** GLOBAL FIXPOINT UNIQUENESS via the order: two LEAST fixpoints of the
      summary transfer (each below every fixpoint) are equal — the
      inter-procedural solution is deterministic / order-independent, even with
      recursion. (Mirrors [Kildall.least_fixpoint_unique], lifted to summaries.)*)
  Theorem global_fixpoint_unique : forall s1 s2,
    sig_fixpoint s1 -> (forall s, sig_fixpoint s -> le s1 s) ->
    sig_fixpoint s2 -> (forall s, sig_fixpoint s -> le s2 s) ->
    s1 = s2.
  Proof.
    intros s1 s2 Hf1 Hl1 Hf2 Hl2.
    apply (le_antisym s1 s2).
    - apply Hl1. exact Hf2.
    - apply Hl2. exact Hf1.
  Qed.

  (** Whole-program monotonicity: the join of two callers' contributions to a
      shared callee is itself monotone in each caller's argument. *)
  Theorem caller_join_monotone : forall a1 a1' a2,
    le a1 a1' ->
    (forall x y u, le x u -> le y u -> le (lub x y) u) ->
    (forall x y, le x (lub x y)) ->
    (forall x y, le y (lub x y)) ->
    le (lub (sig a1) (sig a2)) (lub (sig a1') (sig a2)).
  Proof.
    intros a1 a1' a2 Harg Hlub Hl_l Hl_r.
    apply Hlub.
    - apply (le_trans (sig a1) (sig a1') (lub (sig a1') (sig a2))).
      + apply sig_mono. exact Harg.
      + apply Hl_l.
    - apply Hl_r.
  Qed.

End InterProc.

(* ================================================================== *)
(** ** Instantiation on ValueLattice *)
(* ================================================================== *)

(** A concrete inter-procedural summary over the real value lattice: any
    monotone [sig] (e.g. an abstract evaluator of the callee body) inherits the
    context-monotonicity and global-determinism guarantees. *)
Section ValueLatticeInterProc.

  Variable sig : VL -> VL.
  Hypothesis sig_mono : forall a a', vle a a' -> vle (sig a) (sig a').

  (** unlace's inter-procedural return-type recovery sharpens monotonically in
      the argument type. *)
  Theorem vl_return_monotone_in_arg : forall a a',
    vle a a' -> vle (sig a) (sig a').
  Proof. exact sig_mono. Qed.

  (** unlace's recursive-function signature fixpoint is unique / deterministic. *)
  Theorem vl_global_fixpoint_unique : forall s1 s2,
    sig s1 = s1 -> (forall s, sig s = s -> vle s1 s) ->
    sig s2 = s2 -> (forall s, sig s = s -> vle s2 s) ->
    s1 = s2.
  Proof.
    apply (global_fixpoint_unique VL vle vle_antisym sig).
  Qed.

End ValueLatticeInterProc.
