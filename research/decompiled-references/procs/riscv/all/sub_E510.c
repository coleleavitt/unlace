__int64 __fastcall sub_E510(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned int a4, unsigned __int8 a5, char a6)
{
  __int64 v8; // rsi
  unsigned __int8 v9; // di
  unsigned __int16 v11; // bx
  unsigned __int8 v12; // r15
  unsigned int v13; // ecx
  char v14; // al
  __int64 v15; // rax
  __int64 **v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // ecx
  unsigned __int8 v20; // bl
  __int16 v21; // ax
  __int16 v22; // dx
  char v23; // al
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 **v27; // rdi
  __int16 v28; // dx

  v8 = a4;
  LOWORD(v8) = (unsigned __int16)a4 >> 4;
  v9 = ((unsigned __int16)a4 >> 4) & 0x1F;
  v11 = a4;
  switch ( a5 )
  {
    case 0u:
      *(_WORD *)(a2 + 24) = 19;
      sub_BD30(a1, a2 + 120, (unsigned __int16)a4, 19);
      v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
      v12 = (a3 >> 7) & 0x1F;
      if ( !(v20 | v12) )
      {
        v20 = 0;
        v21 = *(_WORD *)(a2 + 34) & 4;
        v12 = a5;
        goto LABEL_13;
      }
      if ( !*(_QWORD *)(a2 + 128) )
        goto LABEL_12;
      v26 = *(_QWORD *)(a1 + 504);
      if ( !v26 )
        goto LABEL_12;
      *(_BYTE *)(v26 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
      v27 = *(__int64 ***)(a1 + 504);
      if ( !v27 )
        goto LABEL_12;
      sub_BAE0(v27, 32, 32, 20);
      v21 = *(_WORD *)(a2 + 34) & 4;
      goto LABEL_13;
    case 1u:
      switch ( a6 )
      {
        case 0:
        case 1:
          *(_WORD *)(a2 + 24) = 25;
          goto LABEL_35;
        case 4:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( v9 == 15 )
          {
            *(_WORD *)(a2 + 24) = 401;
            goto LABEL_40;
          }
          v13 = 0;
          if ( v21 )
            return v13;
          *(_WORD *)(a2 + 24) = 401;
          v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
          v22 = (a3 >> 7) & 0x1F;
          v23 = 2;
          goto LABEL_14;
        case 8:
          v13 = 0;
          if ( v9 > 9u )
            return v13;
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( (v8 & 0x18) != 0 )
          {
            *(_BYTE *)(a2 + 28) = 9;
            *(_WORD *)(a2 + 24) = 396;
            *(_BYTE *)(a2 + 29) = v8 & 1 | 8;
            goto LABEL_40;
          }
          if ( (v8 & 4) != 0 )
          {
            v28 = 395;
            if ( !v21 )
              return v13;
          }
          else
          {
            v28 = 394;
          }
          *(_WORD *)(a2 + 24) = v28;
          *(_BYTE *)(a2 + 29) = v8 & 1;
          *(_BYTE *)(a2 + 28) = (v8 & 2) == 0 ? -39 : -55;
          goto LABEL_40;
        case 20:
        case 21:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( a6 != 20 )
          {
            v13 = 0;
            if ( !v21 )
              return v13;
          }
          *(_WORD *)(a2 + 24) = 347;
          goto LABEL_39;
        case 24:
          v13 = 0;
          if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
            return v13;
          if ( (v11 & 0x100) != 0 )
          {
            if ( ((unsigned __int8)v8 & 0xFu) > 0xA )
              return v13;
            *(_BYTE *)(a2 + 121) = 5;
            *(_WORD *)(a2 + 24) = 388;
            *(_QWORD *)(a2 + 128) = v8 & 0xF;
            *(_BYTE *)(a2 + 125) = 0;
          }
          else
          {
            if ( (v8 & 0xF) != 0 )
              return v13;
            *(_WORD *)(a2 + 24) = 387;
          }
          break;
        case 36:
        case 37:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( a6 != 36 )
          {
            v13 = 0;
            if ( !v21 )
              return v13;
          }
          *(_WORD *)(a2 + 24) = 341;
          goto LABEL_39;
        case 48:
          switch ( v9 )
          {
            case 0u:
              *(_WORD *)(a2 + 24) = 351;
              goto LABEL_21;
            case 1u:
              *(_WORD *)(a2 + 24) = 355;
              goto LABEL_21;
            case 2u:
              *(_WORD *)(a2 + 24) = 353;
              goto LABEL_21;
            case 4u:
              *(_WORD *)(a2 + 24) = 127;
              *(_WORD *)(a2 + 28) = 1538;
              goto LABEL_21;
            case 5u:
              *(_WORD *)(a2 + 24) = 127;
              *(_WORD *)(a2 + 28) = 514;
              goto LABEL_21;
            default:
              return 0;
          }
        case 52:
        case 53:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( a6 != 52 )
          {
            v13 = 0;
            if ( !v21 )
              return v13;
          }
          *(_WORD *)(a2 + 24) = 345;
          goto LABEL_39;
        default:
          return 0;
      }
LABEL_66:
      v23 = 7;
      v22 = (a3 >> 7) & 0x1F;
      v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
      goto LABEL_14;
    case 2u:
      *(_WORD *)(a2 + 24) = 20;
      sub_BD30(a1, a2 + 120, (unsigned __int16)a4, 20);
      goto LABEL_21;
    case 3u:
      *(_WORD *)(a2 + 24) = 21;
      sub_BD30(a1, a2 + 120, (unsigned __int16)a4, 21);
LABEL_21:
      v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
      v12 = (a3 >> 7) & 0x1F;
      v21 = *(_WORD *)(a2 + 34) & 4;
      goto LABEL_13;
    case 4u:
      v13 = 0;
      v12 = (a3 >> 7) & 0x1F;
      if ( !v12 )
        return v13;
      v17 = v11;
      v18 = a2 + 120;
      v19 = 22;
      *(_WORD *)(a2 + 24) = 22;
      goto LABEL_11;
    case 5u:
      switch ( a6 )
      {
        case 0:
        case 1:
          *(_WORD *)(a2 + 24) = 26;
          goto LABEL_35;
        case 4:
          if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
            return 0;
          v25 = 398;
          if ( v9 != 15 )
            return 0;
          goto LABEL_58;
        case 20:
          v13 = 0;
          if ( v9 != 7 )
            return v13;
          *(_WORD *)(a2 + 24) = 361;
          *(_WORD *)(a2 + 28) = 1538;
          goto LABEL_21;
        case 32:
        case 33:
          *(_WORD *)(a2 + 24) = 27;
LABEL_35:
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 2;
          *(_QWORD *)(a2 + 128) = v8 & 0x3F;
          goto LABEL_21;
        case 36:
        case 37:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( a6 != 36 )
          {
            v13 = 0;
            if ( !v21 )
              return v13;
          }
          *(_WORD *)(a2 + 24) = 343;
          goto LABEL_39;
        case 48:
        case 49:
          v21 = *(_WORD *)(a2 + 34) & 4;
          if ( a6 != 48 )
          {
            v13 = 0;
            if ( !v21 )
              return v13;
          }
          *(_WORD *)(a2 + 24) = 367;
LABEL_39:
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 2;
          *(_QWORD *)(a2 + 128) = v8 & 0x3F;
LABEL_40:
          v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
          v12 = (a3 >> 7) & 0x1F;
          goto LABEL_13;
        case 52:
          if ( v9 == 7 )
          {
            *(_WORD *)(a2 + 24) = 390;
            goto LABEL_21;
          }
          v13 = 0;
          if ( v9 == 24 )
          {
            v25 = 363;
            if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
            {
LABEL_58:
              *(_WORD *)(a2 + 24) = v25;
              v23 = 2;
              v22 = (a3 >> 7) & 0x1F;
              v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
              goto LABEL_14;
            }
          }
          break;
        case 53:
          v13 = 0;
          if ( v9 != 24 || (*(_BYTE *)(a2 + 34) & 4) == 0 )
            return v13;
          *(_WORD *)(a2 + 24) = 363;
          goto LABEL_66;
        default:
          return 0;
      }
      return v13;
    case 6u:
      v12 = (a3 >> 7) & 0x1F;
      if ( v12 )
      {
        v18 = a2 + 120;
        *(_WORD *)(a2 + 24) = 23;
        v17 = (unsigned __int16)a4;
        v19 = 23;
LABEL_11:
        sub_BD30(a1, v18, v17, v19);
        v20 = ((a3 & 0x8000u) != 0) + ((2 * v11) & 0x1E);
LABEL_12:
        v21 = *(_WORD *)(a2 + 34) & 4;
LABEL_13:
        v22 = v12;
        v23 = v21 == 0 ? 2 : 7;
LABEL_14:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v22;
        *(_BYTE *)(a2 + 45) = v23;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (char)v20;
        *(_BYTE *)(a2 + 85) = v23;
      }
      else
      {
        if ( v9 == 1 )
        {
          v14 = 88;
        }
        else if ( v9 == 3 )
        {
          v14 = 104;
        }
        else
        {
          v13 = 0;
          v14 = 72;
          if ( v9 )
            return v13;
        }
        *(_BYTE *)(a2 + 28) = v14;
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 24) = 384;
        *(_WORD *)(a2 + 46) = ((2 * (_BYTE)v11) & 0x1E) + (a3 >> 15);
        *(_QWORD *)(a2 + 56) = (v8 << 52 >> 52) & 0xFFFFFFFFFFFFFFE0LL;
        v15 = *(_QWORD *)(a1 + 504);
        if ( v15 )
        {
          *(_BYTE *)(v15 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
          v16 = *(__int64 ***)(a1 + 504);
          if ( v16 )
            sub_BAE0(v16, 32, 32, 25);
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 7u:
      v13 = 0;
      v12 = (a3 >> 7) & 0x1F;
      if ( !v12 )
        return v13;
      v17 = v11;
      v18 = a2 + 120;
      v19 = 24;
      *(_WORD *)(a2 + 24) = 24;
      goto LABEL_11;
    default:
      return 0;
  }
}
