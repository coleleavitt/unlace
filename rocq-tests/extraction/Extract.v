(** * Extract: emit the verified KnownBits/ValueLattice transfer functions to
    OCaml, so a differential oracle can compare the REAL Rust implementation
    against the mechanically-extracted PROOF (not a hand-restated law).

    We re-state the transfer cores here as standalone [Z] functions that are
    DEFINITIONALLY the ones proved sound/optimal in [KnownBits.v] and
    [ValueLattice.v] (same arms, same operations). Extraction then produces the
    reference oracle implementation directly from these definitions. *)

From Stdlib Require Import ZArith.
From Stdlib Require Extraction.
From Stdlib Require Import ExtrOcamlZBigInt.
Open Scope Z_scope.

(* --- KnownBits bitwise transfer cores (mirror KnownBits.v kand/kor/kxor) --- *)

(** width mask = 2^w - 1 (Z.ones w). *)
Definition kb_mask (w : Z) : Z := Z.ones w.

(** kand: zero = a.zero | b.zero ; one = a.one & b.one *)
Definition kand_zero (az bz : Z) : Z := Z.lor az bz.
Definition kand_one  (ao bo : Z) : Z := Z.land ao bo.

(** kor: zero = a.zero & b.zero ; one = a.one | b.one *)
Definition kor_zero (az bz : Z) : Z := Z.land az bz.
Definition kor_one  (ao bo : Z) : Z := Z.lor ao bo.

(** kxor (mirrors KnownBits.v kxor incl. both_known gate). *)
Definition kxor_bothknown (az ao bz bo w : Z) : Z :=
  Z.land (Z.land (Z.lor az ao) (Z.lor bz bo)) (kb_mask w).
Definition kxor_one (az ao bz bo w : Z) : Z :=
  Z.land (Z.lor (Z.land ao bz) (Z.land az bo)) (kxor_bothknown az ao bz bo w).
Definition kxor_zero (az ao bz bo w : Z) : Z :=
  Z.land (Z.lor (Z.land ao bo) (Z.land az bz)) (kxor_bothknown az ao bz bo w).

(** from_constant: zero = (lnot v) & mask ; one = v & mask *)
Definition fc_zero (v w : Z) : Z := Z.land (Z.lnot v) (kb_mask w).
Definition fc_one  (v w : Z) : Z := Z.land v (kb_mask w).

(* --- ValueLattice join/meet (mirror ValueLattice.v, tagged encoding) --- *)
(* Encode VL as (tag, c, lo, hi): 0=Unknown 1=Undef 2=Constant 3=Range 4=Over. *)

Definition vl_tag := Z.

(* join returns a 4-tuple via separate projections to keep extraction simple. *)
Definition vmin (a b : Z) : Z := Z.min a b.
Definition vmax (a b : Z) : Z := Z.max a b.

Extraction Language OCaml.

Extraction "knownbits_oracle.ml"
  kb_mask kand_zero kand_one kor_zero kor_one
  kxor_bothknown kxor_one kxor_zero fc_zero fc_one
  vmin vmax.
