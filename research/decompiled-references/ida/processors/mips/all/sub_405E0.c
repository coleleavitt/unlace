__int64 __fastcall sub_405E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int64 v4; // rdx
  int v6; // edx
  __int64 v8; // rsi
  int v9; // edx
  __m128i v10; // xmm0
  int v11; // edx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  int v15; // edx
  __m128i v16; // xmm0

  v4 = *a4;
  if ( (_WORD)v4 == 152 )
    goto LABEL_8;
  if ( (unsigned __int16)v4 > 0x98u )
  {
    if ( (unsigned __int16)v4 > 0x23Cu )
    {
      if ( (_WORD)v4 == 0xFFF1 && !*(_WORD *)(a2 + 46) )
      {
        v9 = *(_DWORD *)(a2 + 112);
        *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
        v10 = _mm_loadu_si128((const __m128i *)(a2 + 96));
        *(_DWORD *)(a2 + 72) = v9;
        v11 = *(_DWORD *)(a2 + 152);
        *(__m128i *)(a2 + 56) = v10;
        v12 = _mm_loadu_si128((const __m128i *)(a2 + 120));
        *(_DWORD *)(a2 + 112) = v11;
        *(__m128i *)(a2 + 80) = v12;
        v13 = _mm_loadu_si128((const __m128i *)(a2 + 136));
        *(_BYTE *)(a2 + 121) = 0;
        *(__m128i *)(a2 + 96) = v13;
      }
    }
    else if ( (unsigned __int16)v4 > 0x1F8u )
    {
      LOWORD(v4) = v4 - 505;
      switch ( v4 )
      {
        case 0uLL:
        case 1uLL:
          goto LABEL_8;
        case 4uLL:
        case 6uLL:
          if ( !*(_WORD *)(a2 + 46) )
            goto LABEL_9;
          break;
        case 0x1FuLL:
        case 0x20uLL:
        case 0x24uLL:
        case 0x42uLL:
        case 0x43uLL:
          if ( *(_WORD *)(a2 + 46) == *(_WORD *)(a2 + 86) )
            *(_BYTE *)(a2 + 84) &= ~8u;
          break;
        default:
          break;
      }
    }
  }
  else if ( (_WORD)v4 == 80 )
  {
    if ( *(_BYTE *)(a2 + 81) )
    {
      if ( *(_QWORD *)(a2 + 88) )
        goto LABEL_10;
    }
    else
    {
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 2;
      *(_QWORD *)(a2 + 88) = 0;
    }
    *(_BYTE *)(a2 + 84) &= ~8u;
    if ( !*(_QWORD *)(a2 + 48) )
LABEL_9:
      *(_BYTE *)(a2 + 44) &= ~8u;
  }
  else if ( (unsigned __int16)v4 <= 0x50u )
  {
    if ( (unsigned __int16)(v4 - 49) <= 7u )
    {
      v8 = 0x12A000000000000LL;
      if ( _bittest64(&v8, v4) )
      {
        if ( !*(_QWORD *)(a2 + 168) )
          *(_BYTE *)(a2 + 164) &= ~8u;
      }
    }
  }
  else
  {
    if ( (unsigned __int16)v4 > 0x54u )
    {
      if ( (unsigned __int16)(v4 - 91) > 1u )
        goto LABEL_10;
    }
    else if ( (unsigned __int16)v4 <= 0x52u )
    {
      if ( (_WORD)v4 != 81 )
        goto LABEL_10;
LABEL_8:
      if ( *(_QWORD *)(a2 + 48) )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( !*(_WORD *)(a2 + 46) )
    {
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v15 = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a2 + 81) = 0;
      *(__m128i *)(a2 + 40) = v14;
      v16 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v15;
      *(__m128i *)(a2 + 56) = v16;
    }
  }
LABEL_10:
  v6 = *((_DWORD *)a4 + 4);
  if ( v6 == 2 )
  {
    *(_DWORD *)(a2 + 28) |= 5u;
    return 1;
  }
  else
  {
    if ( v6 == 3 )
      *(_DWORD *)(a2 + 28) |= 2u;
    return 1;
  }
}

