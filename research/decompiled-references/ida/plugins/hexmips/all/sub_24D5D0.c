_QWORD *__fastcall sub_24D5D0(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  int v4; // ebp
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  int v6; // esi
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rbp
  int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // r12

  v3 = a2;
  v4 = a3 - 1;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_60ED0 )
    v6 = *(_DWORD *)(*(_QWORD *)(a1[6] + 24LL * (int)a2) + 4LL * v4);
  else
    v6 = v5((__int64)a1, a2, v4);
  v7 = sub_24B750(a1, v6);
  v8 = v7;
  if ( v4 <= 0 )
    return v8;
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_37E160(50388);
    goto LABEL_17;
  }
  v9 = sub_24D5D0(a1, v3, (unsigned int)v4);
  v10 = (_QWORD *)v9;
  if ( !v9 )
    return v8;
  if ( !*(_DWORD *)(v9 + 8) )
  {
    v11 = *(_DWORD *)(v9 + 12);
    sub_250DB0(v9);
    clear_tinfo_t();
    j__qfree();
    if ( v11 != -1 )
    {
      if ( *((_DWORD *)v8 + 3) == -1 )
      {
        *((_DWORD *)v8 + 3) = v11;
        return v8;
      }
      if ( !under_debugger )
        sub_37E160(51830);
LABEL_17:
      BUG();
    }
    return v8;
  }
  v13 = j__qalloc_or_throw();
  *(_QWORD *)(v13 + 24) = v10;
  *(_QWORD *)(v13 + 32) = v8;
  v14 = v13;
  *(_QWORD *)v13 = -1;
  *(_DWORD *)(v13 + 8) = 1;
  *(_QWORD *)(v13 + 12) = -1;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_QWORD *)v13 = *v10;
  sub_23F940(v13, *(_QWORD *)(a1[41] + 112LL), 0);
  return (_QWORD *)v14;
}

