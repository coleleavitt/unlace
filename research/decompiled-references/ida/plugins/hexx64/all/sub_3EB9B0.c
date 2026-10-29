void __fastcall sub_3EB9B0(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __m128i *j; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // r13

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; j->m128i_i64[1] = v5 )
    {
      while ( 1 )
      {
        v4 = i->m128i_i64[0];
        v5 = i->m128i_i64[1];
        if ( i->m128i_i64[0] >= (unsigned __int64)src->m128i_i64[0] )
          break;
        if ( (char *)i - (char *)src <= 16 )
        {
          if ( (char *)i - (char *)src == 16 )
            *i = _mm_loadu_si128(src);
        }
        else
        {
          memmove(&src[1], src, (char *)i - (char *)src);
        }
        ++i;
        src->m128i_i64[0] = v4;
        src->m128i_i64[1] = v5;
        if ( a2 == i )
          return;
      }
      j = i;
      if ( v4 < i[-1].m128i_i64[0] )
      {
        for ( j = i - 1; ; --j )
        {
          j[1] = _mm_loadu_si128(j);
          if ( v4 >= j[-1].m128i_i64[0] )
            break;
        }
      }
      ++i;
      j->m128i_i64[0] = v4;
    }
  }
}

