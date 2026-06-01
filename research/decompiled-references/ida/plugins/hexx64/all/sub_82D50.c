__int64 __fastcall sub_82D50(_QWORD *a1, __int64 *a2, double a3)
{
  int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( *a1 >= a1[1] )
    sub_7A510(a3);
  v4 = unpack_dd();
  v5 = v4;
  if ( a1[1] - *a1 < (unsigned __int64)v4 || v4 < 0 )
    return 0;
  v6 = a2[1];
  if ( v6 < v4 )
  {
    v8 = *a2;
    if ( a2[2] < (unsigned __int64)v4 )
    {
      v9 = qvector_reserve((__int64)a2, v8, v4, 8);
      v6 = a2[1];
      *a2 = v9;
      v8 = v9;
    }
    memset((void *)(v8 + 8 * v6), 0, 8 * (v5 - v6));
    a2[1] = v5;
  }
  else if ( v4 != v6 )
  {
    a2[1] = v4;
  }
  return 1;
}

