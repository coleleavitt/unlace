__int64 *__fastcall sub_6E270(__int64 *a1, int **a2)
{
  _BYTE *v2; // rax
  int *v3; // r13
  __int64 v4; // rbx
  const char *v5; // rdx
  int i; // ecx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v11; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
  *a1 = (__int64)v2;
  a1[1] = 2;
  *v2 = 123;
  *(_BYTE *)(*a1 + 1) = 0;
  v3 = a2[1];
  if ( v3 )
  {
    v4 = 0;
    v5 = " ";
    for ( i = **a2; ; i = (*a2)[v4] )
    {
      sub_10400(a1, (__int64)"%s%d", v5, i);
      if ( v3 == (int *)++v4 )
        break;
      v5 = ", ";
    }
  }
  v7 = a1[1];
  v8 = 2;
  if ( v7 )
    v8 = v7-- + 1;
  v9 = *a1;
  if ( a1[2] < v8 )
  {
    v11 = qvector_reserve(a1, v9, v8, 1);
    *a1 = v11;
    v9 = v11;
  }
  a1[1] = v8;
  *(_BYTE *)(v9 + v7) = 125;
  *(_BYTE *)(*a1 + v7 + 1) = 0;
  return a1;
}

