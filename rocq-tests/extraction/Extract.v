(** * Extract: emit the verified KnownBits transfer functions to OCaml so the
    differential oracle compares the REAL Rust implementation against the
    PROVED definitions (not a hand-restated law).

    Integrity: the scalar oracle cores below are DERIVED from the actual
    [KnownBits.kand]/[kor]/[kxor]/[from_constant] (imported from the proved
    module), by projecting the resulting [KB] record's [kb_zero]/[kb_one]
    fields. They are therefore not a transcription — if [KnownBits.v] changes,
    these change with it, and the [_equiv] lemmas below are re-checked by
    [coqc]. Build with:  coqc -Q ../theories Unlace Extract.v *)

From Stdlib Require Import ZArith.
From Stdlib Require Extraction.
From Stdlib Require Import ExtrOcamlZBigInt.
From Unlace Require Import Bitvector KnownBits.
Open Scope Z_scope.

(** Build a [KB] from raw masks at a given width (the oracle feeds raw Z masks).*)
Definition mkkb (z o w : Z) : KB := mkKB z o w.

(* --- Scalar oracle cores, DERIVED from the proved transfer functions --- *)

Definition kand_zero (az ao bz bo w : Z) : Z := kb_zero (kand (mkkb az ao w) (mkkb bz bo w)).
Definition kand_one  (az ao bz bo w : Z) : Z := kb_one  (kand (mkkb az ao w) (mkkb bz bo w)).
Definition kor_zero  (az ao bz bo w : Z) : Z := kb_zero (kor  (mkkb az ao w) (mkkb bz bo w)).
Definition kor_one   (az ao bz bo w : Z) : Z := kb_one  (kor  (mkkb az ao w) (mkkb bz bo w)).
Definition kxor_zero (az ao bz bo w : Z) : Z := kb_zero (kxor (mkkb az ao w) (mkkb bz bo w)).
Definition kxor_one  (az ao bz bo w : Z) : Z := kb_one  (kxor (mkkb az ao w) (mkkb bz bo w)).

Definition fc_zero (v w : Z) : Z := kb_zero (from_constant v w).
Definition fc_one  (v w : Z) : Z := kb_one  (from_constant v w).

Definition kb_mask (w : Z) : Z := mask w.

(* --- coqc-checked equivalences: the cores ARE the proved operations --- *)
(* These fail to compile if KnownBits.v's definitions ever drift from what the
   oracle extracts, so the "derived from the proof" claim is machine-enforced. *)

Lemma kand_zero_equiv : forall az ao bz bo w,
  kand_zero az ao bz bo w = Z.lor az bz.
Proof. reflexivity. Qed.

Lemma kand_one_equiv : forall az ao bz bo w,
  kand_one az ao bz bo w = Z.land ao bo.
Proof. reflexivity. Qed.

Lemma kor_zero_equiv : forall az ao bz bo w,
  kor_zero az ao bz bo w = Z.land az bz.
Proof. reflexivity. Qed.

Lemma kor_one_equiv : forall az ao bz bo w,
  kor_one az ao bz bo w = Z.lor ao bo.
Proof. reflexivity. Qed.

Lemma fc_one_equiv : forall v w, fc_one v w = Z.land v (mask w).
Proof. reflexivity. Qed.

Lemma fc_zero_equiv : forall v w, fc_zero v w = Z.land (Z.lnot v) (mask w).
Proof. reflexivity. Qed.

Extraction Language OCaml.

Extraction "knownbits_oracle.ml"
  kb_mask kand_zero kand_one kor_zero kor_one kxor_zero kxor_one fc_zero fc_one.
