__int64 __fastcall sub_7F300(__int64 *a1, _QWORD *a2, double a3)
{
  int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( *a2 >= a2[1] )
    sub_7A510(a3);
  v4 = unpack_dd();
  v5 = v4;
  if ( a2[1] - *a2 < (unsigned __int64)v4 || v4 < 0 )
    return 0;
  v6 = a1[1];
  if ( v6 < v4 )
  {
    v11 = *a1;
    if ( a1[2] < (unsigned __int64)v4 )
    {
      v12 = qvector_reserve((__int64)a1, v11, v4, 40);
      v6 = a1[1];
      *a1 = v12;
      v11 = v12;
    }
    memset((void *)(v11 + 40 * v6), 0, 40 * (v5 - v6));
    goto LABEL_6;
  }
  if ( v4 != v6 )
  {
LABEL_6:
    a1[1] = v5;
    v6 = v5;
  }
  v7 = (__int64 *)*a1;
  v8 = *a1 + 40 * v6;
  if ( *a1 != v8 )
  {
    do
    {
      v9 = v7;
      v7 += 5;
      sub_7F290(v9, a2, a3);
    }
    while ( (__int64 *)v8 != v7 );
  }
  return 1;
}

