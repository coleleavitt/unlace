__int64 *__fastcall sub_3C340(__int64 *a1, _QWORD *a2)
{
  int *v3; // rbp
  int *v4; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = (int *)a2[24];
  v4 = &v3[2 * a2[25]];
  if ( v4 != v3 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a2[30] + 8LL * *v3);
      if ( v6 < v8 + 1 )
      {
        v10 = qvector_reserve(a1, v7, v8 + 1, 8);
        *a1 = v10;
        v8 = a1[1];
        v7 = v10;
      }
      *(_QWORD *)(v7 + 8 * v8) = v9;
      v3 += 2;
      v8 = a1[1] + 1;
      a1[1] = v8;
      if ( v4 == v3 )
        break;
      v6 = a1[2];
      v7 = *a1;
    }
  }
  return a1;
}

