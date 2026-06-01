__int64 __fastcall sub_5C00(__int64 *a1, __int64 *a2, __int64 a3)
{
  const char *v4; // rbp
  __int64 result; // rax
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  size_t v8; // rax
  size_t v9; // rbx
  __int64 v10; // rax
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v4 = sub_5B30(a3);
  result = 0;
  if ( v4 )
  {
    v6 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x20 )
    {
      v10 = qvector_reserve(a1, v6, 33, 1);
      *a1 = v10;
      v6 = (__m128i *)v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6340);
    a1[1] = 33;
    *v6 = si128;
    v6[1] = _mm_load_si128((const __m128i *)&xmmword_6350);
    *(_BYTE *)(*a1 + 32) = 0;
    v8 = strlen(v4);
    v9 = v8;
    if ( v8 )
    {
      v11 = (void *)*a2;
      v12 = v8 + 1;
      if ( a2[2] < v8 + 1 )
      {
        v13 = qvector_reserve(a2, *a2, v8 + 1, 1);
        *a2 = v13;
        v11 = (void *)v13;
      }
      a2[1] = v12;
      memmove(v11, v4, v9);
      *(_BYTE *)(*a2 + v9) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  return result;
}

