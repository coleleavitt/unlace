void __fastcall sub_2CA40(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __m128i si128; // xmm1
  __m128i *v4; // rax
  __m128i v5; // xmm0
  __m128i *v6; // rcx
  __m128i v7[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; *src = si128 )
    {
      while ( 1 )
      {
        si128 = _mm_loadu_si128(i);
        if ( si128.m128i_i64[0] < (unsigned __int64)src->m128i_i64[0] )
          break;
        v4 = i - 1;
        if ( si128.m128i_i64[0] >= (unsigned __int64)i[-1].m128i_i64[0] )
        {
          *i = si128;
        }
        else
        {
          do
          {
            v5 = _mm_loadu_si128(v4);
            v6 = v4--;
            v4[2] = v5;
          }
          while ( si128.m128i_i64[0] < (unsigned __int64)v4->m128i_i64[0] );
          *v6 = si128;
        }
        if ( a2 == ++i )
          return;
      }
      if ( (char *)i - (char *)src <= 16 )
      {
        if ( (char *)i - (char *)src == 16 )
          *i = _mm_loadu_si128(src);
      }
      else
      {
        v7[0] = si128;
        memmove(&src[1], src, (char *)i - (char *)src);
        si128 = _mm_load_si128(v7);
      }
      ++i;
    }
  }
}
