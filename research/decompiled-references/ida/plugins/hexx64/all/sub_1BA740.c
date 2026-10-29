unsigned __int64 __fastcall sub_1BA740(__m128i *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  const __m128i *v8; // r14
  const __m128i *v9; // rbp
  __int64 *v10; // rbx
  __m128i v11; // xmm0
  char *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm2
  unsigned __int64 result; // rax

  v3 = (a2 >> 7) + 1;
  v4 = (a2 >> 7) + 3;
  if ( v4 < 8 )
    v4 = 8;
  a1->m128i_i64[1] = v4;
  v5 = operator new(8 * v4);
  v6 = a1->m128i_i64[1];
  a1->m128i_i64[0] = v5;
  v7 = (unsigned __int64)(v6 - v3) >> 1;
  v8 = (const __m128i *)(v5 + 8 * v7);
  v9 = (const __m128i *)((char *)v8 + 8 * v3);
  if ( v8 < v9 )
  {
    v10 = (__int64 *)(v5 + 8 * v7);
    do
      *v10++ = operator new(0x200u);
    while ( v10 < (__int64 *)v9 );
  }
  v11 = _mm_loadl_epi64(v8);
  v12 = &v9[-1].m128i_i8[8];
  v13 = *(_QWORD *)v12;
  v14 = v8->m128i_i64[0] + 512;
  a1[1] = _mm_unpacklo_epi64(v11, v11);
  v15 = v13 + 4 * (a2 & 0x7F);
  v16 = (__m128i)v13;
  result = v13 + 512;
  a1[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v8);
  a1[3] = _mm_unpacklo_epi64((__m128i)v15, v16);
  a1[4] = _mm_unpacklo_epi64((__m128i)result, (__m128i)(unsigned __int64)v12);
  return result;
}

