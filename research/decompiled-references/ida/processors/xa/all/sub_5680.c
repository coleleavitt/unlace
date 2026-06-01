__int64 __fastcall sub_5680(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 next_byte; // bp
  unsigned __int8 v5; // r14
  __int16 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // al
  __int16 v12; // dx
  char v13; // dl
  __int16 v14; // ax
  __int16 v15; // bp
  char v16; // al
  int v17; // r12d
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r12d
  __int16 v22; // ax
  unsigned __int8 v23; // al
  __int16 v24; // cx
  __int16 v25; // dx
  unsigned __int8 v26; // al
  unsigned __int16 v27; // dx
  __int16 v28; // bp
  int v29; // eax
  int v30; // r12d
  int v31; // r12d
  __int64 v32; // rax
  __int16 v33; // ax
  bool v34; // r12
  __int16 v35; // dx
  int v36; // ebp
  unsigned __int8 v37; // al
  unsigned __int16 v38; // cx
  __int16 v39; // ax
  __int16 v40; // dx
  __int16 v41; // bp
  int v42; // r12d
  unsigned __int8 v43; // al
  char v44; // r12
  int v45; // ebp
  unsigned __int8 v46; // al
  int v47; // eax
  __int64 v48; // rdx
  bool v49; // cc
  __int64 v50; // rcx
  char v51; // r12
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  unsigned __int8 v56; // al
  int v57; // edx
  int v58; // r12d
  unsigned __int8 v59; // al
  int v60; // edx
  __int64 v61; // rcx
  unsigned __int8 v62; // al
  unsigned __int8 v63; // al
  unsigned __int16 v64; // r13
  unsigned __int8 v65; // r12
  __int16 v66; // r13
  char v67; // r15
  char v68; // bp
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  bool v73; // bp
  int v74; // r14d
  unsigned __int8 v75; // al
  char v76; // al
  __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned __int8 v79; // al
  __int16 v80; // dx
  char v81; // al
  int v82; // ebp
  unsigned __int8 v83; // al
  char v84; // al
  int v85; // r12d
  __int16 v86; // r13
  __int16 v87; // dx
  __int16 v88; // ax
  unsigned __int8 v89; // al
  char v90; // al
  __int64 v91; // rdx
  unsigned __int8 v92; // al
  __int64 v93; // rcx
  __int16 v94; // ax
  __int16 v95; // r12
  unsigned __int8 v96; // al
  __int64 v97; // rax
  int v98; // r13d
  unsigned __int8 v99; // al
  int v100; // edx
  __int64 v101; // rcx
  int v102; // ebp
  char v103; // al
  char v104; // cl
  __int64 v105; // rax
  unsigned __int8 v106; // al
  int v107; // ebp
  unsigned __int8 v108; // al
  int v109; // eax
  __int64 v110; // rdx
  unsigned __int8 v111; // al
  __int16 v112; // r12
  unsigned __int8 v113; // al
  char v114; // al
  __int64 v115; // rdx
  unsigned __int8 v116; // al
  bool v117; // di
  unsigned __int16 v118; // cx
  __int16 v119; // si
  __int64 v120; // rax
  bool v121; // r12
  __int16 v122; // ax
  __int16 v123; // dx
  unsigned __int8 v124; // al
  __int16 v125; // dx
  bool v126; // bp
  unsigned __int8 v127; // al
  __int16 v128; // dx
  bool v129; // bp
  unsigned __int8 v130; // al
  bool v131; // bp
  unsigned __int8 v132; // al
  __int16 v133; // dx
  char v134; // cl
  bool v135; // bp
  char v136; // dl
  char v137; // cl
  unsigned __int8 v138; // al
  unsigned __int8 v139; // al
  int v140; // r12d
  unsigned __int8 v141; // al
  int v142; // eax
  __int64 v143; // rdx
  char v144; // al
  unsigned __int8 v145; // dl
  int v146; // r12d
  unsigned __int8 v147; // al
  int v148; // edx
  __int16 v149; // ax
  unsigned __int64 v150; // rax
  __int64 v151; // rcx
  unsigned __int8 v152; // al
  __int64 v153; // rax
  unsigned __int8 v154; // al
  int v155; // r13d
  unsigned __int8 v156; // al
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  unsigned __int8 v160; // al
  unsigned __int8 v161; // al
  unsigned __int8 v162; // al
  unsigned __int8 v163; // al
  char v164; // al
  int v165; // r12d
  char v166; // [rsp+0h] [rbp-3Ch]

  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 24) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 125) = 0;
  if ( *(_DWORD *)(a1 + 120) )
    return 0;
  next_byte = insn_get_next_byte();
  v5 = next_byte & 0xF;
  v6 = next_byte >> 4;
  if ( next_byte > 0xBFu )
  {
    if ( v6 != 14 )
    {
      if ( v6 == 15 )
      {
        *(_WORD *)(a2 + 24) = asc_D160[next_byte & 0xF];
        if ( v5 != 15 )
        {
          v90 = insn_get_next_byte();
          v91 = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 45) = 9;
          *(_QWORD *)(a2 + 56) = (*(_QWORD *)(a2 + 8) + v91 + 2LL * v90) & 0xFFFFFFFFFFFFFFFELL;
          return v91;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      v16 = next_byte & 0xC;
      if ( v6 != 13 )
      {
        if ( v16 == 8 )
        {
          v31 = 1;
        }
        else if ( v16 == 12 )
        {
          v31 = 2;
        }
        else
        {
          if ( v16 == 4 )
          {
            switch ( v5 )
            {
              case 5u:
                *(_WORD *)(a2 + 24) = 24;
                v140 = (unsigned __int8)insn_get_next_byte();
                v141 = insn_get_next_byte();
                *(_BYTE *)(a2 + 41) = 7;
                *(_BYTE *)(a2 + 45) = 9;
                v142 = (v140 << 8) + v141;
                v143 = v142;
                if ( v142 > 0x7FFF )
                  v143 = v142 - 0x10000LL;
                *(_QWORD *)(a2 + 56) = (*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26) + 2 * v143)
                                     & 0xFFFFFFFFFFFFFFFELL;
                break;
              case 6u:
                v139 = insn_get_next_byte();
                if ( v139 <= 7u )
                {
                  *(_BYTE *)(a2 + 41) = 4;
                  *(_BYTE *)(a2 + 72) = v139 + 16;
                  result = *(unsigned __int16 *)(a2 + 26);
                  *(_WORD *)(a2 + 24) = 24;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 2;
                  *(_QWORD *)(a2 + 56) = 0;
                  return result;
                }
                return 0;
              case 4u:
                *(_BYTE *)(a2 + 41) = 6;
                *(_WORD *)(a2 + 24) = 33;
                *(_BYTE *)(a2 + 45) = 9;
                v30 = (unsigned __int8)insn_get_next_byte();
                *(_QWORD *)(a2 + 56) = (v30 << 8) + (unsigned __int8)insn_get_next_byte();
                *(_QWORD *)(a2 + 64) = (unsigned __int8)insn_get_next_byte();
                break;
              default:
                return 0;
            }
          }
          v31 = 0;
        }
        if ( !*(_WORD *)(a2 + 24) )
        {
          *(_WORD *)(a2 + 24) = *((_WORD *)&qword_D118 + (next_byte & 3));
          v124 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v31;
          v125 = v124 >> 4;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v31;
          *(_WORD *)(a2 + 86) = 16 * (v31 != 0) + (v124 & 0xF);
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 46) = 16 * (v31 != 0) + v125;
          return result;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v16 == 8 )
      {
        v21 = 1;
      }
      else
      {
        if ( v16 != 12 )
        {
          if ( v16 == 4 )
          {
            if ( v5 != 6 )
            {
              if ( v5 > 6u )
              {
                if ( v5 != 7 )
                  return 0;
              }
              else if ( v5 == 4 )
              {
                *(_BYTE *)(a2 + 41) = 6;
                *(_WORD *)(a2 + 24) = 34;
                *(_BYTE *)(a2 + 45) = 9;
                v146 = (unsigned __int8)insn_get_next_byte();
                *(_QWORD *)(a2 + 56) = (v146 << 8) + (unsigned __int8)insn_get_next_byte();
                *(_QWORD *)(a2 + 64) = (unsigned __int8)insn_get_next_byte();
              }
              else
              {
                if ( v5 != 5 )
                  return 0;
                *(_WORD *)(a2 + 24) = 37;
                v17 = (unsigned __int8)insn_get_next_byte();
                v18 = insn_get_next_byte();
                *(_BYTE *)(a2 + 41) = 7;
                *(_BYTE *)(a2 + 45) = 9;
                v19 = (v17 << 8) + v18;
                v20 = v19;
                if ( v19 > 0x7FFF )
                  v20 = v19 - 0x10000LL;
                *(_QWORD *)(a2 + 56) = (*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26) + 2 * v20)
                                     & 0xFFFFFFFFFFFFFFFELL;
              }
              goto LABEL_25;
            }
            *(_WORD *)(a2 + 24) = 37;
            v144 = insn_get_next_byte();
            v145 = v144 & 0xF8;
            if ( (v144 & 0xF8) == 0x60 )
            {
              *(_BYTE *)(a2 + 41) = 3;
              *(_BYTE *)(a2 + 45) = 1;
              *(_WORD *)(a2 + 46) = 5;
              *(_BYTE *)(a2 + 72) = (v144 & 7) + 16;
            }
            else
            {
              if ( (v144 & 0xF8u) > 0x60 )
              {
                if ( v145 == 0x80 )
                {
                  if ( (v144 & 7) != 0 )
                    return 0;
                  *(_WORD *)(a2 + 24) = 59;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( v145 == 0x90 )
                {
                  if ( (v144 & 7) != 0 )
                    return 0;
                  *(_WORD *)(a2 + 24) = 60;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( v145 != 112 )
                  return 0;
                *(_BYTE *)(a2 + 41) = 3;
                *(_BYTE *)(a2 + 45) = 1;
                *(_WORD *)(a2 + 46) = 2;
                *(_BYTE *)(a2 + 72) = (v144 & 7) + 16;
                goto LABEL_25;
              }
              if ( v145 == 56 )
              {
LABEL_262:
                *(_WORD *)(a2 + 24) = 69;
                *(_BYTE *)(a2 + 41) = 5;
                *(_BYTE *)(a2 + 45) = 0;
                *(_QWORD *)(a2 + 48) = v144 & 0xF;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( v145 <= 0x38u )
              {
                if ( v145 == 16 )
                {
                  if ( (v144 & 7) != 0 )
                    return 0;
                  *(_WORD *)(a2 + 24) = 58;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( v145 != 48 )
                  return 0;
                goto LABEL_262;
              }
              if ( v145 != 64 || (v144 & 7) != 6 )
                return 0;
              *(_BYTE *)(a2 + 41) = 3;
              *(_BYTE *)(a2 + 45) = 1;
              *(_WORD *)(a2 + 46) = 0;
              *(_BYTE *)(a2 + 72) = 16;
            }
          }
LABEL_25:
          v21 = 0;
          goto LABEL_26;
        }
        v21 = 2;
      }
LABEL_26:
      if ( !*(_WORD *)(a2 + 24) )
      {
        v22 = *((_WORD *)&qword_D118 + (next_byte & 3));
        *(_WORD *)(a2 + 24) = v22;
        if ( v22 == 51 )
        {
          LOBYTE(v21) = (next_byte & 8) != 0;
          *(_WORD *)(a2 + 24) = ((next_byte & 4) != 0) + 61;
          v23 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 1;
          v24 = (unsigned __int8)v21;
          *(_BYTE *)(a2 + 45) = v21;
          v25 = v23 >> 4;
        }
        else
        {
          v23 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 1;
          v25 = v23 >> 4;
          if ( v21 == 2 )
          {
            *(_BYTE *)(a2 + 45) = 2;
            *(_QWORD *)(a2 + 88) = v23 & 0x1F;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 46) = (v25 & 0xE) + 16;
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 2;
            return result;
          }
          *(_BYTE *)(a2 + 45) = v21;
          v24 = v21;
        }
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v23 & 0xF;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 46) = 16 * v24 + v25;
        *(_BYTE *)(a2 + 85) = v21;
        return result;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    v63 = insn_get_next_byte();
    v64 = v63;
    v65 = v63;
    switch ( v5 )
    {
      case 0u:
        *(_WORD *)(a2 + 24) = 48;
        goto LABEL_93;
      case 1u:
        *(_WORD *)(a2 + 24) = 31;
LABEL_93:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 46) = v63 >> 4;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 0;
        *(_WORD *)(a2 + 86) = v63 & 0xF;
        return *(unsigned __int16 *)(a2 + 26);
      case 2u:
      case 0xAu:
        v73 = (next_byte & 8) != 0;
        v74 = (v63 << 8) & 0x700;
        if ( (v63 & 8) != 0 )
        {
          *(_WORD *)(a2 + 24) = 32;
          v163 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 45) = v73;
          *(_QWORD *)(a2 + 56) = v74 + v163;
          v164 = insn_get_next_byte();
          v77 = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 7;
          *(_BYTE *)(a2 + 85) = 9;
          *(_QWORD *)(a2 + 96) = (2LL * v164 + *(_QWORD *)(a2 + 8) + v77) & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 25;
          *(_BYTE *)(a2 + 45) = v73;
          *(_WORD *)(a2 + 46) = (v63 >> 4) + 16 * v73;
          v75 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = v73;
          *(_QWORD *)(a2 + 96) = v74 + v75;
          v76 = insn_get_next_byte();
          v77 = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 121) = 7;
          *(_BYTE *)(a2 + 125) = 9;
          *(_QWORD *)(a2 + 136) = (*(_QWORD *)(a2 + 8) + v77 + 2LL * v76) & 0xFFFFFFFFFFFFFFFELL;
        }
        return v77;
      case 3u:
      case 0xBu:
        if ( (v63 & 7) != 0 )
          return 0;
        v66 = v63 >> 4;
        *(_WORD *)(a2 + 24) = 25;
        v67 = next_byte & 8;
        v68 = (unsigned __int8)(next_byte & 8) >> 3;
        v69 = (char)insn_get_next_byte();
        if ( (v65 & 8) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v68;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 72) = v66 + 16;
          *(_QWORD *)(a2 + 56) = 0;
          if ( !v67 )
          {
LABEL_87:
            v70 = (unsigned __int8)insn_get_next_byte();
            goto LABEL_88;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v68;
          if ( !v67 )
          {
            *(_WORD *)(a2 + 46) = v66;
            goto LABEL_87;
          }
          *(_WORD *)(a2 + 46) = v66 + 16;
        }
        v165 = (unsigned __int8)insn_get_next_byte();
        v70 = (v165 << 8) + (unsigned __int8)insn_get_next_byte();
LABEL_88:
        v71 = *(unsigned __int16 *)(a2 + 26);
        *(_QWORD *)(a2 + 88) = v70;
        *(_BYTE *)(a2 + 81) = 5;
        result = v71;
        v72 = *(_QWORD *)(a2 + 8) + v71;
        *(_BYTE *)(a2 + 85) = v68;
        *(_BYTE *)(a2 + 121) = 7;
        *(_BYTE *)(a2 + 125) = 9;
        *(_QWORD *)(a2 + 136) = (v72 + 2 * v69) & 0xFFFFFFFFFFFFFFFELL;
        return result;
      case 4u:
        *(_WORD *)(a2 + 24) = 48;
        goto LABEL_116;
      case 5u:
        *(_WORD *)(a2 + 24) = 31;
        goto LABEL_116;
      case 6u:
        *(_WORD *)(a2 + 24) = 47;
        goto LABEL_116;
      case 7u:
        *(_WORD *)(a2 + 24) = 30;
LABEL_116:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 46) = (v63 >> 4) + 16;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = (v63 & 0xF) + 16;
        return *(unsigned __int16 *)(a2 + 26);
      case 8u:
        v84 = v63 & 0xF;
        if ( (v64 & 0xF) == 3 )
        {
          v86 = v64 >> 4;
          v87 = 31;
          LOBYTE(v85) = 1;
          v88 = 16;
        }
        else
        {
          v85 = v65 & 0xC;
          if ( v85 )
          {
            if ( v84 != 11 )
              return 0;
            v86 = v64 >> 4;
            v87 = 30;
            LOBYTE(v85) = 1;
            v88 = 16;
          }
          else if ( v84 )
          {
            if ( v84 != 1 )
              return 0;
            v86 = v64 >> 4;
            v87 = 31;
            v88 = 0;
          }
          else
          {
            v86 = v64 >> 4;
            v87 = 48;
            v88 = 0;
          }
        }
        *(_WORD *)(a2 + 24) = v87;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = v85;
        *(_WORD *)(a2 + 46) = v88 + v86;
        v89 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 88) = v89;
        return *(unsigned __int16 *)(a2 + 26);
      case 9u:
        v79 = v63 & 0xF;
        if ( (v64 & 0xF) == 8 )
        {
          v80 = 47;
          v81 = 1;
        }
        else if ( v79 > 8u )
        {
          if ( v79 != 9 || (v65 & 0x10) != 0 )
            return 0;
          v80 = 30;
          v81 = 2;
        }
        else if ( v79 )
        {
          if ( v79 != 1 || (v65 & 0x10) != 0 )
            return 0;
          v80 = 31;
          v81 = 2;
        }
        else
        {
          v80 = 48;
          v81 = 1;
        }
        *(_BYTE *)(a2 + 45) = v81;
        *(_WORD *)(a2 + 24) = v80;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (v64 >> 4) + 16;
        v82 = (unsigned __int8)insn_get_next_byte();
        v83 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 88) = (v82 << 8) + v83;
        return *(unsigned __int16 *)(a2 + 26);
      case 0xCu:
        *(_WORD *)(a2 + 24) = 40;
        goto LABEL_98;
      case 0xDu:
        if ( (v63 & 0x10) != 0 )
          return 0;
        *(_WORD *)(a2 + 24) = 31;
        goto LABEL_96;
      case 0xEu:
        *(_WORD *)(a2 + 24) = 39;
LABEL_98:
        v78 = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 7;
        *(_BYTE *)(a2 + 45) = 9;
        *(_QWORD *)(a2 + 56) = (*(_QWORD *)(a2 + 8) + v78 + 2LL * (char)v63) & 0xFFFFFFFFFFFFFFFELL;
        return v78;
      case 0xFu:
        if ( (v63 & 0x10) != 0 )
          return 0;
        *(_WORD *)(a2 + 24) = 30;
LABEL_96:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = (v63 >> 4) + 16;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = (v63 & 0xF) + 16;
        return *(unsigned __int16 *)(a2 + 26);
    }
  }
  v7 = -130;
  v8 = next_byte & 7;
  if ( _bittest64(&v7, v8) )
  {
    v9 = next_byte & 8;
    v10 = v9 >> 3;
    if ( v6 == 9 )
    {
      v92 = insn_get_next_byte();
      v93 = v92 & 0xF;
      v94 = v92 >> 4;
      v95 = v94;
      *(_WORD *)(a2 + 24) = *((_WORD *)qword_D180 + v93);
      switch ( v8 )
      {
        case 2uLL:
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 45) = v10;
          *(_QWORD *)(a2 + 56) = 0;
          *(_BYTE *)(a2 + 72) = (v94 & 7) + 16;
          if ( v9 )
            goto LABEL_129;
          goto LABEL_124;
        case 3uLL:
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = 4;
          *(_BYTE *)(a2 + 72) = (v94 & 7) + 16;
          if ( !v9 )
            goto LABEL_124;
          goto LABEL_129;
        case 4uLL:
          v103 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = 6;
          *(_BYTE *)(a2 + 72) = (v95 & 7) + 16;
          *(_QWORD *)(a2 + 56) = v103;
          if ( !v9 )
            goto LABEL_124;
          goto LABEL_129;
        case 5uLL:
          v98 = (unsigned __int8)insn_get_next_byte();
          v99 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          v100 = (v98 << 8) + v99;
          *(_WORD *)(a2 + 46) = 7;
          v101 = v100;
          if ( v100 > 64768 )
            v101 = v100 - 0x10000LL;
          *(_BYTE *)(a2 + 72) = (v95 & 7) + 16;
          *(_QWORD *)(a2 + 56) = v101;
          if ( v9 )
            goto LABEL_129;
          goto LABEL_124;
        case 6uLL:
          v96 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 45) = v10;
          *(_QWORD *)(a2 + 56) = v96 + ((v95 << 8) & 0x700);
          if ( v9 )
            goto LABEL_129;
LABEL_124:
          v97 = (unsigned __int8)insn_get_next_byte();
          break;
        default:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v10;
          if ( v9 )
          {
            *(_WORD *)(a2 + 46) = v94 + 16;
LABEL_129:
            v102 = (unsigned __int8)insn_get_next_byte();
            v97 = (v102 << 8) + (unsigned __int8)insn_get_next_byte();
          }
          else
          {
            *(_WORD *)(a2 + 46) = v94;
            v97 = (unsigned __int8)insn_get_next_byte();
          }
          break;
      }
      *(_QWORD *)(a2 + 88) = v97;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = v10;
    }
    else if ( (unsigned __int16)(v6 - 10) > 1u )
    {
      *(_WORD *)(a2 + 24) = *((_WORD *)qword_D180 + (v6 & 0xF));
      v38 = (unsigned __int8)insn_get_next_byte();
      v39 = 16 * v10;
      v40 = v38 >> 4;
      v41 = (v38 >> 4) + v39;
      switch ( v8 )
      {
        case 2uLL:
          v54 = (v38 & 7) + 16;
          if ( (v38 & 8) != 0 )
          {
            *(_BYTE *)(a2 + 72) = v54;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 4;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = 2;
            *(_QWORD *)(a2 + 56) = 0;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = v10;
            *(_WORD *)(a2 + 86) = v41;
          }
          else
          {
            *(_BYTE *)(a2 + 112) = v54;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = v41;
            *(_BYTE *)(a2 + 81) = 4;
            *(_BYTE *)(a2 + 85) = v10;
            *(_WORD *)(a2 + 86) = 2;
            *(_QWORD *)(a2 + 96) = 0;
          }
          return result;
        case 3uLL:
          v53 = (v38 & 7) + 16;
          if ( (v38 & 8) != 0 )
          {
            *(_BYTE *)(a2 + 72) = v53;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = 4;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = v10;
            *(_WORD *)(a2 + 86) = v41;
          }
          else
          {
            *(_BYTE *)(a2 + 112) = v53;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = v41;
            *(_BYTE *)(a2 + 81) = 3;
            *(_BYTE *)(a2 + 85) = v10;
            *(_WORD *)(a2 + 86) = 4;
          }
          return result;
        case 4uLL:
          v51 = (v38 & 7) + 16;
          if ( (v38 & 8) == 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = v41;
            v52 = insn_get_next_byte();
            *(_BYTE *)(a2 + 81) = 4;
            *(_BYTE *)(a2 + 85) = v10;
            goto LABEL_69;
          }
          LOBYTE(v153) = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          v153 = (char)v153;
          *(_WORD *)(a2 + 46) = 6;
          *(_BYTE *)(a2 + 72) = v51;
          goto LABEL_231;
        case 5uLL:
          v44 = v38 & 7;
          if ( (v38 & 8) != 0 )
          {
            v155 = (unsigned __int8)insn_get_next_byte();
            v156 = insn_get_next_byte();
            *(_BYTE *)(a2 + 41) = 4;
            *(_BYTE *)(a2 + 45) = v10;
            v157 = (v155 << 8) + v156;
            *(_BYTE *)(a2 + 81) = 1;
            v158 = v157;
            v49 = v157 <= 64768;
            *(_BYTE *)(a2 + 85) = v10;
            v159 = v157 - 0x10000LL;
            *(_WORD *)(a2 + 46) = 7;
            result = *(unsigned __int16 *)(a2 + 26);
            if ( !v49 )
              v158 = v159;
            *(_WORD *)(a2 + 86) = v41;
            *(_BYTE *)(a2 + 72) = v44 + 16;
            *(_QWORD *)(a2 + 56) = v158;
          }
          else
          {
            *(_WORD *)(a2 + 46) = v40 + 16 * v10;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v10;
            v45 = (unsigned __int8)insn_get_next_byte();
            v46 = insn_get_next_byte();
            *(_BYTE *)(a2 + 81) = 4;
            *(_BYTE *)(a2 + 85) = v10;
            v47 = (v45 << 8) + v46;
            v48 = v47;
            v49 = v47 <= 64768;
            v50 = v47 - 0x10000LL;
            *(_WORD *)(a2 + 86) = 7;
            result = *(unsigned __int16 *)(a2 + 26);
            if ( !v49 )
              v48 = v50;
            *(_BYTE *)(a2 + 112) = v44 + 16;
            *(_QWORD *)(a2 + 96) = v48;
          }
          return result;
        case 6uLL:
          v42 = (v38 << 8) & 0x700;
          if ( (v38 & 8) == 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v10;
            *(_WORD *)(a2 + 46) = v40 + 16 * v10;
            v43 = insn_get_next_byte();
            *(_BYTE *)(a2 + 81) = 2;
            *(_BYTE *)(a2 + 85) = v10;
            goto LABEL_62;
          }
          v154 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 45) = v10;
          v153 = v42 + v154;
LABEL_231:
          *(_QWORD *)(a2 + 56) = v153;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v10;
          *(_WORD *)(a2 + 86) = v41;
          break;
        default:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 86) = (v38 & 0xF) + v39;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 46) = v41;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v10;
          return result;
      }
    }
    else
    {
      v11 = insn_get_next_byte();
      v12 = 3;
      if ( v6 != 10 )
        v12 = 45;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = v10;
      *(_WORD *)(a2 + 24) = v12;
      v13 = v11 & 0xF;
      if ( (v11 & 8) != 0 )
        v13 = v11 | 0xF0;
      v14 = v11 >> 4;
      v15 = v14;
      *(_QWORD *)(a2 + 88) = v13;
      switch ( v8 )
      {
        case 2uLL:
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 72) = (v14 & 7) + 16;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_QWORD *)(a2 + 56) = 0;
          break;
        case 3uLL:
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = 4;
          *(_BYTE *)(a2 + 72) = (v14 & 7) + 16;
          result = *(unsigned __int16 *)(a2 + 26);
          break;
        case 4uLL:
          v55 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          *(_QWORD *)(a2 + 56) = v55;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 46) = 6;
          *(_BYTE *)(a2 + 72) = (v15 & 7) + 16;
          break;
        case 5uLL:
          v58 = (unsigned __int8)insn_get_next_byte();
          v59 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v10;
          v60 = (v58 << 8) + v59;
          *(_WORD *)(a2 + 46) = 7;
          v61 = v60;
          if ( v60 > 64768 )
            v61 = v60 - 0x10000LL;
          *(_BYTE *)(a2 + 72) = (v15 & 7) + 16;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_QWORD *)(a2 + 56) = v61;
          break;
        case 6uLL:
          v56 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 45) = v10;
          v57 = v56;
          goto LABEL_76;
        default:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v10;
          *(_WORD *)(a2 + 46) = v14 + 16 * v10;
          result = *(unsigned __int16 *)(a2 + 26);
          break;
      }
    }
    return result;
  }
  if ( next_byte > 0x88u )
  {
    if ( next_byte <= 0x9Fu )
    {
      if ( next_byte > 0x8Eu )
      {
        switch ( next_byte )
        {
          case 0x8F:
            goto LABEL_163;
          case 0x90:
          case 0x98:
            v116 = insn_get_next_byte();
            v117 = v5 == 8;
            v118 = v116;
            switch ( v116 & 0xF )
            {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
                if ( (v116 & 0x80u) != 0 )
                  return 0;
                *(_WORD *)(a2 + 24) = 43;
                *(_BYTE *)(a2 + 41) = 3;
                *(_BYTE *)(a2 + 45) = v117;
                *(_WORD *)(a2 + 46) = 4;
                *(_BYTE *)(a2 + 72) = (v116 >> 4) + 16;
                *(_BYTE *)(a2 + 81) = 3;
                *(_BYTE *)(a2 + 85) = v117;
                goto LABEL_156;
              case 8:
              case 9:
              case 0xA:
              case 0xB:
                *(_BYTE *)(a2 + 41) = 1;
                v119 = *((_WORD *)&qword_D120 + (v116 & 3));
                *(_BYTE *)(a2 + 45) = v117;
                *(_WORD *)(a2 + 24) = v119;
                *(_WORD *)(a2 + 46) = 16 * v117 + (v116 >> 4);
                if ( next_byte == 0x90 || v119 != 29 )
                  return *(unsigned __int16 *)(a2 + 26);
                return 0;
              case 0xC:
                if ( (v116 & 0xF0) != 0xC0 && v5 )
                  return 0;
                *(_WORD *)(a2 + 24) = 44;
                result = *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 0;
                *(_WORD *)(a2 + 46) = 32;
                *(_BYTE *)(a2 + 81) = 3;
                *(_BYTE *)(a2 + 85) = 0;
                *(_WORD *)(a2 + 86) = 1;
                *(_BYTE *)(a2 + 112) = 16;
                return result;
              case 0xD:
                return 0;
              case 0xE:
                if ( (v116 & 0xF0) != 0xC0 && v5 )
                  return 0;
                *(_WORD *)(a2 + 24) = 44;
                result = *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 0;
                *(_WORD *)(a2 + 46) = 32;
                *(_BYTE *)(a2 + 81) = 3;
                *(_BYTE *)(a2 + 85) = 0;
                *(_WORD *)(a2 + 86) = 0;
                *(_BYTE *)(a2 + 112) = 16;
                return result;
              case 0xF:
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 24) = 43;
                result = *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 45) = 1;
                v123 = (v118 >> 4) + 16;
                if ( next_byte == 0x90 )
                {
                  *(_WORD *)(a2 + 46) = v123;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_BYTE *)(a2 + 85) = 1;
                  *(_WORD *)(a2 + 86) = 36;
                }
                else
                {
                  *(_WORD *)(a2 + 46) = 36;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_BYTE *)(a2 + 85) = 1;
                  *(_WORD *)(a2 + 86) = v123;
                }
                return result;
            }
          case 0x97:
          case 0x9F:
            v111 = insn_get_next_byte();
            v112 = v111;
            if ( (v111 & 0x88) == 0 )
            {
              *(_WORD *)(a2 + 24) = 43;
              v147 = insn_get_next_byte();
              *(_BYTE *)(a2 + 41) = 2;
              v148 = v147;
              v149 = v112;
              *(_BYTE *)(a2 + 45) = v5 != 7;
              v42 = (v112 << 8) & 0x700;
              *(_QWORD *)(a2 + 56) = v148 + ((16 * v149) & 0x700);
              v43 = insn_get_next_byte();
              *(_BYTE *)(a2 + 81) = 2;
              *(_BYTE *)(a2 + 85) = v5 != 7;
LABEL_62:
              *(_QWORD *)(a2 + 96) = v42 + v43;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( next_byte == 0x97 && ((v111 & 0xDC) == 0x80 || (v111 & 0xFC) == 0xC0) )
            {
              *(_WORD *)(a2 + 24) = asc_D128[(v111 >> 5) & 3];
              v113 = insn_get_next_byte();
              *(_BYTE *)(a2 + 41) = 8;
              *(_BYTE *)(a2 + 45) = 1;
              *(_QWORD *)(a2 + 56) = v113 + ((v112 << 8) & 0x300);
              goto LABEL_152;
            }
            break;
          default:
            return 0;
        }
      }
    }
    else
    {
      v32 = 1LL << (next_byte + 96);
      if ( (v32 & 0x81810000) != 0 )
      {
        *(_WORD *)(a2 + 24) = 63 - (((_BYTE)v8 == 0) - 1);
        v126 = (next_byte & 8) != 0;
        v127 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = v126;
        v128 = v127 >> 4;
        *(_QWORD *)(a2 + 88) = v127 & 0xF;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 81) = 5;
        *(_WORD *)(a2 + 46) = 16 * v126 + v128;
        *(_BYTE *)(a2 + 85) = v126;
        return result;
      }
      if ( (v32 & 0x8080) != 0 )
      {
        *(_WORD *)(a2 + 24) = 46;
        v131 = v5 != 7;
        v132 = insn_get_next_byte();
        v133 = 16 * (v5 != 7) + (v132 >> 4);
        v134 = (v132 & 7) + 16;
        if ( (v132 & 8) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 4;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 45) = v131;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 72) = v134;
          *(_QWORD *)(a2 + 56) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v131;
          *(_WORD *)(a2 + 86) = v133;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 45) = v131;
          *(_WORD *)(a2 + 46) = v133;
          *(_BYTE *)(a2 + 81) = 4;
          *(_BYTE *)(a2 + 85) = v131;
          *(_WORD *)(a2 + 86) = 2;
          *(_BYTE *)(a2 + 112) = v134;
          *(_QWORD *)(a2 + 96) = 0;
        }
        return result;
      }
      if ( (v32 & 0x101) != 0 )
      {
        v33 = insn_get_next_byte();
        v34 = v5 == 8;
        v35 = (unsigned __int8)v33 >> 4;
        v36 = (v33 << 8) & 0x700;
        if ( (v33 & 8) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 70;
          *(_BYTE *)(a2 + 45) = v34;
          *(_WORD *)(a2 + 46) = v35 + 16 * v34;
        }
        else
        {
          *(_WORD *)(a2 + 24) = 43;
          if ( (v33 & 0x80u) != 0 )
          {
            v166 = (unsigned __int8)v33 >> 4;
            v162 = insn_get_next_byte();
            *(_BYTE *)(a2 + 41) = 2;
            *(_BYTE *)(a2 + 45) = v34;
            *(_BYTE *)(a2 + 81) = 4;
            *(_BYTE *)(a2 + 85) = v34;
            *(_QWORD *)(a2 + 56) = v36 + v162;
            *(_BYTE *)(a2 + 112) = (v166 & 7) + 16;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 86) = 2;
            *(_QWORD *)(a2 + 96) = 0;
            return result;
          }
          *(_BYTE *)(a2 + 41) = 4;
          *(_BYTE *)(a2 + 45) = v34;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 72) = v35 + 16;
          *(_QWORD *)(a2 + 56) = 0;
        }
        v37 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 2;
        *(_BYTE *)(a2 + 85) = v34;
        *(_QWORD *)(a2 + 96) = v36 + v37;
        return *(unsigned __int16 *)(a2 + 26);
      }
    }
    return 0;
  }
  if ( next_byte <= 0x6Eu )
  {
    if ( next_byte <= 0x27u )
    {
      if ( ((1LL << next_byte) & 0x8080808080LL) == 0 )
      {
        if ( next_byte == 8 )
        {
          v26 = insn_get_next_byte();
          v27 = v26;
          v28 = v26;
          v29 = v26 & 0xFC;
          if ( (_BYTE)v29 == 48 )
          {
            *(_WORD *)(a2 + 24) = 43;
            v161 = insn_get_next_byte();
            *(_BYTE *)(a2 + 41) = 8;
            *(_BYTE *)(a2 + 45) = 1;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 34;
            *(_QWORD *)(a2 + 56) = v161 + ((v28 << 8) & 0x300);
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (unsigned __int8)v29 > 0x30u )
          {
            v150 = (unsigned int)(v29 - 64);
            if ( (unsigned __int8)v150 <= 0x30u )
            {
              v151 = 0x1000100010001LL;
              if ( _bittest64(&v151, v150) )
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = 34;
                *(_WORD *)(a2 + 24) = *((_WORD *)qword_D130 + ((v27 >> 4) & 0xF));
                v152 = insn_get_next_byte();
                *(_BYTE *)(a2 + 85) = 1;
                *(_QWORD *)(a2 + 96) = v152 + ((v28 << 8) & 0x300);
                result = *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 81) = ((v28 & 0x10) != 0) + 8;
                return result;
              }
            }
          }
          else
          {
            if ( (_BYTE)v29 == 32 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 24) = 43;
              *(_WORD *)(a2 + 46) = 34;
              v160 = insn_get_next_byte();
              *(_BYTE *)(a2 + 81) = 8;
              *(_BYTE *)(a2 + 85) = 1;
              *(_QWORD *)(a2 + 96) = v160 + ((v28 << 8) & 0x300);
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( (unsigned __int8)v29 <= 0x20u && (v27 & 0xEC) == 0 )
            {
              *(_WORD *)(a2 + 24) = *((_WORD *)qword_D130 + ((v27 >> 4) & 0xF));
              v62 = insn_get_next_byte();
              *(_BYTE *)(a2 + 41) = 8;
              *(_BYTE *)(a2 + 45) = 1;
              *(_QWORD *)(a2 + 56) = v62 + ((v28 << 8) & 0x300);
              return *(unsigned __int16 *)(a2 + 26);
            }
          }
        }
        else if ( ((1LL << next_byte) & 1) != 0 )
        {
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 24) = 50;
          return result;
        }
        return 0;
      }
      v135 = (next_byte & 8) != 0;
      v137 = insn_get_next_byte();
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = a8967[v6 & 0xF];
LABEL_201:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v135;
      *(_WORD *)(a2 + 46) = 8;
      *(_BYTE *)(a2 + 72) = v137;
      return result;
    }
    v104 = next_byte - 47;
    if ( (unsigned __int8)(next_byte - 47) > 0x39u )
      return 0;
    v105 = 1LL << v104;
    if ( ((1LL << v104) & 0x101010101010101LL) == 0 )
    {
      if ( (v105 & 0x202020200000000LL) != 0 )
      {
        *(_WORD *)(a2 + 24) = 70;
        v129 = v5 == 8;
        v130 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = v5 == 8;
        *(_WORD *)(a2 + 46) = 16 * (v5 == 8) + (v130 >> 4);
        if ( v6 == 6 )
        {
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v129;
          *(_WORD *)(a2 + 86) = 16 * (v5 == 8) + (v130 & 0xF);
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (v130 & 8) == 0 )
        {
          *(_BYTE *)(a2 + 81) = 4;
          *(_BYTE *)(a2 + 85) = v129;
          *(_BYTE *)(a2 + 112) = (v130 & 7) + 16;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 86) = 2;
          *(_QWORD *)(a2 + 96) = 0;
          return result;
        }
        return 0;
      }
      if ( (v105 & 0x2020000) == 0 )
        return 0;
      *(_WORD *)(a2 + 24) = 41;
      v106 = insn_get_next_byte();
      if ( (v106 & 0x88) != 0 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v51 = (v106 & 7) + 16;
      *(_WORD *)(a2 + 46) = (v106 >> 4) + 16;
      if ( next_byte != 64 )
      {
        v107 = (unsigned __int8)insn_get_next_byte();
        v108 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 4;
        *(_BYTE *)(a2 + 85) = 1;
        v109 = (v107 << 8) + v108;
        *(_WORD *)(a2 + 86) = 7;
        v110 = v109;
        v49 = v109 <= 64768;
        *(_BYTE *)(a2 + 112) = v51;
        result = *(unsigned __int16 *)(a2 + 26);
        if ( !v49 )
          v110 -= 0x10000;
        *(_QWORD *)(a2 + 96) = v110;
        return result;
      }
      v52 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 1;
LABEL_69:
      *(_BYTE *)(a2 + 112) = v51;
      *(_WORD *)(a2 + 86) = 6;
      *(_QWORD *)(a2 + 96) = v52;
      return *(unsigned __int16 *)(a2 + 26);
    }
LABEL_195:
    v135 = (next_byte & 8) != 0;
    v136 = insn_get_next_byte();
    v137 = v136;
    *(_WORD *)(a2 + 24) = a8967[v6 & 3];
    result = *(unsigned __int16 *)(a2 + 26);
    if ( (v6 & 4) != 0 )
    {
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v135;
      *(_WORD *)(a2 + 46) = 9;
      *(_BYTE *)(a2 + 72) = v136;
      return result;
    }
    goto LABEL_201;
  }
  v120 = 1LL << (next_byte - 111);
  if ( (v120 & 0x10101) != 0 )
    goto LABEL_195;
  if ( (v120 & 0x2020000) != 0 )
  {
    v116 = insn_get_next_byte();
    if ( (v116 & 8) != 0 )
      return 0;
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 24) = 44;
    *(_BYTE *)(a2 + 45) = v5 == 8;
    *(_BYTE *)(a2 + 81) = 3;
    *(_BYTE *)(a2 + 85) = v5 == 8;
    *(_WORD *)(a2 + 46) = 16 * (v5 == 8) + (v116 >> 4);
LABEL_156:
    *(_WORD *)(a2 + 86) = 4;
    *(_BYTE *)(a2 + 112) = (v116 & 7) + 16;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( next_byte != 0x87 )
    return 0;
LABEL_163:
  v121 = v5 != 7;
  v122 = (unsigned __int8)insn_get_next_byte();
  v15 = v122;
  if ( (v122 & 8) == 0 )
  {
    if ( (unsigned __int8)v122 <= 0x3Fu )
    {
      *(_WORD *)(a2 + 24) = a8967[(((unsigned __int8)v122 >> 4) ^ 3) & 0xF];
      v138 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = v121;
      v57 = v138;
LABEL_76:
      *(_QWORD *)(a2 + 56) = v57 + ((v15 << 8) & 0x700);
      return *(unsigned __int16 *)(a2 + 26);
    }
    return 0;
  }
  if ( (v122 & 7) != 0 )
    return 0;
  *(_BYTE *)(a2 + 45) = v121;
  *(_WORD *)(a2 + 24) = 32;
  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 46) = 16 * v121 + ((unsigned __int8)v122 >> 4);
LABEL_152:
  v114 = insn_get_next_byte();
  v115 = *(unsigned __int16 *)(a2 + 26);
  *(_BYTE *)(a2 + 81) = 7;
  *(_BYTE *)(a2 + 85) = 9;
  *(_QWORD *)(a2 + 96) = (*(_QWORD *)(a2 + 8) + v115 + 2LL * v114) & 0xFFFFFFFFFFFFFFFELL;
  return v115;
}

