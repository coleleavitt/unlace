__int64 __fastcall sub_332630(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  _QWORD *v5; // rdx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  char v10; // bl
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+50h] [rbp-38h]
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v5 = &v3[2 * v2];
  if ( v5 != v3 )
  {
    while ( *a2 < *v3 || v3[1] < a2[1] )
    {
      v3 += 2;
      if ( v5 == v3 )
        goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  v7 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *a2 >= *v7 && v7[1] >= a2[1] )
      return 1;
    get_func_ranges();
    v8 = *a2;
    v9 = a2[1];
    v11 = 0;
    v13 = 0;
    v14 = -1;
    v12 = 0;
    if ( v8 < v9 )
    {
      v11 = qvector_reserve((__int64)&v11, 0, 1, 16);
      *(__m128i *)(v11 + 16 * v12) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
      *(_QWORD *)&v12 = v12 + 1;
    }
    v10 = rangeset_t_contains();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    if ( v10 )
      return 1;
  }
  return 0;
}

