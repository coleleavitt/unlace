const char *__fastcall sub_6F90(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  size_t v5; // r12
  __int64 v6; // r13
  __m128i *v7; // rax
  __m128i si128; // xmm0
  const char *result; // rax
  __int64 v10; // rax

  v1 = a1[1];
  v2 = *a1;
  v3 = a1[2];
  if ( v1 )
  {
    v4 = v1 + 24;
    v5 = v1 - 1;
    v6 = v1 + 23;
    if ( v3 >= v1 + 24 )
    {
      a1[1] = v4;
      *(_BYTE *)(v2 + v6) = 0;
      if ( v1 == 1 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else
  {
    if ( v3 > 0x18 )
    {
      a1[1] = 25;
      *(_BYTE *)(v2 + 24) = 0;
      goto LABEL_4;
    }
    v5 = 0;
    v4 = 25;
    v6 = 24;
  }
  v10 = qvector_reserve();
  a1[1] = v4;
  *a1 = v10;
  *(_BYTE *)(v10 + v6) = 0;
  if ( v5 )
LABEL_9:
    memmove((void *)(*a1 + 24), (const void *)*a1, v5);
LABEL_4:
  v7 = (__m128i *)*a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D890);
  v7[1].m128i_i64[0] = 0xA2D2A2D20382D46LL;
  *v7 = si128;
  result = src;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}

