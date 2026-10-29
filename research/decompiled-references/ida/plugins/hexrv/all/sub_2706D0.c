void __fastcall sub_2706D0(__m128i *src, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, const __m128i *))
{
  __m128i *i; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int32 v8; // r14d
  __int64 v9; // r15
  const __m128i *v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-48h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; src[1].m128i_i64[1] = v9 )
    {
      while ( !(unsigned __int8)a3(i, src) )
      {
        v10 = i;
        i += 2;
        sub_270640(v10, a3);
        if ( a2 == i )
          return;
      }
      v6 = i->m128i_i64[0];
      v7 = i->m128i_i64[1];
      v8 = i[1].m128i_i32[0];
      v9 = i[1].m128i_i64[1];
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
        v12 = i->m128i_i64[0];
        v11 = i->m128i_i64[1];
        memmove(&src[2], src, (char *)i - (char *)src);
        v7 = v11;
        v6 = v12;
      }
      i += 2;
      src->m128i_i64[0] = v6;
      src->m128i_i64[1] = v7;
      src[1].m128i_i32[0] = v8;
    }
  }
}

