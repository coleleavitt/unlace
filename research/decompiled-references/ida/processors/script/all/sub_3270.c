__int64 __fastcall sub_3270(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  __m128i si128; // xmm0
  __int64 v5; // rax

  v1 = (unsigned int)a1;
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
    a1[33] = 0;
    a1[35] = 0;
  }
  qsnprintf();
  if ( (unsigned int)get_idcv_attr() )
  {
    LOBYTE(v1) = a1[34] != 0;
  }
  else
  {
    v2 = a1[103];
    if ( a1[105] <= 0x25u )
    {
      v5 = qvector_reserve();
      a1[103] = v5;
      v2 = v5;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5530);
    a1[104] = 38;
    *(__m128i *)v2 = si128;
    *(__m128i *)(v2 + 16) = _mm_load_si128((const __m128i *)&xmmword_5540);
    *(_QWORD *)(v2 + 29) = 0x64657265746E756FLL;
    v1 = 0;
    *(_BYTE *)(a1[103] + 37LL) = 0;
  }
  free_idcv();
  free_idcv();
  free_idcv();
  return v1;
}

