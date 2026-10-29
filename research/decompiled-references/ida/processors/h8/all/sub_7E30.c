char __fastcall sub_7E30(__int64 a1, unsigned __int8 a2, signed __int8 a3, __int16 a4)
{
  __int16 v5; // dx
  __m128i v6; // xmm0
  int v7; // edx
  __m128i v8; // xmm0
  char v10; // dl
  char v11; // dl
  __int16 v12; // cx
  __m128i v13; // xmm0
  int v14; // edx
  __m128i v15; // xmm0
  char v16; // cl
  char v17; // cl
  char v18; // si

  if ( a2 == 98 )
  {
    if ( a4 == 16 )
      return 0;
    v10 = a3 & 0xF;
    if ( v10 == 6 )
    {
      v5 = 97;
    }
    else if ( v10 == 7 )
    {
      v5 = 98;
    }
    else
    {
      if ( v10 )
        return 0;
      v5 = 23;
    }
    goto LABEL_7;
  }
  if ( a2 <= 0x62u )
  {
    if ( a2 != 96 )
    {
      if ( a2 == 97 && a4 != 16 )
      {
        v5 = 30;
        if ( (a3 & 0xF) == 0 )
          goto LABEL_7;
      }
      return 0;
    }
    if ( a4 == 16 )
      return 0;
    v11 = a3 & 0xF;
    if ( v11 == 6 )
    {
      v5 = 95;
    }
    else if ( v11 == 7 )
    {
      v5 = 96;
    }
    else
    {
      if ( v11 )
        return 0;
      v5 = 32;
    }
LABEL_7:
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_WORD *)(a1 + 24) = v5;
    v7 = *(_DWORD *)(a1 + 72);
    *(__m128i *)(a1 + 80) = v6;
    v8 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_DWORD *)(a1 + 112) = v7;
    *(_BYTE *)(a1 + 80) = 1;
    *(__m128i *)(a1 + 96) = v8;
    return sub_7A80(a1, a1 + 40, a3, 0x26u, 1u);
  }
  if ( a2 != 99 )
  {
    switch ( a2 )
    {
      case 'g':
        if ( a4 == 16 )
          return 0;
        v18 = a3 & 0x8F;
        if ( (a3 & 0x8F) == 0x80 )
        {
          v12 = 27;
          goto LABEL_26;
        }
        if ( (a3 & 0x8Fu) > 0x80 )
        {
          v12 = 100;
          if ( v18 == -121 )
            goto LABEL_26;
        }
        else
        {
          if ( !v18 )
          {
            v12 = 34;
            goto LABEL_26;
          }
          v12 = 99;
          if ( v18 == 7 )
            goto LABEL_26;
        }
        return 0;
      case 'p':
        if ( a4 == 16 )
          return 0;
        v17 = a3 & 0x8F;
        if ( (a3 & 0x8F) == 6 )
        {
          v12 = 95;
        }
        else if ( v17 == 7 )
        {
          v12 = 96;
        }
        else
        {
          if ( v17 )
            return 0;
          v12 = 32;
        }
        goto LABEL_26;
      case 'q':
        if ( a4 == 16 )
          return 0;
        v12 = 30;
        if ( (a3 & 0x8F) != 0 )
          return 0;
        goto LABEL_26;
      case 'r':
        if ( a4 == 16 )
          return 0;
        v16 = a3 & 0x8F;
        if ( (a3 & 0x8F) == 6 )
        {
          v12 = 97;
        }
        else if ( v16 == 7 )
        {
          v12 = 98;
        }
        else
        {
          if ( v16 )
            return 0;
          v12 = 23;
        }
LABEL_26:
        v13 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v14 = *(_DWORD *)(a1 + 72);
        *(_WORD *)(a1 + 24) = v12;
        *(_BYTE *)(a1 + 41) = 5;
        *(__m128i *)(a1 + 80) = v13;
        v15 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_DWORD *)(a1 + 112) = v14;
        *(_QWORD *)(a1 + 48) = ((unsigned __int8)a3 >> 4) & 7;
        *(_BYTE *)(a1 + 80) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(__m128i *)(a1 + 96) = v15;
        return 1;
      case 's':
        if ( a4 != 16 )
          return 0;
        v12 = 35;
        if ( (a3 & 0x8F) != 0 )
          return 0;
        goto LABEL_26;
      case 't':
        if ( a4 != 16 || (a3 & 0xF) != 0 )
          return 0;
        v12 = ((a3 >> 15) & 0xFFFB) + 31;
        goto LABEL_26;
      case 'u':
        if ( a4 != 16 || (a3 & 0xF) != 0 )
          return 0;
        v12 = ((a3 >> 15) & 0xFFF8) + 36;
        goto LABEL_26;
      case 'v':
        if ( a4 != 16 || (a3 & 0xF) != 0 )
          return 0;
        v12 = ((a3 >> 15) & 0x12) + 6;
        goto LABEL_26;
      case 'w':
        if ( a4 != 16 || (a3 & 0xF) != 0 )
          return 0;
        v12 = ((a3 >> 15) & 0xFFFC) + 29;
        goto LABEL_26;
      default:
        return 0;
    }
  }
  if ( a4 == 16 )
  {
    v5 = 35;
    if ( (a3 & 0xF) == 0 )
      goto LABEL_7;
  }
  return 0;
}

