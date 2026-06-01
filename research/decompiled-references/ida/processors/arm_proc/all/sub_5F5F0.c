__int64 __fastcall sub_5F5F0(__int64 a1, __m128i **a2, __m128i **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // r13
  __int64 v7; // rax
  __m128i *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v11; // rdx
  __m128i *v12; // rax
  __int64 v13; // rdx
  __m128i *i; // rcx
  __int32 v15; // esi
  __int64 v16; // rdx
  __m128i *j; // rdx
  __m128i v19; // xmm0

  v6 = *(__m128i **)a1;
  v7 = 32LL * *(_QWORD *)(a1 + 8);
  v8 = (__m128i *)(*(_QWORD *)a1 + v7);
  if ( v8 == *(__m128i **)a1 )
    return 0;
  v9 = v7 >> 5;
  v11 = -2;
  if ( v9 )
  {
    _BitScanReverse64(&v9, v9);
    v11 = 2LL * (int)v9;
  }
  sub_5C940(*(__m128i **)a1, v8, v11, (__int64 (__fastcall *)(__int64, __int64))sub_5DC80, a5, a6);
  sub_5F590(v6, v8, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_5DC80);
  v12 = *(__m128i **)a1;
  v13 = *(_QWORD *)a1 + 32LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v13 )
    return 0;
  while ( v12[1].m128i_i32[2] != *(_DWORD *)(a1 + 28) || v12[1].m128i_i64[0] != *(_DWORD *)(a1 + 32) )
  {
    v12 += 2;
    if ( v12 == (__m128i *)v13 )
      return 0;
  }
  if ( v12 == (__m128i *)v13 )
    return 0;
  *a2 = v12;
  for ( i = v12; ; i += 2 )
  {
    v15 = i[1].m128i_i32[2];
    if ( v15 == *(_DWORD *)(a1 + 24) )
      break;
    if ( &i[2] == (__m128i *)(*(_QWORD *)a1 + 32LL * *(_QWORD *)(a1 + 8)) )
      break;
    if ( i[3].m128i_i32[2] != v15 - 1 )
      break;
    v16 = *(int *)(a1 + 32);
    if ( i[3].m128i_i64[0] != v16 || i[2].m128i_i64[1] != i->m128i_i64[1] + v16 )
      break;
  }
  if ( i == v12 )
  {
    for ( j = i; j != *(__m128i **)a1; j -= 2 )
    {
      v19 = _mm_loadu_si128((__m128i *)((char *)j - 24));
      if ( i->m128i_i64[1] == _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0] )
        return 0;
    }
  }
  *a3 = i;
  return 1;
}

