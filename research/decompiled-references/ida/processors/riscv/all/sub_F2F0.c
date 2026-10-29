__int64 __fastcall sub_F2F0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // si
  unsigned __int8 v10; // dl
  __int16 v11; // r11
  __int16 v12; // r8
  __int16 v13; // cx
  char v14; // si
  __int16 v15; // cx
  char v16; // di
  __int16 v17; // cx
  __int16 v18; // cx
  char v19; // dl
  unsigned int v20; // edi
  char v22; // cl
  __int16 v23; // cx
  __int16 v24; // cx
  char v25; // dl
  __int16 v26; // cx
  char v27; // dl

  v7 = a3 >> 15;
  v8 = a4 >> 4;
  v9 = a3;
  v10 = (a3 >> 15) + ((2 * a4) & 0x1E);
  LOBYTE(v11) = (a4 >> 4) & 0x1F;
  if ( a5 != 4 )
  {
    if ( a5 > 4u )
    {
      v16 = a4;
      if ( (unsigned __int8)(a5 - 5) > 2u )
      {
        v12 = *(_WORD *)(a2 + 24);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        v12 = word_2AD00[a5 & 3];
        v17 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 81) = 10;
        *(_WORD *)(a2 + 46) = (v9 >> 7) & 0x1F;
        *(_WORD *)(a2 + 24) = v12;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 0;
        *(_BYTE *)(a2 + 45) = (v17 & 4) == 0 ? 2 : 7;
        *(_QWORD *)(a2 + 88) = v8;
        *(_QWORD *)(a2 + 128) = ((_BYTE)v7 + ((2 * v16) & 0x1E)) & 0x3F;
      }
LABEL_5:
      if ( (unsigned __int16)(v12 - 45) <= 2u )
      {
LABEL_6:
        if ( (_BYTE)v11 )
        {
LABEL_12:
          v18 = *(_WORD *)(a2 + 34);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (char)v10;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v11;
          v19 = (v18 & 4) == 0 ? 2 : 7;
          *(_BYTE *)(a2 + 45) = v19;
          *(_BYTE *)(a2 + 85) = v19;
        }
        else if ( v10 )
        {
LABEL_8:
          v15 = *(_WORD *)(a2 + 34);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (char)v10;
          *(_BYTE *)(a2 + 45) = (v15 & 4) == 0 ? 2 : 7;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( a5 )
    {
      *(_BYTE *)(a2 + 41) = 1;
      v12 = word_2AD08[a5];
      v13 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 81) = 10;
      *(_WORD *)(a2 + 46) = (v9 >> 7) & 0x1F;
      *(_WORD *)(a2 + 24) = v12;
      *(_BYTE *)(a2 + 85) = 2;
      *(_QWORD *)(a2 + 88) = v8;
      *(_BYTE *)(a2 + 121) = 1;
      v14 = (v13 & 4) == 0 ? 2 : 7;
      *(_WORD *)(a2 + 126) = (char)v10;
      *(_BYTE *)(a2 + 45) = v14;
      *(_BYTE *)(a2 + 125) = v14;
      goto LABEL_5;
    }
    v20 = 0;
    if ( (v9 & 0xF80) != 0 )
      return v20;
    switch ( a6 )
    {
      case 0LL:
        v20 = 0;
        if ( !v10 )
        {
          switch ( (a4 >> 4) & 0x1F )
          {
            case 0:
              *(_WORD *)(a2 + 24) = 39;
              return *(unsigned __int16 *)(a2 + 26);
            case 1:
              *(_WORD *)(a2 + 24) = 40;
              return *(unsigned __int16 *)(a2 + 26);
            case 2:
              *(_WORD *)(a2 + 24) = 41;
              return *(unsigned __int16 *)(a2 + 26);
            case 0xD:
              *(_WORD *)(a2 + 24) = 402;
              return *(unsigned __int16 *)(a2 + 26);
            case 0x1D:
              *(_WORD *)(a2 + 24) = 403;
              return *(unsigned __int16 *)(a2 + 26);
            default:
              return 0;
          }
        }
        return v20;
      case 8LL:
        if ( (_BYTE)v11 == 4 )
        {
          *(_WORD *)(a2 + 24) = 385;
          goto LABEL_8;
        }
        v20 = 0;
        if ( v10 )
          return v20;
        if ( (_BYTE)v11 == 2 )
        {
          *(_WORD *)(a2 + 24) = 42;
        }
        else
        {
          if ( (_BYTE)v11 != 5 )
            return v20;
          *(_WORD *)(a2 + 24) = 44;
        }
        break;
      case 9LL:
        *(_WORD *)(a2 + 24) = 45;
        goto LABEL_6;
      case 11LL:
        *(_WORD *)(a2 + 24) = 379;
        goto LABEL_12;
      case 12LL:
        v20 = 0;
        if ( v10 | v8 & 0x1E )
          return v20;
        *(_WORD *)(a2 + 24) = 380;
        *(_BYTE *)(a2 + 28) = (16 * (v11 + 9)) | 7;
        return *(unsigned __int16 *)(a2 + 26);
      case 17LL:
        *(_WORD *)(a2 + 24) = 46;
        goto LABEL_6;
      case 19LL:
        v26 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (char)v10;
        *(_WORD *)(a2 + 24) = 381;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v11;
        *(_BYTE *)(a2 + 28) = -73;
        v27 = (v26 & 4) == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 45) = v27;
        *(_BYTE *)(a2 + 85) = v27;
        return *(unsigned __int16 *)(a2 + 26);
      case 24LL:
        if ( v10 || (_BYTE)v11 != 2 )
          return 0;
        *(_WORD *)(a2 + 24) = 43;
        return *(unsigned __int16 *)(a2 + 26);
      case 49LL:
        *(_WORD *)(a2 + 24) = 47;
        goto LABEL_6;
      case 51LL:
        v24 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (char)v10;
        *(_WORD *)(a2 + 24) = 381;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v11;
        *(_BYTE *)(a2 + 28) = -57;
        v25 = (v24 & 4) == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 45) = v25;
        *(_BYTE *)(a2 + 85) = v25;
        return *(unsigned __int16 *)(a2 + 26);
      default:
        return 0;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( (_BYTE)a6 == 53 )
    goto LABEL_32;
  if ( (unsigned __int8)a6 > 0x35u )
  {
    v20 = 0;
    if ( (_BYTE)a6 != 54 )
    {
      if ( (_BYTE)a6 != 55 || (*(_BYTE *)(a2 + 34) & 4) == 0 || (v9 & 0xF80) != 0 )
        return v20;
      v11 = (a4 >> 4) & 0x1F;
      *(_WORD *)(a2 + 24) = 378;
      v22 = 7;
LABEL_25:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v11;
      *(_BYTE *)(a2 + 45) = v22;
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 86) = (char)v10;
      *(_BYTE *)(a2 + 28) = (8 * a6) & 0x30 | 7;
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
      return v20;
LABEL_29:
    v20 = 0;
    if ( (v8 & 0x1C) != 0 )
      return v20;
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 81) = 3;
    *(_WORD *)(a2 + 86) = (char)v10;
    *(_WORD *)(a2 + 46) = (v9 >> 7) & 0x1F;
    *(_WORD *)(a2 + 24) = 377;
    *(_BYTE *)(a2 + 28) = (((16 * v11) & 0x20) + (((_BYTE)v11 << 6) & 0x40 | (8 * a6) & 0x30)) | 7;
    *(_BYTE *)(a2 + 45) = (*(_WORD *)(a2 + 34) & 4) == 0 ? 2 : 7;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( (unsigned __int8)(a6 - 48) <= 4u )
  {
    if ( ((1LL << a6) & 0x15000000000000LL) != 0 )
      goto LABEL_29;
    if ( ((1LL << a6) & 0xA000000000000LL) != 0 )
    {
LABEL_32:
      v20 = 0;
      if ( (v9 & 0xF80) != 0 )
        return v20;
      v23 = *(_WORD *)(a2 + 34);
      v11 = (unsigned __int8)v11;
      *(_WORD *)(a2 + 24) = 378;
      v22 = (v23 & 4) == 0 ? 2 : 7;
      goto LABEL_25;
    }
  }
  return 0;
}

