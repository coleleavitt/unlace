__int64 __fastcall sub_E270(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __m128i v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm0

  result = sub_CD30(a1, a2, a3);
  if ( (_DWORD)result )
  {
    if ( (*(_DWORD *)(a2 + 72) & 0xFFFF00) == (_DWORD)&qword_20000 )
    {
      v4 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v5 = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a2 + 81) = 0;
      *(_WORD *)(a2 + 24) = 109;
      *(__m128i *)(a2 + 40) = v4;
      v6 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v5;
      result = *(unsigned __int16 *)(a2 + 26);
      *(__m128i *)(a2 + 56) = v6;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 112) & 0xFFFF00) == 0x10000 )
      {
        *(_BYTE *)(a2 + 81) = 0;
        *(_WORD *)(a2 + 24) = 107;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  return result;
}

