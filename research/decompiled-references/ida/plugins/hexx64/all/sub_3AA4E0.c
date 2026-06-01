void __fastcall sub_3AA4E0(
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
  __int64 *v16; // rdi
  __int64 v17; // rdi
  __m128i v18; // xmm2
  __m128 *v19; // rbx
  __int32 v20; // eax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rcx
  __int32 v26; // ecx
  __int64 v27; // rdi
  __int32 v28; // eax
  __m128i v29; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-68h]
  __int32 v31; // [rsp+1Ch] [rbp-5Ch]
  __m128i v32; // [rsp+20h] [rbp-58h] BYREF
  __m128i v33[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v13 = a1 + 3;
    v33[3].m128i_i64[1] = v12;
    v33[3].m128i_i64[0] = v11;
    v33[2].m128i_i64[1] = v10;
    v33[2].m128i_i64[0] = v9;
    while ( a2 != v13 )
    {
      while ( 1 )
      {
        v15 = v13->m128_u64[1];
        v16 = (__int64 *)v13;
        v13 += 3;
        if ( v15 >= a1->m128_u64[1] )
          break;
        a6 = (__m128i)v15;
        v17 = (char *)v16 - (char *)a1;
        a3.m128i_i64[0] = 0;
        v18 = _mm_loadl_epi64((const __m128i *)&v13[-3]);
        v19 = v13;
        a4 = 0;
        a7 = _mm_loadu_si128((const __m128i *)&v13[-2].m128_u16[4]);
        v30 = v13[-2].m128_u64[0];
        v20 = v13[-1].m128_i32[2];
        a5 = _mm_unpacklo_epi64(v18, a6);
        v13[-2].m128_u64[0] = 0;
        v31 = v20;
        v32 = a5;
        v21 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 4);
        v33[0] = a7;
        *(__m128 *)((char *)&v13[-2] + 8) = 0;
        if ( v17 > 0 )
        {
          do
          {
            v22 = v19[-6].m128_u64[0];
            v23 = v19[-2].m128_i64[0];
            v19 -= 3;
            v24 = v19[-2].m128_u64[0];
            a3 = _mm_loadu_si128((const __m128i *)&v19[-2].m128_u16[4]);
            *(__m128 *)((char *)v19 - 24) = a4;
            v19->m128_u64[0] = v22;
            v25 = v19[-3].m128_u64[1];
            v19[-2].m128_u64[0] = 0;
            v19->m128_u64[1] = v25;
            if ( v23 )
            {
              v19[1].m128_u64[1] = 0;
              v29 = a3;
              qfree(v23);
              a3 = _mm_load_si128(&v29);
              a4 = 0;
            }
            v26 = v19[-1].m128_i32[2];
            v19[1].m128_u64[0] = v24;
            *(__m128i *)((char *)v19 + 24) = a3;
            v19[2].m128_i32[2] = v26;
            --v21;
          }
          while ( v21 );
        }
        a8 = (__m128)_mm_load_si128(&v32);
        v27 = a1[1].m128_i64[0];
        *a1 = a8;
        if ( v27 )
        {
          a1[1].m128_u64[1] = 0;
          qfree(v27);
        }
        si128 = (__m128)_mm_load_si128(v33);
        a1[1].m128_u64[0] = v30;
        v28 = v31;
        *(__m128 *)((char *)a1 + 24) = si128;
        a1[2].m128_i32[2] = v28;
        if ( a2 == v13 )
          return;
      }
      sub_3AA3E0(
        v16,
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

