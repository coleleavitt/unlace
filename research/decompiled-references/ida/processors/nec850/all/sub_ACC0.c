__int64 __fastcall sub_ACC0(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r11
  unsigned int v9; // r9d
  int v10; // ebp
  unsigned int v11; // edx
  __int16 v12; // ax
  int v14; // r14d
  __int16 v15; // ax
  __int64 v16; // rax
  __int16 v17; // ax
  int v18; // edi
  char v19; // r13
  __int16 v20; // r15
  char v21; // di
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // dx
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  char v30; // al
  __int16 v31; // bp
  char v32; // al
  int v33; // edx
  __int16 v34; // dx
  __int16 v35; // cx
  char v36; // al
  __int16 v37; // ax
  char v38; // dl
  unsigned int v39; // esi
  unsigned __int8 v40; // dl
  __int64 v41; // rax
  __int16 v42; // ax
  __int64 v43; // rax
  __int16 v44; // ax
  __int16 v45; // di
  __int16 v46; // dx
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int16 v49; // dx
  __int64 v50; // rax
  __int16 v51; // dx
  __int64 v52; // rax
  __int64 v53; // rsi
  __int16 v54; // ax
  int v55; // edx
  __int64 v56; // [rsp+8h] [rbp-50h]
  int v57; // [rsp+14h] [rbp-44h]
  unsigned __int64 v58; // [rsp+18h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  *(_WORD *)(a3 + 24) = 0;
  v4 = *(_DWORD *)(a1 + 188);
  if ( v4 <= 2 )
    return 0;
  v6 = (a2 >> 21) & 3;
  v7 = (a2 >> 23) & 7;
  v8 = a2 & 0x1F;
  v9 = a2 >> 27;
  v10 = (unsigned __int16)a2 >> 11;
  v11 = a2 >> 17;
  if ( !(v7 | (a2 >> 21) & 3) )
  {
    if ( v9 )
    {
      *(_BYTE *)(a3 + 41) = 5;
      *(_BYTE *)(a3 + 45) = 2;
      *(_WORD *)(a3 + 24) = 199 - ((((a2 >> 17) & 8) == 0) - 1);
      *(_QWORD *)(a3 + 48) = v11 & 7;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 2;
      *(_WORD *)(a3 + 86) = v8;
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 2;
      *(_WORD *)(a3 + 126) = v10;
      *(_BYTE *)(a3 + 161) = 1;
      *(_BYTE *)(a3 + 165) = 2;
      *(_WORD *)(a3 + 166) = v9;
      goto LABEL_14;
    }
    if ( (v11 & 8) == 0 )
    {
      *(_BYTE *)(a3 + 41) = 5;
      *(_WORD *)(a3 + 24) = 201;
      *(_BYTE *)(a3 + 45) = 2;
      *(_QWORD *)(a3 + 48) = v11 & 7;
      goto LABEL_14;
    }
LABEL_7:
    if ( v4 != 3 )
    {
LABEL_8:
      v12 = *(_WORD *)(a3 + 24);
      goto LABEL_9;
    }
LABEL_111:
    if ( *(_WORD *)(a3 + 24) )
      goto LABEL_14;
    v16 = v11 & 0x3F;
    if ( v7 != 4 )
    {
      if ( (unsigned int)v7 <= 4 )
      {
        if ( v7 != 1 )
          goto LABEL_8;
        goto LABEL_115;
      }
LABEL_45:
      if ( v7 == 5 )
      {
        switch ( (int)v16 )
        {
          case 0:
          case 1:
          case 2:
            *(_BYTE *)(a3 + 41) = 1;
            v31 = v10 + 64;
            v12 = word_237A8[v16];
            *(_BYTE *)(a3 + 45) = 7;
            *(_WORD *)(a3 + 46) = v8 + 64;
            *(_WORD *)(a3 + 24) = v12;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 7;
            goto LABEL_89;
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
            v24 = 273;
            if ( (int)v16 >> 1 != 7 )
            {
              v24 = 276;
              if ( (int)v16 >> 1 != 8 )
                v24 = 270;
            }
            *(_WORD *)(a3 + 24) = v24;
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = (unsigned int)v8 | ((_BYTE)v16 << 6) & 0x40;
            goto LABEL_50;
          case 18:
            *(_WORD *)(a3 + 24) = 269;
            goto LABEL_98;
          case 19:
            *(_BYTE *)(a3 + 41) = 5;
            *(_WORD *)(a3 + 24) = 272;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = a2 & 0x1F;
            goto LABEL_50;
          case 20:
            *(_BYTE *)(a3 + 41) = 5;
            *(_WORD *)(a3 + 24) = 275;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = a2 & 0x1F;
            goto LABEL_50;
          case 21:
          case 22:
            v37 = word_237A0[2 * (_DWORD)v16 - 42 + ((a2 >> 4) & 1)];
            *(_WORD *)(a3 + 24) = v37;
            if ( !v37 )
              return 0;
LABEL_98:
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = a2 & 0xF;
            goto LABEL_50;
          case 23:
            *(_BYTE *)(a3 + 41) = 1;
            *(_WORD *)(a3 + 24) = 282;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = v8;
            goto LABEL_50;
          case 24:
          case 25:
            v33 = (a2 >> 14) & 2 | (4 * (a2 >> 31)) | (a2 >> 4) & 1;
            if ( (_DWORD)v16 == 24 )
            {
              v35 = 315;
              v36 = 7;
              v34 = (v33 | 0x18) + 64;
            }
            else
            {
              v34 = v33 | 8;
              v35 = 277;
              v36 = 0;
            }
            *(_BYTE *)(a3 + 45) = v36;
            *(_WORD *)(a3 + 24) = v35;
            *(_WORD *)(a3 + 86) = (a2 & 0xF) + 64;
            *(_WORD *)(a3 + 126) = ((a2 >> 11) & 0xF) + 64;
            *(_BYTE *)(a3 + 41) = 1;
            *(_WORD *)(a3 + 46) = v34;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 7;
            *(_BYTE *)(a3 + 121) = 1;
            *(_BYTE *)(a3 + 125) = 7;
            *(_BYTE *)(a3 + 161) = 1;
            *(_BYTE *)(a3 + 165) = 7;
            *(_WORD *)(a3 + 166) = (v9 & 0xF) + 64;
            goto LABEL_14;
          case 44:
            *(_BYTE *)(a3 + 41) = 1;
            *(_WORD *)(a3 + 24) = 316;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = v10;
            goto LABEL_14;
          case 45:
            v38 = a2;
            v39 = a2 >> 1;
            v40 = v38 & 1;
            *(_WORD *)(a3 + 24) = ((v39 & 0xD) == 12) + 289;
            switch ( v39 & 0xF )
            {
              case 0u:
                *(_BYTE *)(a3 + 41) = 5;
                *(_BYTE *)(a3 + 45) = 0;
                *(_QWORD *)(a3 + 48) = v40;
                goto LABEL_50;
              case 4u:
                *(_BYTE *)(a3 + 41) = 5;
                *(_BYTE *)(a3 + 45) = 0;
                *(_QWORD *)(a3 + 48) = v40;
                *(_BYTE *)(a3 + 81) = 1;
                *(_BYTE *)(a3 + 85) = 7;
                *(_WORD *)(a3 + 86) = v10 + 64;
                *(_BYTE *)(a3 + 121) = 1;
                *(_BYTE *)(a3 + 125) = 2;
                *(_WORD *)(a3 + 126) = v9;
                break;
              case 8u:
                *(_BYTE *)(a3 + 41) = 5;
                *(_BYTE *)(a3 + 45) = 0;
                *(_QWORD *)(a3 + 48) = v40;
                *(_BYTE *)(a3 + 81) = 1;
                *(_BYTE *)(a3 + 85) = 2;
                goto LABEL_51;
              case 0xCu:
                *(_BYTE *)(a3 + 41) = 1;
                *(_BYTE *)(a3 + 45) = 7;
                *(_WORD *)(a3 + 46) = v10 + 64;
                *(_BYTE *)(a3 + 81) = 1;
                goto LABEL_107;
              case 0xEu:
                *(_BYTE *)(a3 + 41) = 1;
                *(_BYTE *)(a3 + 45) = 2;
                *(_WORD *)(a3 + 46) = v10;
                *(_BYTE *)(a3 + 81) = 1;
                *(_BYTE *)(a3 + 85) = 7;
                *(_WORD *)(a3 + 86) = v9 + 64;
                break;
              default:
                goto LABEL_14;
            }
            goto LABEL_14;
          case 46:
          case 47:
            v32 = v16 & 1;
            if ( (((unsigned int)v8 >> 2) & 0xFFFFFFFD) == 4 )
            {
              if ( v32 )
              {
                v53 = a2 & 1;
                v54 = 287;
              }
              else
              {
                v53 = a2 & 3;
                v54 = 286;
              }
              *(_WORD *)(a3 + 24) = v54;
              *(_BYTE *)(a3 + 41) = 5;
              *(_BYTE *)(a3 + 45) = 0;
              *(_QWORD *)(a3 + 48) = v53;
              goto LABEL_50;
            }
            if ( (unsigned int)v8 >> 2 )
            {
              if ( *(_WORD *)(a3 + 24) )
                goto LABEL_50;
            }
            else if ( !v32 )
            {
              *(_WORD *)(a3 + 24) = 288;
              *(_BYTE *)(a3 + 41) = 5;
              *(_BYTE *)(a3 + 45) = 0;
              *(_QWORD *)(a3 + 48) = a2 & 3;
              goto LABEL_50;
            }
            if ( (a2 & 0x18) != 0 )
            {
              v12 = *(_WORD *)(a3 + 24);
            }
            else
            {
              v55 = dword_23780[a2 & 0x1F];
              *(_WORD *)(a3 + 24) = v55;
              v12 = v55;
            }
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 7;
            *(_WORD *)(a3 + 46) = v10 + 64;
            *(_BYTE *)(a3 + 81) = 1;
            goto LABEL_125;
          default:
            if ( (unsigned int)(v16 - 3) <= 8 )
            {
              v22 = word_23750[v16];
              *(_WORD *)(a3 + 24) = v22;
              if ( !v22 )
                return 0;
              *(_BYTE *)(a3 + 41) = 1;
              *(_BYTE *)(a3 + 45) = 0;
              *(_WORD *)(a3 + 46) = v8;
              goto LABEL_50;
            }
            if ( (unsigned int)(v16 - 48) <= 0xF )
            {
              sub_A7C0(&word_23700[5 * ((int)v16 >> 1) - 120], a3, a2, v16);
              v12 = *(_WORD *)(a3 + 24);
              goto LABEL_9;
            }
            if ( (unsigned int)(v16 - 32) > 3 )
              return 0;
            v50 = 4 * (v10 | ((unsigned __int8)(v16 & 1) << 6));
            if ( (v11 & 2) != 0 )
            {
              *(_QWORD *)(a3 + 96) = v50;
              v51 = 312;
              v52 = a3 + 40;
              *(_BYTE *)(a3 + 112) |= 2u;
              *(_BYTE *)(a3 + 81) = 4;
              *(_BYTE *)(a3 + 85) = 7;
              *(_WORD *)(a3 + 86) = v8;
            }
            else
            {
              *(_BYTE *)(a3 + 72) |= 2u;
              v51 = 300;
              *(_BYTE *)(a3 + 41) = 4;
              *(_BYTE *)(a3 + 45) = 7;
              *(_WORD *)(a3 + 46) = v8;
              *(_QWORD *)(a3 + 56) = v50;
              v52 = a3 + 80;
            }
            *(_WORD *)(a3 + 24) = v51;
            *(_BYTE *)(v52 + 1) = 1;
            *(_BYTE *)(v52 + 5) = 7;
            *(_WORD *)(v52 + 6) = v9 + 64;
            break;
        }
      }
      goto LABEL_8;
    }
LABEL_119:
    if ( (unsigned int)v16 > 0x39 )
    {
      if ( (_DWORD)v16 != 63 || (unsigned int)v8 > 8 )
        return 0;
      *(_BYTE *)(a3 + 41) = 1;
      v12 = word_23830[v8];
      *(_BYTE *)(a3 + 45) = 7;
      *(_WORD *)(a3 + 46) = v10 + 64;
      *(_WORD *)(a3 + 24) = v12;
      *(_BYTE *)(a3 + 81) = 1;
      if ( v12 == 383 )
      {
LABEL_107:
        *(_BYTE *)(a3 + 85) = 2;
        *(_WORD *)(a3 + 86) = v9;
        goto LABEL_14;
      }
LABEL_125:
      *(_BYTE *)(a3 + 85) = 7;
      *(_WORD *)(a3 + 86) = v9 + 64;
    }
    else
    {
      if ( (unsigned int)v16 > 0x37 )
      {
        *(_BYTE *)(a3 + 41) = 1;
        *(_BYTE *)(a3 + 45) = 7;
        *(_BYTE *)(a3 + 81) = 1;
        *(_WORD *)(a3 + 24) = ((_DWORD)v16 != 56) + 384;
        *(_BYTE *)(a3 + 85) = 7;
        *(_WORD *)(a3 + 86) = v8 + 64;
        *(_BYTE *)(a3 + 121) = 1;
        *(_BYTE *)(a3 + 125) = 7;
        *(_WORD *)(a3 + 126) = v10 + 64;
        *(_WORD *)(a3 + 46) = (a2 >> 4) & 1 | (4 * (a2 >> 31)) | (a2 >> 14) & 2 | 0x58;
        *(_BYTE *)(a3 + 161) = 1;
        *(_BYTE *)(a3 + 165) = 7;
        *(_WORD *)(a3 + 166) = v9 + 64;
        goto LABEL_14;
      }
      if ( (_DWORD)v16 == 55 )
        return 0;
      v46 = word_237C0[(int)v16];
      *(_WORD *)(a3 + 24) = v46;
      if ( v46 )
      {
        *(_BYTE *)(a3 + 41) = 1;
        *(_BYTE *)(a3 + 45) = 7;
        *(_WORD *)(a3 + 46) = v8 + 64;
LABEL_50:
        *(_BYTE *)(a3 + 81) = 1;
        LOWORD(v10) = v10 + 64;
        *(_BYTE *)(a3 + 85) = 7;
LABEL_51:
        *(_WORD *)(a3 + 86) = v10;
        *(_BYTE *)(a3 + 121) = 1;
        *(_BYTE *)(a3 + 125) = 7;
        *(_WORD *)(a3 + 126) = v9 + 64;
        goto LABEL_14;
      }
      v47 = v16 - 40;
      if ( v47 > 3 )
        return 0;
      v48 = v47;
      v31 = v10 + 64;
      v12 = word_237B0[2 * v47];
      v49 = word_237B0[2 * v48 + 1];
      if ( (a2 & 0x8000000) != 0 )
      {
        v9 = a2 >> 28;
        v12 = v49;
      }
      *(_WORD *)(a3 + 24) = v12;
      *(_BYTE *)(a3 + 41) = 1;
      *(_BYTE *)(a3 + 45) = 2;
      *(_WORD *)(a3 + 46) = v8;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 7;
LABEL_89:
      *(_WORD *)(a3 + 86) = v31;
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 7;
      *(_WORD *)(a3 + 126) = v9 + 64;
    }
LABEL_9:
    if ( v12 )
      goto LABEL_14;
    return 0;
  }
  if ( (_DWORD)v6 != 1 || v7 )
  {
    v14 = (a2 >> 17) & 0xF;
    if ( (_DWORD)v6 == 3 )
    {
      if ( !v7 )
      {
        switch ( v11 & 7 )
        {
          case 0u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 132;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 131;
            goto LABEL_153;
          case 1u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 150;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 149;
            goto LABEL_153;
          case 2u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 140;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 139;
            goto LABEL_153;
          case 3u:
          case 6u:
            goto LABEL_7;
          case 4u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 136;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 135;
            goto LABEL_153;
          case 5u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 138;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 137;
            goto LABEL_153;
          case 7u:
            if ( (v11 & 8) == 0 )
            {
              *(_WORD *)(a3 + 24) = 134;
              goto LABEL_76;
            }
            *(_WORD *)(a3 + 24) = 133;
LABEL_153:
            v30 = 4;
            break;
        }
        goto LABEL_77;
      }
      if ( (v11 & 0xC) == 0 && v7 == 1 )
      {
        if ( v4 == 3 )
          goto LABEL_111;
        v56 = 0xDD00DC00DB00DALL;
        v15 = *((_WORD *)&v56 + (v11 & 0xF));
        *(_WORD *)(a3 + 24) = v15;
        if ( !v15 )
        {
          LODWORD(v16) = (a2 >> 17) & 0x3F;
          if ( *(_DWORD *)(a1 + 188) == 3 )
            goto LABEL_111;
          goto LABEL_23;
        }
LABEL_76:
        v30 = 3;
LABEL_77:
        *(_BYTE *)(a3 + 41) = 1;
        *(_BYTE *)(a3 + 45) = v30;
        *(_WORD *)(a3 + 46) = v8;
        *(_BYTE *)(a3 + 81) = 1;
        *(_BYTE *)(a3 + 85) = v30;
        *(_WORD *)(a3 + 86) = v10;
        *(_BYTE *)(a3 + 121) = 1;
        *(_BYTE *)(a3 + 125) = v30;
        *(_WORD *)(a3 + 126) = v9;
        goto LABEL_14;
      }
    }
    else if ( (_DWORD)v6 == 2 && !v7 )
    {
      switch ( v11 & 0xF )
      {
        case 0u:
          if ( (unsigned int)v8 <= 0x14 )
          {
            v27 = dword_23AC0[a2 & 0x1F];
            v19 = 2;
            *(_WORD *)(a3 + 24) = v27;
            v20 = v27;
            v21 = 3;
LABEL_40:
            if ( !v20 )
            {
              v4 = *(_DWORD *)(a1 + 188);
              goto LABEL_42;
            }
            goto LABEL_56;
          }
          if ( v4 == 3 )
            goto LABEL_130;
          v16 = v11 & 0x3F;
          goto LABEL_44;
        case 1u:
          if ( (unsigned int)v8 > 0x11 )
            goto LABEL_42;
          v57 = 50530050;
          v26 = dword_23A60[a2 & 0x1F];
          v19 = 3;
          *(_WORD *)(a3 + 24) = v26;
          v20 = v26;
          v21 = *((_BYTE *)&v57 + (a2 & 3));
          goto LABEL_40;
        case 2u:
          if ( (unsigned int)v8 > 0x14 )
            goto LABEL_42;
          v25 = dword_23A00[a2 & 0x1F];
          v19 = 7;
          *(_WORD *)(a3 + 24) = v25;
          v20 = v25;
          v21 = 3;
          goto LABEL_40;
        case 3u:
        case 5u:
        case 6u:
        case 0xBu:
        case 0xDu:
        case 0xEu:
          goto LABEL_42;
        case 4u:
        case 0xCu:
          if ( (a2 & 0x1F) != 0 )
          {
            if ( (_DWORD)v8 != 1 )
              goto LABEL_42;
            if ( v14 == 4 )
            {
              v23 = 142;
              v21 = 3;
            }
            else
            {
              v23 = 141;
              v21 = 4;
            }
          }
          else if ( v14 == 4 )
          {
            v23 = 130;
            v21 = 3;
          }
          else
          {
            v23 = 129;
            v21 = 4;
          }
          goto LABEL_55;
        case 7u:
        case 0xFu:
          if ( (a2 & 0x1F) != 0 )
          {
            if ( (_DWORD)v8 == 1 )
            {
              if ( v14 == 7 )
              {
                v23 = 144;
                v21 = 3;
              }
              else
              {
                v23 = 143;
                v21 = 4;
              }
            }
            else
            {
              if ( (_DWORD)v8 != 2 )
                goto LABEL_42;
              if ( v14 == 7 )
              {
                v23 = 146;
                v21 = 3;
              }
              else
              {
                v23 = 145;
                v21 = 4;
              }
            }
          }
          else if ( v14 == 7 )
          {
            v23 = 148;
            v21 = 3;
          }
          else
          {
            v23 = 147;
            v21 = 4;
          }
LABEL_55:
          *(_WORD *)(a3 + 24) = v23;
          v19 = v21;
LABEL_56:
          *(_BYTE *)(a3 + 41) = 1;
          *(_BYTE *)(a3 + 45) = v21;
          *(_WORD *)(a3 + 46) = v10;
          *(_BYTE *)(a3 + 81) = 1;
          *(_BYTE *)(a3 + 85) = v19;
          *(_WORD *)(a3 + 86) = v9;
          break;
        case 8u:
          if ( (unsigned int)v8 > 0x14 )
            goto LABEL_42;
          v29 = dword_239A0[a2 & 0x1F];
          v19 = 2;
          *(_WORD *)(a3 + 24) = v29;
          v20 = v29;
          v21 = 4;
          goto LABEL_40;
        case 9u:
          if ( (unsigned int)v8 > 0x11 )
            goto LABEL_42;
          v57 = 67307266;
          v28 = dword_23940[a2 & 0x1F];
          *(_WORD *)(a3 + 24) = v28;
          v20 = v28;
          v21 = *((_BYTE *)&v57 + (a2 & 3));
          v19 = ((_DWORD)v8 != 3) + 3;
          goto LABEL_40;
        case 0xAu:
          if ( (unsigned int)v8 > 0x14 )
            goto LABEL_42;
          v18 = dword_238E0[a2 & 0x1F];
          v19 = 7;
          *(_WORD *)(a3 + 24) = v18;
          v20 = v18;
          v21 = 4;
          goto LABEL_40;
      }
      goto LABEL_14;
    }
LABEL_42:
    if ( v4 == 3 )
    {
LABEL_130:
      if ( v7 >> 1 != 1 )
        goto LABEL_111;
      *(_BYTE *)(a3 + 41) = 1;
      v45 = word_238D8[v6];
      *(_BYTE *)(a3 + 45) = 3;
      *(_WORD *)(a3 + 46) = v8;
      *(_WORD *)(a3 + 24) = v45;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 3;
      *(_WORD *)(a3 + 86) = v10;
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 3;
      *(_WORD *)(a3 + 126) = v9;
      *(_BYTE *)(a3 + 161) = 1;
      *(_BYTE *)(a3 + 165) = 3;
      *(_WORD *)(a3 + 166) = (2 * v14) | (a2 >> 23) & 1;
      if ( v45 )
        goto LABEL_14;
      LODWORD(v16) = (a2 >> 17) & 0x3F;
LABEL_24:
      if ( v7 != 3 )
        goto LABEL_8;
      if ( *(int *)(a1 + 188) <= 3 )
        return 0;
      if ( (_DWORD)v16 == 16 )
      {
        if ( (_DWORD)v8 == 30 )
        {
          *(_WORD *)(a3 + 24) = 386;
        }
        else
        {
          if ( (_DWORD)v8 == 31 )
          {
            *(_BYTE *)(a3 + 41) = 5;
            *(_WORD *)(a3 + 24) = 398;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = v9;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 8;
            *(_WORD *)(a3 + 86) = v10 + 96;
            goto LABEL_14;
          }
          if ( (unsigned int)v8 > 0x14 || (v17 = word_238A0[a2 & 0x1F], (*(_WORD *)(a3 + 24) = v17) == 0) )
          {
            if ( (a2 & 0x1C) != 0x18 )
              goto LABEL_8;
            *(_WORD *)(a3 + 24) = 387;
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = a2 & 3;
LABEL_33:
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 8;
            *(_WORD *)(a3 + 86) = v10 + 96;
            *(_BYTE *)(a3 + 121) = 1;
            *(_BYTE *)(a3 + 125) = 8;
            *(_WORD *)(a3 + 126) = v9 + 96;
            goto LABEL_14;
          }
        }
        *(_BYTE *)(a3 + 41) = 1;
        *(_BYTE *)(a3 + 45) = 8;
        *(_WORD *)(a3 + 46) = v10 + 96;
        *(_BYTE *)(a3 + 81) = 1;
        *(_BYTE *)(a3 + 85) = 8;
        *(_WORD *)(a3 + 86) = v9 + 96;
        goto LABEL_14;
      }
      v43 = (unsigned int)(v16 - 18);
      if ( (unsigned int)v43 > 0x1D || (v44 = word_23860[v43], (*(_WORD *)(a3 + 24) = v44) == 0) )
      {
        if ( (v11 & 0x30) == 0 )
        {
          *(_WORD *)(a3 + 24) = 444;
          *(_BYTE *)(a3 + 41) = 10;
          *(_BYTE *)(a3 + 45) = 7;
          *(_QWORD *)(a3 + 48) = v11 & 0xF;
          *(_BYTE *)(a3 + 81) = 1;
          *(_BYTE *)(a3 + 85) = 8;
          *(_WORD *)(a3 + 86) = v8 + 96;
          *(_BYTE *)(a3 + 121) = 1;
          *(_BYTE *)(a3 + 125) = 8;
          *(_WORD *)(a3 + 126) = v10 + 96;
          *(_BYTE *)(a3 + 161) = 1;
          *(_BYTE *)(a3 + 165) = 8;
          *(_WORD *)(a3 + 166) = v9 + 96;
          goto LABEL_14;
        }
        goto LABEL_8;
      }
LABEL_118:
      *(_BYTE *)(a3 + 41) = 1;
      *(_BYTE *)(a3 + 45) = 8;
      *(_WORD *)(a3 + 46) = v8 + 96;
      goto LABEL_33;
    }
    v16 = v11 & 0x3F;
    if ( v7 == 4 )
      goto LABEL_119;
LABEL_44:
    if ( (unsigned int)v7 > 4 )
      goto LABEL_45;
LABEL_23:
    if ( v7 == 1 )
    {
LABEL_115:
      if ( *(int *)(a1 + 188) <= 3 )
        return 0;
      v41 = (unsigned int)(v16 - 32);
      if ( (unsigned int)v41 > 3 )
        return 0;
      v42 = word_238D0[v41];
      *(_WORD *)(a3 + 24) = v42;
      if ( !v42 )
        return 0;
      goto LABEL_118;
    }
    goto LABEL_24;
  }
  if ( v9 > 0xF )
    goto LABEL_7;
  *(_BYTE *)(a3 + 41) = 10;
  *(_BYTE *)(a3 + 45) = 7;
  *(_BYTE *)(a3 + 81) = 1;
  *(_WORD *)(a3 + 24) = ((v11 & 8) != 0) + 197;
  *(_QWORD *)(a3 + 48) = v9;
  *(_BYTE *)(a3 + 85) = 2;
  *(_WORD *)(a3 + 86) = v10;
  *(_BYTE *)(a3 + 121) = 1;
  *(_BYTE *)(a3 + 125) = 2;
  *(_WORD *)(a3 + 126) = v8;
  *(_BYTE *)(a3 + 161) = 5;
  *(_BYTE *)(a3 + 165) = 2;
  *(_QWORD *)(a3 + 168) = v11 & 7;
LABEL_14:
  *(_DWORD *)(a3 + 28) |= 0x10u;
  return 1;
}

