__int64 __fastcall sub_D6C0(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v8; // edx
  unsigned __int8 v9; // r9
  char v10; // bl
  char v11; // dl
  char v12; // dl
  char v13; // si
  char v14; // dl
  char v16; // dl
  __int16 v17; // r8
  char v18; // dl
  __int16 v19; // r8
  char v20; // dl
  __int16 v21; // dx
  __int16 v22; // dx
  char v23; // dl
  char v24; // cl
  unsigned __int8 v25; // dl
  char v26; // r10
  char v27; // dl
  char v28; // dl
  char v29; // cl
  __int16 v30; // r8
  char v31; // dl
  __int16 v32; // r9
  char v33; // dl
  char v34; // cl

  v8 = (unsigned __int16)aCdefhk[a6 >> 2];
  *(_WORD *)(a2 + 24) = v8;
  if ( !(_WORD)v8 )
    return 0;
  v9 = a6 & 3;
  *(_BYTE *)(a2 + 28) = 2;
  *(_BYTE *)(a2 + 29) = v9;
  v10 = byte_2AB64[v9];
  switch ( v8 )
  {
    case 'c':
    case 'd':
    case 'e':
    case 'f':
      *(_BYTE *)(a2 + 161) = 9;
      *(_QWORD *)(a2 + 168) = a5;
      if ( a5 == 7 )
      {
        *(_BYTE *)(a2 + 164) &= ~8u;
      }
      else if ( (unsigned __int8)(a5 - 5) <= 1u )
      {
        return 0;
      }
      goto LABEL_5;
    case 'g':
      if ( (a4 & 0x1F0) != 0 )
        return 0;
      *(_BYTE *)(a2 + 121) = 9;
      *(_QWORD *)(a2 + 128) = a5;
      if ( a5 == 7 )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      else if ( (unsigned __int8)(a5 - 5) <= 1u )
      {
        return 0;
      }
      v16 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v10;
      *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v16 & 8) == 0));
      goto LABEL_41;
    case 'h':
      switch ( a5 )
      {
        case 1u:
          *(_WORD *)(a2 + 24) = 105;
          goto LABEL_5;
        case 2u:
          *(_WORD *)(a2 + 24) = 106;
          goto LABEL_5;
        case 0u:
LABEL_5:
          v11 = *(_BYTE *)(a1 + 468);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v11 & 8) == 0));
          goto LABEL_6;
      }
      return 0;
    case 'k':
      if ( !a5 )
        goto LABEL_5;
      if ( a5 != 1 )
        return 0;
      *(_WORD *)(a2 + 24) = 108;
      goto LABEL_5;
    case 'm':
      *(_BYTE *)(a2 + 30) = v9;
      v25 = (a4 >> 4) & 0x1F;
      *(_BYTE *)(a2 + 29) = v25;
      if ( v9 == v25 )
        return 0;
      if ( ((a4 >> 4) & 0x1C) != 0 )
        return 0;
      v26 = byte_2AB64[v25];
      if ( !v26 )
        return 0;
      if ( byte_2AE48[v9] >= byte_2AE48[(a4 >> 4) & 0x1F] && !a5 )
        goto LABEL_47;
      *(_BYTE *)(a2 + 121) = 9;
      *(_QWORD *)(a2 + 128) = a5;
      if ( a5 == 7 )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      else if ( (unsigned __int8)(a5 - 5) <= 1u )
      {
        return 0;
      }
LABEL_47:
      v27 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 45) = v10;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v27 & 8) == 0));
      v28 = ((2 * a4) & 0x1E) + ((a3 & 0x8000u) != 0);
      v29 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = v26;
      *(_BYTE *)(a2 + 28) = 3;
      *(_WORD *)(a2 + 86) = (char)(32 * ((v29 & 8) == 0) + v28);
      return *(unsigned __int16 *)(a2 + 26);
    case 'n':
      *(_BYTE *)(a2 + 121) = 9;
      *(_QWORD *)(a2 + 128) = a5;
      if ( a5 == 7 )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      else if ( (unsigned __int8)(a5 - 5) <= 1u )
      {
        return 0;
      }
      *(_BYTE *)(a2 + 30) = (a4 >> 4) & 0x1F;
      if ( ((a4 >> 4) & 0x1C) != 0 )
        return 0;
      v30 = *(_WORD *)(a2 + 34) & 4;
      if ( ((a4 >> 4) & 0x1E) != 0 )
      {
        if ( !v30 )
          return 0;
        v31 = 7;
        v32 = (a3 >> 7) & 0x1F;
      }
      else
      {
        v32 = (a3 >> 7) & 0x1F;
        v31 = v30 == 0 ? 2 : 7;
      }
      *(_BYTE *)(a2 + 45) = v31;
      *(_BYTE *)(a2 + 41) = 1;
      v33 = (2 * a4) & 0x1E;
      *(_WORD *)(a2 + 46) = v32;
      v34 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = v10;
      *(_BYTE *)(a2 + 28) = 35;
      *(_WORD *)(a2 + 86) = (char)(32 * ((v34 & 8) == 0) + ((a3 & 0x8000u) != 0) + v33);
      return *(unsigned __int16 *)(a2 + 26);
    case 'o':
      *(_BYTE *)(a2 + 121) = 9;
      *(_QWORD *)(a2 + 128) = a5;
      if ( a5 == 7 )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      else if ( (unsigned __int8)(a5 - 5) <= 1u )
      {
        return 0;
      }
      *(_BYTE *)(a2 + 30) = v9;
      *(_BYTE *)(a2 + 29) = (a4 >> 4) & 0x1F;
      if ( ((a4 >> 4) & 0x1C) != 0 )
        return 0;
      v17 = *(_WORD *)(a2 + 34) & 4;
      if ( ((a4 >> 4) & 0x1E) != 0 && !v17 )
        return 0;
      v18 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v10;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 28) = 19;
      *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v18 & 8) == 0));
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
      *(_BYTE *)(a2 + 85) = v17 == 0 ? 2 : 7;
      return *(unsigned __int16 *)(a2 + 26);
    case 'p':
      if ( a5 | (a4 >> 4) & 0x1F || (*(_BYTE *)(a1 + 468) & 8) != 0 || v10 == 15 )
        return 0;
      v19 = *(_WORD *)(a2 + 34) & 4;
      if ( v10 == 4 && !v19 )
        return 0;
      *(_BYTE *)(a2 + 28) = 19;
      if ( !v9 )
        v9 = 4;
      *(_BYTE *)(a2 + 29) = 4;
      *(_BYTE *)(a2 + 30) = v9;
      v20 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v10;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v20 & 8) == 0));
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
      *(_BYTE *)(a2 + 85) = v19 == 0 ? 2 : 7;
      return *(unsigned __int16 *)(a2 + 26);
    case 'q':
      if ( a5 == 1 )
      {
        *(_WORD *)(a2 + 24) = 114;
      }
      else if ( a5 != 2 )
      {
        if ( a5 )
          return 0;
        *(_WORD *)(a2 + 24) = 115;
      }
      v21 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      *(_BYTE *)(a2 + 45) = (v21 & 4) == 0 ? 2 : 7;
LABEL_6:
      v12 = ((a3 & 0x8000u) != 0) + ((2 * a4) & 0x1E);
      v13 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = v10;
      *(_WORD *)(a2 + 86) = (char)(32 * ((v13 & 8) == 0) + v12);
      v14 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = v10;
      *(_WORD *)(a2 + 126) = (char)(((a4 >> 4) & 0x1F) + 32 * ((v14 & 8) == 0));
      return *(unsigned __int16 *)(a2 + 26);
    case 't':
      if ( (a4 & 0x1F0) != 0 )
        return 0;
      if ( a5 )
      {
        if ( a5 != 1 )
          return 0;
        v22 = *(_WORD *)(a2 + 34) & 4;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 468) & 8) != 0 || v10 == 15 )
          return 0;
        v22 = *(_WORD *)(a2 + 34) & 4;
        if ( v10 == 4 && !v22 )
          return 0;
        *(_BYTE *)(a2 + 28) = 35;
        *(_WORD *)(a2 + 24) = 112;
        if ( !v9 )
          v9 = 4;
        *(_BYTE *)(a2 + 30) = 4;
        *(_BYTE *)(a2 + 29) = v9;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      *(_BYTE *)(a2 + 45) = v22 == 0 ? 2 : 7;
LABEL_41:
      v23 = 2 * a4;
      v24 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 85) = v10;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (char)(32 * ((v24 & 8) == 0) + ((a3 & 0x8000u) != 0) + (v23 & 0x1E));
      return *(unsigned __int16 *)(a2 + 26);
    default:
      return *(unsigned __int16 *)(a2 + 26);
  }
}
