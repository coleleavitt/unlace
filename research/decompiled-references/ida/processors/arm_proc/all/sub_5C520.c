void __fastcall sub_5C520(__m128i *src, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, const __m128i *))
{
  __m128i *i; // rbx
  __m128i si128; // xmm0
  __int64 v7; // r14
  __int32 v8; // r15d
  const __m128i *v9; // rdi
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; *src = si128 )
    {
      while ( !(unsigned __int8)a3(i, src) )
      {
        v9 = i;
        i += 2;
        sub_5C490(v9, a3);
        if ( a2 == i )
          return;
      }
      si128 = _mm_loadu_si128(i);
      v7 = i[1].m128i_i64[0];
      v8 = i[1].m128i_i32[2];
      if ( (char *)i - (char *)src <= 32 )
      {
        if ( (char *)i - (char *)src == 32 )
        {
          *i = _mm_loadu_si128(src);
          i[1] = _mm_loadu_si128(src + 1);
        }
      }
      else
      {
        v10[0] = si128;
        memmove(&src[2], src, (char *)i - (char *)src);
        si128 = _mm_load_si128(v10);
      }
      i += 2;
      src[1].m128i_i64[0] = v7;
      src[1].m128i_i32[2] = v8;
    }
  }
}

