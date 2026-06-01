__int64 __fastcall sub_4BDF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int16 *v5; // r14
  int *v6; // r13
  char *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // ax
  bool v14; // zf
  __int64 v15; // rax
  __m128i v16; // xmm0
  int v17; // eax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int16 v20; // dx
  __int16 v21; // dx
  unsigned __int64 v22; // rdx
  __int16 v23; // ax
  __int16 v24; // si
  unsigned __int64 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  v3 = *(_QWORD *)(a2 + 16);
  v26[0] = 0;
  v5 = sub_4BD40(a1, v26, (_WORD *)(a2 + 26), v3);
  if ( !v5 )
    return 0;
  v6 = (int *)(v5 + 10);
  v7 = (char *)(a2 + 40);
  v25 = v26[0];
  do
  {
    if ( !*v6 )
      break;
    if ( !(unsigned __int8)sub_4A720(a1, a2, v7, v25, *v5, *v6) )
      return 0;
    v7 += 40;
    ++v6;
  }
  while ( (char *)(a2 + 240) != v7 );
  v8 = *v5;
  *(_WORD *)(a2 + 24) = v8;
  if ( (unsigned __int16)v8 > 0x6AAu )
  {
    LOWORD(v8) = v8 - 1707;
    switch ( v8 )
    {
      case 0LL:
      case 1LL:
      case 4LL:
      case 5LL:
      case 23LL:
      case 24LL:
        goto LABEL_28;
      case 2LL:
      case 3LL:
      case 14LL:
      case 15LL:
      case 21LL:
      case 22LL:
      case 57LL:
      case 58LL:
        goto LABEL_25;
      case 16LL:
        v10 = *(_QWORD *)(a2 + 128);
        v11 = *(_QWORD *)(a2 + 168);
        v12 = *(_QWORD *)(a2 + 208);
        if ( (_DWORD)v10 != 31 || (_DWORD)v11 )
        {
          if ( (_DWORD)v10 == 15 && (_DWORD)v11 == 16 )
          {
            if ( (_DWORD)v12 )
              return 1;
            v13 = 1760;
          }
          else if ( (_DWORD)v10 == 7 && (_DWORD)v11 == 8 )
          {
            if ( (_DWORD)v12 != 1 )
              return 1;
            v13 = 1761;
          }
          else if ( (_DWORD)v10 == 24 && (_DWORD)v11 == 8 )
          {
            if ( (_DWORD)v12 )
              return 1;
            v13 = 1762;
          }
          else
          {
            if ( (_DWORD)v11 != 24 || (_DWORD)v10 != 8 || (_DWORD)v12 )
              return 1;
            v13 = 1763;
          }
        }
        else
        {
          if ( (_DWORD)v12 )
            return 1;
          v13 = 1759;
        }
        *(_WORD *)(a2 + 24) = v13;
        *(_BYTE *)(a2 + 121) = 0;
        *(_BYTE *)(a2 + 161) = 0;
        *(_BYTE *)(a2 + 201) = 0;
        return 1;
      case 17LL:
      case 18LL:
      case 19LL:
      case 20LL:
        *(_BYTE *)(a2 + 125) = 2;
        return 1;
      default:
        return 1;
    }
  }
  if ( (unsigned __int16)v8 > 0x689u )
  {
    v19 = 1LL << ((unsigned __int8)v8 + 118);
    if ( (v19 & 0x390) != 0 )
      goto LABEL_25;
    if ( (v19 & 0x100000023LL) != 0 )
      goto LABEL_17;
    if ( (v19 & 0x4C) == 0 )
      return 1;
    goto LABEL_28;
  }
  if ( (_WORD)v8 == 773 )
    goto LABEL_36;
  if ( (unsigned __int16)v8 > 0x305u )
  {
    if ( (_WORD)v8 == 1013 )
      goto LABEL_17;
    if ( (unsigned __int16)v8 <= 0x3F5u )
    {
      if ( (_WORD)v8 != 1010 )
      {
        if ( (_WORD)v8 == 1012 )
          goto LABEL_28;
        if ( (_WORD)v8 != 815 )
          return 1;
      }
LABEL_25:
      *(_BYTE *)(a2 + 85) = 2;
      return 1;
    }
    if ( (_WORD)v8 == 1129 )
      goto LABEL_17;
    if ( (_WORD)v8 != 1130 )
      return 1;
LABEL_28:
    *(_BYTE *)(a2 + 85) = 1;
    return 1;
  }
  if ( (unsigned __int16)v8 > 0x95u )
  {
    if ( (_WORD)v8 != 759 )
      return 1;
LABEL_36:
    v14 = *(_QWORD *)(a2 + 128) == 0;
    v15 = *(_QWORD *)(a2 + 208);
    *(_WORD *)(a2 + 24) = 759;
    if ( v14 )
    {
      v16 = _mm_loadu_si128((const __m128i *)(a2 + 160));
      *(_BYTE *)(a2 + 81) = 9;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 24) = 760 - (((_DWORD)v15 == 0) - 1);
      *(_WORD *)(a2 + 113) = 258;
      v17 = *(_DWORD *)(a2 + 192);
      *(__m128i *)(a2 + 120) = v16;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 176));
      *(_DWORD *)(a2 + 152) = v17;
      *(_BYTE *)(a2 + 161) = 0;
      *(_BYTE *)(a2 + 201) = 0;
      *(__m128i *)(a2 + 136) = v18;
    }
    else
    {
      switch ( *(_QWORD *)(a2 + 168) )
      {
        case 0LL:
          *(_WORD *)(a2 + 24) = 772;
          goto LABEL_50;
        case 1LL:
          v22 = *(unsigned __int16 *)(a2 + 86);
          if ( (unsigned __int16)v22 > 0xFu )
          {
            if ( v22 == 16 )
            {
              *(_WORD *)(a2 + 24) = 765;
              *(_BYTE *)(a2 + 81) = 0;
            }
          }
          else
          {
            v23 = *(_WORD *)(a2 + 86) & 3;
            if ( v23 != 3 )
            {
              if ( v23 == 1 )
              {
                v24 = 763;
              }
              else
              {
                v24 = 764;
                if ( v23 != 2 )
                  v24 = 762;
              }
              *(_WORD *)(a2 + 24) = v24;
              *(_BYTE *)(a2 + 81) = 9;
              *(_WORD *)(a2 + 86) = v22 >> 2;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 113) = 272;
            }
          }
          goto LABEL_50;
        case 2LL:
          v21 = 767;
          if ( (_DWORD)v15 )
            v21 = 766;
          *(_WORD *)(a2 + 24) = v21;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 113) = 260;
          goto LABEL_50;
        case 3LL:
          *(_WORD *)(a2 + 24) = 768;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 113) = 259;
          goto LABEL_50;
        case 4LL:
          v20 = 770;
          if ( (_DWORD)v15 )
            v20 = 769;
          *(_WORD *)(a2 + 24) = v20;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 113) = 271;
          goto LABEL_50;
        case 5LL:
          *(_WORD *)(a2 + 24) = 771;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 113) = 270;
LABEL_50:
          *(_BYTE *)(a2 + 121) = 0;
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 201) = 0;
          break;
        default:
          break;
      }
    }
    if ( (_WORD)v8 == 773 )
      *(_WORD *)(a2 + 24) += 14;
    return 1;
  }
  if ( (unsigned __int16)v8 <= 0x77u )
    return 1;
  v9 = 1LL << ((unsigned __int8)v8 - 120);
  if ( (v9 & 0x18000C00) != 0 )
    goto LABEL_25;
  if ( (v9 & 0x20006000) != 0 )
    goto LABEL_28;
  if ( (v9 & 0x40003) != 0 )
LABEL_17:
    *(_BYTE *)(a2 + 85) = 0;
  return 1;
}
