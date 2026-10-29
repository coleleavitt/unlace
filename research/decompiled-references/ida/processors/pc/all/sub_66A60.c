__int64 __fastcall sub_66A60(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // r13
  char v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // r12
  __int16 v10; // ax
  char v11; // al
  int v12; // eax
  __int64 v13; // rdx
  char v14; // cl
  int v15; // eax
  char next_byte; // r12
  char v18; // r15
  char v19; // al
  char v20; // dl
  int v21; // eax
  int v22; // eax
  char v23; // r12
  char v24; // al
  int v25; // eax
  int v26; // eax
  void *v27; // rdx
  char *v28; // r12
  __int16 v29; // ax
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  int v32; // eax
  char v33; // al
  __int16 v34; // ax
  __int64 v35; // r15
  unsigned __int16 *v36; // r12
  int v37; // ecx
  unsigned __int64 v38; // rdx
  char v39; // al
  __int64 v40; // r12
  int v41; // eax
  int v42; // eax
  int v43; // eax
  char v44; // al
  __int64 v45; // rax
  unsigned __int8 v46; // al
  int v47; // eax
  int v48; // edx
  char v49; // cl
  int v50; // eax
  int v51; // edx
  char v52; // cl
  int v53; // eax
  int v54; // edx
  char v55; // cl
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // ecx
  char v59; // al
  __int64 v60; // rdx
  unsigned int v61; // edx
  _WORD *i; // rax
  char v63; // cl
  unsigned __int16 v64; // di
  __int16 v65; // ax
  __int16 v66; // ax
  __int16 v67; // ax
  unsigned __int16 v68; // di
  __int16 v69; // ax
  char v70; // r12
  unsigned __int8 v71; // al
  __int64 v72; // rdx
  int v73; // ecx
  unsigned __int64 v74; // rax
  __int64 v75; // rsi
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  unsigned __int64 v79; // r8
  __int64 v80; // rax
  int v81; // edx
  unsigned __int16 v82; // si
  unsigned __int8 v83; // al
  unsigned __int8 v84; // al
  unsigned __int8 v85; // al
  __int64 v86; // rcx
  char v87; // al
  bool v88; // zf
  __int64 v89; // rax
  int v90; // ecx
  char v91; // dl
  int v92; // esi
  __int64 v93; // rcx
  char v94; // cl
  int v95; // eax
  __int16 v96; // r8
  unsigned __int8 v97; // al
  int v98; // eax
  char v99; // al
  int v100; // eax
  char v101; // al
  int v102; // eax
  char v103; // al
  int v104; // eax
  char v105; // al
  __int16 v106; // ax
  int v107; // eax
  __int16 v108; // ax
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  unsigned __int16 v112; // ax
  unsigned __int64 v113; // rax
  int v114; // ecx
  unsigned __int64 v115; // rsi
  __int64 v116; // rdi
  __int16 v117; // ax
  char v118; // al
  char v119; // cl
  _BYTE *v120; // rax
  unsigned __int16 v121; // r12
  __int16 v122; // ax
  int v123; // eax
  int v124; // eax
  char v125; // al
  int v126; // ecx
  __int16 v127; // ax
  char v128; // cl
  __int64 v129; // rdi
  __int16 v130; // ax
  __int16 v131; // ax
  __int16 v132; // si
  char v133; // al
  __int64 v134; // rsi
  _BYTE v135[360]; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 v136; // [rsp+178h] [rbp-40h]

  v3 = (_BYTE *)a1;
  v136 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 28) = 6144;
  v6 = getseg();
  v7 = *(_BYTE *)(v6 + 43);
  if ( v7 == 2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x10u;
  }
  else if ( v7 == 1 )
  {
    *(_DWORD *)(a2 + 28) |= 8u;
  }
  *(_BYTE *)(a1 + 5224) = 0;
  *(_DWORD *)(a1 + 5220) = 0;
  *(_WORD *)(a1 + 5194) = 0;
  *(_OWORD *)(a1 + 5204) = 0;
  v8 = sub_64C50(a1, a2);
  v9 = v8;
  *(_BYTE *)(a1 + 5192) = v8;
  v10 = *(_WORD *)(a2 + 26);
  if ( v10 != 2 && (v10 != 3 || !*(_BYTE *)(a2 + 33)) || (*(_BYTE *)(a2 + 28) & 1) == 0 )
  {
    v11 = v9;
    if ( (_BYTE)v9 != 98 )
      goto LABEL_7;
LABEL_25:
    if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 || (~(unsigned __int8)get_byte() & 0xC0) == 0 )
    {
      next_byte = insn_get_next_byte();
      v18 = insn_get_next_byte();
      v19 = insn_get_next_byte();
      if ( (next_byte & 8) != 0 )
        return 0;
      if ( (v18 & 4) == 0 )
        return 0;
      v20 = v19 & 8;
      if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 && !v20 )
        return 0;
      if ( next_byte >= 0 )
        *(_BYTE *)(a2 + 33) |= 4u;
      if ( (next_byte & 0x40) == 0 )
        *(_BYTE *)(a2 + 33) |= 2u;
      if ( (next_byte & 0x20) == 0 )
        *(_BYTE *)(a2 + 33) |= 1u;
      if ( (next_byte & 0x10) == 0 )
        *(_BYTE *)(a2 + 273) |= 1u;
      if ( v18 < 0 )
        *(_BYTE *)(a2 + 33) |= 8u;
      if ( v19 < 0 )
        *(_BYTE *)(a2 + 273) |= 4u;
      if ( (v19 & 0x40) != 0 )
        *(_BYTE *)(a2 + 273) |= 2u;
      if ( (v19 & 0x20) != 0 )
        *(_BYTE *)(a2 + 33) |= 0x80u;
      if ( (v19 & 0x10) != 0 )
        *(_BYTE *)(a2 + 273) |= 8u;
      if ( !v20 )
        *(_BYTE *)(a2 + 273) |= 0x10u;
      *(_BYTE *)(a1 + 5194) = v18;
      v21 = v19 & 7;
      if ( v21 )
      {
        *(_BYTE *)(a2 + 244) |= 8u;
        *(_BYTE *)(a2 + 241) = 1;
        *(_WORD *)(a2 + 246) = (unsigned __int8)(v21 - 91);
      }
      v22 = *(_DWORD *)(a2 + 28);
      if ( (v22 & 0x10) == 0 && ((*(_BYTE *)(a2 + 33) & 7) != 0 || (*(_BYTE *)(a2 + 273) & 0x11) != 0) )
        return 0;
      v12 = v22 | 0x10000;
      v13 = next_byte & 7;
      goto LABEL_59;
    }
    v11 = *(_BYTE *)(a1 + 5192);
LABEL_7:
    if ( (unsigned __int8)(v11 + 60) > 1u )
      goto LABEL_8;
    v15 = *(_DWORD *)(a2 + 28);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (~(unsigned __int8)get_byte() & 0xC0) != 0 )
      {
        v11 = *(_BYTE *)(a1 + 5192);
LABEL_8:
        if ( v11 != -113 || (get_byte() & 0x38) == 0 )
        {
          v12 = *(_DWORD *)(a2 + 28);
          if ( (v12 & 0x34000) == 0 )
          {
            v28 = (char *)&unk_155640 + 16 * v9;
            goto LABEL_79;
          }
          v13 = 0;
          v14 = *(_BYTE *)(a1 + 5194) & 3;
          if ( v14 == 2 )
          {
            *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 2;
            return 0;
          }
LABEL_11:
          if ( v14 == 3 )
            goto LABEL_141;
          if ( v14 == 1 )
          {
            BYTE1(v12) &= ~8u;
            *(_DWORD *)(a2 + 28) = v12;
          }
LABEL_14:
          while ( 2 )
          {
            switch ( v13 )
            {
              case 1LL:
                v26 = *(_DWORD *)(a2 + 28);
                if ( (v26 & 0x10000) != 0 )
                {
                  v27 = &unk_137640;
                }
                else
                {
                  v27 = &unk_141640;
                  if ( (v26 & 0x4000) == 0 )
                    return 0;
                }
                goto LABEL_78;
              case 2LL:
                v43 = *(_DWORD *)(a2 + 28);
                if ( (v43 & 0x10000) != 0 )
                {
                  v27 = &unk_C9640;
                }
                else
                {
                  v27 = &unk_D3640;
                  if ( (v43 & 0x4000) == 0 )
                    return 0;
                }
LABEL_78:
                v28 = (char *)sub_63830(a1, a2, (__int64)v27);
                if ( !v28 )
                  return 0;
                break;
              case 3LL:
                v42 = *(_DWORD *)(a2 + 28);
                if ( (v42 & 0x10000) != 0 )
                {
                  v27 = &unk_B5640;
                }
                else
                {
                  v27 = &unk_BF640;
                  if ( (v42 & 0x4000) == 0 )
                    return 0;
                }
                goto LABEL_78;
              case 5LL:
                v27 = &unk_12D640;
                if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
                  return 0;
                goto LABEL_78;
              case 6LL:
                v27 = &unk_123640;
                if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
                  return 0;
                goto LABEL_78;
              case 8LL:
                v27 = &unk_A1640;
                if ( (*(_BYTE *)(a2 + 30) & 2) == 0 )
                  return 0;
                goto LABEL_78;
              case 9LL:
                v27 = &unk_97640;
                if ( (*(_BYTE *)(a2 + 30) & 2) == 0 )
                  return 0;
                goto LABEL_78;
              default:
                return 0;
            }
LABEL_79:
            v29 = *((_WORD *)v28 + 2);
            *(_WORD *)(a2 + 24) = v29;
            if ( v29 >= 0 )
              goto LABEL_86;
            while ( 1 )
            {
              v30 = HIBYTE(v29);
              if ( v30 == 130 )
              {
                v28 = (char *)sub_63710(a1, a2);
                if ( !v28 )
                  return 0;
                goto LABEL_79;
              }
              if ( v30 > 0x82u )
              {
                v27 = 0;
                if ( v30 != 131 )
                {
                  v29 = *(_WORD *)(a2 + 24);
                  goto LABEL_136;
                }
                goto LABEL_78;
              }
              if ( v30 == 128 )
                break;
              if ( *(_BYTE *)(a1 + 5220) )
              {
                v31 = *(unsigned int *)(a1 + 5200);
              }
              else
              {
                *(_BYTE *)(a1 + 5220) = 1;
                v83 = insn_get_next_byte();
                *(_DWORD *)(a1 + 5196) = v83;
                v31 = ((int)v83 >> 3) & 7;
                *(_DWORD *)(a1 + 5200) = v31;
              }
              v28 = (char *)*(&off_16CC60 + *(unsigned __int8 *)(a2 + 24))
                  + 32 * v31
                  + 16 * ((*(char *)(a2 + 33) >> 3) & 1);
              v29 = *((_WORD *)v28 + 2);
              *(_WORD *)(a2 + 24) = v29;
              if ( v29 >= 0 )
                goto LABEL_86;
            }
            if ( *(_BYTE *)(a1 + 5220) )
            {
              v45 = *(unsigned int *)(a1 + 5200);
            }
            else
            {
              *(_BYTE *)(a1 + 5220) = 1;
              v84 = insn_get_next_byte();
              *(_DWORD *)(a1 + 5196) = v84;
              v45 = ((int)v84 >> 3) & 7;
              *(_DWORD *)(a1 + 5200) = v45;
            }
            v29 = *((_WORD *)*(&off_16CCE0 + *(unsigned __int8 *)(a2 + 24)) + v45);
            *(_WORD *)(a2 + 24) = v29;
LABEL_136:
            if ( v29 != -2 )
            {
              if ( v29 == -1 )
                goto LABEL_87;
              if ( v29 < 0 )
              {
                if ( under_debugger )
                  goto LABEL_642;
                v12 = interr();
LABEL_141:
                *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 4;
                continue;
              }
LABEL_86:
              if ( v29 )
                goto LABEL_87;
              return 0;
            }
            break;
          }
          if ( !*(_BYTE *)(a1 + 5220) )
          {
            *(_BYTE *)(a1 + 5220) = 1;
            v46 = insn_get_next_byte();
            *(_DWORD *)(a1 + 5196) = v46;
            *(_DWORD *)(a1 + 5200) = ((int)v46 >> 3) & 7;
            v29 = *(_WORD *)(a2 + 24);
            goto LABEL_86;
          }
LABEL_87:
          if ( (*(_DWORD *)(a1 + 4436) & *(_DWORD *)v28) == 0 )
            return 0;
          v32 = *(_DWORD *)(a2 + 28);
          if ( (v32 & 0x10000) != 0 )
          {
            if ( !*(_BYTE *)(a1 + 5220) )
            {
              *(_BYTE *)(a1 + 5220) = 1;
              v71 = insn_get_next_byte();
              *(_DWORD *)(a1 + 5196) = v71;
              *(_DWORD *)(a1 + 5200) = ((int)v71 >> 3) & 7;
            }
            if ( *(char *)(a2 + 33) < 0 )
            {
              v33 = *(_BYTE *)(a2 + 273);
              if ( (v33 & 2) != 0 && ((~(unsigned __int8)*(_DWORD *)(a1 + 5196) & 0xC0) != 0 || (v33 & 8) == 0) )
                return 0;
            }
            if ( sub_207C0(*(unsigned __int16 *)(a2 + 24)) )
            {
              *(__m128i *)(a1 + 5204) = _mm_shuffle_epi32(_mm_cvtsi32_si128(8u), 0);
              goto LABEL_97;
            }
            if ( (*(_BYTE *)(a2 + 273) & 8) != 0 && (~*(_BYTE *)(a1 + 5196) & 0xC0) == 0 )
            {
              *(__m128i *)(a1 + 5204) = _mm_load_si128((const __m128i *)&xmmword_95160);
              goto LABEL_97;
            }
            if ( *(_DWORD *)(a1 + 5204) )
              goto LABEL_97;
            v32 = *(_DWORD *)(a2 + 28);
            v94 = *(_BYTE *)(a2 + 33);
            if ( (v32 & 0x10000) != 0 )
            {
              if ( v94 >= 0 )
              {
                v47 = 17;
                if ( (*(_BYTE *)(a2 + 273) & 2) != 0 )
                  goto LABEL_156;
                goto LABEL_155;
              }
              if ( (v32 & 0x24000) != 0 || (*(_BYTE *)(a2 + 273) & 2) == 0 )
              {
LABEL_452:
                v47 = 16;
                goto LABEL_156;
              }
LABEL_155:
              v47 = 8;
LABEL_156:
              *(_DWORD *)(a1 + 5204) = v47;
              v48 = *(_DWORD *)(a2 + 28);
              v49 = *(_BYTE *)(a2 + 33);
              if ( (v48 & 0x10000) != 0 )
              {
                if ( v49 < 0 )
                {
                  v50 = 8;
                  if ( (v48 & 0x24000) == 0 )
                    v50 = ((*(_BYTE *)(a2 + 273) & 2) == 0) + 7;
                }
                else
                {
                  v50 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 7 : 16;
                }
              }
              else
              {
                v50 = 7;
                if ( v49 < 0 )
                  v50 = 8 - ((v48 & 0x24000) == 0);
              }
              *(_DWORD *)(a1 + 5208) = v50;
              v51 = *(_DWORD *)(a2 + 28);
              v52 = *(_BYTE *)(a2 + 33);
              if ( (v51 & 0x10000) != 0 )
              {
                if ( v52 < 0 )
                {
                  v53 = 7;
                  if ( (v51 & 0x24000) == 0 )
                    v53 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 7 : 2;
                }
                else
                {
                  v53 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 2 : 8;
                }
              }
              else
              {
                v53 = 2;
                if ( v52 < 0 )
                {
                  v53 = 7;
                  if ( (v51 & 0x24000) == 0 )
                    v53 = 2;
                }
              }
              *(_DWORD *)(a1 + 5212) = v53;
              v54 = *(_DWORD *)(a2 + 28);
              v55 = *(_BYTE *)(a2 + 33);
              if ( (v54 & 0x10000) != 0 )
              {
                if ( v55 < 0 )
                {
                  v56 = 2;
                  if ( (v54 & 0x24000) == 0 )
                    v56 = ((*(_BYTE *)(a2 + 273) & 2) == 0) + 1;
                }
                else
                {
                  v56 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 1 : 7;
                }
              }
              else
              {
                v56 = 1;
                if ( v55 < 0 )
                  v56 = 2 - ((v54 & 0x24000) == 0);
              }
              *(_DWORD *)(a1 + 5216) = v56;
LABEL_97:
              *(_DWORD *)(a1 + 5244) = 0;
              v34 = *(_WORD *)(a2 + 24);
              if ( v34 == 213 )
              {
                if ( !*(_BYTE *)(a2 + 32) && (*(_BYTE *)(a2 + 28) & 7) == 0 )
                {
                  qmemcpy(v135, (const void *)a2, sizeof(v135));
                  v85 = sub_64C50(a1, a2);
                  *(_BYTE *)(a1 + 5192) = v85;
                  if ( (unsigned __int8)(v85 + 40) > 7u || !(unsigned __int8)sub_64170(a1, a2, v85, 1) )
                    qmemcpy((void *)a2, v135, 0x168u);
                }
                goto LABEL_103;
              }
              if ( v34 == -1 )
              {
                if ( !(unsigned __int8)sub_64170(a1, a2, *(unsigned __int8 *)(a1 + 5192), 0) )
                  return 0;
                goto LABEL_103;
              }
              v35 = a2 + 40;
              v36 = (unsigned __int16 *)(v28 + 6);
              while ( 1 )
              {
                v37 = *v36;
                if ( !(_WORD)v37 )
                  goto LABEL_103;
                if ( !sub_657F0(a1, a2, v35, v37) )
                  break;
                v35 += 40;
                ++v36;
                if ( v35 == a2 + 240 )
                  goto LABEL_103;
              }
              v112 = *(_WORD *)(a2 + 24);
              if ( v112 != 1164 )
              {
                if ( v112 > 0x48Cu )
                {
                  if ( v112 != 1165 )
                    return 0;
                  goto LABEL_457;
                }
                if ( v112 == 1163 )
                {
                  if ( *(_WORD *)(a2 + 46) > 3u )
                  {
LABEL_458:
                    *(_BYTE *)(a2 + 44) &= ~8u;
                    *(_BYTE *)(a2 + 84) &= ~8u;
                    *(_DWORD *)(a2 + 28) |= 0x100000u;
                    *(_WORD *)(a2 + 24) = 129;
LABEL_103:
                    sub_63570(a1, a2);
                    if ( !(unsigned __int8)sub_20D60(a2) )
                      return 0;
                    v39 = *(_BYTE *)(a1 + 5194);
                    if ( v39 )
                    {
                      if ( !*(_BYTE *)(a1 + 5224) && (~v39 & 0x78) != 0 )
                        return 0;
                    }
                    LODWORD(v40) = *(unsigned __int16 *)(a2 + 24);
                    v41 = v40;
                    if ( (unsigned __int16)v40 <= 0x309u )
                    {
                      if ( (unsigned __int16)v40 <= 0x305u )
                      {
                        if ( (unsigned __int16)v40 <= 0xE2u )
                        {
                          if ( (unsigned __int16)v40 <= 0x6Cu )
                          {
                            v38 = (unsigned __int16)(v40 - 6);
                            switch ( *(_WORD *)(a2 + 24) )
                            {
                              case 6:
                                if ( (*(_BYTE *)(a1 + 4452) & 0x10) != 0 )
                                  goto LABEL_224;
                                if ( (unsigned __int16)get_word() )
                                  goto LABEL_219;
                                return 0;
                              case 7:
                              case 8:
                              case 9:
                              case 0xA:
                              case 0xB:
                              case 0xC:
                              case 0xD:
                              case 0xE:
                              case 0xF:
                              case 0x10:
                              case 0x14:
                              case 0x15:
                              case 0x16:
                              case 0x17:
                              case 0x18:
                              case 0x19:
                              case 0x1A:
                              case 0x1B:
                              case 0x1C:
                              case 0x1E:
                              case 0x1F:
                              case 0x20:
                              case 0x21:
                              case 0x22:
                              case 0x23:
                              case 0x24:
                              case 0x26:
                              case 0x27:
                              case 0x28:
                              case 0x29:
                              case 0x2C:
                              case 0x2D:
                              case 0x2F:
                              case 0x30:
                              case 0x31:
                              case 0x33:
                              case 0x34:
                              case 0x35:
                              case 0x36:
                              case 0x37:
                              case 0x38:
                              case 0x39:
                              case 0x3B:
                              case 0x3C:
                              case 0x3D:
                              case 0x3E:
                              case 0x3F:
                              case 0x40:
                              case 0x41:
                              case 0x42:
                              case 0x43:
                              case 0x44:
                              case 0x45:
                              case 0x46:
                              case 0x47:
                              case 0x48:
                              case 0x49:
                              case 0x4A:
                              case 0x4B:
                              case 0x4C:
                              case 0x4D:
                              case 0x4E:
                              case 0x4F:
                              case 0x50:
                              case 0x51:
                              case 0x52:
                              case 0x53:
                              case 0x54:
                              case 0x55:
                              case 0x56:
                              case 0x57:
                              case 0x58:
                              case 0x59:
                              case 0x5A:
                              case 0x5B:
                              case 0x5C:
                              case 0x5D:
                                goto LABEL_220;
                              case 0x11:
                                v58 = *(_DWORD *)(a2 + 28) & 0x10;
                                if ( !v58 )
                                  goto LABEL_185;
                                if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                                  *(_BYTE *)(a2 + 45) = 5;
                                goto LABEL_184;
                              case 0x12:
                                v76 = *(_DWORD *)(a2 + 28);
                                v58 = v76 & 0x10;
                                if ( (v76 & 0x10) == 0 )
                                  goto LABEL_185;
                                BYTE1(v76) |= 8u;
                                *(_BYTE *)(a2 + 45) = 7;
                                *(_DWORD *)(a2 + 28) = v76;
                                goto LABEL_184;
                              case 0x13:
                              case 0x1D:
                                if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 8) != 0 )
                                {
                                  *(_WORD *)(a2 + 24) = v40 + 2;
                                }
                                else if ( sub_630B0(a2) )
                                {
                                  *(_WORD *)(a2 + 24) = v40 + 1;
                                }
                                *(_BYTE *)(a2 + 45) = get_dtype_by_size();
                                *(_BYTE *)(a1 + 5222) = 1;
                                LOWORD(v41) = *(_WORD *)(a2 + 24);
                                goto LABEL_220;
                              case 0x25:
                              case 0x32:
                              case 0x5E:
                                goto LABEL_225;
                              case 0x2A:
                                v57 = *(_DWORD *)(a2 + 28);
                                if ( *(_BYTE *)(a2 + 121)
                                  && *(_WORD *)(a2 + 46) == *(_WORD *)(a2 + 86)
                                  && *(_BYTE *)(a2 + 41) == 1
                                  && *(_BYTE *)(a2 + 81) == 1 )
                                {
                                  *(_BYTE *)(a2 + 84) &= ~8u;
                                }
                                goto LABEL_183;
                              case 0x2B:
                                v58 = *(_DWORD *)(a2 + 28) & 0x10;
                                if ( !v58 )
                                  goto LABEL_185;
                                if ( (*(_BYTE *)(a2 + 33) & 8) != 0 && *(_BYTE *)(a2 + 45) == 7 )
                                  goto LABEL_244;
                                goto LABEL_184;
                              case 0x2E:
                                *(_QWORD *)(a2 + 88) = 4294967294LL;
                                v78 = *(_QWORD *)(a2 + 48);
                                v38 = *(unsigned int *)(a1 + 4452);
                                if ( v78 == 32 && (v38 & 0x400) == 0 && (*(_BYTE *)(a2 + 28) & 8) != 0 )
                                {
                                  *(_BYTE *)(a2 + 44) &= ~8u;
                                  *(_BYTE *)(a2 + 84) &= ~8u;
                                  *(_BYTE *)(a2 + 85) = 2;
                                  sub_640C0(a1, a2, a2 + 80);
                                  LOWORD(v41) = *(_WORD *)(a2 + 24);
                                  goto LABEL_220;
                                }
                                BYTE1(v38) &= 8u;
                                if ( BYTE1(v38) )
                                  goto LABEL_224;
                                if ( (unsigned __int8)sub_64980(a1, a2, v78, 0) )
                                  *(_DWORD *)(a2 + 28) |= 0x2000u;
                                break;
                              case 0x3A:
                                v38 = *(unsigned int *)(a2 + 28);
                                v77 = *(_DWORD *)(a2 + 28) & 0x1018;
                                if ( v77 == 4112 )
                                {
                                  *(_WORD *)(a2 + 24) = 60;
                                }
                                else
                                {
                                  v38 &= 0x1008u;
                                  if ( !(_DWORD)v38 || v77 == 4104 )
                                    *(_WORD *)(a2 + 24) = 59;
                                }
                                goto LABEL_254;
                              default:
                                v38 = (unsigned int)(v40 - 6);
                                goto LABEL_224;
                            }
                            goto LABEL_219;
                          }
                          v38 = (unsigned __int16)(v40 - 109);
                          switch ( *(_WORD *)(a2 + 24) )
                          {
                            case 0x6D:
                            case 0x71:
                            case 0x75:
                              v38 = *(unsigned int *)(a2 + 28);
                              if ( (v38 & 0x1000) == 0 )
                              {
                                v106 = v40 + 1;
                                v38 &= 0x1008u;
                                if ( (_DWORD)v38 )
                                  v106 = v40 - 1;
                                *(_WORD *)(a2 + 24) = v106;
                              }
                              goto LABEL_254;
                            case 0x7A:
                              if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1E000000000100LL )
                                return 0;
                              if ( *(_BYTE *)(a1 + 5192) != 0x8C )
                                goto LABEL_438;
                              if ( *(_BYTE *)(a2 + 41) != 1 )
                              {
                                *(_BYTE *)(a2 + 45) = 1;
LABEL_438:
                                if ( *(_BYTE *)(a1 + 5192) == 0x8E && *(_BYTE *)(a2 + 81) != 1 )
                                  *(_BYTE *)(a2 + 85) = 1;
                              }
                              if ( (unsigned __int8)get_byte() != 0xB8
                                || (unsigned int)get_dword() != -1869599027
                                || (unsigned __int8)get_byte() != 0x90
                                || next_head() != -1
                                || (get_flags_ex() & 0x600) != 0 && (get_flags_ex() & 0x600) != 0x200 )
                              {
                                goto LABEL_219;
                              }
                              v111 = *(_DWORD *)(a2 + 28);
                              *(_BYTE *)(a2 + 44) &= ~8u;
                              *(_BYTE *)(a2 + 84) &= ~8u;
                              *(_BYTE *)(a2 + 41) = 5;
                              v58 = v111 & 0x10;
                              *(_QWORD *)(a2 + 48) = 46;
                              *(_DWORD *)(a2 + 24) = (_DWORD)&unk_A002E;
                              goto LABEL_184;
                            case 0x81:
                              goto LABEL_420;
                            case 0x88:
                            case 0x91:
LABEL_225:
                              LODWORD(v72) = *(_DWORD *)(a2 + 28);
                              if ( (v72 & 0x800) == 0 )
                              {
                                if ( (v72 & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 8) != 0 )
                                  goto LABEL_560;
                                goto LABEL_228;
                              }
                              v128 = *(_BYTE *)(a2 + 33);
                              if ( !v128 )
                                goto LABEL_230;
                              if ( (v72 & 0x10) == 0 )
                                goto LABEL_228;
                              if ( (v128 & 8) != 0 )
                                goto LABEL_560;
                              if ( (unsigned __int16)v40 > 0x56u )
                              {
                                v72 = 0x20D04000AAA00143LL;
                                if ( _bittest64(&v72, (unsigned int)(v40 - 88)) )
                                  goto LABEL_560;
                                goto LABEL_228;
                              }
                              goto LABEL_640;
                            case 0x8C:
                            case 0x95:
                              LODWORD(v72) = *(_DWORD *)(a2 + 28) & 0x800;
                              if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
                              {
                                if ( !(_DWORD)v72 )
                                  goto LABEL_230;
                                goto LABEL_560;
                              }
                              if ( !(_DWORD)v72 || *(_BYTE *)(a2 + 33) )
                                goto LABEL_228;
                              goto LABEL_230;
                            case 0x9F:
                            case 0xA0:
                              v107 = *(_DWORD *)(a2 + 28);
                              v38 = v107 & 0x800;
                              if ( (v107 & 0x800) == 0 || *(_BYTE *)(a2 + 33) )
                              {
                                if ( (v107 & 0x10) != 0 && ((*(_BYTE *)(a2 + 33) & 8) != 0 || (v107 & 0x800) != 0) )
                                {
                                  v108 = 741;
                                  if ( (_WORD)v40 == 159 )
                                    v108 = 738;
                                }
                                else if ( sub_630B0(a2) )
                                {
                                  v108 = 740;
                                  if ( (_WORD)v40 == 159 )
                                    v108 = 737;
                                }
                                else
                                {
                                  v108 = 739;
                                  if ( (_WORD)v40 == 159 )
                                    v108 = 736;
                                }
                                *(_WORD *)(a2 + 24) = v108;
                                *(_BYTE *)(a1 + 5222) = 1;
                                LOWORD(v40) = *(_WORD *)(a2 + 24);
                              }
                              *(_QWORD *)(a2 + 48) = (unsigned __int16)*(_QWORD *)(a2 + 48);
                              LOWORD(v41) = v40;
                              goto LABEL_220;
                            case 0xCB:
                              if ( *(_BYTE *)(a2 + 41) == 1 )
                                goto LABEL_224;
                              *(_BYTE *)(a1 + 5222) = 0;
                              LOWORD(v41) = *(_WORD *)(a2 + 24);
                              *(_BYTE *)(a2 + 45) = 1;
                              goto LABEL_220;
                            case 0xD2:
                              v57 = *(_DWORD *)(a2 + 28);
                              if ( !*(_BYTE *)(v6 + 43) && *(_BYTE *)(a2 + 41) == 1 && *(_BYTE *)(a2 + 81) == 1 )
                              {
                                v38 = *(unsigned __int16 *)(a2 + 86);
                                *(_WORD *)(a2 + 86) = *(_WORD *)(a2 + 46);
                                *(_WORD *)(a2 + 46) = v38;
                              }
                              goto LABEL_183;
                            case 0xD6:
                              v57 = *(_DWORD *)(a2 + 28);
                              if ( *(_BYTE *)(a1 + 5192) != 0x90 || (v57 & 0x800) == 0 || *(_BYTE *)(a2 + 33) )
                                goto LABEL_183;
                              *(_WORD *)(a2 + 24) = 129;
                              *(_BYTE *)(a2 + 41) = 0;
                              *(_BYTE *)(a2 + 81) = 0;
                              *(_BYTE *)(a1 + 5223) = 0;
                              *(_WORD *)(a1 + 5221) = 0;
LABEL_420:
                              if ( *(_BYTE *)(a1 + 5192) != 15 )
                                goto LABEL_421;
                              v133 = *(_BYTE *)(a1 + 5193);
                              v38 = *(unsigned int *)(a1 + 5200);
                              if ( v133 == 24 )
                              {
                                if ( (unsigned int)(v38 - 4) <= 1 )
                                  goto LABEL_603;
                              }
                              else
                              {
                                if ( (v133 & 0xFB) == 0x19 || (_DWORD)v38 == 5 )
                                  goto LABEL_603;
                                if ( v133 == 30 )
                                {
                                  v57 = *(_DWORD *)(a2 + 28);
                                  if ( (v57 & 2) == 0 && (*(_BYTE *)(a1 + 5194) & 0x83) != 0x82
                                    || (unsigned int)(*(_DWORD *)(a1 + 5196) - 250) > 1 )
                                  {
                                    goto LABEL_604;
                                  }
LABEL_421:
                                  if ( *(_BYTE *)(a2 + 41) )
                                    goto LABEL_219;
                                  goto LABEL_422;
                                }
                              }
                              if ( !(_DWORD)v38 || v133 != 31 )
                                goto LABEL_421;
LABEL_603:
                              v57 = *(_DWORD *)(a2 + 28);
LABEL_604:
                              *(_BYTE *)(a2 + 44) &= ~8u;
                              *(_BYTE *)(a2 + 84) &= ~8u;
                              v88 = *(_BYTE *)(a2 + 41) == 0;
                              *(_WORD *)(a2 + 24) = 129;
                              *(_DWORD *)(a2 + 28) = v57 | 0x100000;
                              if ( !v88 )
                                goto LABEL_183;
LABEL_422:
                              if ( (*(_BYTE *)(a1 + 4438) & 7) != 0 && *(_BYTE *)(a1 + 5192) == 0x90 )
                              {
                                v109 = *(_DWORD *)(a2 + 28);
                                if ( (v109 & 2) != 0 || (*(_BYTE *)(a1 + 5194) & 0x83) == 0x82 )
                                {
                                  v110 = *(_DWORD *)(a2 + 28);
                                  *(_WORD *)(a2 + 24) = 569;
                                  v58 = v109 & 0x10;
                                  *(_DWORD *)(a2 + 28) = v110 & 0xFFFFFFFD;
                                  goto LABEL_184;
                                }
                              }
                              goto LABEL_219;
                            case 0xE2:
                              v58 = *(_DWORD *)(a2 + 28) & 0x10;
                              if ( !v58 )
                                goto LABEL_185;
                              if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                              {
                                *(_WORD *)(a2 + 24) = 595;
                                *(_BYTE *)(a2 + 45) = 8;
                              }
                              goto LABEL_184;
                            default:
                              v38 = (unsigned int)(v40 - 109);
                              goto LABEL_220;
                          }
                        }
                        if ( (unsigned __int16)v40 <= 0x1ADu )
                        {
                          if ( (unsigned __int16)v40 <= 0x1ABu )
                          {
                            if ( (_WORD)v40 != 350 )
                            {
                              if ( (unsigned __int16)(v40 - 398) > 1u )
                                goto LABEL_224;
                              v58 = *(_DWORD *)(a2 + 28) & 0x10;
                              if ( !v58 )
                                goto LABEL_185;
                              if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                                *(_WORD *)(a2 + 24) = v40 + 1401;
LABEL_184:
                              if ( v58 && !(unsigned __int8)sub_63330((__int64)v3, a2, v38, v58) )
                                return 0;
LABEL_185:
                              v59 = v3[5192];
                              if ( v59 != -125 && v59 != 106 )
                                goto LABEL_187;
                              v88 = v59 == 106;
                              v89 = a2 + 40;
                              if ( !v88 )
                                v89 = a2 + 80;
                              *(_QWORD *)(v89 + 8) = *(char *)(v89 + 8);
                              v90 = *(_DWORD *)(a2 + 28);
                              if ( (v90 & 0x10) == 0 )
                              {
                                v91 = ((*(_DWORD *)(a2 + 28) & 0x818) == 2056 || (*(_DWORD *)(a2 + 28) & 0x818) == 0)
                                    + 1;
                                goto LABEL_325;
                              }
                              v91 = 7;
                              if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                                goto LABEL_325;
                              v91 = 1;
                              if ( (v90 & 0x800) == 0 )
                                goto LABEL_325;
                              v92 = *(unsigned __int16 *)(a2 + 24);
                              if ( (unsigned __int16)v92 > 0x39u )
                              {
                                v91 = 7;
                                if ( (unsigned __int16)(v92 - 61) <= 0x18u )
                                  goto LABEL_325;
                                if ( (unsigned __int16)v92 > 0xA0u )
                                {
                                  if ( (_WORD)v92 == 738 || (_WORD)v92 == 741 )
                                    goto LABEL_325;
                                  goto LABEL_324;
                                }
                                if ( (unsigned __int16)v92 > 0x6Cu )
                                {
                                  v129 = 0xC050682000555LL;
                                  if ( _bittest64(&v129, (unsigned int)(v92 - 109)) )
                                    goto LABEL_325;
                                  goto LABEL_324;
                                }
                              }
                              else
                              {
                                v91 = 7;
                                if ( (unsigned __int16)v92 > 0x34u )
                                  goto LABEL_325;
                                if ( (unsigned __int16)v92 <= 0x12u )
                                {
                                  if ( (unsigned __int16)v92 <= 0xFu )
LABEL_324:
                                    v91 = ((*(_DWORD *)(a2 + 28) & 0x818) == 2064) + 1;
LABEL_325:
                                  *(_BYTE *)(v89 + 5) = v91;
                                  v3[5222] = 1;
LABEL_187:
                                  v60 = a2 + 41;
                                  do
                                  {
                                    if ( !*(_BYTE *)v60 )
                                      break;
                                    switch ( *(_BYTE *)v60 )
                                    {
                                      case 0xC:
                                        v67 = *(_WORD *)(v60 + 5);
                                        *(_BYTE *)(v60 + 4) = 7;
                                        *(_BYTE *)v60 = 1;
                                        *(_WORD *)(v60 + 5) = (v67 & 7) + 56;
                                        break;
                                      case 0xD:
                                        v64 = *(_WORD *)(v60 + 5);
                                        *(_BYTE *)(v60 + 4) = 8;
                                        *(_BYTE *)v60 = 1;
                                        v65 = v64 + 85;
                                        if ( v64 <= 0xFu )
                                          v65 = v64 + 64;
                                        *(_WORD *)(v60 + 5) = v65;
                                        break;
                                      case 0xE:
                                        v68 = *(_WORD *)(v60 + 5);
                                        *(_BYTE *)(v60 + 4) = 16;
                                        *(_BYTE *)v60 = 1;
                                        v69 = v68 + 101;
                                        if ( v68 <= 0xFu )
                                          v69 = v68 + 81;
                                        *(_WORD *)(v60 + 5) = v69;
                                        break;
                                      case 0xF:
                                        *(_WORD *)(v60 + 5) += 133;
                                        *(_BYTE *)(v60 + 4) = 17;
                                        *(_BYTE *)v60 = 1;
                                        break;
                                      case 0x10:
                                        v66 = *(_WORD *)(v60 + 5);
                                        *(_BYTE *)(v60 + 4) = 7;
                                        *(_BYTE *)v60 = 1;
                                        *(_WORD *)(v60 + 5) = (v66 & 7) + 165;
                                        break;
                                      default:
                                        break;
                                    }
                                    v60 += 40;
                                  }
                                  while ( a2 + 361 != v60 );
                                  v61 = *(_DWORD *)(a2 + 28);
                                  if ( (v61 & 0x10) != 0 )
                                  {
                                    for ( i = (_WORD *)(a2 + 46); i != (_WORD *)(a2 + 366); i += 20 )
                                    {
                                      v63 = *((_BYTE *)i - 5);
                                      if ( !v63 )
                                        break;
                                      if ( v63 == 11 && *i > 7u )
                                      {
                                        if ( (*(_BYTE *)(a2 + 33) & 1) == 0 )
                                          return 0;
                                        *i &= 7u;
                                      }
                                    }
                                  }
                                  v79 = *(unsigned __int16 *)(a2 + 24);
                                  if ( (v61 & 4) == 0 )
                                  {
                                    if ( (_WORD)v79 == 214 )
                                    {
LABEL_274:
                                      if ( (v61 & 2) != 0 )
                                      {
                                        v61 = v61 & 0xFFF7FFFD | 0x80000;
                                        *(_DWORD *)(a2 + 28) = v61;
                                      }
LABEL_276:
                                      if ( (v61 & 0x800) == 0 && !v3[5222] )
                                      {
                                        BYTE1(v61) |= 1u;
                                        *(_DWORD *)(a2 + 28) = v61;
                                      }
                                      if ( (v61 & 0x1000) == 0 && !v3[5223] )
                                      {
                                        BYTE1(v61) |= 2u;
                                        *(_DWORD *)(a2 + 28) = v61;
                                      }
                                      if ( *(_BYTE *)(a2 + 32) )
                                      {
                                        v81 = *(_DWORD *)(a2 + 28);
                                        if ( v3[5221] != 1
                                          || (_WORD)v79 == 92
                                          || (v81 & 0x10) != 0 && (unsigned int)(*(char *)(a2 + 32) - 33) > 1 )
                                        {
                                          LOBYTE(v81) = v81 | 0x80;
                                          *(_DWORD *)(a2 + 28) = v81;
                                        }
                                      }
                                      v82 = *(_WORD *)(a2 + 26);
                                      if ( !v82 )
                                        return v82;
                                      v95 = sub_63220(a2);
                                      if ( v95 == 1 )
                                      {
                                        *(_BYTE *)(a2 + 44) &= ~8u;
                                        *(_BYTE *)(a2 + 84) &= ~8u;
                                      }
                                      else if ( !v95 )
                                      {
                                        if ( *(_BYTE *)(a2 + 41) != 1 || v96 == 133 )
                                          *(_BYTE *)(a2 + 44) |= 8u;
                                        if ( *(_BYTE *)(a2 + 81) != 1 )
                                        {
                                          *(_BYTE *)(a2 + 84) |= 8u;
                                          if ( !a3 )
                                            return v82;
LABEL_349:
                                          v3 = (_BYTE *)(a2 + 40);
                                          v40 = a2 + 360;
                                          while ( 1 )
                                          {
                                            v97 = v3[1];
                                            if ( !v97 )
                                              return *(unsigned __int16 *)(a2 + 26);
                                            if ( v97 == 5 )
                                              break;
                                            if ( v97 <= 5u )
                                            {
                                              if ( v97 != 2 )
                                              {
                                                if ( v97 != 4 )
                                                  goto LABEL_353;
                                                goto LABEL_352;
                                              }
                                            }
                                            else if ( (unsigned __int8)(v97 - 6) > 1u
                                                   || !(unsigned __int8)sub_7D160(a2, v3) )
                                            {
                                              goto LABEL_353;
                                            }
LABEL_359:
                                            v98 = sub_63A20(a2, (__int64)v3);
                                            if ( *(unsigned __int16 *)(a2 + 26) <= v98 )
                                            {
                                              if ( !under_debugger )
                                              {
                                                interr();
LABEL_640:
                                                v72 = 0x2000000E00005LL;
                                                if ( _bittest64(&v72, (unsigned int)(v40 - 37)) )
                                                {
LABEL_560:
                                                  v41 = v40 + 2;
                                                  *(_WORD *)(a2 + 24) = v40 + 2;
                                                }
                                                else
                                                {
LABEL_228:
                                                  if ( sub_630B0(a2) )
                                                  {
                                                    v41 = v40 + 1;
                                                    *(_WORD *)(a2 + 24) = v40 + 1;
                                                  }
                                                  else
                                                  {
                                                    v41 = v40 - 1;
                                                    *(_WORD *)(a2 + 24) = v40 - 1;
                                                  }
                                                }
LABEL_230:
                                                v73 = *(_DWORD *)(a2 + 28);
                                                if ( (v73 & 0x10) == 0 )
                                                {
                                                  v126 = *(_DWORD *)(a2 + 28) & 0x818;
                                                  LOBYTE(v72) = v126 == 2056;
                                                  LOBYTE(v41) = v126 == 0;
                                                  v38 = (v41 | (unsigned int)v72) + 1;
                                                  goto LABEL_236;
                                                }
                                                v38 = 7;
                                                if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
                                                {
                                                  v38 = 1;
                                                  if ( (v73 & 0x800) != 0 )
                                                  {
                                                    if ( (unsigned __int16)v41 > 0x6Cu )
                                                    {
                                                      v38 = 7;
                                                      v134 = 0xC050682000555LL;
                                                      if ( _bittest64(&v134, (unsigned int)(v41 - 109)) )
                                                        goto LABEL_236;
                                                    }
                                                    else
                                                    {
                                                      v74 = (unsigned int)(v41 - 37);
                                                      if ( (unsigned __int16)v74 <= 0x3Bu )
                                                      {
                                                        v75 = 0xA1A000000E00005LL;
                                                        v38 = 7;
                                                        if ( _bittest64(&v75, v74) )
                                                          goto LABEL_236;
                                                      }
                                                    }
                                                    LOBYTE(v38) = (*(_DWORD *)(a2 + 28) & 0x818) == 2064;
                                                    v38 = (unsigned int)(v38 + 1);
                                                  }
                                                }
LABEL_236:
                                                *(_BYTE *)(a2 + 45) = v38;
                                                v3[5222] = 1;
                                                LOWORD(v41) = *(_WORD *)(a2 + 24);
LABEL_220:
                                                if ( (unsigned __int16)v41 > 0x39u )
                                                {
                                                  if ( (unsigned __int16)(v41 - 61) <= 0x18u )
                                                    goto LABEL_222;
                                                }
                                                else if ( (unsigned __int16)v41 > 0x34u )
                                                {
LABEL_222:
                                                  if ( ((*(_BYTE *)(a2 + 32) - 30) & 0xFD) == 0 )
                                                    v3[5221] = 1;
                                                }
                                                goto LABEL_224;
                                              }
LABEL_642:
                                              BUG();
                                            }
                                            sub_63100(
                                              a3,
                                              8 * ((char)v3[2] + v98),
                                              8 * ((char)v3[2] + v98),
                                              8 * (char)v3[2]);
LABEL_353:
                                            v3 += 40;
                                            if ( v3 == (_BYTE *)v40 )
                                              return *(unsigned __int16 *)(a2 + 26);
                                          }
                                          if ( !v3[2] )
                                            goto LABEL_353;
LABEL_352:
                                          get_flags_ex();
                                          if ( !(unsigned __int8)is_off() )
                                            goto LABEL_353;
                                          goto LABEL_359;
                                        }
                                      }
                                      if ( !a3 )
                                        return v82;
                                      goto LABEL_349;
                                    }
                                    goto LABEL_327;
                                  }
                                  if ( (_WORD)v79 != 18 )
                                  {
                                    if ( (unsigned __int16)v79 <= 0x12u )
                                    {
                                      if ( (_WORD)v79 == 16 )
                                      {
                                        if ( v3[5192] != 0xE8 )
                                        {
                                          if ( (v61 & 1) != 0 && (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) <= 2u )
                                          {
LABEL_271:
                                            v80 = 0x10040000E0E0LL;
                                            if ( _bittest64(&v80, v79) )
                                              goto LABEL_272;
                                          }
LABEL_304:
                                          if ( (*(_QWORD *)(a2 + 24) & 0x30000FFFFLL) != 0x20000007ALL )
                                            goto LABEL_276;
                                          v87 = v3[5192];
                                          if ( (unsigned __int8)(v87 + 120) > 1u && (unsigned __int8)(v87 + 58) > 1u )
                                            goto LABEL_276;
LABEL_272:
                                          if ( (v61 & 4) == 0 )
                                            goto LABEL_274;
                                          goto LABEL_273;
                                        }
                                        goto LABEL_393;
                                      }
LABEL_459:
                                      if ( (v61 & 1) == 0 || (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) > 2u )
                                        goto LABEL_304;
                                      goto LABEL_461;
                                    }
                                    if ( (unsigned __int16)v79 > 0x58u )
                                    {
                                      if ( (_WORD)v79 != 159 )
                                      {
                                        if ( (_WORD)v79 == 214 )
                                        {
LABEL_273:
                                          v61 = v61 & 0xFFFBFFFB | 0x40000;
                                          *(_DWORD *)(a2 + 28) = v61;
                                          goto LABEL_274;
                                        }
                                        goto LABEL_327;
                                      }
                                      goto LABEL_393;
                                    }
                                    if ( (unsigned __int16)v79 <= 0x34u )
                                      goto LABEL_459;
                                    v86 = 0x99F809E0DLL;
                                    if ( !_bittest64(&v86, (unsigned int)(v79 - 53)) )
                                    {
                                      if ( (_WORD)v79 != 86 )
                                        goto LABEL_459;
                                      if ( (v3[5192] & 0xFD) != 0xE9 )
                                        goto LABEL_304;
                                    }
                                  }
LABEL_393:
                                  v61 &= ~4u;
                                  BYTE1(v61) |= 0x80u;
                                  *(_DWORD *)(a2 + 28) = v61;
LABEL_327:
                                  if ( (v61 & 1) == 0 || (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) > 2u )
                                    goto LABEL_304;
                                  if ( (unsigned __int16)v79 > 0x83u )
                                  {
                                    if ( (unsigned __int16)(v79 - 166) <= 0x3Cu )
                                    {
                                      v93 = 0x102C080000000001LL;
                                      if ( _bittest64(&v93, (unsigned int)(v79 - 166)) )
                                        goto LABEL_272;
                                    }
                                    goto LABEL_304;
                                  }
LABEL_461:
                                  if ( (unsigned __int16)v79 > 0x81u )
                                    goto LABEL_272;
                                  if ( (unsigned __int16)v79 > 0x2Cu )
                                  {
                                    if ( (_WORD)v79 == 128 )
                                      goto LABEL_272;
                                    goto LABEL_304;
                                  }
                                  if ( (unsigned __int16)v79 > 4u )
                                    goto LABEL_271;
                                  goto LABEL_304;
                                }
                              }
                              v115 = (unsigned int)(v92 - 37);
                              if ( (unsigned __int16)v115 <= 0x3Bu )
                              {
                                v116 = 0xA1A000000E00005LL;
                                v91 = 7;
                                if ( _bittest64(&v116, v115) )
                                  goto LABEL_325;
                              }
                              goto LABEL_324;
                            }
                            v57 = *(_DWORD *)(a2 + 28);
                            if ( (*(_WORD *)(a1 + 4437) & 0x780) != 0 )
                              *(_WORD *)(a2 + 24) = 589;
LABEL_183:
                            v58 = v57 & 0x10;
                            goto LABEL_184;
                          }
                          v38 = *(_QWORD *)(a2 + 128);
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( v38 > 7 )
                            goto LABEL_184;
                          *(_BYTE *)(a2 + 121) = 0;
                          v127 = 497;
                          if ( (_WORD)v40 != 429 )
                            goto LABEL_564;
                          goto LABEL_566;
                        }
                        if ( (_WORD)v40 == 602 )
                        {
LABEL_385:
                          v102 = *(_DWORD *)(a2 + 28);
                          *(_BYTE *)(a2 + 41) = 1;
                          *(_WORD *)(a2 + 46) = 0;
                          v38 = v102 & 0x10;
                          if ( (v102 & 0x1000) != 0 )
                          {
                            v103 = 7;
                            if ( !(_DWORD)v38 )
                              v103 = 2;
                          }
                          else
                          {
                            v103 = 1 - (((_DWORD)v38 == 0) - 1);
                          }
                          *(_BYTE *)(a2 + 45) = v103;
                          *(_BYTE *)(a1 + 5223) = 1;
                          v104 = *(_DWORD *)(a2 + 28);
                          *(_WORD *)(a2 + 86) = 1;
                          *(_BYTE *)(a2 + 81) = 1;
                          *(_WORD *)(a2 + 126) = 2;
                          *(_BYTE *)(a2 + 121) = 1;
                          LOBYTE(v104) = (v104 & 0x10) == 0 ? 2 : 7;
                          *(_BYTE *)(a2 + 85) = v104;
                          *(_BYTE *)(a2 + 125) = v104;
                          goto LABEL_219;
                        }
                        if ( (unsigned __int16)v40 <= 0x25Au )
                        {
                          if ( (unsigned __int16)(v40 - 524) > 1u )
                            goto LABEL_224;
                          v38 = *(_QWORD *)(a2 + 128);
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( v38 > 7 )
                            goto LABEL_184;
                          *(_BYTE *)(a2 + 121) = 0;
                          v127 = 644;
                          if ( (_WORD)v40 != 525 )
                          {
LABEL_564:
                            v127 = 636;
                            if ( (_WORD)v40 == 428 )
                              v127 = 489;
                          }
LABEL_566:
                          *(_WORD *)(a2 + 24) = v38 + v127;
                          goto LABEL_184;
                        }
                        if ( (_WORD)v40 != 603 )
                          goto LABEL_224;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 46) = 0;
                        if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
                        {
LABEL_383:
                          v58 = 0;
                          v101 = 2;
LABEL_384:
                          *(_BYTE *)(a2 + 45) = v101;
                          *(_WORD *)(a2 + 86) = 1;
                          *(_BYTE *)(a2 + 81) = 1;
                          *(_BYTE *)(a2 + 85) = v101;
                          goto LABEL_184;
                        }
LABEL_500:
                        v58 = 16;
                        v101 = 7;
                        goto LABEL_384;
                      }
LABEL_181:
                      v57 = *(_DWORD *)(a2 + 28);
                      if ( (v57 & 0x4000) != 0 && *(char *)(a2 + 33) < 0 )
                      {
                        v88 = *(_BYTE *)(a2 + 121) == 13;
                        *(_BYTE *)(a2 + 41) = 14;
                        *(_BYTE *)(a2 + 81) = 14;
                        if ( v88 )
                          *(_BYTE *)(a2 + 121) = 14;
                      }
                      goto LABEL_183;
                    }
                    if ( (unsigned __int16)v40 <= 0x694u )
                    {
                      if ( (unsigned __int16)v40 > 0x658u )
                      {
                        v38 = (unsigned __int16)(v40 - 1625);
                        switch ( *(_WORD *)(a2 + 24) )
                        {
                          case 0x659:
                            v114 = *(_DWORD *)(a2 + 28);
                            *(_BYTE *)(a2 + 121) = 13;
                            *(_WORD *)(a2 + 126) = 0;
                            v58 = v114 & 0x10;
                            break;
                          case 0x662:
                          case 0x66B:
                          case 0x66C:
                          case 0x688:
                            goto LABEL_485;
                          case 0x663:
                          case 0x664:
                          case 0x665:
                          case 0x666:
                          case 0x667:
                          case 0x668:
                          case 0x669:
                          case 0x66A:
                            v113 = *(_QWORD *)(a2 + 168);
                            v57 = *(_DWORD *)(a2 + 28);
                            if ( v113 <= 7 )
                            {
                              *(_BYTE *)(a2 + 161) = 0;
                              v38 = (unsigned __int16)(v40 - 1635);
                              *(_WORD *)(a2 + 24) = word_974A0[v38] + v113;
                            }
                            goto LABEL_183;
                          case 0x689:
                          case 0x68A:
                          case 0x68B:
                          case 0x68C:
                          case 0x68D:
                          case 0x68E:
                          case 0x68F:
                          case 0x690:
                          case 0x691:
                          case 0x692:
                          case 0x693:
                          case 0x694:
                            if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
                              goto LABEL_224;
                            sub_66A00((__m128i *)(a2 + 80), (__m128i *)(a2 + 120));
                            v58 = *(_DWORD *)(a2 + 28) & 0x10;
                            break;
                          default:
                            v38 = (unsigned int)(v40 - 1625);
                            goto LABEL_220;
                        }
                        goto LABEL_184;
                      }
                      if ( (_WORD)v40 == 995 )
                      {
                        v57 = *(_DWORD *)(a2 + 28);
                        if ( (v57 & 0x4000) != 0 )
                        {
                          v125 = *(_BYTE *)(a2 + 33);
                          if ( (v125 & 8) == 0 && v125 < 0 )
                          {
                            *(_BYTE *)(a2 + 41) = 13;
                            *(_BYTE *)(a2 + 45) = 8;
                            *(_BYTE *)(a2 + 121) = 13;
                            *(_BYTE *)(a2 + 125) = 8;
                          }
                        }
                        goto LABEL_183;
                      }
                      if ( (unsigned __int16)v40 > 0x3E3u )
                      {
                        if ( (unsigned __int16)v40 > 0x48Du )
                        {
                          v121 = v40 - 1397;
                          if ( v121 > 3u )
                            goto LABEL_224;
                          v38 = *(_QWORD *)(a2 + 168);
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( v38 )
                          {
                            if ( v38 > 6 || v38 == 3 )
                              goto LABEL_184;
                            *(_BYTE *)(a2 + 161) = 0;
                            v130 = 1565;
                            if ( v121 != 3 )
                              v130 = word_974B0[v121];
                            v131 = v38 + v130;
                            v132 = v131 - 2;
                            v122 = v131 - 1;
                            if ( v38 >= 4 )
                              v122 = v132;
                          }
                          else
                          {
                            *(_BYTE *)(a2 + 161) = 0;
                            v122 = 1564;
                            if ( v121 != 3 )
                              v122 = word_974B6[v121];
                          }
                          *(_WORD *)(a2 + 24) = v122;
                          goto LABEL_184;
                        }
                        if ( (unsigned __int16)v40 > 0x486u )
                        {
                          v123 = *(_DWORD *)(a2 + 28);
                          v58 = v123 & 0x10;
                          BYTE1(v123) |= 0x10u;
                          *(_DWORD *)(a2 + 28) = v123;
                          goto LABEL_184;
                        }
                        if ( (_WORD)v40 == 1115 )
                        {
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( *(char *)(a2 + 33) >= 0 || !sub_63050(a2) )
                            *(_WORD *)(a2 + 24) = 1116;
                          goto LABEL_184;
                        }
                        if ( (unsigned __int16)(v40 - 1139) > 0x13u )
                          goto LABEL_224;
LABEL_485:
                        if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                        {
                          sub_66A00((__m128i *)(a2 + 120), (__m128i *)(a2 + 160));
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          goto LABEL_184;
                        }
LABEL_224:
                        v57 = *(_DWORD *)(a2 + 28);
                        goto LABEL_183;
                      }
                      if ( (_WORD)v40 != 912 )
                      {
                        if ( (unsigned __int16)v40 <= 0x390u )
                        {
                          if ( (unsigned __int16)(v40 - 792) > 3u )
                            goto LABEL_224;
                          v38 = *(_QWORD *)(a2 + 168);
                          v57 = *(_DWORD *)(a2 + 28);
                          if ( v38 <= 0x1F )
                          {
                            *(_BYTE *)(a2 + 161) = 0;
                            v117 = 1175;
                            if ( (unsigned __int16)(v40 - 793) <= 2u )
                              v117 = 32 * v40 - 24169;
                            *(_WORD *)(a2 + 24) = v38 + v117;
                          }
                          goto LABEL_183;
                        }
                        if ( (unsigned __int16)v40 > 0x3DEu )
                        {
                          if ( (_WORD)v40 != 992 )
                            goto LABEL_224;
                        }
                        else if ( (unsigned __int16)v40 <= 0x3DCu )
                        {
                          if ( (_WORD)v40 != 968 )
                            goto LABEL_224;
                          goto LABEL_181;
                        }
                        v58 = *(_DWORD *)(a2 + 28) & 0x10;
                        if ( (~*(_DWORD *)(a2 + 28) & 0x4010) == 0
                          && *(_BYTE *)(a2 + 41) == 1
                          && *(_WORD *)(a2 + 46) <= 7u )
                        {
                          *(_BYTE *)(a2 + 45) = 7;
                        }
                        goto LABEL_184;
                      }
                      v57 = *(_DWORD *)(a2 + 28);
                      if ( (v57 & 0x10000) != 0 )
                      {
                        if ( *(char *)(a2 + 33) >= 0 )
                        {
                          if ( (*(_BYTE *)(a2 + 273) & 2) != 0 )
                            goto LABEL_183;
LABEL_539:
                          if ( *(_BYTE *)(a2 + 81) != 13 )
                            *(_BYTE *)(a2 + 85) = 7;
                          goto LABEL_183;
                        }
                      }
                      else if ( *(char *)(a2 + 33) >= 0 )
                      {
                        goto LABEL_539;
                      }
                      if ( sub_63050(a2) )
                        goto LABEL_183;
                      goto LABEL_539;
                    }
                    if ( (unsigned __int16)v40 <= 0x6FCu )
                    {
                      if ( (unsigned __int16)v40 <= 0x6D4u )
                        goto LABEL_224;
                      v38 = (unsigned __int16)(v40 - 1749);
                      switch ( *(_WORD *)(a2 + 24) )
                      {
                        case 0x6D5:
                          goto LABEL_385;
                        case 0x6D6:
                          *(_BYTE *)(a2 + 121) = 1;
                          *(_WORD *)(a2 + 126) = 3;
                          if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
                          {
                            *(_BYTE *)(a2 + 125) = 2;
                            *(_WORD *)(a2 + 46) = 0;
                            *(_BYTE *)(a2 + 41) = 1;
                            goto LABEL_383;
                          }
                          *(_BYTE *)(a2 + 125) = 7;
                          *(_WORD *)(a2 + 46) = 0;
                          *(_BYTE *)(a2 + 41) = 1;
                          break;
                        case 0x6E3:
                        case 0x6E5:
                          goto LABEL_376;
                        case 0x6E9:
                        case 0x6EB:
                          v57 = *(_DWORD *)(a2 + 28);
                          if ( (v57 & 8) != 0 )
                            goto LABEL_183;
LABEL_376:
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( !v58 )
                            goto LABEL_185;
                          if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                            *(_WORD *)(a2 + 24) = v40 + 1;
                          goto LABEL_184;
                        case 0x6F0:
                          v100 = *(_DWORD *)(a2 + 28);
                          v58 = v100 & 0x10;
                          if ( (v100 & 0x10) == 0 )
                            goto LABEL_185;
                          *(_WORD *)(a2 + 24) = 129;
                          *(_DWORD *)(a2 + 28) = v100 | 2;
                          *(_WORD *)(a2 + 46) = 3;
                          *(_BYTE *)(a2 + 41) = 1;
                          *(_BYTE *)(a2 + 45) = 2;
                          goto LABEL_184;
                        case 0x6F3:
                        case 0x6F4:
                        case 0x6FA:
                          v58 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( (*(_DWORD *)(a2 + 28) & 0x1000) != 0 )
                          {
                            v99 = 7;
                            if ( !v58 )
                              v99 = 2;
                          }
                          else
                          {
                            v99 = 1 - ((v58 == 0) - 1);
                          }
                          *(_BYTE *)(a2 + 45) = v99;
                          goto LABEL_184;
                        case 0x6FC:
                          v38 = *(_DWORD *)(a2 + 28) & 0x10;
                          if ( (*(_DWORD *)(a2 + 28) & 0x1000) != 0 )
                          {
                            v105 = 7;
                            if ( !(_DWORD)v38 )
                              v105 = 2;
                          }
                          else
                          {
                            v105 = 1 - (((_DWORD)v38 == 0) - 1);
                          }
                          *(_BYTE *)(a2 + 45) = v105;
LABEL_254:
                          *(_BYTE *)(a1 + 5223) = 1;
                          goto LABEL_219;
                        default:
                          v38 = (unsigned int)(v40 - 1749);
                          goto LABEL_220;
                      }
                      goto LABEL_500;
                    }
                    if ( (unsigned __int16)v40 <= 0x796u )
                    {
                      if ( (unsigned __int16)v40 > 0x794u )
                      {
                        v124 = *(_DWORD *)(a2 + 28);
                        v58 = v124 & 0x10;
                        if ( *(_WORD *)(a2 + 46) != 5 )
                        {
                          *(_BYTE *)(a2 + 44) &= ~8u;
                          *(_BYTE *)(a2 + 84) &= ~8u;
                          *(_WORD *)(a2 + 24) = 129;
                          *(_DWORD *)(a2 + 28) = v124 | 0x100000;
                        }
                      }
                      else if ( (_WORD)v40 == 1889 )
                      {
                        v58 = *(_DWORD *)(a2 + 28) & 0x10;
                        if ( *(_BYTE *)(a2 + 41) == 1 )
                        {
LABEL_244:
                          *(_BYTE *)(a2 + 45) = 2;
                        }
                        else if ( *(_BYTE *)(a2 + 81) == 1 )
                        {
                          *(_BYTE *)(a2 + 85) = 2;
                        }
                      }
                      else
                      {
                        if ( (_WORD)v40 != 1925 )
                          goto LABEL_224;
                        v58 = *(_DWORD *)(a2 + 28) & 0x10;
                        if ( (unsigned __int8)(*(_BYTE *)(a2 + 41) - 3) <= 1u )
                        {
                          *(_BYTE *)(a2 + 124) &= ~8u;
                        }
                        else if ( (unsigned __int8)(*(_BYTE *)(a2 + 121) - 3) <= 1u )
                        {
                          *(_BYTE *)(a2 + 84) &= ~8u;
                        }
                      }
                      goto LABEL_184;
                    }
                    if ( (_WORD)v40 != 0xFFFE )
                      goto LABEL_224;
                    v118 = insn_get_next_byte();
                    v38 = 508;
                    v119 = v118;
                    v120 = &unk_1589C0;
                    while ( v120[4] != v119 )
                    {
                      v38 = *((unsigned __int16 *)v120 + 7);
                      v120 += 8;
                      if ( !(_WORD)v38 )
                        goto LABEL_529;
                    }
                    *(_WORD *)(a2 + 24) = v38;
LABEL_529:
                    if ( *((_WORD *)v120 + 3) )
                    {
LABEL_219:
                      LOWORD(v41) = *(_WORD *)(a2 + 24);
                      goto LABEL_220;
                    }
                    return 0;
                  }
LABEL_457:
                  if ( *(_WORD *)(a2 + 86) <= 3u )
                    return 0;
                  goto LABEL_458;
                }
                if ( v112 <= 0x487u )
                  return 0;
              }
              if ( *(_WORD *)(a2 + 46) <= 3u )
                return 0;
              goto LABEL_458;
            }
            if ( v94 >= 0 )
              goto LABEL_155;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 5204) )
              goto LABEL_97;
            if ( *(char *)(a2 + 33) >= 0 )
              goto LABEL_155;
          }
          if ( (v32 & 0x24000) != 0 )
            goto LABEL_452;
          goto LABEL_155;
        }
        v23 = insn_get_next_byte();
        v24 = insn_get_next_byte();
        v13 = v23 & 0x1F;
        if ( v23 >= 0 )
          *(_BYTE *)(a2 + 33) |= 4u;
        if ( (v23 & 0x40) == 0 )
          *(_BYTE *)(a2 + 33) |= 2u;
        if ( (v23 & 0x20) == 0 && (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
          *(_BYTE *)(a2 + 33) |= 1u;
        if ( v24 < 0 )
          *(_BYTE *)(a2 + 33) |= 8u;
        if ( (v24 & 4) != 0 )
          *(_BYTE *)(a2 + 33) |= 0x80u;
        *(_BYTE *)(a1 + 5194) = v24;
        v25 = *(_DWORD *)(a2 + 28);
        if ( (v25 & 0x10) == 0 && (*(_BYTE *)(a2 + 33) & 6) != 0 )
          return 0;
        v12 = v25 | 0x20000;
LABEL_59:
        *(_DWORD *)(a2 + 28) = v12;
        v14 = *(_BYTE *)(a1 + 5194) & 3;
        if ( v14 == 2 )
        {
          *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 2;
          goto LABEL_14;
        }
        goto LABEL_11;
      }
      v15 = *(_DWORD *)(a2 + 28);
    }
    if ( (v15 & 1) != 0
      || (v15 & 0x800) == 0
      || (unsigned __int8)((*(_BYTE *)(a1 + 5194) & 0x83) + 127) <= 2u
      || (v15 & 6) != 0
      || *(_BYTE *)(a2 + 33) )
    {
      return 0;
    }
    if ( *(_BYTE *)(a1 + 5192) == 0xC4 )
    {
      v70 = insn_get_next_byte();
      v44 = insn_get_next_byte();
      if ( v70 >= 0 )
        *(_BYTE *)(a2 + 33) |= 4u;
      if ( (v70 & 0x40) == 0 )
        *(_BYTE *)(a2 + 33) |= 2u;
      if ( (v70 & 0x20) == 0 )
        *(_BYTE *)(a2 + 33) |= 1u;
      if ( v44 < 0 )
        *(_BYTE *)(a2 + 33) |= 8u;
      v13 = v70 & 0x1F;
    }
    else
    {
      v44 = insn_get_next_byte();
      if ( v44 >= 0 )
        *(_BYTE *)(a2 + 33) |= 4u;
      v13 = 1;
    }
    if ( (v44 & 4) != 0 )
      *(_BYTE *)(a2 + 33) |= 0x80u;
    *(_BYTE *)(a1 + 5194) = v44 | 0x80;
    v12 = *(_DWORD *)(a2 + 28);
    if ( (v12 & 0x10) == 0 && (*(_BYTE *)(a2 + 33) & 6) != 0 )
      return 0;
    BYTE1(v12) |= 0x40u;
    goto LABEL_59;
  }
  if ( (get_flags_ex() & 0x1000) == 0 || get_first_fcref_to() == -1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 5192);
    v11 = *(_BYTE *)(a1 + 5192);
    if ( (_BYTE)v9 != 98 )
      goto LABEL_7;
    goto LABEL_25;
  }
  *(_DWORD *)(a2 + 28) &= ~1u;
  *(_DWORD *)(a2 + 24) = 65642;
  return 1;
}
