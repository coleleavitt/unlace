(** * JumpTable: switch/jump-table slot-address arithmetic soundness.

    The producer's switch recovery (`unlace-struct/src/switch_recovery.rs`)
    decodes a jump table by reading slot `i` at `base + i*entry_size`, and
    infers the entry count from xrefs by inverting that arithmetic
    (`idx = (xref - base) / entry_size`, requiring `(xref - base) % entry_size = 0`).
    This theory proves the slot-address arithmetic is sound:

      - slots are INJECTIVE in the index (distinct indices ⇒ distinct addresses);
      - distinct slots are byte-DISJOINT (`[a, a+entry_size)` don't overlap);
      - index INVERSION is exact: from an aligned slot address you recover the
        index, and recompute the address (`base + idx*entry_size = slot`).

    These are the invariants the xref-based entry-count inference relies on, and
    `infer_num_entries_from_xrefs` is conformance-bound to them in
    `unlace-struct/tests/switch_conformance.rs`. Zero admits/axioms. *)

From Stdlib Require Import ZArith Lia.
Local Open Scope Z_scope.

(** Slot address of entry [i] in a table at [base] with [entry_size]-byte slots.*)
Definition slot_addr (base entry_size i : Z) : Z := base + i * entry_size.

(* ================================================================== *)
(** ** Injectivity + disjointness *)
(* ================================================================== *)

(** Distinct indices give distinct slot addresses (when entry_size > 0). *)
Theorem slot_injective : forall base entry_size i j,
  entry_size > 0 -> slot_addr base entry_size i = slot_addr base entry_size j -> i = j.
Proof.
  intros base es i j Hes Heq. unfold slot_addr in Heq.
  apply Z.add_cancel_l in Heq. apply Z.mul_cancel_r in Heq; lia.
Qed.

(** Adjacent-or-distinct slots are byte-disjoint: for i < j, slot i's byte range
    [slot i, slot i + entry_size) ends at or before slot j begins. *)
Theorem slot_disjoint : forall base entry_size i j,
  entry_size > 0 -> i < j ->
  slot_addr base entry_size i + entry_size <= slot_addr base entry_size j.
Proof.
  intros base es i j Hes Hlt. unfold slot_addr.
  (* base + i*es + es = base + (i+1)*es <= base + j*es  since i+1 <= j *)
  assert (i + 1 <= j) by lia.
  nia.
Qed.

(* ================================================================== *)
(** ** Index inversion (the entry-count inference core) *)
(* ================================================================== *)

(** From a slot address, the recovered index is [(addr - base) / entry_size].
    For an actual slot [i] (so [addr = base + i*entry_size]), this returns [i]
    exactly, and the remainder is 0 (the alignment check
    `delta % entry_size == 0` the Rust uses to reject non-slot xrefs). *)
Theorem slot_index_inversion : forall base entry_size i,
  entry_size > 0 ->
  (slot_addr base entry_size i - base) / entry_size = i /\
  (slot_addr base entry_size i - base) mod entry_size = 0.
Proof.
  intros base es i Hes. unfold slot_addr.
  replace (base + i * es - base) with (i * es) by lia.
  split.
  - rewrite Z.div_mul; lia.
  - apply Z.mod_mul; lia.
Qed.

(** Recompute: an aligned delta routes back to its slot address. If
    [delta mod entry_size = 0] then [base + (delta/entry_size)*entry_size
    = base + delta] — the address is reconstructed losslessly. *)
Theorem slot_recompute : forall base entry_size delta,
  entry_size > 0 -> delta mod entry_size = 0 ->
  slot_addr base entry_size (delta / entry_size) = base + delta.
Proof.
  intros base es delta Hes Hmod. unfold slot_addr.
  rewrite (Z.div_mod delta es) at 2 by lia.
  rewrite Hmod. rewrite Z.add_0_r. rewrite Z.mul_comm. reflexivity.
Qed.

(** A non-aligned address is NOT a slot: if [delta mod entry_size <> 0] there is
    no index [i] with [slot_addr base entry_size i = base + delta]. This is the
    soundness of the Rust's `delta % entry_size != 0 ⇒ skip` guard. *)
Theorem nonaligned_not_slot : forall base entry_size delta i,
  entry_size > 0 -> delta mod entry_size <> 0 ->
  slot_addr base entry_size i <> base + delta.
Proof.
  intros base es delta i Hes Hmod Hcontra. unfold slot_addr in Hcontra.
  assert (i * es = delta) by lia.
  apply Hmod. rewrite <- H. apply Z.mod_mul; lia.
Qed.

(* ================================================================== *)
(** ** next-symbol cap: SOUND and TIGHT (exact, not conservative) *)
(* ================================================================== *)

(** The Rust [infer_num_entries_from_xrefs] computes the next-symbol cap as
    [next_cap = (next - base) / entry_size]. The claim that grounds it is not a
    one-directional bound but an EXACT characterization: slot [i] FULLY FITS
    below the next symbol — its whole byte range [slot i, slot i + entry_size)
    lies at or below [next] — IF AND ONLY IF [i < next_cap]. So the integer
    division is neither unsound (admitting a slot that overruns) nor lossy
    (rejecting a slot that fits): it is the precise count of slots that fit.

    This is the real theorem: it proves the cap is the tight bound, which is why
    the producer can trust it without an off-by-one. The naive "slot starts
    below next ⇒ index < cap" is actually FALSE (a slot can start below [next]
    yet overrun it), and stating the weak version would mis-describe the code —
    so we prove fit-iff-bound instead. *)

(** Soundness: if index [i] is below the cap, slot [i] fully fits below [next]. *)
Theorem next_cap_sound : forall base entry_size next i,
  entry_size > 0 -> 0 <= i -> base <= next ->
  i < (next - base) / entry_size ->
  slot_addr base entry_size i + entry_size <= next.
Proof.
  intros base es next i Hes Hi Hle Hlt. unfold slot_addr.
  (* i < (next-base)/es ⇒ i+1 <= (next-base)/es; and es*((next-base)/es) <=
     next-base, so es*(i+1) <= next-base. *)
  assert (Hstep : i + 1 <= (next - base) / es) by lia.
  pose proof (Z.mul_div_le (next - base) es ltac:(lia)) as Hmdl.
  assert (es * (i + 1) <= es * ((next - base) / es))
    by (apply Z.mul_le_mono_nonneg_l; lia).
  nia.
Qed.

(** Completeness/tightness: if slot [i] fully fits below [next], its index is
    below the cap. Hence no fitting slot is ever rejected by the cap. *)
Theorem next_cap_complete : forall base entry_size next i,
  entry_size > 0 -> 0 <= i ->
  slot_addr base entry_size i + entry_size <= next ->
  i < (next - base) / entry_size.
Proof.
  intros base es next i Hes Hi Hfit. unfold slot_addr in Hfit.
  (* es*(i+1) <= next-base ⇒ i+1 <= (next-base)/es ⇒ i < cap *)
  assert (Hstep : i + 1 <= (next - base) / es).
  { apply Z.div_le_lower_bound; [lia |]. nia. }
  lia.
Qed.

(** Corollary — the cap counts exactly the fitting slots: the largest index that
    fits is [next_cap - 1], so [next_cap] is the number of whole slots in
    [[base, next)]. Together [next_cap_sound] + [next_cap_complete] are the
    fit-IFF-bound equivalence. *)
Theorem next_cap_is_fit_count : forall base entry_size next i,
  entry_size > 0 -> 0 <= i -> base <= next ->
  (i < (next - base) / entry_size <->
   slot_addr base entry_size i + entry_size <= next).
Proof.
  intros base es next i Hes Hi Hle. split.
  - apply next_cap_sound; assumption.
  - apply next_cap_complete; assumption.
Qed.
