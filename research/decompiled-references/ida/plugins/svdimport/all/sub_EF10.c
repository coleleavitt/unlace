__int64 __fastcall sub_EF10(const __m128i *a1)
{
  __m128i *v1; // rbx
  __m128i v2; // xmm2
  __m128i v3; // xmm3
  __int64 v4; // r12
  __int8 v5; // r13
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int8 v8; // al
  __int64 v9; // rdi
  __int64 v10; // rbp
  __m128i v11; // xmm0
  __int64 result; // rax
  __m128i si128; // xmm5
  __int64 v14; // rdi
  __m128i v15; // xmm4
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h] BYREF
  __m128i v18[3]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (__m128i *)a1;
  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 2);
  a1[2] = 0;
  v4 = a1[1].m128i_i64[1];
  v5 = a1[1].m128i_i8[0];
  a1[1].m128i_i64[1] = 0;
  v18[0] = v2;
  v17 = v3;
  if ( v2.m128i_i64[0] < (unsigned __int64)a1[-3].m128i_i64[0] )
  {
    v1 = (__m128i *)&a1[-3];
    v6 = 0;
    while ( 1 )
    {
      v7 = _mm_loadu_si128(v1);
      v8 = v1[1].m128i_i8[0];
      v9 = v1[4].m128i_i64[1];
      v10 = v1[1].m128i_i64[1];
      v1[1].m128i_i64[1] = 0;
      v1[3] = v7;
      v11 = _mm_loadu_si128(v1 + 2);
      v1[4].m128i_i8[0] = v8;
      v1[2] = v6;
      if ( v9 )
      {
        v1[5].m128i_i64[0] = 0;
        v16 = v11;
        qfree();
        v11 = _mm_load_si128(&v16);
        v6 = 0;
      }
      v1[4].m128i_i64[1] = v10;
      result = (__int64)v1[-3].m128i_i64;
      v1[5] = v11;
      if ( v2.m128i_i64[0] >= (unsigned __int64)v1[-3].m128i_i64[0] )
        break;
      v1 -= 3;
    }
    si128 = _mm_load_si128(v18);
    v14 = v1[1].m128i_i64[1];
    v1[1].m128i_i8[0] = v5;
    *v1 = si128;
    if ( v14 )
    {
      v1[2].m128i_i64[0] = 0;
      result = qfree();
    }
  }
  v15 = _mm_load_si128(&v17);
  v1[1].m128i_i64[1] = v4;
  v1[2] = v15;
  return result;
}

