__int64 __fastcall sub_2AFC0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rax

  if ( *a3 > 0 && (v5 = a3[2]) != 0 )
  {
    if ( a4 < v5 )
    {
      return sub_2AD80(a1, a2);
    }
    else
    {
      sub_BF00(a2);
      return 0;
    }
  }
  else
  {
    v7 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x11 )
    {
      v9 = qvector_reserve();
      *a2 = v9;
      v7 = v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3AD60);
    a2[1] = 18;
    *(_BYTE *)(v7 + 16) = 125;
    *(__m128i *)v7 = si128;
    *(_BYTE *)(*a2 + 17) = 0;
    return 0;
  }
}

