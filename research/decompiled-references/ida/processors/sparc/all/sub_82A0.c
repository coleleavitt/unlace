__int64 __fastcall sub_82A0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 v6; // r13
  unsigned int next_dword; // ebp
  unsigned int v8; // eax
  char v9; // al
  int v10; // ecx
  char v11; // r13
  char v12; // r8
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  int v16; // esi
  char *v17; // rcx
  unsigned __int16 v18; // di
  __int64 v19; // rdx
  unsigned __int16 v20; // dx
  int v21; // esi
  unsigned __int16 v22; // di
  const char *v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // esi
  char v26; // r14
  unsigned __int8 v27; // al
  char v28; // dl
  unsigned int v29; // esi
  int v30; // eax
  int v31; // edx
  unsigned __int8 v32; // al
  char v33; // dl
  unsigned int v34; // esi
  char v35; // r9
  __int64 v36; // rdx
  int v37; // esi
  int v38; // edx
  char *v39; // rax
  __int16 v40; // cx
  unsigned __int16 v41; // di
  __int16 v42; // ax
  int v43; // eax
  __m128i v44; // xmm0
  int v45; // eax
  __int64 v46; // rdx
  __int16 v47; // dx
  __int16 v48; // ax
  bool v49; // zf
  int v50; // eax
  __m128i v51; // xmm0
  char v52; // r9
  __int64 v53; // rdx
  char v54; // r14
  __int16 v55; // ax
  __int16 v56; // ax
  int v57; // eax
  int v58; // edx
  int v59; // edx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  unsigned __int64 v64; // rax
  int v65; // ecx
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // edx
  __int16 v70; // ax
  int v71; // eax
  unsigned __int64 v72; // rax
  int v73; // edx
  int v74; // eax
  __int16 v75; // dx
  int v76; // ecx
  int v77; // eax
  int v78; // edx
  unsigned __int64 v79; // rax
  int v80; // eax
  unsigned __int16 v81; // ax
  __int16 v82; // ax
  __m128i v83; // xmm0
  int v84; // eax
  __m128i v85; // xmm0
  __m128i v86; // xmm2
  int v87; // edx
  __m128i v88; // xmm1
  __m128i v89; // xmm0
  int v90; // eax
  __m128i v91; // xmm2
  int v92; // eax
  unsigned __int64 v93; // rax
  __m128i v94; // xmm0
  int v95; // eax
  __m128i v96; // xmm0
  __int16 v97; // ax
  __int16 v98; // ax
  __int16 v99; // ax
  unsigned __int16 v100; // ax
  _DWORD *v101; // rdi
  _DWORD *v102; // rsi
  __int64 j; // rcx
  int v104; // eax
  __int16 v105; // ax
  int v106; // eax
  unsigned __int64 v107; // rax
  int v108; // eax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  __int64 v112; // rax
  char v113; // cl
  unsigned __int16 v114; // dx
  __int64 v115; // rdx
  char v116; // dl
  char v117; // r14
  char v118; // r13
  unsigned __int8 v119; // al
  __int16 v120; // ax
  char v121; // r13
  unsigned int v122; // esi
  unsigned __int8 v123; // al
  char v124; // r13
  unsigned __int8 v125; // al
  int v126; // eax
  char v127; // dl
  unsigned __int8 v128; // al
  char v129; // dl
  unsigned __int8 v130; // al
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  unsigned __int64 v133; // rbp
  unsigned __int8 v134; // bp
  __int16 v135; // ax
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rdx
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rax
  _DWORD *v141; // rdi
  _DWORD *v142; // rsi
  __int64 i; // rcx

  if ( (*(_BYTE *)(a2 + 8) & 3) != 0 )
    return 0;
  v6 = getinf_flag(3, 32);
  setinf_flag(3, 32, 1);
  next_dword = insn_get_next_dword(a2);
  setinf_flag(3, 32, v6);
  v8 = next_dword & 0xC0000000;
  if ( (next_dword & 0xC0000000) == 0x80000000 )
  {
    v13 = word_134E0[(next_dword >> 19) & 0x3F];
    if ( (_WORD)v13 == 0xFFFF )
    {
      v15 = 1;
      v16 = 0;
      v13 = 8218;
      v17 = (char *)&unk_138A0;
      v18 = (next_dword >> 5) & 0x1FF;
      while ( 1 )
      {
        if ( v18 < v15 )
          goto LABEL_28;
        if ( v15 == v18 )
          break;
        v17 = (char *)&unk_138A0 + 6 * ++v16;
        v13 = *((unsigned __int16 *)v17 + 1);
        if ( !(_WORD)v13 )
          goto LABEL_28;
        v15 = *(_WORD *)v17;
      }
LABEL_312:
      v114 = v13;
      LOWORD(v13) = v13 & 0x7FF;
      *(_DWORD *)(a2 + 28) |= v114 >> 11;
      v12 = v17[4];
      v11 = v17[5];
      goto LABEL_12;
    }
    v11 = 2;
    v12 = 2;
    if ( (_WORD)v13 != 0xFFFE )
      goto LABEL_12;
    v20 = 1;
    v21 = 0;
    v13 = 8219;
    v17 = (char *)&unk_13780;
    v22 = (next_dword >> 5) & 0x1FF;
    while ( v22 >= v20 )
    {
      if ( v20 == v22 )
        goto LABEL_312;
      v17 = (char *)&unk_13780 + 6 * ++v21;
      v13 = *((unsigned __int16 *)v17 + 1);
      if ( !(_WORD)v13 )
        break;
      v20 = *(_WORD *)v17;
    }
LABEL_28:
    *(_WORD *)(a2 + 24) = 0;
    return 0;
  }
  if ( v8 > 0x80000000 )
  {
    if ( v8 == -1073741824 )
    {
      v19 = (next_dword >> 19) & 0x3F;
      v12 = byte_13420[v19];
      v13 = (unsigned __int16)aMik8[v19];
      v11 = v12;
      goto LABEL_12;
    }
    goto LABEL_28;
  }
  if ( v8 )
  {
    *(_WORD *)(a2 + 24) = 12;
LABEL_7:
    *(_BYTE *)(a2 + 41) = 7;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 8) + (int)(4 * next_dword);
    goto LABEL_8;
  }
  v11 = 2;
  v12 = 2;
  v13 = (unsigned __int16)a4J[(next_dword >> 22) & 7];
LABEL_12:
  *(_WORD *)(a2 + 24) = v13;
  if ( (unsigned __int16)v13 <= 0x6Fu )
  {
    if ( (unsigned __int16)v13 <= 0x52u )
    {
      switch ( (__int16)v13 )
      {
        case 0:
          return 0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          goto LABEL_48;
        case 9:
          v68 = *(_DWORD *)(a2 + 28);
          v69 = v68;
          if ( (next_dword & 0x20000000) != 0 )
          {
            BYTE1(v69) = BYTE1(v68) | 1;
            v68 = v69;
          }
          v63 = v68 | 0x20;
          goto LABEL_138;
        case 10:
          sub_7CB0(a2, 0, next_dword);
          goto LABEL_8;
        case 11:
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x10000000) != 0 )
            return 0;
          v57 = *(_DWORD *)(a2 + 28);
          v58 = v57;
          if ( (next_dword & 0x20000000) != 0 )
          {
            BYTE1(v58) = BYTE1(v57) | 1;
            v57 = v58;
          }
          v59 = v57;
          if ( (next_dword & 0x80000) == 0 )
          {
            BYTE1(v59) = BYTE1(v57) | 2;
            v57 = v59;
          }
          if ( ((next_dword >> 25) & 3) == 0 )
            *(_WORD *)(a2 + 24) = 0;
          LOBYTE(v57) = v57 | 0x80;
          v60 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 32) = (next_dword >> 25) & 7;
          *(_DWORD *)(a2 + 28) = v57;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
          *(_BYTE *)(a2 + 81) = 7;
          *(_QWORD *)(a2 + 96) = v60 + 4LL * (__int16)(next_dword & 0x3FFF | (next_dword >> 6) & 0xC000);
          goto LABEL_8;
        case 12:
          goto LABEL_7;
        case 13:
        case 14:
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 45) = v12;
          *(_BYTE *)(a2 + 72) = 0;
          *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
          v30 = *(_DWORD *)(a2 + 28);
          v31 = v30;
          BYTE1(v31) = BYTE1(v30) | 4;
          *(_DWORD *)(a2 + 28) = v31;
          if ( (next_dword & 0x2000) != 0 )
          {
            BYTE1(v30) |= 0xCu;
            *(_DWORD *)(a2 + 28) = v30;
          }
          else
          {
            *(_QWORD *)(a2 + 48) = (unsigned __int8)(next_dword >> 5);
          }
          goto LABEL_69;
        case 15:
          goto LABEL_46;
        case 16:
        case 26:
          goto LABEL_63;
        case 17:
        case 22:
        case 23:
          goto LABEL_61;
        case 18:
          sub_7CB0(a2, 1, next_dword);
          goto LABEL_8;
        case 19:
          v61 = *(_DWORD *)(a2 + 28);
          v62 = v61;
          if ( (next_dword & 0x20000000) != 0 )
          {
            BYTE1(v62) = BYTE1(v61) | 1;
            v61 = v62;
          }
          v63 = v61 | 0x40;
LABEL_138:
          *(_DWORD *)(a2 + 28) = v63;
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 32) = (next_dword >> 25) & 0xF;
          v64 = next_dword & 0x3FFFFF;
          if ( (next_dword & 0x100000) != 0 )
            v64 = next_dword | 0xFFFFFFFFFFC00000LL;
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 8) + 4 * v64;
          goto LABEL_8;
        case 20:
        case 21:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = ((next_dword >> 25) & 3) + 128;
          if ( (*(_BYTE *)(a1 + 160) & 8) == 0 )
            goto LABEL_73;
          if ( ((next_dword >> 25) & 3) != 0 )
            return 0;
          *(_BYTE *)(a2 + 44) &= ~8u;
LABEL_73:
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          v32 = sub_7E60(a2, (next_dword >> 14) & 0x1F, v12, a3);
          *(_BYTE *)(a2 + 121) = 1;
          v33 = v11;
          LOBYTE(v34) = next_dword;
          *(_BYTE *)(a2 + 125) = 2;
          *(_WORD *)(a2 + 86) = v32;
LABEL_74:
          *(_WORD *)(a2 + 126) = (unsigned __int8)sub_7E60(a2, v34 & 0x1F, v33, a3);
          goto LABEL_8;
        case 24:
          goto LABEL_117;
        case 25:
          v56 = *(_WORD *)(a1 + 160);
          if ( (v56 & 8) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 95;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = 194;
            break;
          }
          if ( (v56 & 1) != 0 && (next_dword & 0x3E07FFFF) != 0 )
            return 0;
          goto LABEL_8;
        case 27:
          v65 = *(_DWORD *)(a2 + 28);
          v66 = (next_dword >> 11) & 3;
          v67 = (next_dword >> 14) & 0xF;
          if ( (next_dword & 0x2000) != 0 )
          {
            *(_BYTE *)(a2 + 32) = v67;
            *(_DWORD *)(a2 + 28) = v65 | 0x20;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            if ( v66 )
            {
              if ( v66 == 2 )
                *(_WORD *)(a2 + 46) = 133;
              else
                *(_WORD *)(a2 + 24) = 0;
            }
            else
            {
              *(_WORD *)(a2 + 46) = 132;
            }
          }
          else
          {
            *(_BYTE *)(a2 + 32) = v67;
            *(_DWORD *)(a2 + 28) = v65 | 0x40;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = v66 + 128;
          }
          goto LABEL_144;
        default:
          if ( (unsigned __int16)v13 <= 0x39u )
          {
            if ( (unsigned __int16)v13 > 0x33u )
            {
              switch ( (__int16)v13 )
              {
                case '5':
                  v37 = 2237;
                  v38 = 0;
                  v39 = (char *)&unk_13580;
                  v40 = 0;
                  v41 = (next_dword >> 5) & 0x1FF;
                  break;
                case '6':
                  goto LABEL_8;
                case '7':
                  v36 = a2 + 40;
                  v35 = 0;
                  v12 = 2;
                  goto LABEL_78;
                case '8':
                  goto LABEL_76;
                case '9':
                  goto LABEL_86;
                default:
                  if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && next_dword )
                    return 0;
                  goto LABEL_8;
              }
              while ( v40 != v41 )
              {
                v39 = (char *)&unk_13580 + 6 * ++v38;
                v37 = *((unsigned __int16 *)v39 + 1);
                if ( (_WORD)v37 )
                {
                  v40 = *(_WORD *)v39;
                  if ( v41 >= *(_WORD *)v39 )
                    continue;
                }
                goto LABEL_8;
              }
              *(_DWORD *)(a2 + 28) |= (unsigned __int16)v37 >> 11;
              v116 = v39[4];
              v117 = v39[5];
              LOWORD(v37) = v37 & 0x7FF;
              if ( (_WORD)v37 )
              {
                *(_WORD *)(a2 + 24) = v37;
                switch ( v37 )
                {
                  case 187:
                  case 188:
                  case 189:
                  case 227:
                  case 229:
                    *(_BYTE *)(a2 + 41) = 1;
                    *(_BYTE *)(a2 + 45) = 2;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
                    v120 = next_dword & 0x1F;
                    goto LABEL_330;
                  case 190:
                  case 191:
                  case 192:
                  case 193:
                  case 199:
                  case 200:
                  case 201:
                  case 202:
                  case 203:
                  case 204:
                  case 205:
                  case 206:
                  case 207:
                  case 211:
                  case 212:
                  case 213:
                  case 215:
                  case 216:
                  case 217:
                  case 218:
                  case 221:
                  case 222:
                  case 224:
                  case 228:
                    *(_BYTE *)(a2 + 41) = 1;
                    v118 = v116;
                    *(_BYTE *)(a2 + 45) = 2;
                    *(_WORD *)(a2 + 46) = (unsigned __int8)sub_7E60(a2, (next_dword >> 14) & 0x1F, v116, a3);
                    if ( (*(_QWORD *)(a2 + 24) & 0x30000FFFFLL) == 0x2000000D7LL )
                      *(_BYTE *)(a2 + 41) = 0;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                    v119 = sub_7E60(a2, next_dword & 0x1F, v118, a3);
                    *(_BYTE *)(a2 + 121) = 1;
                    v33 = v117;
                    *(_BYTE *)(a2 + 125) = 2;
                    v34 = next_dword >> 25;
                    *(_WORD *)(a2 + 86) = v119;
                    goto LABEL_74;
                  case 194:
                  case 195:
                  case 196:
                  case 197:
                    *(_BYTE *)(a2 + 41) = 1;
                    v124 = v116;
                    *(_BYTE *)(a2 + 45) = 2;
                    v125 = sub_7E60(a2, (next_dword >> 14) & 0x1F, v116, a3);
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_WORD *)(a2 + 46) = v125;
                    v120 = (unsigned __int8)sub_7E60(a2, next_dword & 0x1F, v124, a3);
LABEL_330:
                    *(_WORD *)(a2 + 86) = v120;
                    *(_BYTE *)(a2 + 121) = 1;
                    *(_BYTE *)(a2 + 125) = 2;
                    *(_WORD *)(a2 + 126) = (next_dword >> 25) & 0x1F;
                    goto LABEL_8;
                  case 198:
                  case 209:
                  case 214:
                  case 220:
                    *(_BYTE *)(a2 + 41) = 1;
                    v121 = v116;
                    LOBYTE(v122) = next_dword;
                    *(_BYTE *)(a2 + 45) = 2;
                    goto LABEL_332;
                  case 208:
                  case 219:
                    *(_BYTE *)(a2 + 41) = 1;
                    v121 = v116;
                    *(_BYTE *)(a2 + 45) = 2;
                    v122 = next_dword >> 14;
LABEL_332:
                    v123 = sub_7E60(a2, v122 & 0x1F, v121, a3);
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_WORD *)(a2 + 46) = v123;
                    *(_WORD *)(a2 + 86) = (unsigned __int8)sub_7E60(a2, (next_dword >> 25) & 0x1F, v121, a3);
                    break;
                  case 210:
                  case 223:
                    *(_BYTE *)(a2 + 41) = 1;
                    *(_BYTE *)(a2 + 45) = 2;
                    *(_WORD *)(a2 + 46) = (unsigned __int8)sub_7E60(a2, (next_dword >> 25) & 0x1F, v116, a3);
                    break;
                  case 225:
                    goto LABEL_8;
                  case 232:
                    *(_BYTE *)(a2 + 41) = 5;
                    *(_BYTE *)(a2 + 45) = 2;
                    *(_QWORD *)(a2 + 48) = next_dword & 7;
                    break;
                  default:
                    v23 = nullptr;
                    if ( (unsigned __int16)v37 <= 0xE8u )
                      v23 = (const char *)*(&off_16BA0 + 2 * (v37 & 0x7FF));
                    goto LABEL_47;
                }
              }
              goto LABEL_8;
            }
            v25 = (unsigned __int16)v13;
            if ( ((1LL << v13) & 0xFFFFD40000000LL) == 0 )
            {
              if ( ((1LL << v13) & 0x2A0000000LL) != 0 )
              {
LABEL_61:
                *(_BYTE *)(a2 + 41) = 1;
                v26 = v12;
                *(_BYTE *)(a2 + 45) = 2;
                v27 = sub_7E60(a2, (next_dword >> 14) & 0x1F, v12, a3);
                *(_BYTE *)(a2 + 81) = 1;
                v28 = v26;
                *(_BYTE *)(a2 + 85) = 2;
                v29 = next_dword & 0x1F;
                *(_WORD *)(a2 + 46) = v27;
                goto LABEL_62;
              }
              if ( (_WORD)v13 == 28 )
              {
                if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x2000) != 0 )
                  return 0;
                if ( ((next_dword >> 10) & 3) == 0 )
                  *(_WORD *)(a2 + 24) = 0;
                *(_DWORD *)(a2 + 28) |= 0x80u;
                *(_BYTE *)(a2 + 32) = (next_dword >> 10) & 7;
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 2;
                *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
LABEL_144:
                *(_BYTE *)(a2 + 81) = 1;
                v28 = v12;
                *(_BYTE *)(a2 + 85) = 2;
                v29 = next_dword & 0x1F;
LABEL_62:
                *(_WORD *)(a2 + 86) = (unsigned __int8)sub_7E60(a2, v29, v28, a3);
                sub_7EF0(a2, a2 + 120, next_dword, v11, a3);
                goto LABEL_8;
              }
LABEL_320:
              v23 = (const char *)*(&off_16BA0 + 2 * v25);
LABEL_47:
              sub_7D90((__int64)"%a(%s): internal error in %s", a3, *(const char **)(a2 + 16), v23);
              goto LABEL_8;
            }
LABEL_63:
            if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x7C000) != 0 )
              return 0;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = (unsigned __int8)sub_7E60(a2, next_dword & 0x1F, v12, a3);
LABEL_66:
            sub_7EF0(a2, a2 + 80, next_dword, v11, a3);
            goto LABEL_8;
          }
          if ( (unsigned __int16)v13 <= 0x3Fu )
          {
            v25 = (unsigned __int16)v13;
            if ( ((1LL << v13) & 0x9400000000000000LL) != 0 )
            {
              v35 = 0;
            }
            else
            {
              if ( ((1LL << v13) & 0x2800000000000000LL) == 0 )
              {
                if ( (_WORD)v13 != 62 )
                  goto LABEL_320;
                if ( (next_dword & 0x3C000000) != 0 )
                  return 0;
                if ( (next_dword & 0x2000000) != 0 )
                {
                  v12 = 7;
                  *(_WORD *)(a2 + 24) = 81;
                }
                sub_81B0(a1, a2, a2 + 40, next_dword, v12, 0);
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = 196;
                goto LABEL_8;
              }
              v35 = 1;
            }
LABEL_309:
            sub_81B0(a1, a2, a2 + 40, next_dword, v12, v35);
            goto LABEL_66;
          }
          v113 = v13 - 64;
          if ( (unsigned __int16)(v13 - 64) > 0x10u )
            goto LABEL_319;
          if ( ((1LL << v113) & 0xAAAA) != 0 )
          {
LABEL_76:
            v35 = 0;
          }
          else
          {
            v35 = 1;
            if ( ((1LL << v113) & 0x15554) == 0 )
              goto LABEL_309;
          }
LABEL_77:
          v36 = a2 + 40;
LABEL_78:
          sub_81B0(a1, a2, v36, next_dword, v12, v35);
          break;
      }
LABEL_79:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = (next_dword >> 25) & 0x1F;
      goto LABEL_8;
    }
    switch ( v13 )
    {
      case 'S':
        v76 = *(_DWORD *)(a2 + 28);
        v77 = (next_dword >> 11) & 3;
        v78 = (next_dword >> 14) & 0xF;
        if ( (next_dword & 0x40000) != 0 )
        {
          *(_BYTE *)(a2 + 32) = v78;
          *(_DWORD *)(a2 + 28) = v76 | 0x20;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          if ( v77 )
          {
            if ( v77 == 2 )
              *(_WORD *)(a2 + 46) = 133;
            else
              *(_WORD *)(a2 + 24) = 0;
          }
          else
          {
            *(_WORD *)(a2 + 46) = 132;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 32) = v78;
          *(_DWORD *)(a2 + 28) = v76 | 0x40;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = v77 + 128;
        }
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v79 = next_dword | 0xFFFFFFFFFFFFFC00LL;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x200) == 0 )
            v79 = next_dword & 0x3FF;
          *(_QWORD *)(a2 + 88) = v79;
          goto LABEL_52;
        }
        if ( (*(_BYTE *)(a1 + 160) & 1) == 0 || (next_dword & 0x3E0) == 0 )
          goto LABEL_69;
        goto LABEL_345;
      case 'T':
        if ( ((next_dword >> 10) & 3) == 0 )
          *(_WORD *)(a2 + 24) = 0;
        *(_DWORD *)(a2 + 28) |= 0x80u;
        *(_BYTE *)(a2 + 32) = (next_dword >> 10) & 7;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v72 = next_dword | 0xFFFFFFFFFFFFFE00LL;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x100) == 0 )
            v72 = next_dword & 0x1FF;
          *(_QWORD *)(a2 + 88) = v72;
          goto LABEL_52;
        }
        if ( (*(_BYTE *)(a1 + 160) & 1) == 0 || (next_dword & 0x1E0) == 0 )
          goto LABEL_69;
        goto LABEL_345;
      case 'U':
      case 'V':
      case 'X':
      case 'Y':
      case 'Z':
      case '[':
      case 'a':
      case 'e':
      case 'g':
      case 'h':
      case 'i':
      case 'n':
      case 'o':
        goto LABEL_48;
      case '\\':
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          if ( (next_dword & 0x7C000) != 0 )
            return 0;
          if ( (next_dword & 0x2000) == 0 )
          {
            if ( (next_dword & 0x1FE0) != 0 )
              *(_WORD *)(a2 + 24) = 0;
            goto LABEL_165;
          }
        }
        else if ( (next_dword & 0x2000) == 0 )
        {
LABEL_165:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = next_dword & 0x1F;
          goto LABEL_79;
        }
        *(_BYTE *)(a2 + 41) = 5;
        v139 = next_dword | 0xFFFFFFFFFFFFE000LL;
        *(_BYTE *)(a2 + 45) = 2;
        if ( (next_dword & 0x1000) == 0 )
          v139 = next_dword & 0x1FFF;
        *(_QWORD *)(a2 + 48) = v139;
        goto LABEL_79;
      case ']':
      case '^':
        sub_81B0(a1, a2, a2 + 40, next_dword, v12, (_WORD)v13 == 94);
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 88) = (next_dword >> 25) & 0x1F;
        goto LABEL_8;
      case '_':
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        v71 = ((next_dword >> 14) & 0x1F) - 122;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(((next_dword >> 14) & 0x1F) - 122);
        if ( ((next_dword >> 14) & 0x1F) == 1 )
          return 0;
        if ( (*(_BYTE *)(a1 + 160) & 1) == 0 )
          goto LABEL_172;
        if ( (unsigned __int8)v71 <= 0x8Cu )
          goto LABEL_79;
        if ( (unsigned __int8)v71 <= 0x94u )
          return 0;
LABEL_172:
        if ( ((next_dword >> 14) & 0x1F) != 0xF )
          goto LABEL_79;
        if ( (next_dword & 0x3E000000) != 0 )
          return 0;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_WORD *)(a2 + 24) = 82;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = next_dword & 0x7F;
          goto LABEL_8;
        }
        *(_WORD *)(a2 + 24) = 118;
        *(_BYTE *)(a2 + 41) = 0;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FFF) != 0 )
          return 0;
        goto LABEL_8;
      case '`':
        if ( (*(_BYTE *)(a1 + 160) & 8) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 95;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = 193;
          goto LABEL_79;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        v126 = (next_dword >> 14) & 0x1F;
        v127 = v126;
        if ( (unsigned __int16)(((next_dword >> 14) & 0x1F) - 16) <= 0xEu )
          goto LABEL_409;
        v128 = v126 - 90;
        if ( v127 == 31 )
          v128 = -73;
        *(_WORD *)(a2 + 46) = v128;
        goto LABEL_79;
      case 'c':
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x3C07FFFF) != 0 )
          return 0;
        if ( (next_dword & 0x2000000) == 0 )
          *(_WORD *)(a2 + 24) = 15;
        goto LABEL_8;
      case 'd':
        v55 = *(_WORD *)(a1 + 160);
        if ( (v55 & 8) != 0 )
        {
          *(_WORD *)(a2 + 24) = 226;
LABEL_117:
          v55 = *(_WORD *)(a1 + 160);
        }
        if ( (v55 & 1) != 0 && (next_dword & 0x3E000000) != 0 )
          return 0;
        sub_81B0(a1, a2, a2 + 40, next_dword, 2, 0);
        if ( *(_WORD *)(a2 + 24) != 24 && *(_BYTE *)(a2 + 41) == 2 )
          *(_BYTE *)(a2 + 41) = 7;
        goto LABEL_8;
      case 'f':
        v70 = *(_WORD *)(a1 + 160);
        if ( (v70 & 8) == 0 )
          goto LABEL_151;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 151;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v140 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x1000) == 0 )
            v140 = next_dword & 0x1FFF;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 2;
          *(_QWORD *)(a2 + 88) = v140;
          *(_WORD *)(a2 + 126) = 192;
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
            return 0;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
            *(_WORD *)(a2 + 24) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = next_dword & 0x1F;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 2;
          *(_WORD *)(a2 + 126) = 192;
          v70 = *(_WORD *)(a1 + 160);
LABEL_151:
          if ( (v70 & 1) != 0 && (next_dword & 0x7FFFF) != 0 )
            return 0;
        }
        if ( (next_dword & 0x3C000000) != 0 )
          return 0;
        if ( (next_dword & 0x2000000) != 0 )
          *(_WORD *)(a2 + 24) = 98;
        goto LABEL_8;
      case 'j':
        if ( next_dword != 0x1000000 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = (int)(next_dword << 10);
          goto LABEL_79;
        }
        *(_WORD *)(a2 + 24) = 87;
        goto LABEL_8;
      case 'l':
        goto LABEL_182;
      default:
        goto LABEL_46;
    }
  }
  if ( (unsigned __int16)v13 <= 0x78u )
  {
    v115 = 1LL << ((unsigned __int8)v13 - 112);
    if ( (v115 & 0x90) != 0 )
    {
LABEL_109:
      v52 = 0;
      goto LABEL_110;
    }
    if ( (v115 & 5) == 0 )
    {
      v52 = 1;
      if ( (v115 & 0x120) == 0 )
      {
LABEL_319:
        v25 = (unsigned __int16)v13;
        goto LABEL_320;
      }
LABEL_110:
      *(_BYTE *)(a2 + 41) = 1;
      v53 = a2 + 80;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (next_dword >> 25) & 0x1F;
LABEL_111:
      sub_81B0(a1, a2, v53, next_dword, v11, v52);
      goto LABEL_8;
    }
LABEL_182:
    v73 = (next_dword >> 14) & 0x1F;
    if ( (next_dword & 0x1000) != 0 )
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = v13 + 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v73;
      if ( (next_dword & 0x2000) != 0 )
      {
        v74 = 63;
        v75 = 63;
LABEL_185:
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = next_dword & v74;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && ((unsigned __int16)next_dword & (unsigned __int16)~v75 & 0xFFF) != 0 )
          return 0;
        goto LABEL_52;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v73;
      if ( (next_dword & 0x2000) != 0 )
      {
        v74 = 31;
        v75 = 31;
        goto LABEL_185;
      }
    }
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 86) = next_dword & 0x1F;
    if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0xFE0) != 0 )
      return 0;
LABEL_52:
    *(_BYTE *)(a2 + 121) = 1;
    *(_BYTE *)(a2 + 125) = 2;
    *(_WORD *)(a2 + 126) = (next_dword >> 25) & 0x1F;
    goto LABEL_8;
  }
  switch ( v13 )
  {
    case 121:
    case 123:
      v54 = 0;
      goto LABEL_114;
    case 122:
    case 124:
    case 129:
      v54 = 1;
      goto LABEL_114;
    case 125:
      if ( (next_dword & 0x3C000000) != 0 )
        return 0;
      if ( (next_dword & 0x2000000) != 0 )
        *(_WORD *)(a2 + 24) = 134;
      *(_BYTE *)(a2 + 41) = 1;
      v53 = a2 + 80;
      v52 = 0;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = 196;
      goto LABEL_111;
    case 126:
    case 130:
    case 132:
      goto LABEL_109;
    case 127:
    case 131:
    case 133:
      v52 = 1;
      goto LABEL_110;
    case 128:
      v54 = 0;
      if ( (*(_BYTE *)(a1 + 160) & 8) == 0 )
      {
LABEL_114:
        sub_7EF0(a2, a2 + 40, next_dword, v12, a3);
        v53 = a2 + 80;
        v52 = v54;
        goto LABEL_111;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 181;
      *(_WORD *)(a2 + 24) = 119;
      *(_BYTE *)(a2 + 45) = 2;
      sub_81B0(a1, a2, a2 + 80, next_dword, 4, 0);
      goto LABEL_8;
    case 135:
    case 136:
    case 137:
    case 138:
    case 141:
    case 142:
    case 143:
    case 144:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 153:
    case 154:
    case 155:
    case 156:
LABEL_48:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
      if ( (next_dword & 0x2000) != 0 )
      {
        *(_BYTE *)(a2 + 81) = 5;
        v24 = next_dword | 0xFFFFFFFFFFFFE000LL;
        *(_BYTE *)(a2 + 85) = 2;
        if ( (next_dword & 0x1000) == 0 )
          v24 = next_dword & 0x1FFF;
        *(_QWORD *)(a2 + 88) = v24;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
LABEL_345:
          *(_WORD *)(a2 + 24) = 0;
LABEL_69:
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = next_dword & 0x1F;
      }
      goto LABEL_52;
    case 139:
      goto LABEL_76;
    case 140:
LABEL_86:
      v35 = 1;
      goto LABEL_77;
    case 145:
      *(_DWORD *)(a2 + 28) |= 0x20u;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 32) = (next_dword >> 25) & 0xF;
      if ( ((next_dword >> 11) & 3) == 0 )
      {
        *(_WORD *)(a2 + 46) = 132;
LABEL_408:
        *(_BYTE *)(a2 + 44) &= ~8u;
        goto LABEL_284;
      }
      if ( ((next_dword >> 11) & 3) != 2 )
      {
        v49 = *(_WORD *)(a2 + 46) == 132;
        *(_WORD *)(a2 + 24) = 0;
        if ( !v49 )
          goto LABEL_284;
        goto LABEL_408;
      }
      *(_WORD *)(a2 + 46) = 133;
LABEL_284:
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = (next_dword >> 14) & 0x1F;
      if ( (next_dword & 0x2000) != 0 )
      {
        *(_BYTE *)(a2 + 81) = 4;
        *(_QWORD *)(a2 + 96) = next_dword & 0x7F;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x780) != 0 )
          return 0;
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 112) = next_dword & 0x1F;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x7E0) != 0 )
          return 0;
      }
LABEL_8:
      v9 = getinf_flag(11, 4);
      v10 = *(unsigned __int16 *)(a2 + 24);
      if ( v9 || (*(_BYTE *)(a1 + 160) & 2) != 0 )
      {
        switch ( (__int16)v10 )
        {
          case 1:
          case 2:
            if ( *(_WORD *)(a2 + 46) != *(_WORD *)(a2 + 126) || *(_BYTE *)(a2 + 81) != 5 )
              break;
            if ( (_WORD)v10 == 1 )
              v48 = 173;
            else
              v48 = 174;
            goto LABEL_107;
          case 6:
            if ( *(_WORD *)(a2 + 126) )
              break;
            v86 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v87 = *(_DWORD *)(a2 + 112);
            *(_BYTE *)(a2 + 121) = 0;
            v88 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            v89 = _mm_loadu_si128((const __m128i *)(a2 + 56));
            *(_WORD *)(a2 + 24) = 177;
            *(__m128i *)(a2 + 40) = v86;
            v90 = *(_DWORD *)(a2 + 72);
            v91 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v87;
            *(_DWORD *)(a2 + 112) = v90;
            *(__m128i *)(a2 + 56) = v91;
            *(__m128i *)(a2 + 80) = v88;
            *(__m128i *)(a2 + 96) = v89;
            return *(unsigned __int16 *)(a2 + 26);
          case 7:
            if ( *(_WORD *)(a2 + 46) != *(_WORD *)(a2 + 126) )
              break;
            *(_WORD *)(a2 + 24) = 179;
            goto LABEL_108;
          case 10:
            if ( *(_BYTE *)(a2 + 32) )
              break;
            v104 = *(_DWORD *)(a2 + 28);
            if ( (v104 & 0x300) != 0 || *(_WORD *)(a2 + 46) != 133 )
              break;
            *(_WORD *)(a2 + 24) = 159;
            *(_DWORD *)(a2 + 28) = v104 & 0xFFFFFFDF;
            goto LABEL_205;
          case 13:
          case 14:
            v45 = *(_DWORD *)(a2 + 28);
            if ( (v45 & 0x800) != 0 )
              break;
            v46 = *(_QWORD *)(a2 + 48);
            if ( v46 == 128 )
            {
              BYTE1(v45) &= ~4u;
              *(_DWORD *)(a2 + 28) = v45;
              *(_WORD *)(a2 + 24) = 2 * ((_WORD)v10 != 13) + 169;
            }
            else
            {
              if ( v46 != 136 )
                break;
              v47 = 172;
              if ( (_WORD)v10 == 13 )
                v47 = 170;
              BYTE1(v45) &= ~4u;
              *(_WORD *)(a2 + 24) = v47;
              *(_DWORD *)(a2 + 28) = v45;
            }
            return *(unsigned __int16 *)(a2 + 26);
          case 55:
            v97 = *(_WORD *)(a2 + 86);
            if ( v97 == 15 )
            {
              *(_BYTE *)(a2 + 81) = 0;
              *(_WORD *)(a2 + 24) = 12;
            }
            else
            {
              if ( v97 )
                break;
              v49 = *(_BYTE *)(a2 + 41) == 4;
              *(_BYTE *)(a2 + 81) = 0;
              *(_WORD *)(a2 + 24) = 158;
              if ( v49 && *(_QWORD *)(a2 + 56) == 8 )
              {
                v98 = *(_WORD *)(a2 + 46);
                if ( v98 == 15 )
                {
                  *(_WORD *)(a2 + 24) = 162;
                  *(_BYTE *)(a2 + 41) = 0;
                }
                else if ( v98 == 31 )
                {
                  *(_WORD *)(a2 + 24) = 161;
                  *(_BYTE *)(a2 + 41) = 0;
                }
              }
            }
            return *(unsigned __int16 *)(a2 + 26);
          case 88:
            v92 = *(unsigned __int16 *)(a2 + 126);
            if ( v92 == *(unsigned __int16 *)(a2 + 46) )
            {
              *(_WORD *)(a2 + 24) = 178;
              goto LABEL_108;
            }
            if ( *(_BYTE *)(a2 + 81) == 1 && v92 == *(unsigned __int16 *)(a2 + 86) )
            {
              *(_WORD *)(a2 + 24) = 178;
              v141 = (_DWORD *)(a2 + 80);
              v142 = (_DWORD *)(a2 + 120);
              for ( i = 9; i; --i )
                *v141++ = *v142++;
              goto LABEL_92;
            }
            v93 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
            if ( !*(_WORD *)(a2 + 46) )
            {
              if ( v93 != 256 )
                goto LABEL_453;
              v94 = _mm_loadu_si128((const __m128i *)(a2 + 120));
              v95 = *(_DWORD *)(a2 + 152);
              *(_BYTE *)(a2 + 81) = 0;
              *(_WORD *)(a2 + 24) = 181;
              *(__m128i *)(a2 + 40) = v94;
              v96 = _mm_loadu_si128((const __m128i *)(a2 + 136));
              *(_DWORD *)(a2 + 72) = v95;
              *(_BYTE *)(a2 + 121) = 0;
              *(__m128i *)(a2 + 56) = v96;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( v93 != 256 )
              break;
            goto LABEL_241;
          case 89:
            if ( *(_WORD *)(a2 + 126) )
              break;
            if ( !*(_WORD *)(a2 + 46) )
            {
              *(_WORD *)(a2 + 24) = 160;
              goto LABEL_205;
            }
            if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
            {
              *(_WORD *)(a2 + 24) = 160;
              goto LABEL_231;
            }
            break;
          case 95:
            v81 = *(_WORD *)(a2 + 46);
            if ( v81 != 134 && v81 <= 0x95u )
              break;
            goto LABEL_200;
          case 97:
          case 101:
            if ( !*(_WORD *)(a2 + 46) && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x100 && !*(_WORD *)(a2 + 126) )
            {
              *(_BYTE *)(a2 + 41) = 0;
              *(_BYTE *)(a2 + 81) = 0;
              *(_BYTE *)(a2 + 121) = 0;
            }
            break;
          case 112:
          case 114:
            if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x100 )
              break;
            v42 = 185;
            if ( (_WORD)v10 == 112 )
              v42 = 166;
            *(_WORD *)(a2 + 24) = v42;
            goto LABEL_91;
          case 116:
            if ( *(_WORD *)(a2 + 46) )
              break;
            *(_WORD *)(a2 + 24) = 182;
            goto LABEL_205;
          case 126:
            if ( *(_WORD *)(a2 + 46) )
              break;
            *(_WORD *)(a2 + 24) = 183;
            goto LABEL_205;
          case 130:
            if ( *(_WORD *)(a2 + 46) )
              break;
            *(_WORD *)(a2 + 24) = 181;
            goto LABEL_205;
          case 132:
            if ( *(_WORD *)(a2 + 46) )
              break;
            *(_WORD *)(a2 + 24) = 184;
            goto LABEL_205;
          case 135:
            v105 = *(_WORD *)(a2 + 46);
            if ( !v105 )
            {
              v49 = *(_BYTE *)(a2 + 81) == 1;
              *(_WORD *)(a2 + 24) = 168;
              if ( v49 && *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 126) )
              {
LABEL_205:
                v83 = _mm_loadu_si128((const __m128i *)(a2 + 80));
                v84 = *(_DWORD *)(a2 + 112);
                *(_BYTE *)(a2 + 81) = 0;
                *(__m128i *)(a2 + 40) = v83;
                v85 = _mm_loadu_si128((const __m128i *)(a2 + 96));
                *(_DWORD *)(a2 + 72) = v84;
                *(__m128i *)(a2 + 56) = v85;
                goto LABEL_92;
              }
              goto LABEL_108;
            }
            if ( *(_WORD *)(a2 + 126) == v105 && *(_BYTE *)(a2 + 81) == 5 )
            {
              v48 = 175;
              goto LABEL_107;
            }
            break;
          case 136:
            v82 = *(_WORD *)(a2 + 126);
            if ( !v82 )
            {
              *(_BYTE *)(a2 + 121) = 0;
              *(_WORD *)(a2 + 24) = 157;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( *(_WORD *)(a2 + 46) != v82 || *(_BYTE *)(a2 + 81) != 5 )
              break;
            v48 = 176;
LABEL_107:
            v49 = *(_QWORD *)(a2 + 88) == 1;
            *(_WORD *)(a2 + 24) = v48;
            if ( !v49 )
              goto LABEL_108;
LABEL_231:
            *(_BYTE *)(a2 + 81) = 0;
            goto LABEL_92;
          case 151:
            if ( !*(_BYTE *)(a2 + 121) )
            {
LABEL_200:
              *(_WORD *)(a2 + 24) = 186;
              return *(unsigned __int16 *)(a2 + 26);
            }
            v100 = *(_WORD *)(a2 + 126);
            if ( v100 != 134 && v100 <= 0x95u )
              break;
            if ( !*(_WORD *)(a2 + 46) )
            {
LABEL_453:
              *(_WORD *)(a2 + 24) = 186;
              goto LABEL_108;
            }
            if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) )
              break;
LABEL_241:
            *(_WORD *)(a2 + 24) = 186;
            v101 = (_DWORD *)(a2 + 80);
            v102 = (_DWORD *)(a2 + 120);
            for ( j = 9; j; --j )
              *v101++ = *v102++;
            goto LABEL_92;
          case 153:
            if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x100 )
              break;
            v99 = *(_WORD *)(a2 + 126);
            *(_WORD *)(a2 + 24) = 167;
            if ( *(_WORD *)(a2 + 46) != v99 )
              goto LABEL_91;
            *(_BYTE *)(a2 + 81) = 0;
            *(_BYTE *)(a2 + 121) = 0;
            return *(unsigned __int16 *)(a2 + 26);
          case 155:
            v80 = *(unsigned __int16 *)(a2 + 126);
            if ( v80 == *(unsigned __int16 *)(a2 + 46) )
            {
              *(_WORD *)(a2 + 24) = 180;
LABEL_108:
              v50 = *(_DWORD *)(a2 + 112);
              *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
              v51 = _mm_loadu_si128((const __m128i *)(a2 + 96));
              *(_DWORD *)(a2 + 72) = v50;
              *(__m128i *)(a2 + 56) = v51;
LABEL_91:
              v43 = *(_DWORD *)(a2 + 152);
              *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 120));
              v44 = _mm_loadu_si128((const __m128i *)(a2 + 136));
              *(_DWORD *)(a2 + 112) = v43;
              *(__m128i *)(a2 + 96) = v44;
LABEL_92:
              *(_BYTE *)(a2 + 121) = 0;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( *(_BYTE *)(a2 + 81) == 1 && v80 == *(unsigned __int16 *)(a2 + 86) )
            {
              *(_BYTE *)(a2 + 121) = 0;
              *(_WORD *)(a2 + 24) = 180;
              return *(unsigned __int16 *)(a2 + 26);
            }
            break;
          default:
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        if ( !(_WORD)v10 )
          return 0;
      }
      if ( (*(_BYTE *)(a1 + 160) & 8) == 0 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( (unsigned __int16)v10 > 0x56u )
      {
        v111 = (unsigned int)(v10 - 92);
        if ( (unsigned __int16)v111 > 0x3Cu )
          return *(unsigned __int16 *)(a2 + 26);
        v112 = 0x110007314000A5D7LL;
        if ( !_bittest64(&v112, v111) )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      if ( (unsigned __int16)v10 > 0x18u )
      {
        v14 = 1LL << ((unsigned __int8)v10 - 25);
        if ( (v14 & 0x2FC0C0D400007E0DLL) != 0 )
          return 0;
        if ( (v14 & 0x22) != 0 )
          goto LABEL_21;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (_WORD)v10 != 16 )
      {
        if ( (unsigned __int16)v10 > 0x10u )
        {
          if ( (_WORD)v10 != 18 )
            return *(unsigned __int16 *)(a2 + 26);
        }
        else if ( (unsigned __int16)v10 > 0xBu )
        {
          if ( (unsigned __int16)(v10 - 13) > 2u )
            return *(unsigned __int16 *)(a2 + 26);
        }
        else if ( (unsigned __int16)v10 <= 9u )
        {
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
LABEL_21:
      if ( (*(_DWORD *)(a2 + 28) & 0xCu) <= 7 )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    case 151:
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 2;
      *(_WORD *)(a2 + 126) = (unsigned __int8)(((next_dword >> 25) & 0x1F) - 122);
      if ( ((next_dword >> 25) & 0x1F) == 0xF )
      {
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x7C000) != 0 )
          return 0;
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 107;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          v110 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_BYTE *)(a2 + 45) = 2;
          if ( (next_dword & 0x1000) == 0 )
            v110 = next_dword & 0x1FFF;
          *(_QWORD *)(a2 + 48) = v110;
          goto LABEL_8;
        }
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
          *(_WORD *)(a2 + 24) = 0;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = next_dword & 0x1F;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (next_dword >> 14) & 0x1F;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v137 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x1000) == 0 )
            v137 = next_dword & 0x1FFF;
          *(_QWORD *)(a2 + 88) = v137;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
            *(_WORD *)(a2 + 24) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = next_dword & 0x1F;
        }
        v138 = 50;
        if ( !_bittest64(&v138, (next_dword >> 25) & 0x1F)
          && ((unsigned __int8)(((next_dword >> 25) & 0x1F) - 7) > 7u || (*(_BYTE *)(a1 + 160) & 1) == 0) )
        {
          goto LABEL_8;
        }
      }
      return 0;
    case 152:
      v108 = (next_dword >> 14) & 0x1F;
      if ( (*(_BYTE *)(a1 + 160) & 8) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 151;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v108;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v109 = next_dword & 0x1FFF;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x1000) != 0 )
            v109 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_QWORD *)(a2 + 88) = v109;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
            *(_WORD *)(a2 + 24) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = next_dword & 0x1F;
        }
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = 193;
        goto LABEL_8;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v108;
      if ( (next_dword & 0x2000) != 0 )
      {
        *(_BYTE *)(a2 + 81) = 5;
        v136 = next_dword & 0x1FFF;
        *(_BYTE *)(a2 + 85) = 2;
        if ( (next_dword & 0x1000) != 0 )
          v136 = next_dword | 0xFFFFFFFFFFFFE000LL;
        *(_QWORD *)(a2 + 88) = v136;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
          *(_WORD *)(a2 + 24) = 0;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = next_dword & 0x1F;
      }
      *(_BYTE *)(a2 + 121) = 1;
      LODWORD(v133) = (next_dword >> 25) & 0x1F;
      *(_BYTE *)(a2 + 125) = 2;
      if ( (unsigned __int8)v133 <= 0xEu )
      {
        *(_WORD *)(a2 + 126) = (unsigned __int8)(v133 - 90);
        goto LABEL_8;
      }
      goto LABEL_405;
    case 230:
      if ( (*(_BYTE *)(a1 + 160) & 8) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 95;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = 192;
        goto LABEL_79;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      v126 = (next_dword >> 14) & 0x1F;
      v129 = v126;
      if ( (unsigned __int16)(((next_dword >> 14) & 0x1F) - 7) <= 0x17u )
      {
LABEL_409:
        *(_WORD *)(a2 + 46) = v126;
        return 0;
      }
      v130 = v126 - 72;
      if ( v129 == 31 )
        v130 = -65;
      *(_WORD *)(a2 + 46) = v130;
      goto LABEL_79;
    case 231:
      v106 = (next_dword >> 14) & 0x1F;
      if ( (*(_BYTE *)(a1 + 160) & 8) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 151;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v106;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v107 = next_dword & 0x1FFF;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x1000) != 0 )
            v107 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_QWORD *)(a2 + 88) = v107;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
            *(_WORD *)(a2 + 24) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = next_dword & 0x1F;
        }
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = 194;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v106;
        if ( (next_dword & 0x2000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          v131 = next_dword & 0x1FFF;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (next_dword & 0x1000) != 0 )
            v131 = next_dword | 0xFFFFFFFFFFFFE000LL;
          *(_QWORD *)(a2 + 88) = v131;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && (next_dword & 0x1FE0) != 0 )
            *(_WORD *)(a2 + 24) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = next_dword & 0x1F;
        }
        v132 = 2147483604;
        *(_BYTE *)(a2 + 121) = 1;
        v133 = (next_dword >> 25) & 0x1F;
        *(_BYTE *)(a2 + 125) = 2;
        if ( _bittest64(&v132, v133) )
        {
LABEL_405:
          *(_WORD *)(a2 + 126) = (unsigned __int8)v133;
          return 0;
        }
        v134 = v133 - 72;
        v135 = v134;
        if ( v134 == 0xD7 )
          v135 = 191;
        *(_WORD *)(a2 + 126) = v135;
      }
      goto LABEL_8;
    default:
LABEL_46:
      v23 = nullptr;
      if ( (unsigned __int16)v13 > 0xE8u )
        goto LABEL_47;
      goto LABEL_319;
  }
}

