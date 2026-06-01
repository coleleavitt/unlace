char __fastcall sub_7C50(__int64 a1, char a2, unsigned __int8 a3, char a4, __int16 a5)
{
  __int16 v5; // r9
  int v6; // eax
  char result; // al
  int v8; // eax
  __m128i v9; // xmm0

  v5 = a5;
  switch ( a2 )
  {
    case 8:
      v6 = 1;
      if ( a5 == 1 )
        goto LABEL_6;
      goto LABEL_3;
    case 9:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 1;
      goto LABEL_6;
    case 20:
      if ( a5 != 1 )
        goto LABEL_3;
      v6 = 1;
      v5 = 62;
      goto LABEL_6;
    case 21:
      if ( a5 != 1 )
        goto LABEL_3;
      v6 = 1;
      v5 = 85;
      goto LABEL_6;
    case 22:
      if ( a5 != 1 )
        goto LABEL_3;
      v6 = 1;
      v5 = 4;
      goto LABEL_6;
    case 24:
      if ( a5 != 1 )
        goto LABEL_3;
      v6 = 1;
      v5 = 80;
      goto LABEL_6;
    case 25:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 80;
      goto LABEL_6;
    case 28:
      if ( a5 != 1 )
        goto LABEL_3;
      v6 = 1;
      v5 = 38;
      goto LABEL_6;
    case 29:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 38;
      goto LABEL_6;
    case 100:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 62;
      goto LABEL_6;
    case 101:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 85;
      goto LABEL_6;
    case 102:
      if ( a5 == 1 )
        goto LABEL_3;
      v6 = 2;
      v5 = 4;
LABEL_6:
      *(_DWORD *)(a1 + 28) = v6;
      *(_WORD *)(a1 + 24) = v5;
      if ( a4 )
      {
        v8 = *(_DWORD *)(a1 + 72);
        *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_DWORD *)(a1 + 112) = v8;
        *(_BYTE *)(a1 + 80) = 1;
        *(__m128i *)(a1 + 96) = v9;
        result = sub_7A80(a1, a1 + 40, a3, 0x1026u, 0);
      }
      else
      {
        result = sub_7A80(a1, a1 + 80, a3, 0x2025u, 0);
      }
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}

