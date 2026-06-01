__int64 __fastcall sub_32CAB0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  char v9; // bl
  __m128i *v10; // [rsp+30h] [rbp-58h]

  v2 = *(unsigned __int64 **)(a1 + 8);
  v4 = &v2[2 * *(_QWORD *)(a1 + 16)];
  if ( v4 != v2 )
  {
    while ( *a2 < *v2 || v2[1] < a2[1] )
    {
      v2 += 2;
      if ( v4 == v2 )
        goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  v6 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *a2 >= *v6 && v6[1] >= a2[1] )
      return 1;
    get_func_ranges();
    v7 = *a2;
    v8 = a2[1];
    v10 = nullptr;
    if ( *a2 < v8 )
    {
      v10 = (__m128i *)qvector_reserve();
      *v10 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v8);
    }
    v9 = rangeset_t_contains();
    if ( v10 )
      qfree();
    if ( v9 )
      return 1;
  }
  return 0;
}

