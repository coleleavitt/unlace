const __m128i *__fastcall sub_CE40(const __m128i *a1, int a2, int a3)
{
  const __m128i *v3; // r15
  const char *v5; // r13
  int i; // r12d
  const char *v7; // r14
  __m128i v8; // xmm0
  __int32 *v9; // rax
  int j; // edi
  const __m128i *result; // rax
  int v12; // esi
  int v13; // ecx
  const __m128i *v14; // [rsp+8h] [rbp-40h]

  v3 = a1;
  v14 = (const __m128i *)((char *)a1 + 152 * a2);
  do
  {
    v5 = (const char *)v3->m128i_i64[1];
    for ( i = 0; i < strlen(v5); ++i )
    {
      v7 = &v5[i];
      v8 = _mm_slli_epi32(_mm_loadl_epi64(v3 + 9), 1u);
      v3[9].m128i_i64[0] = v8.m128i_i64[0];
      if ( (unsigned __int8)(*v7 - 48) <= 1u )
      {
        v3[9].m128i_i32[0] = _mm_cvtsi128_si32(v8) + 1;
        if ( *v7 == 49 )
          v3[9].m128i_i32[1] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)) + 1;
      }
    }
    v9 = &v3[2].m128i_i32[3];
    for ( j = 0; j != 5; ++j )
    {
      if ( v3[1].m128i_i64[3 * j + 1] )
      {
        v12 = *(v9 - 1);
        v13 = 0;
        do
        {
          if ( (v12 & (1 << v13)) != 0 )
            break;
          ++v13;
          ++*v9;
        }
        while ( a3 != v13 );
      }
      v9 += 6;
    }
    result = v14;
    v3 = (const __m128i *)((char *)v3 + 152);
  }
  while ( v3 != v14 );
  return result;
}

