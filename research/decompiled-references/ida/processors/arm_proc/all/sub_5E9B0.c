void __fastcall sub_5E9B0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  const __m128i *v6; // rsi
  __int64 v7; // rdi
  const __m128i *v8; // rbp
  __int64 i; // rax
  const __m128i *v10; // rdx
  __int64 v11; // rdx
  __m128i *v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // r12
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-40h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v6 = (const __m128i *)a1[36];
    v7 = 2LL * a1[37];
    v8 = v6;
    for ( i = (v7 * 16) >> 5; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v10 = &v8[2 * (i >> 1)];
        if ( v4 < v10->m128i_i64[1] )
          break;
        v8 = v10 + 2;
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( v8 != &v6[v7] )
    {
      v11 = a1[3];
      v21 = a1 + 2;
      do
      {
        v13 = v8->m128i_u64[1];
        v14 = v4;
        v4 = a3;
        v15 = a1[2];
        v16 = _mm_loadl_epi64(v8);
        if ( v13 <= a3 )
          v4 = v8->m128i_u64[1];
        v17 = _mm_unpacklo_epi64(v16, (__m128i)v14);
        v18 = v4 - v14;
        if ( a1[4] < (unsigned __int64)(v11 + 1) )
        {
          v20 = v17;
          v19 = qvector_reserve();
          v11 = a1[3];
          v17 = _mm_load_si128(&v20);
          a1[2] = v19;
          v15 = v19;
        }
        v12 = (__m128i *)(32 * v11 + v15);
        v12[1].m128i_i64[0] = v18;
        v12[1].m128i_i32[2] = -1;
        *v12 = v17;
        v11 = a1[3] + 1LL;
        a1[3] = v11;
        if ( v13 >= a3 )
          break;
        v8 += 2;
      }
      while ( v8 != (const __m128i *)(a1[36] + 32LL * a1[37]) );
    }
  }
}

