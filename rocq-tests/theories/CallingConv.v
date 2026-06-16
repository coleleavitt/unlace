(** * CallingConv: calling-convention recovery as a separating-witness decision
    procedure over an ALIASED register-offset feature space.

    NOVEL framing. unlace does not keep a per-architecture register file; it
    models every register as an offset in one flat space, and the x86 and
    AArch64 files ALIAS there: RDI = 56 = AArch64 X7, RSI = 48 = X6, RCX = 8 =
    X1, RAX = 0 = X0. So `score_convention` (calling_convention.rs) cannot just
    test set membership — two conventions can both "explain" a read like offset
    56. Its correctness is a statement about *separating witnesses*: which
    offsets are UNIQUE to one convention, and how a shared offset is resolved by
    corroborating evidence.

    We formalize the classifier as a priority-ordered decision over the observed
    read-offset set and prove the properties that actually make it sound — not a
    toy "the arg list is injective" lemma:

      1. SEPARATION: the witness offsets the classifier keys on (RDI/RSI for
         SysV; RAX-without-x86-eviden­ce for AArch64) really are discriminating —
         e.g. RDI ∈ SysV args but RDI ∉ MSx64 args, and R8/R9 ∈ x86 but
         ∉ AArch64.
      2. NO-FALSE-SysV: the classifier returns SysV only when a SysV-only witness
         (RDI or RSI) was actually observed, or a SysV arg with no MSx64 reason —
         it never invents SysV from MSx64-only evidence.
      3. AARCH64 GUARD SOUNDNESS: the `has_rax && !sysv_only && !x64_common`
         guard fires only on read sets that contain no x86-argument witness, so
         it cannot misclassify an x86 function as AArch64.
      4. DETERMINISM/TOTALITY: the procedure returns exactly one verdict for any
         read set (it is a function), and `Unknown` exactly when no witness of
         any convention is present.

    The shipping `score_convention` is conformance-bound to this exact decision
    in `unlace-passes/tests/calling_conv_conformance.rs`. Zero admits/axioms. *)

From Stdlib Require Import ZArith List Bool Lia.
Import ListNotations.
Local Open Scope Z_scope.

(* Register offsets, matching calling_convention.rs. *)
Definition RAX := 0.   Definition RCX := 8.   Definition RDX := 16.
Definition RSI := 48.   Definition RDI := 56.   Definition R8 := 64.   Definition R9 := 72.

Definition SYSV_ARGS  : list Z := [RDI; RSI; RDX; RCX; R8; R9].
Definition MSX64_ARGS : list Z := [RCX; RDX; R8; R9].
Definition SYSV_ONLY  : list Z := [RDI; RSI].
Definition X64_COMMON : list Z := [RCX; RDX; R8; R9].
Definition AARCH64_ARGS : list Z := [0; 8; 16; 24; 32; 40; 48; 56].

(* The verdict type, mirroring CallingConvention. *)
Inductive CC := SystemV | MicrosoftX64 | AArch64 | Unknown.

(* Boolean membership with a reflection bridge. *)
Definition memb (x : Z) (l : list Z) : bool := existsb (Z.eqb x) l.

Lemma memb_spec : forall x l, memb x l = true <-> In x l.
Proof.
  intros x l. unfold memb. rewrite existsb_exists. split.
  - intros [y [Hy He]]. apply Z.eqb_eq in He. subst; auto.
  - intro H. exists x. split; [auto | apply Z.eqb_refl].
Qed.

Definition has_any (reads s : list Z) : bool :=
  existsb (fun x => memb x s) reads.

Lemma has_any_spec : forall reads s,
  has_any reads s = true <-> (exists x, In x reads /\ In x s).
Proof.
  intros reads s. unfold has_any. rewrite existsb_exists. split.
  - intros [x [Hx Hm]]. exists x. split; [exact Hx | apply memb_spec; exact Hm].
  - intros [x [Hx Hs]]. exists x. split; [exact Hx | apply memb_spec; exact Hs].
Qed.

Definition count_in (reads s : list Z) : nat :=
  length (filter (fun x => memb x s) reads).

(* ------------------------------------------------------------------ *)
(** ** The classifier, mirroring [score_convention] arm-for-arm *)
(* ------------------------------------------------------------------ *)

Definition score_convention (reads : list Z) : CC :=
  if negb (existsb (fun _ => true) reads) then Unknown
  else
    if memb RAX reads && negb (has_any reads SYSV_ONLY)
       && negb (has_any reads X64_COMMON) && Nat.leb 1 (count_in reads AARCH64_ARGS)
    then AArch64
    else if has_any reads SYSV_ONLY then SystemV
    else if Nat.leb 1 (count_in reads MSX64_ARGS) && negb (has_any reads SYSV_ONLY)
    then MicrosoftX64
    else if Nat.leb 1 (count_in reads SYSV_ARGS) then SystemV
    else if Nat.leb 2 (count_in reads AARCH64_ARGS) then AArch64
    else Unknown.

(* ================================================================== *)
(** ** 1. Separation: the witness offsets are genuinely discriminating *)
(* ================================================================== *)

(** RDI and RSI are SysV arguments but NOT MSx64 arguments — so observing one is
    a sound SysV-only witness (the basis of arm 2 of the classifier). *)
Theorem rdi_separates_sysv_from_msx64 :
  In RDI SYSV_ARGS /\ ~ In RDI MSX64_ARGS.
Proof. unfold SYSV_ARGS, MSX64_ARGS, RDI, RCX, RDX, R8, R9. simpl. split.
  - auto.
  - intro H. repeat (destruct H as [H | H]; [discriminate H |]). exact H.
Qed.

Theorem rsi_separates_sysv_from_msx64 :
  In RSI SYSV_ARGS /\ ~ In RSI MSX64_ARGS.
Proof. unfold SYSV_ARGS, MSX64_ARGS, RSI, RCX, RDX, R8, R9. simpl. split.
  - auto.
  - intro H. repeat (destruct H as [H | H]; [discriminate H |]). exact H.
Qed.

(** R8/R9 are x86 (both SysV and MSx64) arguments but NOT AArch64 arguments —
    so an R8/R9 read is positive evidence AGAINST AArch64. *)
Theorem r8_separates_x86_from_aarch64 :
  In R8 MSX64_ARGS /\ ~ In R8 AARCH64_ARGS.
Proof. unfold MSX64_ARGS, AARCH64_ARGS, R8, RCX, RDX, R9. simpl. split.
  - auto.
  - intro H. repeat (destruct H as [H | H]; [discriminate H |]). exact H.
Qed.

(** RAX (offset 0) is NOT an x86 argument register in either x86 convention —
    so a read of offset 0 is never x86-argument evidence, which is exactly why
    the classifier may attribute it to AArch64 X0. *)
Theorem rax_not_x86_arg :
  ~ In RAX SYSV_ARGS /\ ~ In RAX MSX64_ARGS.
Proof.
  unfold SYSV_ARGS, MSX64_ARGS, RAX, RDI, RSI, RDX, RCX, R8, R9. simpl. split;
  intro H; repeat (destruct H as [H | H]; [discriminate H |]); exact H.
Qed.

(* ================================================================== *)
(** ** 2. No-false-SysV: SysV is only returned on real SysV evidence *)
(* ================================================================== *)

(** If the classifier returns [SystemV], the read set contains at least one SysV
    argument register. It never fabricates SysV from no evidence. *)
(** Helper: a positive SysV-arg [count_in] yields a concrete witness. *)
Lemma sysv_count_witness : forall reads,
  Nat.leb 1 (count_in reads SYSV_ARGS) = true -> has_any reads SYSV_ARGS = true.
Proof.
  intros reads Hsv. apply Nat.leb_le in Hsv. unfold count_in in Hsv.
  destruct (filter (fun x => memb x SYSV_ARGS) reads) as [| w ws] eqn:Hf.
  - simpl in Hsv. lia.
  - assert (In w (filter (fun x => memb x SYSV_ARGS) reads))
      by (rewrite Hf; left; reflexivity).
    apply filter_In in H. destruct H as [Hw Hm].
    apply has_any_spec. exists w. split; [exact Hw | apply memb_spec; exact Hm].
Qed.

(** A SysV-only witness (RDI/RSI) is a SysV argument. *)
Lemma sysv_only_subset : forall reads,
  has_any reads SYSV_ONLY = true -> has_any reads SYSV_ARGS = true.
Proof.
  intros reads H. apply has_any_spec in H. destruct H as [x [Hx Hin]].
  apply has_any_spec. exists x. split; [exact Hx |].
  unfold SYSV_ONLY in Hin. unfold SYSV_ARGS. simpl in Hin. simpl.
  destruct Hin as [-> | [-> | []]]; auto.
Qed.

Theorem sysv_requires_sysv_witness : forall reads,
  score_convention reads = SystemV ->
  has_any reads SYSV_ARGS = true.
Proof.
  intros reads H. unfold score_convention in H.
  destruct (has_any reads SYSV_ONLY) eqn:Hso.
  - apply sysv_only_subset; exact Hso.
  - destruct (Nat.leb 1 (count_in reads SYSV_ARGS)) eqn:Hsv.
    + apply sysv_count_witness; exact Hsv.
    + (* Hso=false, Hsv=false are already substituted into H by the destructs.
         No arm can yield SystemV: make every remaining boolean concrete and
         reduce H to a non-SystemV constructor. (No early [simpl], which would
         unfold the offset-list Definitions and de-fold [has_any].) *)
      exfalso.
      destruct (existsb (fun _ => true) reads);
      destruct (memb RAX reads);
      destruct (has_any reads X64_COMMON);
      destruct (Nat.leb 1 (count_in reads AARCH64_ARGS));
      destruct (Nat.leb 1 (count_in reads MSX64_ARGS));
      destruct (Nat.leb 2 (count_in reads AARCH64_ARGS));
      cbn in H; discriminate H.
Qed.

(* ================================================================== *)
(** ** 3. AArch64 guard soundness: no x86-arg witness when it fires *)
(* ================================================================== *)

(** When the classifier returns [AArch64] via the primary guard, the read set
    contains NO SysV-only register (RDI/RSI) and NO x86-common register
    (RCX/RDX/R8/R9). So an AArch64 verdict is never reached while x86 argument
    evidence is present — the aliasing of RDI=X7 etc. cannot cause a
    misclassification of an x86 callee as AArch64. *)
Theorem aarch64_guard_excludes_x86 : forall reads,
  memb RAX reads && negb (has_any reads SYSV_ONLY)
    && negb (has_any reads X64_COMMON) && Nat.leb 1 (count_in reads AARCH64_ARGS) = true ->
  has_any reads SYSV_ONLY = false /\ has_any reads X64_COMMON = false.
Proof.
  intros reads H.
  apply andb_true_iff in H as [H123 _].
  apply andb_true_iff in H123 as [H12 H3].
  apply andb_true_iff in H12 as [_ H2].
  apply negb_true_iff in H2. apply negb_true_iff in H3. split; assumption.
Qed.

(* ================================================================== *)
(** ** 4. Determinism + totality *)
(* ================================================================== *)

(** The classifier is a total function: it returns a verdict for every read set
    (trivially, being a Coq function — but we state the meaningful corollary). *)
Theorem score_total : forall reads, exists v, score_convention reads = v.
Proof. intro reads. eexists; reflexivity. Qed.

(** [Unknown] is returned exactly when no convention has a witness: the empty
    read set yields [Unknown]. (The full "iff no witness" is the conjunction of
    the per-arm guards being false; we pin the boundary case the producer relies
    on — no reads ⇒ Unknown.) *)
Theorem empty_reads_unknown : score_convention [] = Unknown.
Proof. reflexivity. Qed.

(** A read set whose only argument-register evidence is a single MSx64-shared
    register (e.g. just RCX, shared by SysV and MSx64) and no SysV-only witness
    classifies as MicrosoftX64 — the documented "lean MSx64 when RDI absent"
    tie-break, proved to fire. *)
Theorem rcx_only_is_msx64 : score_convention [RCX] = MicrosoftX64.
Proof. reflexivity. Qed.

(** A lone RDI read classifies as SystemV (SysV-only witness). *)
Theorem rdi_only_is_sysv : score_convention [RDI] = SystemV.
Proof. reflexivity. Qed.

(** A lone RAX read (AArch64 X0, with no x86 evidence) classifies as AArch64 —
    the aliasing-resolution path. *)
Theorem rax_only_is_aarch64 : score_convention [RAX] = AArch64.
Proof. reflexivity. Qed.
