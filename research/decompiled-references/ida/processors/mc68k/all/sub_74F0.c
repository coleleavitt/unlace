__int64 __fastcall sub_74F0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned int next_word; // eax
  __int64 v7; // r8
  unsigned __int16 v8; // bp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int16 v11; // r11
  __int16 v12; // r15
  __int64 v13; // rdx
  unsigned __int8 v14; // r13
  __int64 v15; // r10
  unsigned __int64 v16; // r14
  bool v17; // r15
  char v18; // bp
  char v19; // al
  unsigned int v20; // edx
  char v21; // al
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // al
  bool v26; // dl
  __int16 v27; // cx
  char v28; // dl
  __int16 v29; // ax
  char v30; // cl
  __int64 v31; // rax
  char v32; // dl
  char v33; // al
  unsigned __int16 v34; // dx
  char v35; // si
  char v36; // cl
  __int64 v37; // r15
  char v38; // al
  char v39; // al
  int v40; // eax
  unsigned __int16 v41; // ax
  int v42; // ecx
  char v43; // cl
  __int16 v44; // si
  int v45; // eax
  int v46; // eax
  int v47; // ebp
  int v48; // eax
  unsigned __int16 v49; // bp
  __int16 v50; // r15
  unsigned __int16 v51; // r13
  __int64 v52; // rax
  __int16 v53; // ax
  __int16 v54; // ax
  unsigned __int16 v55; // ax
  __int64 v56; // rax
  unsigned __int16 v57; // ax
  unsigned __int8 v58; // cl
  unsigned __int16 v59; // r13
  unsigned __int16 v60; // bp
  __int16 v61; // ax
  char v62; // al
  char v63; // al
  int v64; // edx
  __int64 v65; // rdx
  int v66; // eax
  unsigned __int16 v67; // ax
  int v68; // eax
  __int16 v69; // bp
  __int16 v70; // ax
  __int16 v71; // dx
  int v72; // eax
  __int64 v73; // r13
  char v74; // al
  int v75; // eax
  char v76; // al
  __int16 v77; // ax
  unsigned __int16 v78; // ax
  char v79; // al
  __int16 v80; // dx
  __int16 v81; // dx
  char v82; // r15
  char v83; // al
  char v84; // al
  int v85; // eax
  unsigned __int16 v86; // ax
  __int64 v87; // rax
  unsigned __int8 v88; // cf
  __int16 v89; // ax
  __int16 v90; // dx
  char v91; // al
  unsigned __int16 v92; // ax
  unsigned __int8 v93; // r9
  __int16 v94; // dx
  char v95; // dl
  __int16 v96; // ax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  char v100; // al
  __int16 v101; // ax
  unsigned __int16 v102; // ax
  unsigned int v103; // eax
  int v104; // eax
  char v105; // r15
  unsigned __int16 v106; // ax
  unsigned __int16 v107; // r13
  char v108; // al
  char v109; // dl
  __int16 v110; // dx
  __int64 v111; // rcx
  __int16 v112; // ax
  bool v113; // zf
  __int16 v114; // dx
  __int16 v115; // ax
  char v116; // al
  __int16 v117; // ax
  __int16 v118; // dx
  __int16 v119; // ax
  __int16 v120; // ax
  int v121; // eax
  __int16 v122; // ax
  char v123; // r15
  __int16 v124; // ax
  unsigned __int8 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // rax
  int v128; // eax
  __int16 v129; // ax
  char v130; // al
  __int16 v131; // ax
  unsigned __int16 v132; // ax
  __int64 v133; // rax
  __int16 v134; // ax
  __int16 v135; // ax
  char v136; // r15
  __int16 v137; // ax
  unsigned int v138; // eax
  char v139; // dl
  __int16 v140; // ax
  unsigned __int16 v141; // ax
  unsigned int v142; // eax
  int v143; // eax
  unsigned __int16 v144; // bp
  unsigned __int16 v145; // ax
  char v146; // si
  __int16 v147; // ax
  unsigned __int16 v148; // ax
  unsigned __int16 v149; // bp
  char v150; // r15
  unsigned __int16 v151; // ax
  unsigned __int8 v152; // al
  unsigned __int8 v153; // r8
  _DWORD *v154; // rdi
  _DWORD *v155; // rsi
  __int64 i; // rcx
  _DWORD *v157; // rdi
  _DWORD *v158; // rsi
  __int64 j; // rcx
  _DWORD *v160; // rdi
  _DWORD *v161; // rsi
  __int64 k; // rcx
  __int16 v163; // ax
  char v164; // r9
  char v165; // r15
  __int16 v166; // ax
  char v167; // cl
  __int16 v168; // ax
  unsigned __int16 v169; // bp
  __int16 v170; // ax
  int v171; // eax
  unsigned __int16 v172; // ax
  int v173; // eax
  unsigned __int16 v174; // ax
  __int16 v175; // cx
  unsigned __int8 v176; // r9
  char v177; // r10
  __int64 v178; // rax
  char v179; // al
  __int64 v180; // rax
  unsigned __int16 v181; // ax
  __int64 v182; // rbp
  __int16 v183; // r15
  __int16 v184; // bp
  unsigned __int16 v185; // ax
  __int16 v186; // ax
  int next_dword; // eax
  __int64 v188; // rax
  __int16 v189; // ax
  unsigned __int16 v190; // ax
  __int64 v191; // r15
  __int16 v192; // ax
  __int16 v193; // ax
  unsigned __int16 v194; // ax
  __int16 v195; // dx
  __int16 v196; // ax
  __int16 v197; // ax
  unsigned __int16 v198; // ax
  __int64 v199; // rax
  __int16 v200; // ax
  __int16 v201; // ax
  char v202; // al
  unsigned __int8 v203; // [rsp+0h] [rbp-78h]
  char v204; // [rsp+0h] [rbp-78h]
  char v205; // [rsp+0h] [rbp-78h]
  char v206; // [rsp+0h] [rbp-78h]
  char v207; // [rsp+0h] [rbp-78h]
  char v208; // [rsp+0h] [rbp-78h]
  char v209; // [rsp+0h] [rbp-78h]
  unsigned __int8 v210; // [rsp+0h] [rbp-78h]
  unsigned __int8 v211; // [rsp+0h] [rbp-78h]
  unsigned __int8 v212; // [rsp+0h] [rbp-78h]
  char v213; // [rsp+0h] [rbp-78h]
  char v214; // [rsp+0h] [rbp-78h]
  char v215; // [rsp+0h] [rbp-78h]
  unsigned __int8 v216; // [rsp+0h] [rbp-78h]
  char v217; // [rsp+0h] [rbp-78h]
  char v218; // [rsp+0h] [rbp-78h]
  unsigned __int8 v219; // [rsp+0h] [rbp-78h]
  unsigned __int8 v220; // [rsp+0h] [rbp-78h]
  unsigned __int8 v221; // [rsp+0h] [rbp-78h]
  unsigned __int8 v222; // [rsp+0h] [rbp-78h]
  char v223; // [rsp+0h] [rbp-78h]
  unsigned __int8 v224; // [rsp+0h] [rbp-78h]
  unsigned __int8 v225; // [rsp+0h] [rbp-78h]
  char v226; // [rsp+0h] [rbp-78h]
  unsigned __int8 v227; // [rsp+0h] [rbp-78h]
  unsigned __int8 v228; // [rsp+4h] [rbp-74h]
  unsigned __int8 v229; // [rsp+4h] [rbp-74h]
  unsigned __int8 v230; // [rsp+4h] [rbp-74h]
  unsigned __int8 v231; // [rsp+4h] [rbp-74h]
  unsigned __int8 v232; // [rsp+4h] [rbp-74h]
  char v233; // [rsp+4h] [rbp-74h]
  char v234; // [rsp+4h] [rbp-74h]
  unsigned __int8 v235; // [rsp+4h] [rbp-74h]
  char v236; // [rsp+4h] [rbp-74h]
  char v237; // [rsp+4h] [rbp-74h]
  char v238; // [rsp+8h] [rbp-70h]
  char v239; // [rsp+8h] [rbp-70h]
  unsigned __int8 v240; // [rsp+8h] [rbp-70h]
  unsigned __int8 v241; // [rsp+8h] [rbp-70h]
  char v242; // [rsp+Ch] [rbp-6Ch]
  _BYTE v243[104]; // [rsp+10h] [rbp-68h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  *(_BYTE *)(a2 + 125) = 1;
  *(_BYTE *)(a2 + 85) = 1;
  *(_BYTE *)(a2 + 45) = 1;
  *(_BYTE *)(a2 + 32) = 0x80;
  next_word = insn_get_next_word(a2);
  v13 = next_word;
  v8 = next_word;
  v9 = next_word;
  v10 = next_word & 7;
  v11 = (unsigned __int16)next_word >> 9;
  v12 = (unsigned __int16)next_word >> 6;
  LOWORD(v13) = (unsigned __int16)next_word >> 3;
  v14 = ((unsigned __int16)next_word >> 9) & 7;
  v15 = ((unsigned __int16)next_word >> 6) & 7;
  v16 = ((unsigned __int16)next_word >> 3) & 7;
  switch ( (unsigned __int16)next_word >> 12 )
  {
    case 0:
      if ( (v12 & 4) != 0 )
      {
        if ( (_BYTE)v16 == 1 )
        {
          *(_WORD *)(a2 + 24) = 130;
          if ( (next_word & 0x40) != 0 )
          {
            *(_BYTE *)(a2 + 85) = 2;
            v100 = 3;
            *(_BYTE *)(a2 + 45) = 2;
          }
          else
          {
            v100 = *(_BYTE *)(a2 + 45) + 1;
          }
          *(_BYTE *)(a2 + 32) = v100;
          *(_WORD *)(a2 + 86) = v14;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 8);
          v101 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 72) = 0;
          *(_BYTE *)(a2 + 42) = v101;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word(a2);
          if ( (v12 & 2) != 0 )
            sub_6C20(a2);
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = ((unsigned __int16)next_word >> 9) & 7;
      }
      else
      {
        if ( v14 != 4 )
        {
          if ( (_BYTE)v15 != 3 )
          {
            if ( (_BYTE)v10 == 4 && (_BYTE)v16 == 7 )
            {
              if ( (v12 & 6) == 0 && ((v11 & 6) == 0 || v14 == 5) )
              {
                v77 = 47;
                if ( v14 != 5 )
                {
                  v77 = 143;
                  if ( v14 )
                    v77 = 8;
                }
                *(_WORD *)(a2 + 24) = v77;
                *(_BYTE *)(a2 + 81) = 1;
                v208 = v15;
                v78 = insn_get_next_word(a2);
                *(_QWORD *)(a2 + 48) = v78;
                if ( v208 )
                {
                  *(_WORD *)(a2 + 86) = 93;
                  v79 = 1;
LABEL_226:
                  *(_BYTE *)(a2 + 72) = v79;
                  result = *(unsigned __int16 *)(a2 + 26);
                  *(_BYTE *)(a2 + 44) |= 0x10u;
                  *(_WORD *)(a2 + 41) = 517;
                  goto LABEL_18;
                }
                if ( v78 <= 0xFFuLL )
                {
                  *(_WORD *)(a2 + 86) = 92;
                  v79 = 4;
                  *(_BYTE *)(a2 + 45) = 0;
                  goto LABEL_226;
                }
              }
              return 0;
            }
            if ( v14 != 7 )
            {
              v123 = v12 & 3;
              *(_BYTE *)(a2 + 72) = 0;
              v124 = byte_16CE8[v14];
              *(_BYTE *)(a2 + 85) = v123;
              *(_BYTE *)(a2 + 45) = v123;
              *(_WORD *)(a2 + 24) = v124;
              *(_WORD *)(a2 + 41) = 517;
              *(_BYTE *)(a2 + 32) = v123 + 1;
              if ( (_BYTE)v15 == 2 )
              {
                v219 = v10;
                LODWORD(v127) = insn_get_next_dword(a2);
                v125 = v219;
                v127 = (unsigned int)v127;
              }
              else
              {
                v234 = v15;
                v212 = v10;
                LOWORD(v127) = insn_get_next_word(a2);
                v125 = v212;
                v126 = (unsigned int)(__int16)v127;
                v127 = (char)v127;
                if ( v234 )
                  v127 = v126;
              }
              *(_QWORD *)(a2 + 48) = v127;
              if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v125, a3) )
              {
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
              return 0;
            }
            if ( *(_DWORD *)(a1 + 188) && (v13 & 6) != 0 && ((next_word & 6) == 0 || (_BYTE)v16 != 7) )
            {
              v216 = next_word & 7;
              v148 = insn_get_next_word(a2);
              v149 = v148;
              if ( (v148 & 0x7FF) == 0 )
              {
                v150 = v12 & 3;
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = v150;
                *(_BYTE *)(a2 + 45) = v150;
                *(_WORD *)(a2 + 24) = 132;
                *(_WORD *)(a2 + 86) = v148 >> 12;
                *(_BYTE *)(a2 + 32) = v150 + 1;
                if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v216, a3) )
                {
                  if ( (v149 & 0x800) != 0 )
                    sub_6C20(a2);
                  result = *(unsigned __int16 *)(a2 + 26);
                  goto LABEL_18;
                }
              }
            }
            return 0;
          }
          if ( v14 <= 2u )
          {
            v121 = *(_DWORD *)(a1 + 188);
            if ( v121 <= 1 )
              return 0;
            if ( !(_BYTE)v16 )
            {
              if ( (unsigned int)(v121 - 9) > 1 )
                return 0;
              *(_BYTE *)(a2 + 85) = 2;
              v122 = byte_16CF0[v14];
              *(_BYTE *)(a2 + 45) = 2;
              *(_BYTE *)(a2 + 32) = 3;
              *(_WORD *)(a2 + 24) = v122;
              result = *(unsigned __int16 *)(a2 + 26);
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
              goto LABEL_18;
            }
            if ( ((unsigned __int8)v16 > 4u || (_BYTE)v16 == 2) && ((_BYTE)v16 != 7 || (_BYTE)v10 != 4) )
            {
              v236 = v11;
              v220 = v10;
              v169 = insn_get_next_word(a2);
              if ( (v169 & 0x7FF) == 0 )
              {
                *(_BYTE *)(a2 + 85) = v236 & 3;
                *(_BYTE *)(a2 + 45) = v236 & 3;
                *(_BYTE *)(a2 + 32) = (v236 & 3) + 1;
                if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v220, a3) )
                {
                  v170 = 36;
                  if ( (v169 & 0x800) != 0 )
                    v170 = 32;
                  *(_WORD *)(a2 + 24) = v170;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = v169 >> 12;
                  result = *(unsigned __int16 *)(a2 + 26);
                  goto LABEL_18;
                }
              }
            }
            return 0;
          }
          if ( v14 != 3 )
          {
            if ( (_BYTE)v16 == 1 )
              return 0;
            v143 = *(_DWORD *)(a1 + 188);
            if ( v143 <= 1 || v143 == 5 )
              return 0;
            if ( (_BYTE)v10 == 4 && (_BYTE)v16 == 7 )
            {
              if ( v14 == 5 )
                return 0;
              v144 = insn_get_next_word(a2);
              v145 = insn_get_next_word(a2);
              if ( ((v144 | v145) & 0xE38) != 0 )
                return 0;
              *(_WORD *)(a2 + 24) = 30;
              *(_BYTE *)(a2 + 81) = 8;
              *(_WORD *)(a2 + 46) = v144 & 7;
              *(_BYTE *)(a2 + 41) = 8;
              *(_BYTE *)(a2 + 72) = v145 & 7;
              *(_BYTE *)(a2 + 121) = 9;
              *(_WORD *)(a2 + 126) = v144 >> 12;
              *(_WORD *)(a2 + 86) = (v144 >> 6) & 7;
              *(_BYTE *)(a2 + 152) = v145 >> 12;
              *(_BYTE *)(a2 + 112) = (v145 >> 6) & 7;
            }
            else
            {
              if ( (v13 & 6) == 0 || (v9 & 6) != 0 && (_BYTE)v16 == 7 )
                return 0;
              v237 = v11;
              v221 = v10;
              v174 = insn_get_next_word(a2);
              if ( (v174 & 0xFE38) != 0 )
                return 0;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = v174 >> 6;
              *(_WORD *)(a2 + 46) = v174 & 7;
              *(_WORD *)(a2 + 24) = 29;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 125) = (v237 & 3) - 1;
              if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 120, (unsigned __int8)v16, v221, a3) )
                return 0;
            }
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 32) = v14 - 4;
            goto LABEL_18;
          }
          v171 = *(_DWORD *)(a1 + 188);
          if ( v171 != 2 && v171 <= 5 )
            return 0;
          if ( (v13 & 6) != 0 )
          {
            if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
              return 0;
            if ( (_BYTE)v16 == 7 && (_BYTE)v10 == 4 )
              return 0;
            *(_BYTE *)(a2 + 42) = 2;
            v225 = v10;
            v181 = insn_get_next_word(a2);
            v182 = v181;
            if ( v181 > 0xFFu || !(unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v225, a3) )
              return 0;
            *(_BYTE *)(a2 + 44) |= 0x10u;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 24) = 28;
            *(_BYTE *)(a2 + 72) = 4;
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = v182;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 168;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v8 & 0xF;
          }
          goto LABEL_18;
        }
        v233 = next_word & 7;
        if ( (_BYTE)v16 == 1 )
          return 0;
        *(_BYTE *)(a2 + 44) |= 0x10u;
        *(_BYTE *)(a2 + 72) = 4;
        *(_WORD *)(a2 + 41) = 517;
        v102 = insn_get_next_word(a2);
        *(_QWORD *)(a2 + 48) = v102;
        if ( v102 > 0xFFuLL )
          return 0;
        LOBYTE(v9) = v8;
        LOBYTE(v10) = v233;
      }
      v82 = v12 & 3;
      if ( (_BYTE)v16 == 7 )
      {
        if ( v82 == 3 )
        {
          if ( (v9 & 6) != 0 )
            return 0;
        }
        else if ( (_BYTE)v10 == 4 )
        {
          return 0;
        }
      }
      *(_WORD *)(a2 + 24) = byte_16CE0[v82 & 3];
      v83 = 0;
      if ( *(_BYTE *)(a2 + 81) == 1 )
        v83 = 2 * (*(_WORD *)(a2 + 86) <= 7u);
      *(_BYTE *)(a2 + 85) = v83;
      *(_BYTE *)(a2 + 45) = v83;
      if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v10, a3) )
      {
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      return 0;
    case 1:
      *(_BYTE *)(a2 + 45) = 0;
      if ( (_BYTE)v15 == 1 )
        return 0;
      goto LABEL_6;
    case 2:
      *(_BYTE *)(a2 + 45) = 2;
      goto LABEL_5;
    case 3:
LABEL_5:
      if ( (_BYTE)v15 == 1 )
      {
        v38 = *(_BYTE *)(a2 + 45);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = v38;
        *(_WORD *)(a2 + 24) = 127;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 8);
        *(_BYTE *)(a2 + 32) = v38 + 1;
        if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
          return 0;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
LABEL_6:
      v17 = (_BYTE)v15 == 7;
      v18 = v11 & 6;
      if ( (v11 & 6) != 0 && (_BYTE)v15 == 7 )
        return 0;
      v39 = *(_BYTE *)(a2 + 45);
      v203 = v15;
      *(_BYTE *)(a2 + 85) = v39;
      *(_BYTE *)(a2 + 32) = v39 + 1;
      *(_WORD *)(a2 + 24) = 125;
      v228 = v10;
      if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3)
        || !(unsigned int)sub_6FD0(a1, a2, a2 + 80, v203, v14, a3) )
      {
        return 0;
      }
      if ( *(_DWORD *)(a1 + 188) != 9 )
      {
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      switch ( (_BYTE)v16 )
      {
        case 6:
          goto LABEL_467;
        case 7:
          if ( v228 != 2 )
          {
            if ( v228 > 2u && (unsigned __int8)(v228 - 3) > 1u )
              return *(unsigned __int16 *)(a2 + 26);
LABEL_467:
            if ( v203 == 5 )
              return 0;
          }
          break;
        case 5:
          break;
        default:
          return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v203 == 6 || !v18 && v17 )
        return 0;
      return *(unsigned __int16 *)(a2 + 26);
    case 4:
      if ( (_BYTE)v15 == 7 )
      {
        if ( (_BYTE)v16 || v14 != 4 )
        {
          if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 || (_BYTE)v16 == 7 && (_BYTE)v10 == 4 )
            return 0;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 24) = 118;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 8);
          goto LABEL_16;
        }
        if ( *(int *)(a1 + 188) <= 1 )
          return 0;
        *(_WORD *)(a2 + 24) = 50;
        *(_BYTE *)(a2 + 45) = 2;
        goto LABEL_259;
      }
      if ( (v12 & 5) == 4 )
      {
        if ( (_BYTE)v16 == 1 )
          return 0;
        *(_WORD *)(a2 + 24) = 31;
        if ( (_BYTE)v15 == 4 )
        {
          v104 = *(_DWORD *)(a1 + 188);
          if ( v104 <= 1 || v104 == 5 )
            return 0;
          *(_BYTE *)(a2 + 45) = 2;
          v19 = 3;
        }
        else
        {
          v19 = *(_BYTE *)(a2 + 45) + 1;
        }
        *(_BYTE *)(a2 + 32) = v19;
        *(_WORD *)(a2 + 86) = v14;
LABEL_16:
        *(_BYTE *)(a2 + 81) = 1;
        if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
          return 0;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      if ( (v12 & 4) != 0 )
        return 0;
      if ( v14 == 7 )
      {
        if ( (_BYTE)v15 == 1 )
        {
          switch ( (char)v16 )
          {
            case 1:
              LOBYTE(v10) = v10 + 8;
              goto LABEL_522;
            case 2:
              v218 = next_word & 7;
              v163 = insn_get_next_word(a2);
              v164 = v218;
              *(_QWORD *)(a2 + 88) = v163;
              goto LABEL_541;
            case 3:
              *(_WORD *)(a2 + 24) = 185;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 8);
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_18;
            case 4:
              *(_WORD *)(a2 + 86) = 94;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 8);
              goto LABEL_520;
            case 5:
              *(_WORD *)(a2 + 46) = 94;
              *(_WORD *)(a2 + 86) = (unsigned __int8)(v10 + 8);
LABEL_520:
              *(_WORD *)(a2 + 24) = 125;
              result = *(unsigned __int16 *)(a2 + 26);
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 41) = 1;
              goto LABEL_18;
            case 6:
              *(_WORD *)(a2 + 24) = byte_16CD8[(unsigned __int8)v10];
              if ( (((_BYTE)v10 - 2) & 0xFD) != 0 )
              {
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
              if ( (_BYTE)v10 != 4 )
              {
                *(_BYTE *)(a2 + 44) |= 0x10u;
                *(_WORD *)(a2 + 41) = 517;
                v198 = insn_get_next_word(a2);
                *(_BYTE *)(a2 + 72) = 1;
                *(_QWORD *)(a2 + 48) = v198;
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
              if ( !*(_DWORD *)(a1 + 188) )
                return 0;
              *(_BYTE *)(a2 + 44) |= 0x10u;
              *(_WORD *)(a2 + 41) = 517;
              v201 = insn_get_next_word(a2);
              *(_BYTE *)(a2 + 72) = 0;
              *(_QWORD *)(a2 + 48) = v201;
              result = *(unsigned __int16 *)(a2 + 26);
              break;
            case 7:
              v217 = next_word & 7;
              if ( (unsigned __int8)(v10 - 2) > 1u || !*(_DWORD *)(a1 + 188) )
                return 0;
              *(_WORD *)(a2 + 24) = 128;
              *(_BYTE *)(a2 + 42) = 2;
              v151 = insn_get_next_word(a2);
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = v151 >> 12;
              v152 = sub_6E20(a1, v151 & 0xFFF);
              if ( !v152 )
              {
                *(_BYTE *)(a2 + 81) = 13;
                v152 = v153;
              }
              *(_BYTE *)(a2 + 82) = 2;
              *(_WORD *)(a2 + 86) = v152;
              result = *(unsigned __int16 *)(a2 + 26);
              if ( v217 == 2 )
              {
                v154 = v243;
                v155 = (_DWORD *)(a2 + 40);
                for ( i = 10; i; --i )
                  *v154++ = *v155++;
                v157 = (_DWORD *)(a2 + 40);
                v158 = (_DWORD *)(a2 + 80);
                for ( j = 9; j; --j )
                  *v157++ = *v158++;
                v160 = (_DWORD *)(a2 + 80);
                v161 = v243;
                for ( k = 9; k; --k )
                  *v160++ = *v161++;
              }
              goto LABEL_18;
            default:
LABEL_522:
              *(_BYTE *)(a2 + 44) |= 0x10u;
              *(_WORD *)(a2 + 24) = 182;
              *(_BYTE *)(a2 + 41) = 5;
              *(_BYTE *)(a2 + 72) = 4;
              *(_QWORD *)(a2 + 48) = (unsigned __int8)v10;
              if ( (_BYTE)v10 == 15 )
              {
                if ( (get_flags_ex(*(_QWORD *)(a2 + 16) + 2LL, 4, v13, next_word) & 0x400) == 0 )
                {
                  *(_BYTE *)(a2 + 81) = 5;
                  v190 = insn_get_next_word(a2);
                  *(_BYTE *)(a2 + 84) &= ~8u;
                  *(_QWORD *)(a2 + 88) = v190;
                }
                result = *(unsigned __int16 *)(a2 + 26);
              }
              else
              {
                result = *(unsigned __int16 *)(a2 + 26);
              }
              goto LABEL_18;
          }
          goto LABEL_18;
        }
        if ( !(_BYTE)v15 || (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 || (_BYTE)v16 == 7 && (_BYTE)v10 == 4 )
          return 0;
        v135 = 116;
        if ( (_BYTE)v15 == 2 )
          v135 = 117;
        *(_WORD *)(a2 + 24) = v135;
        if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
          return 0;
        if ( *(_BYTE *)(a2 + 41) != 2
          || *(_BYTE *)(a2 + 72) == 1 && *(_QWORD *)(a2 + 56) == (__int16)*(_QWORD *)(a2 + 56) )
        {
          result = *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 7;
          result = *(unsigned __int16 *)(a2 + 26);
        }
        goto LABEL_18;
      }
      if ( (v11 & 4) == 0 )
      {
        if ( (_BYTE)v15 == 3 )
        {
          if ( (_BYTE)v16 == 1 )
            return 0;
          if ( (v11 & 2) != 0 || (_BYTE)v16 != 7 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 125;
            v223 = (unsigned __int16)next_word >> 9;
            *(_WORD *)(a2 + 46) = ((9uLL >> v14) & 1) + 92;
            if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v10, a3) )
            {
              if ( (v223 & 2) != 0 )
                sub_6C20(a2);
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_18;
            }
            return 0;
          }
          if ( (next_word & 6) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 125;
          *(_WORD *)(a2 + 46) = ((9uLL >> v14) & 1) + 92;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 80, 7, v10, a3) )
            return 0;
          result = *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          if ( (_BYTE)v16 == 1 || (next_word & 6) != 0 && (_BYTE)v16 == 7 )
            return 0;
          v136 = v12 & 3;
          *(_BYTE *)(a2 + 85) = v136;
          *(_BYTE *)(a2 + 45) = v136;
          *(_BYTE *)(a2 + 32) = v136 + 1;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
            return 0;
          *(_WORD *)(a2 + 24) = byte_16CD0[v14];
          result = *(unsigned __int16 *)(a2 + 26);
        }
        goto LABEL_18;
      }
      if ( v14 != 5 )
      {
        if ( v14 != 4 )
        {
          if ( (_BYTE)v15 != 1 )
          {
            if ( !(_BYTE)v15 )
            {
              v210 = next_word & 7;
              if ( (_BYTE)v16 == 1 )
                return 0;
              v92 = insn_get_next_word(a2);
              v93 = v210;
              v94 = ((v92 & 0x800) == 0) + 135;
              goto LABEL_297;
            }
            if ( (_BYTE)v15 == 2 && !(_BYTE)v16 )
            {
              if ( (unsigned int)(*(_DWORD *)(a1 + 188) - 9) <= 1 )
              {
                *(_WORD *)(a2 + 24) = 197;
                result = *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
                *(_BYTE *)(a2 + 45) = 2;
                goto LABEL_18;
              }
              *(_WORD *)(a2 + 24) = 129;
              v227 = next_word & 7;
              LOWORD(v178) = insn_get_next_word(a2);
              v176 = v227;
              v177 = v12 & 7;
              v178 = (unsigned __int16)v178;
              *(_QWORD *)(a2 + 88) = (unsigned __int16)v178;
              goto LABEL_790;
            }
LABEL_633:
            if ( (unsigned __int8)(v15 - 2) > 1u || (next_word & 4) != 0 && (_BYTE)v16 == 7 )
              return 0;
            *(_WORD *)(a2 + 24) = 129;
            v224 = next_word & 7;
            LOWORD(v178) = insn_get_next_word(a2);
            v176 = v224;
            v177 = v12 & 7;
            v178 = (unsigned __int16)v178;
            *(_QWORD *)(a2 + 88) = (unsigned __int16)v178;
            if ( (unsigned __int8)v16 > 4u || (_BYTE)v16 == 2 )
            {
LABEL_638:
              if ( v177 == 3 )
                *(_BYTE *)(a2 + 45) = 2;
              v179 = *(_BYTE *)(a2 + 45);
              *(_BYTE *)(a2 + 81) = 10;
              *(_BYTE *)(a2 + 32) = v179 + 1;
              if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v176, a3) )
              {
                if ( v14 == 4 )
                  sub_6C20(a2);
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
              return 0;
            }
LABEL_790:
            if ( (_BYTE)v16 == 4 && v14 == 4 )
            {
              *(_QWORD *)(a2 + 88) = v178 | 0x80000000LL;
            }
            else if ( (_BYTE)v16 != 3 || v14 != 6 )
            {
              return 0;
            }
            goto LABEL_638;
          }
          v222 = next_word & 7;
          if ( (_BYTE)v16 == 1 )
            return 0;
          v92 = insn_get_next_word(a2);
          v93 = v222;
          v175 = v92 & 0x800;
          if ( (v92 & 0x400) != 0 || (((unsigned __int8)v92 ^ (v92 >> 12)) & 7) == 0 )
          {
            v94 = 44;
            if ( v175 )
              v94 = 42;
            goto LABEL_297;
          }
          if ( *(_DWORD *)(a1 + 188) == 9 )
          {
            v94 = 204;
            if ( v175 )
            {
              v94 = 203;
              HIBYTE(v92) |= 4u;
              goto LABEL_297;
            }
          }
          else
          {
            v94 = 45;
            if ( v175 )
              v94 = 43;
          }
          HIBYTE(v92) |= 4u;
LABEL_297:
          *(_WORD *)(a2 + 24) = v94;
          if ( *(int *)(a1 + 188) <= 1 || (v92 & 0x83F8) != 0 )
            return 0;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v92 >> 12;
          v95 = 1;
          *(_BYTE *)(a2 + 32) = 3;
          if ( (v92 & 0x400) != 0 )
          {
            *(_BYTE *)(a2 + 112) = v92;
            v95 = 8;
          }
          *(_BYTE *)(a2 + 81) = v95;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v93, a3) )
            return 0;
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        if ( !(_BYTE)v15 )
        {
          if ( (_BYTE)v16 == 1 )
          {
            v226 = next_word & 7;
            if ( *(int *)(a1 + 188) > 1 )
            {
              *(_BYTE *)(a2 + 85) = 2;
              next_dword = insn_get_next_dword(a2);
              v164 = v226;
              *(_QWORD *)(a2 + 88) = next_dword;
              if ( (unsigned __int64)next_dword <= 0xFFFF )
                *(_BYTE *)(a2 + 32) = 3;
LABEL_541:
              *(_BYTE *)(a2 + 84) |= 0x10u;
              *(_WORD *)(a2 + 81) = 517;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v164 + 8);
              result = *(unsigned __int16 *)(a2 + 26);
              *(_BYTE *)(a2 + 112) = 0;
              *(_WORD *)(a2 + 24) = 119;
              *(_BYTE *)(a2 + 41) = 1;
              goto LABEL_18;
            }
            return 0;
          }
          if ( (next_word & 6) != 0 && (_BYTE)v16 == 7 )
            return 0;
          *(_WORD *)(a2 + 24) = 137;
          *(_BYTE *)(a2 + 45) = 0;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
            return 0;
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        if ( (_BYTE)v15 == 1 )
        {
          if ( (_BYTE)v16 )
          {
            if ( (_BYTE)v16 == 1 )
            {
              if ( !*(_DWORD *)(a1 + 188) )
                return 0;
              *(_BYTE *)(a2 + 44) |= 0x10u;
              result = *(unsigned __int16 *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 23;
              *(_BYTE *)(a2 + 45) = 0;
              *(_BYTE *)(a2 + 41) = 5;
              *(_BYTE *)(a2 + 72) = 4;
              *(_QWORD *)(a2 + 48) = (unsigned __int8)v10;
            }
            else
            {
              if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
                return 0;
              if ( (_BYTE)v16 == 7 && (_BYTE)v10 == 4 )
                return 0;
              *(_WORD *)(a2 + 24) = 145;
              *(_BYTE *)(a2 + 45) = 2;
              if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
                return 0;
              result = *(unsigned __int16 *)(a2 + 26);
            }
          }
          else
          {
            *(_WORD *)(a2 + 24) = 179;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
          }
          goto LABEL_18;
        }
        if ( (_BYTE)v16 )
          goto LABEL_633;
        if ( (_BYTE)v15 != 2 )
        {
          if ( (_BYTE)v15 != 3 )
            return 0;
          *(_BYTE *)(a2 + 45) = 2;
        }
        *(_WORD *)(a2 + 24) = 49;
LABEL_259:
        v84 = *(_BYTE *)(a2 + 45);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
        *(_BYTE *)(a2 + 32) = v84 + 1;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      if ( (_BYTE)v15 == 3 )
      {
        if ( (next_word & 6) != 0 && (_BYTE)v16 == 7 )
        {
          if ( (_WORD)next_word == 19196 )
          {
            *(_WORD *)(a2 + 24) = 115;
            result = *(unsigned __int16 *)(a2 + 26);
          }
          else
          {
            if ( (_WORD)next_word != 19194 )
              return 0;
            v173 = *(_DWORD *)(a1 + 188);
            if ( v173 != 5 && v173 != 10 )
              return 0;
            *(_WORD *)(a2 + 24) = 22;
            result = *(unsigned __int16 *)(a2 + 26);
          }
          goto LABEL_18;
        }
        if ( (_BYTE)v16 == 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 188) - 9) > 1 )
            return 0;
          if ( (_BYTE)v10 )
          {
            if ( (_BYTE)v10 != 4 )
              return 0;
            *(_WORD *)(a2 + 24) = 159;
            result = *(unsigned __int16 *)(a2 + 26);
          }
          else
          {
            *(_WORD *)(a2 + 24) = 114;
            result = *(unsigned __int16 *)(a2 + 26);
          }
          goto LABEL_18;
        }
        *(_WORD *)(a2 + 24) = 180;
        *(_BYTE *)(a2 + 45) = 0;
      }
      else
      {
        v165 = v12 & 3;
        *(_WORD *)(a2 + 24) = 184;
        *(_BYTE *)(a2 + 85) = v165;
        *(_BYTE *)(a2 + 45) = v165;
        *(_BYTE *)(a2 + 32) = v165 + 1;
      }
      if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
        return 0;
      result = *(unsigned __int16 *)(a2 + 26);
LABEL_18:
      if ( (_WORD)result )
      {
        v20 = *(_DWORD *)(a1 + 188);
        if ( v20 <= 1 || v20 == 5 )
        {
          if ( *(_BYTE *)(a2 + 41) == 7 )
            *(_QWORD *)(a2 + 56) &= 0xFFFFFFuLL;
          if ( *(_BYTE *)(a2 + 81) == 7 )
            *(_QWORD *)(a2 + 96) &= 0xFFFFFFuLL;
        }
      }
      return result;
    case 5:
      v21 = v12 & 3;
      if ( (v12 & 3) != 3 )
      {
        *(_BYTE *)(a2 + 85) = v21;
        *(_BYTE *)(a2 + 45) = v21;
        v22 = -((v12 & 4) == 0);
        *(_BYTE *)(a2 + 41) = 5;
        LOBYTE(v22) = v22 & 0x54;
        *(_BYTE *)(a2 + 72) = 4;
        *(_WORD *)(a2 + 24) = v22 + 177;
        if ( !v14 )
          v14 = 8;
        *(_BYTE *)(a2 + 44) |= 0x10u;
        *(_BYTE *)(a2 + 32) = v21 + 1;
        *(_QWORD *)(a2 + 48) = v14;
        goto LABEL_29;
      }
      if ( (_BYTE)v16 == 7 )
      {
        if ( (unsigned __int8)v10 > 4u )
          return 0;
        if ( (v9 & 6) != 0 )
        {
          if ( *(int *)(a1 + 188) <= 1 )
            return 0;
          if ( (_BYTE)v10 != 4 )
          {
            *(_BYTE *)(a2 + 32) = v10;
            *(_BYTE *)(a2 + 72) = 0;
            *(_WORD *)(a2 + 41) = 517;
            if ( (_BYTE)v10 != 2 )
            {
              v103 = insn_get_next_dword(a2);
              *(_BYTE *)(a2 + 45) = 2;
              v81 = 182;
              *(_QWORD *)(a2 + 48) = v103;
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_245;
            }
            *(_QWORD *)(a2 + 48) = (__int16)insn_get_next_word(a2);
          }
          result = *(unsigned __int16 *)(a2 + 26);
          v81 = 182;
LABEL_245:
          *(_WORD *)(a2 + 24) = v81;
          *(_DWORD *)(a2 + 28) = (HIBYTE(v8) & 0xF) + 1;
          goto LABEL_18;
        }
      }
      else if ( (_BYTE)v16 == 1 )
      {
        v133 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
        *(_WORD *)(a2 + 81) = 519;
        *(_QWORD *)(a2 + 96) = v133;
        v134 = insn_get_next_word(a2);
        v81 = 41;
        *(_QWORD *)(a2 + 96) += v134;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_245;
      }
      *(_BYTE *)(a2 + 45) = 0;
      if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
        return 0;
      result = *(unsigned __int16 *)(a2 + 26);
      v81 = 172;
      goto LABEL_245;
    case 6:
      v23 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 41) = 519;
      result = v23;
      v24 = *(_QWORD *)(a2 + 8) + v23;
      *(_QWORD *)(a2 + 56) = v24;
      if ( (_BYTE)v8 )
      {
        if ( (_BYTE)v8 == 0xFF )
        {
          v97 = *(_DWORD *)(a1 + 188);
          if ( v97 <= 1 || v97 == 5 )
            return 0;
          v98 = insn_get_next_dword(a2);
          *(_BYTE *)(a2 + 32) = -125;
          *(_QWORD *)(a2 + 56) += v98;
          result = *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          *(_BYTE *)(a2 + 32) = 4;
          *(_BYTE *)(a2 + 42) = 1;
          *(_QWORD *)(a2 + 56) = (char)v8 + v24;
        }
      }
      else
      {
        v96 = insn_get_next_word(a2);
        *(_BYTE *)(a2 + 32) = -126;
        *(_QWORD *)(a2 + 56) += v96;
        result = *(unsigned __int16 *)(a2 + 26);
      }
      if ( (v8 & 0xE00) == 0 )
      {
        *(_WORD *)(a2 + 24) = (v8 & 0xF00) == 0 ? 24 : 26;
        goto LABEL_18;
      }
      v81 = 11;
      goto LABEL_245;
    case 7:
      if ( (next_word & 0x100) == 0 )
      {
        ++*(_BYTE *)(a2 + 42);
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 24) = 131;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v14;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = (char)v8;
        *(_BYTE *)(a2 + 72) = 0;
        goto LABEL_18;
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 188) - 9) <= 1 )
      {
        *(_BYTE *)(a2 + 85) = (next_word & 0x40) != 0;
        *(_BYTE *)(a2 + 45) = (next_word & 0x40) != 0;
        *(_WORD *)(a2 + 24) = ((unsigned __int8)next_word >> 7) + 195;
        *(_BYTE *)(a2 + 32) = ((next_word & 0x40) != 0) + 1;
        if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
        {
          *(_BYTE *)(a2 + 85) = 2;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v14;
          goto LABEL_18;
        }
      }
      return 0;
    case 8:
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = ((unsigned __int16)next_word >> 9) & 7;
      v25 = v12 & 3;
      if ( (v12 & 3) == 3 )
      {
        v89 = (v12 & 4) == 0 ? 44 : 42;
        goto LABEL_280;
      }
      v26 = (v13 & 6) == 0;
      if ( (_BYTE)v15 == 4 )
      {
        v27 = 171;
        if ( v26 )
          goto LABEL_45;
      }
      if ( (unsigned __int8)(v15 - 5) > 1u || !v26 )
      {
        if ( (_BYTE)v16 != 1 && ((v12 & 4) == 0 || (_BYTE)v16) )
        {
          v80 = 142;
          goto LABEL_236;
        }
        return 0;
      }
      v128 = *(_DWORD *)(a1 + 188);
      if ( v128 <= 1 || v128 == 5 )
        return 0;
      v129 = 186;
      if ( (_BYTE)v15 == 5 )
        v129 = 144;
      *(_WORD *)(a2 + 24) = v129;
      if ( (_BYTE)v16 )
      {
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 32);
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 32);
        v130 = 3;
      }
      else
      {
        v130 = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
      }
      *(_BYTE *)(a2 + 41) = v130;
      v131 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 122) = v131;
      v132 = insn_get_next_word(a2);
      *(_BYTE *)(a2 + 124) |= 0x10u;
      *(_BYTE *)(a2 + 152) = 1;
      *(_QWORD *)(a2 + 128) = v132;
      result = *(unsigned __int16 *)(a2 + 26);
      goto LABEL_18;
    case 9:
      v29 = ((unsigned __int16)next_word >> 9) & 7;
      *(_BYTE *)(a2 + 81) = 1;
      v30 = v12 & 3;
      *(_WORD *)(a2 + 86) = v14;
      if ( (v12 & 3) == 3 )
      {
        v90 = 175;
        goto LABEL_284;
      }
      *(_BYTE *)(a2 + 85) = v30;
      *(_BYTE *)(a2 + 45) = v30;
      *(_BYTE *)(a2 + 32) = v30 + 1;
      if ( (v13 & 6) == 0 && (v12 & 4) != 0 )
      {
        *(_WORD *)(a2 + 24) = 178;
        goto LABEL_46;
      }
      *(_WORD *)(a2 + 24) = 174;
      goto LABEL_237;
    case 0xA:
      if ( (unsigned int)(*(_DWORD *)(a1 + 188) - 9) > 1 )
        goto LABEL_227;
      if ( (_BYTE)v15 == 6 )
      {
        if ( (v13 & 6) == 0 )
        {
          if ( v14 == 6 )
          {
            v119 = 124;
          }
          else
          {
            v119 = 130;
            if ( v14 != 7 )
            {
              v119 = 125;
              if ( v14 != 4 )
              {
                v119 = 129;
                if ( v14 != 5 )
                {
                  if ( v14 )
                    v119 = (unsigned __int8)(v14 + 125);
                  else
                    v119 = 123;
                }
              }
            }
          }
          *(_WORD *)(a2 + 46) = v119;
          result = *(unsigned __int16 *)(a2 + 26);
          if ( (_BYTE)v16 == 1 )
            LOBYTE(v10) = v10 + 8;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 125;
          *(_BYTE *)(a2 + 32) = 3;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v10;
          *(_BYTE *)(a2 + 81) = 1;
          goto LABEL_18;
        }
        goto LABEL_227;
      }
      if ( (_BYTE)v15 == 7 )
      {
        if ( (v13 & 6) == 0 )
        {
          if ( (v11 & 4) != 0 )
          {
            if ( v14 != 4 || (((unsigned __int8)next_word | (unsigned __int8)v13) & 7) != 0 )
              goto LABEL_227;
            *(_WORD *)(a2 + 24) = 125;
            *(_WORD *)(a2 + 46) = 125;
            *(_WORD *)(a2 + 86) = 92;
          }
          else
          {
            if ( v14 )
              v120 = (unsigned __int8)(v14 + 125);
            else
              v120 = 123;
            *(_WORD *)(a2 + 46) = v120;
            *(_WORD *)(a2 + 86) = v8 & 0xF;
            *(_WORD *)(a2 + 24) = 198;
          }
          *(_BYTE *)(a2 + 41) = 1;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 32) = 3;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 85) = 2;
          goto LABEL_18;
        }
LABEL_227:
        if ( !sub_13B00(a1, v8, 0, v9, v7, v10) )
          return 0;
        *(_WORD *)(a2 + 24) = 189;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      if ( (_BYTE)v15 != 4 )
      {
        if ( (_BYTE)v15 == 5 )
        {
          v31 = v14;
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 194;
          *(_BYTE *)(a2 + 72) = 0;
          if ( !v14 )
            v31 = -1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v31;
          *(_BYTE *)(a2 + 32) = 3;
          if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v10, a3) )
          {
            result = *(unsigned __int16 *)(a2 + 26);
            goto LABEL_18;
          }
          return 0;
        }
        *(_BYTE *)(a2 + 41) = 12;
        v105 = v13 & 6;
        v211 = next_word & 7;
        *(_WORD *)(a2 + 24) = ((v13 & 6) != 0) + 123;
        *(_WORD *)(a2 + 46) = next_word & 0xF;
        *(_BYTE *)(a2 + 72) = v14 | (8 * v15) & 8;
        v106 = insn_get_next_word(a2);
        v10 = v211;
        v107 = v106;
        if ( (v106 & 0x800) != 0 )
        {
          v108 = 3;
          v109 = 2;
        }
        else
        {
          v108 = 2;
          v109 = 1;
        }
        *(_BYTE *)(a2 + 45) = v109;
        v110 = *(_WORD *)(a2 + 24);
        *(_BYTE *)(a2 + 32) = v108;
        if ( v110 != 124 )
        {
          v111 = a2 + 120;
          if ( (v107 & 1) != 0 )
          {
            *(_BYTE *)(a2 + 81) = 1;
            v111 = a2 + 80;
            *(_WORD *)(a2 + 86) = 123;
            v112 = (v107 >> 2) & 3;
            *(_BYTE *)(a2 + 121) = 1;
            v113 = v112 == 0;
            v114 = v112 + 125;
            v115 = 123;
            if ( !v113 )
              v115 = v114;
            *(_WORD *)(a2 + 126) = v115;
            if ( (v107 & 0x100) != 0 )
              v110 = 202 - ((v107 & 2) == 0);
            else
              v110 = 200 - ((v107 & 2) == 0);
            *(_WORD *)(a2 + 24) = v110;
          }
          goto LABEL_361;
        }
        if ( (unsigned __int8)v16 <= 5u )
        {
          v147 = *(char *)(a2 + 72);
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = v147;
          *(_WORD *)(a2 + 46) = v107 & 0xF;
          *(_BYTE *)(a2 + 72) = v107 >> 12;
          if ( (v107 & 0x20) != 0 )
            *(_BYTE *)(a2 + 72) = (v107 >> 12) | 0x80;
          if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v211, a3) )
          {
            v111 = a2 + 160;
            if ( (v107 & 0x100) != 0 )
            {
              v110 = 134 - (v105 == 0);
              *(_WORD *)(a2 + 24) = v110;
            }
            else
            {
              v110 = *(_WORD *)(a2 + 24);
            }
LABEL_361:
            v116 = *(_BYTE *)(a2 + 72) | (32 * (v107 >> 9)) & 0x60;
            *(_BYTE *)(a2 + 72) = v116;
            if ( (v107 & 0x40) != 0 )
              *(_WORD *)(a2 + 46) |= 0x10u;
            if ( (v107 & 0x80u) != 0 )
              *(_BYTE *)(a2 + 72) = v116 | 0x10;
            v117 = (v8 >> 7) & 1 | (v107 >> 3) & 2;
            v118 = v110 == 124 || v110 == 134;
            if ( v117 != v118 )
            {
              *(_BYTE *)(v111 + 1) = 1;
              *(_WORD *)(v111 + 6) = (v118 ^ v117) + 125;
            }
            result = *(unsigned __int16 *)(a2 + 26);
            goto LABEL_18;
          }
        }
        goto LABEL_227;
      }
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 24) = 125;
      *(_BYTE *)(a2 + 32) = 3;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 85) = 2;
      if ( v14 == 6 )
      {
        *(_WORD *)(a2 + 86) = 124;
        goto LABEL_373;
      }
      if ( v14 != 7 )
      {
        if ( v14 == 4 )
        {
          v166 = 125;
        }
        else
        {
          if ( v14 == 5 )
          {
            *(_WORD *)(a2 + 86) = 129;
LABEL_373:
            if ( (v13 & 6) == 0 || (_BYTE)v16 == 7 )
            {
              if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
                return 0;
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_18;
            }
            goto LABEL_227;
          }
          if ( v14 )
            v166 = (unsigned __int8)(v14 + 125);
          else
            v166 = 123;
        }
        *(_WORD *)(a2 + 86) = v166;
        if ( (_BYTE)v16 == 2 )
        {
          v167 = v9 & 3;
          *(_BYTE *)(a2 + 41) = 1;
          v168 = (unsigned __int8)(v167 + 125);
          if ( !v167 )
            v168 = 123;
          *(_WORD *)(a2 + 46) = v168;
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        goto LABEL_373;
      }
      *(_WORD *)(a2 + 86) = 130;
      goto LABEL_373;
    case 0xB:
      v29 = ((unsigned __int16)next_word >> 9) & 7;
      *(_BYTE *)(a2 + 81) = 1;
      v32 = v12 & 3;
      *(_WORD *)(a2 + 86) = v14;
      if ( (v12 & 3) == 3 )
      {
        v90 = 37;
        goto LABEL_284;
      }
      *(_BYTE *)(a2 + 85) = v32;
      *(_BYTE *)(a2 + 45) = v32;
      *(_BYTE *)(a2 + 32) = v32 + 1;
      if ( (v12 & 4) == 0 )
      {
        *(_WORD *)(a2 + 24) = 35;
        if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
          return 0;
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      if ( (_BYTE)v16 == 1 )
      {
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 24) = 39;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 24);
        *(_BYTE *)(a2 + 41) = 3;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 24);
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 46;
      *(_WORD *)(a2 + 46) = v14;
LABEL_29:
      if ( ((v9 & 6) == 0 || (_BYTE)v16 != 7) && (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v10, a3) )
      {
        result = *(unsigned __int16 *)(a2 + 26);
        goto LABEL_18;
      }
      return 0;
    case 0xC:
      *(_BYTE *)(a2 + 81) = 1;
      v25 = v12 & 3;
      *(_WORD *)(a2 + 86) = v14;
      v35 = v12 & 4;
      if ( (v12 & 3) == 3 )
      {
        v89 = (v35 == 0) + 135;
LABEL_280:
        *(_WORD *)(a2 + 24) = v89;
        *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 85) + 1;
        if ( (_BYTE)v16 != 1 && (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
        {
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        return 0;
      }
      if ( (v13 & 6) != 0 || !v35 )
      {
        v80 = 7;
LABEL_236:
        *(_BYTE *)(a2 + 85) = v25;
        *(_BYTE *)(a2 + 45) = v25;
        *(_WORD *)(a2 + 24) = v80;
        *(_BYTE *)(a2 + 32) = v25 + 1;
        goto LABEL_237;
      }
      if ( (_BYTE)v15 == 4 )
      {
        v27 = 1;
LABEL_45:
        *(_WORD *)(a2 + 24) = v27;
        *(_BYTE *)(a2 + 85) = 0;
        *(_BYTE *)(a2 + 45) = 0;
        goto LABEL_46;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 48;
      *(_WORD *)(a2 + 86) = (unsigned __int8)v10;
      *(_WORD *)(a2 + 46) = v14;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 45) = 2;
      if ( (_BYTE)v16 )
      {
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v10 + 8);
        if ( (_BYTE)v15 == 5 )
        {
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v14 + 8);
          result = *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          if ( (_BYTE)v15 != 6 )
            return 0;
          result = *(unsigned __int16 *)(a2 + 26);
        }
      }
      else
      {
        if ( (_BYTE)v15 != 5 )
          return 0;
        result = *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_18;
    case 0xD:
      v29 = ((unsigned __int16)next_word >> 9) & 7;
      *(_BYTE *)(a2 + 81) = 1;
      v36 = v12 & 3;
      *(_WORD *)(a2 + 86) = v14;
      if ( (v12 & 3) == 3 )
      {
        v90 = 3;
LABEL_284:
        *(_WORD *)(a2 + 24) = v90;
        *(_WORD *)(a2 + 86) = v29 + 8;
        v91 = 2;
        if ( (v12 & 4) != 0 )
        {
          *(_BYTE *)(a2 + 45) = 2;
          v91 = 3;
          *(_BYTE *)(a2 + 85) = 2;
        }
        *(_BYTE *)(a2 + 32) = v91;
        if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
        {
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        }
        return 0;
      }
      *(_BYTE *)(a2 + 85) = v36;
      *(_BYTE *)(a2 + 45) = v36;
      *(_BYTE *)(a2 + 32) = v36 + 1;
      if ( (v12 & 4) == 0 || (v13 & 6) != 0 )
      {
        *(_WORD *)(a2 + 24) = 2;
LABEL_237:
        if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
          return 0;
        if ( (v12 & 4) != 0 )
          goto LABEL_310;
        result = *(unsigned __int16 *)(a2 + 26);
      }
      else
      {
        *(_WORD *)(a2 + 24) = 6;
LABEL_46:
        result = *(unsigned __int16 *)(a2 + 26);
        if ( (_BYTE)v16 )
        {
          *(_BYTE *)(a2 + 81) = 3;
          v28 = 3;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 32);
          *(_WORD *)(a2 + 86) = (unsigned __int8)(v14 + 32);
        }
        else
        {
          v28 = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int8)v10;
        }
        *(_BYTE *)(a2 + 41) = v28;
      }
      goto LABEL_18;
    case 0xE:
      v33 = v12 & 3;
      if ( (v12 & 3) == 3 )
      {
        v209 = v15;
        if ( (v11 & 4) != 0 )
        {
          v85 = *(_DWORD *)(a1 + 188);
          v241 = v10;
          if ( v85 <= 1 )
            return 0;
          if ( v85 == 5 )
            return 0;
          v86 = insn_get_next_word(a2);
          if ( (v86 & 0x8000u) != 0 )
            return 0;
          if ( v209 == 7 )
          {
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = v86 >> 12;
          }
          else if ( (v86 & 0x7000) != 0 )
          {
            return 0;
          }
          if ( (v86 & 0xE00u) <= 0x800 && (v86 & 0x38u) <= 0x20 )
          {
            *(_BYTE *)(a2 + 45) = 12;
            *(_QWORD *)(a2 + 48) = v86;
            v87 = 26;
            v88 = _bittest64(&v87, v16);
            *(_WORD *)(a2 + 24) = byte_16D00[v12 & 4 | (v14 - 4)];
            if ( !v88
              && (v241 != 4 || (_BYTE)v16 != 7)
              && (v14 != 7 && (v14 <= 4u || v209 != 3) || (v8 & 6) == 0 || (_BYTE)v16 != 7) )
            {
              if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v241, a3) )
              {
                if ( *(_WORD *)(a2 + 24) == 21 )
                {
LABEL_310:
                  sub_6C20(a2);
                  result = *(unsigned __int16 *)(a2 + 26);
                }
                else
                {
                  result = *(unsigned __int16 *)(a2 + 26);
                }
                goto LABEL_18;
              }
            }
          }
          return 0;
        }
        if ( (v13 & 6) == 0 || (v9 & 6) != 0 && (_BYTE)v16 == 7 )
          return 0;
        v99 = sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3);
        v34 = v14;
        if ( !v99 )
          return 0;
      }
      else
      {
        *(_BYTE *)(a2 + 85) = v33;
        *(_BYTE *)(a2 + 45) = v33;
        *(_BYTE *)(a2 + 32) = v33 + 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v10;
        *(_BYTE *)(a2 + 81) = 1;
        if ( (v13 & 4) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = v14;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 5;
          if ( !v14 )
            v14 = 8;
          *(_BYTE *)(a2 + 72) = 4;
          *(_BYTE *)(a2 + 44) |= 0x10u;
          *(_QWORD *)(a2 + 48) = v14;
        }
        v34 = v13 & 3;
      }
      *(_WORD *)(a2 + 24) = byte_16CF8[v34 | v12 & 4];
      result = *(unsigned __int16 *)(a2 + 26);
      goto LABEL_18;
    case 0xF:
      result = *(unsigned __int16 *)(a2 + 26);
      v37 = *(_QWORD *)(a2 + 8) + result;
      switch ( v11 & 7 )
      {
        case 0:
          v48 = *(_DWORD *)(a1 + 188);
          if ( v48 > 6 )
          {
            switch ( v15 )
            {
              case 0LL:
                goto LABEL_115;
              case 1LL:
                v215 = v8;
                v235 = v10;
                v141 = insn_get_next_word(a2);
                LOBYTE(v8) = v141;
                if ( v141 > 0xFu )
                  return 0;
                if ( (_BYTE)v16 == 1 )
                {
                  v199 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 24) = 147;
                  *(_WORD *)(a2 + 46) = v235;
                  *(_BYTE *)(a2 + 81) = 7;
                  *(_QWORD *)(a2 + 96) = v199;
                  v200 = insn_get_next_word(a2);
                  *(_BYTE *)(a2 + 82) = 4;
                  *(_QWORD *)(a2 + 96) += v200;
                }
                else if ( (v215 & 6) != 0 && (_BYTE)v16 == 7 )
                {
                  if ( v235 > 4u )
                    return 0;
                  *(_WORD *)(a2 + 24) = 158;
                  if ( v235 != 4 )
                  {
                    *(_BYTE *)(a2 + 72) = 0;
                    *(_WORD *)(a2 + 41) = 1029;
                    if ( v235 == 2 )
                    {
                      *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word(a2);
                    }
                    else
                    {
                      v142 = insn_get_next_dword(a2);
                      *(_BYTE *)(a2 + 45) = 2;
                      *(_QWORD *)(a2 + 48) = v142;
                    }
                    *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 45) + 1;
                  }
                }
                else
                {
                  *(_BYTE *)(a2 + 45) = 0;
                  if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v235, a3) )
                    return 0;
                  *(_WORD *)(a2 + 24) = 155;
                }
LABEL_450:
                *(_DWORD *)(a2 + 28) = (v8 & 0xF) + 17;
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              case 2LL:
                v214 = v13;
                v140 = insn_get_next_word(a2);
                v139 = v214;
                *(_QWORD *)(a2 + 56) = v140;
                goto LABEL_448;
              case 3LL:
                v213 = v13;
                v138 = insn_get_next_dword(a2);
                v139 = v213;
                *(_QWORD *)(a2 + 56) = v138;
                if ( v138 <= 0xFFFFuLL )
                  *(_BYTE *)(a2 + 32) = 3;
LABEL_448:
                if ( (v139 & 6) != 0 )
                  return 0;
                *(_QWORD *)(a2 + 56) += v37;
                *(_WORD *)(a2 + 24) = 146;
                *(_WORD *)(a2 + 41) = 519;
                goto LABEL_450;
              case 4LL:
                if ( (v13 & 4) == 0 && (_BYTE)v16 != 2 )
                  return 0;
                v137 = 154;
                goto LABEL_442;
              case 5LL:
                if ( (v13 & 6) == 0 || (_BYTE)v16 == 4 )
                  return 0;
                v137 = 153;
LABEL_442:
                *(_WORD *)(a2 + 24) = v137;
                if ( (v9 & 4) != 0 && (_BYTE)v16 == 7 )
                  return 0;
                *(_BYTE *)(a2 + 45) = 10;
                if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
                  return 0;
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              default:
                return 0;
            }
          }
          if ( v48 != 3 || (_BYTE)v15 )
            return 0;
LABEL_115:
          v239 = v13;
          v230 = v10;
          v206 = v9;
          v49 = insn_get_next_word(a2);
          v50 = v49 >> 10;
          v51 = (v49 >> 10) & 7;
          if ( v49 > 0xBFFFu )
            return 0;
          break;
        case 1:
          if ( *(int *)(a1 + 188) <= 3 )
            return 0;
          switch ( (char)v15 )
          {
            case 0:
              v240 = v13;
              v232 = v10;
              v57 = insn_get_next_word(a2);
              v58 = v8;
              v59 = v57;
              if ( (v57 & 0xFC00) == 0x5C00 && v8 == 0xF200 )
              {
                *(_BYTE *)(a2 + 44) |= 0x10u;
                *(_WORD *)(a2 + 24) = 83;
                *(_QWORD *)(a2 + 48) = v57 & 0x7F;
                *(_BYTE *)(a2 + 41) = 5;
                *(_BYTE *)(a2 + 72) = 4;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = ((v57 >> 7) & 7) + 64;
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
              v60 = (v57 >> 10) & 7;
              if ( (v57 & 0x8000u) != 0 )
              {
                *(_WORD *)(a2 + 24) = 84;
                *(_BYTE *)(a2 + 81) = 10;
                v183 = (v57 >> 13) & 1;
                if ( v57 >> 14 == 2 )
                {
                  if ( (v57 & 0x43FF) != 0 )
                    return 0;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_QWORD *)(a2 + 88) = 3758096384LL;
                  *(_BYTE *)(a2 + 85) = 2;
                  if ( (_BYTE)v16 == 7 && (v57 & 0x2000) != 0 )
                  {
                    if ( (v58 & 6) == 0 )
                    {
                      switch ( (v57 >> 10) & 7 )
                      {
                        case 1:
                          goto LABEL_827;
                        case 2:
                          *(_WORD *)(a2 + 86) = 89;
                          goto LABEL_794;
                        case 3:
                        case 5:
                        case 6:
                        case 7:
                          goto LABEL_786;
                        case 4:
                          *(_WORD *)(a2 + 86) = 88;
                          goto LABEL_794;
                        default:
                          goto LABEL_788;
                      }
                    }
                    return 0;
                  }
                  switch ( (v57 >> 10) & 7 )
                  {
                    case 1:
LABEL_827:
                      *(_WORD *)(a2 + 86) = 90;
                      goto LABEL_794;
                    case 2:
                      v197 = 89;
                      goto LABEL_800;
                    case 3:
                    case 5:
                    case 6:
                    case 7:
LABEL_786:
                      if ( (v240 & 6) == 0 )
                        return 0;
                      *(_QWORD *)(a2 + 88) = v60 | 0xE0000000LL;
                      goto LABEL_788;
                    case 4:
                      v197 = 88;
LABEL_800:
                      *(_WORD *)(a2 + 86) = v197;
                      if ( (_BYTE)v16 == 1 )
                        return 0;
LABEL_794:
                      *(_BYTE *)(a2 + 81) = 1;
LABEL_788:
                      *(_BYTE *)(a2 + 32) = 3;
                      break;
                    default:
                      goto LABEL_788;
                  }
                }
                else
                {
                  if ( (v57 & 0x700) != 0 || (_BYTE)v16 == 7 && v232 == 4 )
                    return 0;
                  *(_QWORD *)(a2 + 88) = (unsigned __int8)v57 | 0x40000000u;
                  if ( (((unsigned __int16)((v57 >> 11) & 2) >> 1) ^ 1) != ((_BYTE)v16 == 4) )
                    return 0;
                  if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
                  {
                    if ( (_BYTE)v16 != 3 || (v57 & 0x2000) != 0 )
                    {
                      if ( (_BYTE)v16 != 4 || (v57 & 0x2000) == 0 )
                        return 0;
                    }
                    else
                    {
                      *(_QWORD *)(a2 + 88) = (unsigned __int8)v57 | 0xC0000000LL;
                    }
                  }
                  if ( (v57 & 0x800) != 0 )
                  {
                    if ( (v57 & 0x8F) != 0 )
                      return 0;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_WORD *)(a2 + 86) = (v57 >> 4) & 7;
                  }
                  else if ( ((v57 >> 11) & 2) != 0 )
                  {
                    *(_QWORD *)(a2 + 88) |= 0x80000000uLL;
                  }
                  *(_BYTE *)(a2 + 32) = 6;
                  *(_BYTE *)(a2 + 85) = 5;
                  *(_BYTE *)(a2 + 45) = 5;
                }
                if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v232, a3) )
                  return 0;
                if ( v183 )
                  sub_6C20(a2);
                result = *(unsigned __int16 *)(a2 + 26);
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 1;
                v61 = ((v57 >> 7) & 7) + 64;
                *(_WORD *)(a2 + 86) = ((v59 >> 7) & 7) + 64;
                if ( (v59 & 0x4000) != 0 )
                {
                  if ( (_BYTE)v16 == 1 )
                    return 0;
                  v62 = byte_16CB0[v60 & 7];
                  *(_BYTE *)(a2 + 32) = v62;
                  if ( (v59 & 0x2000) != 0 )
                  {
                    if ( (v58 & 6) != 0 && (_BYTE)v16 == 7 )
                      return 0;
                    if ( v60 == 7 && (v59 & 0xF) != 0 )
                      return 0;
                    v63 = v62 - 1;
                    *(_BYTE *)(a2 + 45) = v63;
                    *(_BYTE *)(a2 + 85) = v63;
                    if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v232, a3) )
                      return 0;
                    *(_WORD *)(a2 + 24) = 82;
                    sub_6C20(a2);
                    result = *(unsigned __int16 *)(a2 + 26);
                    if ( *(_BYTE *)(a2 + 85) == 6 )
                    {
                      if ( v60 == 7 )
                      {
                        v65 = (v59 >> 4) & 7;
                      }
                      else
                      {
                        v64 = v59 & 0x7F;
                        BYTE1(v64) = 1;
                        v65 = (2 * (unsigned __int8)v59) & 0x80 | v64;
                      }
                      *(_BYTE *)(a2 + 84) |= 0x20u;
                      *(_QWORD *)(a2 + 88) = v65;
                    }
                    goto LABEL_18;
                  }
                  v202 = v62 - 1;
                  *(_BYTE *)(a2 + 45) = v202;
                  *(_BYTE *)(a2 + 85) = v202;
                  if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v232, a3) )
                    return 0;
                }
                else
                {
                  if ( (v59 & 0x2000) != 0 || ((v58 | v240) & 7) != 0 )
                    return 0;
                  v184 = v60 + 64;
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = v184;
                  *(_BYTE *)(a2 + 45) = 5;
                  *(_BYTE *)(a2 + 85) = 5;
                  *(_BYTE *)(a2 + 32) = 6;
                  *(_BYTE *)(a2 + 81) = v61 != v184;
                }
                if ( (v59 & 0x38) == 0x30 )
                {
                  *(_WORD *)(a2 + 24) = 99;
                  *(_BYTE *)(a2 + 81) = 8;
                  *(_BYTE *)(a2 + 112) = (v59 & 7) + 64;
                  result = *(unsigned __int16 *)(a2 + 26);
                  goto LABEL_18;
                }
                v185 = v59 & 0x3F;
                if ( (v59 & 0x40) != 0 )
                {
                  if ( (*(_DWORD *)(a1 + 188) == 10 || *(_DWORD *)(a1 + 188) == 4) && v185 <= 0x2Cu )
                  {
                    v186 = (unsigned __int8)aEi[v59 & 0x3F];
                    *(_WORD *)(a2 + 24) = v186;
                    if ( v186 )
                    {
                      result = *(unsigned __int16 *)(a2 + 26);
                      goto LABEL_18;
                    }
                  }
                  return 0;
                }
                if ( v185 > 0x28u )
                {
                  if ( v185 == 56 )
                  {
                    *(_WORD *)(a2 + 24) = 58;
                    result = *(unsigned __int16 *)(a2 + 26);
                    goto LABEL_18;
                  }
                  if ( v185 == 58 )
                  {
                    v113 = *(_WORD *)(a2 + 86) == 64;
                    *(_WORD *)(a2 + 24) = 112;
                    if ( v113 )
                    {
                      *(_BYTE *)(a2 + 81) = 0;
                      result = *(unsigned __int16 *)(a2 + 26);
                      goto LABEL_18;
                    }
                  }
                  return 0;
                }
                v193 = (unsigned __int8)aRkdlh[v59 & 0x3F];
                *(_WORD *)(a2 + 24) = v193;
                if ( !v193 )
                  return 0;
                result = *(unsigned __int16 *)(a2 + 26);
              }
              goto LABEL_18;
            case 1:
              v207 = v8;
              v231 = v10;
              v55 = insn_get_next_word(a2);
              LOBYTE(v8) = v55;
              if ( v55 > 0x1Fu )
                return 0;
              if ( (_BYTE)v16 == 1 )
              {
                v188 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 24) = 63;
                *(_WORD *)(a2 + 46) = v231;
                *(_BYTE *)(a2 + 81) = 7;
                *(_QWORD *)(a2 + 96) = v188;
                v189 = insn_get_next_word(a2);
                *(_BYTE *)(a2 + 82) = 4;
                *(_QWORD *)(a2 + 96) += v189;
                goto LABEL_141;
              }
              if ( (v207 & 6) != 0 && (_BYTE)v16 == 7 )
              {
                if ( v231 > 4u )
                  return 0;
                *(_WORD *)(a2 + 24) = 111;
                if ( v231 != 4 )
                {
                  *(_BYTE *)(a2 + 41) = 5;
                  *(_BYTE *)(a2 + 72) = 0;
                  if ( v231 == 2 )
                  {
                    v56 = (unsigned __int16)insn_get_next_word(a2);
                  }
                  else
                  {
                    *(_BYTE *)(a2 + 45) = 2;
                    v56 = (unsigned int)insn_get_next_dword(a2);
                  }
                  *(_QWORD *)(a2 + 48) = v56;
                  *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 45) + 1;
                }
                goto LABEL_141;
              }
              *(_WORD *)(a2 + 24) = 90;
              *(_BYTE *)(a2 + 45) = 0;
              if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v231, a3) )
                goto LABEL_141;
              return 0;
            case 2:
            case 3:
              *(_QWORD *)(a2 + 56) = v37;
              if ( (_BYTE)v15 == 3 )
              {
                v180 = *(_QWORD *)(a2 + 56) + (int)insn_get_next_dword(a2);
              }
              else
              {
                v53 = insn_get_next_word(a2);
                if ( !v53 )
                {
                  *(_WORD *)(a2 + 24) = 87;
                  result = *(unsigned __int16 *)(a2 + 26);
                  goto LABEL_18;
                }
                v180 = *(_QWORD *)(a2 + 56) + v53;
              }
              *(_QWORD *)(a2 + 56) = v180;
              *(_WORD *)(a2 + 24) = 57;
              *(_WORD *)(a2 + 41) = 519;
              if ( (v8 & 0x20) != 0 )
                return 0;
LABEL_141:
              *(_DWORD *)(a2 + 28) = (v8 & 0x1F) + 33;
              result = *(unsigned __int16 *)(a2 + 26);
              break;
            case 4:
              if ( (_BYTE)v16 == 7 && (v9 & 6) != 0 )
                return 0;
              v54 = 93;
              if ( (_BYTE)v16 == 3 )
                return 0;
              goto LABEL_129;
            case 5:
              if ( (_BYTE)v10 == 4 && (_BYTE)v16 == 7 || (_BYTE)v16 == 4 )
                return 0;
              v54 = 89;
LABEL_129:
              *(_WORD *)(a2 + 24) = v54;
              if ( (v13 & 6) == 0 )
                return 0;
              *(_BYTE *)(a2 + 45) = 10;
              if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
                return 0;
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_18;
            default:
              return 0;
          }
          goto LABEL_18;
        case 2:
          v42 = *(_DWORD *)(a1 + 188);
          if ( (_BYTE)v15 || (_BYTE)v16 != 5 )
          {
            if ( v42 != 10 && v42 != 4 || (unsigned __int8)v15 > 5u )
              return 0;
            if ( (_BYTE)v15 == 5 )
            {
              if ( (v13 & 3) != 1 )
                return 0;
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 24) = ((v13 & 4) == 0) + 156;
              *(_WORD *)(a2 + 46) = (unsigned __int8)v10 | 0x10;
              goto LABEL_18;
            }
            if ( (_BYTE)v15 == 4 )
            {
              if ( (v13 & 4) != 0 )
                return 0;
              *(_WORD *)(a2 + 24) = 148;
              if ( (v13 & 6) == 0 )
              {
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 16);
              }
              *(_DWORD *)(a2 + 28) = (unsigned __int8)(v16 + 68);
              goto LABEL_18;
            }
          }
          else
          {
            if ( (unsigned int)(v42 - 9) <= 1 )
            {
              *(_WORD *)(a2 + 24) = 193;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v10 + 8);
              goto LABEL_18;
            }
            if ( v42 != 4 )
              return 0;
          }
          v43 = v13 & 3;
          if ( (v13 & 3) == 0 )
            return 0;
          v44 = 33;
          if ( (v13 & 4) != 0 )
            v44 = 40;
          *(_WORD *)(a2 + 24) = v44;
          *(_BYTE *)(a2 + 41) = 11;
          *(_DWORD *)(a2 + 28) = (unsigned __int8)(v43 + 64);
          *(_WORD *)(a2 + 46) = (unsigned __int8)v15;
          if ( v43 != 3 )
          {
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = (unsigned __int8)v10 | 0x10;
          }
          goto LABEL_18;
        case 3:
          v45 = *(_DWORD *)(a1 + 188);
          if ( v45 != 4 && v45 != 10 )
            return 0;
          v205 = v13;
          if ( (_BYTE)v15 )
            return 0;
          if ( (unsigned __int8)v16 > 4u )
            return 0;
          v46 = insn_get_next_word(a2);
          v47 = v46;
          BYTE1(v46) &= 0x8Fu;
          if ( (_WORD)v46 != 0x8000 )
            return 0;
          *(_WORD *)(a2 + 24) = 126;
          *(_BYTE *)(a2 + 85) = 8;
          *(_BYTE *)(a2 + 45) = 8;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = 27;
          if ( (_BYTE)v16 == 4 )
          {
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = ((unsigned __int16)v47 >> 12) & 7 | 0x18;
            result = *(unsigned __int16 *)(a2 + 26);
          }
          else
          {
            *(_BYTE *)(a2 + 42) = 2;
            v172 = insn_get_next_word(a2);
            *(_BYTE *)(a2 + 41) = 2;
            *(_BYTE *)(a2 + 72) = 2;
            *(_QWORD *)(a2 + 56) = v172 | (unsigned int)(v47 << 16);
            if ( (v205 & 6) != 0 )
              *(_WORD *)(a2 + 86) &= 0x17u;
            if ( (v205 & 1) == 0 )
              sub_6C20(a2);
            result = *(unsigned __int16 *)(a2 + 26);
          }
          goto LABEL_18;
        case 4:
          v40 = *(_DWORD *)(a1 + 188);
          if ( v40 != 5 && v40 != 10 )
            return 0;
          v242 = v13;
          v238 = v15;
          v229 = v10;
          v204 = v9;
          v41 = insn_get_next_word(a2);
          if ( v8 == 0xF800 && v41 == 448 )
          {
            *(_BYTE *)(a2 + 44) |= 0x10u;
            *(_WORD *)(a2 + 24) = 120;
            *(_BYTE *)(a2 + 72) = 1;
            *(_WORD *)(a2 + 41) = 1029;
            *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word(a2);
            result = *(unsigned __int16 *)(a2 + 26);
            goto LABEL_18;
          }
          if ( v238 )
            return 0;
          if ( (v41 & 0x8238) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 181;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v41 >> 12;
          v146 = (unsigned __int8)v41 >> 6;
          *(_BYTE *)(a2 + 45) = (unsigned __int8)v41 >> 6;
          if ( (unsigned __int8)v41 >> 6 == 3 )
            return 0;
          *(_BYTE *)(a2 + 85) = v146;
          *(_BYTE *)(a2 + 32) = v146 + 1;
          *(_DWORD *)(a2 + 28) = (unsigned __int16)(((v41 >> 10) & 3) + 72);
          if ( (v41 & 0x100) != 0 )
          {
            if ( ((_BYTE)v16 == 2 || (v242 & 4) != 0 && ((v204 & 4) == 0 || (_BYTE)v16 != 7))
              && (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v229, a3) )
            {
              result = *(unsigned __int16 *)(a2 + 26);
              goto LABEL_18;
            }
            return 0;
          }
          if ( (_BYTE)v16 )
            return 0;
          *(_BYTE *)(a2 + 41) = 8;
          *(_WORD *)(a2 + 46) = v41 & 7;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 72) = v229;
          goto LABEL_18;
        case 5:
          if ( (unsigned int)(*(_DWORD *)(a1 + 188) - 9) > 1 )
            return 0;
          if ( (_BYTE)v15 != 7 )
            return 0;
          v52 = 36;
          if ( !_bittest64(&v52, v16) )
            return 0;
          *(_BYTE *)(a2 + 32) = 3;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v10, a3) )
            return 0;
          *(_WORD *)(a2 + 24) = 188;
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
        default:
          return 0;
      }
      switch ( v49 >> 13 )
      {
        case 0:
          v75 = *(_DWORD *)(a1 + 188);
          if ( v75 != 3 && v75 != 10 || (v49 & 0x18FF) != 0x800 )
            return 0;
          *(_WORD *)(a2 + 86) = 122 - ((v49 & 0x400) == 0);
          v76 = 2;
          goto LABEL_211;
        case 1:
          if ( (v49 & 0x1FF8) == 0xC00 || v49 == 10240 )
          {
            if ( *(int *)(a1 + 188) > 6
              && ((unsigned __int8)v16 > 4u || (_BYTE)v16 == 2)
              && ((v206 & 6) == 0 || (_BYTE)v16 != 7) )
            {
              *(_BYTE *)(a2 + 85) = 2;
              v196 = 115;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 24) = 160;
              *(_BYTE *)(a2 + 41) = 1;
              if ( (v49 & 0x400) != 0 )
                v196 = v49 & 7 | 8;
              *(_WORD *)(a2 + 46) = v196;
              if ( (unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v230, a3) )
              {
                result = *(unsigned __int16 *)(a2 + 26);
                goto LABEL_18;
              }
            }
            return 0;
          }
          v70 = v49 & 0x200;
          if ( (v49 & 0x1DE0) == 0 )
          {
            v71 = 151;
            if ( v70 )
              v71 = 150;
            *(_WORD *)(a2 + 24) = v71;
LABEL_164:
            if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
              return 0;
            if ( (v206 & 6) != 0 && (_BYTE)v16 == 7 )
              return 0;
            *(_BYTE *)(a2 + 85) = 10;
            if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 80, (unsigned __int8)v16, v230, a3) )
              return 0;
            goto LABEL_169;
          }
          if ( v70 || *(int *)(a1 + 188) <= 6 && (v49 & 0x100) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 148;
          *(_QWORD *)(a2 + 88) = (v49 >> 5) & 0xF;
          if ( ((v49 >> 5) & 0xF) != 0 )
          {
            if ( (v49 & 0x1800) == 0 )
              return 0;
            v194 = v49 & 0x1C00;
            if ( (v49 & 0x1C00) == 0x400 )
              return 0;
          }
          else
          {
            v194 = v49 & 0x1C00;
            if ( (v49 & 0x1C00) == 0x400 )
              goto LABEL_755;
          }
          *(_BYTE *)(a2 + 84) |= 0x10u;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 112) = 4;
          if ( v194 > 0x17FFu )
          {
            if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
              return 0;
            if ( (v206 & 6) != 0 && (_BYTE)v16 == 7 )
              return 0;
            *(_BYTE *)(a2 + 125) = 10;
            if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 120, (unsigned __int8)v16, v230, a3) )
              return 0;
          }
LABEL_755:
          *(_DWORD *)(a2 + 28) = v51;
          if ( !v51 )
            return 0;
          if ( (v50 & 4) == 0 )
          {
            if ( v51 != 1 )
              return 0;
            *(_DWORD *)(a2 + 28) = 71;
            result = *(unsigned __int16 *)(a2 + 26);
            goto LABEL_18;
          }
          if ( (v49 & 0x400) != 0 )
          {
            if ( *(int *)(a1 + 188) <= 6 )
              return 0;
            *(_DWORD *)(a2 + 28) = 74;
          }
          else
          {
            *(_DWORD *)(a2 + 28) = 69;
          }
LABEL_169:
          *(_BYTE *)(a2 + 41) = 1;
          v67 = v49 & 0x1F;
          if ( (v49 & 0x18) == 0 )
          {
            if ( (v49 & 0x1E) != 0 )
              return 0;
            *(_WORD *)(a2 + 46) = 97 - (v67 == 0);
            result = *(unsigned __int16 *)(a2 + 26);
            goto LABEL_18;
          }
          if ( (v49 & 0x10) == 0 )
          {
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 46) = v49 & 7;
            goto LABEL_18;
          }
          if ( v67 <= 0x17u || *(int *)(a1 + 188) > 6 )
          {
            *(_BYTE *)(a2 + 44) |= 0x10u;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_QWORD *)(a2 + 48) = v49 & 0xF;
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 72) = 4;
            goto LABEL_18;
          }
          return 0;
        case 2:
          v72 = *(_DWORD *)(a1 + 188);
          if ( v72 == 3 || v72 == 10 )
          {
            if ( (v49 & 0x10FF) == 0 )
            {
              v191 = v50 & 3;
              v192 = byte_16CB8[v191];
              *(_WORD *)(a2 + 86) = v192;
              if ( !v192 )
                return 0;
              v76 = byte_16CC8[v191];
LABEL_211:
              *(_BYTE *)(a2 + 45) = v76;
              if ( (v49 & 0x100) != 0 )
                *(_DWORD *)(a2 + 28) = 76;
              goto LABEL_179;
            }
            if ( v72 != 10 )
              return 0;
          }
          else if ( v72 <= 6 || (v49 & 0x1FF) != 0 )
          {
            return 0;
          }
          v73 = (v49 >> 10) & 7;
          *(_WORD *)(a2 + 86) = byte_16CC0[v73];
          v74 = byte_16CC8[v73];
          *(_BYTE *)(a2 + 45) = v74;
          if ( v74 != 7 || (v239 & 6) != 0 )
            goto LABEL_179;
          return 0;
        case 3:
          v68 = *(_DWORD *)(a1 + 188);
          if ( v68 == 3 || v68 == 10 )
          {
            if ( (v49 & 0x1DFF) == 0 )
            {
              if ( (unsigned __int8)v16 <= 4u && (_BYTE)v16 != 2 )
                return 0;
              *(_WORD *)(a2 + 86) = 120;
LABEL_179:
              v69 = v49 & 0x200;
              if ( !v69 || (v206 & 6) == 0 || (_BYTE)v16 != 7 )
              {
                *(_WORD *)(a2 + 24) = 152;
                *(_BYTE *)(a2 + 81) = 1;
                if ( *(int *)(a1 + 188) > 6 || (unsigned __int8)v16 > 4u || (_BYTE)v16 == 2 )
                {
                  if ( (unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v230, a3) )
                  {
                    if ( v69 )
                      sub_6C20(a2);
                    result = *(unsigned __int16 *)(a2 + 26);
                    goto LABEL_18;
                  }
                }
              }
              return 0;
            }
            if ( v68 != 10 )
              return 0;
          }
          else if ( v68 <= 6 || (v49 & 0x9E3) != 0 )
          {
            return 0;
          }
          if ( (v49 & 0x1000) != 0 )
          {
            v195 = 72;
            if ( (v49 & 0x400) != 0 )
              v195 = 80;
            *(_WORD *)(a2 + 86) = v195 + ((v49 >> 2) & 7);
          }
          else
          {
            if ( (v49 & 0x1C) != 0 )
              return 0;
            *(_WORD *)(a2 + 86) = 119 - ((v49 & 0x400) == 0);
          }
          goto LABEL_179;
        case 4:
          v66 = *(_DWORD *)(a1 + 188);
          if ( v66 <= 6 && v66 != 3 )
            return 0;
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 152) = 4;
          *(_BYTE *)(a2 + 124) |= 0x10u;
          *(_WORD *)(a2 + 24) = ((v49 & 0x200) == 0) + 156;
          *(_QWORD *)(a2 + 128) = v51;
          *(_BYTE *)(a2 + 125) = 10;
          if ( (v49 & 0x1E0) == 0 )
            goto LABEL_164;
          if ( (v49 & 0x100) == 0 )
            return 0;
          *(_BYTE *)(a2 + 152) = 5;
          *(_WORD *)(a2 + 126) = ((unsigned __int8)v49 >> 5) | 8;
          goto LABEL_164;
        case 5:
          if ( *(int *)(a1 + 188) <= 6 )
            return 0;
          if ( v49 != 0xA000 )
            return 0;
          if ( (v239 & 6) == 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 149;
          *(_BYTE *)(a2 + 45) = 7;
          if ( !(unsigned int)sub_6FD0(a1, a2, a2 + 40, (unsigned __int8)v16, v230, a3) )
            return 0;
          result = *(unsigned __int16 *)(a2 + 26);
          goto LABEL_18;
      }
  }
}

