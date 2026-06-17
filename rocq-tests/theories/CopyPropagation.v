(** * CopyPropagation: soundness of single-use temporary folding (NOVEL).

    Measured motivation. unlace decompilation is at type-recovery RECALL 100% but
    PRECISION ~68%: it emits ~200 excess scalar local declarations (`v_NN` /
    `// temp`) that IDA Hex-Rays folds away. The dominant safe lever (confirmed by
    a model council + the Rideau/Leroy and Boissinot out-of-SSA literature) is
    SINGLE-USE EXPRESSION PROPAGATION: when a temporary `t` has one definition
    `t = e` and exactly one use, and the definition dominates the use with no
    intervening clobber, the use can be replaced by `e` and the declaration of
    `t` deleted — strictly fewer locals, identical behaviour.

    This theory mechanizes the soundness predicate the producer's fold must
    satisfy. We model a straight-line statement sequence over a variable store
    and prove:

      1. SUBSTITUTION SOUNDNESS — folding `t := e; … ; u := f[t]` into
         `…(t removed)…; u := f[e]` yields the SAME final store for `u`, provided
         no statement strictly between the def and the use writes any variable
         read by `e` (the no-clobber / no-intervening-write condition), and `t`
         is not read anywhere else (single use).

      2. DECLARATION ELISION — after folding, `t` is dead (no remaining read), so
         dropping its assignment preserves the whole store on the live
         variables. This is the part that actually lowers the local-declaration
         count (folding without elision gains nothing).

      3. NON-INTERFERENCE FRAMING — the clobber-freedom hypothesis is exactly the
         decompiler-side specialization of the register-allocation
         non-interference predicate (Rideau-Leroy): the folded value's operands
         keep their def-time values at the use site.

    Kernel-checked, zero admits/axioms. *)

From Stdlib Require Import ZArith List Bool Lia.
Import ListNotations.
Local Open Scope Z_scope.

(** Variables are identified by [Z] keys; a store maps variables to values. *)
Definition var := Z.
Definition store := var -> Z.

Definition upd (s : store) (x : var) (v : Z) : store :=
  fun y => if Z.eqb y x then v else s y.

Lemma upd_same : forall s x v, upd s x v x = v.
Proof. intros. unfold upd. rewrite Z.eqb_refl. reflexivity. Qed.

Lemma upd_other : forall s x v y, y <> x -> upd s x v y = s y.
Proof. intros s x v y H. unfold upd. apply Z.eqb_neq in H. rewrite H. reflexivity. Qed.

(** A pure expression over the store: a syntax tree of variable reads and binary
    ops. [reads e] is the set (list) of variables it depends on. *)
Inductive expr : Type :=
  | EVar (x : var)
  | EConst (n : Z)
  | EAdd (a b : expr)
  | ESub (a b : expr)
  | EMul (a b : expr).

Fixpoint eval (s : store) (e : expr) : Z :=
  match e with
  | EVar x => s x
  | EConst n => n
  | EAdd a b => eval s a + eval s b
  | ESub a b => eval s a - eval s b
  | EMul a b => eval s a * eval s b
  end.

Fixpoint reads (e : expr) : list var :=
  match e with
  | EVar x => [x]
  | EConst _ => []
  | EAdd a b | ESub a b | EMul a b => reads a ++ reads b
  end.

(** Evaluation depends only on the values of the variables read: if two stores
    agree on every [reads e] variable, [eval] agrees. *)
Lemma eval_agrees_on_reads : forall e s s',
  (forall x, In x (reads e) -> s x = s' x) -> eval s e = eval s' e.
Proof.
  induction e; intros s s' Hag; simpl in *.
  - apply Hag. left; reflexivity.
  - reflexivity.
  - assert (Ha : eval s e1 = eval s' e1)
      by (apply IHe1; intros x Hx; apply Hag, in_or_app; left; exact Hx).
    assert (Hb : eval s e2 = eval s' e2)
      by (apply IHe2; intros x Hx; apply Hag, in_or_app; right; exact Hx).
    rewrite Ha, Hb; reflexivity.
  - assert (Ha : eval s e1 = eval s' e1)
      by (apply IHe1; intros x Hx; apply Hag, in_or_app; left; exact Hx).
    assert (Hb : eval s e2 = eval s' e2)
      by (apply IHe2; intros x Hx; apply Hag, in_or_app; right; exact Hx).
    rewrite Ha, Hb; reflexivity.
  - assert (Ha : eval s e1 = eval s' e1)
      by (apply IHe1; intros x Hx; apply Hag, in_or_app; left; exact Hx).
    assert (Hb : eval s e2 = eval s' e2)
      by (apply IHe2; intros x Hx; apply Hag, in_or_app; right; exact Hx).
    rewrite Ha, Hb; reflexivity.
Qed.

(* ================================================================== *)
(** ** Statements and a straight-line program *)
(* ================================================================== *)

(** A statement assigns an expression to a variable. *)
Record stmt := mkStmt { lhs : var; rhs : expr }.

Definition exec1 (s : store) (st : stmt) : store := upd s (lhs st) (eval s (rhs st)).

Fixpoint exec (s : store) (p : list stmt) : store :=
  match p with
  | [] => s
  | st :: rest => exec (exec1 s st) rest
  end.

(** [writes p] = the variables a program assigns. *)
Fixpoint writes (p : list stmt) : list var :=
  match p with
  | [] => []
  | st :: rest => lhs st :: writes rest
  end.

(** Executing a program that never writes [x] leaves [x] unchanged. *)
Lemma exec_preserves_unwritten : forall p s x,
  ~ In x (writes p) -> exec s p x = s x.
Proof.
  induction p as [| st rest IH]; intros s x Hni; simpl in *.
  - reflexivity.
  - rewrite IH by (intro; apply Hni; right; assumption).
    unfold exec1. apply upd_other. intro; apply Hni; left; auto.
Qed.

(** If a program writes none of [e]'s read-variables, it preserves [eval e]. *)
Lemma exec_preserves_eval : forall p s e,
  (forall x, In x (reads e) -> ~ In x (writes p)) ->
  eval (exec s p) e = eval s e.
Proof.
  intros p s e Hdisj. apply eval_agrees_on_reads.
  intros x Hx. apply exec_preserves_unwritten. apply Hdisj; exact Hx.
Qed.

(** [t] is never READ by program [p] (no statement's rhs depends on [t]). Under
    single-use, the intervening code does not read the folded temp. *)
Fixpoint read_free (t : var) (p : list stmt) : Prop :=
  match p with
  | [] => True
  | st :: rest => ~ In t (reads (rhs st)) /\ read_free t rest
  end.

(** Two stores that differ ONLY at [t] stay equal off [t] after running the same
    program [p], provided [p] never writes [t] and never reads [t]. Straight-line
    determinism: each rhs is evaluated in stores agreeing off [t] and not reading
    [t], so the written values coincide. *)
Lemma exec_eq_off_t : forall p t (s1 s2 : store),
  ~ In t (writes p) -> read_free t p ->
  (forall y, y <> t -> s1 y = s2 y) ->
  forall x, x <> t -> exec s1 p x = exec s2 p x.
Proof.
  induction p as [| st rest IH]; intros t s1 s2 Hnt Hrf Hagree x Hx; simpl in *.
  - apply Hagree; exact Hx.
  - destruct Hrf as [Hrf_st Hrf_rest].
    apply (IH t (exec1 s1 st) (exec1 s2 st)).
    + intro; apply Hnt; right; assumption.
    + exact Hrf_rest.
    + (* exec1 s1 st and exec1 s2 st agree off t *)
      intros y Hyt. unfold exec1.
      destruct (Z.eq_dec y (lhs st)) as [-> | Hyl].
      * rewrite !upd_same.
        apply eval_agrees_on_reads. intros z Hz.
        (* z is read by rhs st; rhs st does not read t (Hrf_st), so z <> t *)
        assert (z <> t) by (intro; subst z; apply Hrf_st; exact Hz).
        apply Hagree; assumption.
      * rewrite !upd_other by exact Hyl. apply Hagree; exact Hyt.
    + exact Hx.
Qed.

(* ================================================================== *)
(** ** 1. Substitution soundness (the single-use fold) *)
(* ================================================================== *)

(** The fold transforms
        [ t := e ;  mid ;  u := f ]      (where [f] reads [t])
    into
        [ mid ;  u := f[t := e] ].
    We model [f]'s dependence on [t] explicitly: the use expression is
    [subst_t body], the result of replacing [EVar t] by [e] in [body]. The
    pre-fold use is [body] evaluated in a store where [t] holds [eval e]. *)

Fixpoint subst (t : var) (e : expr) (body : expr) : expr :=
  match body with
  | EVar x => if Z.eqb x t then e else EVar x
  | EConst n => EConst n
  | EAdd a b => EAdd (subst t e a) (subst t e b)
  | ESub a b => ESub (subst t e a) (subst t e b)
  | EMul a b => EMul (subst t e a) (subst t e b)
  end.

(** Substitution lemma: evaluating [subst t e body] in store [s] equals
    evaluating [body] in [s] updated so [t = eval s e]. This is the algebraic
    heart of copy propagation. *)
Lemma eval_subst : forall t e body s,
  eval s (subst t e body) = eval (upd s t (eval s e)) body.
Proof.
  intros t e body s. induction body; simpl.
  - destruct (Z.eqb x t) eqn:E.
    + apply Z.eqb_eq in E. subst x. rewrite upd_same. reflexivity.
    + simpl. rewrite upd_other; [reflexivity |]. apply Z.eqb_neq; exact E.
  - reflexivity.
  - rewrite IHbody1, IHbody2; reflexivity.
  - rewrite IHbody1, IHbody2; reflexivity.
  - rewrite IHbody1, IHbody2; reflexivity.
Qed.

(** MAIN — single-use fold preserves the use value. Let [t] be the temp, [e] its
    defining expression, [mid] the (possibly empty) intervening straight-line
    code, and [body] the use expression (which may read [t]). If [mid] writes
    none of [e]'s read variables (no-clobber) and does not write [t] (single
    def / [t] not reassigned), then the value assigned to the use variable is the
    same whether we (pre-fold) materialise [t := e] then run [mid] then evaluate
    [body], or (post-fold) drop the [t] assignment, run [mid], and evaluate the
    substituted [subst t e body]. *)
Theorem single_use_fold_sound : forall (t : var) (e : expr) (mid : list stmt)
    (body : expr) (s : store),
  (forall x, In x (reads e) -> ~ In x (writes mid)) ->  (* no-clobber *)
  ~ In t (writes mid) ->                                 (* single def: t not reassigned *)
  read_free t mid ->                                     (* single use: mid doesn't read t *)
  (* pre-fold: t materialised, mid run on the t-updated store, body read *)
  eval (exec (upd s t (eval s e)) mid) body
  (* post-fold: mid run on the ORIGINAL store, substituted body read *)
  = eval (exec s mid) (subst t e body).
Proof.
  intros t e mid body s Hclob Hnt Hrf.
  rewrite eval_subst.
  (* goal: eval (exec (upd s t (eval s e)) mid) body
         = eval (upd (exec s mid) t (eval (exec s mid) e)) body *)
  apply eval_agrees_on_reads. intros x Hx.
  (* compare the two stores at x *)
  destruct (Z.eq_dec x t) as [-> | Hxt].
  - (* x = t: LHS store has t = eval s e preserved through mid (mid doesn't
       write t); RHS store has t = eval (exec s mid) e *)
    rewrite upd_same.
    rewrite (exec_preserves_unwritten mid (upd s t (eval s e)) t Hnt).
    rewrite upd_same.
    (* eval s e = eval (exec s mid) e, since mid writes none of reads e *)
    symmetry. apply exec_preserves_eval. exact Hclob.
  - (* x <> t: RHS upd is transparent; both run mid, and the LHS's initial
       t-update is invisible to x's value because... we compare exec on two
       stores differing only at t, and x <> t with mid not writing t *)
    rewrite upd_other by exact Hxt.
    (* exec (upd s t v) mid x = exec s mid x  when mid doesn't write/read t and
       x<>t: the two initial stores differ only at t; t is never written or read
       by mid and x<>t, so straight-line exec agrees on the x-cell. *)
    apply exec_eq_off_t with (t := t); try assumption.
    intros y Hyt. rewrite upd_other by exact Hyt. reflexivity.
Qed.

(* ================================================================== *)
(** ** 2. Declaration elision: a folded temp is dead, dropping it is sound *)
(* ================================================================== *)

(** After folding [t] into its sole use, [t] is no longer read by the remaining
    program. Dropping the assignment [t := e] therefore preserves the store on
    every OTHER variable — which is exactly the decl-count reduction (the temp's
    declaration disappears). We prove: if a program [p] does not read [t], then
    prepending [t := e] changes only the [t] cell; on every [x <> t] the two
    executions agree. So removing the dead [t := e] is observationally invisible
    on the live variables. *)
Theorem drop_dead_temp_sound : forall (t : var) (e : expr) (p : list stmt) (s : store),
  read_free t p -> ~ In t (writes p) ->
  forall x, x <> t -> exec (upd s t (eval s e)) p x = exec s p x.
Proof.
  intros t e p s Hrf Hnt x Hx.
  apply exec_eq_off_t with (t := t); try assumption.
  intros y Hyt. rewrite upd_other by exact Hyt. reflexivity.
Qed.

(** Combined corollary — the full single-use copy-propagation transform is sound:
    materialising [t := e] then using [body] (which reads [t]) equals dropping the
    [t] declaration and using the substituted [subst t e body], for the value
    assigned at the use site. This is [single_use_fold_sound] packaged as the
    end-to-end statement the producer's fold realizes. *)
Theorem copy_prop_transform_sound : forall (t : var) (e : expr) (mid : list stmt)
    (body : expr) (s : store),
  (forall x, In x (reads e) -> ~ In x (writes mid)) ->
  ~ In t (writes mid) -> read_free t mid ->
  eval (exec (upd s t (eval s e)) mid) body
  = eval (exec s mid) (subst t e body).
Proof. exact single_use_fold_sound. Qed.

(** A pure COPY ([e = EVar y], the `v18 = v_20` case that dominates the measured
    leaks) is the simplest instance: folding it replaces [EVar t] by [EVar y] in
    the use, sound whenever [y] is not reassigned in [mid] and [t] is single-use.
    This is the exact transform the producer applies to single-use `// temp`
    copies. *)
Corollary single_use_copy_fold_sound : forall (t y : var) (mid : list stmt)
    (body : expr) (s : store),
  ~ In y (writes mid) -> ~ In t (writes mid) -> read_free t mid ->
  eval (exec (upd s t (s y)) mid) body
  = eval (exec s mid) (subst t (EVar y) body).
Proof.
  intros t y mid body s Hy Hnt Hrf.
  apply (single_use_fold_sound t (EVar y) mid body s).
  - intros x Hx. simpl in Hx. destruct Hx as [-> | []]. exact Hy.
  - exact Hnt.
  - exact Hrf.
Qed.
