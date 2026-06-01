_QWORD *__fastcall sub_251E50(_QWORD *a1, __int64 a2, int a3, double a4)
{
  unsigned int v4; // r13d
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, int, int); // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbp
  int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // r12

  v4 = a2;
  v5 = a3 - 1;
  v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v6 == sub_650D0 )
  {
    v7 = (__int64 *)(a1[6] + 24LL * (int)a2);
    v8 = v5;
    v9 = *v7;
    v10 = *(unsigned int *)(*v7 + 4LL * v5);
  }
  else
  {
    v10 = (unsigned int)v6((__int64)a1, a2, v5);
  }
  v11 = sub_24FFD0(a1, v10, v8, v9, a4);
  v12 = v11;
  if ( v5 <= 0 )
    return v12;
  if ( !v11 )
  {
    if ( !under_debugger )
      sub_383060(0xC4D4u, a4);
    goto LABEL_17;
  }
  v13 = sub_251E50(a1, v4, v5);
  v16 = (_QWORD *)v13;
  if ( !v13 )
    return v12;
  if ( !*(_DWORD *)(v13 + 8) )
  {
    v17 = *(_DWORD *)(v13 + 12);
    sub_255630(v13);
    clear_tinfo_t();
    j__qfree((__int64)v16);
    if ( v17 != -1 )
    {
      if ( *((_DWORD *)v12 + 3) == -1 )
      {
        *((_DWORD *)v12 + 3) = v17;
        return v12;
      }
      if ( !under_debugger )
        sub_383060(0xCA76u, a4);
LABEL_17:
      BUG();
    }
    return v12;
  }
  v19 = j__qalloc_or_throw(64, v4, v14, v15);
  *(_QWORD *)(v19 + 24) = v16;
  *(_QWORD *)(v19 + 32) = v12;
  v20 = v19;
  *(_QWORD *)v19 = -1;
  *(_DWORD *)(v19 + 8) = 1;
  *(_QWORD *)(v19 + 12) = -1;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  *(_QWORD *)v19 = *v16;
  sub_2441C0(v19, *(_QWORD *)(a1[41] + 112LL), 0, a4);
  return (_QWORD *)v20;
}

