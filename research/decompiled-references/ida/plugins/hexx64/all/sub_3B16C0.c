void __fastcall sub_3B16C0(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int64 v6; // r13
  const __m128i *v8; // rbx
  __int64 i; // rbp
  __int64 v10; // r13
  __int32 v11; // edx
  __int32 v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 40 )
  {
    for ( i = (__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 3) - 2) / 2; ; --i )
    {
      sub_3A9B20(
        (__int64)a1,
        i,
        0xCCCCCCCCCCCCCCCDLL * (v6 >> 3),
        a4,
        a5,
        a6,
        (__int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i)),
        (__int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i + 16)),
        a1[2].m128i_i64[5 * i]);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v10 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 3);
    do
    {
      while ( 1 )
      {
        v11 = v8[1].m128i_i32[0];
        v12 = a1[1].m128i_i32[0];
        if ( v11 < v12 )
          break;
        a4 = a1[1].m128i_u32[1];
        if ( v8[1].m128i_i32[1] < (int)a4 && v11 == v12 )
          break;
        v8 = (const __m128i *)((char *)v8 + 40);
        if ( (unsigned __int64)v8 >= a3 )
          return;
      }
      v13 = (__int128)_mm_loadu_si128(v8);
      v14 = (__int128)_mm_loadu_si128(v8 + 1);
      v15 = v8[2].m128i_i64[0];
      v8 = (const __m128i *)((char *)v8 + 40);
      *(const __m128i *)((char *)&v8[-3] + 8) = _mm_loadu_si128(a1);
      *(const __m128i *)((char *)&v8[-2] + 8) = _mm_loadu_si128(a1 + 1);
      v8[-1].m128i_i8[8] = a1[2].m128i_i8[0];
      sub_3A9B20((__int64)a1, 0, v10, a4, a5, a6, v13, v14, v15);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
}

