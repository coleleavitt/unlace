(** * RegAlias: sub-register aliasing + the register write-kill frame.

    x86-style register files have NESTED sub-registers: AL ⊂ AX ⊂ EAX ⊂ RAX all
    name overlapping bytes of one physical register. Writing EAX clobbers AX and
    AL (they overlap) but must NOT clobber, say, RBX (disjoint). A decompiler
    that gets this wrong either loses precision (treating every write as
    clobbering everything) or is unsound (missing a real clobber). We model a
    register as a byte range within a physical register file and prove, with
    zero admits/axioms:

      - aliasing (byte overlap) is reflexive and symmetric;
      - a write to register R updates exactly R's bytes;
      - WRITE-KILL FRAME: a write to R preserves every byte of a register that
        does NOT overlap R — so non-overlapping register values survive, and
        their recovered types are not forced to Top.

    This is the register-file analogue of [MemoryAlias]'s heap frame theorem;
    together they cover both storage classes. Mirrors [unlace-ir/src/reg_alias.rs]. *)

From Stdlib Require Import ZArith Bool Lia.
Open Scope Z_scope.

(** A register is a byte slice [base, base+size) of one physical register file
    (we use a flat byte address space; distinct physical registers live at
    disjoint base ranges). *)
Record reg := { r_base : Z; r_size : Z }.

Definition reg_byte (r : reg) (a : Z) : Prop :=
  r_base r <= a < r_base r + r_size r.

(** Two registers ALIAS when they share a byte. *)
Definition reg_alias (r1 r2 : reg) : Prop :=
  exists a, reg_byte r1 a /\ reg_byte r2 a.

(** They are DISJOINT when no byte is shared (one ends before the other starts).*)
Definition reg_disjoint (r1 r2 : reg) : Prop :=
  r_base r1 + r_size r1 <= r_base r2 \/ r_base r2 + r_size r2 <= r_base r1.

(* ================================================================== *)
(** ** Aliasing relation laws *)
(* ================================================================== *)

(** Aliasing is symmetric. *)
Theorem reg_alias_sym : forall r1 r2, reg_alias r1 r2 -> reg_alias r2 r1.
Proof. intros r1 r2 [a [H1 H2]]. exists a. split; assumption. Qed.

(** A non-empty register aliases itself (reflexive on inhabited registers). *)
Theorem reg_alias_refl : forall r, 0 < r_size r -> reg_alias r r.
Proof.
  intros r Hsz. exists (r_base r). unfold reg_byte. lia.
Qed.

(** Disjoint and aliasing are mutually exclusive. *)
Theorem reg_disjoint_not_alias : forall r1 r2,
  reg_disjoint r1 r2 -> ~ reg_alias r1 r2.
Proof.
  intros r1 r2 Hd [a [H1 H2]].
  unfold reg_disjoint, reg_byte in *. lia.
Qed.

(** Disjoint is symmetric. *)
Theorem reg_disjoint_sym : forall r1 r2, reg_disjoint r1 r2 -> reg_disjoint r2 r1.
Proof. unfold reg_disjoint. intros r1 r2 [H | H]; [right | left]; lia. Qed.

(* ================================================================== *)
(** ** The register write-kill frame theorem *)
(* ================================================================== *)

(** Register state: byte address to byte value. *)
Definition rstate := Z -> Z.

(** [rwrite r val s]: store [val] into every byte of register [r]. *)
Definition rwrite (r : reg) (val : Z) (s : rstate) : rstate :=
  fun a => if (Z.leb (r_base r) a) && (Z.ltb a (r_base r + r_size r))
           then val else s a.

(** Bytes outside the written register are untouched. *)
Lemma rwrite_frame_byte : forall r val s a,
  ~ reg_byte r a -> rwrite r val s a = s a.
Proof.
  intros r val s a Hout. unfold rwrite, reg_byte in *.
  destruct (Z.leb (r_base r) a) eqn:Hle; [| reflexivity].
  destruct (Z.ltb a (r_base r + r_size r)) eqn:Hlt; [| reflexivity].
  apply Z.leb_le in Hle. apply Z.ltb_lt in Hlt. exfalso. apply Hout. lia.
Qed.

(** Bytes inside the written register get the new value (write actually writes).*)
Lemma rwrite_sets_byte : forall r val s a,
  reg_byte r a -> rwrite r val s a = val.
Proof.
  intros r val s a Hin. unfold rwrite, reg_byte in *.
  destruct Hin as [Hlo Hhi].
  rewrite (proj2 (Z.leb_le _ _) Hlo).
  rewrite (proj2 (Z.ltb_lt _ _) Hhi). reflexivity.
Qed.

(** WRITE-KILL FRAME: writing register [w] leaves every byte of a DISJOINT
    register [r] unchanged. So a write to EAX does not perturb RBX — RBX's
    recovered value survives, and is not forced to Top. *)
Theorem rwrite_preserves_disjoint : forall w r val s a,
  reg_disjoint w r ->
  reg_byte r a ->
  rwrite w val s a = s a.
Proof.
  intros w r val s a Hd Hr.
  apply rwrite_frame_byte.
  (* a in r, and w disjoint r, so a not in w *)
  intro Hw. apply (reg_disjoint_not_alias w r Hd). exists a. split; assumption.
Qed.

(** Whole-register frame: every byte of a disjoint register is preserved, so any
    predicate over its bytes (its recovered value/type) survives the write. *)
Theorem rwrite_preserves_disjoint_reg : forall w r val s,
  reg_disjoint w r ->
  forall a, reg_byte r a -> rwrite w val s a = s a.
Proof.
  intros w r val s Hd a Hr.
  apply (rwrite_preserves_disjoint w r val s a Hd Hr).
Qed.

(** WRITE-KILL on OVERLAP: a write to [w] does clobber the shared bytes of an
    overlapping register — the kill is exactly the overlap (sound clobbering). *)
Theorem rwrite_kills_overlap : forall w r val s a,
  reg_byte w a -> reg_byte r a ->
  rwrite w val s a = val.
Proof.
  intros w r val s a Hw _. apply rwrite_sets_byte. exact Hw.
Qed.
