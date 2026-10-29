__int64 __fastcall sub_8830(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i v3; // xmm0
  int v4; // eax
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result == 76 )
  {
    if ( *(_BYTE *)(a2 + 41) != 5 || *(_QWORD *)(a2 + 48) != -1 )
      return result;
    LOWORD(result) = 50;
    goto LABEL_13;
  }
  if ( (unsigned __int16)result > 0x4Cu )
  {
    if ( (_WORD)result == 177 && *(_BYTE *)(a2 + 41) == 1 && *(_BYTE *)(a2 + 81) == 1 )
    {
      result = *(unsigned __int16 *)(a2 + 86);
      if ( *(_WORD *)(a2 + 46) == (_WORD)result )
      {
        *(_WORD *)(a2 + 24) = 221;
        result = sub_7250(a2);
        *(_BYTE *)(a2 + 29) |= 8u;
        *(_BYTE *)(a2 + 121) = 0;
      }
    }
    return result;
  }
  if ( (_WORD)result == 69 )
  {
    result = *(unsigned __int8 *)(a2 + 41);
    if ( (_BYTE)result != 5 )
    {
      if ( (_BYTE)result == 1 && *(_BYTE *)(a2 + 81) == 1 && *(_BYTE *)(a2 + 121) == 1 )
      {
        result = *(unsigned __int16 *)(a2 + 86);
        if ( *(_WORD *)(a2 + 46) == (_WORD)result )
        {
          result = *(unsigned __int16 *)(a2 + 126);
          *(_BYTE *)(a2 + 29) |= 8u;
          *(_WORD *)(a2 + 24) = 77;
          *(_WORD *)(a2 + 46) = result;
          *(_BYTE *)(a2 + 81) = 0;
          *(_BYTE *)(a2 + 121) = 0;
        }
      }
      return result;
    }
    if ( *(_QWORD *)(a2 + 48) )
      return result;
    result = (unsigned int)*(unsigned __int8 *)(a2 + 32) - 7;
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 32) - 7) <= 1u )
      return result;
    LOWORD(result) = 47;
LABEL_13:
    v3 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    *(_WORD *)(a2 + 24) = result;
    v4 = *(_DWORD *)(a2 + 112);
    *(_BYTE *)(a2 + 29) |= 8u;
    *(__m128i *)(a2 + 40) = v3;
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 96));
    *(_DWORD *)(a2 + 72) = v4;
    result = *(unsigned int *)(a2 + 152);
    *(__m128i *)(a2 + 56) = v5;
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 120));
    *(_DWORD *)(a2 + 112) = result;
    *(__m128i *)(a2 + 80) = v6;
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 136));
    *(_BYTE *)(a2 + 40) = 0;
    *(_BYTE *)(a2 + 80) = 1;
    *(_BYTE *)(a2 + 121) = 0;
    *(__m128i *)(a2 + 96) = v7;
    return result;
  }
  if ( (unsigned __int16)result <= 0x45u && ((_WORD)result == 2 || (_WORD)result == 51) && *(_BYTE *)(a2 + 41) == 5 )
  {
    result = 42;
    if ( !*(_QWORD *)(a2 + 48) )
      goto LABEL_13;
  }
  return result;
}

