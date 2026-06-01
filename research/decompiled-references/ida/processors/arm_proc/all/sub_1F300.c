__int64 __fastcall sub_1F300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int next_dword; // ebp
  unsigned int v9; // ecx
  __int16 v10; // ax
  int v11; // edx
  int v12; // eax
  int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // eax
  __int16 v16; // ax
  char v17; // al
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  __int16 v23; // ax
  int v24; // eax
  __int16 v25; // dx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  __int16 v31; // dx
  __int64 v32; // rsi
  char v33; // al
  __int16 v34; // ax
  int v35; // eax
  __int16 v36; // di
  __int64 v37; // rdx
  char v38; // al
  unsigned int v39; // ebp
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  char v45; // cl
  _BYTE *v46; // rax
  __int64 v47; // rax
  int v48; // esi
  int v49; // r8d
  int v50; // eax
  char v51; // dl
  int v52; // eax
  __int64 v53; // rax
  __int16 v54; // ax
  char v55; // cl
  __int64 v56; // rsi
  char *v57; // rsi
  _BYTE *v58; // rdx
  int v59; // ecx
  int v60; // r8d
  __int16 v61; // ax
  __int16 v62; // ax
  __int64 v63; // r12
  _DWORD *v64; // rdi
  _DWORD *v65; // rsi
  __int64 i; // rcx
  int v67; // ebp
  __int16 v68; // di
  int v69; // edx
  int v70; // ecx
  __int64 v71; // rax
  char *v72; // rax
  char v73; // al
  __int16 v74; // ax
  __int64 v75; // rsi
  __int64 v76; // rax
  char v77; // al
  __int16 v78; // dx
  __int16 v79; // cx
  char *v80; // rax
  char v81; // al
  __int16 v82; // ax
  int v83; // ebp
  __int16 v84; // ax

  v3 = *(_QWORD *)(a2 + 8) & 3LL;
  if ( (*(_QWORD *)(a2 + 8) & 3) != 0 )
    return 0;
  next_dword = insn_get_next_dword();
  if ( (unsigned __int8)getinf_flag() && *(_BYTE *)(a1 + 288) )
    next_dword = _byteswap_ulong(next_dword);
  if ( (unsigned __int8)sub_6A990(a1, a2, next_dword, 0) )
    return *(unsigned __int16 *)(a2 + 26);
  v9 = next_dword >> 28;
  *(_BYTE *)(a2 + 32) = next_dword >> 28;
  switch ( HIBYTE(next_dword) & 0xF )
  {
    case 0:
      if ( (next_dword & 0xF0000F0) != 0x90 )
        goto LABEL_49;
      v30 = word_891D0[(next_dword >> 21) & 7];
      *(_WORD *)(a2 + 24) = v30;
      if ( v30 > 0x28u )
      {
        if ( v30 != 236 )
        {
          if ( v30 != 279 )
            goto LABEL_114;
          goto LABEL_112;
        }
      }
      else if ( v30 <= 0x24u )
      {
        if ( !v30 )
          return 0;
        if ( (unsigned __int16)(v30 - 28) > 1u )
        {
LABEL_114:
          if ( (next_dword & 0x100000) != 0 )
            *(_DWORD *)(a2 + 28) |= 1u;
          return *(unsigned __int16 *)(a2 + 26);
        }
LABEL_112:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = next_dword & 0xF;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
        v31 = (unsigned __int16)next_dword >> 12;
        if ( v30 == 28 )
        {
          if ( (_BYTE)v31 )
            return 0;
        }
        else
        {
          *(_BYTE *)(a2 + 161) = 1;
          *(_WORD *)(a2 + 166) = (unsigned __int8)v31;
          *(_BYTE *)(a2 + 165) = 2;
        }
        goto LABEL_114;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = next_dword & 0xF;
      *(_BYTE *)(a2 + 125) = 2;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 166) = (next_dword >> 8) & 0xF;
      *(_BYTE *)(a2 + 165) = 2;
      goto LABEL_114;
    case 1:
LABEL_49:
      v21 = next_dword;
      BYTE1(v21) = BYTE1(next_dword) & 0xFD;
      if ( v21 == -251592704 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 189;
        *(_BYTE *)(a2 + 41) = 13;
        qstrncpy();
        v10 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      v22 = next_dword & 0xF9000F0;
      if ( (next_dword & 0xF9000F0) == 0x1000060 )
      {
        if ( (~next_dword & 0x600000) == 0 && ((next_dword >> 4) & 0xFFF0 | next_dword & 0xF) == 0xE )
        {
          *(_WORD *)(a2 + 24) = 429;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      if ( v22 == 16777328 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 73) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 48) = next_dword & 0xF | (next_dword >> 4) & 0xFFF0;
        v34 = word_891C0[(next_dword >> 21) & 3];
        *(_WORD *)(a2 + 24) = v34;
        if ( v34 )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      if ( (next_dword & 0xFFF1FE20) == 0xF1000000 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 169;
        if ( (next_dword & 0x80000) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0x1F;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        *(_BYTE *)(a2 + 41) = 13;
        *(_WORD *)(a2 + 24) = ((next_dword & 0x40000) == 0) + 170;
        v46 = (_BYTE *)(a2 + 48);
        if ( (next_dword & 0x100) != 0 )
        {
          *(_BYTE *)(a2 + 48) = 65;
          v46 = (_BYTE *)(a2 + 49);
        }
        if ( (next_dword & 0x80u) != 0 )
          *v46++ = 73;
        if ( (next_dword & 0x40) != 0 )
          *v46++ = 70;
        *v46 = 0;
        v10 = *(_WORD *)(a2 + 24);
        if ( (next_dword & 0x20000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = next_dword & 0x1F;
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
        }
        goto LABEL_11;
      }
      if ( v22 != 0x1000000 || (next_dword & 0xC00) != 0 )
        goto LABEL_54;
      v48 = ((int)next_dword >> 12) & 0xF;
      v49 = next_dword & 0x200000;
      if ( (next_dword & 0x200000) != 0 && v48 != 15 )
      {
        if ( (next_dword & 0xE000090) == 0x90 && (next_dword & 0x100040) != 0x40 )
        {
LABEL_222:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
          v50 = (next_dword >> 5) & 3;
          switch ( v50 )
          {
            case 2:
              v52 = *(_DWORD *)(a2 + 28);
              v51 = 0;
              BYTE1(v52) |= 4u;
              goto LABEL_226;
            case 3:
              v52 = *(_DWORD *)(a2 + 28);
              v51 = 1;
              BYTE1(v52) |= 8u;
              goto LABEL_226;
            case 1:
              v52 = *(_DWORD *)(a2 + 28);
              v51 = 1;
              BYTE1(v52) |= 0x10u;
LABEL_226:
              *(_DWORD *)(a2 + 28) = v52;
              v53 = *(unsigned __int16 *)(a2 + 24);
              *(_BYTE *)(a2 + 85) = v51;
              if ( (*((_BYTE *)&off_A5A60 + 16 * v53 + 9) & 1) != 0 )
                *(_BYTE *)(a2 + 45) = v51;
              sub_1E550(a1, a2, a2 + 80, next_dword);
              v10 = *(_WORD *)(a2 + 24);
              goto LABEL_11;
          }
          if ( (next_dword & 0xF800FF0) == 0x1800F90 )
            goto LABEL_252;
LABEL_57:
          if ( (next_dword & 0xF900090) != 0x1000080 )
          {
            if ( (next_dword & 0xE0000D0) != 0xD0 )
            {
LABEL_59:
              if ( (next_dword & 0xFFFFF00) == 0x320F000 )
              {
                sub_1E6A0(a2, (unsigned __int8)next_dword);
                v10 = *(_WORD *)(a2 + 24);
                goto LABEL_11;
              }
              goto LABEL_60;
            }
            goto LABEL_256;
          }
          goto LABEL_243;
        }
        goto LABEL_56;
      }
      v68 = next_dword & 0xF;
      if ( !v49 && (next_dword & 0xF) != 0 )
        goto LABEL_54;
      v69 = ((int)next_dword >> 22) & 1;
      v70 = ((int)next_dword >> 8) & 1;
      if ( (next_dword & 0x200) != 0 )
      {
        v71 = 4LL * ((16 * v70) | ((int)next_dword >> 16) & 0xF);
        if ( v49 )
        {
          if ( v69 )
            v72 = (char *)&unk_893E0 + v71;
          else
            v72 = (char *)&unk_89460 + v71;
          if ( *(_WORD *)v72 != 0xFFFF )
          {
            *(_WORD *)(a2 + 46) = *(_WORD *)v72;
            v73 = v72[2];
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v68;
            *(_BYTE *)(a2 + 72) = v73 | 0x80;
            v74 = 27;
LABEL_279:
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 24) = v74;
            return *(unsigned __int16 *)(a2 + 26);
          }
LABEL_319:
          if ( (next_dword & 0xE000090) != 0x90 )
          {
            if ( (next_dword & 0xF900090) != 0x1000080 )
            {
              if ( (next_dword & 0xE0000D0) != 0xD0 )
              {
LABEL_60:
                if ( (next_dword & 0xFB0F000) == 0x320F000 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 24) = 27;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_BYTE *)(a2 + 72) = BYTE2(next_dword) & 0xF;
                  *(_WORD *)(a2 + 46) = (next_dword & 0x400000) == 0 ? 16 : 18;
                  sub_1DC40(a2, a2 + 80, next_dword, a3);
                  if ( *(_BYTE *)(a2 + 81) != 8 )
                    goto LABEL_19;
                  return 0;
                }
                if ( (next_dword & 0xFB00000) != 0x3000000 )
                {
LABEL_67:
                  v24 = (next_dword >> 21) & 0xF;
                  *(_WORD *)(a2 + 24) = v24 + 10;
                  switch ( v24 )
                  {
                    case 8:
                    case 10:
                      goto LABEL_75;
                    case 9:
                      v27 = next_dword & 0xFF000F0;
                      if ( (next_dword & 0xFF000F0) == 0x1200010 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 41;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
                      if ( v27 == 18874416 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 47;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
                      if ( v27 == 18874400 )
                      {
                        *(_WORD *)(a2 + 24) = 166;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
LABEL_81:
                      if ( v27 == 23068688 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 48;
                        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                        *(_BYTE *)(a2 + 45) = 2;
                        *(_WORD *)(a2 + 86) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 81) = 1;
                        *(_BYTE *)(a2 + 85) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
LABEL_75:
                      if ( (~(next_dword >> 12) & 0xF) == 0 )
                        *(_DWORD *)(a2 + 28) |= 0x2000u;
                      *(_BYTE *)(a2 + 41) = 1;
                      *(_BYTE *)(a2 + 45) = 2;
                      *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                      sub_1DC40(a2, a2 + 80, next_dword, a3);
                      v10 = *(_WORD *)(a2 + 24);
                      goto LABEL_11;
                    case 11:
                      v27 = next_dword & 0xFF000F0;
                      goto LABEL_81;
                    case 13:
                      if ( next_dword == -509546482 )
                      {
                        if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
                        {
                          *(_WORD *)(a2 + 24) = 1;
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_BYTE *)(a2 + 81) = 0;
                          return *(unsigned __int16 *)(a2 + 26);
                        }
                        *(_WORD *)(a2 + 46) = 15;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        sub_1DC40(a2, a2 + 80, 0xE1A0F00E, a3);
                        v10 = *(_WORD *)(a2 + 24);
                      }
                      else
                      {
                        if ( next_dword == -509607936 )
                        {
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 2;
                          *(_BYTE *)(a2 + 81) = 0;
                          return *(unsigned __int16 *)(a2 + 26);
                        }
LABEL_78:
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                        sub_1DC40(a2, a2 + 80, next_dword, a3);
                        if ( (next_dword & 0x100000) == 0 )
                          goto LABEL_19;
                        *(_DWORD *)(a2 + 28) |= 1u;
                        v10 = *(_WORD *)(a2 + 24);
                      }
                      break;
                    case 15:
                      goto LABEL_78;
                    default:
                      *(_BYTE *)(a2 + 41) = 1;
                      *(_BYTE *)(a2 + 45) = 2;
                      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                      *(_BYTE *)(a2 + 81) = 1;
                      *(_BYTE *)(a2 + 85) = 2;
                      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                      sub_1DC40(a2, a2 + 120, next_dword, a3);
                      if ( (next_dword & 0x100000) != 0 )
                        *(_DWORD *)(a2 + 28) |= 1u;
                      v10 = *(_WORD *)(a2 + 24);
                      if ( (v10 & 0xFFFD) != 0xC )
                        goto LABEL_11;
                      if ( *(_WORD *)(a2 + 86) != 15 || *(_BYTE *)(a2 + 121) != 5 )
                        return *(unsigned __int16 *)(a2 + 26);
                      v28 = *(_QWORD *)(a2 + 128);
                      if ( v10 == 12 )
                        v28 = -v28;
                      v29 = *(_QWORD *)(a2 + 8);
                      *(_BYTE *)(a2 + 81) = 5;
                      *(_BYTE *)(a2 + 85) = 2;
                      *(_BYTE *)(a2 + 113) = 0;
                      *(_QWORD *)(a2 + 88) = v28 + v29 + 8;
                      *(_QWORD *)(a2 + 104) = 0;
                      *(_BYTE *)(a2 + 121) = 0;
                      *(_WORD *)(a2 + 24) = 44;
                      if ( !a3 )
                        return *(unsigned __int16 *)(a2 + 26);
                      sub_1DB20(a3, 12, 12, 0);
                      v10 = *(_WORD *)(a2 + 24);
                      goto LABEL_11;
                  }
                  goto LABEL_11;
                }
                v23 = 269;
                if ( (next_dword & 0xF00000) == 0 )
                {
                  *(_DWORD *)(a2 + 28) |= 0x200u;
                  v23 = 23;
                }
                *(_WORD *)(a2 + 24) = v23;
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                *(_BYTE *)(a2 + 45) = 2;
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = (next_dword >> 4) & 0xF000 | next_dword & 0xFFF;
                *(_QWORD *)(a2 + 104) = 0;
                if ( !a3 )
                  return *(unsigned __int16 *)(a2 + 26);
                if ( (get_flags_ex() & 0xF000000) != 0x5000000 )
                  goto LABEL_19;
                sub_1DB20(a3, 12, 12, 0);
                sub_1DB20(a3, 20, 20, 16);
                v10 = *(_WORD *)(a2 + 24);
LABEL_11:
                if ( v10 )
                  return *(unsigned __int16 *)(a2 + 26);
                return 0;
              }
LABEL_256:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
              if ( (unsigned __int16)next_dword >> 12 == 14 || (next_dword & 0x1000) != 0 )
                return 0;
              v63 = a2 + 80;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) == 0 )
              {
                v64 = (_DWORD *)(a2 + 80);
                v65 = (_DWORD *)(a2 + 40);
                for ( i = 9; i; --i )
                  *v64++ = *v65++;
                v63 = a2 + 120;
                ++*(_WORD *)(a2 + 86);
              }
              sub_1E550(a1, a2, v63, next_dword);
              if ( (*(_BYTE *)(a2 + 28) & 4) != 0 )
                return 0;
              *(_BYTE *)(v63 + 5) = 2;
              v67 = next_dword & 0x20;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) != 0 )
              {
                v54 = 872 - (v67 == 0);
              }
              else
              {
                v54 = 49;
                if ( v67 )
                  v54 = 71;
              }
              goto LABEL_233;
            }
LABEL_243:
            v10 = a7C[(next_dword >> 21) & 3] + ((next_dword >> 5) & 3);
            v57 = (char *)&unk_89190 + 4 * ((next_dword >> 21) & 3);
            *(_WORD *)(a2 + 24) = v10;
            v58 = (_BYTE *)(a2 + 41);
            v59 = (unsigned __int8)v57[v3];
            if ( v59 == 255 )
              goto LABEL_11;
            while ( v3 != 3 )
            {
              ++v3;
              *v58 = 1;
              v58 += 40;
              *(v58 - 36) = 2;
              *(_WORD *)(v58 - 35) = (next_dword >> v59) & 0xF;
              v59 = (unsigned __int8)v57[v3];
              if ( v59 == 255 )
                goto LABEL_11;
            }
            if ( (v10 & 0xFFFD) != 0x40 )
            {
              *(_BYTE *)(a2 + 161) = 1;
              *(_BYTE *)(a2 + 165) = 2;
              *(_WORD *)(a2 + 166) = (next_dword >> v59) & 0xF;
              goto LABEL_11;
            }
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (next_dword & 0x100040) == 0x40 )
            goto LABEL_57;
          goto LABEL_222;
        }
        *(_WORD *)(a2 + 46) = v48;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        if ( v69 )
          v80 = (char *)&unk_893E0 + v71;
        else
          v80 = (char *)&unk_89460 + v71;
        if ( *(_WORD *)v80 == 0xFFFF )
          goto LABEL_319;
        *(_WORD *)(a2 + 86) = *(_WORD *)v80;
        v81 = v80[2] | 0x80;
      }
      else
      {
        if ( v70 )
          goto LABEL_54;
        if ( v49 )
        {
          v79 = 16;
          if ( v69 )
            v79 = 18;
          *(_WORD *)(a2 + 46) = v79;
          *(_BYTE *)(a2 + 72) = BYTE2(next_dword) & 0xF;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 86) = v68;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 24) = 27;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (((int)next_dword >> 16) & 0xF) != 0xF )
        {
LABEL_54:
          if ( (next_dword & 0xFB00FF0) == 0x1000090 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 35;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = next_dword & 0xF;
            *(_BYTE *)(a2 + 85) = 2;
            *(_BYTE *)(a2 + 125) = 2;
            *(_BYTE *)(a2 + 121) = 4;
            *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
            *(_QWORD *)(a2 + 136) = 0;
            if ( (~(next_dword >> 12) & 0xF) != 0 && (~BYTE2(next_dword) & 0xF) != 0 && (next_dword & 0xF) != 0xF )
            {
              if ( (next_dword & 0x400000) != 0 )
              {
                *(_DWORD *)(a2 + 28) |= 2u;
                *(_BYTE *)(a2 + 45) = 0;
                *(_BYTE *)(a2 + 85) = 0;
                *(_BYTE *)(a2 + 125) = 0;
              }
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          if ( (next_dword & 0xE000090) == 0x90 )
          {
            if ( (next_dword & 0x100040) != 0x40 )
              goto LABEL_222;
            if ( (next_dword & 0xF800FF0) == 0x1800F90 )
            {
LABEL_252:
              if ( (next_dword & 0x100000) != 0 )
              {
                if ( (~(_BYTE)next_dword & 0xF) != 0 )
                  return 0;
                v62 = word_891B0[(next_dword >> 20) & 7];
                *(_WORD *)(a2 + 24) = v62;
                if ( v62 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                  *(_BYTE *)(a2 + 81) = 4;
                  *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( (next_dword & 0xE0000D0) == 0xD0 )
                  goto LABEL_256;
                goto LABEL_67;
              }
              v84 = word_891B0[(next_dword >> 20) & 7];
              *(_WORD *)(a2 + 24) = v84;
              if ( v84 )
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 2;
                *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 4;
                *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
                return *(unsigned __int16 *)(a2 + 26);
              }
            }
          }
LABEL_56:
          if ( (next_dword & 0xF900FF0) == 0x1000050 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_BYTE *)(a2 + 81) = 1;
            v10 = a3645[(next_dword >> 21) & 3];
            *(_BYTE *)(a2 + 85) = 2;
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
            *(_WORD *)(a2 + 24) = v10;
            *(_WORD *)(a2 + 86) = next_dword & 0xF;
            *(_BYTE *)(a2 + 125) = 2;
            *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
            goto LABEL_11;
          }
          goto LABEL_57;
        }
        *(_WORD *)(a2 + 46) = v48;
        v82 = 16;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        if ( v69 )
          v82 = 18;
        *(_WORD *)(a2 + 86) = v82;
        v81 = 0;
      }
      *(_BYTE *)(a2 + 112) = v81;
      v74 = 26;
      goto LABEL_279;
    case 2:
      goto LABEL_67;
    case 3:
      goto LABEL_59;
    case 4:
    case 5:
      v15 = next_dword;
      LOBYTE(v15) = 0;
      if ( v15 != -176164864 )
        goto LABEL_21;
      if ( next_dword == -176164833 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 256;
        return *(unsigned __int16 *)(a2 + 26);
      }
      v20 = next_dword & 0xF0;
      if ( v20 != 80 )
        goto LABEL_34;
      *(_WORD *)(a2 + 24) = 285;
      goto LABEL_37;
    case 6:
    case 7:
      if ( next_dword == -436207600 )
      {
        *(_WORD *)(a2 + 24) = 82;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (next_dword & 0x10) != 0 )
      {
        v35 = word_891E0[((unsigned __int8)next_dword >> 5) | (next_dword >> 17) & 0xF8];
        *(_WORD *)(a2 + 24) = v35;
        if ( !(_WORD)v35 )
          return 0;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
        v36 = (unsigned __int16)next_dword >> 12;
        if ( (unsigned __int16)v35 <= 0x120u )
        {
          if ( (unsigned __int16)v35 > 0xD3u )
          {
            switch ( v35 )
            {
              case 212:
                goto LABEL_285;
              case 215:
              case 245:
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                v44 = HIWORD(next_dword) & 0xF;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = v44;
                *(_QWORD *)(a2 + 104) = 0;
                if ( (_WORD)v35 == 215 )
                  *(_QWORD *)(a2 + 88) = v44 + 1;
                goto LABEL_176;
              case 216:
              case 246:
                if ( (~(_WORD)next_dword & 0xF00) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                v43 = HIWORD(next_dword) & 0xF;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = v43;
                *(_QWORD *)(a2 + 104) = 0;
                if ( (_WORD)v35 == 216 )
                  *(_QWORD *)(a2 + 88) = v43 + 1;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 126) = next_dword & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              case 221:
              case 223:
              case 225:
              case 250:
              case 252:
              case 254:
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                if ( (~HIWORD(next_dword) & 0xF) != 0 )
                {
                  v37 = a2 + 120;
                }
                else
                {
                  v37 = a2 + 80;
                  *(_WORD *)(a2 + 24) = v35 + 1;
                }
                if ( (next_dword & 0x300) != 0 )
                  return 0;
                *(_BYTE *)(v37 + 5) = 2;
                *(_WORD *)(v37 + 6) = next_dword & 0xF;
                v38 = 1;
                v39 = (next_dword >> 7) & 0x18;
                if ( v39 )
                {
                  *(_BYTE *)(v37 + 33) = 3;
                  *(_QWORD *)(v37 + 8) = v39;
                  v38 = 8;
                }
                *(_BYTE *)(v37 + 1) = v38;
                v10 = *(_WORD *)(a2 + 24);
                if ( v10 == 251 || v10 == 222 )
                {
                  *(_BYTE *)(v37 + 5) = 0;
                  v10 = *(_WORD *)(a2 + 24);
                }
                else if ( v10 == 255 || v10 == 226 )
                {
                  *(_BYTE *)(v37 + 5) = 1;
                  v10 = *(_WORD *)(a2 + 24);
                }
                goto LABEL_11;
              case 243:
                if ( (_BYTE)v36 != 15 )
                  goto LABEL_285;
                LOWORD(v35) = 243;
                v78 = 1;
                goto LABEL_298;
              case 270:
              case 271:
              case 272:
                v40 = (next_dword >> 7) & 0x1F;
                v41 = (HIWORD(next_dword) & 0x1F) + 1;
                if ( (_WORD)v35 == 272 )
                {
                  v83 = next_dword & 0xF;
                  if ( v83 == 15 )
                  {
                    *(_WORD *)(a2 + 24) = 273;
                    v42 = a2 + 80;
                  }
                  else
                  {
                    *(_WORD *)(a2 + 86) = v83;
                    v42 = a2 + 120;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                  }
                  v41 -= v40;
                  if ( v41 <= 0 )
                    return 0;
                }
                else
                {
                  *(_BYTE *)(a2 + 81) = 1;
                  v42 = a2 + 120;
                  *(_WORD *)(a2 + 86) = next_dword & 0xF;
                  *(_BYTE *)(a2 + 85) = 2;
                }
                *(_QWORD *)(v42 + 8) = v40;
                *(_BYTE *)(v42 + 1) = 5;
                *(_BYTE *)(v42 + 5) = 2;
                *(_BYTE *)(v42 + 33) = 0;
                *(_QWORD *)(v42 + 24) = 0;
                *(_BYTE *)(v42 + 41) = 5;
                *(_BYTE *)(v42 + 45) = 2;
                *(_QWORD *)(v42 + 48) = v41;
                *(_BYTE *)(v42 + 73) = 0;
                *(_QWORD *)(v42 + 64) = 0;
                v10 = *(_WORD *)(a2 + 24);
                goto LABEL_11;
              case 277:
                goto LABEL_294;
              case 280:
              case 281:
                if ( (~(_WORD)next_dword & 0xF000) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
                return *(unsigned __int16 *)(a2 + 26);
              case 288:
                *(_BYTE *)(a2 + 41) = 5;
                *(_BYTE *)(a2 + 73) = 0;
                *(_QWORD *)(a2 + 48) = next_dword & 0xF | (next_dword >> 4) & 0xFFF0;
                *(_QWORD *)(a2 + 64) = 0;
                return *(unsigned __int16 *)(a2 + 26);
              default:
                goto LABEL_153;
            }
          }
          if ( (unsigned __int16)v35 <= 0xAEu )
          {
            if ( (unsigned __int16)v35 > 0xACu )
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
LABEL_176:
              v45 = (next_dword >> 5) & 2;
              *(_BYTE *)(a2 + 121) = 8;
              *(_BYTE *)(a2 + 125) = 2;
              *(_WORD *)(a2 + 126) = next_dword & 0xF;
              *(_BYTE *)(a2 + 153) = v45;
              *(_QWORD *)(a2 + 128) = (next_dword >> 7) & 0x1F;
              if ( ((next_dword >> 7) & 0x1F) == 0 )
              {
                if ( v45 )
                  *(_QWORD *)(a2 + 128) = 32;
                else
                  *(_BYTE *)(a2 + 121) = 1;
              }
              return *(unsigned __int16 *)(a2 + 26);
            }
          }
          else
          {
            v55 = v35 + 75;
            if ( (unsigned __int16)(v35 - 181) <= 0x1Bu )
            {
              v56 = 1LL << v55;
              if ( ((1LL << v55) & 0x8208000) != 0 )
              {
                if ( (_BYTE)v36 == 15 )
                {
                  v78 = 2;
LABEL_298:
                  LOWORD(v35) = v78 + v35;
                  *(_WORD *)(a2 + 24) = v35;
                }
                else
                {
LABEL_285:
                  *(_WORD *)(a2 + 166) = (unsigned __int16)next_dword >> 12;
                  *(_BYTE *)(a2 + 161) = 1;
                  *(_BYTE *)(a2 + 165) = 2;
                }
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
                if ( (next_dword & 0x20) == 0 )
                  return *(unsigned __int16 *)(a2 + 26);
                v54 = v35 + 1;
                goto LABEL_233;
              }
              if ( (v56 & 7) != 0 )
              {
LABEL_294:
                if ( (~(_WORD)next_dword & 0xF00) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_BYTE *)(a2 + 85) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( (v56 & 0x2080000) != 0 )
              {
                if ( (next_dword & 0x20) != 0 )
                  *(_WORD *)(a2 + 24) = v35 + 1;
                *(_BYTE *)(a2 + 161) = 1;
                *(_BYTE *)(a2 + 165) = 2;
                *(_WORD *)(a2 + 166) = (next_dword >> 8) & 0xF;
LABEL_154:
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 126) = next_dword & 0xF;
                *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 121) = 1;
                *(_BYTE *)(a2 + 125) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              }
            }
          }
        }
LABEL_153:
        if ( (~(_WORD)next_dword & 0xF00) != 0 )
          return 0;
        goto LABEL_154;
      }
      v19 = next_dword;
      LOBYTE(v19) = 0;
      if ( v19 == -176164864 )
      {
        v20 = next_dword & 0xF0;
LABEL_34:
        if ( v20 == 96 )
        {
          *(_WORD *)(a2 + 24) = 286;
          goto LABEL_37;
        }
        if ( v20 == 64 )
        {
          *(_WORD *)(a2 + 24) = 284;
LABEL_37:
          *(_BYTE *)(a2 + 32) = 14;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0xF;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( *(_WORD *)(a2 + 24) )
          goto LABEL_37;
        sub_1D540(a2, next_dword);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 15;
        *(_BYTE *)(a2 + 45) = 2;
        goto LABEL_140;
      }
LABEL_21:
      if ( (next_dword & 0xFC30F000) == 0xF410F000 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        if ( !(((next_dword & 0x400000) != 0) | HIBYTE(next_dword) & 1) )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 541;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0xFFF;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (next_dword & 0x2000010) == 0x2000000 )
        {
          sub_1D810(a2, a2 + 40, next_dword);
          if ( !v60 )
            *(_DWORD *)(a2 + 28) |= 0x10u;
          v61 = *(_WORD *)(a2 + 46);
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 72) = v61;
          *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
          goto LABEL_198;
        }
        if ( (next_dword & 0x2000000) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
          *(_QWORD *)(a2 + 56) = next_dword & 0xFFF;
          if ( ((next_dword >> 23) & 1) == 0 )
            *(_DWORD *)(a2 + 28) |= 0x10u;
          sub_1E470(a1, a2, a2 + 40, 1);
          if ( *(_WORD *)(a2 + 86) == 15 )
          {
            v75 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            v76 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
            if ( v76 != v75 )
            {
              v75 &= v76;
              if ( v76 == -1 )
                goto LABEL_198;
LABEL_282:
              v77 = sub_38180(*(_QWORD *)(a2 + 16), v75);
              if ( a3 && v77 != 1 )
                sub_1DB20(a3, 12, 12, 0);
              goto LABEL_198;
            }
          }
          else
          {
            if ( *(_BYTE *)(a2 + 41) != 2 )
            {
LABEL_198:
              if ( (next_dword & 0x1000000) != 0 )
              {
                v54 = 50;
                if ( ((next_dword >> 22) & 1) == 0 )
                  v54 = 880;
LABEL_233:
                *(_WORD *)(a2 + 24) = v54;
                return *(unsigned __int16 *)(a2 + 26);
              }
              *(_WORD *)(a2 + 24) = 276;
              return *(unsigned __int16 *)(a2 + 26);
            }
            v75 = *(_QWORD *)(a2 + 56);
          }
          if ( v75 == -1 )
            goto LABEL_198;
          goto LABEL_282;
        }
LABEL_19:
        v10 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      sub_1D540(a2, next_dword);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
      if ( (next_dword & 0x2000000) != 0 )
      {
        if ( (next_dword & 0x10) != 0 )
          return 0;
        sub_1D810(a2, a2 + 80, next_dword);
        v16 = *(_WORD *)(a2 + 86);
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 112) = v16;
        *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
        goto LABEL_25;
      }
LABEL_140:
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
      *(_QWORD *)(a2 + 96) = next_dword & 0xFFF;
      sub_1E470(a1, a2, a2 + 80, 1);
      if ( *(_WORD *)(a2 + 86) == 15 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v47 = *(_QWORD *)(a2 + 96) + 16LL * *(_QWORD *)a2;
        if ( v47 != v32 )
        {
          v32 &= v47;
          if ( v47 != -1 )
            goto LABEL_144;
          goto LABEL_25;
        }
      }
      else
      {
        if ( *(_BYTE *)(a2 + 81) != 2 )
          goto LABEL_25;
        v32 = *(_QWORD *)(a2 + 96);
      }
      if ( v32 != -1 )
      {
LABEL_144:
        v33 = sub_38180(*(_QWORD *)(a2 + 16), v32);
        if ( a3 && v33 != 1 )
          sub_1DB20(a3, 12, 12, 0);
      }
LABEL_25:
      v17 = 2;
      if ( (next_dword & 0x400000) != 0 )
      {
        *(_DWORD *)(a2 + 28) |= 2u;
        v17 = 0;
      }
      *(_BYTE *)(a2 + 45) = 2;
      v18 = *(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL;
      *(_BYTE *)(a2 + 85) = v17;
      v10 = *(_WORD *)(a2 + 24);
      if ( v18 != 0xF000000000100LL || v10 != 30 )
        goto LABEL_11;
      *(_WORD *)(a2 + 24) = 31;
      return *(unsigned __int16 *)(a2 + 26);
    case 8:
    case 9:
      *(_WORD *)(a2 + 24) = ((next_dword & 0x100000) == 0) + 33;
      if ( (next_dword & 0x200000) != 0 )
        *(_DWORD *)(a2 + 28) |= 0x40u;
      if ( (next_dword & 0x800000) == 0 )
        *(_DWORD *)(a2 + 28) |= 0x10u;
      if ( (next_dword & 0x1000000) == 0 )
        *(_DWORD *)(a2 + 28) |= 0x80u;
      if ( (next_dword & 0xFE5FFFE0) == 0xF84D0500 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 214;
        *(_WORD *)(a2 + 46) = 13;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = next_dword & 0x1F;
        *(_BYTE *)(a2 + 113) = 0;
        *(_QWORD *)(a2 + 104) = 0;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
        if ( (~HIWORD(next_dword) & 0xF) == 0 )
          return 0;
        if ( (next_dword & 0xFE50FF00) == 0xF8100A00 )
        {
          *(_BYTE *)(a2 + 32) = 14;
          *(_WORD *)(a2 + 24) = 184;
        }
        else
        {
          if ( !(_WORD)next_dword )
            return 0;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 104) = (unsigned __int16)next_dword;
          *(_BYTE *)(a2 + 112) = (next_dword & 0x400000) != 0;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xA:
    case 0xB:
      v11 = next_dword & 0x800000;
      v12 = next_dword & 0x1000000;
      v13 = 4 * (next_dword & 0xFFFFFF);
      if ( v9 == 15 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 46;
        if ( v11 )
          v13 |= 0xFC000000;
        if ( v12 )
          v13 |= 2u;
      }
      else
      {
        if ( !v12 )
        {
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = 3;
          *(_BYTE *)(a2 + 45) = 9;
          if ( v11 )
            v13 |= 0xFC000000;
          *(_QWORD *)(a2 + 56) = v13 + (unsigned int)*(_QWORD *)(a2 + 8) + 8;
          if ( !a3 )
            return *(unsigned __int16 *)(a2 + 26);
          if ( !(unsigned __int8)sub_38100(a2) )
            goto LABEL_19;
LABEL_18:
          sub_1DB20(a3, 24, 24, 0);
          goto LABEL_19;
        }
        *(_WORD *)(a2 + 24) = 4;
        if ( v11 )
          v13 |= 0xFC000000;
      }
      v14 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = (unsigned int)(v13 + v14 + 8);
      if ( !a3 )
        goto LABEL_19;
      goto LABEL_18;
    case 0xC:
      if ( !*(_DWORD *)(a1 + 220) || (next_dword & 0xFE00FFF) != 0xC400000 )
        goto LABEL_10;
      v25 = (unsigned __int16)next_dword >> 12;
      v26 = HIWORD(next_dword) & 0xF;
      if ( (next_dword & 0x100000) != 0 )
      {
        *(_WORD *)(a2 + 86) = v26;
        *(_WORD *)(a2 + 24) = 79;
        *(_WORD *)(a2 + 46) = v25;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 126) = 23;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 4;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 78;
        *(_WORD *)(a2 + 46) = 23;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 86) = v25;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 126) = v26;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xD:
      goto LABEL_10;
    case 0xE:
      if ( !*(_DWORD *)(a1 + 220) || (next_dword & 0xFF00FF0) != 0xE200010 )
      {
LABEL_10:
        sub_743B0(a1, a2, next_dword);
        v10 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      switch ( HIWORD(next_dword) & 0xF )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 72;
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xA:
        case 0xB:
          if ( !*(_WORD *)(a2 + 24) )
            goto LABEL_10;
          break;
        case 8:
          *(_WORD *)(a2 + 24) = 73;
          break;
        case 0xC:
          *(_WORD *)(a2 + 24) = 74;
          break;
        case 0xD:
          *(_WORD *)(a2 + 24) = 75;
          break;
        case 0xE:
          *(_WORD *)(a2 + 24) = 76;
          break;
        case 0xF:
          *(_WORD *)(a2 + 24) = 77;
          break;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 23;
      *(_BYTE *)(a2 + 45) = 4;
      *(_WORD *)(a2 + 86) = next_dword & 0xF;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 126) = (unsigned __int16)next_dword >> 12;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 2;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xF:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 36;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 48) = next_dword & 0xFFFFFF;
      *(_BYTE *)(a2 + 73) = 0;
      *(_QWORD *)(a2 + 64) = 0;
      return *(unsigned __int16 *)(a2 + 26);
  }
}

