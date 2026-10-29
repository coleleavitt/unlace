__int64 __fastcall sub_9280(__int64 a1, __int64 a2)
{
  unsigned __int16 next_word; // ax
  int v6; // ebp
  int v7; // r13d
  int v8; // eax
  unsigned int v9; // eax
  char v10; // bp
  unsigned __int32 v11; // esi
  char v12; // dl
  char v13; // r8
  unsigned int v14; // eax
  int v15; // ecx
  unsigned __int16 v16; // dx
  unsigned __int8 v17; // bp
  __int16 v18; // di
  unsigned __int8 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int32 v23; // r9d
  int v24; // edi
  unsigned __int32 v25; // r11d
  int v26; // r10d
  __int64 v27; // kr08_8
  __int16 v28; // ax
  unsigned int v29; // eax
  unsigned __int8 v30; // al
  __int64 v31; // kr20_8
  __int64 v32; // kr28_8
  unsigned __int32 v33; // edi
  __int64 v34; // rax
  unsigned int v35; // edi
  int v36; // edx
  char v37; // di
  __int64 v38; // rax
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // edx
  __int64 v43; // rdi
  int v44; // edx
  unsigned int v45; // edx
  __int64 v46; // rdx
  signed int v47; // eax
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  unsigned int v53; // edi
  __int16 v54; // si
  __int64 v55; // rax
  __int64 sreg; // rax
  int v57; // r14d
  unsigned __int64 v58; // r15
  int v59; // eax
  unsigned __int16 v60; // ax
  __int16 v61; // dx
  __int16 v62; // ax
  __int16 v63; // ax
  unsigned __int16 v64; // dx
  __int64 v65; // rax
  int v66; // eax
  unsigned __int8 v67; // al
  __int64 v68; // rax
  char v69; // r10
  unsigned __int8 v70; // al
  __int64 v71; // rax
  __int16 v72; // ax
  __int16 v73; // ax
  __int64 v74; // rax
  __int16 v75; // ax
  unsigned __int8 v76; // r8
  unsigned __int8 v77; // al
  __int64 v78; // rax
  unsigned int v79; // eax
  __int16 v80; // ax
  __int16 v81; // ax
  __int64 v82; // rax
  __int16 v83; // di
  __int16 v84; // ax
  unsigned __int8 v85; // r11
  int v86; // eax
  __int16 v87; // ax
  signed int v88; // eax
  int v89; // edx
  int v90; // edx
  __int64 v91; // rdx
  __int64 v92; // rdx
  int v93; // edx
  unsigned __int8 v94; // r11
  __int16 v95; // ax
  __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rax
  __int16 v99; // ax
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rdx
  unsigned __int16 word; // [rsp+Ch] [rbp-5Ch]
  _QWORD v104[11]; // [rsp+10h] [rbp-58h] BYREF

  v104[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    return 0;
  next_word = insn_get_next_word(a2);
  v6 = next_word;
  v7 = next_word;
  LOWORD(v7) = next_word & 0x80;
  if ( (next_word & 0x80) == 0 )
  {
    v8 = insn_get_next_word(a2);
    *(_WORD *)(a2 + 26) = 4;
    v9 = v6 | (v8 << 16);
    v10 = 0;
    v11 = _byteswap_ulong(v9);
    if ( v9 == 150995008 )
    {
      *(_BYTE *)(a2 + 33) = 0;
      v20 = 0;
      v21 = 191;
      *(_WORD *)(a2 + 24) = 191;
      *(_DWORD *)(a2 + 28) = 0;
      v22 = (v11 >> 20) & 0x1F;
      goto LABEL_17;
    }
LABEL_10:
    if ( v9 != 544735306 )
    {
      if ( (unsigned __int8)v9 > 0x71u )
      {
LABEL_38:
        *(_DWORD *)(a2 + 28) = 0;
        *(_WORD *)(a2 + 24) = 0;
        if ( v10 )
          goto LABEL_455;
        goto LABEL_39;
      }
      switch ( (unsigned __int8)v9 >> 1 )
      {
        case 0:
          v20 = 0;
          v21 = 1;
          goto LABEL_105;
        case 1:
          v20 = 0;
          v21 = 3;
          goto LABEL_105;
        case 2:
          v20 = 0;
          v21 = 5;
          goto LABEL_105;
        case 3:
        case 7:
        case 11:
        case 15:
        case 18:
        case 22:
        case 48:
        case 49:
        case 52:
        case 54:
        case 55:
          goto LABEL_38;
        case 4:
          v20 = 1;
          v21 = 1;
          goto LABEL_105;
        case 5:
          v20 = 1;
          v21 = 3;
          goto LABEL_105;
        case 6:
          v20 = 1;
          v21 = 5;
          goto LABEL_105;
        case 8:
          v20 = 0;
          v21 = 9;
          goto LABEL_105;
        case 9:
          v20 = 0;
          v21 = 11;
          goto LABEL_105;
        case 10:
          v20 = 0;
          v21 = 13;
          goto LABEL_105;
        case 12:
          v20 = 1;
          v21 = 9;
          goto LABEL_105;
        case 13:
          v20 = 1;
          v21 = 11;
          goto LABEL_105;
        case 14:
          v20 = 1;
          v21 = 13;
          goto LABEL_105;
        case 16:
          v20 = 0;
          v21 = 17;
          goto LABEL_105;
        case 17:
          v20 = 0;
          v21 = 19;
          goto LABEL_105;
        case 19:
          v21 = 21;
          v20 = 35 - (unsigned int)((v11 & 0x1000000) == 0);
          goto LABEL_105;
        case 20:
          v20 = 1;
          v21 = 17;
          goto LABEL_105;
        case 21:
          v20 = 1;
          v21 = 19;
          goto LABEL_105;
        case 23:
          v20 = 5;
          v21 = (v11 & 0x80000) == 0 ? 1 : 17;
          goto LABEL_105;
        case 24:
          v50 = v11 & 0x6000;
          v20 = (v11 >> 12) & 1;
          v21 = v50 == 0 ? 0x1A : 0;
          LOWORD(v21) = v50 == 0 ? 211 : 185;
          goto LABEL_105;
        case 25:
          v49 = v11 & 0x6000;
          v20 = (v11 >> 12) & 1;
          v21 = v49 == 0 ? 0x1B : 0;
          LOWORD(v21) = v49 == 0 ? 213 : 186;
          goto LABEL_105;
        case 26:
          v48 = v11 & 0x6000;
          v20 = (v11 >> 12) & 1;
          v21 = v48 == 0 ? 0x3C : 0;
          LOWORD(v21) = v48 == 0 ? 243 : 183;
          goto LABEL_63;
        case 27:
          v40 = v11 & 0x6000;
          v20 = (v11 >> 12) & 1;
          v21 = v40 == 0 ? 0x3D : 0;
          LOWORD(v21) = v40 == 0 ? 245 : 184;
          goto LABEL_63;
        case 28:
          if ( v9 > 0x2AFFFFFF )
            goto LABEL_38;
          switch ( HIBYTE(v9) )
          {
            case 0u:
              v20 = 0;
              v21 = 2;
              goto LABEL_63;
            case 1u:
              *(_WORD *)(a2 + 24) = 4;
              if ( v10 )
              {
                v37 = 0;
                v21 = 4;
LABEL_78:
                *(_BYTE *)(a2 + 33) = v37;
                *(_DWORD *)(a2 + 28) = (v7 << 22) | 0x80000000;
                v22 = (v11 >> 20) & 0x1F;
                if ( v37 != 5 )
                {
                  v10 = 1;
                  v20 = 0;
                  v23 = v11 >> 10;
                  v24 = (v11 >> 15) & 0x1F;
                  v25 = v11 >> 10;
                  v26 = (v11 >> 10) & 0x1F;
LABEL_67:
                  if ( (unsigned __int16)v21 <= 0x2Du )
                  {
                    v31 = v21;
                    if ( (unsigned __int16)v21 > 0x18u )
                    {
                      v34 = 1LL << v21;
                      v21 = 0x157F80000000LL;
                      if ( (v34 & 0x157F80000000LL) == 0 )
                      {
                        if ( (v34 & 0x7E000000) == 0 )
                        {
                          v21 = 0x2A8000000000LL;
                          if ( (v34 & 0x2A8000000000LL) == 0 )
                            goto LABEL_20;
                          goto LABEL_72;
                        }
                        v22 = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 81) = 3;
                        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                        *(_BYTE *)(a2 + 121) = 1;
                        *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
                        *(_BYTE *)(a2 + 161) = 5;
                        *(_QWORD *)(a2 + 168) = (v11 >> 6) & 0xF;
LABEL_20:
                        if ( v10 )
                          goto LABEL_21;
LABEL_35:
                        v28 = *(_WORD *)(a1 + 168);
                        if ( (v28 & 4) == 0 )
                          goto LABEL_22;
                        v104[1] = 0;
                        v104[0] = off_26F98;
                        v104[2] = a1;
                        v30 = getinf_flag(11, 4, v22, v21, v20);
                        if ( !(unsigned __int8)construct_macro(v104, a2, v30) )
                        {
LABEL_21:
                          v28 = *(_WORD *)(a1 + 168);
LABEL_22:
                          if ( (v28 & 8) != 0 && *(_BYTE *)(a2 + 33) == 5 )
                            sub_91E0(a2);
                        }
                        return *(unsigned __int16 *)(a2 + 26);
                      }
LABEL_42:
                      v22 = (unsigned __int8)v22;
                      *(_BYTE *)(a2 + 41) = 1;
                      *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
LABEL_43:
                      *(_BYTE *)(a2 + 81) = 1;
                      *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                      *(_BYTE *)(a2 + 121) = 1;
                      *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
                      goto LABEL_20;
                    }
LABEL_41:
                    v32 = v21;
                    v21 = (unsigned __int16)v21;
                    switch ( v31 )
                    {
                      case 0LL:
                      case 22LL:
                        goto LABEL_20;
                      case 1LL:
                      case 9LL:
                      case 17LL:
                        v21 = v11;
                        v74 = v11;
                        v22 = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 41) = 1;
                        LOWORD(v21) = v11 & 0x7FFF;
                        LOWORD(v74) = v11 | 0x8000;
                        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                        if ( (v11 & 0x4000) == 0 )
                          v74 = (unsigned int)v21;
                        if ( (_BYTE)v20 == 1 )
                        {
                          *(_BYTE *)(a2 + 81) = 3;
                          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                          *(_BYTE *)(a2 + 121) = 5;
                          *(_QWORD *)(a2 + 128) = (__int16)v74;
                        }
                        else
                        {
                          LODWORD(v74) = (__int16)v74;
                          *(_BYTE *)(a2 + 81) = 4;
                          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                          *(_QWORD *)(a2 + 96) = v74;
                          *(_BYTE *)(a2 + 85) = 0;
                        }
                        goto LABEL_20;
                      case 2LL:
                      case 4LL:
                      case 6LL:
                      case 10LL:
                      case 12LL:
                      case 14LL:
                      case 18LL:
                      case 20LL:
                        v22 = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                        goto LABEL_196;
                      case 3LL:
                      case 11LL:
                      case 19LL:
                        v21 = v11;
                        v22 = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 41) = 1;
                        LOWORD(v21) = v11 & 0x7FFF;
                        v73 = v11 | 0x8000;
                        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                        if ( (v11 & 0x4000) == 0 )
                          v73 = v11 & 0x7FFF;
                        if ( (_BYTE)v20 == 1 )
                        {
                          *(_BYTE *)(a2 + 81) = 3;
                          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                          *(_BYTE *)(a2 + 121) = 5;
                          *(_QWORD *)(a2 + 128) = 2 * v73;
                        }
                        else
                        {
                          *(_BYTE *)(a2 + 81) = 4;
                          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                          *(_QWORD *)(a2 + 96) = (unsigned int)(2 * v73);
                          *(_BYTE *)(a2 + 85) = 0;
                        }
                        goto LABEL_20;
                      case 5LL:
                      case 13LL:
                        v21 = v11;
                        *(_BYTE *)(a2 + 41) = 1;
                        LOWORD(v21) = v11 & 0x7FFF;
                        v75 = v11 | 0x8000;
                        if ( (v11 & 0x4000) == 0 )
                          v75 = v11 & 0x7FFF;
                        goto LABEL_273;
                      case 7LL:
                      case 8LL:
                      case 15LL:
                      case 16LL:
                      case 23LL:
                      case 24LL:
                        v22 = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 81) = 3;
                        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                        *(_QWORD *)(a2 + 88) = (unsigned __int8)v26;
                        *(_BYTE *)(a2 + 112) = 1;
                        *(_BYTE *)(a2 + 113) = BYTE1(v11) & 3;
                        goto LABEL_20;
                      case 21LL:
                        v22 = (unsigned __int8)v22;
                        v87 = v11 | 0x8000;
                        *(_BYTE *)(a2 + 41) = 5;
                        if ( (v11 & 0x4000) == 0 )
                          v87 = v11 & 0x7FFF;
                        *(_QWORD *)(a2 + 48) = (unsigned __int8)v22;
                        *(_BYTE *)(a2 + 81) = 4;
                        v21 = (unsigned int)((_BYTE)v20 == 35) + 2;
                        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                        *(_BYTE *)(a2 + 85) = 0;
                        *(_QWORD *)(a2 + 96) = (unsigned int)(v87 << (((_BYTE)v20 == 35) + 2));
                        goto LABEL_20;
                      default:
                        v21 = v32;
                        goto LABEL_35;
                    }
                  }
                  goto LABEL_18;
                }
                v38 = 1LL << v21;
                if ( (unsigned __int16)v21 <= 0x13u )
                {
LABEL_80:
                  if ( (v38 & 0x80808) != 0 )
                  {
                    *(_BYTE *)(a2 + 41) = 1;
                    v97 = v11 | 0xFFFC0000;
                    *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                    if ( (v11 & 0x20000) == 0 )
                      v97 = v11 & 0x3FFFF;
                    *(_BYTE *)(a2 + 81) = 4;
                    *(_WORD *)(a2 + 86) = 29;
                    *(_BYTE *)(a2 + 85) = 0;
                    *(_QWORD *)(a2 + 96) = 2 * v97;
                    return *(unsigned __int16 *)(a2 + 26);
                  }
                  if ( (v38 & 0x2020) != 0 )
                  {
                    *(_BYTE *)(a2 + 41) = 1;
                    v39 = v11 | 0xFFFE0000;
                    *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                    if ( (v11 & 0x10000) == 0 )
                      v39 = v11 & 0x1FFFF;
                    *(_BYTE *)(a2 + 81) = 4;
                    *(_WORD *)(a2 + 86) = 29;
                    *(_BYTE *)(a2 + 85) = 0;
                    *(_QWORD *)(a2 + 96) = 4 * v39;
                    return *(unsigned __int16 *)(a2 + 26);
                  }
                }
                return 0;
              }
              *(_BYTE *)(a2 + 33) = 0;
              v20 = 0;
              *(_DWORD *)(a2 + 28) = 0;
              v21 = 4;
              v22 = (v11 >> 20) & 0x1F;
              break;
            case 2u:
              v20 = 0;
              v21 = 6;
              goto LABEL_63;
            case 3u:
            case 7u:
            case 0xBu:
            case 0xFu:
            case 0x12u:
            case 0x16u:
            case 0x17u:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x1Fu:
            case 0x21u:
            case 0x23u:
            case 0x24u:
            case 0x25u:
            case 0x26u:
            case 0x27u:
            case 0x29u:
              goto LABEL_38;
            case 4u:
              v20 = 1;
              v21 = 2;
              goto LABEL_63;
            case 5u:
              v20 = 1;
              v21 = 4;
              goto LABEL_63;
            case 6u:
              v20 = 1;
              v21 = 6;
              goto LABEL_63;
            case 8u:
              v20 = 0;
              v21 = 10;
              goto LABEL_63;
            case 9u:
              v20 = 0;
              v21 = 12;
              goto LABEL_63;
            case 0xAu:
              v20 = 0;
              v21 = 14;
              goto LABEL_63;
            case 0xCu:
              v20 = 1;
              v21 = 10;
              goto LABEL_63;
            case 0xDu:
              v20 = 1;
              v21 = 12;
              goto LABEL_63;
            case 0xEu:
              v20 = 1;
              v21 = 14;
              goto LABEL_63;
            case 0x10u:
              v20 = 0;
              v21 = 18;
              goto LABEL_63;
            case 0x11u:
              v20 = 0;
              v21 = 20;
              goto LABEL_63;
            case 0x13u:
              v20 = 0;
              v21 = 22;
              goto LABEL_63;
            case 0x14u:
              v20 = 1;
              v21 = 18;
              goto LABEL_63;
            case 0x15u:
              v20 = 1;
              v21 = 20;
              goto LABEL_63;
            case 0x18u:
              v20 = 0;
              v21 = 23;
              goto LABEL_63;
            case 0x19u:
              v20 = 0;
              v21 = 24;
              goto LABEL_63;
            case 0x20u:
              v20 = 0;
              v21 = 8;
              goto LABEL_63;
            case 0x22u:
              v20 = 0;
              v21 = 7;
              goto LABEL_63;
            case 0x28u:
              v20 = 0;
              v21 = 16;
              goto LABEL_63;
            case 0x2Au:
              v20 = 0;
              v21 = 15;
              goto LABEL_63;
          }
          goto LABEL_66;
        case 29:
          v51 = (v11 >> 5) & 1;
          v52 = (v11 >> 2) & 7;
          if ( (v9 & 0x2000000) != 0 )
          {
            v21 = (unsigned int)(v51 + 29);
            v20 = (unsigned int)(v52 + 14);
          }
          else
          {
            v53 = v51 + 25;
            v20 = (unsigned int)(v52 + 6);
            v21 = (unsigned int)(v51 + 27);
            if ( (HIBYTE(v9) & 3) != 1 )
              v21 = v53;
          }
          goto LABEL_63;
        case 30:
          v35 = 11;
          v36 = (v11 >> 18) & 3;
          if ( v36 != 2 )
          {
            if ( v36 == 3 )
            {
              v35 = 5;
              if ( (v11 & 0x20000) != 0 )
                v35 = 13;
            }
            else
            {
              v35 = 19;
              if ( v36 != 1 )
                v35 = 3;
            }
          }
          *(_WORD *)(a2 + 24) = v35;
          v21 = v35;
          v37 = 5;
          if ( v10 )
            goto LABEL_78;
          goto LABEL_542;
        case 31:
          LODWORD(v21) = (v11 & 0x80000) == 0 ? 9 : 114;
          *(_WORD *)(a2 + 24) = (v11 & 0x80000) == 0 ? 9 : 114;
          if ( v10 )
          {
            *(_BYTE *)(a2 + 33) = 5;
            *(_DWORD *)(a2 + 28) = (v7 << 22) | 0x80000000;
            LODWORD(v22) = (v11 >> 20) & 0x1F;
            if ( (unsigned __int16)v21 <= 0x13u )
              goto LABEL_109;
          }
          else
          {
LABEL_542:
            *(_BYTE *)(a2 + 33) = 5;
            *(_DWORD *)(a2 + 28) = 0;
            LODWORD(v22) = (v11 >> 20) & 0x1F;
            if ( (unsigned __int16)v21 <= 0x13u )
              goto LABEL_108;
          }
          *(_BYTE *)(a2 + 41) = 1;
          v47 = v11 | 0xFFF80000;
          *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
          if ( (v11 & 0x40000) == 0 )
            v47 = v11 & 0x7FFFF;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = v47;
          return *(unsigned __int16 *)(a2 + 26);
        case 32:
          v45 = HIBYTE(v9) & 0x1F;
          if ( (v11 & 0x3E0) != 0 )
          {
            v21 = v45 + 488;
            if ( v45 <= 4 )
              goto LABEL_94;
            v46 = v45 - 1;
            goto LABEL_123;
          }
          v46 = v45 - 1;
          v21 = 31;
          if ( (unsigned int)v46 <= 0x1E )
LABEL_123:
            v21 = dword_1F1A0[v46];
LABEL_94:
          v20 = 0;
LABEL_63:
          *(_WORD *)(a2 + 24) = v21;
          if ( v10 )
          {
            *(_BYTE *)(a2 + 33) = v20;
            *(_DWORD *)(a2 + 28) = (v7 << 22) | 0x80000000;
          }
          else
          {
            *(_DWORD *)(a2 + 28) = 0;
            *(_BYTE *)(a2 + 33) = v20;
          }
          v22 = (v11 >> 20) & 0x1F;
          goto LABEL_66;
        case 33:
          v44 = HIBYTE(v9) & 0x3F;
          switch ( (v11 >> 6) & 0xF )
          {
            case 0u:
              switch ( HIBYTE(v9) & 0x3F )
              {
                case 0:
                  v20 = 0;
                  v21 = 305;
                  break;
                case 1:
                  v20 = 0;
                  v21 = 306;
                  break;
                case 2:
                  v20 = 0;
                  v21 = 289;
                  break;
                case 3:
                  v20 = 0;
                  v21 = 307;
                  break;
                case 4:
                  v20 = 0;
                  v21 = 285;
                  break;
                case 5:
                  v20 = 0;
                  v21 = 286;
                  break;
                case 6:
                  v20 = 0;
                  v21 = 287;
                  break;
                case 7:
                  v20 = 0;
                  v21 = 288;
                  break;
                case 8:
                  v20 = 0;
                  v21 = 291;
                  break;
                case 9:
                  v20 = 0;
                  v21 = 290;
                  break;
                case 0xA:
                  v20 = 0;
                  v21 = 292;
                  break;
                case 0xB:
                  v20 = 0;
                  v21 = 293;
                  break;
                case 0xC:
                  v20 = 0;
                  v21 = 280;
                  break;
                case 0xD:
                  v20 = 0;
                  v21 = 281;
                  break;
                case 0xE:
                  v20 = 0;
                  v21 = 273;
                  break;
                case 0xF:
                  v20 = 0;
                  v21 = 275;
                  break;
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x15:
                case 0x16:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                case 0x22:
                case 0x23:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x36:
                case 0x37:
                  v20 = 0;
                  v21 = 0;
                  break;
                case 0x14:
                  v20 = 0;
                  v21 = 312;
                  break;
                case 0x17:
                  v20 = 0;
                  v21 = 276;
                  break;
                case 0x18:
                  v20 = 0;
                  v21 = 294;
                  break;
                case 0x19:
                  v20 = 0;
                  v21 = 295;
                  break;
                case 0x1A:
                  v20 = 0;
                  v21 = 297;
                  break;
                case 0x1B:
                  v20 = 41;
                  v21 = 297;
                  break;
                case 0x20:
                  v20 = 0;
                  v21 = 70;
                  break;
                case 0x21:
                  v20 = 0;
                  v21 = 71;
                  break;
                case 0x24:
                  v20 = 0;
                  v21 = 58;
                  break;
                case 0x28:
                  v20 = 0;
                  v21 = 60;
                  break;
                case 0x29:
                  v20 = 0;
                  v21 = 61;
                  break;
                case 0x2A:
                  v20 = 0;
                  v21 = 64;
                  break;
                case 0x2B:
                  v20 = 0;
                  v21 = 63;
                  break;
                case 0x2C:
                  v20 = 0;
                  v21 = 67;
                  break;
                case 0x2D:
                  v20 = 0;
                  v21 = 66;
                  break;
                case 0x2E:
                  v20 = 0;
                  v21 = 79;
                  break;
                case 0x2F:
                  v20 = 0;
                  v21 = 77;
                  break;
                case 0x30:
                  v20 = 0;
                  v21 = 310;
                  break;
                case 0x31:
                  v20 = 0;
                  v21 = 59;
                  break;
                case 0x32:
                  v20 = 0;
                  v21 = 345;
                  break;
                case 0x33:
                  v20 = 0;
                  v21 = 62;
                  break;
                case 0x34:
                  v20 = 0;
                  v21 = 311;
                  break;
                case 0x35:
                  v20 = 0;
                  v21 = 65;
                  break;
                case 0x38:
                  v20 = 0;
                  v21 = 346;
                  break;
                case 0x39:
                  v20 = 0;
                  v21 = 348;
                  break;
                case 0x3A:
                  v20 = 0;
                  v21 = 350;
                  break;
                case 0x3B:
                  v20 = 0;
                  v21 = 352;
                  break;
                case 0x3C:
                  v20 = 0;
                  v21 = 347;
                  break;
                case 0x3D:
                  v20 = 0;
                  v21 = 349;
                  break;
                case 0x3E:
                  v20 = 0;
                  v21 = 351;
                  break;
                case 0x3F:
                  v20 = 0;
                  v21 = 353;
                  break;
              }
              break;
            case 1u:
              v20 = 0;
              switch ( HIBYTE(v9) & 0x3F )
              {
                case 0:
                  v21 = 328;
                  break;
                case 1:
                  v21 = 330;
                  break;
                case 2:
                  v21 = 329;
                  break;
                case 3:
                  v21 = 331;
                  break;
                case 4:
                  v21 = 332;
                  break;
                case 5:
                  v21 = 334;
                  break;
                case 6:
                  v21 = 333;
                  break;
                case 7:
                  v21 = 335;
                  break;
                case 8:
                  v21 = 354;
                  break;
                case 9:
                  v21 = 355;
                  break;
                case 0xA:
                  v21 = 356;
                  break;
                case 0xB:
                  v21 = 357;
                  break;
                case 0xE:
                  v21 = 274;
                  break;
                case 0xF:
                  v21 = 277;
                  break;
                case 0x10:
                  v21 = 358;
                  break;
                case 0x11:
                  v21 = 359;
                  break;
                case 0x12:
                  v21 = 360;
                  break;
                case 0x13:
                  v21 = 361;
                  break;
                case 0x14:
                  v21 = 314;
                  break;
                case 0x18:
                  v21 = 303;
                  break;
                case 0x19:
                  v21 = 304;
                  break;
                case 0x1A:
                  v21 = 362;
                  break;
                case 0x1B:
                  v21 = 363;
                  break;
                case 0x20:
                  v21 = 278;
                  break;
                case 0x21:
                  v21 = 367;
                  break;
                case 0x28:
                  v21 = 87;
                  break;
                case 0x29:
                  v21 = 88;
                  break;
                case 0x30:
                  v21 = 364;
                  break;
                case 0x31:
                  v21 = 365;
                  break;
                case 0x32:
                  v21 = 366;
                  break;
                case 0x33:
                  v21 = 85;
                  break;
                case 0x34:
                  v21 = 341;
                  break;
                case 0x35:
                  v21 = 86;
                  break;
                case 0x36:
                  v21 = 340;
                  break;
                case 0x37:
                  v21 = 342;
                  break;
                default:
                  v21 = 0;
                  break;
              }
              break;
            case 2u:
              switch ( HIBYTE(v9) & 0x3F )
              {
                case 0:
                  v20 = 0;
                  v21 = 368;
                  break;
                case 1:
                  v20 = 0;
                  v21 = 369;
                  break;
                case 2:
                  v20 = 0;
                  v21 = 370;
                  break;
                case 3:
                  v20 = 0;
                  v21 = 371;
                  break;
                case 4:
                  v20 = 0;
                  v21 = 372;
                  break;
                case 5:
                  v20 = 0;
                  v21 = 373;
                  break;
                case 6:
                  v20 = 0;
                  v21 = 296;
                  break;
                case 7:
                  v20 = 0;
                  v21 = 374;
                  break;
                case 8:
                  v20 = 0;
                  v21 = 375;
                  break;
                case 9:
                  v20 = 0;
                  v21 = 376;
                  break;
                case 0xA:
                  v20 = 0;
                  v21 = 377;
                  break;
                case 0xB:
                  v20 = 0;
                  v21 = 378;
                  break;
                case 0xC:
                  v20 = 0;
                  v21 = 379;
                  break;
                case 0xD:
                  v20 = 0;
                  v21 = 380;
                  break;
                case 0xE:
                case 0x13:
                case 0x1E:
                case 0x1F:
                  v20 = 0;
                  v21 = 0;
                  break;
                case 0xF:
                  v20 = 0;
                  switch ( (v11 >> 10) & 0x1F )
                  {
                    case 0u:
                      v21 = 381;
                      break;
                    case 1u:
                      v21 = 382;
                      break;
                    case 2u:
                      v21 = 383;
                      break;
                    case 3u:
                      v21 = 384;
                      break;
                    case 4u:
                      v21 = 385;
                      break;
                    case 5u:
                      v21 = 386;
                      break;
                    case 6u:
                      v21 = 387;
                      break;
                    case 7u:
                      v21 = 388;
                      break;
                    case 8u:
                      v21 = 389;
                      break;
                    case 0xCu:
                      v21 = 390;
                      break;
                    case 0x10u:
                      v21 = 391;
                      break;
                    default:
                      v21 = 0;
                      break;
                  }
                  break;
                case 0x10:
                  v20 = 0;
                  v21 = 392;
                  break;
                case 0x11:
                  v20 = 0;
                  v21 = 393;
                  break;
                case 0x12:
                  v20 = 0;
                  v21 = 394;
                  break;
                case 0x14:
                  v20 = 0;
                  v21 = 316;
                  break;
                case 0x15:
                  v20 = 0;
                  v21 = 395;
                  break;
                case 0x16:
                  v20 = 0;
                  v21 = 396;
                  break;
                case 0x17:
                  v20 = 0;
                  v21 = 397;
                  break;
                case 0x18:
                  v20 = 0;
                  v21 = 336;
                  break;
                case 0x19:
                  v20 = 0;
                  v21 = 337;
                  break;
                case 0x1A:
                  v20 = 0;
                  v21 = 338;
                  break;
                case 0x1B:
                  v20 = 0;
                  v21 = 339;
                  break;
                case 0x1C:
                  v20 = 0;
                  v21 = 343;
                  break;
                case 0x1D:
                  v20 = 0;
                  v21 = 344;
                  break;
                case 0x20:
                  v20 = 0;
                  v21 = 398;
                  break;
                case 0x21:
                  v20 = 0;
                  v21 = 399;
                  break;
                case 0x22:
                  v20 = 0;
                  v21 = 400;
                  break;
                case 0x23:
                  v20 = 0;
                  v21 = 401;
                  break;
                case 0x24:
                  v20 = 0;
                  v21 = 402;
                  break;
                case 0x25:
                  v20 = 0;
                  v21 = 403;
                  break;
                case 0x26:
                  v20 = 0;
                  v21 = 404;
                  break;
                case 0x27:
                  v20 = 0;
                  v21 = 405;
                  break;
                case 0x28:
                  v20 = 0;
                  v21 = 406;
                  break;
                case 0x29:
                  v20 = 0;
                  v21 = 407;
                  break;
                case 0x2A:
                  v20 = 0;
                  v21 = 408;
                  break;
                case 0x2B:
                  v20 = 0;
                  v21 = 409;
                  break;
                case 0x2C:
                  v20 = 0;
                  v21 = 410;
                  break;
                case 0x2D:
                  v20 = 0;
                  v21 = 411;
                  break;
                case 0x2E:
                  v20 = 0;
                  v21 = 412;
                  break;
                case 0x2F:
                  v20 = 0;
                  v21 = 413;
                  break;
                case 0x30:
                  v20 = 0;
                  v21 = 414;
                  break;
                case 0x31:
                  v20 = 0;
                  v21 = 415;
                  break;
                case 0x32:
                  v20 = 0;
                  v21 = 416;
                  break;
                case 0x33:
                  v20 = 0;
                  v21 = 417;
                  break;
                case 0x34:
                  v20 = 0;
                  v21 = 418;
                  break;
                case 0x35:
                  v20 = 0;
                  v21 = 419;
                  break;
                case 0x36:
                  v20 = 0;
                  v21 = 420;
                  break;
                case 0x37:
                  v20 = 0;
                  v21 = 421;
                  break;
                case 0x38:
                  v20 = 0;
                  v21 = 422;
                  break;
                case 0x39:
                  v20 = 41;
                  v21 = 422;
                  break;
                case 0x3A:
                  v20 = 0;
                  v21 = 423;
                  break;
                case 0x3B:
                  v20 = 41;
                  v21 = 423;
                  break;
                case 0x3C:
                  v20 = 0;
                  v21 = 424;
                  break;
                case 0x3D:
                  v20 = 41;
                  v21 = 424;
                  break;
                case 0x3E:
                  v20 = 0;
                  v21 = 425;
                  break;
                case 0x3F:
                  v20 = 41;
                  v21 = 425;
                  break;
              }
              break;
            case 3u:
              switch ( HIBYTE(v9) & 0x3F )
              {
                case 0:
                  v20 = 0;
                  v21 = 432;
                  break;
                case 1:
                  v20 = 41;
                  v21 = 432;
                  break;
                case 2:
                  v20 = 0;
                  v21 = 433;
                  break;
                case 3:
                  v20 = 41;
                  v21 = 433;
                  break;
                case 4:
                  v20 = 0;
                  v21 = 434;
                  break;
                case 5:
                  v20 = 41;
                  v21 = 434;
                  break;
                case 6:
                  v20 = 0;
                  v21 = 435;
                  break;
                case 7:
                  v20 = 41;
                  v21 = 435;
                  break;
                case 8:
                  v20 = 0;
                  v21 = 436;
                  break;
                case 9:
                  v20 = 0;
                  v21 = 437;
                  break;
                case 0xA:
                  v20 = 0;
                  v21 = 438;
                  break;
                case 0xB:
                  v20 = 0;
                  v21 = 439;
                  break;
                case 0xC:
                case 0xD:
                case 0xE:
                case 0xF:
                case 0x10:
                case 0x12:
                case 0x15:
                case 0x16:
                case 0x18:
                case 0x1A:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                case 0x27:
                case 0x2F:
                case 0x38:
                case 0x3C:
                  v20 = 0;
                  v21 = 0;
                  break;
                case 0x11:
                  v20 = 0;
                  v21 = 440;
                  break;
                case 0x13:
                  v20 = 0;
                  v21 = 441;
                  break;
                case 0x14:
                  v20 = 0;
                  v21 = 318;
                  break;
                case 0x17:
                  v20 = 0;
                  v21 = 442;
                  break;
                case 0x19:
                  v20 = 0;
                  v21 = 443;
                  break;
                case 0x1B:
                  v20 = 0;
                  v21 = 444;
                  break;
                case 0x1F:
                  v20 = 0;
                  v21 = 445;
                  break;
                case 0x20:
                  v20 = 0;
                  v21 = 446;
                  break;
                case 0x21:
                  v20 = 41;
                  v21 = 446;
                  break;
                case 0x22:
                  v20 = 0;
                  v21 = 447;
                  break;
                case 0x23:
                  v20 = 41;
                  v21 = 447;
                  break;
                case 0x24:
                  v20 = 0;
                  v21 = 448;
                  break;
                case 0x25:
                  v20 = 0;
                  v21 = 449;
                  break;
                case 0x26:
                  v20 = 41;
                  v21 = 449;
                  break;
                case 0x28:
                  v20 = 0;
                  v21 = 450;
                  break;
                case 0x29:
                  v20 = 41;
                  v21 = 450;
                  break;
                case 0x2A:
                  v20 = 0;
                  v21 = 451;
                  break;
                case 0x2B:
                  v20 = 41;
                  v21 = 451;
                  break;
                case 0x2C:
                  v20 = 0;
                  v21 = 452;
                  break;
                case 0x2D:
                  v20 = 0;
                  v21 = 453;
                  break;
                case 0x2E:
                  v20 = 0;
                  v21 = 454;
                  break;
                case 0x30:
                  v20 = 0;
                  v21 = 455;
                  break;
                case 0x31:
                  v20 = 0;
                  v21 = 456;
                  break;
                case 0x32:
                  v20 = 0;
                  v21 = 457;
                  break;
                case 0x33:
                  v20 = 0;
                  v21 = 458;
                  break;
                case 0x34:
                  v20 = 0;
                  v21 = 459;
                  break;
                case 0x35:
                  v20 = 0;
                  v21 = 460;
                  break;
                case 0x36:
                  v20 = 0;
                  v21 = 461;
                  break;
                case 0x37:
                  v20 = 0;
                  v21 = 462;
                  break;
                case 0x39:
                  v20 = 0;
                  v21 = 463;
                  break;
                case 0x3A:
                  v20 = 0;
                  v21 = 464;
                  break;
                case 0x3B:
                  v20 = 0;
                  v21 = 465;
                  break;
                case 0x3D:
                  v20 = 0;
                  v21 = 466;
                  break;
                case 0x3E:
                  v20 = 0;
                  v21 = 467;
                  break;
                case 0x3F:
                  v20 = 0;
                  v21 = 468;
                  break;
              }
              break;
            case 4u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 320;
              else
                v21 = 0;
              break;
            case 5u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 322;
              else
                v21 = 0;
              break;
            case 6u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 324;
              else
                v21 = 0;
              break;
            case 7u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 326;
              else
                v21 = 0;
              break;
            case 8u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 428;
              else
                v21 = 0;
              break;
            case 9u:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 429;
              else
                v21 = 0;
              break;
            case 0xAu:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 430;
              else
                v21 = 0;
              break;
            case 0xBu:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 431;
              else
                v21 = 0;
              break;
            case 0xCu:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 426;
              else
                v21 = 0;
              break;
            case 0xDu:
              v20 = 0;
              if ( v44 == 20 )
                v21 = 427;
              else
                v21 = 0;
              break;
            default:
              v20 = 0;
              v21 = 0;
              break;
          }
          goto LABEL_101;
        case 34:
          v20 = 0;
          v21 = 93;
          goto LABEL_63;
        case 35:
          v37 = 0;
          v21 = 94;
          *(_WORD *)(a2 + 24) = 94;
          if ( v10 )
            goto LABEL_78;
          *(_BYTE *)(a2 + 33) = 0;
          *(_DWORD *)(a2 + 28) = 0;
          v20 = 0;
          v22 = (v11 >> 20) & 0x1F;
          goto LABEL_66;
        case 36:
          v20 = 0;
          v21 = (unsigned int)((v11 & 0x1000000) != 0) + 95;
          goto LABEL_63;
        case 37:
          v41 = HIBYTE(v9) & 0x1F;
          if ( v41 == 2 )
          {
            v21 = 101;
            v20 = 0;
          }
          else if ( v41 > 2 )
          {
            if ( v41 == 3 )
              v21 = 100;
            else
              v21 = 0;
            v20 = 0;
          }
          else
          {
            v42 = (v11 >> 8) & 3;
            if ( (v9 & 0x1F000000) != 0 )
            {
              v21 = 99;
              if ( v42 == 1 )
              {
                v20 = 24;
              }
              else if ( v42 == 2 )
              {
                v20 = 25;
              }
              else
              {
                v20 = 0;
              }
            }
            else if ( (v9 & 0x20000000) != 0 )
            {
              v21 = 98;
              if ( v42 == 2 )
              {
                v20 = 22;
              }
              else if ( v42 == 3 )
              {
                v20 = 23;
              }
              else
              {
                v20 = 0;
              }
            }
            else
            {
              v21 = 97;
              if ( v42 == 2 )
              {
                v20 = 22;
              }
              else if ( v42 == 3 )
              {
                v20 = 23;
              }
              else
              {
                v20 = 0;
              }
            }
          }
          goto LABEL_101;
        case 38:
          v21 = (unsigned int)((v11 & 0x4000) != 0) + 102;
          goto LABEL_94;
        case 39:
          switch ( HIWORD(v11) & 0xF )
          {
            case 0:
              v89 = (v11 >> 20) & 0x1F;
              if ( v89 )
              {
                if ( v89 == 1 )
                {
                  v21 = 112;
                }
                else
                {
                  if ( v89 != 2 )
                    goto LABEL_275;
                  v21 = 113;
                }
              }
              else
              {
                v21 = 485;
              }
              break;
            case 2:
              v21 = 104;
              break;
            case 3:
              v21 = 105;
              break;
            case 4:
              v21 = 106;
              break;
            case 5:
              v21 = 107;
              break;
            case 6:
              v21 = 108;
              break;
            case 7:
              v21 = 109;
              break;
            case 0xC:
              v21 = 110;
              break;
            case 0xD:
              v21 = 111;
              break;
            default:
LABEL_275:
              v21 = 0;
              break;
          }
          v20 = 0;
          goto LABEL_101;
        case 40:
          v20 = 0;
          v21 = 114;
          goto LABEL_63;
        case 41:
          v20 = 0;
          v21 = 115;
          goto LABEL_63;
        case 42:
          v20 = 0;
          v21 = 116;
          goto LABEL_63;
        case 43:
          v20 = 0;
          v21 = 117;
          goto LABEL_63;
        case 44:
          v20 = 0;
          v21 = 118;
          goto LABEL_63;
        case 45:
          v20 = 0;
          v21 = (unsigned int)((v11 & 0x80000) != 0) + 120;
          goto LABEL_63;
        case 46:
          v20 = 0;
          v21 = 122;
          goto LABEL_63;
        case 47:
          v20 = 0;
          v21 = 123;
          goto LABEL_63;
        case 50:
          switch ( HIBYTE(v9) & 0x1F )
          {
            case 0:
              v20 = 0;
              v21 = 202;
              break;
            case 1:
              v20 = 0;
              v21 = 204;
              break;
            case 2:
              v20 = 0;
              v21 = 205;
              break;
            case 3:
              if ( (unsigned __int8)v11 >> 5 == 1 )
              {
                if ( (v11 & 0x1000) != 0 )
                  v20 = 29;
                else
                  v20 = 28;
                v21 = 207;
              }
              else if ( (unsigned __int8)v11 >> 5 == 2 )
              {
                if ( (v11 & 0x1000) != 0 )
                  v20 = 31;
                else
                  v20 = 30;
                v21 = 208;
              }
              else
              {
                v20 = 0;
                v21 = 206;
              }
              break;
            case 4:
              v20 = 0;
              v21 = 197;
              break;
            case 5:
              v20 = 0;
              v21 = 194;
              break;
            case 6:
              v20 = 0;
              v21 = 195;
              break;
            case 7:
              v20 = 0;
              v21 = 196;
              break;
            case 8:
              v20 = 0;
              v21 = 201;
              break;
            case 9:
              v20 = 0;
              v21 = 200;
              break;
            case 0xA:
              v20 = 0;
              v21 = 192;
              break;
            case 0xB:
              v20 = 0;
              v21 = 193;
              break;
            case 0xC:
              v20 = 0;
              v21 = 199;
              break;
            case 0xD:
              v20 = 0;
              v21 = 198;
              break;
            case 0xE:
              v20 = 0;
              v21 = 203;
              break;
            case 0xF:
              v20 = 0;
              v21 = 308;
              break;
            case 0x10:
              v20 = 0;
              v21 = 309;
              break;
            default:
              v20 = 0;
              v21 = 0;
              break;
          }
          goto LABEL_101;
        case 51:
          v20 = 0;
          v21 = 209;
          goto LABEL_63;
        case 53:
          v33 = v11;
          LOBYTE(v33) = (unsigned __int8)v11 >> 7;
          if ( (v9 & 0x30000000) != 0 )
          {
            v20 = v33;
            switch ( HIBYTE(v9) & 0xF )
            {
              case 0:
                v21 = 175;
                goto LABEL_105;
              case 1:
                v21 = (v9 & 0x40000000) == 0;
                LOWORD(v21) = v21 + 187;
                goto LABEL_105;
              case 2:
                v21 = 181;
                goto LABEL_105;
              case 3:
                v21 = 179;
                goto LABEL_105;
              case 4:
                v21 = 176;
                goto LABEL_105;
              case 8:
                v21 = 177;
                goto LABEL_105;
              case 9:
                v21 = (v9 & 0x40000000) == 0;
                LOWORD(v21) = v21 + 189;
                goto LABEL_105;
              case 0xA:
                v21 = 182;
                goto LABEL_105;
              case 0xB:
                v21 = 180;
                goto LABEL_105;
              case 0xC:
                v21 = 178;
                goto LABEL_105;
              default:
LABEL_341:
                *(_WORD *)(a2 + 24) = 0;
                *(_DWORD *)(a2 + 28) = 0;
                if ( v10 )
                  goto LABEL_455;
                *(_BYTE *)(a2 + 33) = v33;
                break;
            }
            return 0;
          }
          switch ( HIBYTE(v9) & 0xF )
          {
            case 0:
              switch ( (v11 >> 6) & 0xF )
              {
                case 0u:
                  v21 = 222;
                  v20 = 0;
                  break;
                case 1u:
                  v21 = 223;
                  v20 = 0;
                  break;
                case 2u:
                  v21 = 224;
                  v20 = 0;
                  break;
                case 3u:
                  v21 = 225;
                  v20 = 0;
                  break;
                case 4u:
                  v21 = 226;
                  v20 = 0;
                  break;
                case 5u:
                  v21 = 227;
                  v20 = 0;
                  break;
                case 6u:
                  v21 = 228;
                  v20 = 0;
                  break;
                case 7u:
                  v21 = 229;
                  v20 = 0;
                  break;
                case 8u:
                  v21 = 230;
                  v20 = 0;
                  break;
                case 9u:
                  v21 = 231;
                  v20 = 0;
                  break;
                case 0xAu:
                case 0xBu:
                case 0xEu:
                  v21 = 0;
                  v20 = 0;
                  break;
                case 0xCu:
                  v21 = 232;
                  v20 = 0;
                  break;
                case 0xDu:
                  v21 = 233;
                  v20 = 0;
                  break;
                case 0xFu:
                  v101 = (v11 >> 10) & 0x1F;
                  if ( (unsigned int)v101 > 0x1C )
                  {
                    v21 = 0;
                    v20 = 0;
                  }
                  else
                  {
                    v20 = byte_1F180[v101];
                    v21 = dword_1F100[v101];
                  }
                  break;
              }
              break;
            case 1:
              v90 = (v11 >> 6) & 0xF;
              if ( v90 == 1 )
              {
                v21 = 246;
              }
              else if ( v90 == 12 )
              {
                if ( ((v11 >> 10) & 0x1F) != 0 )
                {
                  if ( ((v11 >> 10) & 0x1F) == 1 )
                    v21 = 217;
                  else
                    v21 = 0;
                }
                else
                {
                  v21 = 214;
                }
              }
              else
              {
                v21 = v90 == 0 ? 0xD7 : 0;
              }
              v20 = v33;
              break;
            case 2:
              v20 = v33;
              v21 = 210;
              goto LABEL_105;
            case 3:
              v20 = v33;
              v21 = 242;
              goto LABEL_105;
            case 4:
              if ( (v11 & 0x200) != 0 )
                goto LABEL_38;
              v92 = (v11 >> 6) & 0xF;
              v21 = word_1F0C0[2 * v92];
              v20 = byte_1F0E0[v92];
              break;
            case 8:
              switch ( (v11 >> 6) & 0xF )
              {
                case 0u:
                  v21 = 251;
                  v20 = 0;
                  break;
                case 1u:
                  v21 = 252;
                  v20 = 0;
                  break;
                case 2u:
                  v21 = 253;
                  v20 = 0;
                  break;
                case 3u:
                  v21 = 254;
                  v20 = 0;
                  break;
                case 4u:
                  v21 = 255;
                  v20 = 0;
                  break;
                case 5u:
                  v21 = 256;
                  v20 = 0;
                  break;
                case 6u:
                  v21 = 257;
                  v20 = 0;
                  break;
                case 7u:
                  v21 = 258;
                  v20 = 0;
                  break;
                case 8u:
                  v21 = 259;
                  v20 = 0;
                  break;
                case 9u:
                  v21 = 260;
                  v20 = 0;
                  break;
                case 0xAu:
                case 0xBu:
                case 0xEu:
                  v21 = 0;
                  v20 = 0;
                  break;
                case 0xCu:
                  v21 = 261;
                  v20 = 0;
                  break;
                case 0xDu:
                  v21 = 262;
                  v20 = 0;
                  break;
                case 0xFu:
                  v102 = (v11 >> 10) & 0x1F;
                  if ( (unsigned int)v102 > 0x1C )
                  {
                    v21 = 0;
                    v20 = 0;
                  }
                  else
                  {
                    v20 = byte_1F180[v102];
                    v21 = dword_1F040[v102];
                  }
                  break;
              }
              break;
            case 9:
              v93 = (v11 >> 6) & 0xF;
              if ( v93 == 1 )
              {
                v21 = 247;
              }
              else if ( v93 == 12 )
              {
                if ( (v11 & 0x7C00) == 0x400 )
                  v21 = 218;
                else
                  v21 = 0;
              }
              else
              {
                v21 = v93 == 0 ? 0xD8 : 0;
              }
              v20 = v33;
              break;
            case 0xA:
              v20 = v33;
              v21 = 212;
              goto LABEL_105;
            case 0xB:
              v20 = v33;
              v21 = 244;
              goto LABEL_105;
            case 0xC:
              if ( (v11 & 0x200) != 0 )
                goto LABEL_38;
              v91 = (v11 >> 6) & 0xF;
              v21 = word_1F020[2 * v91];
              v20 = byte_1F0E0[v91];
              break;
            default:
              goto LABEL_341;
          }
LABEL_101:
          *(_WORD *)(a2 + 24) = v21;
          *(_DWORD *)(a2 + 28) = 0;
          if ( v10 )
            goto LABEL_56;
          *(_BYTE *)(a2 + 33) = v20;
          if ( (_WORD)v21 )
            goto LABEL_534;
          return 0;
        case 56:
          if ( (v9 & 0x1F000000) != 0 )
          {
            if ( (HIBYTE(v9) & 0x1F) != 1 )
            {
              *(_DWORD *)(a2 + 28) = 0;
              *(_WORD *)(a2 + 24) = 0;
              if ( v10 )
              {
                v20 = 0;
                v21 = 0;
                goto LABEL_56;
              }
LABEL_39:
              *(_BYTE *)(a2 + 33) = 0;
              return 0;
            }
            *(_DWORD *)(a2 + 28) = 0;
            *(_WORD *)(a2 + 24) = 272;
            if ( !v10 )
            {
              *(_BYTE *)(a2 + 33) = 0;
              v21 = 272;
              v20 = 0;
              goto LABEL_534;
            }
            v20 = 0;
            v21 = 272;
          }
          else
          {
            *(_DWORD *)(a2 + 28) = 0;
            *(_WORD *)(a2 + 24) = 271;
            if ( !v10 )
            {
              *(_BYTE *)(a2 + 33) = 0;
              v21 = 271;
              v20 = 0;
LABEL_534:
              v22 = (v11 >> 20) & 0x1F;
              if ( (_BYTE)v20 == 5 )
                return 0;
LABEL_66:
              v23 = v11 >> 10;
              v24 = (v11 >> 15) & 0x1F;
              v25 = v11 >> 10;
              v26 = (v11 >> 10) & 0x1F;
              if ( (unsigned __int16)v21 <= 0x116u )
                goto LABEL_67;
              if ( (unsigned __int16)v21 > 0x186u )
              {
                if ( (_WORD)v21 == 485 )
                {
LABEL_279:
                  *(_BYTE *)(a2 + 41) = 7;
                  *(_QWORD *)(a2 + 56) = (unsigned int)(*(_DWORD *)(a2 + 16) + 2 * (__int16)v11);
                  goto LABEL_20;
                }
                if ( (unsigned __int16)v21 > 0x1E5u )
                {
                  v22 = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                  *(_BYTE *)(a2 + 121) = 1;
                  *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
                  *(_BYTE *)(a2 + 161) = 5;
                  *(_QWORD *)(a2 + 168) = (v11 >> 5) & 0x1F;
                  goto LABEL_20;
                }
                if ( (_WORD)v21 == 391 )
                {
                  v22 = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                  *(_BYTE *)(a2 + 121) = 5;
                  *(_QWORD *)(a2 + 128) = v25 & 3;
                  goto LABEL_20;
                }
                if ( (unsigned __int16)v21 > 0x1C6u )
                  goto LABEL_42;
                v98 = 1LL << ((unsigned __int8)v21 + 120);
                v21 = 0x3F6FFFFDFFFFFFFLL;
                if ( (v98 & 0x3F6FFFFDFFFFFFFLL) != 0 )
                  goto LABEL_42;
                v21 = 0x7C09000020000000LL;
                if ( (v98 & 0x7C09000020000000LL) == 0 )
                  goto LABEL_20;
              }
              else
              {
                if ( (unsigned __int16)v21 > 0x17Cu )
                {
LABEL_216:
                  v22 = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                  goto LABEL_20;
                }
                if ( (_WORD)v21 == 308 )
                {
                  *(_BYTE *)(a2 + 41) = 5;
                  *(_QWORD *)(a2 + 48) = (unsigned __int16)(v11 >> 5);
                  goto LABEL_20;
                }
                if ( (unsigned __int16)v21 > 0x134u )
                {
                  if ( (_WORD)v21 == 309 )
                  {
                    v22 = (unsigned __int8)v22;
                    *(_BYTE *)(a2 + 41) = 1;
                    *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
                    *(_BYTE *)(a2 + 121) = 1;
                    *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
                    *(_BYTE *)(a2 + 161) = 1;
                    *(_WORD *)(a2 + 166) = (v11 >> 5) & 0x1F;
                    goto LABEL_20;
                  }
                  if ( (unsigned __int16)v21 > 0x176u )
                    goto LABEL_42;
                  if ( (unsigned __int16)v21 <= 0x139u )
                    goto LABEL_42;
                  v100 = 0xFDFFFFF7FFFD555LL;
                  if ( _bittest64(&v100, (unsigned int)(v21 - 314)) )
                    goto LABEL_42;
                  if ( (_WORD)v21 != 374 )
                    goto LABEL_20;
                }
                else
                {
                  LOWORD(v21) = v21 - 279;
                  v71 = 1LL << v21;
                  if ( ((1LL << v21) & 0xF078407) != 0 )
                    goto LABEL_42;
                  if ( (v71 & 0x78C0) == 0 )
                  {
                    if ( (v71 & 0x10000300) == 0 )
                      goto LABEL_20;
                    goto LABEL_216;
                  }
                }
              }
LABEL_72:
              v22 = (unsigned __int8)v22;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
              *(_BYTE *)(a2 + 121) = 5;
              *(_QWORD *)(a2 + 128) = (unsigned __int8)v26;
              goto LABEL_20;
            }
            v20 = 0;
            v21 = 271;
          }
LABEL_56:
          *(_BYTE *)(a2 + 33) = v20;
          *(_DWORD *)(a2 + 28) = (v7 << 22) | 0x80000000;
          if ( (_WORD)v21 )
          {
            v22 = (v11 >> 20) & 0x1F;
            if ( (_BYTE)v20 != 5 )
            {
              v10 = 1;
              goto LABEL_66;
            }
            return 0;
          }
LABEL_455:
          *(_BYTE *)(a2 + 33) = 26;
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = (unsigned __int16)v7;
          *(_QWORD *)(a2 + 24) = 0x9000201E7LL;
          return 2;
      }
    }
    v20 = 0;
    v21 = 98;
LABEL_105:
    *(_WORD *)(a2 + 24) = v21;
    *(_DWORD *)(a2 + 28) = 0;
    if ( v10 )
    {
      *(_BYTE *)(a2 + 33) = v20;
      *(_DWORD *)(a2 + 28) = (v7 << 22) | 0x80000000;
      v22 = (v11 >> 20) & 0x1F;
      if ( (_BYTE)v20 != 5 )
        goto LABEL_66;
      goto LABEL_107;
    }
    *(_BYTE *)(a2 + 33) = v20;
    v22 = (v11 >> 20) & 0x1F;
    if ( (_BYTE)v20 == 5 )
    {
LABEL_107:
      if ( (unsigned __int16)v21 > 0x13u )
        return 0;
LABEL_108:
      v38 = 1LL << v21;
      if ( ((1LL << v21) & 0x20202) != 0 )
      {
LABEL_109:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        v43 = v11 & 0x7FFFF;
        *(_BYTE *)(a2 + 81) = 4;
        if ( (v11 & 0x40000) != 0 )
          v43 = v11 | 0xFFF80000;
        *(_WORD *)(a2 + 86) = 29;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 96) = v43;
        return *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_80;
    }
LABEL_17:
    v10 = 0;
    v23 = v11 >> 10;
    v24 = (v11 >> 15) & 0x1F;
    v25 = v11 >> 10;
    v26 = (v11 >> 10) & 0x1F;
    if ( (unsigned __int16)v21 <= 0x2Du )
    {
      v31 = v21;
      goto LABEL_41;
    }
LABEL_18:
    LODWORD(v21) = v21 - 46;
    v27 = (unsigned int)v21;
    v21 = (unsigned __int16)v21;
    switch ( (__int16)v21 )
    {
      case 0:
      case 6:
      case 7:
      case 8:
      case 9:
      case 12:
      case 39:
      case 40:
      case 41:
      case 42:
      case 225:
      case 227:
      case 229:
      case 230:
      case 231:
        goto LABEL_42;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        goto LABEL_216;
      case 10:
      case 152:
      case 171:
      case 172:
      case 232:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        goto LABEL_20;
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
        *(_BYTE *)(a2 + 41) = 1;
        v67 = ((unsigned __int8)v22 >> 1) - 124;
        goto LABEL_199;
      case 22:
      case 23:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (v11 >> 5) & 0x1F;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
        *(_BYTE *)(a2 + 161) = 1;
        *(_WORD *)(a2 + 166) = (unsigned __int8)v26;
        goto LABEL_20;
      case 24:
      case 25:
      case 159:
      case 160:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v23 & 0x3FF;
        goto LABEL_20;
      case 47:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        v88 = v11 | 0xFFF00000;
        *(_BYTE *)(a2 + 81) = 5;
        if ( (v11 & 0x80000) == 0 )
          v88 = v11 & 0xFFFFF;
        v21 = v88 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        *(_QWORD *)(a2 + 88) = v21;
        v22 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a2 + 96) = *(_QWORD *)(v22 + 16) & v88;
        goto LABEL_20;
      case 48:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 5;
        *(__m128i *)(a2 + 88) = _mm_unpacklo_epi64((__m128i)(v11 & 0xFFFFF), (__m128i)(v11 & 0xFFFFF));
        goto LABEL_20;
      case 49:
      case 50:
        *(_BYTE *)(a2 + 41) = 7;
        if ( v10 )
        {
          *(_QWORD *)(a2 + 56) = (2 * v11) & 0x1FFFFFE;
          v28 = *(_WORD *)(a1 + 168);
          goto LABEL_22;
        }
        v29 = v11 | 0xFF000000;
        if ( (v11 & 0x800000) == 0 )
          v29 = v11 & 0xFFFFFF;
        *(_QWORD *)(a2 + 56) = *(_DWORD *)(a2 + 16) + 2 * v29;
        break;
      case 51:
      case 52:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v26;
        goto LABEL_20;
      case 53:
      case 54:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 30;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v26;
        goto LABEL_20;
      case 56:
      case 57:
        v79 = 2 * v11;
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v79) = (2 * v11) & 0x7FFE;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        v21 = v79;
        *(_BYTE *)(a2 + 81) = 1;
        LOWORD(v21) = (2 * v11) & 0x3FFE | 0xC000;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
        if ( (v11 & 0x2000) != 0 )
          LOWORD(v79) = (2 * v11) & 0x3FFE | 0xC000;
        *(_BYTE *)(a2 + 121) = 7;
        *(_QWORD *)(a2 + 136) = (unsigned int)(*(_DWORD *)(a2 + 16) + (__int16)v79);
        goto LABEL_20;
      case 58:
      case 59:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        v78 = (unsigned int)(*(_DWORD *)(a2 + 16) + 2 * (__int16)v11);
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 7;
        *(_QWORD *)(a2 + 96) = v78;
        goto LABEL_20;
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        v68 = *(_QWORD *)(a2 + 16) + 2 * (__int16)v11;
        *(_BYTE *)(a2 + 81) = 7;
        *(_QWORD *)(a2 + 96) = v68;
        goto LABEL_20;
      case 66:
      case 67:
        goto LABEL_279;
      case 68:
      case 69:
      case 76:
      case 77:
        v21 = v11;
        v22 = (unsigned __int8)v22;
        LOWORD(v21) = v11 & 0x7FFF;
        v72 = v11 | 0x8000;
        *(_BYTE *)(a2 + 41) = 1;
        if ( (v11 & 0x4000) == 0 )
          v72 = v11 & 0x7FFF;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
        *(_BYTE *)(a2 + 121) = 5;
        *(_QWORD *)(a2 + 128) = v72;
        goto LABEL_20;
      case 70:
      case 71:
      case 72:
      case 163:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
        *(_BYTE *)(a2 + 121) = 5;
        *(_QWORD *)(a2 + 128) = v11 & 0x7FFF;
        goto LABEL_20;
      case 74:
      case 75:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        v21 = v11 >> 8;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 5;
        v83 = v21 & 0x7FF;
        v84 = (v11 >> 8) | 0xF800;
        BYTE1(v21) &= 4u;
        *(_BYTE *)(a2 + 121) = 7;
        if ( !BYTE1(v21) )
          v84 = v83;
        *(_QWORD *)(a2 + 88) = v84;
        *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 16) + (__int16)(2 * (char)v11);
        goto LABEL_20;
      case 93:
        *(_BYTE *)(a2 + 41) = 1;
        v67 = v22 - 124;
LABEL_199:
        *(_WORD *)(a2 + 46) = v67;
        goto LABEL_43;
      case 129:
      case 130:
      case 131:
      case 132:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 72) = (v11 >> 4) & 3;
        *(_QWORD *)(a2 + 88) = (v11 >> 6) & 0x7FFFF;
        goto LABEL_20;
      case 133:
      case 134:
      case 135:
      case 136:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v22 - 92);
        v21 = (v11 >> 4) & 3;
        *(_WORD *)(a2 + 46) = 0;
        v22 = BYTE1(v11) & 3;
        *(_BYTE *)(a2 + 72) = (v11 >> 4) & 3;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 121) = 3;
        *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
        if ( (v9 & 0x80000000) == 0 )
        {
          *(_BYTE *)(a2 + 152) = 1;
          *(_QWORD *)(a2 + 128) = (unsigned __int8)v26;
          *(_BYTE *)(a2 + 153) = v22;
        }
        else
        {
          *(_BYTE *)(a2 + 161) = 1;
          *(_WORD *)(a2 + 166) = (unsigned __int8)v26;
          *(_BYTE *)(a2 + 192) = 1;
          *(_BYTE *)(a2 + 193) = v22;
        }
        goto LABEL_20;
      case 137:
      case 138:
        *(_BYTE *)(a2 + 41) = 1;
        v81 = v11 | 0xF000;
        *(_BYTE *)(a2 + 81) = 1;
        v21 = (v11 >> 13) & 3;
        if ( (v11 & 0x800) == 0 )
          v81 = v11 & 0xFFF;
        *(_BYTE *)(a2 + 72) = (v11 >> 13) & 3;
        v22 = (unsigned __int8)(v22 - 92);
        *(_WORD *)(a2 + 46) = 0;
        *(_WORD *)(a2 + 86) = v22;
        v82 = 4 * v81;
        if ( (_BYTE)v20 == 1 )
        {
          *(_BYTE *)(a2 + 121) = 3;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
          *(_BYTE *)(a2 + 161) = 5;
          *(_QWORD *)(a2 + 168) = v82;
        }
        else
        {
          *(_BYTE *)(a2 + 121) = 4;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
          *(_QWORD *)(a2 + 136) = v82;
        }
        goto LABEL_20;
      case 139:
      case 140:
        *(_BYTE *)(a2 + 41) = 1;
        v80 = v11 | 0xF000;
        *(_BYTE *)(a2 + 81) = 1;
        v21 = (v11 >> 13) & 3;
        if ( (v11 & 0x800) == 0 )
          v80 = v11 & 0xFFF;
        *(_BYTE *)(a2 + 72) = (v11 >> 13) & 3;
        v22 = (unsigned __int8)(v22 - 92);
        *(_WORD *)(a2 + 46) = 0;
        *(_WORD *)(a2 + 86) = v22;
        if ( (_BYTE)v20 == 1 )
        {
          *(_BYTE *)(a2 + 121) = 3;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
          *(_BYTE *)(a2 + 161) = 5;
          *(_QWORD *)(a2 + 168) = 4 * v80;
        }
        else
        {
          *(_BYTE *)(a2 + 121) = 4;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v24;
          *(_QWORD *)(a2 + 136) = (unsigned int)(4 * v80);
          *(_BYTE *)(a2 + 125) = 0;
        }
        goto LABEL_20;
      case 141:
      case 142:
      case 143:
      case 144:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 72) = (v11 >> 4) & 3;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 121) = 5;
        *(_QWORD *)(a2 + 128) = (v11 >> 8) & 0xFFF;
        goto LABEL_20;
      case 146:
      case 147:
      case 148:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = (v11 >> 5) & 0x7FFF;
        goto LABEL_20;
      case 149:
      case 150:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = (v11 >> 5) & 0x7FFF;
        goto LABEL_20;
      case 153:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)v11 >> 5;
        goto LABEL_20;
      case 156:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v11 & 3;
        goto LABEL_20;
      case 157:
        v86 = (v11 >> 5) & 0x1F;
        if ( ((v11 >> 5) & 0x1F) == 7 )
        {
LABEL_411:
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = 7;
        }
        else
        {
LABEL_337:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int8)v24;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = (unsigned __int8)v86;
        }
        goto LABEL_20;
      case 158:
        v85 = v25 & 1;
        v86 = (v11 >> 5) & 0x1F;
        v21 = (unsigned __int8)(v86 - 3);
        switch ( (char)v86 )
        {
          case 3:
          case 4:
          case 5:
          case 6:
          case 19:
          case 20:
          case 21:
          case 22:
            v22 = (unsigned __int8)v22;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
            *(_BYTE *)(a2 + 121) = 5;
            *(_QWORD *)(a2 + 128) = (unsigned __int8)v86;
            break;
          case 7:
            goto LABEL_411;
          case 8:
          case 9:
          case 10:
          case 24:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int8)v24;
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = (unsigned __int8)v86;
            *(_BYTE *)(a2 + 121) = 5;
            *(_QWORD *)(a2 + 128) = v85;
            break;
          case 15:
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = 15;
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = v85;
            break;
          default:
            v21 = (unsigned int)(v86 - 3);
            goto LABEL_337;
        }
        goto LABEL_20;
      case 164:
      case 166:
        *(_BYTE *)(a2 + 41) = 1;
        v77 = v22 + 36;
        goto LABEL_297;
      case 165:
      case 167:
        v21 = v11;
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v21) = v11 & 0xFFF;
        v75 = v11 | 0xF000;
        if ( (v11 & 0x800) == 0 )
          v75 = v11 & 0xFFF;
        LOBYTE(v22) = v22 + 36;
        goto LABEL_273;
      case 169:
      case 170:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 36);
        goto LABEL_20;
      case 176:
      case 179:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v22 + 36);
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 36);
        *(_WORD *)(a2 + 126) = (unsigned __int8)(v26 + 36);
        goto LABEL_20;
      case 196:
      case 198:
        *(_BYTE *)(a2 + 41) = 1;
        v77 = v22 + 100;
LABEL_297:
        *(_WORD *)(a2 + 46) = v77;
LABEL_196:
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
        v66 = (v11 >> 8) & 3;
        if ( (_BYTE)v20 == 1 )
        {
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
          *(_BYTE *)(a2 + 152) = 1;
          *(_BYTE *)(a2 + 153) = v66;
        }
        else
        {
          *(_BYTE *)(a2 + 112) = 1;
          *(_QWORD *)(a2 + 88) = (unsigned __int8)v26;
          *(_BYTE *)(a2 + 113) = v66;
        }
        goto LABEL_20;
      case 197:
      case 199:
        v21 = v11;
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v21) = v11 & 0xFFF;
        v75 = v11 | 0xF000;
        if ( (v11 & 0x800) == 0 )
          v75 = v11 & 0xFFF;
        LOBYTE(v22) = v22 + 100;
LABEL_273:
        v22 = (unsigned __int8)v22;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        if ( (_BYTE)v20 == 1 )
        {
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
          *(_BYTE *)(a2 + 121) = 5;
          *(_QWORD *)(a2 + 128) = 4 * v75;
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 4;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
          *(_QWORD *)(a2 + 96) = (unsigned int)(4 * v75);
          *(_BYTE *)(a2 + 85) = 0;
        }
        goto LABEL_20;
      case 200:
      case 201:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 100);
        goto LABEL_20;
      case 205:
      case 206:
      case 215:
      case 216:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v22 + 100);
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 100);
        *(_WORD *)(a2 + 126) = (unsigned __int8)(v26 + 100);
        goto LABEL_20;
      case 221:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v22 + 100);
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 36);
        goto LABEL_20;
      case 223:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v22 + 36);
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v24 + 100);
        goto LABEL_20;
      case 228:
        v22 = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v22;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v24;
        *(_BYTE *)(a2 + 121) = 5;
        *(_QWORD *)(a2 + 128) = (unsigned __int8)(v11 >> 7);
        goto LABEL_20;
      default:
        v21 = v27;
        goto LABEL_20;
    }
    goto LABEL_35;
  }
  *(_WORD *)(a2 + 26) = 2;
  switch ( next_word )
  {
    case 0x9EDD:
      goto LABEL_13;
    case 0xFF83:
      v12 = 0;
      v13 = 0;
      v14 = 16;
      v15 = 486;
      goto LABEL_14;
    case 0x92u:
      *(_DWORD *)(a2 + 28) = 16;
      *(_WORD *)(a2 + 24) = 191;
      *(_BYTE *)(a2 + 33) = 0;
      return 2;
  }
  if ( (char)(next_word + 0x80) < 0 )
    goto LABEL_565;
  switch ( (char)next_word )
  {
    case -128:
    case -127:
    case -126:
    case -125:
      v12 = 0;
      v13 = 0;
      v14 = 55;
      v15 = 469;
      goto LABEL_14;
    case -124:
    case -123:
    case -122:
    case -121:
      v12 = 0;
      v13 = 0;
      v14 = 55;
      v15 = 93;
      goto LABEL_14;
    case -120:
    case -119:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 31;
      goto LABEL_14;
    case -118:
    case -117:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 32;
      goto LABEL_14;
    case -116:
    case -115:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 114;
      goto LABEL_14;
    case -114:
    case -113:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 119;
      goto LABEL_14;
    case -112:
    case -111:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 43;
      goto LABEL_14;
    case -110:
    case -109:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 41;
      goto LABEL_14;
    case -108:
    case -107:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 39;
      goto LABEL_14;
    case -106:
    case -105:
      switch ( HIBYTE(next_word) & 7 )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 50;
          LOWORD(v15) = 50;
          v13 = 0;
          *(_DWORD *)(a2 + 28) = 33;
          v16 = __ROL2__(next_word, 8);
          *(_BYTE *)(a2 + 33) = 0;
          goto LABEL_177;
        case 1:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 49;
          goto LABEL_14;
        case 2:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 47;
          goto LABEL_14;
        case 3:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 48;
          goto LABEL_14;
        case 4:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 471;
          goto LABEL_14;
        case 5:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 472;
          goto LABEL_14;
        case 6:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 473;
          goto LABEL_14;
        case 7:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 474;
          goto LABEL_14;
      }
    case -104:
    case -103:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 31;
      goto LABEL_14;
    case -102:
    case -101:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 32;
      goto LABEL_14;
    case -100:
    case -99:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 114;
      goto LABEL_14;
    case -98:
    case -97:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 119;
      goto LABEL_14;
    case -96:
    case -95:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 5;
      goto LABEL_14;
    case -94:
    case -93:
      v12 = 1;
      v13 = 1;
      v14 = 333;
      v15 = 5;
      goto LABEL_14;
    case -92:
    case -91:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 3;
      goto LABEL_14;
    case -90:
    case -89:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 1;
      goto LABEL_14;
    case -88:
    case -87:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 13;
      goto LABEL_14;
    case -86:
    case -85:
      v12 = 1;
      v13 = 1;
      v14 = 333;
      v15 = 13;
      goto LABEL_14;
    case -84:
    case -83:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 11;
      goto LABEL_14;
    case -82:
    case -81:
      v12 = 0;
      v13 = 0;
      v14 = 333;
      v15 = 9;
      goto LABEL_14;
    case -80:
    case -79:
      v12 = 3;
      v13 = 3;
      v14 = 36;
      v15 = 479;
      goto LABEL_14;
    case -78:
    case -77:
      v12 = 38;
      v13 = 38;
      v14 = 45;
      v15 = 5;
      goto LABEL_14;
    case -76:
    case -75:
      v12 = 0;
      v13 = 0;
      v14 = 450;
      v15 = 5;
      goto LABEL_14;
    case -74:
    case -73:
      v12 = 0;
      v13 = 0;
      v14 = 450;
      v15 = 13;
      goto LABEL_14;
    case -72:
    case -71:
    case -70:
    case -69:
    case -68:
    case -67:
    case -66:
    case -65:
      v12 = 4;
      v13 = 4;
      v14 = 37;
      if ( (v6 & 0x8000) == 0 )
        goto LABEL_47;
      goto LABEL_49;
    case -64:
    case -63:
    case -62:
    case -61:
    case -60:
    case -59:
    case -58:
    case -57:
      v12 = 0;
      v13 = 0;
      v14 = 38;
      v15 = 104;
      goto LABEL_14;
    case -56:
    case -55:
    case -54:
    case -53:
    case -52:
    case -51:
    case -50:
    case -49:
      v12 = 0;
      v13 = 0;
      v14 = 38;
      v15 = 105;
      goto LABEL_14;
    case -48:
    case -47:
    case -46:
    case -45:
    case -44:
    case -42:
    case -41:
      v12 = 0;
      v13 = 0;
      v14 = 38;
      v15 = 475;
      goto LABEL_14;
    case -43:
      v12 = 0;
      v13 = 0;
      v14 = 8;
      v15 = 95;
      goto LABEL_14;
    case -40:
    case -39:
    case -38:
    case -37:
    case -36:
    case -34:
    case -33:
      v12 = 0;
      v13 = 0;
      v14 = 38;
      v15 = 476;
      goto LABEL_14;
    case -35:
      v76 = HIBYTE(next_word) & 0xE0;
      if ( (HIBYTE(next_word) & 0xE0) == 0x40 )
      {
        v12 = 26;
        v13 = 26;
        v14 = 5;
        v15 = 487;
        goto LABEL_14;
      }
      if ( v76 > 0x40u )
      {
        if ( v76 != 0x80 )
        {
          if ( v76 == 0xA0 )
          {
            v12 = 2;
            v13 = 2;
            v14 = 5;
            v15 = 31;
            goto LABEL_14;
          }
LABEL_565:
          *(_WORD *)(a2 + 24) = 0;
          *(_DWORD *)(a2 + 28) = 0;
          goto LABEL_39;
        }
LABEL_13:
        v12 = 0;
        v13 = 0;
        v14 = 5;
        v15 = 98;
        goto LABEL_14;
      }
      if ( !v76 )
      {
        *(_DWORD *)(a2 + 28) = 5;
        *(_WORD *)(a2 + 24) = 97;
        v17 = __ROL2__(next_word, 8) & 0x1F;
        *(_BYTE *)(a2 + 33) = 0;
LABEL_194:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v17;
        return 2;
      }
      v12 = 0;
      v13 = 0;
      v14 = 5;
      v15 = 99;
LABEL_14:
      *(_BYTE *)(a2 + 33) = v12;
      v16 = __ROL2__(v6, 8);
      *(_WORD *)(a2 + 24) = v15;
      *(_DWORD *)(a2 + 28) = v14;
      v17 = v16 & 0x1F;
      v18 = HIBYTE(v16) & 7;
      v19 = (v16 >> 5) & 0xF;
      if ( v14 > 0x37 )
      {
        if ( v14 == 333 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          v94 = v16 & 7;
          *(_WORD *)(a2 + 46) = (v16 >> 6) & 7;
          v95 = (v16 >> 3) & 7;
          switch ( (__int16)v15 )
          {
            case 0:
            case 2:
            case 4:
            case 6:
            case 7:
            case 8:
            case 10:
            case 12:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
              goto LABEL_165;
            case 1:
            case 9:
              *(_BYTE *)(a2 + 81) = 4;
              *(_WORD *)(a2 + 86) = (v16 >> 3) & 7;
              *(_QWORD *)(a2 + 96) = v94;
              *(_BYTE *)(a2 + 85) = 0;
              return 2;
            case 3:
            case 11:
              *(_BYTE *)(a2 + 81) = 4;
              *(_WORD *)(a2 + 86) = (v16 >> 3) & 7;
              *(_BYTE *)(a2 + 85) = 0;
              *(_QWORD *)(a2 + 96) = (2 * v94) & 0xE;
              return 2;
            case 5:
            case 13:
              v96 = (4 * v94) & 0x1C;
              if ( v13 == 1 )
              {
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = (unsigned __int8)v95;
                *(_BYTE *)(a2 + 121) = 5;
                *(_QWORD *)(a2 + 128) = v96;
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 4;
                *(_WORD *)(a2 + 86) = (unsigned __int8)v95;
                *(_QWORD *)(a2 + 96) = v96;
                *(_BYTE *)(a2 + 85) = 0;
              }
              return 2;
            case 31:
            case 32:
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = (v16 >> 3) & 7;
              *(_BYTE *)(a2 + 121) = 1;
              *(_WORD *)(a2 + 126) = v94;
              return 2;
            case 39:
              goto LABEL_471;
            default:
              if ( (_WORD)v15 != 114 && (_WORD)v15 != 119 )
                goto LABEL_165;
LABEL_471:
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = (v16 >> 3) & 7;
              *(_BYTE *)(a2 + 121) = 5;
              *(_QWORD *)(a2 + 128) = v94;
              break;
          }
          return 2;
        }
        *(_BYTE *)(a2 + 41) = 1;
        if ( v19 > 0xBu )
          v19 += 4;
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 86) = v17;
        *(_WORD *)(a2 + 46) = v19;
      }
      else
      {
        switch ( v14 )
        {
          case 5u:
            if ( (unsigned __int16)v15 <= 0x63u )
            {
              if ( (unsigned __int16)v15 <= 0x60u && (_WORD)v15 != 31 )
                return 2;
              goto LABEL_194;
            }
            if ( (_WORD)v15 != 487 )
              return 2;
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = v17;
            goto LABEL_166;
          case 8u:
            *(_BYTE *)(a2 + 41) = 7;
            *(_QWORD *)(a2 + 56) = (unsigned int)(*(_DWORD *)(a2 + 16) + 2 * (char)v16);
            break;
          case 9u:
            v64 = v16 & 0x1FF;
            if ( (_WORD)v15 == 485 )
            {
              *(_BYTE *)(a2 + 41) = 7;
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 16) + ((2 * v64) & 0x3FE);
              return 2;
            }
            if ( (_WORD)v15 != 487 )
              return 2;
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = v64;
            goto LABEL_166;
          case 0xAu:
            v63 = v16 & 0x3FF;
            *(_BYTE *)(a2 + 41) = 1;
            if ( (v16 & 0x200) != 0 )
              v63 = v16 | 0xFC00;
            *(_WORD *)(a2 + 46) = 31;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 31;
            *(_BYTE *)(a2 + 121) = 5;
            *(_QWORD *)(a2 + 128) = v63;
            *(_BYTE *)(a2 + 125) = 1;
            break;
          case 0x21u:
            goto LABEL_177;
          case 0x24u:
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 46) = (v16 >> 6) & 7;
            *(_WORD *)(a2 + 86) = 31;
            *(_BYTE *)(a2 + 121) = 5;
            *(_QWORD *)(a2 + 128) = (unsigned __int8)(4 * v16);
            break;
          case 0x25u:
            if ( (unsigned __int8)(v13 - 3) <= 1u )
            {
              v55 = (4 * v16) & 0x1FC;
              v54 = 3 * (v13 == 3) + 28;
            }
            else
            {
              v54 = (unsigned __int8)v16 >> 5;
              v55 = (4 * (unsigned __int8)(v16 >> 2)) & 0x1C;
            }
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int8)v18;
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = v54;
            *(_QWORD *)(a2 + 96) = v55;
            *(_BYTE *)(a2 + 85) = 0;
            break;
          case 0x26u:
            if ( (unsigned __int16)v15 > 0x69u )
            {
              if ( (unsigned __int16)(v15 - 475) <= 1u )
                goto LABEL_190;
            }
            else if ( (unsigned __int16)v15 > 0x67u )
            {
LABEL_190:
              *(_BYTE *)(a2 + 41) = 1;
              v65 = (unsigned int)(*(_DWORD *)(a2 + 16) + 2 * (char)v16);
              *(_WORD *)(a2 + 46) = (unsigned __int8)v18;
              *(_BYTE *)(a2 + 81) = 7;
              *(_QWORD *)(a2 + 96) = v65;
              return 2;
            }
            break;
          case 0x2Du:
            if ( v19 > 0xBu )
              v19 += 4;
            if ( (unsigned __int16)v15 > 0x2Bu )
            {
              if ( (unsigned __int16)v15 > 0x7Bu )
              {
                if ( (_WORD)v15 == 470 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = v19;
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_QWORD *)(a2 + 88) = (unsigned __int8)(v17 + 16);
                  return 2;
                }
              }
              else
              {
                if ( (unsigned __int16)v15 > 0x79u )
                {
LABEL_321:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = v19;
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_QWORD *)(a2 + 88) = v17;
                  return 2;
                }
                if ( (_WORD)v15 == 114 || (_WORD)v15 == 119 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = v19;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = v19;
                  *(_BYTE *)(a2 + 121) = 5;
                  *(_QWORD *)(a2 + 128) = v17;
                  return 2;
                }
              }
            }
            else if ( (unsigned __int16)v15 > 4u )
            {
              switch ( v15 )
              {
                case 5:
                  if ( v13 == 38 )
                  {
                    *(_BYTE *)(a2 + 41) = 1;
                    *(_WORD *)(a2 + 46) = v19;
                    *(_BYTE *)(a2 + 81) = 5;
                    *(_QWORD *)(a2 + 88) = (__int16)(4 * v17 - 128);
                  }
                  return 2;
                case 31:
                case 32:
                case 37:
                case 38:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = v19;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = v19;
                  *(_BYTE *)(a2 + 121) = 1;
                  *(_WORD *)(a2 + 126) = v17;
                  return 2;
                case 41:
                case 43:
                  goto LABEL_321;
                default:
                  goto LABEL_165;
              }
            }
            break;
          case 0x37u:
            if ( (_WORD)v15 == 93 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = (v16 >> 5) & 0x1F;
              *(_BYTE *)(a2 + 81) = 5;
              if ( (v16 & 0x10) != 0 )
                v17 = v16 | 0xE0;
              *(_QWORD *)(a2 + 88) = (char)v17 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
              *(_QWORD *)(a2 + 96) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (char)v17;
              return 2;
            }
            if ( (_WORD)v15 != 469 )
              break;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = (v16 >> 5) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = v17;
            return 2;
          default:
            if ( (unsigned __int16)v15 > 0x1E4u )
              break;
            if ( (unsigned __int16)v15 > 0x1DAu )
            {
              switch ( v15 )
              {
                case 475:
                case 476:
                  goto LABEL_190;
                case 477:
                case 478:
                  *(_BYTE *)(a2 + 41) = 7;
                  *(_QWORD *)(a2 + 56) = (unsigned int)(*(_DWORD *)(a2 + 16) + 2 * (char)v16);
                  break;
                case 479:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_WORD *)(a2 + 46) = (v16 >> 6) & 7;
                  *(_QWORD *)(a2 + 88) = (unsigned __int8)(4 * v16);
                  break;
                case 480:
                case 481:
                  v69 = (v16 >> 5) & 3;
                  *(_BYTE *)(a2 + 41) = 1;
                  v70 = 2 * v69 + 6;
                  *(_BYTE *)(a2 + 81) = 5;
                  if ( v69 == 3 )
                    v70 = 14;
                  *(_WORD *)(a2 + 46) = v70;
                  *(_QWORD *)(a2 + 88) = (unsigned __int8)(8 * v16);
                  break;
                case 484:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 46) = (v16 >> 3) & 0x1E;
                  *(_WORD *)(a2 + 86) = (2 * (_BYTE)v16) & 0x1E;
                  break;
              }
              return 2;
            }
            if ( (_WORD)v15 == 114 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              v99 = v16 & 0x3FF;
              *(_BYTE *)(a2 + 45) = 1;
              if ( (v16 & 0x200) != 0 )
                v99 = v16 | 0xFC00;
              *(_QWORD *)(a2 + 48) = v99;
              return 2;
            }
            break;
        }
      }
LABEL_165:
      if ( (_WORD)v15 == 487 )
      {
LABEL_166:
        if ( v13 != 26 || (*(_BYTE *)(a1 + 168) & 0x10) == 0 )
          return 2;
        sreg = get_sreg(*(_QWORD *)(a2 + 16), 35);
        if ( sreg == -1 )
        {
          sreg = *(_QWORD *)(a1 + 176);
          if ( sreg == -1 )
            return *(unsigned __int16 *)(a2 + 26);
        }
        v7 = *(_QWORD *)(a2 + 48);
        v57 = (unsigned __int16)*(_QWORD *)(a2 + 48);
        v58 = (sreg & 0xFFFFFFFFFFFFFFFCLL) + (unsigned int)(4 * v57);
        if ( !(unsigned __int8)is_mapped(v58) )
          return *(unsigned __int16 *)(a2 + 26);
        v10 = is_mapped(v58 + 3);
        if ( !v10 )
          return *(unsigned __int16 *)(a2 + 26);
        word = get_word(v58);
        v59 = get_word(v58 + 2);
        if ( (word & 0x80u) != 0 )
          return *(unsigned __int16 *)(a2 + 26);
        v9 = word | (v59 << 16);
        v11 = _byteswap_ulong(v9);
        if ( v9 == 150995008 )
        {
          *(_BYTE *)(a2 + 33) = 0;
          v20 = 0;
          v21 = 191;
          *(_WORD *)(a2 + 24) = 191;
          *(_DWORD *)(a2 + 28) = (v57 << 22) | 0x80000000;
          v22 = (v11 >> 20) & 0x1F;
          goto LABEL_66;
        }
        goto LABEL_10;
      }
      return 2;
    case -32:
    case -31:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 38;
      goto LABEL_14;
    case -30:
    case -29:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 37;
      goto LABEL_14;
    case -28:
    case -27:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 123;
      goto LABEL_14;
    case -26:
    case -25:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 122;
      goto LABEL_14;
    case -24:
      v12 = 0;
      v13 = 0;
      v14 = 8;
      v15 = 477;
      goto LABEL_14;
    case -23:
      v12 = 0;
      v13 = 0;
      v14 = 8;
      v15 = 478;
      goto LABEL_14;
    case -22:
    case -21:
      v12 = 26;
      v13 = 26;
      v14 = 9;
      v15 = 487;
      goto LABEL_14;
    case -20:
    case -19:
    case -18:
    case -17:
      v12 = 3;
      v13 = 3;
      v14 = 10;
      v15 = 114;
      goto LABEL_14;
    case -16:
    case -15:
    case -14:
    case -13:
    case -12:
    case -11:
    case -10:
    case -9:
      v12 = 3;
      v13 = 3;
      v14 = 37;
      if ( (v6 & 0x8000) == 0 )
LABEL_47:
        v15 = 5;
      else
LABEL_49:
        v15 = 13;
      goto LABEL_14;
    case -8:
    case -7:
      v12 = 0;
      v13 = 0;
      v14 = 9;
      v15 = 485;
      goto LABEL_14;
    case -6:
    case -5:
      v12 = 0;
      v13 = 0;
      v14 = 45;
      v15 = 470;
      goto LABEL_14;
    case -4:
      v12 = 0;
      v14 = 25;
      v13 = 0;
      v15 = 481;
      if ( (v6 & 0x8000) == 0 )
        v15 = 480;
      goto LABEL_14;
    case -3:
      v12 = 0;
      v13 = 0;
      v14 = 44;
      v15 = 484;
      goto LABEL_14;
    case -2:
    case -1:
      switch ( HIBYTE(next_word) & 7 )
      {
        case 0:
        case 1:
          goto LABEL_565;
        case 2:
          *(_WORD *)(a2 + 24) = 56;
          LOWORD(v15) = 56;
          v13 = 0;
          *(_DWORD *)(a2 + 28) = 33;
          v16 = __ROL2__(next_word, 8);
          *(_BYTE *)(a2 + 33) = 0;
LABEL_177:
          v60 = v16;
          *(_BYTE *)(a2 + 41) = 1;
          v61 = (v16 >> 6) & 7;
          *(_WORD *)(a2 + 46) = v61;
          v62 = (v60 >> 3) & 7;
          if ( (_WORD)v15 == 58 )
            goto LABEL_181;
          if ( (unsigned __int16)v15 > 0x3Au )
          {
            if ( (unsigned __int16)v15 > 0x1D8u )
            {
              if ( (unsigned __int16)(v15 - 473) <= 1u )
              {
                *(_BYTE *)(a2 + 81) = 5;
                *(_QWORD *)(a2 + 88) = (unsigned __int8)v62;
                return 2;
              }
              goto LABEL_165;
            }
            if ( (unsigned __int16)v15 <= 0x1D6u )
              goto LABEL_165;
          }
          else if ( (unsigned __int16)v15 <= 0x2Eu )
          {
            if ( (unsigned __int16)(v15 - 33) <= 2u )
            {
LABEL_181:
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = v61;
              *(_BYTE *)(a2 + 121) = 1;
              *(_WORD *)(a2 + 126) = (unsigned __int8)v62;
              return 2;
            }
            goto LABEL_165;
          }
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v62;
          return 2;
        case 3:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 57;
          goto LABEL_14;
        case 4:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 58;
          goto LABEL_14;
        case 5:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 34;
          goto LABEL_14;
        case 6:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 33;
          goto LABEL_14;
        case 7:
          v12 = 0;
          v13 = 0;
          v14 = 33;
          v15 = 35;
          goto LABEL_14;
      }
  }
}
