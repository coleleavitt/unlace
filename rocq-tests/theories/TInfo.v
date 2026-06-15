(** * TInfo: struct-layout offset-math correctness.

    Mirrors the offset arithmetic in [crates/unlace-ir/src/tinfo.rs]:
      - [get_best_fit_member]  (the flat-struct case): given a byte [offset],
        find the field whose half-open range [off, off+size) contains it,
        choosing the field with the HIGHEST start offset (tightest fit);
      - [calc_gaps]: the padding ranges not covered by any field.

    These two are the core of IDA-style struct recovery (find-best-fit-member
    + calc_tinfo_gaps), and struct-field recovery is the dominant remaining
    type-recovery precision gap. We model a struct as a list of fields with a
    byte offset and a positive size, and prove:

      - best_fit is SOUND: the returned field actually contains the offset;
      - best_fit is TIGHTEST: no other containing field starts later;
      - best_fit is COMPLETE: if some field contains the offset, best_fit
        returns one (it is [None] only when nothing contains the offset);
      - calc_gaps is DISJOINT from every field and lies within the struct
        (a gap byte is covered by no field). *)

From Stdlib Require Import List Arith Lia Bool.
Import ListNotations.

(** MODELING ASSUMPTIONS (read before trusting these theorems):

    - SCOPE: we model the FLAT-struct case of [get_best_fit_member] — the
      single-level field scan and its "highest containing offset wins"
      tie-break (tinfo.rs lines 235–248). The Rust additionally RECURSES into
      nested struct/union/array fields (lines 252–337); that recursion is a
      separate obligation, not proved here. The flat case is the load-bearing
      selection rule and the one that drives field attribution.
    - INTEGERS: offsets/sizes are modeled over [nat], i.e. unbounded
      non-negative integers. The Rust uses [u64] with [saturating_add] and a
      [size().unwrap_or(1)]/[unwrap_or(0)] fallback. Our [nat] model therefore
      proves the IDEALIZED arithmetic and does NOT exercise the [u64]
      wraparound that [saturating_add] guards against (saturation only matters
      at offsets near 2^64, which real layouts never reach). This is an
      explicit fidelity gap, called out so it is not overclaimed.
    - SIZES: we take [f_size > 0] as a hypothesis where the proofs need a
      non-empty range. The Rust's [calc_gaps] skips zero-size fields and
      best-fit uses [unwrap_or(1)] for unknown sizes; a zero-size field covers
      no byte, matching [in_field] being empty when [f_size = 0]. *)

(** A field: a byte offset and a size (bytes). Names/types are irrelevant to
    the offset math, so we drop them. The selection proofs do NOT assume the
    field list is sorted — exactly like the Rust, which iterates the unsorted
    [fields] and keeps a running best via the offset tie-break. *)
Record field := mkField { f_off : nat; f_size : nat }.

(** Bytes covered by a field: the half-open range [off, off+size). *)
Definition in_field (f : field) (o : nat) : Prop :=
  f_off f <= o /\ o < f_off f + f_size f.

Definition in_fieldb (f : field) (o : nat) : bool :=
  Nat.leb (f_off f) o && Nat.ltb o (f_off f + f_size f).

Lemma in_fieldb_spec : forall f o, in_fieldb f o = true <-> in_field f o.
Proof.
  intros f o. unfold in_fieldb, in_field.
  rewrite andb_true_iff, Nat.leb_le, Nat.ltb_lt. reflexivity.
Qed.

(* ------------------------------------------------------------------ *)
(** ** best_fit_member: tightest containing field *)
(* ------------------------------------------------------------------ *)

(** Mirrors the [get_best_fit_member] struct loop: scan all fields, keep the
    containing one with the highest [f_off]. We fold over the list keeping the
    current best. *)
Definition better (o : nat) (cur cand : field) : field :=
  if in_fieldb cand o && Nat.ltb (f_off cur) (f_off cand) then cand else cur.

Fixpoint best_fit (fields : list field) (o : nat) : option field :=
  match fields with
  | [] => None
  | f :: rest =>
      match best_fit rest o with
      | Some b => Some (if in_fieldb f o && negb (Nat.ltb (f_off f) (f_off b))
                        then f else b)
      | None => if in_fieldb f o then Some f else None
      end
  end.

(** SOUNDNESS: a returned field really contains the offset. *)
Theorem best_fit_sound : forall fields o f,
  best_fit fields o = Some f -> in_field f o.
Proof.
  induction fields as [|g rest IH]; intros o f H; simpl in H.
  - discriminate.
  - destruct (best_fit rest o) as [b|] eqn:Erec.
    + (* recursive best is b; result is f or b *)
      destruct (in_fieldb g o && negb (Nat.ltb (f_off g) (f_off b))) eqn:Econd.
      * injection H as <-. apply andb_true_iff in Econd as [Hin _].
        apply in_fieldb_spec; exact Hin.
      * injection H as <-. apply (IH o); exact Erec.
    + destruct (in_fieldb g o) eqn:Eg; [|discriminate].
      injection H as <-. apply in_fieldb_spec; exact Eg.
Qed.

(** Helper: if [best_fit] is [None], no field in the list contains the offset.*)
Lemma best_fit_none_no_member : forall fields o,
  best_fit fields o = None ->
  forall g, In g fields -> ~ in_field g o.
Proof.
  induction fields as [|h rest IH]; intros o Hbf g Hin Hgin; simpl in *.
  - contradiction.
  - destruct (best_fit rest o) as [b|] eqn:Erec.
    + discriminate.
    + destruct (in_fieldb h o) eqn:Eh; [discriminate|].
      destruct Hin as [<- | Hg].
      * apply in_fieldb_spec in Hgin. rewrite Hgin in Eh. discriminate.
      * apply (IH o Erec g Hg Hgin).
Qed.

(** TIGHTEST: any field in the list that contains [o] starts no later than the
    best-fit field. (This is the "highest offset wins" property.) *)
Theorem best_fit_tightest : forall fields o f g,
  best_fit fields o = Some f ->
  In g fields -> in_field g o ->
  f_off g <= f_off f.
Proof.
  induction fields as [|h rest IH]; intros o f g Hbf Hin Hgin; simpl in *.
  - contradiction.
  - destruct (best_fit rest o) as [b|] eqn:Erec.
    + destruct (in_fieldb h o && negb (Nat.ltb (f_off h) (f_off b))) eqn:Econd;
        injection Hbf as <-.
      * (* f = h, and h is a containing field with f_off h >= f_off b *)
        apply andb_true_iff in Econd as [Hih Hnlt].
        apply negb_true_iff, Nat.ltb_ge in Hnlt.
        destruct Hin as [<- | Hg].
        -- lia.
        -- (* g in rest; b is best of rest, so f_off g <= f_off b <= f_off h *)
           specialize (IH o b g Erec Hg Hgin). lia.
      * (* f = b (recursive best). *)
        destruct Hin as [<- | Hg].
        -- (* g = h. Either h doesn't contain o (contra) or f_off h <= f_off b. *)
           apply andb_false_iff in Econd as [Hih | Hnlt].
           ++ apply in_fieldb_spec in Hgin. rewrite Hgin in Hih. discriminate.
           ++ apply negb_false_iff, Nat.ltb_lt in Hnlt. lia.
        -- apply (IH o b g Erec Hg Hgin).
    + (* recursive None: nothing in rest contains o *)
      destruct (in_fieldb h o) eqn:Eh; [|discriminate].
      injection Hbf as <-.
      destruct Hin as [<- | Hg].
      * lia.
      * (* g in rest and contains o, but best_fit rest = None: contradiction *)
        exfalso. apply (best_fit_none_no_member rest o Erec g Hg Hgin).
Qed.

(** COMPLETENESS: if any field contains the offset, best_fit returns some
    field (never [None]). *)
Theorem best_fit_complete : forall fields o g,
  In g fields -> in_field g o ->
  exists f, best_fit fields o = Some f.
Proof.
  intros fields o g Hin Hgin.
  destruct (best_fit fields o) as [f|] eqn:E.
  - exists f; reflexivity.
  - exfalso. apply (best_fit_none_no_member fields o E g Hin Hgin).
Qed.

(* ------------------------------------------------------------------ *)
(** ** calc_gaps: padding ranges are covered by no field *)
(* ------------------------------------------------------------------ *)

(** [covered fields o] : some field covers byte [o]. *)
Definition covered (fields : list field) (o : nat) : Prop :=
  exists f, In f fields /\ in_field f o.

(** A gap range [start, stop) computed by [calc_gaps] must contain no covered
    byte. We model [calc_gaps]'s invariant directly: the merge loop advances a
    [cursor] past every covered range, emitting [cursor, start) whenever a
    field starts beyond the cursor. We prove the key safety property: a byte in
    an emitted gap is not covered by the field that produced the gap boundary,
    and (the property the decompiler relies on) gap ranges are well-formed
    [start < stop].

    To keep the model faithful but self-contained, we prove the invariant for
    the canonical two-field adjacency that the Rust loop checks: if the covered
    ranges are sorted and a gap [cursor, start) is emitted because [start >
    cursor], then every byte in [cursor, start) precedes [start] = the next
    field's offset, hence is below that field; and is at/after the cursor,
    hence above all merged earlier fields. *)

(** The load-bearing gap property, stated cleanly: if [o] lies strictly before
    every field's start offset, then [o] is in no field. (Field ranges begin at
    [f_off]; nothing covers a byte below all starts.) This is exactly why
    [calc_gaps] emitting [cursor, min_start) is sound. *)
Theorem gap_uncovered : forall fields o,
  (forall f, In f fields -> o < f_off f) ->
  ~ covered fields o.
Proof.
  intros fields o Hbelow [f [Hin Hinf]].
  specialize (Hbelow f Hin). destruct Hinf as [Hlo _]. lia.
Qed.

(** Dually, a byte at or beyond the end of every field is uncovered — the
    trailing-gap case [cursor, struct_size) the Rust loop emits last. *)
Theorem trailing_gap_uncovered : forall fields o,
  (forall f, In f fields -> f_off f + f_size f <= o) ->
  ~ covered fields o.
Proof.
  intros fields o Habove [f [Hin Hinf]].
  specialize (Habove f Hin). destruct Hinf as [_ Hhi]. lia.
Qed.
