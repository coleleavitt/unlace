unsigned __int64 __fastcall sub_219F0(__m128i *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r14
  const __m128i *v10; // r13
  __int64 *v11; // rbx
  unsigned __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rax

  v3 = 8;
  v4 = a2 / 7 + 1;
  v5 = a2 / 7 + 3;
  if ( v5 >= 8 )
    v3 = a2 / 7 + 3;
  a1->m128i_i64[1] = v3;
  if ( (a2 / 7 + 3) >> 60 )
  {
    if ( v5 >> 61 )
      sub_1192E();
    std::__throw_bad_alloc();
  }
  v6 = operator new(8 * v3);
  v7 = a1->m128i_i64[1];
  a1->m128i_i64[0] = v6;
  v8 = (v7 - v4) >> 1;
  v9 = (const __m128i *)(v6 + 8 * v8);
  v10 = (const __m128i *)((char *)v9 + 8 * v4);
  if ( v9 < v10 )
  {
    v11 = (__int64 *)(v6 + 8 * v8);
    do
      *v11++ = operator new(0x1F8u);
    while ( v11 < (__int64 *)v10 );
  }
  v12 = v10[-1].m128i_u64[1];
  v13 = _mm_loadl_epi64(v9);
  v14 = v9->m128i_i64[0] + 504;
  a1[1] = _mm_unpacklo_epi64(v13, v13);
  a1[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v9);
  a1[3] = _mm_unpacklo_epi64((__m128i)(v12 + 72 * (a2 % 7)), (__m128i)v12);
  a1[4] = _mm_unpacklo_epi64((__m128i)(v12 + 504), (__m128i)(unsigned __int64)&v10[-1].m128i_u64[1]);
  return v12 + 504;
}

