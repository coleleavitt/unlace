char __fastcall sub_A5C0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  __m128i v5; // xmm0
  int v6; // edx
  __m128i v7; // xmm0
  __m128i v9; // xmm0
  int v10; // ecx
  __m128i v11; // xmm0
  __int64 v12; // rdx

  if ( (a3 & 0xF0) != 0x40 )
  {
    if ( a3 == 88 )
    {
      *(_WORD *)(a2 + 24) = ((unsigned __int16)(char)a4 >> 15) + 109;
      if ( (a4 & 0xF) == 0 )
      {
LABEL_5:
        v5 = _mm_loadu_si128((const __m128i *)(a2 + 40));
        v6 = *(_DWORD *)(a2 + 72);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(__m128i *)(a2 + 80) = v5;
        v7 = _mm_loadu_si128((const __m128i *)(a2 + 56));
        *(_DWORD *)(a2 + 112) = v6;
        *(_BYTE *)(a2 + 80) = 1;
        *(_QWORD *)(a2 + 48) = (a4 >> 4) & 7;
        *(__m128i *)(a2 + 96) = v7;
        return sub_84D0(a1, a2, a2 + 120, 21);
      }
    }
    else if ( a3 == 92 )
    {
      *(_WORD *)(a2 + 24) = ((unsigned __int16)(char)a4 >> 15) + 111;
      if ( (a4 & 0xF) == 0 )
        goto LABEL_5;
    }
    return 0;
  }
  if ( (a4 & 1) != 0 )
    return 0;
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_BYTE *)(a2 + 41) = 5;
  *(_QWORD *)(a2 + 48) = a3 & 7;
  *(_WORD *)(a2 + 24) = ((a3 & 8) != 0) + 109;
  v10 = *(_DWORD *)(a2 + 72);
  *(__m128i *)(a2 + 80) = v9;
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_DWORD *)(a2 + 112) = v10;
  LOWORD(v10) = *(_WORD *)(a2 + 26);
  *(_BYTE *)(a2 + 80) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 122) = v10 - 1;
  v12 = *(_QWORD *)(a2 + 8) + (unsigned __int16)v10;
  *(_BYTE *)(a2 + 121) = 7;
  *(_BYTE *)(a2 + 125) = 9;
  *(_QWORD *)(a2 + 136) = (v12 + (char)a4) & 0xFFFFFFFFFFFFFFFELL;
  *(__m128i *)(a2 + 96) = v11;
  return (_WORD)v10 != 0;
}

