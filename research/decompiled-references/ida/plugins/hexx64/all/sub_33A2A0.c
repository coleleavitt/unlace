void __fastcall sub_33A2A0(const char **src, const char **a2)
{
  const char **i; // rbp
  const char *v3; // rbx
  const __m128i *v4; // r15
  int v5; // eax
  __int32 v6; // r14d
  const char *v7; // rsi
  __m128i *v8; // r12

  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; i += 2 )
    {
      v3 = *i;
      v4 = (const __m128i *)i;
      v5 = strcmp(*i, *src);
      v6 = *((_DWORD *)i + 2);
      if ( v5 >= 0 )
      {
        while ( 1 )
        {
          v7 = (const char *)v4[-1].m128i_i64[0];
          v8 = (__m128i *)v4--;
          if ( strcmp(v3, v7) >= 0 )
            break;
          v4[1] = _mm_loadu_si128(v4);
        }
        v8->m128i_i64[0] = (__int64)v3;
        v8->m128i_i32[2] = v6;
      }
      else
      {
        if ( (char *)i - (char *)src <= 16 )
        {
          if ( (char *)i - (char *)src == 16 )
            *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
        }
        else
        {
          memmove(src + 2, src, (char *)i - (char *)src);
        }
        *src = v3;
        *((_DWORD *)src + 2) = v6;
      }
    }
  }
}

