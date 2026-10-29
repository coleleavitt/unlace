const char *__fastcall sub_16AC20(__int64 a1)
{
  const char *v1; // rbp
  const char *result; // rax
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 v5; // rax

  v1 = *(const char **)(a1 + 88);
  if ( !strcmp(v1, "gai_strerror") )
  {
    gai_strerror(*(_DWORD *)(a1 + 96));
    sub_299F0((char **)(a1 + 64));
  }
  else if ( !strcmp(v1, "connection_closed_by_peer") )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(a1 + 80) <= 0x1Fu )
    {
      v5 = sub_1987B0(a1 + 64, v3, 32, 1);
      *(_QWORD *)(a1 + 64) = v5;
      v3 = v5;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B7140);
    *(_QWORD *)(a1 + 72) = 32;
    *(__m128i *)v3 = si128;
    *(__m128i *)(v3 + 15) = _mm_load_si128((const __m128i *)&xmmword_1B7150);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 31LL) = 0;
  }
  else
  {
    sub_1996B0(*(_DWORD *)(a1 + 96));
    sub_299F0((char **)(a1 + 64));
  }
  result = s1;
  if ( *(_QWORD *)(a1 + 72) )
    return *(const char **)(a1 + 64);
  return result;
}
