__int64 __fastcall sub_7A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int *v7; // r15
  int v8; // r12d
  int next_byte; // r13d
  int v10; // edx
  __int16 v11; // bp
  unsigned __int8 byte; // al
  __int64 v13; // rdx
  int v14; // esi
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  unsigned __int16 v19; // ax
  __int64 result; // rax
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // dl
  __int16 v25; // bp
  __int16 v26; // r12
  __int16 v27; // ax
  __int16 v28; // dx
  unsigned __int16 v29; // si
  char v30; // al
  __int64 v31; // rax
  unsigned __int8 v32; // bp
  __int16 v33; // ax
  char v34; // al
  char v35; // cl
  char v36; // dl
  __int16 v37; // ax
  __int16 v38; // dx
  unsigned __int16 v39; // ax
  __int16 v40; // dx
  unsigned __int8 v41; // al
  unsigned __int8 v42; // al
  char v43; // al
  __int64 v44; // rdx
  char v45; // al
  char v46; // cl
  char v47; // dl
  __int16 v48; // ax
  __int16 v49; // dx
  unsigned __int16 v50; // ax
  __int64 v51; // r12
  __int64 v52; // r13
  char v53; // al
  __int16 v54; // ax
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  int v57; // ecx
  __int16 v58; // ax
  __int64 v59; // rdx
  unsigned __int8 v60; // al
  __int64 v61; // rdx
  int v62; // ecx
  __int16 v63; // ax
  __int64 v64; // rdx
  __int16 v65; // ax
  unsigned __int8 v66; // al
  __int64 v67; // rcx
  int v68; // edx
  __int16 v69; // ax
  __int64 v70; // rax
  unsigned __int8 v71; // al
  __int64 v72; // rcx
  int v73; // edx
  __int16 v74; // ax
  __int64 v75; // rax
  __int16 v76; // ax
  __int16 v77; // ax
  char v78; // cl
  unsigned __int16 v79; // ax
  unsigned __int8 v80; // al
  char v81; // al
  unsigned __int16 v82; // ax
  unsigned __int8 v83; // bp
  __int16 v84; // ax
  unsigned __int8 v85; // al
  char v86; // al
  __int16 v87; // ax
  unsigned __int8 v88; // bp
  __int16 v89; // ax
  __int16 v90; // ax
  unsigned __int8 v91; // al
  int v92; // edx
  unsigned __int8 v93; // bp
  __int16 v94; // ax
  __int16 v95; // ax
  char v96; // al
  char v97; // cl
  char v98; // dl
  __int16 v99; // ax
  __int16 v100; // dx
  unsigned __int8 v101; // bp
  __int16 v102; // ax
  unsigned __int16 v103; // ax
  unsigned __int8 v104; // bp
  __int16 v105; // ax
  unsigned __int16 v106; // ax
  unsigned __int8 v107; // bp
  __int16 v108; // ax
  char v109; // cl
  unsigned __int16 next_word; // ax
  unsigned __int8 v111; // al
  int v112; // edx
  unsigned __int8 v113; // bp
  __int16 v114; // ax
  unsigned __int8 v115; // al
  unsigned __int8 v116; // bp
  __int16 v117; // ax
  unsigned __int8 v118; // al
  __int16 v119; // bp
  char v120; // al
  unsigned __int8 v121; // bp
  __int16 v122; // ax
  char v123; // dl
  __int16 v124; // bp
  char v125; // al
  unsigned __int8 v126; // al
  unsigned __int16 v127; // ax
  unsigned __int8 v128; // al
  __int16 v129; // bp
  char v130; // al
  unsigned __int8 v131; // bp
  __int16 v132; // ax
  unsigned __int8 v133; // bp
  __int16 v134; // ax
  char v135; // al
  unsigned __int8 v136; // al
  __int16 v137; // dx
  unsigned __int8 v138; // al
  unsigned __int8 v139; // al
  __int16 v140; // dx
  unsigned __int8 v141; // al
  __int16 v142; // dx
  unsigned __int16 v143; // ax
  int v144; // ebp
  unsigned __int16 v145; // ax
  unsigned __int8 v146; // bp
  __int16 v147; // ax
  unsigned __int8 v148; // bp
  __int16 v149; // ax
  unsigned __int16 v150; // ax
  unsigned __int8 v151; // bp
  unsigned __int16 v152; // ax
  unsigned __int8 v153; // bp
  unsigned __int16 v154; // ax
  __int16 v155; // dx
  unsigned __int16 v156; // si
  char v157; // al
  char v158; // cl
  char v159; // dl
  __int16 v160; // ax
  __int16 v161; // dx
  unsigned __int8 v162; // bp
  char v163; // al
  unsigned __int16 v164; // ax
  int v165; // ebp
  __int16 v166; // ax
  unsigned __int8 v167; // bp
  char v168; // al
  unsigned __int8 v169; // bp
  __int16 v170; // ax
  unsigned __int8 v171; // bp
  unsigned __int16 v172; // ax
  unsigned __int8 v173; // al
  unsigned __int8 v174; // bp
  char v175; // al
  unsigned __int16 v176; // ax
  int v177; // ebp
  unsigned __int8 v178; // bp
  __int16 v179; // ax
  unsigned __int8 v180; // bp
  __int16 v181; // ax
  unsigned __int8 v182; // al
  unsigned __int8 v183; // bp
  __int16 v184; // ax
  unsigned __int8 v185; // al
  unsigned __int8 v186; // bp
  unsigned __int16 v187; // ax
  __int16 v188; // dx
  unsigned __int16 v189; // si
  unsigned __int8 v190; // bp
  __int16 v191; // ax
  unsigned __int16 v192; // ax
  char v193; // bp
  char v194; // al
  unsigned __int16 v195; // ax
  unsigned __int8 v196; // bp
  __int16 v197; // ax
  unsigned __int8 v198; // bp
  __int16 v199; // ax
  unsigned __int8 v200; // al
  unsigned __int8 v201; // bp
  __int16 v202; // ax
  unsigned __int16 v203; // ax
  unsigned __int8 v204; // bp
  unsigned __int16 v205; // ax
  __int16 v206; // dx
  unsigned __int16 v207; // si
  unsigned __int8 v208; // bp
  char v209; // al
  char v210; // bp
  char v211; // al
  unsigned __int16 v212; // ax
  char v213; // al
  char v214; // cl
  char v215; // dl
  __int16 v216; // ax
  __int16 v217; // dx
  __int16 v218; // ax
  unsigned __int8 v219; // bp
  char v220; // al
  unsigned __int8 v221; // al
  unsigned __int8 v222; // al
  unsigned __int16 v223; // ax
  unsigned __int16 v224; // ax
  __int16 v225; // dx
  unsigned __int8 v226; // bp
  __int16 v227; // ax
  char v228; // dl
  __int16 v229; // bp
  __int64 v230; // r13
  int v231; // eax
  unsigned __int16 v232; // ax
  __int64 v233; // r13
  int v234; // eax
  char v235; // al
  __int64 v236; // rcx
  __int64 v237; // rdx
  char v238; // al
  __int64 v239; // rdx
  __int64 v240; // rcx
  unsigned __int8 v241; // al
  __int64 v242; // rdx
  __int64 v243; // rcx
  char v244; // al
  int v245; // edx
  int v246; // ecx
  int v247; // r8d
  int v248; // r9d
  unsigned int v249; // [rsp+Ch] [rbp-3Ch]
  unsigned int v250; // [rsp+Ch] [rbp-3Ch]
  unsigned int v251; // [rsp+Ch] [rbp-3Ch]
  unsigned int v252; // [rsp+Ch] [rbp-3Ch]
  unsigned int v253; // [rsp+Ch] [rbp-3Ch]
  unsigned int v254; // [rsp+Ch] [rbp-3Ch]

  v7 = &dword_103C4;
  v8 = 0;
  next_byte = (unsigned __int8)insn_get_next_byte();
  v10 = 0;
  v11 = 0;
LABEL_2:
  if ( next_byte != v10 )
    goto LABEL_13;
LABEL_3:
  byte = get_byte();
  v13 = *(unsigned __int16 *)v7;
  v14 = byte;
  if ( (unsigned __int16)v13 > 0x3Bu )
  {
    if ( (unsigned __int16)v13 > 0x4Eu )
    {
      switch ( *(_WORD *)v7 )
      {
        case 'O':
        case 'R':
          goto LABEL_25;
        case 'P':
        case '^':
          goto LABEL_31;
        case 'Q':
        case '[':
        case ']':
LABEL_26:
          v16 = 0;
          v17 = 16;
          goto LABEL_8;
        case 'S':
          goto LABEL_7;
        case 'T':
        case 'U':
        case 'V':
          goto LABEL_9;
        case 'W':
        case 'Y':
          v251 = *(unsigned __int16 *)v7;
          v21 = get_byte();
          v13 = v251;
          if ( (v21 & 0x10) == 0 )
            goto LABEL_31;
          goto LABEL_13;
        case 'X':
        case 'Z':
          v252 = *(unsigned __int16 *)v7;
          v22 = get_byte();
          v13 = v252;
          if ( (v22 & 0x10) == 0 )
            goto LABEL_13;
          goto LABEL_31;
        case '\\':
          goto LABEL_38;
        case '_':
          v16 = 64;
          v17 = 192;
          goto LABEL_8;
        case '`':
          v16 = 192;
          v17 = 192;
          goto LABEL_8;
        case 'a':
          v16 = 0;
          v17 = 7;
          goto LABEL_8;
        case 'b':
          v16 = 4;
          v17 = 7;
          goto LABEL_8;
        case 'c':
          v16 = 5;
          v17 = 7;
          goto LABEL_8;
        case 'd':
          v16 = 2;
          v17 = 3;
          goto LABEL_8;
        default:
          if ( v11 )
            ++*(_WORD *)(a1 + 26);
          *(_WORD *)(a1 + 24) = *(_WORD *)&byte_103C0[6 * v8 + 2];
          return *(unsigned __int16 *)(a1 + 26);
      }
    }
    v31 = 1LL << ((unsigned __int8)v13 - 60);
    if ( (v31 & 0x51590) != 0 )
      goto LABEL_7;
    if ( (v31 & 0x22A60) == 0 )
    {
      if ( (v31 & 1) != 0 )
      {
LABEL_31:
        v16 = 16;
        v17 = 16;
        goto LABEL_8;
      }
LABEL_9:
      if ( v11 )
        ++*(_WORD *)(a1 + 26);
      v18 = *(unsigned __int16 *)&byte_103C0[6 * v8 + 2];
      *(_WORD *)(a1 + 24) = v18;
      switch ( v13 )
      {
        case 1LL:
          LOBYTE(v19) = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((int)(unsigned __int8)v19 >> 4) + 512;
          goto LABEL_20;
        case 2LL:
          v91 = insn_get_next_byte();
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          v92 = (int)v91 >> 4;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 86) = (v91 & 0xF) + 512;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 46) = v92 + 512;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          return result;
        case 3LL:
          LOBYTE(v19) = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((int)(unsigned __int8)v19 >> 4) + 512;
LABEL_20:
          *(_BYTE *)(a1 + 81) = 1;
          goto LABEL_21;
        case 4LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_361;
          LOBYTE(v87) = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          v87 = (unsigned __int8)v87;
          if ( (int)(unsigned __int8)v87 >> 4 == 13 )
            v87 = (v87 & 0xF) + 512;
          goto LABEL_122;
        case 5LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_349;
          v178 = insn_get_next_byte();
          v179 = sub_79E0(*(_WORD *)(a1 + 24), v178);
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_WORD *)(a1 + 24) = v179;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v178 & 0xF) + 512;
          goto LABEL_106;
        case 6LL:
        case 7LL:
          LOBYTE(v76) = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          v76 = (unsigned __int8)v76;
          if ( (int)(unsigned __int8)v76 >> 4 == 13 )
            v76 = (v76 & 0xF) + 512;
          goto LABEL_104;
        case 8LL:
          LOBYTE(v218) = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v218 = (unsigned __int8)v218;
          *(_BYTE *)(a1 + 45) = 0;
          if ( (int)(unsigned __int8)v218 >> 4 == 13 )
            v218 = (v218 & 0xF) + 512;
          *(_WORD *)(a1 + 46) = v218;
          goto LABEL_119;
        case 9LL:
          v213 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v214 = v213;
          v215 = v213;
          *(_BYTE *)(a1 + 45) = 0;
          v216 = (v213 & 0xE) + 528;
          v217 = (v215 & 0xFE) + 256;
          if ( (v214 & 0xFE) >> 4 != 13 )
            v216 = v217;
          *(_WORD *)(a1 + 46) = v216;
          goto LABEL_196;
        case 10LL:
        case 11LL:
          v45 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v46 = v45;
          v47 = v45;
          *(_BYTE *)(a1 + 45) = 0;
          v48 = (v45 & 0xE) + 528;
          v49 = (v47 & 0xFE) + 256;
          if ( (v46 & 0xFE) >> 4 != 13 )
            v48 = v49;
          *(_WORD *)(a1 + 46) = v48;
          goto LABEL_76;
        case 12LL:
          v123 = insn_get_next_byte();
          v124 = (v123 & 0xFE) + 256;
          if ( (v123 & 0xFE) >> 4 == 13 )
            v124 = (v123 & 0xE) + 528;
          if ( *(_WORD *)(a1 + 24) == 82 )
          {
            v238 = insn_get_next_byte();
            v239 = *(unsigned __int16 *)(a1 + 26);
            *(_BYTE *)(a1 + 81) = 7;
            v240 = v238;
            *(_BYTE *)(a1 + 85) = 0;
            result = v239;
            *(_QWORD *)(a1 + 96) = v240 + *(_QWORD *)(a1 + 8) + v239;
          }
          else
          {
            v125 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 5;
            *(_BYTE *)(a1 + 85) = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)~v125;
            result = *(unsigned __int16 *)(a1 + 26);
          }
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v124;
          *(_BYTE *)(a1 + 45) = 0;
          return result;
        case 13LL:
          if ( (_WORD)v18 != 1 )
            goto LABEL_106;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (next_byte >> 4) + 512;
          goto LABEL_125;
        case 14LL:
        case 16LL:
          v65 = (unsigned __int8)insn_get_next_byte();
          if ( (int)(unsigned __int8)v65 >> 4 == 13 )
            v65 = (v65 & 0xF) + 512;
          goto LABEL_93;
        case 15LL:
          if ( (_WORD)v18 != 1 )
            goto LABEL_106;
          *(_BYTE *)(a1 + 81) = 1;
          v76 = (next_byte >> 4) + 512;
LABEL_104:
          *(_WORD *)(a1 + 86) = v76;
          goto LABEL_105;
        case 17LL:
        case 18LL:
        case 22LL:
        case 23LL:
        case 24LL:
          goto LABEL_61;
        case 19LL:
        case 25LL:
          v78 = insn_get_next_byte();
          v65 = (v78 & 0xE) + 528;
          if ( (v78 & 0xFE) >> 4 != 13 )
            v65 = (v78 & 0xFE) + 256;
LABEL_93:
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v65;
          *(_BYTE *)(a1 + 45) = 0;
          return *(unsigned __int16 *)(a1 + 26);
        case 20LL:
          if ( (unsigned int)(unsigned __int16)v18 - 73 <= 1 )
          {
            v233 = (unsigned int)(next_byte - 11);
            v234 = 0;
            if ( (unsigned int)v233 <= 0xF2 )
              v234 = *((char *)&off_102C0 + v233);
            *(_DWORD *)(a1 + 28) |= v234;
            v235 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 7;
            v236 = v235;
          }
          else
          {
            if ( (_WORD)v18 == 81 )
            {
              *(_BYTE *)(a1 + 41) = 1;
              *(_BYTE *)(a1 + 45) = 0;
              *(_WORD *)(a1 + 46) = (next_byte >> 4) + 512;
LABEL_72:
              v43 = insn_get_next_byte();
              v44 = *(unsigned __int16 *)(a1 + 26);
              *(_BYTE *)(a1 + 81) = 7;
              *(_BYTE *)(a1 + 85) = 0;
              *(_QWORD *)(a1 + 96) = v43 + *(_QWORD *)(a1 + 8) + v44;
              return v44;
            }
            if ( (_WORD)v18 == 1 )
            {
              *(_BYTE *)(a1 + 41) = 1;
              *(_BYTE *)(a1 + 45) = 0;
              *(_WORD *)(a1 + 46) = (next_byte >> 4) + 512;
              v241 = insn_get_next_byte();
              v242 = *(unsigned __int16 *)(a1 + 26);
              v243 = *(char *)(a1 + 96);
              *(_BYTE *)(a1 + 81) = 5;
              *(_BYTE *)(a1 + 85) = 0;
              *(_QWORD *)(a1 + 88) = v241;
              *(_QWORD *)(a1 + 96) = v243 + *(_QWORD *)(a1 + 8) + v242;
              return v242;
            }
            if ( (unsigned __int16)(v18 - 45) <= 1u || (_WORD)v18 == 50 )
            {
              v138 = insn_get_next_byte();
              *(_BYTE *)(a1 + 41) = 5;
              *(_BYTE *)(a1 + 45) = 0;
              *(_QWORD *)(a1 + 48) = v138;
              return *(unsigned __int16 *)(a1 + 26);
            }
            v244 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 2;
            v236 = v244;
          }
          v237 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 56) = v236 + *(_QWORD *)(a1 + 8) + v237;
          return v237;
        case 21LL:
          if ( (unsigned int)(unsigned __int16)v18 - 73 <= 1 )
          {
            v230 = (unsigned int)(next_byte - 11);
            v231 = 0;
            if ( (unsigned int)v230 <= 0xF2 )
              v231 = *((char *)&off_102C0 + v230);
            *(_DWORD *)(a1 + 28) |= v231;
          }
          else if ( (_WORD)v18 != 77 )
          {
            if ( (unsigned __int16)(v18 - 50) <= 1u || (unsigned __int16)(v18 - 45) <= 1u )
            {
              next_word = insn_get_next_word();
              *(_BYTE *)(a1 + 41) = 5;
              *(_BYTE *)(a1 + 45) = 1;
              *(_QWORD *)(a1 + 48) = next_word;
              return *(unsigned __int16 *)(a1 + 26);
            }
LABEL_242:
            v203 = insn_get_next_word();
            *(_BYTE *)(a1 + 41) = 2;
            *(_BYTE *)(a1 + 45) = 0;
            *(_QWORD *)(a1 + 56) = v203;
            return *(unsigned __int16 *)(a1 + 26);
          }
          v232 = insn_get_next_word();
          *(_BYTE *)(a1 + 41) = 7;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 56) = v232;
          return *(unsigned __int16 *)(a1 + 26);
        case 26LL:
          goto LABEL_114;
        case 27LL:
          v82 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((v82 >> 4) & 0xE) + 528;
          goto LABEL_115;
        case 28LL:
          v150 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((v150 >> 4) & 0xE) + 528;
          goto LABEL_190;
        case 29LL:
          v150 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((v150 >> 4) & 0xE) + 528;
LABEL_190:
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = (v150 & 0xE) + 528;
          *(_BYTE *)(a1 + 85) = 0;
          return *(unsigned __int16 *)(a1 + 26);
        case 30LL:
        case 31LL:
        case 32LL:
        case 33LL:
          v39 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 3;
          v40 = ((v39 >> 4) & 0xE) + 528;
          goto LABEL_67;
        case 34LL:
          v19 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 46) = ((v19 >> 4) & 0xE) + 528;
          goto LABEL_21;
        case 35LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_333;
          v219 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v219);
          v220 = insn_get_next_byte();
          v188 = (v219 & 0xE) + 528;
          v189 = v220;
          goto LABEL_232;
        case 36LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_345;
          v186 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v186);
          v187 = insn_get_next_word();
          v188 = (v186 & 0xE) + 528;
          v189 = v187;
LABEL_232:
          sub_79C0(a1 + 40, v189, v188, 1);
          goto LABEL_76;
        case 37LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_363;
          v208 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v208);
          v209 = insn_get_next_byte();
          v206 = (v208 & 0xE) + 528;
          v207 = v209;
          goto LABEL_245;
        case 38LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_303;
          v204 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v204);
          v205 = insn_get_next_word();
          v206 = (v204 & 0xE) + 528;
          v207 = v205;
LABEL_245:
          sub_79C0(a1 + 40, v207, v206, 0);
          goto LABEL_125;
        case 39LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_309;
          v221 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v221);
          v222 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = v222;
          v223 = insn_get_next_word();
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 56) = v223;
          return *(unsigned __int16 *)(a1 + 26);
        case 40LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_339;
          v126 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v126);
          v127 = insn_get_next_word();
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 1;
          *(_QWORD *)(a1 + 88) = v127;
          goto LABEL_137;
        case 41LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_329;
          v145 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 3;
          *(_BYTE *)(a1 + 113) = 2;
          *(_BYTE *)(a1 + 85) = 0;
          *(_BYTE *)(a1 + 114) = (v145 & 0xE) + 16;
          *(_WORD *)(a1 + 86) = ((v145 >> 4) & 0xE) + 528;
          v146 = insn_get_next_byte();
          v147 = sub_79E0(*(_WORD *)(a1 + 24), v146);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = v147;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v146 & 0xF) + 512;
          return *(unsigned __int16 *)(a1 + 26);
        case 42LL:
          if ( (_WORD)v18 == 103 )
          {
            v143 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 3;
            *(_BYTE *)(a1 + 73) = 2;
            *(_BYTE *)(a1 + 45) = 0;
            *(_BYTE *)(a1 + 74) = (v143 & 0xE) + 16;
            *(_WORD *)(a1 + 46) = ((v143 >> 4) & 0xE) + 528;
            v144 = (unsigned __int8)insn_get_next_byte();
            v19 = sub_79E0(*(_WORD *)(a1 + 24), v144);
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 24) = v19;
            LOBYTE(v19) = v144;
LABEL_21:
            *(_BYTE *)(a1 + 85) = 0;
            *(_WORD *)(a1 + 86) = (v19 & 0xF) + 512;
            return *(unsigned __int16 *)(a1 + 26);
          }
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_289:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_291:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_293:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_295:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_297:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_299:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_301:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_303:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_305:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_307:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_309:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_311:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_313:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_315:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_317:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_319:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_321:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_323:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_325:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_327:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_329:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_331:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_333:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_335:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_337:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_339:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_341:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_343:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_345:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_347:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_349:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_351:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_353:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_355:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_357:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_359:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_361:
          if ( under_debugger )
            goto LABEL_365;
          interr();
LABEL_363:
          if ( under_debugger )
LABEL_365:
            BUG();
          interr();
          return sub_9BD0(10041, v18, v245, v246, v247, v248, a7);
        case 43LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_327;
          v164 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 3;
          *(_BYTE *)(a1 + 113) = 2;
          *(_BYTE *)(a1 + 85) = 1;
          *(_BYTE *)(a1 + 114) = (v164 & 0xE) + 16;
          *(_WORD *)(a1 + 86) = ((v164 >> 4) & 0xE) + 528;
          v165 = (unsigned __int8)insn_get_next_byte();
          v166 = sub_79E0(*(_WORD *)(a1 + 24), v165);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = v166;
          LOBYTE(v166) = v165;
          goto LABEL_205;
        case 44LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_299;
          v176 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 3;
          *(_BYTE *)(a1 + 73) = 2;
          *(_BYTE *)(a1 + 45) = 1;
          *(_BYTE *)(a1 + 74) = (v176 & 0xE) + 16;
          *(_WORD *)(a1 + 46) = ((v176 >> 4) & 0xE) + 528;
          v177 = (unsigned __int8)insn_get_next_byte();
          v82 = sub_79E0(*(_WORD *)(a1 + 24), v177);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = v82;
          LOBYTE(v82) = v177;
          goto LABEL_116;
        case 45LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_357;
          v148 = insn_get_next_byte();
          v149 = sub_79E0(*(_WORD *)(a1 + 24), v148);
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_WORD *)(a1 + 24) = v149;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v148 & 0xE) + 528;
          goto LABEL_106;
        case 46LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_359;
          v169 = insn_get_next_byte();
          v170 = sub_79E0(*(_WORD *)(a1 + 24), v169);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_WORD *)(a1 + 24) = v170;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v169 & 0xE) + 528;
LABEL_125:
          LOBYTE(v90) = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          v90 = (unsigned __int8)v90;
          *(_BYTE *)(a1 + 85) = 0;
          if ( (int)(unsigned __int8)v90 >> 4 == 13 )
            v90 = (v90 & 0xF) + 512;
          *(_WORD *)(a1 + 86) = v90;
          return *(unsigned __int16 *)(a1 + 26);
        case 47LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_305;
          v107 = insn_get_next_byte();
          v108 = sub_79E0(*(_WORD *)(a1 + 24), v107);
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_WORD *)(a1 + 24) = v108;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v107 & 0xE) + 528;
          v109 = insn_get_next_byte();
          v54 = (v109 & 0xE) + 528;
          if ( (v109 & 0xFE) >> 4 != 13 )
            v54 = (v109 & 0xFE) + 256;
LABEL_81:
          *(_WORD *)(a1 + 46) = v54;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          return result;
        case 48LL:
        case 49LL:
          v53 = insn_get_next_byte();
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v53 & 0xE) + 528;
          v54 = (unsigned __int8)insn_get_next_byte();
          if ( (int)(unsigned __int8)v54 >> 4 == 13 )
            v54 = (v54 & 0xF) + 512;
          goto LABEL_81;
        case 50LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_317;
          v167 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v167);
          v168 = insn_get_next_byte();
          sub_79C0(a1 + 80, v168, (v167 & 0xE) + 528, 0);
          goto LABEL_106;
        case 51LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_295;
          v171 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v171);
          v172 = insn_get_next_word();
          sub_79C0(a1 + 80, v172, (v171 & 0xE) + 528, 0);
          goto LABEL_106;
        case 52LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_343;
          v121 = insn_get_next_byte();
          v122 = sub_79E0(*(_WORD *)(a1 + 24), v121);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = v122;
          v95 = (v121 & 0xE) + 528;
          goto LABEL_131;
        case 53LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_331;
          v174 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v174);
          v175 = insn_get_next_byte();
          v155 = (v174 & 0xE) + 528;
          v156 = v175;
          goto LABEL_195;
        case 54LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_297;
          v162 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v162);
          v163 = insn_get_next_byte();
          sub_79C0(a1 + 80, v163, (v162 & 0xE) + 528, 1);
          goto LABEL_132;
        case 55LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_319;
          v153 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v153);
          v154 = insn_get_next_word();
          v155 = (v153 & 0xE) + 528;
          v156 = v154;
LABEL_195:
          sub_79C0(a1 + 40, v156, v155, 1);
          goto LABEL_196;
        case 56LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_325;
          v151 = insn_get_next_byte();
          *(_WORD *)(a1 + 24) = sub_79E0(*(_WORD *)(a1 + 24), v151);
          v152 = insn_get_next_word();
          sub_79C0(a1 + 80, v152, (v151 & 0xE) + 528, 1);
          goto LABEL_132;
        case 57LL:
          goto LABEL_266;
        case 58LL:
          goto LABEL_50;
        case 59LL:
        case 60LL:
          v79 = insn_get_next_byte();
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 46) = (v79 & 0xF) + 512;
          *(_WORD *)(a1 + 86) = ((v79 >> 4) & 0xE) + 528;
          *(_BYTE *)(a1 + 85) = 0;
          v80 = insn_get_next_byte();
          *(_BYTE *)(a1 + 121) = 5;
          *(_BYTE *)(a1 + 125) = 0;
          *(_QWORD *)(a1 + 128) = v80;
          return *(unsigned __int16 *)(a1 + 26);
        case 61LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_311;
          v93 = insn_get_next_byte();
          v94 = sub_79E0(*(_WORD *)(a1 + 24), v93);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = v94;
          v95 = (v93 & 0xF) + 512;
LABEL_131:
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_WORD *)(a1 + 86) = v95;
          *(_BYTE *)(a1 + 85) = 0;
LABEL_132:
          v96 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v97 = v96;
          v98 = v96;
          *(_BYTE *)(a1 + 45) = 0;
          v99 = (v96 & 0xE) + 528;
          v100 = (v98 & 0xFE) + 256;
          if ( (v97 & 0xFE) >> 4 != 13 )
            v99 = v100;
          *(_WORD *)(a1 + 46) = v99;
          return *(unsigned __int16 *)(a1 + 26);
        case 62LL:
          v128 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          v129 = v128 & 0xF;
          *(_WORD *)(a1 + 86) = ((int)v128 >> 4) + 512;
          v130 = insn_get_next_byte();
          v28 = v129 + 512;
          goto LABEL_167;
        case 63LL:
          v118 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          v119 = v118 & 0xF;
          *(_WORD *)(a1 + 46) = ((int)v118 >> 4) + 512;
          v120 = insn_get_next_byte();
          sub_79C0(a1 + 80, v120, v119 + 512, 0);
          return *(unsigned __int16 *)(a1 + 26);
        case 64LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_337;
          v116 = insn_get_next_byte();
          v117 = sub_79E0(*(_WORD *)(a1 + 24), v116);
          *(_BYTE *)(a1 + 81) = 3;
          *(_WORD *)(a1 + 24) = v117;
          *(_BYTE *)(a1 + 113) = 0;
          *(_WORD *)(a1 + 86) = (v116 & 0xE) + 528;
LABEL_105:
          *(_BYTE *)(a1 + 85) = 0;
LABEL_106:
          LOBYTE(v77) = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v77 = (unsigned __int8)v77;
          *(_BYTE *)(a1 + 45) = 0;
          if ( (int)(unsigned __int8)v77 >> 4 == 13 )
            v77 = (v77 & 0xF) + 512;
          *(_WORD *)(a1 + 46) = v77;
          return *(unsigned __int16 *)(a1 + 26);
        case 65LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_341;
          v113 = insn_get_next_byte();
          v114 = sub_79E0(*(_WORD *)(a1 + 24), v113);
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 24) = v114;
          *(_BYTE *)(a1 + 73) = 0;
          *(_WORD *)(a1 + 46) = (v113 & 0xE) + 528;
          goto LABEL_153;
        case 66LL:
          v111 = insn_get_next_byte();
          *(_BYTE *)(a1 + 112) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          v112 = (int)v111 >> 4;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 86) = (v111 & 0xE) + 528;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 46) = v112 + 512;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          return result;
        case 67LL:
          v136 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_BYTE *)(a1 + 41) = 1;
          v137 = v136 & 0xE;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = ((int)v136 >> 4) + 512;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 46) = v137 + 528;
          *(_BYTE *)(a1 + 85) = 0;
          return result;
        case 68LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_291;
          v133 = insn_get_next_byte();
          v134 = sub_79E0(*(_WORD *)(a1 + 24), v133);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_WORD *)(a1 + 24) = v134;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v133 & 0xE) + 528;
          v135 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v135 & 0xE) + 256;
          return *(unsigned __int16 *)(a1 + 26);
        case 69LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_289;
          v131 = insn_get_next_byte();
          v132 = sub_79E0(*(_WORD *)(a1 + 24), v131);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_WORD *)(a1 + 24) = v132;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v131 & 0xE) + 528;
LABEL_76:
          v50 = insn_get_next_word();
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 1;
          *(_QWORD *)(a1 + 88) = v50;
          return *(unsigned __int16 *)(a1 + 26);
        case 70LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_347;
          v198 = insn_get_next_byte();
          v199 = sub_79E0(*(_WORD *)(a1 + 24), v198);
          *(_BYTE *)(a1 + 81) = 3;
          *(_WORD *)(a1 + 24) = v199;
          *(_BYTE *)(a1 + 113) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v198 & 0xE) + 528;
          v200 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v200;
          return *(unsigned __int16 *)(a1 + 26);
        case 71LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_335;
          v196 = insn_get_next_byte();
          v197 = sub_79E0(*(_WORD *)(a1 + 24), v196);
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 24) = v197;
          *(_BYTE *)(a1 + 73) = 1;
          *(_WORD *)(a1 + 46) = (v196 & 0xE) + 528;
LABEL_153:
          *(_BYTE *)(a1 + 45) = 0;
          v115 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v115;
          return *(unsigned __int16 *)(a1 + 26);
        case 72LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_353;
          v183 = insn_get_next_byte();
          v184 = sub_79E0(*(_WORD *)(a1 + 24), v183);
          *(_BYTE *)(a1 + 81) = 3;
          *(_WORD *)(a1 + 24) = v184;
          *(_BYTE *)(a1 + 113) = 1;
          *(_BYTE *)(a1 + 85) = 1;
          *(_WORD *)(a1 + 86) = (v183 & 0xE) + 528;
          v185 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v185 + 256;
          return *(unsigned __int16 *)(a1 + 26);
        case 73LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_351;
          v180 = insn_get_next_byte();
          v181 = sub_79E0(*(_WORD *)(a1 + 24), v180);
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 24) = v181;
          *(_BYTE *)(a1 + 73) = 1;
          *(_BYTE *)(a1 + 45) = 1;
          *(_WORD *)(a1 + 46) = (v180 & 0xE) + 528;
          v182 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v182 + 256;
          return *(unsigned __int16 *)(a1 + 26);
        case 74LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_301;
          v201 = insn_get_next_byte();
          v202 = sub_79E0(*(_WORD *)(a1 + 24), v201);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = v202;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v201 & 0xF) + 512;
          goto LABEL_242;
        case 75LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_355;
          v190 = insn_get_next_byte();
          v191 = sub_79E0(*(_WORD *)(a1 + 24), v190);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = v191;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v190 & 0xF) + 512;
          v192 = insn_get_next_word();
          *(_BYTE *)(a1 + 81) = 2;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 96) = v192;
          return *(unsigned __int16 *)(a1 + 26);
        case 76LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_293;
          v32 = insn_get_next_byte();
          v33 = sub_79E0(*(_WORD *)(a1 + 24), v32);
          *(_BYTE *)(a1 + 81) = 3;
          *(_WORD *)(a1 + 24) = v33;
          *(_BYTE *)(a1 + 113) = 0;
          *(_BYTE *)(a1 + 85) = 1;
          *(_WORD *)(a1 + 86) = (v32 & 0xE) + 528;
LABEL_61:
          v34 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          v35 = v34;
          v36 = v34;
          *(_BYTE *)(a1 + 45) = 0;
          v37 = (v34 & 0xE) + 528;
          v38 = (v36 & 0xFE) + 256;
          if ( (v35 & 0xFE) >> 4 != 13 )
            v37 = v38;
          *(_WORD *)(a1 + 46) = v37;
          return *(unsigned __int16 *)(a1 + 26);
        case 77LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_307;
          v226 = insn_get_next_byte();
          v227 = sub_79E0(*(_WORD *)(a1 + 24), v226);
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 24) = v227;
          *(_BYTE *)(a1 + 73) = 0;
          *(_BYTE *)(a1 + 45) = 1;
          *(_WORD *)(a1 + 46) = (v226 & 0xE) + 528;
LABEL_196:
          v157 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          v158 = v157;
          v159 = v157;
          *(_BYTE *)(a1 + 85) = 0;
          v160 = (v157 & 0xE) + 528;
          v161 = (v159 & 0xFE) + 256;
          if ( (v158 & 0xFE) >> 4 != 13 )
            v160 = v161;
          *(_WORD *)(a1 + 86) = v160;
          return *(unsigned __int16 *)(a1 + 26);
        case 78LL:
          v39 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 3;
          v40 = ((v39 >> 4) & 0xE) + 512;
LABEL_67:
          *(_WORD *)(a1 + 46) = v40;
          *(_BYTE *)(a1 + 73) = 0;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 81) = 3;
          *(_WORD *)(a1 + 86) = (v39 & 0xE) + 528;
          *(_BYTE *)(a1 + 113) = 0;
          *(_BYTE *)(a1 + 85) = 0;
          return *(unsigned __int16 *)(a1 + 26);
        case 79LL:
          v224 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 3;
          *(_BYTE *)(a1 + 113) = 0;
          *(_BYTE *)(a1 + 85) = 0;
          v225 = (v224 >> 4) & 0xE;
          *(_WORD *)(a1 + 46) = (v224 & 0xE) + 528;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 86) = v225 + 512;
          *(_BYTE *)(a1 + 73) = 0;
          *(_BYTE *)(a1 + 45) = 0;
          return result;
        case 80LL:
          v193 = insn_get_next_byte();
          v194 = insn_get_next_byte();
          sub_79C0(a1 + 40, v194, (v193 & 0xF) + 512, 0);
          v82 = v195 >> 4;
          *(_BYTE *)(a1 + 81) = 1;
          goto LABEL_116;
        case 81LL:
          v210 = insn_get_next_byte();
          v211 = insn_get_next_byte();
          sub_79C0(a1 + 80, v211, (v210 & 0xF) + 512, 0);
          v166 = v212 >> 4;
          *(_BYTE *)(a1 + 41) = 1;
LABEL_205:
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v166 & 0xE) + 528;
          return *(unsigned __int16 *)(a1 + 26);
        case 82LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_315;
          v104 = insn_get_next_byte();
          v105 = sub_79E0(*(_WORD *)(a1 + 24), v104);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = v105;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v104 & 0xE) + 528;
          v106 = insn_get_next_word();
          *(_BYTE *)(a1 + 81) = 2;
          *(_BYTE *)(a1 + 85) = 1;
          *(_QWORD *)(a1 + 96) = v106;
          return *(unsigned __int16 *)(a1 + 26);
        case 83LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_313;
          v101 = insn_get_next_byte();
          v102 = sub_79E0(*(_WORD *)(a1 + 24), v101);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = v102;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v101 & 0xE) + 528;
LABEL_137:
          v103 = insn_get_next_word();
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 1;
          *(_QWORD *)(a1 + 56) = v103;
          return *(unsigned __int16 *)(a1 + 26);
        case 84LL:
          v81 = insn_get_next_byte();
          *(_BYTE *)(a1 + 121) = 1;
          *(_BYTE *)(a1 + 125) = 0;
          *(_WORD *)(a1 + 126) = (v81 & 0xE) + 256;
LABEL_114:
          v82 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = ((v82 >> 4) & 0xE) + 528;
LABEL_115:
          *(_BYTE *)(a1 + 81) = 1;
LABEL_116:
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (v82 & 0xE) + 528;
          return *(unsigned __int16 *)(a1 + 26);
        case 85LL:
          if ( (_WORD)v18 != 104 )
            goto LABEL_323;
          v86 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          v87 = (v86 & 0xE) + 256;
LABEL_122:
          *(_WORD *)(a1 + 86) = v87;
          *(_BYTE *)(a1 + 85) = 0;
          v88 = insn_get_next_byte();
          v89 = sub_79E0(*(_WORD *)(a1 + 24), v88);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_WORD *)(a1 + 24) = v89;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v88 & 0xF) + 512;
          return *(unsigned __int16 *)(a1 + 26);
        case 86LL:
          if ( (_WORD)v18 != 103 )
            goto LABEL_321;
          v83 = insn_get_next_byte();
          v84 = sub_79E0(*(_WORD *)(a1 + 24), v83);
          *(_BYTE *)(a1 + 72) |= 1u;
          *(_WORD *)(a1 + 24) = v84;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (v83 & 0xE) + 528;
LABEL_119:
          v85 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = v85;
          return *(unsigned __int16 *)(a1 + 26);
        case 87LL:
        case 88LL:
          v55 = insn_get_next_byte();
          v56 = a1 + 80;
          v57 = v55;
          v58 = (v55 & 0xF) + 512;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v56 = a1 + 40;
          *(_WORD *)(v56 + 6) = v58;
          *(_BYTE *)(v56 + 32) |= 4u;
          *(_BYTE *)(v56 + 1) = 1;
          *(_BYTE *)(v56 + 5) = 0;
          v59 = a1 + 80;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v59 = a1 + 40;
          *(_QWORD *)(v59 + 8) = v57 >> 5;
          v60 = insn_get_next_byte();
          v61 = a1 + 40;
          v62 = v60;
          v63 = (v60 & 0xF) + 512;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v61 = a1 + 80;
          *(_WORD *)(v61 + 6) = v63;
          *(_BYTE *)(v61 + 32) |= 4u;
          *(_BYTE *)(v61 + 1) = 1;
          *(_BYTE *)(v61 + 5) = 0;
          v64 = a1 + 40;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v64 = a1 + 80;
          *(_QWORD *)(v64 + 8) = v62 >> 5;
          return *(unsigned __int16 *)(a1 + 26);
        case 89LL:
        case 90LL:
          v66 = insn_get_next_byte();
          v67 = a1 + 80;
          v68 = v66;
          v69 = (v66 & 0xF) + 512;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v67 = a1 + 40;
          *(_WORD *)(v67 + 6) = v69;
          *(_BYTE *)(v67 + 32) |= 4u;
          *(_BYTE *)(v67 + 1) = 1;
          v70 = v68 >> 5;
          *(_BYTE *)(v67 + 5) = 0;
          if ( *(_WORD *)(a1 + 24) == 66 )
          {
            *(_BYTE *)(a1 + 112) |= 8u;
            *(_QWORD *)(a1 + 88) = v70;
          }
          else
          {
            *(_QWORD *)(a1 + 48) = v70;
          }
          v71 = insn_get_next_byte();
          v72 = a1 + 40;
          v73 = v71;
          v74 = (v71 & 0xF) + 512;
          if ( *(_WORD *)(a1 + 24) != 66 )
            v72 = a1 + 80;
          *(_WORD *)(v72 + 6) = v74;
          *(_BYTE *)(v72 + 32) |= 4u;
          *(_BYTE *)(v72 + 1) = 1;
          v75 = v73 >> 5;
          *(_BYTE *)(v72 + 5) = 0;
          if ( *(_WORD *)(a1 + 24) == 66 )
            goto LABEL_181;
          *(_QWORD *)(a1 + 88) = v75;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 112) |= 8u;
          return result;
        case 91LL:
          v141 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 4u;
          *(_BYTE *)(a1 + 41) = 1;
          v142 = v141 & 0xF;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v141 >> 5;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 46) = v142 + 512;
          return result;
        case 92LL:
          v139 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 5u;
          *(_BYTE *)(a1 + 41) = 1;
          v140 = v139 & 0xF;
          *(_BYTE *)(a1 + 45) = 0;
          v75 = v139 >> 5;
          *(_WORD *)(a1 + 46) = v140 + 528;
LABEL_181:
          *(_QWORD *)(a1 + 48) = v75;
          return *(unsigned __int16 *)(a1 + 26);
        case 93LL:
        case 94LL:
          v42 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) |= 4u;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v42 >> 5;
          *(_WORD *)(a1 + 46) = (v42 & 0xF) + 512;
          goto LABEL_72;
        case 95LL:
        case 96LL:
          v51 = insn_get_next_byte() & 0x3F;
          v52 = (unsigned __int16)insn_get_next_word();
          if ( (unsigned __int8)is_mapped() )
          {
            *(_BYTE *)(a1 + 41) = 6;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_QWORD *)(a1 + 56) = (int)(v52 | ((_DWORD)v51 << 16));
            *(_BYTE *)(a1 + 45) = 0;
          }
          else
          {
            *(_BYTE *)(a1 + 72) |= 2u;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 5;
            *(_QWORD *)(a1 + 48) = v51;
            *(_BYTE *)(a1 + 45) = 0;
            *(_BYTE *)(a1 + 81) = 7;
            *(_QWORD *)(a1 + 96) = v52;
            *(_BYTE *)(a1 + 85) = 0;
          }
          return result;
        case 97LL:
        case 98LL:
        case 99LL:
          v41 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v41 >> 3;
          return *(unsigned __int16 *)(a1 + 26);
        case 100LL:
          v173 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v173 >> 2;
          return *(unsigned __int16 *)(a1 + 26);
        default:
          return *(unsigned __int16 *)(a1 + 26);
      }
    }
LABEL_25:
    v16 = 0;
    v17 = 1;
    goto LABEL_8;
  }
  if ( (unsigned __int16)v13 > 0x1Au )
  {
    switch ( *(_WORD *)v7 )
    {
      case 0x1B:
      case 0x1F:
      case 0x29:
        v16 = 16;
        v17 = 17;
        goto LABEL_8;
      case 0x1C:
      case 0x20:
      case 0x2C:
        v16 = 1;
        v17 = 17;
        goto LABEL_8;
      case 0x1D:
      case 0x21:
      case 0x2A:
        v16 = 17;
        v17 = 17;
        goto LABEL_8;
      case 0x1E:
      case 0x2B:
        goto LABEL_38;
      case 0x23:
      case 0x25:
      case 0x2D:
      case 0x32:
        goto LABEL_7;
      case 0x24:
      case 0x26:
      case 0x2E:
      case 0x33:
        goto LABEL_25;
      case 0x27:
      case 0x28:
        v16 = 1;
        v17 = 15;
        goto LABEL_8;
      case 0x30:
        v16 = 64;
        v17 = 240;
        goto LABEL_8;
      case 0x31:
        v16 = 192;
        v17 = 240;
        goto LABEL_8;
      case 0x35:
        v254 = *(unsigned __int16 *)v7;
        v30 = get_byte();
        v13 = v254;
        if ( (v30 & 1) != 0 )
          goto LABEL_7;
        goto LABEL_13;
      case 0x36:
        v249 = *(unsigned __int16 *)v7;
        v15 = get_byte();
        v13 = v249;
        if ( (v15 & 1) == 0 )
          goto LABEL_7;
        goto LABEL_13;
      case 0x37:
        v250 = *(unsigned __int16 *)v7;
        if ( (get_byte() & 1) == 0 )
          goto LABEL_13;
        v13 = v250;
        goto LABEL_25;
      case 0x38:
        v253 = *(unsigned __int16 *)v7;
        v23 = get_byte();
        v13 = v253;
        if ( (v23 & 1) != 0 )
          goto LABEL_13;
        goto LABEL_25;
      case 0x39:
        if ( (get_byte() & 1) != 0 )
          goto LABEL_13;
        if ( v11 )
          ++*(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = *(_WORD *)&byte_103C0[6 * v8 + 2];
LABEL_266:
        v228 = insn_get_next_byte();
        v229 = (v228 & 0xFE) + 256;
        if ( (v228 & 0xFE) >> 4 == 13 )
          v229 = (v228 & 0xE) + 528;
        v130 = insn_get_next_byte();
        v28 = v229;
LABEL_167:
        v29 = v130;
        goto LABEL_168;
      case 0x3A:
        if ( (get_byte() & 1) == 0 )
          goto LABEL_13;
        if ( v11 )
          ++*(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = *(_WORD *)&byte_103C0[6 * v8 + 2];
LABEL_50:
        v24 = insn_get_next_byte();
        v25 = (v24 & 0xFE) + 256;
        if ( (v24 & 0xFE) >> 4 == 13 )
          v25 = (v24 & 0xE) + 528;
        v26 = (unsigned __int8)insn_get_next_byte();
        v27 = insn_get_next_byte();
        v28 = v25;
        v29 = v26 | (v27 << 8);
LABEL_168:
        sub_79C0(a1 + 40, v29, v28, 0);
        result = *(unsigned __int16 *)(a1 + 26);
        break;
      case 0x3B:
        goto LABEL_26;
      default:
        goto LABEL_9;
    }
    return result;
  }
  if ( (unsigned __int16)(v13 - 9) > 0x11u )
    goto LABEL_9;
  if ( ((1LL << v13) & 0xCA0600) != 0 )
    goto LABEL_25;
  if ( ((1LL << v13) & 0x3040800) != 0 )
  {
LABEL_7:
    v16 = 1;
    v17 = 1;
    goto LABEL_8;
  }
  if ( (_WORD)v13 != 26 )
    goto LABEL_9;
LABEL_38:
  v16 = 0;
  v17 = 17;
LABEL_8:
  if ( (v14 & v17) == v16 )
    goto LABEL_9;
LABEL_13:
  while ( 1 )
  {
    ++v8;
    v7 = (int *)((char *)v7 + 6);
    if ( v8 == 357 )
      return 0;
    v10 = *((unsigned __int16 *)v7 - 2);
    v11 = HIBYTE(*((_WORD *)v7 - 2));
    if ( !v11 )
      goto LABEL_2;
    if ( ((unsigned __int8)get_byte() | (next_byte << 8)) == v10 )
      goto LABEL_3;
  }
}

