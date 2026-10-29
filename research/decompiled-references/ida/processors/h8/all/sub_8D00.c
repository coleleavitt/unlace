__int64 __fastcall sub_8D00(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, char a5)
{
  __m128i v5; // xmm0
  int v6; // eax
  __m128i v7; // xmm0
  int v9; // eax
  __m128i v10; // xmm0

  v5 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  if ( a5 )
  {
    v6 = *(_DWORD *)(a2 + 72);
    *(_QWORD *)(a2 + 48) = a4;
    *(_WORD *)(a2 + 24) = 101;
    *(__m128i *)(a2 + 80) = v5;
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 112) = v6;
    *(_BYTE *)(a2 + 80) = 1;
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(__m128i *)(a2 + 96) = v7;
    *(_BYTE *)(a1 + 227) = a3;
    return sub_84D0(a1, a2, a2 + 120, 7);
  }
  else
  {
    *(_WORD *)(a2 + 24) = 102;
    v9 = *(_DWORD *)(a2 + 72);
    *(__m128i *)(a2 + 120) = v5;
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 152) = v9;
    *(_BYTE *)(a2 + 120) = 2;
    *(__m128i *)(a2 + 136) = v10;
    *(_BYTE *)(a1 + 227) = a3;
    *(_QWORD *)(a2 + 88) = a4;
    *(_BYTE *)(a2 + 81) = 5;
    *(_BYTE *)(a2 + 85) = 0;
    return sub_84D0(a1, a2, a2 + 40, 7);
  }
}

