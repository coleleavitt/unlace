void __fastcall sub_3AA270(
        __m128 *a1,
        __m128 *a2,
        __m128i a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        __m128i a7,
        __m128 a8,
        __m128 si128)
{
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  __m128 *v13; // r15
  unsigned __int64 v15; // rax
  __m128 *v16; // rbx
  unsigned __int64 v17; // rax
  __m128i v18; // xmm2
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-60h]
  __m128i v27; // [rsp+20h] [rbp-58h] BYREF
  __m128i v28[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v13 = (__m128 *)((char *)a1 + 40);
    v28[3].m128i_i64[1] = v12;
    v28[3].m128i_i64[0] = v11;
    v28[2].m128i_i64[1] = v10;
    v28[2].m128i_i64[0] = v9;
    while ( a2 != v13 )
    {
      while ( 1 )
      {
        v15 = v13->m128_u64[1];
        v16 = v13;
        v13 = (__m128 *)((char *)v13 + 40);
        if ( v15 >= a1->m128_u64[1] )
          break;
        a6 = (__m128i)v15;
        v17 = v13[-2].m128_u64[1];
        v18 = _mm_loadl_epi64((const __m128i *)&v13[-3].m128_u16[4]);
        a3.m128i_i64[0] = 0;
        a7 = _mm_loadu_si128((const __m128i *)&v13[-1]);
        v13[-2].m128_u64[1] = 0;
        a4 = 0;
        v26 = v17;
        a5 = _mm_unpacklo_epi64(v18, a6);
        v27 = a5;
        v28[0] = a7;
        v13[-1] = 0;
        v19 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v16 - (char *)a1) >> 3);
        if ( (char *)v16 - (char *)a1 > 0 )
        {
          do
          {
            v20 = v16[-3].m128_u64[1];
            v21 = v16[1].m128_i64[0];
            v16 = (__m128 *)((char *)v16 - 40);
            v22 = v16[1].m128_u64[0];
            a3 = _mm_loadu_si128((const __m128i *)&v16[1].m128_u16[4]);
            *(__m128 *)((char *)v16 + 24) = a4;
            v16[2].m128_u64[1] = v20;
            v23 = v16->m128_u64[1];
            v16[1].m128_u64[0] = 0;
            v16[3].m128_u64[0] = v23;
            if ( v21 )
            {
              v16[4].m128_u64[0] = 0;
              v25 = a3;
              qfree(v21);
              a3 = _mm_load_si128(&v25);
              a4 = 0;
            }
            v16[3].m128_u64[1] = v22;
            v16[4] = (__m128)a3;
            --v19;
          }
          while ( v19 );
        }
        a8 = (__m128)_mm_load_si128(&v27);
        v24 = a1[1].m128_i64[0];
        *a1 = a8;
        if ( v24 )
        {
          a1[1].m128_u64[1] = 0;
          qfree(v24);
        }
        si128 = (__m128)_mm_load_si128(v28);
        a1[1].m128_u64[0] = v26;
        *(__m128 *)((char *)a1 + 24) = si128;
        if ( a2 == v13 )
          return;
      }
      sub_3AA180(
        (__int64 *)v16,
        *(double *)a3.m128i_i64,
        *(double *)a4.m128_u64,
        *(double *)a5.m128i_i64,
        *(double *)a6.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64,
        si128);
    }
  }
}

