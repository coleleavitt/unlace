bool __fastcall sub_19A5A0(char *arg)
{
  pthread_mutex_t *v1; // rbp
  pthread_t v2; // rax

  v1 = *((pthread_mutex_t **)arg + 7);
  sub_19A520(v1);
  if ( !arg[200] )
  {
    v2 = sub_19A480(sub_19A6A0, arg);
    *((_QWORD *)arg + 8) = v2;
    if ( !v2 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1258);
      BUG();
    }
    arg[200] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 72), nullptr);
  }
  return sub_19A570(v1);
}
