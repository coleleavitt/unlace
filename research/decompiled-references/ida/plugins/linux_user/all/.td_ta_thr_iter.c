// attributes: thunk
td_err_e td_ta_thr_iter(
        const td_thragent_t *ta,
        td_thr_iter_f *callback,
        void *cbdata_p,
        td_thr_state_e state,
        int ti_pri,
        sigset_t *ti_sigmask_p,
        unsigned int ti_user_flags)
{
  return td_ta_thr_iter(ta, callback, cbdata_p, state, ti_pri, ti_sigmask_p, ti_user_flags);
}

