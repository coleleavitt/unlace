__int64 __fastcall sub_F010(__m128i *a1, const __m128i *a2)
{
  const __m128i *v2; // r15
  unsigned __int64 v4; // rax
  const __m128i *v5; // rbx
  __m128i v6; // xmm3
  __m128 v7; // xmm2
  __int64 v8; // rax
  __m128i v9; // xmm1
  unsigned __int64 v10; // r13
  __m128i v11; // xmm0
  __int8 v12; // cl
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __m128i v16; // xmm4
  __int64 v17; // rdi
  __int64 result; // rax
  __m128i si128; // xmm5
  __m128i v20; // [rsp+0h] [rbp-78h] BYREF
  __int8 v21; // [rsp+17h] [rbp-61h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __m128i v24[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 3;
    while ( a2 != v2 )
    {
      while ( 1 )
      {
        v4 = v2->m128i_i64[0];
        v5 = v2;
        v2 += 3;
        if ( v4 >= a1->m128i_i64[0] )
          break;
        v6 = _mm_loadu_si128(v2 - 1);
        v7 = _mm_loadh_ps((const double *)&v2[-3].m128i_i64[1]);
        v21 = v2[-2].m128i_i8[0];
        v8 = v2[-2].m128i_i64[1];
        v9 = 0;
        v2[-2].m128i_i64[1] = 0;
        v22 = v8;
        v23 = (__m128i)v7;
        v10 = 0xAAAAAAAAAAAAAAABLL * (v5 - a1);
        v24[0] = v6;
        v2[-1] = 0;
        if ( (char *)v5 - (char *)a1 > 0 )
        {
          do
          {
            v11 = _mm_loadu_si128(v5 - 3);
            v12 = v5[-2].m128i_i8[0];
            v5 -= 3;
            v13 = v5[4].m128i_i64[1];
            v14 = v5[1].m128i_i64[1];
            v5[1].m128i_i64[1] = 0;
            v5[3] = v11;
            v15 = _mm_loadu_si128(v5 + 2);
            v5[4].m128i_i8[0] = v12;
            v5[2] = v9;
            if ( v13 )
            {
              v5[5].m128i_i64[0] = 0;
              v20 = v15;
              qfree();
              v15 = _mm_load_si128(&v20);
              v9 = 0;
            }
            v5[4].m128i_i64[1] = v14;
            v5[5] = v15;
            --v10;
          }
          while ( v10 );
        }
        v16 = _mm_load_si128(&v23);
        v17 = a1[1].m128i_i64[1];
        a1[1].m128i_i8[0] = v21;
        *a1 = v16;
        if ( v17 )
        {
          a1[2].m128i_i64[0] = 0;
          qfree();
        }
        result = v22;
        si128 = _mm_load_si128(v24);
        a1[1].m128i_i64[1] = v22;
        a1[2] = si128;
        if ( a2 == v2 )
          return result;
      }
      result = sub_EF10(v5);
    }
  }
  return result;
}

