__int64 __fastcall sub_D370(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 a6)
{
  unsigned __int8 v9; // cl
  __int16 v10; // r10
  char v11; // di
  __int16 v12; // r10
  char v13; // r9
  __int16 v14; // cx
  char v15; // r10
  __int16 v17; // r11

  if ( (a6 & 8) != 0 )
    return 0;
  v9 = (8 * a6) & 0x30;
  v10 = (a4 >> 4) & 0x1F;
  *(_BYTE *)(a2 + 28) = v9 | 4;
  v11 = (a6 >> 4) & 7;
  *(_BYTE *)(a2 + 29) = v11;
  if ( v9 == 32 )
  {
    *(_BYTE *)(a2 + 121) = 1;
    v12 = (a4 >> 4) & 0x1F;
    goto LABEL_6;
  }
  if ( v9 > 0x20u )
  {
    if ( v9 == 48 )
      goto LABEL_5;
    v17 = *(_WORD *)(a2 + 34) & 4;
LABEL_22:
    v15 = 2;
    v14 = (char)(((a3 >> 7) & 0x1F) + 64);
    if ( !v17 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 )
  {
LABEL_5:
    *(_BYTE *)(a2 + 121) = 1;
    v12 = (char)(v10 + 64);
LABEL_6:
    *(_WORD *)(a2 + 126) = v12;
    v13 = a6 & 1;
    v14 = (char)(((a3 >> 7) & 0x1F) + 64);
    if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
    {
      *(_BYTE *)(a2 + 125) = 2;
      if ( !v13 )
        *(_BYTE *)(a2 + 161) = 12;
      v15 = 2;
      goto LABEL_10;
    }
    *(_BYTE *)(a2 + 125) = 7;
    v15 = 7;
    if ( v13 )
    {
LABEL_10:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v14;
      *(_BYTE *)(a2 + 45) = v15;
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
      *(_BYTE *)(a2 + 29) = v11 | (8 * a5) & 0x18;
      return *(unsigned __int16 *)(a2 + 26);
    }
    *(_BYTE *)(a2 + 161) = 12;
LABEL_9:
    v15 = 7;
    goto LABEL_10;
  }
  if ( (_BYTE)v10 == 11 )
  {
    *(_BYTE *)(a2 + 28) = -124;
    goto LABEL_20;
  }
  if ( (unsigned __int8)v10 > 0xBu )
  {
    if ( (_BYTE)v10 != 16 || *(_WORD *)(a2 + 24) != 169 )
      return 0;
    *(_BYTE *)(a2 + 28) = -60;
    goto LABEL_20;
  }
  if ( !(_BYTE)v10 || (_BYTE)v10 == 8 && ((*(_BYTE *)(a2 + 28) = 68, (a6 & 0x60) == 0) || (~(a6 >> 4) & 3) == 0) )
  {
LABEL_20:
    v17 = *(_WORD *)(a2 + 34) & 4;
    if ( (a6 & 1) == 0 )
      *(_BYTE *)(a2 + 121) = 12;
    goto LABEL_22;
  }
  return 0;
}

