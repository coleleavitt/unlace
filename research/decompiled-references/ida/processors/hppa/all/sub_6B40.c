__int64 __fastcall sub_6B40(__int64 a1, __int64 a2)
{
  unsigned int next_dword; // eax
  __int64 v6; // rdx
  unsigned int v7; // esi
  int v8; // eax
  char v9; // r12
  __int64 v10; // rdi
  int v11; // esi
  signed int v12; // ecx
  signed int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  char v21; // si
  int v22; // eax
  int v23; // esi
  char v24; // si
  char v25; // cl
  int v26; // edi
  int v27; // ecx
  int v28; // ecx
  __int16 v29; // ax
  __int64 v30; // rax
  char v31; // r9
  unsigned int v32; // esi
  char v33; // r10
  signed int v34; // ecx
  signed int v35; // ecx
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  __int16 v41; // si
  int v42; // r8d
  int v43; // esi
  int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  signed int v47; // eax
  char v48; // cl
  unsigned int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // esi
  char v53; // r8
  signed int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // esi
  signed int v57; // eax
  char v58; // cl
  __int16 v59; // cx
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 *v62; // rcx
  __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rsi
  signed int v68; // eax
  unsigned int v69; // eax
  char v70; // al
  __int16 v71; // ax
  __int64 v72; // rsi
  __int16 v73; // ax
  __int64 v74; // rcx
  __int64 v75; // rcx
  _DWORD *v76; // rdi
  _DWORD *v77; // rsi
  __int64 i; // rcx
  __int16 v79; // ax
  unsigned __int64 v80; // rcx
  _DWORD *v81; // rdi
  _DWORD *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int16 v86; // ax
  __int16 v87; // ax
  __int64 v88; // rax
  unsigned int v89; // eax
  int v90; // edi
  __int16 v91; // di
  unsigned int v92; // eax
  int v93; // esi
  signed int v94; // eax
  char v95; // al
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  int v98; // r9d
  __int16 v99; // r9
  int v100; // r9d
  __int16 v101; // r9
  int v102; // r8d
  __int16 v103; // r8
  int v104; // r8d
  __int16 v105; // r8
  __int16 v106; // ax
  unsigned int v107; // esi
  __int16 v108; // ax
  __int64 v109; // rax
  int v110; // eax
  __int64 v111; // rdi
  int v112; // edi
  unsigned int v113; // esi
  signed int v114; // ecx
  unsigned int v115; // eax
  __m128i v116; // xmm0
  int v117; // eax
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  int v120; // eax
  __m128i v121; // xmm0
  bool v122; // zf
  __int64 v123; // rcx
  unsigned int v124; // [rsp+Ch] [rbp-7Ch]
  _BYTE v125[88]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v126; // [rsp+68h] [rbp-20h]

  v126 = __readfsqword(0x28u);
  if ( !a2 || (*(_BYTE *)(a2 + 8) & 3) != 0 )
    return 0;
  next_dword = insn_get_next_dword();
  v6 = next_dword;
  v7 = next_dword >> 26;
  v8 = *((unsigned __int16 *)qword_10F80 + 2 * (next_dword >> 26));
  v9 = *((_BYTE *)qword_10F80 + 4 * (int)v7 + 2);
  *(_WORD *)(a2 + 24) = v8;
  switch ( v7 )
  {
    case 0u:
      v89 = (unsigned __int8)((unsigned int)v6 >> 5);
      if ( (unsigned __int8)((unsigned int)v6 >> 5) > 0x85u )
      {
        switch ( (unsigned __int8)((unsigned int)v6 >> 5) )
        {
          case 0xA5u:
            *(_WORD *)(a2 + 24) = 61;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v6 & 0x1F;
            v8 = 61;
            *(_BYTE *)(a2 + 45) = 7;
            goto LABEL_11;
          case 0xC1u:
            *(_WORD *)(a2 + 24) = 70;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = ((unsigned __int16)v6 >> 13) + 32;
            v8 = 70;
            goto LABEL_11;
          case 0xC2u:
            *(_WORD *)(a2 + 24) = 67;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) + 40;
            v8 = 67;
            goto LABEL_11;
          case 0xC3u:
            *(_WORD *)(a2 + 24) = 69;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            v8 = 69;
            goto LABEL_11;
          case 0xC6u:
            if ( (unsigned int)v6 >> 21 != 11 )
              return 0;
            *(_WORD *)(a2 + 24) = 68;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            v8 = 68;
            break;
          default:
            return 0;
        }
      }
      else
      {
        if ( v89 > 0x5F )
        {
          switch ( (unsigned __int8)((unsigned int)v6 >> 5) )
          {
            case 0x60u:
            case 0x65u:
              *(_WORD *)(a2 + 24) = 83;
              v8 = 83;
              goto LABEL_11;
            case 0x6Bu:
              v106 = 92;
              break;
            case 0x73u:
              v106 = 84;
              break;
            case 0x85u:
              *(_WORD *)(a2 + 24) = 56;
              *(_BYTE *)(a2 + 41) = 10;
              *(_WORD *)(a2 + 46) = (unsigned int)v6 >> 21;
              *(_BYTE *)(a2 + 45) = 2;
              *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
              if ( (unsigned __int16)v6 >> 14 )
                *(_DWORD *)(a2 + 28) |= 0x20u;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 7;
              *(_WORD *)(a2 + 86) = v6 & 0x1F;
              v8 = 56;
              goto LABEL_11;
            default:
              return 0;
          }
          *(_WORD *)(a2 + 24) = v106;
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = WORD1(v6);
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 86) = v6 & 0x1F;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          goto LABEL_12;
        }
        if ( v89 == 37 )
        {
          *(_WORD *)(a2 + 24) = 62;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 13) & 7) + 32;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = v6 & 0x1F;
          v8 = 62;
        }
        else if ( v89 > 0x25 )
        {
          if ( v89 != 69 )
            return 0;
          *(_WORD *)(a2 + 24) = 60;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) + 40;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v6 & 0x1F;
          v8 = 60;
          *(_BYTE *)(a2 + 85) = 7;
        }
        else if ( (unsigned __int8)((unsigned int)v6 >> 5) )
        {
          if ( v89 != 32 )
            return 0;
          v8 = 104 - ((v6 & 0x100000) == 0);
          *(_WORD *)(a2 + 24) = 104 - ((v6 & 0x100000) == 0);
        }
        else
        {
          *(_WORD *)(a2 + 24) = 12;
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = v6 & 0x1F;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 88) = (unsigned int)v6 >> 13;
          v8 = 12;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
        }
      }
      goto LABEL_11;
    case 1u:
      v61 = (unsigned int)v6 >> 6;
      if ( (v6 & 0x1000) == 0 )
      {
        switch ( v61 & 0x7F )
        {
          case 8u:
          case 0x18u:
            v8 = 76;
            break;
          case 9u:
            v8 = 77;
            break;
          case 0xAu:
            v8 = 36;
            break;
          case 0xBu:
            v8 = 37;
            break;
          case 0x20u:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 46;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
            v8 = 46;
            goto LABEL_11;
          default:
            return 0;
        }
        *(_DWORD *)(a2 + 28) |= 0x20u;
        *(_WORD *)(a2 + 24) = v8;
        *(_BYTE *)(a2 + 41) = 3;
        *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
        *(_BYTE *)(a2 + 72) = (((unsigned __int16)v6 >> 13 >> 1) | (4 * ((unsigned __int16)v6 >> 13)) & 4) + 32;
        goto LABEL_11;
      }
      if ( (unsigned __int8)v61 <= 0x60u )
      {
        if ( (unsigned __int8)v61 <= 0x45u )
          return 0;
        switch ( (char)v61 )
        {
          case 'F':
          case 'G':
            *(_WORD *)(a2 + 24) = 79;
            *(_BYTE *)(a2 + 41) = 10;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 86) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 125) = 7;
            *(_WORD *)(a2 + 126) = v6 & 0x1F;
            v8 = 79;
            goto LABEL_11;
          case 'H':
          case 'X':
            v71 = 73;
            goto LABEL_167;
          case 'I':
            v71 = 74;
LABEL_167:
            *(_WORD *)(a2 + 24) = v71;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            goto LABEL_12;
          case 'J':
            *(_WORD *)(a2 + 24) = 34;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            goto LABEL_190;
          case 'K':
            *(_WORD *)(a2 + 24) = 35;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            v8 = 35;
            goto LABEL_11;
          case 'L':
            *(_WORD *)(a2 + 24) = 47;
            if ( (v6 & 0x20) != 0 )
              return 0;
            goto LABEL_180;
          case 'M':
            *(_WORD *)(a2 + 24) = 59;
LABEL_180:
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            LOBYTE(v38) = v6;
            break;
          case 'N':
            *(_WORD *)(a2 + 24) = 72;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            v8 = 72;
            goto LABEL_11;
          case 'O':
            *(_WORD *)(a2 + 24) = 36;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
            if ( (unsigned __int16)v6 >> 14 )
              *(_DWORD *)(a2 + 28) |= 0x20u;
            v8 = 36;
            goto LABEL_11;
          case '`':
            *(_WORD *)(a2 + 24) = 45;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 21) & 0x1F) + 40;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = v6 & 0x1F;
            v8 = 45;
            goto LABEL_11;
          default:
            return 0;
        }
        goto LABEL_77;
      }
      if ( (unsigned __int8)v61 > 0xC7u )
      {
        if ( (unsigned __int8)v61 == 202 )
        {
          *(_WORD *)(a2 + 24) = 34;
          v123 = 0;
          if ( (v6 & 0x10000) != 0 )
            v123 = -16;
          *(_BYTE *)(a2 + 41) = 4;
          *(_QWORD *)(a2 + 56) = ((unsigned int)v6 >> 17) & 0xF | (unsigned __int64)v123;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
          if ( (unsigned __int16)v6 >> 14 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
          if ( (v6 & 0x20) == 0 )
          {
LABEL_190:
            v8 = 34;
            goto LABEL_11;
          }
        }
        return 0;
      }
      if ( (unsigned __int8)v61 <= 0xC5u )
        return 0;
      *(_WORD *)(a2 + 24) = 80;
      *(_BYTE *)(a2 + 41) = 10;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
      if ( (unsigned __int16)v6 >> 14 )
        *(_DWORD *)(a2 + 28) |= 0x20u;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 1;
      *(_QWORD *)(a2 + 88) = WORD1(v6) & 0x1F;
      *(_BYTE *)(a2 + 125) = 7;
      *(_WORD *)(a2 + 126) = v6 & 0x1F;
      v8 = 80;
      goto LABEL_11;
    case 2u:
      v8 = 1;
      v62 = qword_10E80;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      do
      {
        if ( (((unsigned int)v6 >> 6) & 0x3F) == *(_BYTE *)v62 )
        {
          *(_WORD *)(a2 + 24) = v8;
          switch ( (_WORD)v8 )
          {
            case 0x29:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 7;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
              *(_BYTE *)(a2 + 85) = 7;
              *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
              if ( (v6 & 0xC0) == 0 || (unsigned __int16)v6 >> 13 )
                return 0;
              *(_BYTE *)(a2 + 121) = 5;
              v111 = (unsigned __int8)v6 >> 6;
LABEL_324:
              *(_QWORD *)(a2 + 128) = v111;
              *(_BYTE *)(a2 + 125) = 2;
              break;
            case 0x55:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 7;
              *(_BYTE *)(a2 + 81) = 5;
              *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
              *(_QWORD *)(a2 + 88) = (unsigned __int8)v6 >> 6;
              *(_BYTE *)(a2 + 85) = 2;
              if ( (v6 & 0xC0) == 0 )
                return 0;
              *(_BYTE *)(a2 + 121) = 1;
              *(_BYTE *)(a2 + 125) = 7;
              *(_WORD *)(a2 + 126) = ((unsigned int)v6 >> 21) & 0x1F;
              break;
            case 0x19:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 7;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
              *(_BYTE *)(a2 + 85) = 7;
              *(_WORD *)(a2 + 86) = v6 & 0x1F;
              goto LABEL_11;
            default:
              goto LABEL_307;
          }
LABEL_96:
          *(_BYTE *)(a2 + 161) = 1;
          *(_BYTE *)(a2 + 165) = 7;
          *(_WORD *)(a2 + 166) = v6 & 0x1F;
          goto LABEL_11;
        }
        v8 = *((unsigned __int16 *)v62 + 3);
        v62 = (__int64 *)((char *)v62 + 4);
      }
      while ( (_WORD)v8 );
      *(_WORD *)(a2 + 24) = 0;
LABEL_307:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_BYTE *)(a2 + 125) = 7;
      *(_WORD *)(a2 + 126) = v6 & 0x1F;
LABEL_10:
      if ( !(_WORD)v8 )
        return 0;
LABEL_11:
      if ( (*(_BYTE *)(a1 + 152) & 1) == 0 )
        goto LABEL_12;
      switch ( v8 )
      {
        case 8:
          v85 = 18;
          if ( !_bittest64(&v85, (unsigned __int16)v6 >> 13) )
          {
            v86 = *(_WORD *)(a2 + 86);
            if ( !v86 )
              goto LABEL_224;
            if ( v86 == 2 )
            {
              *(_WORD *)(a2 + 24) = 134;
LABEL_224:
              *(_BYTE *)(a2 + 81) = 0;
            }
          }
          break;
        case 14:
          if ( (v6 & 1) == 0 )
          {
            if ( *(_BYTE *)(a2 + 81) == 1 )
            {
              *(_BYTE *)(a2 + 41) = 0;
              *(_WORD *)(a2 + 24) = 134;
            }
            else if ( *(_WORD *)(a2 + 46) == 2 )
            {
              *(_BYTE *)(a2 + 41) = 0;
              *(_WORD *)(a2 + 24) = 135;
            }
          }
          break;
        case 26:
        case 28:
          if ( (v6 & 0x400) == 0 && *(_BYTE *)(a2 + 81) == 5 && *(_BYTE *)(a2 + 121) == 5 )
          {
            v72 = *(_QWORD *)(a2 + 88);
            if ( v72 + 1 == *(_QWORD *)(a2 + 128) )
            {
              v79 = v8 + 110;
              v74 = 31;
              *(_WORD *)(a2 + 24) = v79;
              if ( v79 != 136 )
                goto LABEL_197;
              goto LABEL_206;
            }
          }
          break;
        case 29:
          if ( (v6 & 0x400) == 0 && *(_BYTE *)(a2 + 81) == 5 && *(_QWORD *)(a2 + 88) == 31 && *(_BYTE *)(a2 + 121) == 5 )
          {
            v80 = *(_QWORD *)(a2 + 128);
            if ( v80 <= 0x10 )
            {
              *(_WORD *)(a2 + 24) = 140;
              v81 = (_DWORD *)(a2 + 80);
              v82 = (_DWORD *)(a2 + 160);
              v83 = 1LL << v80;
              v84 = 9;
              *(_QWORD *)(a2 + 48) = v83 - 1;
              while ( v84 )
              {
                *v81++ = *v82++;
                --v84;
              }
              *(_BYTE *)(a2 + 121) = 0;
              *(_BYTE *)(a2 + 161) = 0;
            }
          }
          break;
        case 32:
        case 33:
          if ( *(_BYTE *)(a2 + 81) == 5 && *(_BYTE *)(a2 + 121) == 5 )
          {
            v72 = *(_QWORD *)(a2 + 88);
            if ( v72 + 1 == *(_QWORD *)(a2 + 128) )
            {
              v73 = v8 + 106;
              v74 = 31;
              *(_WORD *)(a2 + 24) = v73;
              if ( v73 == 138 )
LABEL_206:
                v74 = 63;
LABEL_197:
              v75 = v74 - v72;
              v76 = (_DWORD *)(a2 + 120);
              v77 = (_DWORD *)(a2 + 160);
              *(_QWORD *)(a2 + 88) = v75;
              for ( i = 9; i; --i )
                *v76++ = *v77++;
              *(_BYTE *)(a2 + 161) = 0;
            }
          }
          break;
        case 55:
          v88 = *(_QWORD *)(a2 + 56);
          if ( *(_WORD *)(a2 + 46) )
          {
            if ( !v88 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 24) = 141;
            }
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_WORD *)(a2 + 24) = 140;
            *(_QWORD *)(a2 + 48) = v88;
          }
          break;
        case 67:
          if ( *(_WORD *)(a2 + 86) == 51 )
          {
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 24) = 142;
          }
          break;
        case 71:
          if ( (v6 & 0xE000) != 0 )
            break;
          v87 = *(_WORD *)(a2 + 86);
          if ( *(_WORD *)(a2 + 46) )
          {
            if ( v87 )
              break;
            *(_WORD *)(a2 + 24) = 141;
          }
          else
          {
            if ( !v87 && !*(_WORD *)(a2 + 126) )
            {
              *(_WORD *)(a2 + 24) = 143;
              *(_BYTE *)(a2 + 41) = 0;
              *(_BYTE *)(a2 + 81) = 0;
              *(_BYTE *)(a2 + 121) = 0;
              break;
            }
            v119 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            *(_WORD *)(a2 + 24) = 141;
            v120 = *(_DWORD *)(a2 + 112);
            *(__m128i *)(a2 + 40) = v119;
            v121 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v120;
            *(__m128i *)(a2 + 56) = v121;
          }
          v116 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          v117 = *(_DWORD *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 80) = v116;
          v118 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = v117;
          *(__m128i *)(a2 + 96) = v118;
          break;
        default:
          break;
      }
LABEL_12:
      if ( !((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64))loc_BA60)(a1, a2, v6, v125, 80) )
        return 0;
      return *(unsigned __int16 *)(a2 + 26);
    case 3u:
      v51 = ((unsigned int)v6 >> 6) & 0xF;
      v52 = ((unsigned int)v6 >> 6) & 8;
      if ( (v6 & 0x1000) != 0 )
      {
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_10F40 + 2 * v51);
        v53 = *((_BYTE *)qword_10F40 + 4 * v51 + 2);
        if ( v52 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
          v54 = ((int)v6 >> 1) | 0xFFFFFFF0;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 4;
          if ( (v6 & 1) == 0 )
            v54 = ((int)v6 >> 1) & 0xF;
          *(_BYTE *)(a2 + 85) = v53;
          *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_QWORD *)(a2 + 96) = v54;
          *(_BYTE *)(a2 + 112) = ((unsigned __int16)v6 >> 14) + 32;
          if ( (unsigned __int16)v6 >> 14 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
LABEL_117:
          if ( (((unsigned int)v6 >> 6) & 7) != 6 )
            goto LABEL_78;
          *(_DWORD *)(a2 + 28) &= ~0x20u;
          v8 = *(unsigned __int16 *)(a2 + 24);
          goto LABEL_10;
        }
        *(_BYTE *)(a2 + 41) = 4;
        *(_BYTE *)(a2 + 45) = v53;
        v114 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
        if ( (v6 & 0x10000) == 0 )
          v114 = ((unsigned int)v6 >> 17) & 0xF;
        *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
        *(_QWORD *)(a2 + 56) = v114;
        *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
        if ( !((unsigned __int16)v6 >> 14) )
        {
LABEL_265:
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = v6 & 0x1F;
          goto LABEL_117;
        }
      }
      else
      {
        if ( v52 )
          return 0;
        *(_BYTE *)(a2 + 41) = 3;
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_10F40 + 2 * v51);
        *(_BYTE *)(a2 + 45) = *((_BYTE *)qword_10F40 + 4 * v51 + 2);
        *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
        *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
        *(_BYTE *)(a2 + 72) = ((unsigned __int16)v6 >> 14) + 32;
        if ( !((unsigned __int16)v6 >> 14) )
          goto LABEL_265;
      }
      *(_DWORD *)(a2 + 28) |= 0x20u;
      goto LABEL_265;
    case 4u:
      v55 = ((unsigned int)v6 >> 9) & 3;
      switch ( v55 )
      {
        case 2u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 90;
          *(_BYTE *)(a2 + 45) = 7;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
          v8 = 90;
          break;
        case 3u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 91;
          *(_BYTE *)(a2 + 45) = 7;
          *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
          v8 = 91;
          break;
        case 1u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 89;
          *(_WORD *)(a2 + 46) = v6 & 0x1F;
          v8 = 89;
          *(_BYTE *)(a2 + 45) = 7;
          break;
        default:
          v8 = 88;
          *(_WORD *)(a2 + 24) = 88;
          break;
      }
      goto LABEL_11;
    case 5u:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 48) = v6 & 0x3FFFFFF;
      goto LABEL_10;
    case 6u:
    case 0x26u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 121) = 1;
      v28 = (v6 & 0x20) == 0 ? 72 : 104;
      *(_BYTE *)(a2 + 125) = 7;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 46) = v28 + (((unsigned int)v6 >> 21) & 0x1F);
      *(_BYTE *)(a2 + 165) = 7;
      *(_BYTE *)(a2 + 201) = 1;
      *(_BYTE *)(a2 + 205) = 7;
      *(_WORD *)(a2 + 86) = v28 + (BYTE2(v6) & 0x1F);
      *(_WORD *)(a2 + 126) = v28 + (v6 & 0x1F);
      *(_WORD *)(a2 + 166) = v28 + (((unsigned int)v6 >> 6) & 0x1F);
      *(_WORD *)(a2 + 206) = ((unsigned __int16)v6 >> 11) + v28;
      goto LABEL_10;
    case 7u:
    case 0xFu:
    case 0x15u:
    case 0x1Du:
    case 0x37u:
    case 0x3Fu:
      return 0;
    case 8u:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_QWORD *)(a2 + 48) = (int)((((v6 & 0x1FFFFF) << 8) & 0xFFE00
                                  | (((unsigned int)v6 & 0x1FFFFF) >> 7) & 0x180
                                  | ((_DWORD)v6 << 20) & 0x100000
                                  | (4 * (((unsigned int)v6 & 0x1FFFFF) >> 16))
                                  | (((unsigned int)v6 & 0x1FFFFF) >> 12) & 3) << 11);
      *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
      goto LABEL_10;
    case 9u:
    case 0xBu:
      v29 = v6 & 0x1F;
      if ( (v6 & 0x200) != 0 )
      {
        *(_WORD *)(a2 + 46) = v29;
        *(_WORD *)(a2 + 24) = 23;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 7;
        if ( (v6 & 0x180) == 0 )
        {
          *(_WORD *)(a2 + 24) = 127;
          *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 1) & 0x20) + v29 + 72;
        }
        v30 = a2 + 80;
      }
      else
      {
        *(_WORD *)(a2 + 86) = v29;
        *(_WORD *)(a2 + 24) = 15;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 7;
        if ( (v6 & 0x180) == 0 )
        {
          *(_WORD *)(a2 + 24) = 115;
          *(_WORD *)(a2 + 86) = (((unsigned int)v6 >> 1) & 0x20) + v29 + 72;
        }
        v30 = a2 + 40;
      }
      v31 = 7;
      if ( v7 == 9 )
      {
        ++*(_WORD *)(a2 + 24);
        v31 = 2;
      }
      v32 = ((unsigned int)v6 >> 21) & 0x1F;
      v33 = ((unsigned __int16)v6 >> 14) + 32;
      if ( (v6 & 0x1000) != 0 )
      {
        *(_BYTE *)(v30 + 1) = 4;
        *(_WORD *)(v30 + 6) = v32;
        v34 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
        *(_BYTE *)(v30 + 5) = v31;
        *(_BYTE *)(v30 + 32) = v33;
        if ( (v6 & 0x10000) == 0 )
          v34 = ((unsigned int)v6 >> 17) & 0xF;
        *(_QWORD *)(v30 + 16) = v34;
        if ( (unsigned __int16)v6 >> 14 )
        {
          *(_DWORD *)(a2 + 28) |= 0x20u;
          v8 = *(unsigned __int16 *)(a2 + 24);
          goto LABEL_10;
        }
        goto LABEL_78;
      }
      *(_BYTE *)(v30 + 1) = 3;
      *(_WORD *)(v30 + 6) = v32;
      *(_BYTE *)(v30 + 33) = BYTE2(v6) & 0x1F;
      *(_BYTE *)(v30 + 5) = v31;
      *(_BYTE *)(v30 + 32) = v33;
      v8 = *(unsigned __int16 *)(a2 + 24);
      if ( !((unsigned __int16)v6 >> 14) )
        goto LABEL_10;
      goto LABEL_29;
    case 0xAu:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_WORD *)(a2 + 126) = 1;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 7;
      *(_QWORD *)(a2 + 48) = (int)((((v6 & 0x1FFFFF) << 8) & 0xFFE00
                                  | (((unsigned int)v6 & 0x1FFFFF) >> 7) & 0x180
                                  | ((_DWORD)v6 << 20) & 0x100000
                                  | (4 * (((unsigned int)v6 & 0x1FFFFF) >> 16))
                                  | (((unsigned int)v6 & 0x1FFFFF) >> 12) & 3) << 11);
      *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
      goto LABEL_10;
    case 0xCu:
      v49 = ((unsigned int)v6 >> 6) & 7;
      if ( v49 == 2 )
      {
        v115 = ((unsigned int)v6 >> 9) & 0x1F;
        if ( v115 == 1 )
        {
          *(_WORD *)(a2 + 24) = 132;
          v8 = 132;
          goto LABEL_11;
        }
        if ( v115 == 3 && (v6 & 0x20) == 0 )
        {
          *(_WORD *)(a2 + 24) = 133;
          goto LABEL_12;
        }
        *(_WORD *)(a2 + 24) = 0;
        return 0;
      }
      if ( v49 )
        goto LABEL_10;
      v50 = ((unsigned int)v6 >> 9) & 3;
      if ( v50 != 2 )
      {
        if ( v50 == 3 )
        {
          v8 = 0;
          if ( (v6 & 0x20) == 0 )
            v8 = *((unsigned __int16 *)qword_10E50 + ((unsigned __int16)v6 >> 13));
          *(_WORD *)(a2 + 24) = v8;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 21) & 0x1F) + 72;
          *(_BYTE *)(a2 + 85) = 7;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 7;
          *(_WORD *)(a2 + 86) = (BYTE2(v6) & 0x1F) + 72;
          *(_WORD *)(a2 + 126) = (v6 & 0x1F) + 72;
        }
        else
        {
          if ( v50 == 1 )
          {
            v108 = (v6 & 0x1F) + 72;
            v41 = (((unsigned int)v6 >> 21) & 0x1F) + 72;
            goto LABEL_310;
          }
          v8 = *((unsigned __int16 *)qword_10E60 + ((unsigned __int16)v6 >> 13));
          *(_WORD *)(a2 + 24) = v8;
          if ( (_WORD)v8 == 114 )
            goto LABEL_11;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 21) & 0x1F) + 72;
          *(_WORD *)(a2 + 86) = (v6 & 0x1F) + 72;
        }
        goto LABEL_10;
      }
      v110 = (unsigned __int16)v6 >> 13;
      if ( (v6 & 0x20) != 0 )
      {
        *(_WORD *)(a2 + 24) = 130;
        if ( v110 != 1 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_WORD *)(a2 + 46) = (v110 ^ 1) + 135;
        }
        v8 = 130;
        goto LABEL_11;
      }
      *(_WORD *)(a2 + 24) = 110;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (((unsigned int)v6 >> 21) & 0x1F) + 72;
      *(_BYTE *)(a2 + 85) = 7;
      *(_WORD *)(a2 + 86) = (BYTE2(v6) & 0x1F) + 72;
      if ( (unsigned __int16)v6 >> 13 )
        goto LABEL_317;
      goto LABEL_318;
    case 0xDu:
      v124 = v6;
      v36 = getseg();
      v6 = v124;
      if ( *(_BYTE *)(v36 + 43) == 2 )
        v9 = 7;
      v37 = ((int)v124 >> 1) & 0x1FFF;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v97 = v124 >> 14;
        if ( (v124 & 1) == 0 )
        {
          v37 |= ((_WORD)v97 << 13) & 0x6000;
LABEL_76:
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v9;
          *(_QWORD *)(a2 + 56) = v37;
          *(_WORD *)(a2 + 46) = (v124 >> 21) & 0x1F;
          v38 = HIWORD(v124);
LABEL_77:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v38 & 0x1F;
          *(_BYTE *)(a2 + 85) = 7;
LABEL_78:
          v8 = *(unsigned __int16 *)(a2 + 24);
          goto LABEL_10;
        }
        LOWORD(v37) = (~(_WORD)v97 << 13) & 0x6000 | v37;
        BYTE1(v37) |= 0x80u;
      }
      else
      {
        if ( (v124 & 1) == 0 )
          goto LABEL_76;
        BYTE1(v37) |= 0xE0u;
      }
      v37 |= 0xFFFF0000;
      goto LABEL_76;
    case 0xEu:
      v39 = ((unsigned int)v6 >> 9) & 3;
      v40 = (((unsigned int)v6 >> 21) & 0x1F | ((unsigned int)v6 >> 2) & 0x20) + 72;
      v41 = v40;
      switch ( v39 )
      {
        case 2u:
          *(_WORD *)(a2 + 46) = v40;
          *(_WORD *)(a2 + 24) = 110;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (BYTE2(v6) & 0x1F | ((unsigned int)v6 >> 7) & 0x20) + 72;
          *(_BYTE *)(a2 + 85) = 7;
          LOWORD(v110) = (unsigned __int16)v6 >> 13;
          if ( (unsigned __int16)v6 >> 13 )
          {
LABEL_317:
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 126) = v110 + 135;
            *(_BYTE *)(a2 + 125) = 7;
          }
LABEL_318:
          v8 = 110;
          break;
        case 3u:
          v109 = (unsigned __int16)v6 >> 13;
          if ( (v6 & 0x100) != 0 )
          {
            v122 = (_DWORD)v109 == 2;
            v8 = 0;
            if ( v122 )
              v8 = 131;
          }
          else
          {
            v8 = *(unsigned __int16 *)&aM[2 * v109];
          }
          *(_WORD *)(a2 + 46) = v40;
          *(_WORD *)(a2 + 24) = v8;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (BYTE2(v6) & 0x1F | ((unsigned int)v6 >> 7) & 0x20) + 72;
          *(_BYTE *)(a2 + 85) = 7;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 7;
          *(_WORD *)(a2 + 126) = (v6 & 0x1F | ((unsigned int)v6 >> 1) & 0x20) + 72;
          goto LABEL_10;
        case 1u:
          v108 = (v6 & 0x1F | ((unsigned int)v6 >> 1) & 0x20) + 72;
LABEL_310:
          *(_WORD *)(a2 + 86) = v108;
          v8 = 111;
          *(_WORD *)(a2 + 24) = 111;
          *(_WORD *)(a2 + 46) = v41;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          break;
        default:
          *(_WORD *)(a2 + 46) = v40;
          *(_BYTE *)(a2 + 41) = 1;
          v8 = *((unsigned __int16 *)qword_10E40 + ((unsigned __int16)v6 >> 13));
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = v8;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = (v6 & 0x1F | ((unsigned int)v6 >> 1) & 0x20) + 72;
          goto LABEL_10;
      }
      goto LABEL_11;
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
      v14 = (unsigned __int16)v6 >> 14;
      v15 = ((int)v6 >> 1) & 0x1FFF;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v104 = v14 << 13;
        if ( (v6 & 1) == 0 )
        {
          v15 |= v104;
LABEL_21:
          *(_BYTE *)(a2 + 41) = 4;
          *(_QWORD *)(a2 + 56) = v15;
          *(_BYTE *)(a2 + 45) = v9;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 72) = v14 + 32;
          if ( (unsigned __int16)v6 >> 14 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = BYTE2(v6) & 0x1F;
          goto LABEL_10;
        }
        v105 = v15 | v104 ^ 0x6000;
        LOBYTE(v15) = v105;
        BYTE1(v15) = HIBYTE(v105) | 0x80;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_21;
        BYTE1(v15) |= 0xE0u;
      }
      v15 |= 0xFFFF0000;
      goto LABEL_21;
    case 0x14u:
      v42 = v6 & 2;
      v43 = (unsigned __int16)v6 >> 14;
      v44 = (_DWORD)v6 << 18 >> 22;
      v8 = v42 == 0 ? 51 : 115;
      *(_WORD *)(a2 + 24) = v42 == 0 ? 51 : 115;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v100 = v43 << 13;
        if ( (v6 & 1) == 0 )
        {
          v44 |= v100;
LABEL_87:
          *(_BYTE *)(a2 + 41) = 4;
          *(_QWORD *)(a2 + 56) = v44;
          *(_BYTE *)(a2 + 45) = v9;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 72) = v43 + 32;
          if ( (unsigned __int16)v6 >> 14 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = BYTE2(v6) & 0x1F;
          if ( (v6 & 2) != 0 )
            *(_WORD *)(a2 + 86) = (BYTE2(v6) & 0x1F) + 72;
          goto LABEL_11;
        }
        v101 = ((unsigned __int16)(4 * v6) >> 6) | v100 ^ 0x6000;
        LOBYTE(v44) = v101;
        BYTE1(v44) = HIBYTE(v101) | 0x80;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_87;
        BYTE1(v44) |= 0xE0u;
      }
      v44 |= 0xFFFF0000;
      goto LABEL_87;
    case 0x16u:
    case 0x17u:
      v8 = 116;
      v26 = (unsigned __int16)v6 >> 14;
      if ( v7 != 22 )
        v8 = (v6 & 4) == 0 ? 116 : 57;
      *(_WORD *)(a2 + 24) = v8;
      v27 = (_DWORD)v6 << 17 >> 21;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v98 = v26 << 13;
        if ( (v6 & 1) == 0 )
        {
          v27 |= v98;
LABEL_50:
          *(_BYTE *)(a2 + 41) = 4;
          *(_QWORD *)(a2 + 56) = v27;
          *(_BYTE *)(a2 + 45) = v9;
          *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 72) = v26 + 32;
          if ( (unsigned __int16)v6 >> 14 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = BYTE2(v6) & 0x1F;
          if ( (v6 & 4) != 0 )
            *(_WORD *)(a2 + 86) = ((16 * (_BYTE)v6) & 0x20) + (BYTE2(v6) & 0x1F) + 72;
          goto LABEL_11;
        }
        v99 = ((unsigned __int16)(2 * v6) >> 5) | v98 ^ 0x6000;
        LOBYTE(v27) = v99;
        BYTE1(v27) = HIBYTE(v99) | 0x80;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_50;
        BYTE1(v27) |= 0xE0u;
      }
      v27 |= 0xFFFF0000;
      goto LABEL_50;
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      v16 = (unsigned __int16)v6 >> 14;
      *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
      v17 = ((int)v6 >> 1) & 0x1FFF;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v102 = v16 << 13;
        if ( (v6 & 1) == 0 )
        {
          v17 |= v102;
LABEL_28:
          *(_BYTE *)(a2 + 81) = 4;
          *(_QWORD *)(a2 + 96) = v17;
          *(_BYTE *)(a2 + 85) = v9;
          *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 112) = v16 + 32;
          if ( (unsigned __int16)v6 >> 14 )
LABEL_29:
            *(_DWORD *)(a2 + 28) |= 0x20u;
          goto LABEL_10;
        }
        v103 = v17 | v102 ^ 0x6000;
        LOBYTE(v17) = v103;
        BYTE1(v17) = HIBYTE(v103) | 0x80;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_28;
        BYTE1(v17) |= 0xE0u;
      }
      v17 |= 0xFFFF0000;
      goto LABEL_28;
    case 0x1Cu:
      v18 = (unsigned __int16)v6 >> 14;
      v19 = v6 & 1 | ((unsigned int)v6 >> 3) & 0x7FE;
      v56 = WORD1(v6) & 0x1F;
      if ( (v6 & 2) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 127;
        *(_BYTE *)(a2 + 45) = 7;
        *(_WORD *)(a2 + 46) = v56 + 72;
      }
      else
      {
        *(_WORD *)(a2 + 46) = v56;
        *(_WORD *)(a2 + 24) = 95;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 7;
      }
      goto LABEL_34;
    case 0x1Eu:
    case 0x1Fu:
      v18 = (unsigned __int16)v6 >> 14;
      v19 = v6 & 1 | ((unsigned int)v6 >> 3) & 0xFFE;
      v20 = WORD1(v6) & 0x1F;
      if ( v7 == 30 )
      {
        *(_WORD *)(a2 + 46) = v20;
        *(_WORD *)(a2 + 24) = 128;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 7;
        if ( (v6 & 4) == 0 )
          goto LABEL_34;
      }
      else
      {
        if ( (v6 & 4) == 0 )
        {
          *(_WORD *)(a2 + 46) = v20;
          *(_WORD *)(a2 + 24) = 128;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 7;
          goto LABEL_34;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 99;
        *(_BYTE *)(a2 + 45) = 7;
      }
      *(_WORD *)(a2 + 46) = ((16 * (_BYTE)v6) & 0x20) + v20 + 72;
LABEL_34:
      v21 = v19;
      v22 = v19 >> 1;
      v23 = v21 & 1;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
      {
        v90 = v18 << 13;
        if ( !v23 )
        {
          v22 |= v90;
LABEL_38:
          *(_BYTE *)(a2 + 81) = 4;
          *(_QWORD *)(a2 + 96) = v22;
          *(_BYTE *)(a2 + 85) = v9;
          *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
          *(_BYTE *)(a2 + 112) = v18 + 32;
          if ( v18 )
            *(_DWORD *)(a2 + 28) |= 0x20u;
          v8 = *(unsigned __int16 *)(a2 + 24);
          goto LABEL_11;
        }
        v91 = v22 | v90 ^ 0x6000;
        LOBYTE(v22) = v91;
        BYTE1(v22) = HIBYTE(v91) | 0x80;
      }
      else
      {
        if ( !v23 )
          goto LABEL_38;
        BYTE1(v22) |= 0xE0u;
      }
      v22 |= 0xFFFF0000;
      goto LABEL_38;
    case 0x20u:
    case 0x22u:
    case 0x27u:
    case 0x28u:
    case 0x2Au:
    case 0x2Fu:
    case 0x32u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
      goto LABEL_6;
    case 0x21u:
    case 0x23u:
    case 0x29u:
    case 0x2Bu:
    case 0x33u:
    case 0x3Bu:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      v13 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
      if ( (v6 & 0x10000) == 0 )
        v13 = ((unsigned int)v6 >> 17) & 0xF;
      *(_QWORD *)(a2 + 48) = v13;
LABEL_6:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
      goto LABEL_7;
    case 0x24u:
    case 0x25u:
    case 0x2Cu:
    case 0x2Du:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 7;
      *(_QWORD *)(a2 + 48) = (int)(-(v6 & 1) & 0xFFFFFE00 | ((int)v6 >> 1) & 0x3FF);
      *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_WORD *)(a2 + 126) = BYTE2(v6) & 0x1F;
      goto LABEL_10;
    case 0x2Eu:
      v8 = ((v6 & 0x20) != 0) + 119;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = ((v6 & 0x20) != 0) + 119;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_WORD *)(a2 + 46) = ((v6 & 0x800) == 0 ? 104 : 72) + (((unsigned int)v6 >> 21) & 0x1F);
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 7;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 86) = ((v6 & 0x800) == 0 ? 104 : 72) + (BYTE2(v6) & 0x1F);
      *(_BYTE *)(a2 + 165) = 7;
      *(_WORD *)(a2 + 126) = (((unsigned int)v6 >> 8) & 7 | ((unsigned int)v6 >> 10) & 0x38) + 72;
      *(_WORD *)(a2 + 166) = ((v6 & 0x800) == 0 ? 104 : 72) + (v6 & 0x1F);
      goto LABEL_11;
    case 0x30u:
    case 0x31u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
      if ( v7 == 48 )
      {
        v24 = 7;
        v25 = 1;
        *(_WORD *)(a2 + 86) = 51;
      }
      else
      {
        v24 = 2;
        v25 = 5;
        *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 21) & 0x1F | ((unsigned int)v6 >> 8) & 0x20;
      }
      *(_BYTE *)(a2 + 85) = v24;
      *(_BYTE *)(a2 + 81) = v25;
LABEL_7:
      v10 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 121) = 7;
      v11 = ((_WORD)v6 << 11) & 0x800;
      v12 = v11 | ((_WORD)v6 << 8) & 0x400 | ((unsigned int)v6 >> 3) & 0x3FF;
      if ( (((_WORD)v6 << 11) & 0x800) != 0 )
        v12 = (unsigned __int16)v11 | ((_WORD)v6 << 8) & 0x400 | ((unsigned int)v6 >> 3) & 0x3FF | 0xFFFFF000;
      *(_QWORD *)(a2 + 136) = v10 + 4LL * v12 + 8;
      goto LABEL_10;
    case 0x34u:
      v45 = ((unsigned int)v6 >> 21) & 0x1F;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      v46 = ((unsigned int)v6 >> 11) & 3;
      switch ( v46 )
      {
        case 2u:
          v107 = ((unsigned int)v6 >> 3) & 0x20;
          if ( (v6 & 0x200) != 0 )
          {
            *(_WORD *)(a2 + 46) = v45;
            v8 = 32;
            *(_WORD *)(a2 + 24) = 32;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 86) = 51;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
          }
          else
          {
            *(_WORD *)(a2 + 46) = v45;
            *(_WORD *)(a2 + 24) = 33;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 86) = 51;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            if ( v107 )
              return 0;
            v8 = 33;
          }
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 2;
          *(_BYTE *)(a2 + 161) = 1;
          *(_BYTE *)(a2 + 165) = 7;
          *(_QWORD *)(a2 + 128) = (int)(v107 | (32 - (v6 & 0x1F)));
          *(_WORD *)(a2 + 166) = BYTE2(v6) & 0x1F;
          goto LABEL_11;
        case 3u:
          *(_WORD *)(a2 + 46) = v45;
          *(_WORD *)(a2 + 24) = 33;
          *(_BYTE *)(a2 + 41) = 1;
          *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 5) & 0x1F;
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 128) = (int)(32 - (v6 & 0x1F));
          *(_BYTE *)(a2 + 85) = 2;
          *(_BYTE *)(a2 + 121) = 5;
          *(_WORD *)(a2 + 166) = BYTE2(v6) & 0x1F;
          v8 = 33;
          *(_BYTE *)(a2 + 125) = 2;
          *(_BYTE *)(a2 + 161) = 1;
          *(_BYTE *)(a2 + 165) = 7;
          goto LABEL_11;
        case 1u:
          if ( (v6 & 0x400) == 0 )
          {
            v8 = 87;
            v112 = 31;
            v113 = WORD1(v6) & 0x1F;
            goto LABEL_327;
          }
          break;
        default:
          if ( (v6 & 0x400) == 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            v8 = ((v6 & 0x200) == 0) + 86;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 24) = ((v6 & 0x200) == 0) + 86;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_WORD *)(a2 + 86) = v45;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 126) = 51;
            *(_BYTE *)(a2 + 121) = 1;
            *(_BYTE *)(a2 + 125) = 7;
            goto LABEL_96;
          }
          break;
      }
      v8 = 86;
      v112 = 63;
      v113 = WORD1(v6) & 0x1F;
LABEL_327:
      *(_WORD *)(a2 + 46) = v113;
      *(_WORD *)(a2 + 86) = v45;
      *(_WORD *)(a2 + 24) = v8;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      v111 = v112 - (((unsigned int)v6 >> 5) & 0x1F | ((unsigned int)v6 >> 10) & 1);
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 121) = 5;
      goto LABEL_324;
    case 0x35u:
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      if ( (v6 & 0x800) != 0 )
      {
        if ( (v6 & 0x1000) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 29;
          v47 = ((unsigned int)v6 >> 17) & 0xF;
          if ( (v6 & 0x10000) != 0 )
            v47 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
          v48 = 2;
          *(_QWORD *)(a2 + 48) = v47;
          v8 = 29;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          v48 = 7;
          *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
          v8 = 28;
          *(_WORD *)(a2 + 24) = 28;
        }
        *(_BYTE *)(a2 + 45) = v48;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_QWORD *)(a2 + 88) = ~(unsigned __int8)((unsigned int)v6 >> 5) & 0x1F;
        *(_BYTE *)(a2 + 161) = 1;
        *(_QWORD *)(a2 + 128) = (int)(32 - (v6 & 0x1F));
        *(_BYTE *)(a2 + 165) = 7;
        *(_WORD *)(a2 + 166) = ((unsigned int)v6 >> 21) & 0x1F;
        goto LABEL_11;
      }
      v93 = v6 & 0x200;
      if ( (v6 & 0x1000) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 24) = v93 == 0 ? 29 : 27;
        v94 = ((unsigned int)v6 >> 17) & 0xF;
        if ( (v6 & 0x10000) != 0 )
          v94 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
        *(_QWORD *)(a2 + 48) = v94;
        v95 = 2;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
        v95 = 7;
        *(_WORD *)(a2 + 24) = v93 == 0 ? 28 : 26;
      }
      *(_BYTE *)(a2 + 45) = v95;
      *(_WORD *)(a2 + 86) = 51;
      *(_BYTE *)(a2 + 81) = 1;
      v96 = ((unsigned int)v6 >> 3) & 0x20;
      *(_BYTE *)(a2 + 85) = 7;
      if ( (v6 & 0x200) != 0 || !v96 )
      {
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_BYTE *)(a2 + 161) = 1;
        *(_BYTE *)(a2 + 165) = 7;
        *(_QWORD *)(a2 + 128) = (int)(v96 | (32 - (v6 & 0x1F)));
        *(_WORD *)(a2 + 166) = ((unsigned int)v6 >> 21) & 0x1F;
        v8 = *(unsigned __int16 *)(a2 + 24);
        goto LABEL_10;
      }
      return 0;
    case 0x36u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 5;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 5;
      *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_BYTE *)(a2 + 125) = 2;
      *(_BYTE *)(a2 + 161) = 1;
      *(_BYTE *)(a2 + 165) = 7;
      *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 5) & 0x1F | ((unsigned int)v6 >> 6) & 0x20;
      *(_QWORD *)(a2 + 128) = (int)(((unsigned int)v6 >> 7) & 0x20 | (32 - (v6 & 0x1F)));
      *(_WORD *)(a2 + 166) = BYTE2(v6) & 0x1F;
      goto LABEL_10;
    case 0x38u:
    case 0x39u:
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 9;
      v35 = ((_WORD)v6 << 8) & 0x400
          | ((unsigned int)v6 >> 3) & 0x3FF
          | ((_DWORD)v6 << 16) & 0x10000
          | ((unsigned int)v6 >> 5) & 0xF800;
      if ( (((_DWORD)v6 << 16) & 0x10000) != 0 )
        v35 |= 0xFFFE0000;
      *(_DWORD *)(a2 + 28) |= 0x20u;
      *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_QWORD *)(a2 + 56) = 4LL * v35;
      *(_BYTE *)(a2 + 72) = (((unsigned __int16)v6 >> 13 >> 1) | (4 * ((unsigned __int16)v6 >> 13)) & 4) + 32;
      if ( v7 != 56 )
      {
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 32;
        *(_BYTE *)(a2 + 85) = 7;
        *(_WORD *)(a2 + 126) = 31;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 7;
      }
      goto LABEL_10;
    case 0x3Au:
      switch ( (unsigned __int16)v6 >> 13 )
      {
        case 0:
        case 1:
          v67 = *(_QWORD *)(a2 + 8);
          *(_WORD *)(a2 + 24) = 8;
          v68 = ((_WORD)v6 << 8) & 0x400
              | ((unsigned int)v6 >> 3) & 0x3FF
              | ((_DWORD)v6 << 16) & 0x10000
              | ((unsigned int)v6 >> 5) & 0xF800;
          if ( (((_DWORD)v6 << 16) & 0x10000) != 0 )
            v68 |= 0xFFFE0000;
          v66 = v67 + 4LL * v68 + 8;
          v65 = ((unsigned int)v6 >> 21) & 0x1F;
          goto LABEL_155;
        case 2:
          if ( (v6 & 0x1000) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 11;
          *(_BYTE *)(a2 + 45) = 7;
          *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
          v8 = 11;
          goto LABEL_11;
        case 3:
          goto LABEL_10;
        case 4:
        case 5:
          v63 = *(_QWORD *)(a2 + 8);
          *(_WORD *)(a2 + 24) = 8;
          v64 = ((unsigned int)v6 >> 5) & 0xF800
              | ((unsigned int)v6 >> 5) & 0x1F0000
              | ((_WORD)v6 << 8) & 0x400
              | ((unsigned int)v6 >> 3) & 0x3FF
              | ((_DWORD)v6 << 21) & 0x200000;
          LOWORD(v65) = 2;
          if ( (((_DWORD)v6 << 21) & 0x200000) != 0 )
            v64 = ((unsigned int)v6 >> 5) & 0xF800
                | ((unsigned int)v6 >> 5) & 0x1F0000
                | ((_WORD)v6 << 8) & 0x400
                | ((unsigned int)v6 >> 3) & 0x3FF
                | ((_DWORD)v6 << 21) & 0x200000
                | 0xFFFFFFFFFFC00000LL;
          v66 = v63 + 4 * v64 + 8;
LABEL_155:
          *(_WORD *)(a2 + 86) = v65;
          v8 = 8;
          *(_BYTE *)(a2 + 41) = 7;
          *(_QWORD *)(a2 + 56) = v66;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          goto LABEL_11;
        case 6:
          v69 = ((unsigned int)v6 >> 21) & 0x1F;
          if ( (v6 & 0x1000) != 0 )
          {
            *(_WORD *)(a2 + 46) = v69;
            v70 = 2;
            *(_WORD *)(a2 + 24) = 14;
            *(_BYTE *)(a2 + 41) = 10;
LABEL_165:
            *(_BYTE *)(a2 + 45) = v70;
            v8 = 14;
          }
          else
          {
            *(_WORD *)(a2 + 46) = v69;
            *(_WORD *)(a2 + 24) = 13;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 73) = BYTE2(v6) & 0x1F;
            v8 = 13;
            *(_BYTE *)(a2 + 45) = 9;
          }
          break;
        case 7:
          if ( (v6 & 0x1000) == 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 2;
          *(_WORD *)(a2 + 24) = 14;
          v70 = 7;
          goto LABEL_165;
      }
      goto LABEL_11;
    case 0x3Cu:
      *(_BYTE *)(a2 + 41) = 1;
      v58 = 7;
      *(_WORD *)(a2 + 24) = 26;
      *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
      v8 = 26;
      goto LABEL_132;
    case 0x3Du:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 27;
      v57 = ((unsigned int)v6 >> 17) | 0xFFFFFFF0;
      if ( (v6 & 0x10000) == 0 )
        v57 = ((unsigned int)v6 >> 17) & 0xF;
      v58 = 2;
      *(_QWORD *)(a2 + 48) = v57;
      v8 = 27;
LABEL_132:
      *(_BYTE *)(a2 + 45) = v58;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 2;
      *(_BYTE *)(a2 + 161) = 1;
      *(_BYTE *)(a2 + 165) = 7;
      *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 7) & 0x20 | (32 - (((unsigned int)v6 >> 5) & 0x1F));
      *(_QWORD *)(a2 + 128) = v6 & 0x1F;
      *(_WORD *)(a2 + 166) = ((unsigned int)v6 >> 21) & 0x1F;
      *(_DWORD *)(a2 + 28) = (unsigned __int16)v6 >> 13;
      goto LABEL_11;
    case 0x3Eu:
      if ( (v6 & 0x8000) != 0 )
      {
        v59 = v6 & 0x1F;
        v60 = ((unsigned int)v6 >> 10) & 3;
        if ( v60 == 2 )
        {
          if ( (v6 & 0x6000) == 0 )
          {
            *(_WORD *)(a2 + 24) = 40;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 2;
            *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 6) & 0xF;
            v8 = 40;
            *(_WORD *)(a2 + 126) = v59;
            *(_BYTE *)(a2 + 121) = 1;
            *(_BYTE *)(a2 + 125) = 7;
            goto LABEL_11;
          }
        }
        else if ( v60 != 3 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          if ( v60 == 1 )
          {
            *(_WORD *)(a2 + 24) = 63;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
            v8 = 63;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 64;
            *(_BYTE *)(a2 + 45) = 7;
            *(_WORD *)(a2 + 46) = BYTE2(v6) & 0x1F;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 7;
            *(_WORD *)(a2 + 86) = ((unsigned int)v6 >> 21) & 0x1F;
            v8 = 64;
          }
          *(_WORD *)(a2 + 126) = v59;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 7;
          goto LABEL_11;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 42;
        *(_BYTE *)(a2 + 45) = 7;
        *(_WORD *)(a2 + 46) = ((unsigned int)v6 >> 21) & 0x1F;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = ((unsigned int)v6 >> 6) & 0xF;
        v8 = 42;
        *(_WORD *)(a2 + 126) = v59;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 7;
        goto LABEL_11;
      }
      *(_WORD *)(a2 + 24) = 75;
      v92 = WORD1(v6) & 0x1F;
      if ( v92 != (((unsigned int)v6 >> 21) & 0x1F) )
        return 0;
      *(_WORD *)(a2 + 46) = v92;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 86) = v6 & 0x1F;
      v8 = 75;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      goto LABEL_11;
  }
}

