__int64 __fastcall sub_11FE0(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v7; // di
  unsigned int v8; // edx
  char v9; // r8
  unsigned int v10; // r9d
  int v11; // ecx
  __int16 v12; // si
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned int v15; // edi
  __int16 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r11d
  int v21; // edi
  __int16 v22; // bx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rsi
  __int16 v26; // dx
  char v27; // dl
  __int16 v28; // dx

  v7 = a4;
  v8 = a3 | (a4 << 16);
  v9 = ((2 * a4) & 0x1E) + ((a3 & 0x8000u) != 0);
  v10 = v8 >> 25;
  v11 = (v8 >> 12) & 7;
  if ( ((v8 >> 12) & 7) == 7 )
  {
    v21 = (32 * (unsigned __int8)(v8 >> 7)) & 0x20 | (v8 >> 20) & 0x1F;
    v22 = *(_WORD *)(a2 + 34) & 4;
    if ( !v22 )
    {
      v19 = 0;
      if ( (unsigned __int8)v21 > 0x1Fu )
        return v19;
    }
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = v9;
    v23 = (32 * (_WORD)v10) & 0x3E0 | (v8 >> 7) & 0x1E;
    *(_BYTE *)(a2 + 81) = 5;
    *(_QWORD *)(a2 + 88) = (unsigned __int8)v21;
    v24 = (32 * v10) & 0x3E0 | (v8 >> 7) & 0x1E | 0xFFFFFFFFFFFFFC00LL;
    *(_BYTE *)(a2 + 85) = 0;
    if ( (v8 & 0x80000000) != 0 )
      v23 = v24;
    *(_BYTE *)(a2 + 121) = 7;
    *(_WORD *)(a2 + 24) = ((v8 & 0x40000000) != 0) + 542;
    if ( !v22 )
      LOBYTE(v11) = 2;
    v25 = *(_QWORD *)(a2 + 16) + v23;
    *(_BYTE *)(a2 + 45) = v11;
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v25;
    return 4;
  }
  if ( (unsigned __int8)v11 > 4u )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 81) = 5;
    *(_BYTE *)(a2 + 85) = 0;
    *(_BYTE *)(a2 + 121) = 7;
    v17 = (v8 >> 7) & 0x1E | (32 * (_WORD)v10) & 0x3E0;
    if ( (v8 & 0x80000000) != 0 )
      v17 |= 0xFFFFFFFFFFFFFC00LL;
    *(_QWORD *)(a2 + 88) = (v8 >> 30 << 6) & 0x40 | (32 * (unsigned __int8)(v8 >> 7)) & 0x20 | (v8 >> 20) & 0x1F;
    *(_WORD *)(a2 + 46) = v9;
    *(_WORD *)(a2 + 24) = ((_BYTE)v11 != 5) + 544;
    v18 = *(_QWORD *)(a2 + 16) + v17;
    *(_BYTE *)(a2 + 45) = (*(_WORD *)(a2 + 34) & 4) == 0 ? 2 : 7;
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v18;
    return 4;
  }
  v12 = (a3 >> 7) & 0x1F;
  if ( !(_BYTE)v11 )
  {
    switch ( v10 )
    {
      case 5u:
        v26 = 546;
        goto LABEL_30;
      case 6u:
        v26 = 547;
        goto LABEL_30;
      case 7u:
        v26 = 548;
        goto LABEL_30;
      case 8u:
        v19 = 0;
        v28 = 549;
        if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          return v19;
        goto LABEL_36;
      case 9u:
        v19 = 0;
        v28 = 550;
        if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          return v19;
        goto LABEL_36;
      case 0xAu:
        v19 = 0;
        v28 = 551;
        if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          return v19;
        goto LABEL_36;
      case 0xBu:
        v19 = 0;
        v28 = 552;
        if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          return v19;
LABEL_36:
        *(_WORD *)(a2 + 24) = v28;
        v12 = (unsigned __int8)v12;
        v27 = 7;
        goto LABEL_31;
      case 0x10u:
        v26 = 553;
        goto LABEL_30;
      case 0x11u:
        v26 = 555;
        goto LABEL_30;
      case 0x12u:
        v26 = 554;
        goto LABEL_30;
      case 0x13u:
        v26 = 556;
LABEL_30:
        *(_WORD *)(a2 + 24) = v26;
        v12 = (unsigned __int8)v12;
        v27 = (*(_WORD *)(a2 + 34) & 4) == 0 ? 2 : 7;
LABEL_31:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v12;
        *(_BYTE *)(a2 + 45) = v27;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v9;
        *(_BYTE *)(a2 + 85) = v27;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 126) = (v7 >> 4) & 0x1F;
        *(_BYTE *)(a2 + 125) = v27;
        break;
      default:
        return 0;
    }
    return 4;
  }
  if ( (unsigned __int8)(v11 - 2) <= 1u )
  {
    v13 = v8;
    v14 = v8 >> 20;
    v15 = v13 >> 26;
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
    {
      v12 = (unsigned __int8)v12;
      if ( (_BYTE)v11 == 2 )
        v16 = 540;
      else
        v16 = 541;
      LOBYTE(v11) = 7;
      goto LABEL_10;
    }
    if ( (v14 & 0x20) == 0 && v15 <= 0x1F )
    {
      v12 = (unsigned __int8)v12;
      v16 = 540;
      if ( (_BYTE)v11 != 2 )
      {
        v16 = 541;
        LOBYTE(v11) = 2;
      }
LABEL_10:
      *(_WORD *)(a2 + 24) = v16;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v12;
      *(_BYTE *)(a2 + 45) = v11;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v9;
      *(_BYTE *)(a2 + 85) = v11;
      *(_BYTE *)(a2 + 121) = 5;
      *(_QWORD *)(a2 + 128) = v15;
      *(_BYTE *)(a2 + 125) = 0;
      *(_BYTE *)(a2 + 161) = 5;
      *(_QWORD *)(a2 + 168) = v14 & 0x3F;
      *(_BYTE *)(a2 + 165) = 0;
      return 4;
    }
  }
  return 0;
}

