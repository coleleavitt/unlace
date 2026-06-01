__int64 __fastcall sub_7C6D0(_QWORD *a1, __int64 *a2, double a3)
{
  int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _DWORD *v7; // rbp
  _DWORD *i; // r12
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( *a1 >= a1[1] )
    sub_7A510(a3);
  v4 = unpack_dd();
  v5 = v4;
  if ( a1[1] - *a1 < (unsigned __int64)v4 || v4 < 0 )
    return 0;
  v6 = a2[1];
  if ( v6 < v4 )
  {
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)v4 )
    {
      v11 = qvector_reserve((__int64)a2, v10, v4, 8);
      v6 = a2[1];
      *a2 = v11;
      v10 = v11;
    }
    memset((void *)(v10 + 8 * v6), 0, 8 * (v5 - v6));
    goto LABEL_6;
  }
  if ( v4 != v6 )
  {
LABEL_6:
    a2[1] = v5;
    v6 = v5;
  }
  v7 = (_DWORD *)*a2;
  for ( i = &v7[2 * v6]; i != v7; *(v7 - 1) = unpack_dd() )
  {
    if ( *a1 >= a1[1] || (*v7 = unpack_dd(), *a1 >= a1[1]) )
    {
      if ( !under_debugger )
        sub_383060(0xC597u, a3);
      BUG();
    }
    v7 += 2;
  }
  return 1;
}

