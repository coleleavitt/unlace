__m128i *__fastcall sub_2DEA0(const __m128i *a1, __int64 a2)
{
  __m128i *v3; // rax
  __int64 v4; // rdi
  __m128i *v5; // r12
  __int64 v6; // rax
  const __m128i *v7; // rbp
  __m128i *v8; // rbx
  __m128i *v9; // r13
  __int32 v10; // eax
  __int64 v11; // rdi

  v3 = (__m128i *)operator new(0x38u);
  v4 = a1[1].m128i_i64[1];
  v5 = v3;
  v3[2] = _mm_loadu_si128(a1 + 2);
  v6 = a1[3].m128i_i64[0];
  v5[1].m128i_i64[0] = 0;
  v5[3].m128i_i64[0] = v6;
  LODWORD(v6) = a1->m128i_i32[0];
  v5[1].m128i_i64[1] = 0;
  v5->m128i_i32[0] = v6;
  v5->m128i_i64[1] = a2;
  if ( v4 )
    v5[1].m128i_i64[1] = sub_2DEA0(v4, v5);
  v7 = (const __m128i *)a1[1].m128i_i64[0];
  if ( v7 )
  {
    v8 = v5;
    do
    {
      v9 = v8;
      v8 = (__m128i *)operator new(0x38u);
      v8[2] = _mm_loadu_si128(v7 + 2);
      v8[3].m128i_i64[0] = v7[3].m128i_i64[0];
      v10 = v7->m128i_i32[0];
      v8[1].m128i_i64[0] = 0;
      v8->m128i_i32[0] = v10;
      v8[1].m128i_i64[1] = 0;
      v9[1].m128i_i64[0] = (__int64)v8;
      v8->m128i_i64[1] = (__int64)v9;
      v11 = v7[1].m128i_i64[1];
      if ( v11 )
        v8[1].m128i_i64[1] = sub_2DEA0(v11, v8);
      v7 = (const __m128i *)v7[1].m128i_i64[0];
    }
    while ( v7 );
  }
  return v5;
}

