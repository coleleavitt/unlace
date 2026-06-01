int __fastcall boost::asio::detail::scheduler::wake_one_thread_and_unlock(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-18h]

  v2 = a1;
  if ( *(_QWORD *)(a1 + 256)
    && (v6 = *(_QWORD *)a2, *(_BYTE *)(*(_QWORD *)a2 + 52LL))
    && (v5 = *(_QWORD *)(v2 + 168), *(_QWORD *)(v2 + 168) = v5 | 1, v5 > 1) )
  {
    if ( a2[8] )
    {
      v8 = v2;
      pthread_mutex_unlock((pthread_mutex_t *)(v6 + 8));
      v2 = v8;
      a2[8] = 0;
    }
    LODWORD(v5) = pthread_cond_signal((pthread_cond_t *)(v2 + 120));
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 216) )
    {
      v3 = *(__int64 **)(v2 + 176);
      if ( v3 )
      {
        v4 = *v3;
        *(_BYTE *)(v2 + 216) = 1;
        LODWORD(v5) = (*(__int64 (__fastcall **)(__int64 *))(v4 + 8))(v3);
      }
    }
    if ( a2[8] )
    {
      if ( *(_BYTE *)(*(_QWORD *)a2 + 52LL) )
        LODWORD(v5) = pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)a2 + 8LL));
      a2[8] = 0;
    }
  }
  return v5;
}

