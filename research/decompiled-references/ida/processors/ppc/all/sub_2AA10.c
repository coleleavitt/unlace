__int64 __fastcall sub_2AA10(__int64 a1, __int64 a2, __int16 a3, __int16 a4)
{
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rbp
  __m128i v8; // xmm0
  __m128i v9; // xmm0

  v5 = *(unsigned __int8 *)(a2 + 81);
  if ( (_BYTE)v5 == 1 )
  {
    if ( *(_WORD *)(a2 + 86) || !a3 )
    {
      result = *(unsigned __int8 *)(a2 + 121);
      if ( !(_BYTE)result )
        return result;
      goto LABEL_5;
    }
LABEL_20:
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 120));
    result = *(unsigned int *)(a2 + 152);
    *(_WORD *)(a2 + 24) = a3;
    *(_BYTE *)(a2 + 121) = 0;
    *(__m128i *)(a2 + 80) = v8;
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 136));
    *(_DWORD *)(a2 + 112) = result;
    *(_BYTE *)(a2 + 80) = 1;
    *(__m128i *)(a2 + 96) = v9;
    return result;
  }
  if ( !*(_BYTE *)(a2 + 114) || (_BYTE)v5 != 5 )
  {
    result = *(unsigned __int8 *)(a2 + 121);
    if ( !(_BYTE)result )
    {
      result = v5;
      v7 = a2 + 80;
      if ( (_BYTE)v5 != 5 )
        return result;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(a2 + 88) && a3 )
    goto LABEL_20;
  result = *(unsigned __int8 *)(a2 + 121);
  v7 = a2 + 80;
  if ( (_BYTE)result )
  {
LABEL_5:
    v7 = a2 + 120;
    if ( (_BYTE)result != 5 )
      return result;
  }
LABEL_8:
  result = *(unsigned int *)(v7 + 8);
  if ( (int)result < 0 && (*(_BYTE *)(a1 + 472) & 2) != 0 )
  {
    result = get_fixup(0, *(_QWORD *)(a2 + 16) + 2LL);
    if ( !(_BYTE)result )
    {
      result = get_fixup(0, *(_QWORD *)(a2 + 16));
      if ( !(_BYTE)result )
      {
        *(_WORD *)(a2 + 24) = a4;
        result = -*(_DWORD *)(v7 + 8);
        *(_QWORD *)(v7 + 8) = result;
      }
    }
  }
  return result;
}

