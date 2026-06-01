__int64 __fastcall sub_1F60(__int64 *a1, __int64 *a2, __int64 a3)
{
  bool v4; // dl
  __int64 result; // rax
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = sub_1EC0(a3);
  result = 0;
  if ( v4 )
  {
    v6 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x12 )
    {
      v9 = qvector_reserve(a1, v6, 19, 1);
      *a1 = v9;
      v6 = (__m128i *)v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3310);
    a1[1] = 19;
    v6[1].m128i_i16[0] = 25959;
    *v6 = si128;
    *(_BYTE *)(*a1 + 18) = 0;
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 5 )
    {
      v10 = qvector_reserve(a2, v8, 6, 1);
      *a2 = v10;
      v8 = v10;
    }
    a2[1] = 6;
    *(_DWORD *)v8 = 1936746861;
    *(_BYTE *)(v8 + 4) = 114;
    *(_BYTE *)(*a2 + 5) = 0;
    return 1;
  }
  return result;
}

