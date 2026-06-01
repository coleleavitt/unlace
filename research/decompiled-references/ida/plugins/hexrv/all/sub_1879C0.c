__int64 __fastcall sub_1879C0(const __m128i **a1, __int64 a2)
{
  const __m128i *v2; // rbp
  __int64 result; // rax
  __m128i *v6; // rax
  __m128i *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __m128i v11; // xmm1
  __int64 v12; // rbx
  __int32 v13; // r14d
  __int64 v14; // rax
  const __m128i *v15; // rdx
  const __m128i *v16; // rsi
  const __m128i *v17; // rdi
  __m128i v18; // xmm1
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  const __m128i *v23; // rcx
  const __m128i *v24; // rsi
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  const __m128i *v27; // [rsp+10h] [rbp-48h]
  const __m128i *v28; // [rsp+18h] [rbp-40h]

  v2 = *(const __m128i **)a2;
  result = 32LL * *(_QWORD *)(a2 + 8);
  if ( result )
  {
    do
    {
      v6 = (__m128i *)*a1;
      v7 = (__m128i *)&(*a1)[2 * (_QWORD)a1[1]];
      if ( *a1 == v7 )
        goto LABEL_15;
      while ( v2[1].m128i_i32[1] != v6[1].m128i_i32[1]
           || v2[1].m128i_i32[2] != v6[1].m128i_i32[2]
           || v2[1].m128i_i32[0] != v6[1].m128i_i32[0] )
      {
        v6 += 2;
        if ( v7 == v6 )
          goto LABEL_15;
      }
      v8 = v2->m128i_i64[0];
      if ( v7 == v6 )
      {
LABEL_15:
        v10 = (unsigned __int64)a1[2];
        v11 = _mm_loadu_si128(v2);
        v12 = v2[1].m128i_i64[0];
        v13 = v2[1].m128i_i32[2];
        if ( v10 < (unsigned __int64)a1[1]->m128i_u64 + 1 )
        {
          v26 = v11;
          v14 = qvector_reserve();
          v15 = a1[1];
          v16 = a1[2];
          a1[2] = (const __m128i *)v10;
          v17 = *a1;
          v18 = _mm_load_si128(&v26);
          v19 = v14;
          v20 = (__int64)&v15[-1].m128i_i64[1] + 7;
          if ( v20 >= 0 )
          {
            do
            {
              v21 = _mm_loadu_si128(v17);
              v14 += 32;
              v17 += 2;
              *(__m128i *)(v14 - 32) = v21;
              *(__m128i *)(v14 - 16) = _mm_loadu_si128(v17 - 1);
            }
            while ( v20-- != 0 );
          }
          v28 = v16;
          v27 = (const __m128i *)v19;
          v26 = v18;
          qfree();
          v23 = v27;
          v24 = v28;
          v11 = _mm_load_si128(&v26);
          v25 = 2LL * (_QWORD)a1[1];
          *a1 = v27;
          a1[2] = v24;
          v7 = (__m128i *)&v23[v25];
        }
        v7[1].m128i_i64[0] = v12;
        v7[1].m128i_i32[2] = v13;
        *v7 = v11;
        a1[1] = (const __m128i *)((char *)a1[1] + 1);
      }
      else
      {
        if ( v6->m128i_i64[0] > v8 )
          v6->m128i_i64[0] = v8;
        v9 = v2->m128i_i64[1];
        if ( v9 > v6->m128i_i64[1] )
          v6->m128i_i64[1] = v9;
      }
      v2 += 2;
      result = *(_QWORD *)a2 + 32LL * *(_QWORD *)(a2 + 8);
    }
    while ( v2 != (const __m128i *)result );
  }
  return result;
}

