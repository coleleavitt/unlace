char __fastcall sub_BC50(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v7; // rdx
  __int64 v8; // rsi
  char result; // al
  __int64 v10; // rsi
  int v11; // edx
  __int16 v12; // cx
  char v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int16 v18; // r14
  unsigned int v19; // r13d
  int v20; // edi
  __int64 v21; // rdi
  int v22; // edi
  __int16 v23; // si
  unsigned __int16 v24; // cx
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // edi
  int v30; // r8d
  __int64 v31; // rax
  __int16 v32; // dx
  char v33; // si
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int16 v38; // ax
  unsigned int v39; // r12d
  signed int v40; // eax
  __int64 v41; // rax
  __int16 v42; // bp
  __int64 v43; // rax
  __int64 v44; // rax
  __int16 v45; // dx
  char v46; // si
  __int64 v47; // rax
  __int16 v48; // si
  char v49; // dl
  __int64 sreg; // rbp
  __int16 v51; // di
  __int64 v52; // r13
  __int64 v53; // rdx
  char v54; // si
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdi
  __int16 v59; // ax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rbp
  bool v64; // zf
  unsigned int v65; // edx
  unsigned int v66; // ecx
  int v67; // ebp
  unsigned int v68; // ecx
  unsigned __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // rsi
  __int64 v72; // rax
  int v73; // eax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  __int16 v76; // ax
  unsigned int v77; // eax
  int v78; // r13d
  unsigned int v79; // r14d
  __int16 v80; // ax
  __int16 v81; // ax
  __int16 v82; // r13
  __int64 v83; // rax
  __int64 v84; // rdx
  int next_word; // ebp
  __int64 v86; // rdx
  unsigned int v87; // eax
  unsigned int v88; // ecx
  unsigned int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int16 v92; // si
  unsigned int v93; // edx
  unsigned int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rax
  unsigned int v97; // edi
  unsigned int v98; // eax
  int v99; // r8d
  __int16 v100; // ax
  unsigned int next_dword; // eax
  int v102; // eax
  int v103; // r8d
  unsigned __int16 v104; // ax
  char v105; // dl
  unsigned int v106; // ebp
  unsigned int v107; // edx
  __int16 v108; // ax
  char v109; // dl
  __int16 v110; // ax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int16 v113; // cx
  unsigned int v114; // eax
  __int16 v115; // dx
  __int16 v116; // si
  unsigned int v117; // eax
  unsigned __int64 v118; // rdx
  __int16 v119; // ax
  __int16 v120; // ax
  unsigned int v121; // eax
  __int16 v122; // ax
  __int16 v123; // ax
  __int16 v124; // bp
  unsigned __int16 v125; // ax
  __int16 v126; // bp
  __int16 v127; // ax
  __int16 v128; // dx
  __int16 v129; // ax
  unsigned int v130; // esi
  __int16 v131; // dx
  __int16 v132; // ax
  __int16 v133; // cx
  int v134; // eax
  int v135; // ecx
  unsigned int v136; // esi
  int v137; // edx
  unsigned __int64 v138; // rsi
  __int64 v139; // rdx
  unsigned int v140; // eax
  unsigned int v141; // edx
  __int64 v142; // rax
  __int16 v143; // ax

  v3 = a2 >> 5;
  v7 = (a2 >> 5) & 0x3F;
  v8 = a2 & 0x600;
  if ( !(_DWORD)v8 )
  {
    if ( !a2 )
    {
      *(_BYTE *)(a3 + 41) = 0;
      *(_WORD *)(a3 + 24) = 33;
      *(_BYTE *)(a3 + 45) = 10;
      return 1;
    }
    v22 = *(_DWORD *)(a1 + 188);
    v23 = a2 & 0x1F;
    v24 = (unsigned __int16)a2 >> 11;
    if ( v22 > 0 )
    {
      result = v23 == 0 && (_DWORD)v7 == 2;
      if ( result )
      {
        switch ( v24 )
        {
          case 0u:
            if ( v22 <= 2 )
              goto LABEL_126;
            *(_WORD *)(a3 + 24) = 116;
            return 1;
          case 1u:
          case 2u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
          case 0x1Bu:
            if ( v22 <= 2 || ((a2 >> 11) & 0x10) != 0 )
              goto LABEL_126;
            *(_BYTE *)(a3 + 41) = 5;
            *(_WORD *)(a3 + 24) = 114;
            *(_BYTE *)(a3 + 45) = 2;
            *(_QWORD *)(a3 + 48) = v24;
            return 1;
          case 0x1Cu:
            if ( v22 <= 3 )
              goto LABEL_126;
            *(_WORD *)(a3 + 24) = 225;
            return 1;
          case 0x1Du:
            if ( v22 <= 3 )
              goto LABEL_126;
            *(_WORD *)(a3 + 24) = 223;
            return 1;
          case 0x1Eu:
            if ( v22 > 2 )
            {
              *(_WORD *)(a3 + 24) = 115;
              return 1;
            }
LABEL_126:
            if ( *(_WORD *)(a3 + 24) )
              return 1;
            *(_BYTE *)(a3 + 41) = 1;
            *(_WORD *)(a3 + 24) = 48;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = 0;
            if ( *(int *)(a1 + 188) <= 0 )
              goto LABEL_51;
            v30 = 48;
            if ( v24 )
              goto LABEL_60;
            goto LABEL_46;
          case 0x1Fu:
            *(_WORD *)(a3 + 24) = 80;
            return 1;
        }
      }
    }
    *(_BYTE *)(a3 + 41) = 1;
    v28 = dword_236C0[(unsigned int)v7];
    *(_BYTE *)(a3 + 45) = 2;
    *(_WORD *)(a3 + 46) = v23;
    *(_WORD *)(a3 + 24) = v28;
    v29 = *(_DWORD *)(a1 + 188);
    v30 = v28;
    if ( v29 <= 0 )
    {
      if ( !v24 && (_WORD)v28 == 44 )
      {
LABEL_49:
        *(_BYTE *)(a3 + 72) = 1;
        return 1;
      }
      result = (_WORD)v28 != 0;
      goto LABEL_51;
    }
    if ( !v24 )
    {
      if ( v29 <= 2 || (_DWORD)v7 )
      {
LABEL_46:
        switch ( v30 )
        {
          case 23:
            *(_WORD *)(a3 + 24) = 73;
            return 1;
          case 25:
            *(_WORD *)(a3 + 24) = 74;
            return 1;
          case 26:
            *(_WORD *)(a3 + 24) = 75;
            return 1;
          case 35:
            *(_WORD *)(a3 + 24) = 76;
            return 1;
          case 48:
            *(_WORD *)(a3 + 24) = 72;
            return 1;
          default:
            if ( (_WORD)v30 == 44 )
              goto LABEL_49;
            goto LABEL_60;
        }
      }
      switch ( v23 )
      {
        case 30:
          v59 = 118;
          goto LABEL_141;
        case 31:
          v59 = 119;
          goto LABEL_141;
        case 28:
          v59 = 202;
          if ( v29 != 3 )
            goto LABEL_141;
          break;
        default:
          v59 = 117;
          if ( v23 == 29 )
          {
LABEL_141:
            *(_WORD *)(a3 + 24) = v59;
            *(_BYTE *)(a3 + 41) = 0;
            *(_BYTE *)(a3 + 81) = 0;
            return 1;
          }
          break;
      }
      result = 0;
      *(_WORD *)(a3 + 24) = 0;
LABEL_51:
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 2;
      *(_WORD *)(a3 + 86) = v24;
      return result;
    }
    if ( (_WORD)v28 != 44 )
    {
LABEL_60:
      result = (_WORD)v30 != 0;
      goto LABEL_51;
    }
    v47 = a2 & 0xF;
    if ( (a2 & 0x10) != 0 )
    {
      v47 = (unsigned int)(2 * v47);
      v48 = 97;
      v49 = 1;
    }
    else
    {
      v48 = 96;
      v49 = 0;
    }
    *(_BYTE *)(a3 + 45) = v49;
    v34 = a3 + 40;
    *(_WORD *)(a3 + 24) = v48;
    *(_BYTE *)(a3 + 41) = 4;
    *(_WORD *)(a3 + 46) = 30;
    *(_QWORD *)(a3 + 56) = v47;
    *(_BYTE *)(a3 + 81) = 1;
    *(_BYTE *)(a3 + 85) = 2;
    *(_WORD *)(a3 + 86) = v24;
    goto LABEL_65;
  }
  if ( (unsigned int)v7 > 0x17 )
  {
    v15 = (unsigned int)(v7 - 48);
    if ( (unsigned int)v15 <= 7 )
    {
      v17 = a2;
      v16 = dword_23640[2 * v15];
      LOWORD(v17) = (unsigned __int16)a2 >> 11;
      v18 = a2 & 0x1F;
      v19 = HIWORD(a2);
      *(_WORD *)(a3 + 24) = v16;
      v20 = *(_DWORD *)(a1 + 188);
      if ( v20 > 0 && !(_WORD)v17 )
      {
        switch ( (_WORD)v16 )
        {
          case 0x22:
            if ( v20 <= 2 )
              return 0;
            if ( (a2 & 0x10000) != 0 )
            {
              if ( v20 != 3 && (a2 & 0x1F) != 0 )
              {
                *(_BYTE *)(a3 + 41) = 1;
                *(_WORD *)(a3 + 24) = 206;
                v61 = *(_QWORD *)(a3 + 8);
                *(_BYTE *)(a3 + 45) = 2;
                *(_WORD *)(a3 + 46) = v18;
                *(_QWORD *)(a3 + 96) = v61 - (v19 ^ 1);
                *(_BYTE *)(a3 + 81) = 7;
                return 1;
              }
              return 0;
            }
            v76 = *(_WORD *)(a3 + 26);
            if ( v76 == 2 )
            {
              next_word = (unsigned __int16)insn_get_next_word(a3, v17, dword_23640);
              v77 = next_word | ((unsigned int)insn_get_next_word(a3, v17, v86) << 16);
              if ( (v77 & 1) != 0 )
                return 0;
            }
            else
            {
              if ( v76 != 4 )
                goto LABEL_157;
              v77 = v19 | ((unsigned int)insn_get_next_word(a3, v17, dword_23640) << 16);
            }
            *(_WORD *)(a3 + 46) = v18;
            *(_BYTE *)(a3 + 72) |= 6u;
            *(_WORD *)(a3 + 24) = 44;
            *(_BYTE *)(a3 + 45) = 2;
            *(_QWORD *)(a3 + 56) = v77;
            *(_WORD *)(a3 + 41) = 516;
            return 1;
          case 0x25:
            *(_WORD *)(a3 + 24) = 38;
            v73 = insn_get_next_word(a3, v17, dword_23640);
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 41) = 517;
            v64 = *(_WORD *)(a3 + 24) == 0;
            *(_BYTE *)(a3 + 81) = 1;
            *(_QWORD *)(a3 + 48) = v19 | (v73 << 16);
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = v18;
            return !v64;
          case 0x18:
          case 0x24:
            *(_DWORD *)(a3 + 28) |= 1u;
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 0;
            *(_QWORD *)(a3 + 48) = (a2 >> 1) & 0x1F;
            *(_BYTE *)(a3 + 81) = 9;
            v43 = sub_BB80(a2);
            *(_BYTE *)(a3 + 85) = 7;
            *(_QWORD *)(a3 + 88) = v43;
            if ( (a2 & 0x1F0000) != 0 )
            {
              *(_BYTE *)(a3 + 121) = 1;
              *(_BYTE *)(a3 + 125) = 2;
              *(_WORD *)(a3 + 126) = BYTE2(a2) & 0x1F;
              *(_BYTE *)(a3 + 152) = 1;
              *(_WORD *)(a3 + 24) = 78;
            }
            else
            {
              *(_WORD *)(a3 + 24) = 77;
            }
            return 1;
        }
      }
      v21 = v19;
      if ( dword_23640[2 * v15 + 1] == 1 )
        v21 = SHIWORD(a2);
      *(_BYTE *)(a3 + 72) |= 2u;
      *(_BYTE *)(a3 + 45) = 2;
      *(_QWORD *)(a3 + 48) = v21;
      *(_WORD *)(a3 + 41) = 517;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 2;
      *(_WORD *)(a3 + 86) = v18;
      *(_BYTE *)(a3 + 121) = 1;
      *(_BYTE *)(a3 + 125) = 2;
      *(_WORD *)(a3 + 126) = v17;
      if ( (_WORD)v16 == 70 || (_WORD)v16 == 37 )
      {
        if ( v18 != 3 || (_WORD)v17 != 3 )
          return 1;
        goto LABEL_93;
      }
      return (_WORD)v16 != 0;
    }
    if ( (unsigned int)(v7 - 56) <= 1 )
    {
      v31 = HIWORD(a2);
      if ( (_DWORD)v7 == 56 )
      {
        v32 = 40;
        v33 = 0;
      }
      else if ( (a2 & 0x10000) != 0 )
      {
        v31 = (unsigned int)v31 & 0xFFFFFFFE;
        v32 = 42;
        v33 = 2;
      }
      else
      {
        v32 = 41;
        v33 = 1;
      }
      *(_WORD *)(a3 + 24) = v32;
      LODWORD(v31) = (__int16)v31;
      *(_BYTE *)(a3 + 72) |= 2u;
      v34 = a3 + 40;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 2;
      *(_WORD *)(a3 + 86) = (unsigned __int16)a2 >> 11;
      *(_BYTE *)(a3 + 45) = v33;
      *(_WORD *)(a3 + 46) = a2 & 0x1F;
      *(_QWORD *)(a3 + 56) = v31;
      *(_WORD *)(a3 + 41) = 516;
      goto LABEL_65;
    }
    if ( (unsigned int)(v7 - 58) <= 1 )
    {
      v44 = HIWORD(a2);
      if ( (_DWORD)v7 == 58 )
      {
        v45 = 10;
        v46 = 0;
      }
      else if ( (a2 & 0x10000) != 0 )
      {
        v44 = (unsigned int)v44 & 0xFFFFFFFE;
        v45 = 12;
        v46 = 2;
      }
      else
      {
        v45 = 11;
        v46 = 1;
      }
      *(_WORD *)(a3 + 24) = v45;
      LODWORD(v44) = (__int16)v44;
      *(_BYTE *)(a3 + 112) |= 2u;
      v34 = a3 + 80;
      *(_BYTE *)(a3 + 41) = 1;
      *(_BYTE *)(a3 + 45) = 2;
      *(_WORD *)(a3 + 46) = (unsigned __int16)a2 >> 11;
      *(_BYTE *)(a3 + 85) = v46;
      *(_WORD *)(a3 + 86) = a2 & 0x1F;
      *(_QWORD *)(a3 + 96) = v44;
      *(_WORD *)(a3 + 81) = 516;
      goto LABEL_65;
    }
    v25 = *(_DWORD *)(a1 + 188);
    if ( v25 > 0 && (a2 & 0x10000) != 0 )
    {
      if ( (unsigned int)(v7 - 60) <= 1 )
      {
        v71 = HIWORD(a2);
        if ( !((unsigned __int16)a2 >> 11) )
        {
          if ( (BYTE2(a2) & 0x1F) == 1 )
          {
            *(_DWORD *)(a3 + 28) |= 1u;
            *(_BYTE *)(a3 + 41) = 9;
            v96 = sub_BB80(a2);
            *(_BYTE *)(a3 + 45) = 7;
            *(_QWORD *)(a3 + 48) = v96;
            *(_BYTE *)(a3 + 81) = 5;
            *(_BYTE *)(a3 + 85) = 0;
            *(_QWORD *)(a3 + 88) = (a2 >> 1) & 0x1F;
            *(_WORD *)(a3 + 24) = 85;
            return 1;
          }
          if ( (BYTE2(a2) & 7) == 3 )
          {
            *(_DWORD *)(a3 + 28) |= 1u;
            v82 = (unsigned __int8)(BYTE2(a2) & 0x1F) >> 3;
            *(_BYTE *)(a3 + 41) = 9;
            v83 = sub_BB80(a2);
            *(_BYTE *)(a3 + 45) = 7;
            *(_QWORD *)(a3 + 48) = v83;
            *(_BYTE *)(a3 + 81) = 5;
            *(_BYTE *)(a3 + 85) = 0;
            *(_QWORD *)(a3 + 88) = (a2 >> 1) & 0x1F;
            *(_WORD *)(a3 + 24) = 84;
            switch ( v82 )
            {
              case 2:
                v102 = insn_get_next_word(a3, v71, v84);
                *(_BYTE *)(a3 + 121) = 5;
                v64 = *(_WORD *)(a3 + 24) == 0;
                *(_BYTE *)(a3 + 125) = 2;
                *(_QWORD *)(a3 + 128) = v102 << 16;
                return !v64;
              case 3:
                next_dword = insn_get_next_dword(a3);
                v64 = *(_WORD *)(a3 + 24) == 0;
                *(_BYTE *)(a3 + 121) = 5;
                *(_BYTE *)(a3 + 125) = 2;
                *(_QWORD *)(a3 + 128) = next_dword;
                return !v64;
              case 1:
                v100 = insn_get_next_word(a3, v71, v84);
                v64 = *(_WORD *)(a3 + 24) == 0;
                *(_BYTE *)(a3 + 121) = 5;
                *(_BYTE *)(a3 + 125) = 2;
                *(_QWORD *)(a3 + 128) = v100;
                return !v64;
            }
            *(_BYTE *)(a3 + 121) = 1;
            *(_BYTE *)(a3 + 125) = 2;
            *(_WORD *)(a3 + 126) = 3;
            return 1;
          }
          if ( v25 > 2 )
          {
            v78 = v3 & 1;
            v79 = a2 >> 27;
            switch ( BYTE2(a2) & 0xF )
            {
              case 5:
                if ( *(_WORD *)(a3 + 26) != 4 || !(unsigned __int8)sub_A730(a2, a3, 0, 0) )
                  return sub_A950(a1, a2, a3);
                v81 = 98;
                if ( !v78 )
                  v81 = 40;
                goto LABEL_198;
              case 7:
                if ( *(_WORD *)(a3 + 26) != 4 || !(unsigned __int8)sub_A730(a2, a3, 0, 1) )
                  return sub_A950(a1, a2, a3);
                v81 = 99;
                if ( !v78 )
                  v81 = 41;
                goto LABEL_198;
              case 9:
                if ( v25 == 3 && (v3 & 1) != 0 || *(_WORD *)(a3 + 26) != 4 || !(unsigned __int8)sub_A730(a2, a3, 0, 2) )
                  return sub_A950(a1, a2, a3);
                v81 = 207;
                if ( !v78 )
                  v81 = 42;
LABEL_198:
                *(_WORD *)(a3 + 24) = v81;
                *(_BYTE *)(a3 + 81) = 1;
                *(_BYTE *)(a3 + 85) = 2;
                *(_WORD *)(a3 + 86) = v79;
                return 1;
              case 0xD:
                if ( *(_WORD *)(a3 + 26) != 4 || !(unsigned __int8)sub_A730(a2, a3, 1, v78) )
                  return sub_A950(a1, a2, a3);
                *(_BYTE *)(a3 + 41) = 1;
                *(_WORD *)(a3 + 24) = v78 + 10;
                *(_BYTE *)(a3 + 45) = 2;
                *(_WORD *)(a3 + 46) = v79;
                return 1;
              case 0xF:
                if ( v25 == 3 && (v3 & 1) != 0 || *(_WORD *)(a3 + 26) != 4 || !(unsigned __int8)sub_A730(a2, a3, 1, 2) )
                  return sub_A950(a1, a2, a3);
                v80 = 208;
                if ( !v78 )
                  v80 = 12;
                *(_WORD *)(a3 + 24) = v80;
                *(_BYTE *)(a3 + 41) = 1;
                *(_BYTE *)(a3 + 45) = 2;
                *(_WORD *)(a3 + 46) = v79;
                return 1;
              default:
                return sub_A950(a1, a2, a3);
            }
          }
          return 0;
        }
        v72 = v71 & 0xFFFFFFFE | v3 & 1;
        *(_BYTE *)(a3 + 72) |= 2u;
        LODWORD(v72) = (__int16)v72;
        *(_WORD *)(a3 + 46) = a2 & 0x1F;
        v34 = a3 + 40;
        *(_WORD *)(a3 + 24) = 98;
        *(_BYTE *)(a3 + 45) = 0;
        *(_QWORD *)(a3 + 56) = v72;
        *(_WORD *)(a3 + 41) = 516;
        *(_BYTE *)(a3 + 81) = 1;
        *(_BYTE *)(a3 + 85) = 2;
        *(_WORD *)(a3 + 86) = (unsigned __int16)a2 >> 11;
LABEL_65:
        v35 = sub_EFB0(a1, *(_QWORD *)(a3 + 16));
        if ( v35 != -1 )
        {
          *(_BYTE *)(v34 + 1) = 2;
          v36 = *(_QWORD *)(v34 + 16);
          if ( (unsigned __int16)(*(_WORD *)(a3 + 24) - 96) > 3u )
            *(_QWORD *)(v34 + 16) = v35 + v36;
          else
            *(_QWORD *)(v34 + 16) = (__int16)v36 + v35;
          goto LABEL_68;
        }
        if ( !*(_WORD *)(v34 + 6) )
        {
          *(_BYTE *)(v34 + 32) &= ~2u;
          v58 = *(_QWORD *)(v34 + 16);
          *(_BYTE *)(v34 + 1) = 2;
          if ( (unsigned __int16)(*(_WORD *)(a3 + 24) - 98) <= 1u )
            *(_QWORD *)(v34 + 16) = (__int16)v58;
LABEL_68:
          v37 = getseg();
          if ( !v37 || *(_BYTE *)(v37 + 43) != 2 )
          {
            *(_QWORD *)(v34 + 16) = (unsigned int)*(_QWORD *)(v34 + 16);
            return *(_WORD *)(a3 + 24) != 0;
          }
          return *(_WORD *)(a3 + 24) != 0;
        }
        if ( *(_BYTE *)(v34 + 1) == 2 )
          goto LABEL_68;
        return *(_WORD *)(a3 + 24) != 0;
      }
      if ( (_DWORD)v7 != 62 )
      {
        if ( (_DWORD)v7 != 63 )
        {
LABEL_33:
          if ( (~(_WORD)a2 & 0x780) == 0 )
          {
            v65 = a2;
            v66 = a2;
            *(_BYTE *)(a3 + 41) = 7;
            v67 = (a2 << 16) & 0x3F0000;
            v68 = v66 >> 11;
            v69 = v67 | HIWORD(v65) & 0xFFFFFFFE;
            if ( v67 & 0x200000 | HIWORD(v65) & 0x200000 )
              v69 = v67 | HIWORD(v65) & 0xFFFFFFFE | 0xFFFFFFFFFFC00000LL;
            *(_QWORD *)(a3 + 56) = *(_QWORD *)(a3 + 8) + v69;
            v70 = v68 & 0x1F;
            if ( v70 )
            {
              *(_BYTE *)(a3 + 81) = 1;
              *(_WORD *)(a3 + 24) = 45;
              *(_BYTE *)(a3 + 85) = 2;
              *(_WORD *)(a3 + 86) = v70;
              return 1;
            }
            goto LABEL_156;
          }
          v26 = (a2 >> 7) & 0xF;
          if ( v26 != 11 )
          {
            if ( v26 <= 5 )
            {
              *(_WORD *)(a3 + 24) = 0;
              return 0;
            }
            v27 = a2 & 0x7F;
            switch ( v26 )
            {
              case 6u:
                v51 = 16;
                v52 = 40;
                v54 = 0;
                v55 = 0;
                v53 = 1;
                break;
              case 8u:
                v27 = (unsigned int)(2 * v27);
                v51 = 17;
                v52 = 40;
                v55 = 0;
                v54 = 1;
                v53 = 1;
                break;
              case 0xAu:
                v27 = (unsigned int)(2 * v27);
                if ( (a2 & 1) != 0 )
                {
                  v27 = (unsigned int)v27 & 0xFFFFFFFC;
                  v51 = 15;
                  v52 = 80;
                  v53 = 0;
                  v54 = 2;
                  v55 = 1;
                }
                else
                {
                  v51 = 18;
                  v52 = 40;
                  v54 = 2;
                  v55 = 0;
                  v53 = 1;
                }
                break;
              case 7u:
                v51 = 13;
                v52 = 80;
                v54 = 0;
                v53 = 0;
                v55 = 1;
                break;
              case 9u:
                v27 = (unsigned int)(2 * v27);
                v51 = 14;
                v52 = 80;
                v53 = 0;
                v54 = 1;
                v55 = 1;
                break;
              default:
                return 0;
            }
            v34 = a3 + v52;
            v56 = a3 + 40 * v53;
            v57 = a3 + 40 * v55;
            *(_WORD *)(a3 + 24) = v51;
            *(_BYTE *)(v56 + 41) = 1;
            *(_BYTE *)(v56 + 45) = 2;
            *(_WORD *)(v56 + 46) = (unsigned __int16)a2 >> 11;
            *(_BYTE *)(v57 + 41) = 4;
            *(_BYTE *)(v57 + 45) = v54;
            *(_WORD *)(v57 + 46) = 30;
            *(_QWORD *)(v57 + 56) = v27;
            goto LABEL_65;
          }
          v74 = 2 * ((a2 >> 8) & 0xF8 | (a2 >> 4) & 7);
          if ( (v74 & 0x100) != 0 )
            v74 = (2 * ((a2 >> 8) & 0xF8 | (a2 >> 4) & 7)) | 0xFFFFFFFFFFFFFE00LL;
LABEL_169:
          v75 = *(_QWORD *)(a3 + 8) + v74;
          *(_BYTE *)(a3 + 45) = 1;
          v16 = dword_23B20[a2 & 0xF];
          *(_BYTE *)(a3 + 41) = 7;
          *(_QWORD *)(a3 + 56) = v75;
          *(_WORD *)(a3 + 24) = v16;
          return (_WORD)v16 != 0;
        }
        if ( a2 == -1 )
        {
LABEL_212:
          *(_WORD *)(a3 + 24) = 1;
          return 1;
        }
        if ( *(_WORD *)(a3 + 24) )
          return 1;
        if ( v25 != 2 )
          goto LABEL_225;
        goto LABEL_245;
      }
    }
    else if ( (_DWORD)v7 != 62 )
    {
      if ( (_DWORD)v7 != 63 )
        goto LABEL_33;
      if ( (a2 & 0x4010000) == 0x4000000 )
        return sub_ACC0(a1, a2, a3);
      switch ( a2 )
      {
        case 0x16087E0u:
          *(_WORD *)(a3 + 24) = 47;
          return 1;
        case 0x16007E0u:
          *(_WORD *)(a3 + 24) = 49;
          return 1;
        case 0x14007E0u:
          *(_WORD *)(a3 + 24) = 28;
          return 1;
        case 0x12007E0u:
          *(_WORD *)(a3 + 24) = 46;
          return 1;
        case 0xFFFFFFFF:
          goto LABEL_212;
      }
      if ( v3 == 524351 )
      {
        *(_WORD *)(a3 + 24) = 6;
        *(_BYTE *)(a3 + 41) = 5;
        *(_BYTE *)(a3 + 45) = 0;
        *(_QWORD *)(a3 + 48) = a2 & 0x1F;
        return 1;
      }
      if ( *(_WORD *)(a3 + 24) )
        return 1;
      if ( v25 != 2 )
      {
        if ( v25 <= 0 )
          goto LABEL_339;
LABEL_225:
        if ( v25 > 2 )
        {
          if ( a2 == 21497824 )
          {
            *(_WORD *)(a3 + 24) = 112;
            return *(_WORD *)(a3 + 24) != 0;
          }
          if ( a2 == 21628896 )
          {
            *(_WORD *)(a3 + 24) = 113;
            return *(_WORD *)(a3 + 24) != 0;
          }
          if ( (a2 & 0xC7FFFFE0) == 0x160D7E0 )
          {
            *(_WORD *)(a3 + 24) = 120;
            *(_BYTE *)(a3 + 41) = 5;
            *(_BYTE *)(a3 + 45) = 2;
            *(_QWORD *)(a3 + 48) = a2 & 0x1F | (a2 >> 22) & 0xE0;
            return *(_WORD *)(a3 + 24) != 0;
          }
          if ( v25 != 3 )
          {
            v87 = HIWORD(a2);
            v88 = HIWORD(a2) & 0x7FF;
            if ( v88 == 306 )
            {
              *(_WORD *)(a3 + 24) = 226;
              return *(_WORD *)(a3 + 24) != 0;
            }
            if ( v88 > 0x132 )
            {
              if ( v88 <= 0x37A )
              {
                if ( v88 > 0x36F )
                {
                  switch ( HIWORD(a2) & 0x7FF )
                  {
                    case 0x370:
                      *(_BYTE *)(a3 + 41) = 3;
                      *(_BYTE *)(a3 + 45) = 0;
                      v95 = (unsigned __int16)a2 >> 11;
                      *(_WORD *)(a3 + 46) = a2 & 0x1F;
                      if ( v95 == 1 )
                      {
                        *(_WORD *)(a3 + 24) = 259;
                      }
                      else if ( v95 == 4 )
                      {
                        *(_BYTE *)(a3 + 72) |= 0x10u;
                        *(_WORD *)(a3 + 24) = 40;
                      }
                      else if ( v95 > 4 )
                      {
                        if ( v95 == 5 )
                        {
                          *(_BYTE *)(a3 + 72) |= 0x10u;
                          *(_WORD *)(a3 + 24) = 98;
                        }
                      }
                      else if ( v95 == 2 )
                      {
                        *(_BYTE *)(a3 + 72) |= 8u;
                        *(_WORD *)(a3 + 24) = 40;
                      }
                      else if ( v95 == 3 )
                      {
                        *(_BYTE *)(a3 + 72) |= 8u;
                        *(_WORD *)(a3 + 24) = 98;
                      }
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = a2 >> 27;
                      goto LABEL_254;
                    case 0x372:
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 0;
                      *(_WORD *)(a3 + 46) = a2 >> 27;
                      *(_BYTE *)(a3 + 81) = 3;
                      *(_BYTE *)(a3 + 85) = 0;
                      *(_WORD *)(a3 + 86) = a2 & 0x1F;
                      v134 = (unsigned __int16)a2 >> 11;
                      if ( !((unsigned __int16)a2 >> 11) )
                      {
                        *(_WORD *)(a3 + 24) = 262;
                        return *(_WORD *)(a3 + 24) != 0;
                      }
                      *(_WORD *)(a3 + 24) = 10;
                      if ( v134 == 2 )
                      {
                        *(_BYTE *)(a3 + 112) |= 8u;
                      }
                      else
                      {
                        if ( v134 != 4 )
                          goto LABEL_239;
                        *(_BYTE *)(a3 + 112) |= 0x10u;
                      }
                      break;
                    case 0x374:
                      *(_WORD *)(a3 + 24) = 260;
                      *(_BYTE *)(a3 + 41) = 3;
                      *(_BYTE *)(a3 + 45) = 0;
                      *(_WORD *)(a3 + 46) = a2 & 0x1F;
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 1;
                      *(_WORD *)(a3 + 86) = a2 >> 27;
                      return *(_WORD *)(a3 + 24) != 0;
                    case 0x376:
                      *(_WORD *)(a3 + 24) = 263;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 1;
                      *(_WORD *)(a3 + 46) = a2 >> 27;
                      *(_BYTE *)(a3 + 81) = 3;
                      *(_BYTE *)(a3 + 85) = 1;
                      *(_WORD *)(a3 + 86) = a2 & 0x1F;
                      return *(_WORD *)(a3 + 24) != 0;
                    case 0x378:
                      *(_WORD *)(a3 + 24) = 209;
                      *(_BYTE *)(a3 + 41) = 3;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = a2 & 0x1F;
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = a2 >> 27;
                      return *(_WORD *)(a3 + 24) != 0;
                    case 0x37A:
                      *(_WORD *)(a3 + 24) = 210;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = a2 >> 27;
                      *(_BYTE *)(a3 + 81) = 3;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = a2 & 0x1F;
                      return *(_WORD *)(a3 + 24) != 0;
                    default:
                      goto LABEL_460;
                  }
                  return *(_WORD *)(a3 + 24) != 0;
                }
                if ( v88 == 356 )
                {
                  *(_WORD *)(a3 + 24) = 254;
                  *(_BYTE *)(a3 + 41) = 11;
                  *(_WORD *)(a3 + 64) = (unsigned __int16)a2 >> 11;
                  *(_BYTE *)(a3 + 45) = 1;
                  *(_WORD *)(a3 + 66) = a2 >> 27;
                  *(_BYTE *)(a3 + 81) = 3;
                  *(_BYTE *)(a3 + 85) = 2;
                  *(_WORD *)(a3 + 86) = a2 & 0x1F;
                  return *(_WORD *)(a3 + 24) != 0;
                }
                if ( v88 > 0x164 )
                {
                  if ( v88 == 358 )
                  {
                    *(_WORD *)(a3 + 24) = 253;
                    *(_BYTE *)(a3 + 41) = 3;
                    *(_WORD *)(a3 + 46) = a2 & 0x1F;
                    *(_BYTE *)(a3 + 45) = 2;
                    *(_BYTE *)(a3 + 81) = 11;
                    *(_WORD *)(a3 + 104) = (unsigned __int16)a2 >> 11;
                    *(_WORD *)(a3 + 106) = a2 >> 27;
                    *(_BYTE *)(a3 + 85) = 1;
                    return *(_WORD *)(a3 + 24) != 0;
                  }
                }
                else
                {
                  if ( v88 == 308 )
                  {
                    *(_WORD *)(a3 + 24) = 227;
                    return *(_WORD *)(a3 + 24) != 0;
                  }
                  if ( v88 == 352 )
                  {
                    v135 = a2 & 0x1F;
                    v136 = a2 >> 27;
                    v137 = (unsigned __int16)a2 >> 11;
                    switch ( (unsigned __int16)a2 >> 11 )
                    {
                      case 0:
                        if ( v87 != 33120 )
                          goto LABEL_254;
                        *(_WORD *)(a3 + 24) = 261;
                        return *(_WORD *)(a3 + 24) != 0;
                      case 1:
                      case 2:
                      case 3:
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                      case 9:
                      case 10:
                      case 13:
                      case 14:
                      case 15:
                      case 17:
                      case 18:
                      case 19:
                      case 20:
                      case 21:
                      case 22:
                      case 23:
                        goto LABEL_239;
                      case 8:
                      case 11:
                      case 12:
                        if ( v137 == 8 )
                        {
                          v143 = 214;
                        }
                        else
                        {
                          v143 = 215;
                          if ( v137 == 11 )
                            v143 = 222;
                        }
                        *(_DWORD *)(a3 + 28) |= 1u;
                        *(_WORD *)(a3 + 24) = v143;
                        *(_BYTE *)(a3 + 41) = 11;
                        *(_WORD *)(a3 + 64) = v135;
                        *(_WORD *)(a3 + 66) = v136;
                        return *(_WORD *)(a3 + 24) != 0;
                      case 16:
                        if ( v87 == 49504 )
                        {
                          *(_WORD *)(a3 + 24) = 242;
                        }
                        else if ( v87 > 0xC160 )
                        {
                          if ( v87 == 57696 )
                          {
                            *(_WORD *)(a3 + 24) = 244;
                          }
                          else
                          {
                            if ( v87 != 59744 )
                              goto LABEL_239;
                            *(_WORD *)(a3 + 24) = 241;
                          }
                        }
                        else if ( v87 == 33120 )
                        {
                          *(_WORD *)(a3 + 24) = 243;
                        }
                        else
                        {
                          if ( v87 != 35168 )
                            goto LABEL_239;
                          *(_WORD *)(a3 + 24) = 240;
                        }
                        break;
                      case 24:
                        *(_WORD *)(a3 + 24) = 45;
                        *(_BYTE *)(a3 + 41) = 1;
                        *(_BYTE *)(a3 + 45) = 2;
                        *(_WORD *)(a3 + 46) = v135;
                        *(_BYTE *)(a3 + 72) = 1;
                        *(_BYTE *)(a3 + 81) = 1;
                        *(_BYTE *)(a3 + 85) = 2;
                        *(_WORD *)(a3 + 86) = v136;
                        return *(_WORD *)(a3 + 24) != 0;
                      case 25:
                        *(_WORD *)(a3 + 24) = 224;
                        *(_BYTE *)(a3 + 41) = 5;
                        *(_BYTE *)(a3 + 45) = 2;
                        *(_QWORD *)(a3 + 48) = (int)(v135 | (a2 >> 22) & 0x3E0);
                        return *(_WORD *)(a3 + 24) != 0;
                      case 26:
                        *(_WORD *)(a3 + 24) = 229;
                        *(_BYTE *)(a3 + 41) = 5;
                        *(_BYTE *)(a3 + 45) = 2;
                        *(_QWORD *)(a3 + 48) = v135 | (a2 >> 22) & 0xE0;
                        return *(_WORD *)(a3 + 24) != 0;
                      case 27:
                        *(_WORD *)(a3 + 24) = 213;
                        *(_BYTE *)(a3 + 41) = 5;
                        *(_BYTE *)(a3 + 45) = 2;
                        *(_QWORD *)(a3 + 48) = v136;
                        *(_BYTE *)(a3 + 81) = 1;
                        *(_BYTE *)(a3 + 85) = 2;
                        *(_WORD *)(a3 + 86) = v135;
                        return *(_WORD *)(a3 + 24) != 0;
                      case 28:
                      case 29:
                      case 30:
                      case 31:
                        v142 = v136 | (32 * (_BYTE)v137) & 0x60;
                        if ( v135 == 31 && (_DWORD)v142 == 126 )
                        {
                          *(_WORD *)(a3 + 24) = 211;
                        }
                        else
                        {
                          *(_WORD *)(a3 + 24) = 212;
                          *(_BYTE *)(a3 + 41) = 5;
                          *(_BYTE *)(a3 + 45) = 2;
                          *(_QWORD *)(a3 + 48) = v142;
                          *(_BYTE *)(a3 + 81) = 1;
                          *(_BYTE *)(a3 + 85) = 2;
                          *(_WORD *)(a3 + 86) = v135;
                        }
                        return *(_WORD *)(a3 + 24) != 0;
                    }
                    return *(_WORD *)(a3 + 24) != 0;
                  }
                }
              }
            }
            else
            {
              if ( v88 > 0x54 )
              {
                if ( v88 == 272 )
                {
                  *(_WORD *)(a3 + 24) = 228;
                  *(_BYTE *)(a3 + 41) = 5;
                  *(_BYTE *)(a3 + 45) = 0;
                  *(_QWORD *)(a3 + 48) = a2 & 0x1F;
                  return *(_WORD *)(a3 + 24) != 0;
                }
                if ( v88 <= 0x110 && (HIWORD(a2) & 0x7FD) == 0xC4 )
                {
                  v104 = a2;
                  v105 = a2;
                  *(_WORD *)(a3 + 24) = 205;
                  v106 = a2 >> 27;
                  v107 = v105 & 0x1F;
                  v108 = v104 >> 11;
                  if ( v88 == 196 )
                  {
                    v111 = v107;
                    v109 = 5;
                    *(_QWORD *)(a3 + 48) = v111;
                  }
                  else
                  {
                    *(_WORD *)(a3 + 46) = v107;
                    v109 = 1;
                  }
                  *(_BYTE *)(a3 + 45) = 2;
                  *(_BYTE *)(a3 + 41) = v109;
                  *(_BYTE *)(a3 + 81) = 1;
                  *(_BYTE *)(a3 + 85) = 2;
                  *(_WORD *)(a3 + 86) = v108;
                  *(_BYTE *)(a3 + 121) = 1;
                  *(_BYTE *)(a3 + 125) = 2;
                  *(_WORD *)(a3 + 126) = v106;
                  return *(_WORD *)(a3 + 24) != 0;
                }
              }
              else if ( (a2 & 0x7F80000) != 0 )
              {
                switch ( HIWORD(a2) & 0x7FF )
                {
                  case 8:
                    *(_WORD *)(a3 + 24) = 255;
                    *(_BYTE *)(a3 + 41) = 1;
                    *(_BYTE *)(a3 + 45) = 0;
                    goto LABEL_430;
                  case 0xA:
                    *(_WORD *)(a3 + 24) = 256;
                    *(_BYTE *)(a3 + 41) = 1;
                    *(_BYTE *)(a3 + 45) = 0;
                    goto LABEL_430;
                  case 0xC:
                    *(_WORD *)(a3 + 24) = 257;
                    goto LABEL_429;
                  case 0xE:
                    *(_WORD *)(a3 + 24) = 258;
LABEL_429:
                    *(_BYTE *)(a3 + 41) = 1;
                    *(_BYTE *)(a3 + 45) = 2;
LABEL_430:
                    *(_BYTE *)(a3 + 81) = 1;
                    *(_BYTE *)(a3 + 85) = 1;
                    *(_WORD *)(a3 + 46) = a2 & 0x1F;
                    *(_WORD *)(a3 + 86) = (unsigned __int16)a2 >> 11;
                    return *(_WORD *)(a3 + 24) != 0;
                  case 0x20:
                  case 0x40:
                    v130 = a2 >> 27;
                    v131 = a2 & 0x1F;
                    v132 = (unsigned __int16)a2 >> 11;
                    if ( v88 == 32 )
                    {
                      v132 += 32;
                      v133 = 39;
                    }
                    else
                    {
                      v131 += 32;
                      v133 = 9;
                    }
                    *(_WORD *)(a3 + 24) = v133;
                    *(_BYTE *)(a3 + 41) = 1;
                    *(_BYTE *)(a3 + 45) = 2;
                    *(_WORD *)(a3 + 46) = v131;
                    *(_BYTE *)(a3 + 81) = 1;
                    *(_BYTE *)(a3 + 85) = 2;
                    *(_WORD *)(a3 + 86) = v132;
                    if ( v130 )
                    {
                      *(_BYTE *)(a3 + 121) = 5;
                      *(_BYTE *)(a3 + 125) = 2;
                      *(_QWORD *)(a3 + 128) = v130;
                    }
                    return *(_WORD *)(a3 + 24) != 0;
                  case 0x30:
                  case 0x50:
                    v89 = a2 & 0x1F;
                    v90 = (unsigned __int16)a2 >> 11;
                    if ( v88 != 48 )
                    {
                      *(_WORD *)(a3 + 24) = 237;
                      goto LABEL_237;
                    }
                    *(_WORD *)(a3 + 24) = 236;
                    goto LABEL_441;
                  case 0x32:
                  case 0x52:
                    v121 = a2 >> 27;
                    if ( a2 >> 27 == 1 )
                    {
                      v125 = a2;
                      v126 = a2 & 0x1F;
                      v127 = v125 >> 11;
                      if ( v88 == 50 )
                      {
                        v128 = v127;
                        v129 = 238;
                      }
                      else
                      {
                        v128 = v126;
                        v126 = v127;
                        v129 = 239;
                      }
                      *(_WORD *)(a3 + 24) = v129;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = v128;
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = v126;
                    }
                    else if ( v121 == 31 )
                    {
                      if ( v88 == 50 )
                      {
                        v124 = a2 & 0x1F;
                        v123 = 234;
                      }
                      else
                      {
                        v123 = 235;
                        v124 = (unsigned __int16)a2 >> 11;
                      }
                      *(_WORD *)(a3 + 24) = v123;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = v124;
                    }
                    else
                    {
                      if ( v121 )
                        goto LABEL_239;
                      v122 = 233;
                      if ( v88 == 50 )
                        v122 = 232;
                      *(_WORD *)(a3 + 24) = v122;
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = (unsigned __int16)a2 >> 11;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = a2 & 0x1F;
                    }
                    break;
                  case 0x34:
                  case 0x54:
                    v89 = a2 & 0x1F;
                    v90 = (unsigned __int16)a2 >> 11;
                    if ( v88 == 52 )
                    {
                      *(_WORD *)(a3 + 24) = 230;
LABEL_441:
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_WORD *)(a3 + 46) = v89;
                      *(_BYTE *)(a3 + 81) = 5;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_QWORD *)(a3 + 88) = v90;
                    }
                    else
                    {
                      *(_WORD *)(a3 + 24) = 231;
LABEL_237:
                      *(_BYTE *)(a3 + 41) = 5;
                      *(_BYTE *)(a3 + 45) = 2;
                      *(_QWORD *)(a3 + 48) = v89;
                      *(_BYTE *)(a3 + 81) = 1;
                      *(_BYTE *)(a3 + 85) = 2;
                      *(_WORD *)(a3 + 86) = v90;
                    }
                    *(_BYTE *)(a3 + 121) = 5;
                    *(_BYTE *)(a3 + 125) = 2;
                    *(_QWORD *)(a3 + 128) = a2 >> 27;
                    goto LABEL_239;
                  default:
                    goto LABEL_308;
                }
                return *(_WORD *)(a3 + 24) != 0;
              }
LABEL_308:
              if ( a2 == 18878432 )
              {
                *(_WORD *)(a3 + 24) = 203;
                return *(_WORD *)(a3 + 24) != 0;
              }
            }
LABEL_460:
            if ( (a2 & 0x10000) != 0 )
            {
LABEL_254:
              if ( *(_WORD *)(a3 + 24) )
                return 1;
              goto LABEL_242;
            }
            v138 = (a2 >> 20) & 0x7F;
            if ( (unsigned int)v138 <= 0xD )
            {
              v139 = 10752;
              if ( _bittest64(&v139, v138) )
              {
                v140 = a2 >> 28;
                v141 = (HIWORD(a2) >> 1) & 7 | HIBYTE(HIWORD(a2)) & 8;
                if ( ((a2 >> 20) & 0x7D) == 9 )
                {
                  v140 += 16;
                  if ( (_DWORD)v138 == 9 )
                    v141 += 16;
                }
                *(_WORD *)(a3 + 24) = 204;
                *(_BYTE *)(a3 + 41) = 1;
                *(_QWORD *)(a3 + 128) = v140 + 1 - v141;
                *(_WORD *)(a3 + 46) = a2 & 0x1F;
                *(_BYTE *)(a3 + 45) = 2;
                *(_BYTE *)(a3 + 81) = 5;
                *(_BYTE *)(a3 + 85) = 2;
                *(_QWORD *)(a3 + 88) = v141;
                *(_BYTE *)(a3 + 121) = 5;
                *(_BYTE *)(a3 + 125) = 2;
                *(_BYTE *)(a3 + 161) = 1;
                *(_BYTE *)(a3 + 165) = 2;
                *(_WORD *)(a3 + 166) = (unsigned __int16)a2 >> 11;
                return *(_WORD *)(a3 + 24) != 0;
              }
            }
          }
LABEL_239:
          if ( *(_WORD *)(a3 + 24) )
            return 1;
        }
LABEL_240:
        if ( a2 == 21366752 )
        {
          *(_WORD *)(a3 + 24) = 81;
          return 1;
        }
LABEL_241:
        if ( a2 == 21235680 )
        {
          *(_WORD *)(a3 + 24) = 82;
          return 1;
        }
LABEL_242:
        v91 = a2 & 0x1F;
        v92 = (unsigned __int16)a2 >> 11;
        if ( (a2 & 0x10000) != 0 )
        {
          if ( (unsigned __int16)a2 >> 11 )
          {
            *(_BYTE *)(a3 + 72) |= 2u;
            v34 = a3 + 40;
            *(_WORD *)(a3 + 24) = 99;
            *(_BYTE *)(a3 + 41) = 4;
            *(_BYTE *)(a3 + 45) = 1;
            *(_WORD *)(a3 + 46) = v91;
            *(_QWORD *)(a3 + 56) = (unsigned int)(__int16)(HIWORD(a2) & 0xFFFE);
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = v92;
            goto LABEL_65;
          }
          if ( *(int *)(a1 + 188) <= 3 )
            return *(_WORD *)(a3 + 24) != 0;
          v74 = (a2 << 12) & 0x10000 | HIWORD(a2) & 0xFFFFFFFE;
          if ( (a2 << 12) & 0x10000 | HIWORD(a2) & 0x10000 )
            v74 |= 0xFFFFFFFFFFFE0000LL;
          goto LABEL_169;
        }
        v97 = a2 >> 27;
        v98 = HIWORD(a2) & 0x7FF;
        switch ( v98 )
        {
          case 0x220u:
            *(_WORD *)(a3 + 24) = 86;
            goto LABEL_294;
          case 0x222u:
            *(_WORD *)(a3 + 24) = 87;
            goto LABEL_294;
          case 0x280u:
            *(_WORD *)(a3 + 24) = 88;
            goto LABEL_294;
          case 0x282u:
            *(_WORD *)(a3 + 24) = 89;
            goto LABEL_294;
          case 0x2C0u:
            *(_WORD *)(a3 + 24) = 90;
            goto LABEL_294;
          case 0x2C2u:
            *(_WORD *)(a3 + 24) = 91;
            goto LABEL_294;
        }
        v99 = *(_DWORD *)(a1 + 188);
        if ( v99 <= 2 )
          goto LABEL_287;
        if ( v98 >> 5 == 29 )
        {
          v112 = (v98 >> 1) & 0xF;
          if ( (_DWORD)v112 == 13 )
          {
            *(_WORD *)(a3 + 24) = 26;
            goto LABEL_294;
          }
          *(_WORD *)(a3 + 24) = 100;
        }
        else
        {
          if ( v98 >> 5 != 28 )
          {
            if ( v98 >> 6 == 15 )
            {
              *(_BYTE *)(a3 + 41) = 1;
              *(_BYTE *)(a3 + 45) = 2;
              *(_WORD *)(a3 + 46) = v91;
              *(_BYTE *)(a3 + 81) = 1;
              *(_BYTE *)(a3 + 85) = 2;
              *(_WORD *)(a3 + 24) = 103 - ((a2 & 0x200000) == 0);
              *(_WORD *)(a3 + 86) = v92;
              *(_BYTE *)(a3 + 121) = 1;
              *(_BYTE *)(a3 + 125) = 2;
              *(_WORD *)(a3 + 126) = v97;
              *(_BYTE *)(a3 + 161) = 1;
              *(_BYTE *)(a3 + 165) = 2;
              *(_WORD *)(a3 + 166) = BYTE2(a2) & 0x1F;
              return 1;
            }
            if ( v98 == 238 )
            {
              *(_WORD *)(a3 + 24) = 109;
              *(_BYTE *)(a3 + 41) = 3;
              *(_BYTE *)(a3 + 45) = 2;
              *(_WORD *)(a3 + 46) = v91;
LABEL_277:
              *(_BYTE *)(a3 + 81) = 1;
              *(_BYTE *)(a3 + 85) = 2;
              *(_WORD *)(a3 + 86) = v92;
              *(_BYTE *)(a3 + 121) = 1;
              *(_BYTE *)(a3 + 125) = 2;
              *(_WORD *)(a3 + 126) = v97;
              return 1;
            }
            if ( v98 == 194 )
            {
              *(_WORD *)(a3 + 24) = 20;
              goto LABEL_294;
            }
            if ( v98 <= 0xC2 )
            {
              if ( v98 == 130 )
              {
                *(_WORD *)(a3 + 24) = 19;
                goto LABEL_294;
              }
              if ( v98 == 162 )
              {
                *(_WORD *)(a3 + 24) = 27;
                goto LABEL_294;
              }
              if ( !*(_WORD *)(a3 + 24) )
                goto LABEL_296;
              goto LABEL_294;
            }
            if ( v98 == 764 )
            {
              *(_WORD *)(a3 + 24) = 110;
              goto LABEL_294;
            }
            if ( v98 == 766 )
            {
              *(_WORD *)(a3 + 24) = 111;
              goto LABEL_294;
            }
LABEL_287:
            if ( !*(_WORD *)(a3 + 24) )
            {
              switch ( v98 )
              {
                case 0x340u:
                  v110 = 92;
                  break;
                case 0x342u:
                  v110 = 93;
                  break;
                case 0x344u:
                  v110 = 94;
                  break;
                default:
                  if ( v99 > 2 )
                  {
                    switch ( HIWORD(a2) & 0x7FF )
                    {
                      case 0x346:
                        v110 = 101;
                        goto LABEL_317;
                      case 0x360:
                        v110 = 106;
                        goto LABEL_317;
                      case 0x362:
                        v110 = 108;
                        goto LABEL_317;
                      case 0x364:
                        v110 = 105;
                        goto LABEL_317;
                      case 0x366:
                        v110 = 107;
                        goto LABEL_317;
                      default:
                        break;
                    }
                  }
LABEL_296:
                  v103 = (a2 >> 20) & 0x7C;
                  if ( v103 == 48 )
                  {
                    *(_WORD *)(a3 + 24) = 95;
                    *(_BYTE *)(a3 + 41) = 10;
                    *(_BYTE *)(a3 + 45) = 7;
                    *(_QWORD *)(a3 + 48) = (a2 >> 17) & 0xF;
                    if ( ((a2 >> 20) & 0x7E) != 0x32 )
                    {
                      if ( (a2 & 0x10) != 0 )
                        v91 |= 0xFFFFFFFFFFFFFFE0LL;
                      *(_BYTE *)(a3 + 112) |= 2u;
                      *(_BYTE *)(a3 + 81) = 5;
                      *(_BYTE *)(a3 + 85) = 0;
                      *(_QWORD *)(a3 + 88) = v91;
                      goto LABEL_301;
                    }
LABEL_324:
                    *(_BYTE *)(a3 + 81) = 1;
                    *(_BYTE *)(a3 + 85) = 2;
                    *(_WORD *)(a3 + 86) = v91;
LABEL_301:
                    *(_BYTE *)(a3 + 121) = 1;
                    *(_BYTE *)(a3 + 125) = 2;
                    *(_WORD *)(a3 + 126) = v92;
                    *(_BYTE *)(a3 + 161) = 1;
                    *(_BYTE *)(a3 + 165) = 2;
                    *(_WORD *)(a3 + 166) = v97;
                    return 1;
                  }
                  if ( ((a2 >> 20) & 0x7C | BYTE2(a2) & 1) == 0x24 )
                  {
                    v117 = v91 | (a2 >> 13) & 0x1E0;
                    v118 = v117;
                    if ( (v103 | BYTE2(a2) & 3) == 0x24 )
                    {
                      *(_WORD *)(a3 + 24) = 86;
                      if ( (v117 & 0x100) != 0 )
                        v118 = v117 | 0xFFFFFFFFFFFFFE00LL;
                      *(_BYTE *)(a3 + 72) |= 2u;
                    }
                    else
                    {
                      *(_WORD *)(a3 + 24) = 87;
                    }
                    *(_BYTE *)(a3 + 41) = 5;
                    *(_BYTE *)(a3 + 45) = 2;
                    *(_QWORD *)(a3 + 48) = v118;
                    goto LABEL_277;
                  }
LABEL_339:
                  v113 = (unsigned __int16)a2 >> 11;
                  v114 = HIWORD(a2);
                  if ( !HIWORD(a2) )
                  {
                    if ( (a2 & 0x10) != 0 )
                    {
                      if ( *(int *)(a1 + 188) > 2 )
                      {
                        *(_WORD *)(a3 + 24) = 116;
                        *(_QWORD *)(a3 + 48) = (unsigned __int16)a2 >> 11;
                        *(_BYTE *)(a3 + 41) = 5;
                        *(_BYTE *)(a3 + 45) = 2;
                        *(_BYTE *)(a3 + 81) = 5;
                        *(_BYTE *)(a3 + 85) = 2;
                        *(_QWORD *)(a3 + 88) = a2 & 0xF;
                        return 1;
                      }
                      return *(_WORD *)(a3 + 24) != 0;
                    }
                    *(_WORD *)(a3 + 24) = 22;
                    goto LABEL_342;
                  }
                  v115 = a2 & 0x1F;
                  if ( v114 == 128 )
                  {
                    *(_WORD *)(a3 + 24) = 19;
                    goto LABEL_348;
                  }
                  if ( v114 > 0x80 )
                  {
                    if ( v114 == 160 )
                    {
                      *(_WORD *)(a3 + 24) = 27;
                      goto LABEL_348;
                    }
                    if ( v114 == 192 )
                    {
                      *(_WORD *)(a3 + 24) = 20;
                      goto LABEL_348;
                    }
                  }
                  else
                  {
                    if ( v114 == 32 )
                    {
                      *(_WORD *)(a3 + 24) = 39;
                      *(_WORD *)(a3 + 86) = 32;
                      goto LABEL_348;
                    }
                    if ( v114 == 64 )
                    {
                      *(_WORD *)(a3 + 24) = 9;
                      *(_WORD *)(a3 + 46) = 32;
                      goto LABEL_348;
                    }
                  }
                  if ( !*(_WORD *)(a3 + 24) )
                  {
                    if ( *(int *)(a1 + 188) <= 0 )
                      return 0;
                    if ( v114 != 512 )
                    {
                      if ( v114 == 228 )
                      {
                        v116 = 51;
                      }
                      else if ( v114 > 0xE4 )
                      {
                        v116 = 4;
                        if ( v114 != 230 )
                          return 0;
                      }
                      else if ( v114 == 224 )
                      {
                        v116 = 21;
                      }
                      else
                      {
                        v116 = 31;
                        if ( v114 != 226 )
                          return 0;
                      }
                      *(_WORD *)(a3 + 24) = v116;
                      v34 = a3 + 80;
                      *(_BYTE *)(a3 + 41) = 1;
                      *(_BYTE *)(a3 + 45) = 0;
                      *(_WORD *)(a3 + 46) = v113;
                      *(_BYTE *)(a3 + 81) = 3;
                      *(_BYTE *)(a3 + 85) = 0;
                      *(_WORD *)(a3 + 86) = v115;
                      goto LABEL_65;
                    }
                    *(_WORD *)(a3 + 24) = 83;
LABEL_342:
                    *(_BYTE *)(a3 + 41) = 10;
                    *(_BYTE *)(a3 + 45) = 7;
                    *(_QWORD *)(a3 + 48) = a2 & 0xF;
                    *(_BYTE *)(a3 + 81) = 1;
                    *(_BYTE *)(a3 + 85) = 2;
                    *(_WORD *)(a3 + 86) = v113;
                    return 1;
                  }
LABEL_348:
                  *(_WORD *)(a3 + 46) += v115;
                  *(_WORD *)(a3 + 86) += v113;
                  v64 = *(_WORD *)(a3 + 24) == 0;
                  *(_BYTE *)(a3 + 85) = 2;
                  *(_BYTE *)(a3 + 45) = 2;
                  *(_BYTE *)(a3 + 81) = 1;
                  *(_BYTE *)(a3 + 41) = 1;
                  return !v64;
              }
LABEL_317:
              *(_WORD *)(a3 + 24) = v110;
              *(_BYTE *)(a3 + 41) = 1;
              *(_BYTE *)(a3 + 45) = 2;
              *(_WORD *)(a3 + 46) = v92;
              *(_BYTE *)(a3 + 81) = 1;
              *(_BYTE *)(a3 + 85) = 2;
              *(_WORD *)(a3 + 86) = v97;
              return 1;
            }
LABEL_294:
            v64 = *(_WORD *)(a3 + 24) == 0;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = v91;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = v92;
            *(_BYTE *)(a3 + 121) = 1;
            *(_BYTE *)(a3 + 125) = 2;
            *(_WORD *)(a3 + 126) = v97;
            return !v64;
          }
          v112 = (v98 >> 1) & 0xF;
          if ( (_DWORD)v112 == 13 )
          {
            *(_WORD *)(a3 + 24) = 25;
            goto LABEL_294;
          }
          *(_WORD *)(a3 + 24) = 104;
        }
        *(_BYTE *)(a3 + 41) = 10;
        *(_BYTE *)(a3 + 45) = 7;
        *(_QWORD *)(a3 + 48) = v112;
        goto LABEL_324;
      }
LABEL_245:
      v93 = a2 >> 27;
      v94 = HIWORD(a2) & 0x7FF;
      if ( v94 > 0x37E )
      {
        switch ( v94 )
        {
          case 0x3E0u:
            v120 = 134;
            break;
          case 0x3E1u:
          case 0x3E2u:
          case 0x3E3u:
          case 0x3E5u:
          case 0x3E6u:
          case 0x3E7u:
          case 0x3E9u:
          case 0x3EAu:
          case 0x3EBu:
          case 0x3EDu:
          case 0x3EEu:
          case 0x3EFu:
          case 0x3F1u:
          case 0x3F2u:
          case 0x3F3u:
          case 0x3F5u:
          case 0x3F6u:
          case 0x3F7u:
          case 0x3F9u:
          case 0x3FAu:
          case 0x3FBu:
            goto LABEL_254;
          case 0x3E4u:
            v120 = 150;
            break;
          case 0x3E8u:
            v120 = 132;
            break;
          case 0x3ECu:
            v120 = 140;
            break;
          case 0x3F0u:
            v120 = 138;
            break;
          case 0x3F4u:
            v120 = 136;
            break;
          case 0x3F8u:
            v119 = 142;
            goto LABEL_397;
          case 0x3FCu:
            v119 = 130;
            goto LABEL_397;
          default:
            goto LABEL_241;
        }
        *(_WORD *)(a3 + 24) = v120;
        *(_BYTE *)(a3 + 41) = 1;
        *(_WORD *)(a3 + 46) = a2 & 0x1F;
        *(_BYTE *)(a3 + 45) = 2;
        *(_BYTE *)(a3 + 81) = 1;
        *(_BYTE *)(a3 + 85) = 2;
        *(_WORD *)(a3 + 86) = (unsigned __int16)a2 >> 11;
        *(_BYTE *)(a3 + 121) = 1;
        *(_BYTE *)(a3 + 125) = 2;
        *(_WORD *)(a3 + 126) = v93;
        return 1;
      }
      if ( v94 > 0x35F )
      {
        switch ( v94 )
        {
          case 0x360u:
            v119 = 121;
            goto LABEL_397;
          case 0x368u:
            v119 = 122;
            goto LABEL_397;
          case 0x370u:
            v119 = 123;
LABEL_397:
            *(_WORD *)(a3 + 24) = v119;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = (unsigned __int16)a2 >> 11;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = v93;
            break;
          case 0x378u:
            if ( v93 )
            {
              *(_WORD *)(a3 + 24) = 127;
              *(_BYTE *)(a3 + 41) = 1;
              *(_BYTE *)(a3 + 45) = 2;
              *(_WORD *)(a3 + 46) = 128;
              *(_BYTE *)(a3 + 81) = 1;
              *(_BYTE *)(a3 + 85) = 2;
              *(_WORD *)(a3 + 86) = v93;
            }
            else
            {
              *(_WORD *)(a3 + 24) = 128;
            }
            return 1;
          case 0x37Au:
            if ( v93 )
              goto LABEL_242;
            *(_WORD *)(a3 + 24) = 125;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = (unsigned __int16)a2 >> 11;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = 128;
            break;
          case 0x37Cu:
            *(_WORD *)(a3 + 24) = 126;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = 129;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = v93;
            return 1;
          case 0x37Eu:
            if ( v93 )
              goto LABEL_242;
            *(_WORD *)(a3 + 24) = 124;
            *(_BYTE *)(a3 + 41) = 1;
            *(_BYTE *)(a3 + 45) = 2;
            *(_WORD *)(a3 + 46) = (unsigned __int16)a2 >> 11;
            *(_BYTE *)(a3 + 81) = 1;
            *(_BYTE *)(a3 + 85) = 2;
            *(_WORD *)(a3 + 86) = 129;
            break;
          default:
            goto LABEL_254;
        }
        return 1;
      }
      goto LABEL_240;
    }
    *(_BYTE *)(a3 + 41) = 5;
    v34 = a3 + 80;
    *(_BYTE *)(a3 + 112) |= 2u;
    *(_BYTE *)(a3 + 45) = 0;
    v60 = dword_23630[(unsigned __int16)a2 >> 14];
    *(_BYTE *)(a3 + 85) = 0;
    *(_WORD *)(a3 + 81) = 516;
    *(_WORD *)(a3 + 24) = v60;
    *(_WORD *)(a3 + 86) = a2 & 0x1F;
    *(_QWORD *)(a3 + 48) = (a2 >> 11) & 7;
    *(_QWORD *)(a3 + 96) = (unsigned int)((int)a2 >> 16);
    goto LABEL_65;
  }
  if ( (a2 & 0xF800) == 0 && (_DWORD)v7 == 23 && *(int *)(a1 + 188) > 2 )
  {
    v38 = *(_WORD *)(a3 + 26);
    if ( v38 == 2 )
    {
      v39 = (unsigned __int16)insn_get_next_word(a3, v8, v7);
LABEL_78:
      v40 = v39 | ((unsigned int)insn_get_next_word(a3, v8, v7) << 16);
      if ( (v39 & 1) == 0 )
      {
        v41 = *(_QWORD *)(a3 + 8) + v40;
        *(_BYTE *)(a3 + 41) = 7;
        *(_QWORD *)(a3 + 56) = v41;
        *(_BYTE *)(a3 + 72) = 4;
        v42 = a2 & 0x1F;
        if ( v42 )
        {
          *(_BYTE *)(a3 + 81) = 1;
          *(_WORD *)(a3 + 24) = 45;
          *(_BYTE *)(a3 + 85) = 2;
          *(_WORD *)(a3 + 86) = v42;
          return 1;
        }
LABEL_156:
        *(_WORD *)(a3 + 24) = 43;
        return 1;
      }
      return 0;
    }
    if ( v38 == 4 )
    {
      v39 = HIWORD(a2);
      goto LABEL_78;
    }
LABEL_157:
    *(_DWORD *)(a3 + 24) = 0;
    return 0;
  }
  v10 = (unsigned int)(v7 - 16);
  v11 = dword_23680[2 * v10];
  v12 = (unsigned __int16)a2 >> 11;
  *(_WORD *)(a3 + 24) = v11;
  if ( *(int *)(a1 + 188) <= 0 || v12 )
  {
    v13 = 0;
    v14 = a2 & 0x1F;
    if ( dword_23680[2 * v10 + 1] != 1 )
      goto LABEL_12;
  }
  else
  {
    if ( (_WORD)v11 == 26 || (_WORD)v11 == 38 )
    {
      *(_BYTE *)(a3 + 41) = 5;
      *(_WORD *)(a3 + 24) = 79;
      *(_BYTE *)(a3 + 45) = 0;
      *(_QWORD *)(a3 + 48) = a2 & 0x3F;
      sreg = *(_QWORD *)(a1 + 152);
      if ( sreg == -1 )
        sreg = get_sreg(*(_QWORD *)(a3 + 16), 134);
      if ( (unsigned __int8)is_mapped(sreg) )
      {
        v62 = sreg + 2LL * *(_QWORD *)(a3 + 48);
        if ( (unsigned __int8)is_mapped(v62) )
        {
          v63 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((unsigned __int16)get_word(v62) + sreg);
          if ( (unsigned __int8)is_mapped(v63) )
          {
            v64 = *(_WORD *)(a3 + 24) == 0;
            *(_BYTE *)(a3 + 41) = 7;
            *(_QWORD *)(a3 + 56) = v63;
            return !v64;
          }
        }
      }
      return *(_WORD *)(a3 + 24) != 0;
    }
    v14 = a2 & 0x1F;
    if ( dword_23680[2 * v10 + 1] != 1 )
    {
      *(_BYTE *)(a3 + 41) = 5;
      *(_QWORD *)(a3 + 48) = a2 & 0x1F;
      *(_WORD *)(a3 + 86) = 0;
      *(_BYTE *)(a3 + 45) = 0;
      *(_BYTE *)(a3 + 81) = 1;
      *(_BYTE *)(a3 + 85) = 2;
      return (_WORD)v11 != 0;
    }
  }
  v13 = 2;
  if ( (a2 & 0x10) != 0 )
    v14 |= 0xFFFFFFFFFFFFFFE0LL;
  *(_BYTE *)(a3 + 72) |= 2u;
LABEL_12:
  *(_BYTE *)(a3 + 41) = 5;
  *(_BYTE *)(a3 + 45) = v13;
  result = (_WORD)v11 != 0;
  *(_QWORD *)(a3 + 48) = v14;
  *(_BYTE *)(a3 + 81) = 1;
  *(_BYTE *)(a3 + 85) = 2;
  *(_WORD *)(a3 + 86) = v12;
  if ( v12 == 3 && (_WORD)v11 == 71 )
  {
LABEL_93:
    *(_DWORD *)(a3 + 28) |= 1u;
    return 1;
  }
  return result;
}
