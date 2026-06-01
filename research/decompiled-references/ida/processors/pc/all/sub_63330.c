__int64 __fastcall sub_63330(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int16 v6; // dx
  char v7; // dl
  unsigned __int64 v9; // rsi
  int v10; // edx
  int v11; // eax
  __m128i v12; // xmm2
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // rsi
  __m128i v17; // xmm2
  int v18; // ecx

  v4 = *(unsigned __int8 *)(a1 + 5192);
  if ( (_BYTE)v4 == 98 )
  {
    a4 = 0;
    if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
      return a4;
    goto LABEL_6;
  }
  if ( (unsigned __int8)v4 <= 0x62u )
  {
    if ( (unsigned __int8)v4 > 0x3Fu )
    {
      a4 = 0;
      if ( (unsigned __int8)(v4 - 96) <= 1u )
        return a4;
    }
    else if ( (unsigned __int8)v4 > 5u )
    {
      v9 = 0x80808080C0C040C0LL;
      a4 = 0;
      if ( _bittest64((const __int64 *)&v9, v4) )
        return a4;
    }
LABEL_6:
    v6 = *(_WORD *)(a2 + 24);
    if ( v6 == 222 )
    {
      v10 = *(_DWORD *)(a1 + 5196);
      if ( (~(_BYTE)v10 & 0xC0) == 0 )
      {
        a4 = 0;
        if ( (v10 & 7) != 0 )
          return a4;
        *(_BYTE *)(a2 + 41) = 0;
        *(_WORD *)(a2 + 24) = 590;
      }
    }
    else if ( v6 > 0xDEu )
    {
      if ( (unsigned __int16)(v6 - 400) <= 1u )
      {
        v11 = *(_DWORD *)(a1 + 4436);
        if ( (v11 & 0x78000) != 0 )
        {
          LOBYTE(a4) = (v11 & 0x70000) != 0;
          return a4;
        }
      }
    }
    else if ( v6 == 8 )
    {
      v7 = *(_BYTE *)(a2 + 81);
      a4 = 0;
      if ( v7 != 1 )
        return a4;
      v12 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v13 = _mm_loadu_si128((const __m128i *)(a2 + 40));
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 56));
      v15 = *(_QWORD *)(a2 + 72);
      *(_WORD *)(a2 + 24) = 594;
      v16 = *(_QWORD *)(a2 + 112);
      *(__m128i *)(a2 + 40) = v12;
      v17 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(__m128i *)(a2 + 80) = v13;
      *(_QWORD *)(a2 + 72) = v16;
      *(_QWORD *)(a2 + 112) = v15;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 85) = 2;
      *(__m128i *)(a2 + 56) = v17;
      *(__m128i *)(a2 + 96) = v14;
      if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
      {
        v18 = *(_DWORD *)(a2 + 28) & 0x818;
        if ( ((v18 - 8) & 0xFFFFFFF0) == 0 || v18 == 2048 )
          *(_BYTE *)(a2 + 85) = 1;
        else
          v7 = 2;
        *(_BYTE *)(a2 + 45) = v7;
        *(_BYTE *)(a1 + 5222) = 1;
      }
    }
    return 1;
  }
  a4 = 0;
  if ( (unsigned __int8)v4 > 0xC5u )
  {
    if ( (unsigned __int8)v4 > 0xD6u )
    {
      if ( (_BYTE)v4 == 0xEA )
        return a4;
    }
    else if ( (unsigned __int8)v4 > 0xD3u || (_BYTE)v4 == 0xCE )
    {
      return a4;
    }
    goto LABEL_6;
  }
  if ( (unsigned __int8)v4 <= 0xC3u )
  {
    if ( (_BYTE)v4 == 0x82 || (_BYTE)v4 == 0x9A )
      return a4;
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a2 + 29) & 0x40) != 0 )
    goto LABEL_6;
  return a4;
}
