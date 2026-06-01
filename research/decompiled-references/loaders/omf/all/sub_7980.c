__int64 __fastcall sub_7980(__int64 *a1, __int64 *a2, __int64 a3)
{
  char v4; // dl
  __int64 result; // rax
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( byte_143A6 )
  {
    v6 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x24 )
    {
      v14 = qvector_reserve(a1, v6, 37, 1);
      *a1 = v14;
      v6 = (__m128i *)v14;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_11490);
    a1[1] = 37;
    v6[2].m128i_i32[0] = 695494255;
    *v6 = si128;
    v6[1] = _mm_load_si128((const __m128i *)&xmmword_114B0);
    *(_BYTE *)(*a1 + 36) = 0;
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 6 )
    {
      v13 = qvector_reserve(a2, v8, 7, 1);
      *a2 = v13;
      v8 = v13;
    }
    a2[1] = 7;
    *(_DWORD *)v8 = 1635018093;
    *(_WORD *)(v8 + 4) = 25456;
    *(_BYTE *)(*a2 + 6) = 0;
    return 32780;
  }
  else
  {
    v4 = sub_7640(a3, 0, 1, 0);
    result = 0;
    if ( v4 )
    {
      v9 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x1E )
      {
        v15 = qvector_reserve(a1, v9, 31, 1);
        *a1 = v15;
        v9 = v15;
      }
      v10 = _mm_load_si128((const __m128i *)&xmmword_11490);
      a1[1] = 31;
      *(__m128i *)v9 = v10;
      *(__m128i *)(v9 + 14) = _mm_load_si128((const __m128i *)&xmmword_114A0);
      *(_BYTE *)(*a1 + 30) = 0;
      v11 = *a2;
      if ( (unsigned __int64)a2[2] <= 6 )
      {
        v16 = qvector_reserve(a2, v11, 7, 1);
        *a2 = v16;
        v11 = v16;
      }
      a2[1] = 7;
      *(_DWORD *)v11 = 1635018093;
      *(_WORD *)(v11 + 4) = 25456;
      v12 = *a2;
      byte_143A6 = 1;
      *(_BYTE *)(v12 + 6) = 0;
      return 49164;
    }
  }
  return result;
}
