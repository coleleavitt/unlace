__int64 __fastcall sub_74C90(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r11d
  int v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // esi
  bool v22; // r14
  int v24; // ecx
  unsigned __int16 v25; // dx
  int v26; // r14d
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r12
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  char v34; // dl
  int v35; // ebx
  unsigned __int8 v36; // dl
  __int16 v37; // dx
  __m128i v38; // xmm0
  int v39; // edx
  __m128i v40; // xmm0
  int v41; // eax
  __int64 v42; // rdx
  __int16 v43; // bx
  __int16 v44; // cx
  int v45; // eax
  int v46; // eax
  int v47; // edx
  __int64 v48; // rsi
  int v49; // ecx
  int v50; // eax
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // ecx
  __int16 v55; // si
  __int16 v56; // bx
  __int64 v57; // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r12d
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // edx
  __int64 v68; // r14
  unsigned __int64 v69; // rbx
  __int16 v70; // si
  int v71; // eax
  int v72; // edx
  int v73; // edx
  int v74; // eax
  __int16 v75; // ax
  __int64 v76; // rdx
  __int16 v77; // cx
  __int64 v78; // rdi
  int v79; // eax
  int v80; // edx
  char v81; // cl
  int v82; // eax
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // esi
  int v86; // ecx
  __int16 v87; // ax
  unsigned __int8 v88; // bl
  int v89; // eax
  int v90; // esi
  int v91; // ecx
  __int16 v92; // di
  _DWORD *v93; // rdi
  _DWORD *v94; // rsi
  __int64 k; // rcx
  __int64 v96; // rcx
  _DWORD *v97; // rdi
  _DWORD *v98; // rsi
  __int64 i; // rcx
  _DWORD *v100; // rdi
  _DWORD *v101; // rsi
  __int64 j; // rcx
  __int16 v103; // dx
  __int64 v104; // rcx
  unsigned int v105; // ebx
  __int64 v106; // rbx
  __int16 v107; // dx
  unsigned __int8 v108; // bl
  __int64 v109; // rax
  char v110; // dl
  int v111; // r12d
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int16 v114; // dx
  int v115; // r9d
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // ebx
  __int16 v120; // ax
  __int16 v121; // ax
  int v122; // edx
  __int16 v123; // dx
  int v124; // eax
  __int16 v125; // dx
  __int16 v126; // ax
  __int16 v127; // ax
  int v128; // r12d
  int v129; // eax
  __int16 v130; // ax
  _BYTE *v131; // rax
  __int64 v132; // rax
  int v133; // ebx
  __int64 v134; // rax

  v7 = a4 | (a3 << 16);
  v11 = sub_6A990(a1, a2, v7, 1, a5, a6);
  if ( (_BYTE)v11 )
    return 1;
  v15 = v11;
  v16 = (a3 >> 11) & 3;
  if ( v16 == 2 )
  {
    if ( (a4 & 0x8000) == 0 )
    {
      if ( (a3 & 0x200) != 0 )
      {
        v24 = a3 >> 4;
        v25 = word_8EC00[(a3 >> 4) & 0x1F];
        *(_WORD *)(a2 + 24) = v25;
        if ( !v25 )
          return v15;
        *(_BYTE *)(a2 + 41) = 1;
        v26 = a3 & 0xF;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = v26;
        *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        if ( v25 == 215 )
          goto LABEL_168;
        if ( v25 > 0xD7u )
        {
          if ( v25 != 269 )
          {
            if ( v25 > 0x10Du )
            {
              if ( (unsigned __int16)(v25 - 270) <= 3u )
              {
                v27 = a4;
                v28 = a4;
                v29 = a4 & 0x1F;
                *(_BYTE *)(a2 + 121) = 5;
                *(_BYTE *)(a2 + 125) = 2;
                *(_BYTE *)(a2 + 153) = 0;
                *(_QWORD *)(a2 + 144) = 0;
                v30 = (v28 >> 6) & 3 | (v27 >> 10) & 0x1C;
                *(_BYTE *)(a2 + 161) = 5;
                *(_QWORD *)(a2 + 128) = v30;
                *(_BYTE *)(a2 + 165) = 2;
                *(_QWORD *)(a2 + 168) = v29 + 1;
                *(_BYTE *)(a2 + 193) = 0;
                *(_QWORD *)(a2 + 184) = 0;
                if ( v25 == 272 )
                {
                  v96 = v29 + 1 - v30;
                  *(_QWORD *)(a2 + 168) = v96;
                  if ( v96 <= 0 )
                    return v15;
                  v19 = *(_DWORD *)(a2 + 28);
                  if ( v26 == 15 )
                  {
                    *(_WORD *)(a2 + 24) = 273;
                    v97 = (_DWORD *)(a2 + 80);
                    v98 = (_DWORD *)(a2 + 120);
                    for ( i = 9; i; --i )
                      *v97++ = *v98++;
                    v100 = (_DWORD *)(a2 + 120);
                    v101 = (_DWORD *)(a2 + 160);
                    for ( j = 9; j; --j )
                      *v100++ = *v101++;
                    *(_BYTE *)(a2 + 161) = 0;
                  }
                  goto LABEL_15;
                }
              }
              goto LABEL_28;
            }
            if ( v25 == 245 )
            {
LABEL_168:
              *(_BYTE *)(a2 + 81) = 5;
              *(_BYTE *)(a2 + 113) = 0;
              *(_QWORD *)(a2 + 104) = 0;
              *(_BYTE *)(a2 + 121) = 1;
              *(_WORD *)(a2 + 126) = v26;
              *(_QWORD *)(a2 + 88) = (v25 == 215) + (a4 & 0x1F);
              v19 = *(_DWORD *)(a2 + 28);
              v85 = (a4 >> 6) & 3 | (a4 >> 10) & 0x1C;
              *(_BYTE *)(a2 + 125) = 2;
              if ( (a3 & 0x20) != 0 )
              {
                if ( !v85 )
                {
                  *(_WORD *)(a2 + 24) = v25 + 1;
                  goto LABEL_15;
                }
                LOBYTE(v24) = v24 & 3;
              }
              else
              {
                v24 = (a3 >> 4) & 3;
                if ( !v85 )
                {
                  if ( v24 == 1 )
                  {
                    *(_BYTE *)(a2 + 121) = 8;
                    *(_BYTE *)(a2 + 153) = 1;
                    *(_QWORD *)(a2 + 128) = 32;
                  }
                  goto LABEL_15;
                }
              }
              *(_BYTE *)(a2 + 121) = 8;
              *(_BYTE *)(a2 + 153) = v24;
              *(_QWORD *)(a2 + 128) = v85;
              goto LABEL_15;
            }
LABEL_28:
            v19 = *(_DWORD *)(a2 + 28);
            goto LABEL_15;
          }
LABEL_121:
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
          *(_QWORD *)(a2 + 88) = (unsigned __int16)((_WORD)a3 << 12)
                               | (2 * (_WORD)a3) & 0x800
                               | (unsigned __int8)a4
                               | (a4 >> 4) & 0x700u;
          if ( a5 && (unsigned __int8)sub_738B0(*(_QWORD *)(a2 + 16), a5) )
          {
            sub_1DB20(a5, 4, 4, 0);
            v19 = *(_DWORD *)(a2 + 28);
            goto LABEL_16;
          }
          goto LABEL_123;
        }
        if ( v25 != 14 )
        {
          if ( v25 == 23 )
          {
            *(_DWORD *)(a2 + 28) |= 0x200u;
            goto LABEL_121;
          }
          if ( v25 != 12 )
            goto LABEL_28;
        }
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_BYTE *)(a2 + 153) = 0;
        *(_QWORD *)(a2 + 144) = 0;
        *(_QWORD *)(a2 + 128) = (2 * (_WORD)a3) & 0x800 | (unsigned __int8)a4 | (a4 >> 4) & 0x700u;
        if ( a5 )
          sub_738B0(*(_QWORD *)(a2 + 16), a5);
        if ( v26 == 15 )
        {
          v103 = *(_WORD *)(a2 + 24);
          v104 = *(_QWORD *)(a2 + 128);
          v105 = (*(_DWORD *)(a2 + 8) & 0xFFFFFFFC) + 4;
          if ( v103 == 14 )
          {
            v106 = (unsigned int)v104 + v105;
          }
          else
          {
            v106 = v105 - (unsigned int)v104;
            if ( !(_DWORD)v104 && v103 == 12 )
              goto LABEL_93;
          }
          if ( (unsigned __int8)is_mapped() )
          {
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 2;
            *(_QWORD *)(a2 + 88) = v106;
            *(_BYTE *)(a2 + 113) = 0;
            *(_QWORD *)(a2 + 104) = 0;
            *(_BYTE *)(a2 + 121) = 0;
            *(_WORD *)(a2 + 24) = 44;
            if ( a5 )
            {
              sub_738B0(*(_QWORD *)(a2 + 16), a5);
              v19 = *(_DWORD *)(a2 + 28);
              goto LABEL_15;
            }
            goto LABEL_28;
          }
        }
LABEL_93:
        v19 = *(_DWORD *)(a2 + 28);
        BYTE1(v19) |= 2u;
        goto LABEL_16;
      }
      v62 = sub_737E0(a2, a3, a4);
      if ( !v62 )
        return v15;
      v63 = (unsigned __int8)a4;
      v64 = (2 * (_WORD)a3) & 0x800 | (unsigned __int8)a4 | (a4 >> 4) & 0x700;
      if ( (v64 & 0xC00) == 0 )
      {
        v65 = (a4 >> 4) & 0x300;
        if ( v65 )
        {
          if ( !(_BYTE)a4 )
            return v15;
          switch ( v65 )
          {
            case 512:
              *(_QWORD *)(v62 + 8) = 16777472 * (unsigned __int8)a4;
              break;
            case 768:
              *(_QWORD *)(v62 + 8) = 16843009 * (unsigned __int8)a4;
              break;
            case 256:
              *(_QWORD *)(v62 + 8) = 65537 * (unsigned __int8)a4;
              break;
          }
        }
        else
        {
          *(_QWORD *)(v62 + 8) = (unsigned __int8)a4;
        }
        goto LABEL_77;
      }
      LOBYTE(v63) = a4 | 0x80;
      *(_QWORD *)(v62 + 8) = (unsigned int)__ROR4__(v63, v64 >> 7);
      v83 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)v83 > 0x19u )
      {
        if ( (_WORD)v83 != 268 )
          goto LABEL_77;
      }
      else
      {
        if ( (unsigned __int16)v83 <= 9u )
          goto LABEL_77;
        v84 = 63704064;
        if ( !_bittest64(&v84, v83) )
          goto LABEL_77;
      }
      *(_DWORD *)(a2 + 28) |= 0x10u;
LABEL_77:
      *(_BYTE *)(v62 + 1) = 5;
      *(_BYTE *)(v62 + 5) = 2;
      v19 = *(_DWORD *)(a2 + 28);
      goto LABEL_15;
    }
    v20 = (a4 >> 12) & 7;
    v21 = (a3 >> 4) & 0x7F;
    v22 = v21 == 127 && v20 == 2;
    if ( v22 )
    {
      *(_WORD *)(a2 + 24) = 288;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 73) = 0;
      *(_QWORD *)(a2 + 64) = 0;
      *(_QWORD *)(a2 + 48) = ((_WORD)a3 << 8) & 0xF00 | a4 & 0xF | (a4 >> 4) & 0xF0u;
      v19 = *(_DWORD *)(a2 + 28);
      goto LABEL_15;
    }
    v46 = (v20 >> 1) & 2 | (a4 >> 12) & 1;
    switch ( v46 )
    {
      case 2:
        v81 = a4 & 1;
        if ( (a4 & 1) != 0 )
        {
          if ( a1[48] != 21 )
            return v15;
          if ( ((a3 >> 7) & 0xF) == 0 )
          {
            v82 = a3 & 0xF;
            if ( (a3 & 0x40) != 0 )
            {
              if ( (~(_BYTE)a3 & 0xD) == 0 )
                return v15;
              *(_WORD *)(a2 + 46) = 14;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 86) = v82;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              if ( (a4 & 0x2000) != 0 )
              {
                *(_WORD *)(a2 + 24) = 1103;
              }
              else
              {
                *(_BYTE *)(a2 + 121) = 7;
                *(_BYTE *)(a2 + 125) = 9;
                *(_WORD *)(a2 + 24) = 1102;
                *(_QWORD *)(a2 + 136) = (((unsigned int)a4 >> 10) & 2 | (2 * (_WORD)a4) & 0xFFC)
                                      + (unsigned int)*(_QWORD *)(a2 + 8)
                                      + 4;
              }
            }
            else
            {
              if ( v82 != 15 )
                return v15;
              if ( (a4 & 0x2000) != 0 )
              {
                if ( !a1[52] )
                  return v15;
                *(_WORD *)(a2 + 24) = 1095;
              }
              else if ( (a3 & 0x20) != 0 )
              {
                v132 = *(_QWORD *)(a2 + 8);
                *(_BYTE *)(a2 + 41) = 7;
                *(_BYTE *)(a2 + 45) = 9;
                *(_WORD *)(a2 + 24) = 1106;
                *(_QWORD *)(a2 + 56) = (_DWORD)v132 + 4 - (((unsigned int)a4 >> 10) & 2 | (2 * (_WORD)a4) & 0xFFC);
              }
              else
              {
                v133 = a3 & 0x10;
                if ( v133 && !a1[52] )
                  return v15;
                v134 = *(_QWORD *)(a2 + 8);
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = 14;
                *(_BYTE *)(a2 + 45) = 2;
                *(_BYTE *)(a2 + 81) = 7;
                *(_BYTE *)(a2 + 85) = 9;
                *(_QWORD *)(a2 + 96) = (_DWORD)v134 + 4 - (((unsigned int)a4 >> 10) & 2 | (2 * (_WORD)a4) & 0xFFC);
                *(_WORD *)(a2 + 24) = 1108 - (v133 == 0);
              }
            }
            return 1;
          }
          v112 = *(_QWORD *)(a2 + 8) + 4LL;
          v113 = (unsigned int)v112 + 2 * ((a3 >> 7) & 0xF);
          if ( (a4 & 0x2000) != 0 )
          {
            if ( (a3 & 0x40) != 0 )
            {
              if ( (a3 & 0x20) != 0 )
              {
                *(_WORD *)(a2 + 24) = 1112;
                *(_BYTE *)(a2 + 41) = 7;
                *(_BYTE *)(a2 + 45) = 9;
                *(_QWORD *)(a2 + 56) = v113;
                if ( (~(_BYTE)a3 & 0xD) == 0 )
                  return v15;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = a3 & 0xF;
                *(_BYTE *)(a2 + 85) = 2;
                return 1;
              }
              v114 = 1109;
              v81 = 5;
            }
            else
            {
              v114 = 1113;
            }
          }
          else
          {
            v114 = 1111;
            v81 = 7;
          }
          *(_WORD *)(a2 + 24) = v114;
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 45) = 9;
          v115 = 1 << (v81 + 10);
          *(_QWORD *)(a2 + 56) = v113;
          v116 = ((a3 & ((1 << v81) - 1)) << 11) | a4 & 0x7FE | (a4 >> 11) & 1;
          if ( (v115 & v116) != 0 )
            v117 = (-2 * v115) | v116;
          else
            v117 = (2 * v115 - 1) & v116;
          *(_BYTE *)(a2 + 81) = 7;
          *(_BYTE *)(a2 + 85) = 9;
          *(_QWORD *)(a2 + 96) = (unsigned int)(v112 + 2 * v117);
          if ( v114 == 1113 )
          {
            v118 = 2;
            if ( (a3 & 2) != 0 )
              v118 = 4;
            v119 = a3 >> 2;
            *(_BYTE *)(a2 + 121) = 7;
            *(_QWORD *)(a2 + 136) = (unsigned int)(v113 + v118);
            *(_BYTE *)(a2 + 125) = 9;
            if ( (v119 & 0xFu) - 14 <= 1 )
              return v15;
            *(_BYTE *)(a2 + 161) = 14;
            *(_BYTE *)(a2 + 165) = 0;
            *(_QWORD *)(a2 + 168) = v119 & 0xF;
          }
          return 1;
        }
        v77 = 46;
        break;
      case 3:
        v77 = 4;
        break;
      case 1:
        v77 = 3;
        v22 = 1;
        break;
      default:
        if ( (~(unsigned __int8)(a3 >> 4) & 0x38) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = 3;
          *(_BYTE *)(a2 + 45) = 9;
          *(_BYTE *)(a2 + 32) = (a3 >> 6) & 0xF;
          v47 = (a3 << 10) & 0x100000
              | (2 * (_WORD)a4) & 0xFFE
              | (32 * a4) & 0x40000
              | (a4 << 8) & 0x80000
              | (a3 << 12) & 0x3F000;
          if ( ((a3 << 10) & 0x100000) != 0 )
            v47 |= 0xFFE00000;
          *(_QWORD *)(a2 + 56) = v47 + (unsigned int)*(_QWORD *)(a2 + 8) + 4;
          v19 = *(_DWORD *)(a2 + 28);
          goto LABEL_15;
        }
        switch ( v21 )
        {
          case '8':
          case '9':
            *(_WORD *)(a2 + 24) = 27;
            if ( (unsigned __int8)sub_73940((__int64)a1, a2 + 40, a3, a4) )
            {
              *(_BYTE *)(a2 + 81) = 1;
              v19 = *(_DWORD *)(a2 + 28);
              *(_WORD *)(a2 + 86) = a3 & 0xF;
              *(_BYTE *)(a2 + 85) = 2;
              goto LABEL_15;
            }
            return v15;
          case ':':
            *(_WORD *)(a2 + 24) = 169;
            if ( (a4 & 0xF00) == 0x100 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              v19 = *(_DWORD *)(a2 + 28);
              *(_BYTE *)(a2 + 45) = 2;
              *(_QWORD *)(a2 + 48) = a4 & 0x1F;
              *(_BYTE *)(a2 + 73) = 0;
              *(_QWORD *)(a2 + 64) = 0;
              goto LABEL_15;
            }
            if ( (a4 & 0xC00) == 0x400 )
            {
              *(_BYTE *)(a2 + 41) = 13;
              *(_WORD *)(a2 + 24) = ((a4 & 0x200) == 0) + 170;
              v131 = (_BYTE *)(a2 + 48);
              if ( (a4 & 0x80u) != 0 )
              {
                *(_BYTE *)(a2 + 48) = 65;
                v131 = (_BYTE *)(a2 + 49);
              }
              if ( (a4 & 0x40) != 0 )
                *v131++ = 73;
              if ( (a4 & 0x20) != 0 )
                *v131++ = 70;
              *v131 = 0;
              if ( (a4 & 0x100) != 0 )
              {
                *(_BYTE *)(a2 + 81) = 5;
                v19 = *(_DWORD *)(a2 + 28);
                *(_BYTE *)(a2 + 85) = 2;
                *(_QWORD *)(a2 + 88) = a4 & 0x1F;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 104) = 0;
                goto LABEL_15;
              }
              goto LABEL_28;
            }
            if ( a1[48] != 21 )
              goto LABEL_364;
            switch ( (unsigned __int8)a4 )
            {
              case 0xFu:
                *(_WORD *)(a2 + 24) = 910;
                *(_BYTE *)(a2 + 41) = 13;
                qstrncpy();
                v19 = *(_DWORD *)(a2 + 28);
                goto LABEL_16;
              case 0x1Du:
                v126 = 868;
                break;
              case 0xDu:
                v126 = 1097;
                break;
              default:
LABEL_364:
                sub_1E6A0(a2, (unsigned __int8)a4);
                v19 = *(_DWORD *)(a2 + 28);
                if ( *(_WORD *)(a2 + 24) == 1101 )
                  goto LABEL_16;
                goto LABEL_15;
            }
            *(_WORD *)(a2 + 24) = v126;
            v19 = *(_DWORD *)(a2 + 28);
            *(_WORD *)(a2 + 46) = 12;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = 14;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 126) = 13;
            *(_BYTE *)(a2 + 121) = 1;
            *(_BYTE *)(a2 + 125) = 2;
            goto LABEL_16;
          case ';':
            v124 = (a4 >> 4) & 0xF;
            if ( v124 == 5 )
            {
              v125 = 285;
            }
            else if ( ((a4 >> 4) & 0xFu) > 5 )
            {
              v125 = 286;
              if ( v124 != 6 )
                return v15;
            }
            else
            {
              if ( v124 == 2 )
              {
                *(_WORD *)(a2 + 24) = 256;
                v19 = *(_DWORD *)(a2 + 28);
                goto LABEL_15;
              }
              v125 = 284;
              if ( v124 != 4 )
                return v15;
            }
            *(_WORD *)(a2 + 24) = v125;
            v19 = *(_DWORD *)(a2 + 28);
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 45) = 2;
            *(_QWORD *)(a2 + 48) = a4 & 0xF;
            *(_BYTE *)(a2 + 73) = 0;
            *(_QWORD *)(a2 + 64) = 0;
            goto LABEL_15;
          case '<':
            if ( a4 != 36608 )
              goto LABEL_287;
            *(_WORD *)(a2 + 24) = 166;
            v19 = *(_DWORD *)(a2 + 28);
            *(_WORD *)(a2 + 46) = a3 & 0xF;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            goto LABEL_15;
          case '=':
LABEL_287:
            if ( (a3 & 0xF) != 0xE || (~(_WORD)a4 & 0xF00) != 0 )
              return v15;
            v122 = a1[48];
            v19 = *(_DWORD *)(a2 + 28);
            if ( ((unsigned int)(v122 - 14) <= 0x7FFFFFF1 || v122 == 10) && !(_BYTE)a4 )
            {
              *(_WORD *)(a2 + 24) = 429;
              goto LABEL_15;
            }
            v19 |= 1u;
            *(_WORD *)(a2 + 24) = 12;
            *(_QWORD *)(a2 + 128) = (unsigned __int8)a4;
            *(_DWORD *)(a2 + 28) = v19;
            *(_WORD *)(a2 + 46) = 15;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = a3 & 0xF;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_BYTE *)(a2 + 121) = 5;
            *(_BYTE *)(a2 + 125) = 2;
            *(_BYTE *)(a2 + 153) = 0;
            *(_QWORD *)(a2 + 144) = 0;
            if ( !a5 )
              goto LABEL_15;
            if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) == 0x5000000 )
            {
              sub_1DB20(a5, 24, 24, 16);
              v19 = *(_DWORD *)(a2 + 28);
              goto LABEL_15;
            }
            goto LABEL_28;
          case '>':
          case '?':
            *(_WORD *)(a2 + 24) = 26;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
            if ( (unsigned __int8)sub_73940((__int64)a1, a2 + 80, a3, a4) )
              goto LABEL_28;
            return v15;
          case '~':
            *(_BYTE *)(a2 + 41) = 5;
            v128 = a4 & 0xFFF;
            *(_WORD *)(a2 + 24) = 430;
            *(_BYTE *)(a2 + 45) = 2;
            v129 = (unsigned __int16)((_WORD)a3 << 12);
            goto LABEL_330;
          case '\x7F':
            v127 = a4;
            *(_WORD *)(a2 + 24) = 267;
            v128 = a4 & 0xFF0;
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 45) = 2;
            v129 = a3 & 0xF | (unsigned __int16)(v127 << 12);
LABEL_330:
            *(_BYTE *)(a2 + 73) = 0;
            *(_QWORD *)(a2 + 48) = v128 | (unsigned int)v129;
            *(_QWORD *)(a2 + 64) = 0;
            goto LABEL_28;
          default:
            return v15;
        }
    }
    v78 = *(_QWORD *)(a2 + 8);
    *(_WORD *)(a2 + 24) = v77;
    *(_BYTE *)(a2 + 41) = 7;
    *(_BYTE *)(a2 + 45) = 9;
    v79 = (~((a3 >> 10) ^ (a4 >> 13)) << 23) & 0x800000
        | (a3 >> 10 << 24) & 0x1000000
        | (2 * (_WORD)a4) & 0xFFE
        | (a3 << 12) & 0x3FF000
        | (~((a3 >> 10) ^ (a4 >> 11)) << 22) & 0x400000;
    v80 = v78 + 4;
    if ( ((a3 >> 10 << 24) & 0x1000000) != 0 )
      v79 |= 0xFE000000;
    if ( v77 == 46 )
    {
      *(_QWORD *)(a2 + 56) = (v80 & 0xFFFFFFFC) + v79;
      if ( a5 )
      {
LABEL_131:
        sub_1DB20(a5, 11, 11, 0);
        sub_1DB20(a5, 27, 27, 16);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 56) = (unsigned int)(v79 + v80);
      if ( a5 && (v77 != 3 || sub_38100()) )
        goto LABEL_131;
    }
    v19 = *(_DWORD *)(a2 + 28);
    if ( !v22 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v16 == 3 )
  {
    v31 = (a3 >> 9) & 3;
    if ( v31 != 1 )
    {
      if ( (unsigned int)(v31 - 2) > 1 )
      {
        v32 = (a3 >> 8) & 1 | (a3 >> 4) & 6u;
        v33 = dword_8EBE0[v32];
        if ( v33 == -1 )
          return v15;
        v19 = *(_DWORD *)(a2 + 28) | v33;
        *(_DWORD *)(a2 + 28) = v19;
        *(_WORD *)(a2 + 24) = (a3 & 0x10) == 0 ? 32 : 30;
        *(_BYTE *)(a2 + 85) = byte_8EBC0[v32];
        v34 = a3;
        v35 = a3 & 0x80;
        v36 = v34 & 0xF;
        if ( v36 == 15 )
        {
          v68 = a4 & 0xFFF;
          if ( !v35 )
            v68 = -(__int64)(a4 & 0xFFF);
          v69 = v68 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL) + 4;
          if ( (unsigned __int8)is_mapped() )
          {
            *(_BYTE *)(a2 + 81) = 2;
            v19 = *(_DWORD *)(a2 + 28);
            *(_QWORD *)(a2 + 96) = v69;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 4;
            v19 = *(_DWORD *)(a2 + 28);
            *(_WORD *)(a2 + 86) = 15;
            *(_QWORD *)(a2 + 96) = v68;
          }
        }
        else if ( v35 )
        {
          *(_WORD *)(a2 + 86) = v36;
          *(_BYTE *)(a2 + 81) = 4;
          *(_QWORD *)(a2 + 96) = a4 & 0xFFF;
        }
        else if ( (a4 & 0xFC0) != 0 )
        {
          if ( ((a4 >> 6) & 0x3C) == 0x38 )
          {
            v19 |= 4u;
            *(_BYTE *)(a2 + 81) = 4;
            *(_DWORD *)(a2 + 28) = v19;
            *(_WORD *)(a2 + 86) = v36;
            *(_QWORD *)(a2 + 96) = (unsigned __int8)a4;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = v36;
            *(_QWORD *)(a2 + 96) = (unsigned __int8)a4;
            if ( (a4 & 0x500) == 0 )
              return v15;
            if ( (a4 & 0x400) != 0 )
            {
              if ( (a4 & 0x100) != 0 )
                *(_DWORD *)(a2 + 28) = v19 | 0x20;
            }
            else
            {
              LOBYTE(v19) = v19 | 0x80;
              *(_DWORD *)(a2 + 28) = v19;
            }
            if ( (a4 & 0x200) == 0 )
              *(_DWORD *)(a2 + 28) |= 0x10u;
            sub_1E470((__int64)a1, a2, a2 + 80, 0);
            v19 = *(_DWORD *)(a2 + 28);
          }
        }
        else
        {
          *(_WORD *)(a2 + 86) = v36;
          *(_BYTE *)(a2 + 81) = 3;
          *(_BYTE *)(a2 + 112) = a4 & 0xF;
          *(_QWORD *)(a2 + 88) = (a4 >> 4) & 3;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
        *(_BYTE *)(a2 + 45) = 2;
        if ( (~(unsigned __int8)((unsigned int)a4 >> 12) & 0xF) == 0 )
        {
          if ( (v19 & 0x1402) != 0 )
          {
            v37 = 50;
            if ( (v19 & 2) == 0 )
              v37 = (v19 & 0x400) == 0 ? 880 : 276;
            v38 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            *(_WORD *)(a2 + 24) = v37;
            v19 &= 0xFFFFEBFD;
            v39 = *(_DWORD *)(a2 + 112);
            *(_BYTE *)(a2 + 81) = 0;
            *(__m128i *)(a2 + 40) = v38;
            v40 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v39;
            *(_BYTE *)(a2 + 45) = 2;
            *(__m128i *)(a2 + 56) = v40;
            goto LABEL_16;
          }
          if ( *(_WORD *)(a2 + 24) == 30 )
            *(_WORD *)(a2 + 24) = 31;
        }
        goto LABEL_15;
      }
      return sub_743B0((__int64)a1, a2, v7, v12, v13, v14);
    }
    v41 = a3 & 0xFF00;
    if ( v41 == 64000 )
    {
      if ( (~(_WORD)a4 & 0xF000) != 0 )
        return v15;
      v53 = a3 >> 4;
      v54 = ((a3 >> 4) & 0xF) - 8;
      if ( v54 >= 0 )
      {
        v55 = word_8ED60[(16 * v54) | (a4 >> 4) & 0xF];
        *(_WORD *)(a2 + 24) = v55;
        if ( v55 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          v19 = *(_DWORD *)(a2 + 28);
          v56 = a3 & 0xF;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
          if ( (a4 & 0x80u) == 0 || v54 )
          {
            *(_WORD *)(a2 + 86) = v56;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            if ( v55 != 48 )
            {
              *(_BYTE *)(a2 + 121) = 1;
              *(_WORD *)(a2 + 126) = a4 & 0xF;
              *(_BYTE *)(a2 + 125) = 2;
            }
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = a4 & 0xF;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 126) = v56;
            *(_BYTE *)(a2 + 121) = 1;
            *(_BYTE *)(a2 + 125) = 2;
          }
          goto LABEL_15;
        }
      }
      if ( (a4 & 0xF0) == 0 )
      {
        v120 = word_8EBA0[v53 & 0xF];
        *(_WORD *)(a2 + 24) = v120;
        if ( !v120 )
          return v15;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = a3 & 0xF;
        v19 = *(_DWORD *)(a2 + 28);
        *(_WORD *)(a2 + 126) = a4 & 0xF;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        if ( (a3 & 0x10) != 0 )
          v19 |= 1u;
        goto LABEL_15;
      }
      if ( (a4 & 0x80u) == 0 )
        return v15;
      v107 = word_8EB80[v53 & 0xF];
      *(_WORD *)(a2 + 24) = v107;
      if ( !v107 )
      {
        if ( (a3 & 0xFFC0) != 0xFA80 )
          return v15;
        if ( (a4 & 0xF0C0) != 0xF080 )
          return v15;
        if ( (((unsigned __int8)a4 ^ (unsigned __int8)a3) & 0xF) != 0 )
          return v15;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = a4 & 0xF;
        if ( (a3 & 0x30) != 0x10 )
          return v15;
        *(_WORD *)(a2 + 24) = word_8EE60[(a4 >> 4) & 3];
        v19 = *(_DWORD *)(a2 + 28);
        goto LABEL_15;
      }
      v108 = a3 & 0xF;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = ((unsigned int)a4 >> 8) & 0xF;
      if ( v108 == 15 )
      {
        v109 = a2 + 80;
        *(_WORD *)(a2 + 24) = v107 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 1;
        v109 = a2 + 120;
        *(_WORD *)(a2 + 86) = v108;
        *(_BYTE *)(a2 + 85) = 2;
      }
      v110 = a4;
      v111 = a4 >> 1;
      *(_BYTE *)(v109 + 5) = 2;
      *(_WORD *)(v109 + 6) = v110 & 0xF;
      if ( (v111 & 0x18) != 0 )
      {
        *(_BYTE *)(v109 + 1) = 8;
        *(_BYTE *)(v109 + 33) = 3;
        *(_QWORD *)(v109 + 8) = v111 & 0x18;
      }
      else
      {
        *(_BYTE *)(v109 + 1) = 1;
      }
      goto LABEL_28;
    }
    if ( v41 != 64256 )
      return v15;
    v42 = word_8E980[a3 & 0xF0 | (a4 >> 4) & 0xF];
    *(_WORD *)(a2 + 24) = v42;
    if ( !(_WORD)v42 )
      return v15;
    v43 = a3 & 0xF;
    v44 = a4 & 0xF;
    v45 = ((unsigned int)a4 >> 8) & 0xF;
    if ( (unsigned __int16)v42 > 0x119u )
      goto LABEL_206;
    if ( (unsigned __int16)v42 <= 0x117u )
    {
      if ( (unsigned __int16)v42 > 0x3Eu )
      {
        if ( (_WORD)v42 == 236 )
        {
LABEL_49:
          *(_WORD *)(a2 + 86) = v45;
          v19 = *(_DWORD *)(a2 + 28);
          *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 126) = v43;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 2;
          *(_WORD *)(a2 + 166) = v44;
          *(_BYTE *)(a2 + 161) = 1;
          *(_BYTE *)(a2 + 165) = 2;
          goto LABEL_16;
        }
      }
      else if ( (unsigned __int16)v42 > 0x3Au || (unsigned __int16)(v42 - 37) <= 3u )
      {
        goto LABEL_49;
      }
LABEL_206:
      *(_WORD *)(a2 + 46) = v45;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 86) = v43;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 126) = v44;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 2;
      *(_WORD *)(a2 + 166) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a2 + 161) = 1;
      *(_BYTE *)(a2 + 165) = 2;
      if ( (~((unsigned int)a4 >> 12) & 0xF) == 0 )
      {
        if ( (unsigned __int16)v42 <= 0x41u )
        {
          if ( (unsigned __int16)v42 > 0x1Cu )
          {
            switch ( (int)v42 )
            {
              case 29:
                v130 = 28;
                goto LABEL_349;
              case 55:
                v130 = 67;
                goto LABEL_349;
              case 56:
                v130 = 68;
                goto LABEL_349;
              case 57:
                v130 = 69;
                goto LABEL_349;
              case 58:
                v130 = 70;
                goto LABEL_349;
              case 63:
                v130 = 64;
                goto LABEL_349;
              case 65:
                v130 = 66;
LABEL_349:
                *(_WORD *)(a2 + 24) = v130;
                v19 = *(_DWORD *)(a2 + 28);
                *(_BYTE *)(a2 + 161) = 0;
                goto LABEL_16;
              default:
                return v15;
            }
          }
        }
        else
        {
          LOWORD(v42) = v42 - 196;
          switch ( v42 )
          {
            case 0LL:
              v130 = 198;
              goto LABEL_349;
            case 1LL:
              v130 = 199;
              goto LABEL_349;
            case 6LL:
              v130 = 204;
              goto LABEL_349;
            case 7LL:
              v130 = 205;
              goto LABEL_349;
            case 12LL:
              v130 = 210;
              goto LABEL_349;
            case 13LL:
              v130 = 211;
              goto LABEL_349;
            case 16LL:
              v130 = 1100;
              goto LABEL_349;
            case 47LL:
              v130 = 244;
              goto LABEL_349;
            default:
              return v15;
          }
        }
        return v15;
      }
      v19 = *(_DWORD *)(a2 + 28);
      if ( (BYTE1(a4) & 0xF) != 0xF )
        goto LABEL_16;
      if ( (_WORD)v42 == 208 )
      {
        *(_WORD *)(a2 + 24) = 1098;
      }
      else if ( (_WORD)v42 == 209 )
      {
        *(_WORD *)(a2 + 24) = 1099;
      }
      else if ( (unsigned __int16)(v42 - 1098) > 1u )
      {
        goto LABEL_16;
      }
      v93 = (_DWORD *)(a2 + 40);
      v94 = (_DWORD *)(a2 + 160);
      for ( k = 9; k; --k )
        *v93++ = *v94++;
      *(_BYTE *)(a2 + 161) = 0;
      goto LABEL_16;
    }
    *(_WORD *)(a2 + 46) = v45;
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 2;
    *(_WORD *)(a2 + 86) = v43;
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 126) = v44;
    *(_BYTE *)(a2 + 121) = 1;
    *(_BYTE *)(a2 + 125) = 2;
LABEL_123:
    v19 = *(_DWORD *)(a2 + 28);
    goto LABEL_16;
  }
  if ( v16 != 1 )
    return v15;
  if ( (a3 & 0x400) == 0 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      v57 = sub_737E0(a2, a3, a4);
      if ( !v57 )
        return v15;
      *(_BYTE *)(v57 + 1) = 1;
      *(_BYTE *)(v57 + 5) = 2;
      *(_WORD *)(v57 + 6) = a4 & 0xF;
      v58 = a4;
      v59 = (a4 >> 6) & 3;
      v60 = (a4 >> 4) & 3;
      LODWORD(v61) = v59 | (v58 >> 10) & 0x1C;
      if ( (_DWORD)v61 )
      {
        v61 = (int)v61;
      }
      else
      {
        if ( v60 == 3 )
        {
          *(_BYTE *)(v57 + 1) = 8;
          *(_BYTE *)(v57 + 33) = 4;
          *(_QWORD *)(v57 + 8) = 1;
          v19 = *(_DWORD *)(a2 + 28);
          goto LABEL_15;
        }
        v61 = 32;
        if ( !v60 )
          goto LABEL_28;
      }
      *(_BYTE *)(v57 + 1) = 8;
      *(_BYTE *)(v57 + 33) = v60;
      *(_QWORD *)(v57 + 8) = v61;
      v19 = *(_DWORD *)(a2 + 28);
      if ( *(_WORD *)(a2 + 24) == 173 && (v60 & 2) != 0 )
        *(_WORD *)(a2 + 24) = 174;
      goto LABEL_15;
    }
    v17 = (a3 >> 7) & 3;
    if ( (a3 & 0x40) == 0 )
    {
      v48 = 9;
      v49 = (a3 >> 4) & 1;
      v50 = (a3 >> 5) & 1;
      if ( _bittest64(&v48, v17) )
      {
        v19 = *(_DWORD *)(a2 + 28) | (v50 << 6);
        v51 = v19;
        LOBYTE(v19) = v19 | 0x80;
        v52 = v51 | 0x10;
        if ( (a3 & 0x80u) == 0 )
          v19 = v52;
        *(_DWORD *)(a2 + 28) = v19;
        if ( v49 )
        {
          if ( a4 != 49152 )
            return v15;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 184;
          *(_WORD *)(a2 + 46) = a3 & 0xF;
          *(_BYTE *)(a2 + 45) = 2;
        }
        else
        {
          if ( (a4 & 0xFFE0) != 0xC000 )
            return v15;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 214;
          *(_WORD *)(a2 + 46) = 13;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = a4 & 0x1F;
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
        }
        goto LABEL_15;
      }
      if ( (a3 & 0xF) == 0xD && v49 + (_DWORD)v17 == 2 )
      {
        if ( v50 )
        {
          if ( v49 )
          {
            *(_WORD *)(a2 + 24) = 42;
            if ( !(_WORD)a4 || (a4 & 0x8000u) != 0 && (a4 & 0x4000) != 0 )
              return v15;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 43;
            if ( (__int16)a4 <= 0 )
              return v15;
          }
          *(_BYTE *)(a2 + 41) = 9;
          v19 = *(_DWORD *)(a2 + 28);
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 64) = (unsigned __int16)a4;
          goto LABEL_15;
        }
        v19 = *(_DWORD *)(a2 + 28);
        *(_WORD *)(a2 + 24) = (v49 == 0) + 33;
      }
      else
      {
        v19 = *(_DWORD *)(a2 + 28) | (v50 << 6);
        *(_WORD *)(a2 + 24) = 34 - v49;
      }
      v66 = v19;
      LOBYTE(v19) = v19 | 0x80;
      *(_BYTE *)(a2 + 41) = 1;
      v67 = v66 | 0x10;
      *(_BYTE *)(a2 + 45) = 2;
      if ( (a3 & 0x100) != 0 )
        v19 = v67;
      *(_WORD *)(a2 + 46) = a3 & 0xF;
      *(_DWORD *)(a2 + 28) = v19;
      if ( !(_WORD)a4 )
        return v15;
      if ( v49 )
      {
        if ( (a4 & 0x8000u) != 0 && (a4 & 0x4000) != 0 )
          return v15;
      }
      else if ( (a4 & 0x8000u) != 0 )
      {
        return v15;
      }
      *(_BYTE *)(a2 + 81) = 9;
      *(_BYTE *)(a2 + 85) = 2;
      *(_QWORD *)(a2 + 104) = (unsigned __int16)a4;
      goto LABEL_15;
    }
    v18 = (a3 >> 4) & 3;
    if ( (_DWORD)v17 != 1 )
    {
      if ( (unsigned int)(v17 - 2) <= 1 )
      {
        if ( a4 == 59775 && (~(_BYTE)a3 & 0xF) == 0 )
        {
          *(_BYTE *)(a2 + 32) = 14;
          *(_WORD *)(a2 + 24) = 877;
          v19 = *(_DWORD *)(a2 + 28);
LABEL_16:
          *(_DWORD *)(a2 + 28) = v19 | 0x40000;
          return 1;
        }
        v75 = (a3 & 0x10) == 0 ? 71 : 49;
        goto LABEL_113;
      }
      v70 = a3 & 0xF;
      if ( !v18 )
      {
        v71 = (a4 >> 12) & 0xF;
        v72 = (a4 >> 8) & 0xF;
        if ( v71 == 15 )
        {
          *(_WORD *)(a2 + 46) = v72;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 86) = v70;
          *(_WORD *)(a2 + 24) = ((unsigned __int8)a4 >> 7) + 875;
          v19 = *(_DWORD *)(a2 + 28);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (a4 & 0x40) != 0 )
            v19 |= 4u;
          goto LABEL_16;
        }
        *(_WORD *)(a2 + 46) = v72;
        *(_WORD *)(a2 + 24) = 220;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = v71;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 4;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = v70;
        *(_QWORD *)(a2 + 136) = (4 * (_WORD)a4) & 0x3FC;
        goto LABEL_118;
      }
      if ( v18 == 1 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 172;
        v76 = a2 + 80;
        *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 4;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = v70;
        *(_QWORD *)(a2 + 96) = (4 * (_WORD)a4) & 0x3FC;
        goto LABEL_119;
      }
LABEL_111:
      v75 = 49;
      if ( v18 == 2 )
        v75 = 71;
LABEL_113:
      *(_WORD *)(a2 + 24) = v75;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = ((unsigned int)a4 >> 8) & 0xF;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 4;
      *(_BYTE *)(a2 + 125) = 2;
      *(_WORD *)(a2 + 126) = a3 & 0xF;
      *(_QWORD *)(a2 + 136) = (4 * (_WORD)a4) & 0x3FC;
      if ( (a3 & 0x120) == 0 )
        return v15;
      if ( (a3 & 0x100) != 0 )
      {
        if ( (a3 & 0x20) != 0 )
          *(_DWORD *)(a2 + 28) |= 0x20u;
      }
      else
      {
        *(_DWORD *)(a2 + 28) |= 0x80u;
      }
      if ( (a3 & 0x80) == 0 )
        *(_DWORD *)(a2 + 28) |= 0x10u;
LABEL_118:
      v76 = a2 + 120;
LABEL_119:
      sub_1E470((__int64)a1, a2, v76, 0);
      goto LABEL_28;
    }
    v73 = a4 >> 4;
    v74 = (a4 >> 4) & 0xF;
    if ( v18 == 1 )
    {
      switch ( (a4 >> 4) & 0xF )
      {
        case 0:
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 24) = 274;
          goto LABEL_179;
        case 1:
          *(_QWORD *)(a2 + 48) = 1;
          *(_WORD *)(a2 + 24) = 275;
          *(_BYTE *)(a2 + 45) = 1;
LABEL_179:
          *(_BYTE *)(a2 + 41) = 3;
          v19 = *(_DWORD *)(a2 + 28);
          *(_WORD *)(a2 + 46) = a3 & 0xF;
          *(_BYTE *)(a2 + 72) = a4 & 0xF;
          goto LABEL_15;
        case 2:
        case 3:
        case 6:
          return v15;
        case 4:
        case 5:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          v86 = (a4 >> 4) & 3;
          if ( (v73 & 8) != 0 )
          {
            v87 = 431;
            if ( (v73 & 4) != 0 )
              v87 = 433;
            *(_WORD *)(a2 + 24) = v87;
            v19 = *(_DWORD *)(a2 + 28);
            if ( (v73 & 3) != 0 )
            {
              if ( v86 == 1 )
              {
                BYTE1(v19) |= 0x10u;
                *(_DWORD *)(a2 + 28) = v19;
              }
              else if ( v86 == 3 )
              {
                v19 |= 0x1002u;
                *(_DWORD *)(a2 + 28) = v19;
              }
            }
            else
            {
              v19 |= 2u;
              *(_DWORD *)(a2 + 28) = v19;
            }
          }
          else
          {
            v121 = 259;
            if ( (v73 & 3) == 0 )
              v121 = 257;
            *(_WORD *)(a2 + 24) = v121;
            v19 = *(_DWORD *)(a2 + 28);
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 4;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = a3 & 0xF;
          goto LABEL_15;
        case 7:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 258;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int16)a4 >> 12;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = ((unsigned int)a4 >> 8) & 0xF;
          v19 = *(_DWORD *)(a2 + 28);
          *(_BYTE *)(a2 + 121) = 4;
          *(_BYTE *)(a2 + 125) = 2;
          *(_WORD *)(a2 + 126) = a3 & 0xF;
          goto LABEL_15;
      }
    }
    if ( (unsigned int)(v18 - 2) <= 1 )
      goto LABEL_111;
    if ( v74 == 7 )
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 261;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = a4 & 0xF;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = ((unsigned int)a4 >> 8) & 0xF;
      v19 = *(_DWORD *)(a2 + 28);
      *(_BYTE *)(a2 + 125) = 2;
      *(_BYTE *)(a2 + 161) = 4;
      *(_BYTE *)(a2 + 165) = 2;
      *(_WORD *)(a2 + 166) = a3 & 0xF;
    }
    else
    {
      if ( (v73 & 8) == 0 && (unsigned int)(v74 - 4) > 1 )
        return v15;
      v88 = a3 & 0xF;
      if ( v88 == 15 || (~(unsigned __int8)(a4 >> 12) & 0xD) == 0 )
        return v15;
      v89 = (a4 >> 12) & 0xF;
      v90 = (a4 >> 4) & 3;
      v91 = a4 & 0xF;
      if ( (v73 & 8) != 0 )
      {
        v92 = 432;
        if ( (v73 & 4) != 0 )
          v92 = 434;
        *(_WORD *)(a2 + 24) = v92;
        if ( (v73 & 3) != 0 )
        {
          if ( v90 == 1 )
          {
            *(_DWORD *)(a2 + 28) |= 0x1000u;
          }
          else if ( v90 == 3 )
          {
            *(_DWORD *)(a2 + 28) |= 0x1002u;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 28) |= 2u;
        }
        if ( v92 == 432 )
        {
          if ( v91 != 15 )
            return v15;
          *(_WORD *)(a2 + 46) = v89;
          v19 = *(_DWORD *)(a2 + 28);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 4;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v88;
          goto LABEL_15;
        }
      }
      else
      {
        if ( (v73 & 2) != 0 )
          return v15;
        v123 = 262;
        if ( !v90 )
          v123 = 260;
        *(_WORD *)(a2 + 24) = v123;
      }
      if ( (~(_BYTE)a4 & 0xD) == 0 || v88 == v91 || v89 == v91 )
        return v15;
      *(_WORD *)(a2 + 86) = v89;
      v19 = *(_DWORD *)(a2 + 28);
      *(_WORD *)(a2 + 46) = v91;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 4;
      *(_BYTE *)(a2 + 125) = 2;
      *(_WORD *)(a2 + 126) = v88;
    }
LABEL_15:
    BYTE1(v19) |= 0x80u;
    goto LABEL_16;
  }
  return sub_743B0((__int64)a1, a2, v7, v12, v13, v14);
}
