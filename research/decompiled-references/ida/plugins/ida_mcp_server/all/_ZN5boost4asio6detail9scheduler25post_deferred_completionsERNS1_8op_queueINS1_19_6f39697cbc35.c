void __fastcall boost::asio::detail::scheduler::post_deferred_completions(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD **addr; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char v8; // bp
  _QWORD *v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-28h]

  v2 = *a2;
  if ( !*a2 )
    return;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v15 = *a2;
    addr = (_QWORD **)__tls_get_addr();
    v2 = v15;
    v5 = *addr;
    if ( v5 )
    {
      while ( a1 != *v5 )
      {
        v5 = (_QWORD *)v5[2];
        if ( !v5 )
          goto LABEL_11;
      }
      v6 = v5[1];
      if ( v6 )
      {
        v7 = *(_QWORD **)(v6 + 120);
        if ( v7 )
          *v7 = v15;
        else
          *(_QWORD *)(v6 + 112) = v15;
        *(_QWORD *)(v6 + 120) = a2[1];
        *(_OWORD *)a2 = 0;
        return;
      }
    }
  }
LABEL_11:
  v8 = *(_BYTE *)(a1 + 108);
  if ( !v8 || (pthread_mutex_lock((pthread_mutex_t *)(a1 + 64)), (v2 = *a2) != 0) )
  {
    v9 = *(_QWORD **)(a1 + 240);
    if ( v9 )
      *v9 = v2;
    else
      *(_QWORD *)(a1 + 232) = v2;
    *(_QWORD *)(a1 + 240) = a2[1];
    *(_OWORD *)a2 = 0;
    if ( !*(_QWORD *)(a1 + 256) || !*(_BYTE *)(a1 + 108) )
    {
LABEL_15:
      if ( *(_BYTE *)(a1 + 216) )
        goto LABEL_18;
      goto LABEL_16;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 256) )
    {
      if ( !*(_BYTE *)(a1 + 216) )
      {
        v12 = *(__int64 **)(a1 + 176);
        if ( v12 )
        {
          v13 = *v12;
          *(_BYTE *)(a1 + 216) = 1;
          (*(void (__fastcall **)(__int64 *))(v13 + 8))(v12);
        }
      }
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(a1 + 108) )
    {
      if ( *(_BYTE *)(a1 + 216) )
      {
LABEL_26:
        if ( *(_BYTE *)(a1 + 108) )
          pthread_mutex_unlock((pthread_mutex_t *)(a1 + 64));
        return;
      }
LABEL_16:
      v10 = *(__int64 **)(a1 + 176);
      if ( v10 )
      {
        v11 = *v10;
        *(_BYTE *)(a1 + 216) = 1;
        (*(void (__fastcall **)(__int64 *))(v11 + 8))(v10);
      }
LABEL_18:
      if ( !v8 )
        return;
      goto LABEL_26;
    }
    v8 = *(_BYTE *)(a1 + 108);
  }
  v14 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v14 | 1;
  if ( v14 <= 1 )
    goto LABEL_15;
  if ( v8 )
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 64));
  pthread_cond_signal((pthread_cond_t *)(a1 + 120));
}

