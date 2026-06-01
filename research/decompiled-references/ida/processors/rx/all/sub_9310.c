void __fastcall sub_9310(
        char *src,
        char *a2,
        __int64 (__fastcall *a3)(__m128i *, const __m128i *),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char *v7; // rbx
  char i; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // rdx
  const __m128i *v14; // rdi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  __m128i v16; // [rsp+10h] [rbp-38h]

  if ( src != a2 )
  {
    v7 = src + 32;
    if ( a2 != src + 32 )
    {
      for ( i = ((__int64 (__fastcall *)(char *, char *, __int64 (__fastcall *)(__m128i *, const __m128i *), __int64, __int64, __int64, __int64, __int64, __int64, __int64))a3)(
                  v7,
                  src,
                  a3,
                  a4,
                  a5,
                  a6,
                  v15.m128i_i64[0],
                  v15.m128i_i64[1],
                  v16.m128i_i64[0],
                  v16.m128i_i64[1]);
            ;
            i = ((__int64 (__fastcall *)(char *, char *, size_t, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a3)(
                  v7,
                  src,
                  v13,
                  v10,
                  v11,
                  v12,
                  v15.m128i_i64[0],
                  v15.m128i_i64[1],
                  v16.m128i_i64[0],
                  v16.m128i_i64[1]) )
      {
        if ( i )
        {
          v13 = v7 - src;
          v15 = _mm_loadu_si128((const __m128i *)v7);
          v16 = _mm_loadu_si128((const __m128i *)v7 + 1);
          if ( v7 - src <= 32 )
          {
            if ( v7 - src == 32 )
            {
              *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)src);
              *(__m128i *)(v7 + 12) = _mm_loadu_si128((const __m128i *)(src + 12));
            }
          }
          else
          {
            memmove(src + 32, src, v13);
          }
          v7 += 32;
          *(__m128i *)src = _mm_load_si128(&v15);
          *(__m128i *)(src + 12) = _mm_loadu_si128((const __m128i *)((char *)&v15.m128i_u64[1] + 4));
          if ( a2 == v7 )
            return;
        }
        else
        {
          v14 = (const __m128i *)v7;
          v7 += 32;
          sub_9280(v14, a3);
          if ( a2 == v7 )
            return;
        }
      }
    }
  }
}

