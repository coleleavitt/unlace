__int64 __fastcall sub_315730(__m128i *a1, double a2, __m128 a3)
{
  __int32 v3; // eax
  __int32 v4; // ecx
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128i si128; // xmm2
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __m128i v11; // [rsp+10h] [rbp-68h] BYREF
  __m128i v12[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]

  v3 = a1->m128i_i32[0];
  v13 = __readfsqword(0x28u);
  if ( v3 == 1 )
    return sub_312B80((__int64)a1, a2);
  if ( v3 )
  {
    if ( v3 != 8 )
    {
      if ( (v3 & 0xF) != 2 )
      {
        if ( !under_debugger )
          sub_383060(0xCA8Au, a2);
        BUG();
      }
      v4 = a1->m128i_i32[1];
      v5 = 0;
      v11.m128i_i32[0] = 2;
      v11.m128i_i64[1] = 0;
      v11.m128i_i32[1] = v4;
      v12[0] = 0;
      if ( v4 != 8 )
        v5 = 1LL << (8 * (unsigned __int8)v4);
      v10.m128i_i64[1] = v5;
      v10.m128i_i64[0] = 0;
      sub_316BB0(&v11.m128i_i64[1], &v10, 0.0, a3);
      sub_317C60(&v11.m128i_i64[1], (__int64)&a1->m128i_i64[1]);
      v6 = _mm_loadu_si128(a1);
      v7 = _mm_loadu_si128(a1 + 1);
      *a1 = _mm_load_si128(&v11);
      si128 = _mm_load_si128(v12);
      v12[1] = v6;
      a1[1] = si128;
      v12[2] = v7;
      v11 = v6;
      v12[0] = v7;
      sub_312B80((__int64)&v11, *(double *)v7.m128i_i64);
    }
  }
  else
  {
    sub_312B80((__int64)a1, a2);
    a1->m128i_i32[0] = 1;
  }
  return v13 - __readfsqword(0x28u);
}

