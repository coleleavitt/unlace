__int64 __fastcall sub_3690(__int64 a1)
{
  __int16 next_byte; // ax
  __int16 v2; // bp
  unsigned __int8 v3; // al
  __int64 result; // rax
  __int16 v5; // ax
  unsigned __int8 v6; // al
  __m128i v7; // xmm0
  __int16 v8; // ax
  unsigned __int8 v9; // al
  unsigned __int8 v10; // cl
  int v11; // esi
  int v12; // eax
  __int16 v13; // ax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // esi
  int v17; // eax
  unsigned __int8 v18; // al
  __int16 v19; // ax
  char v20; // bp
  unsigned __int8 v21; // cl
  char v22; // al
  int v23; // eax
  __int16 v24; // ax
  __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int8 v30; // al
  __m128i v31; // xmm0
  __int16 v32; // ax
  unsigned __int8 v33; // al
  __m128i v34; // xmm0
  __int16 v35; // ax
  __m128i v36; // xmm0
  __int16 v37; // ax
  int v38; // ebp
  unsigned __int8 v39; // al
  __m128i v40; // xmm0
  unsigned __int8 v41; // al
  __int16 v42; // cx
  __int64 v43; // rbp
  int v44; // edx
  bool v45; // cc
  int v46; // eax
  __int64 v47; // rcx
  int v48; // ebp
  unsigned __int8 v49; // al
  __m128i v50; // xmm0
  __int16 v51; // ax
  int v52; // ebp
  unsigned __int8 v53; // al
  __m128i v54; // xmm0
  unsigned __int8 v55; // al
  unsigned __int8 v56; // cl
  int v57; // edx
  __int16 v58; // ax
  __m128i v59; // xmm0
  __int16 v60; // ax
  unsigned __int8 v61; // al
  __m128i v62; // xmm0
  unsigned __int8 v63; // al
  unsigned __int8 v64; // cl
  __int64 v65; // rbp
  __int16 v66; // ax
  int v67; // ebp
  unsigned __int8 v68; // al
  __m128i v69; // xmm0
  unsigned __int8 v70; // al
  unsigned __int8 v71; // cl
  __int16 v72; // ax
  int v73; // ebp
  unsigned __int8 v74; // al
  __m128i v75; // xmm0
  __int64 v76; // rbp
  __int64 v77; // rcx
  __int16 v78; // ax
  __m128i v79; // xmm0
  __int16 v80; // ax
  __m128i v81; // xmm0
  unsigned __int8 v82; // al
  unsigned __int8 v83; // cl
  unsigned __int8 v84; // al
  unsigned __int8 v85; // cl
  int v86; // edx
  __int16 v87; // ax
  __m128i v88; // xmm0
  unsigned __int8 v89; // al
  __int16 v90; // cx
  int v91; // edx
  int v92; // eax
  unsigned __int8 v93; // cl
  int v94; // edx
  __int16 v95; // ax
  int v96; // ebp
  __int16 v97; // ax
  int v98; // ebp
  __m128i v99; // xmm0
  __int16 v100; // ax
  __int64 v101; // rbp
  __int64 v102; // rcx
  __int16 v103; // ax
  int v104; // ebp
  unsigned __int8 v105; // al
  __m128i v106; // xmm0
  unsigned __int8 v107; // al
  __int16 v108; // cx
  int v109; // edx
  __int16 v110; // ax
  int v111; // ebp
  unsigned __int8 v112; // al
  __m128i v113; // xmm0
  __int16 v114; // ax
  __m128i v115; // xmm0
  __int16 v116; // ax
  unsigned __int8 v117; // al
  __m128i v118; // xmm0
  unsigned __int8 v119; // al
  unsigned __int8 v120; // cl
  __int16 v121; // ax
  unsigned __int8 v122; // al
  __m128i v123; // xmm0
  unsigned __int8 v124; // cl
  __int16 v125; // ax
  __int64 v126; // rbp
  __int64 v127; // rcx
  __int64 v128; // rbp
  __int64 v129; // rcx
  int v130; // ebp
  unsigned __int8 v131; // al
  __m128i v132; // xmm0
  unsigned __int8 v133; // al
  unsigned __int8 v134; // cl
  unsigned __int8 v135; // al
  unsigned __int8 v136; // bp
  __int16 v137; // ax
  int v138; // ebp
  unsigned __int8 v139; // al
  __m128i v140; // xmm0
  __int16 v141; // ax
  __m128i v142; // xmm0
  __int16 v143; // ax
  unsigned __int8 v144; // al
  __m128i v145; // xmm0
  __int16 v146; // ax
  unsigned __int8 v147; // al
  __m128i v148; // xmm0
  unsigned __int8 v149; // al
  unsigned __int8 v150; // cl
  __int16 v151; // ax
  __m128i v152; // xmm0
  __int16 v153; // ax
  unsigned __int8 v154; // al
  __m128i v155; // xmm0
  unsigned __int8 v156; // al
  unsigned __int8 v157; // cl
  __int16 v158; // ax
  int v159; // ebp
  unsigned __int8 v160; // al
  __m128i v161; // xmm0
  __int16 v162; // ax
  __m128i v163; // xmm0
  unsigned __int8 v164; // al
  __int16 v165; // ax
  int v166; // ebp
  unsigned __int8 v167; // al
  __m128i v168; // xmm0
  __int16 v169; // ax
  __m128i v170; // xmm0
  unsigned __int8 v171; // al
  unsigned __int8 v172; // cl
  __int16 v173; // ax
  __m128i v174; // xmm0
  __int16 v175; // ax
  unsigned __int8 v176; // al
  __m128i v177; // xmm0
  unsigned __int8 v178; // al
  unsigned __int8 v179; // cl
  __int16 v180; // ax
  __int64 v181; // rbp
  __int64 v182; // rcx
  unsigned __int8 v183; // al
  __int16 v184; // cx
  int v185; // edx
  unsigned __int8 v186; // al
  __m128i v187; // xmm0
  __int16 v188; // ax
  unsigned __int8 v189; // al
  __m128i v190; // xmm0
  __int16 v191; // ax
  __m128i v192; // xmm0
  unsigned __int8 v193; // cl
  int v194; // edx
  unsigned __int8 v195; // cl
  int v196; // edx
  unsigned __int8 v197; // al
  __int16 v198; // cx
  int v199; // edx
  int v200; // eax
  int v201; // ebp
  __m128i v202; // xmm0
  unsigned __int8 v203; // al
  __int16 v204; // cx
  int v205; // edx
  __int16 v206; // ax
  int v207; // ebp
  __m128i v208; // xmm0
  __int16 v209; // ax
  unsigned __int8 v210; // al
  int v211; // ebp
  __m128i v212; // xmm0
  __int16 v213; // ax
  __int64 v214; // rbp
  __int64 v215; // rcx
  unsigned __int8 v216; // al
  __int16 v217; // cx
  int v218; // edx
  __int16 v219; // ax
  int v220; // ebp
  __m128i v221; // xmm0
  unsigned __int8 v222; // al
  __int16 v223; // cx
  int v224; // edx
  __int16 v225; // ax
  int v226; // ebp
  unsigned __int8 v227; // al
  __m128i v228; // xmm0
  char v229; // al
  __int16 v230; // ax
  __int64 v231; // rbp
  char v232; // al
  __int16 v233; // ax
  __int16 v234; // ax
  __int64 v235; // rax
  __int16 v236; // ax
  __m128i v237; // xmm0
  unsigned __int8 v238; // al
  __int16 v239; // cx
  int v240; // edx
  int v241; // eax
  unsigned __int8 v242; // al
  __m128i v243; // xmm0
  __int64 v244; // rax
  unsigned __int8 v245; // al
  __int16 v246; // cx
  int v247; // edx
  bool v248; // cf
  __int64 v249; // rax
  unsigned __int8 v250; // al
  __int16 v251; // cx
  int v252; // edx
  __int64 v253; // rax
  __int16 v254; // ax
  int v255; // ebp
  __m128i v256; // xmm0
  __int16 v257; // ax
  int v258; // ebp
  unsigned __int8 v259; // al
  __m128i v260; // xmm0
  __int16 v261; // ax
  unsigned __int8 v262; // al
  __m128i v263; // xmm0
  __int16 v264; // ax
  unsigned __int8 v265; // al
  unsigned __int8 v266; // al
  __m128i v267; // xmm0
  __int16 v268; // ax
  int v269; // ebp
  __m128i v270; // xmm0
  char v271; // cl
  __int16 v272; // cx
  __int16 v273; // dx
  __int16 v274; // ax
  unsigned __int8 v275; // al
  int v276; // edx
  char v277; // al
  __int16 v278; // ax
  unsigned __int8 v279; // al
  int v280; // edx
  char v281; // al
  unsigned __int8 v282; // al
  __int16 v283; // ax
  unsigned __int8 v284; // al
  __int16 v285; // ax
  unsigned __int8 v286; // al
  unsigned __int8 v287; // al
  __int16 v288; // ax
  unsigned __int8 v289; // al
  int v290; // edx
  char v291; // al

  if ( !a1 )
    return 0;
  next_byte = insn_get_next_byte();
  v2 = next_byte;
  if ( (unsigned __int8)next_byte <= 0xAFu )
  {
    if ( (unsigned __int8)next_byte <= 0x17u )
    {
      switch ( (char)next_byte )
      {
        case 0:
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 56;
          return result;
        case 1:
          *(_BYTE *)(a1 + 41) = 1;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 36;
          *(_WORD *)(a1 + 46) = 14;
          *(_BYTE *)(a1 + 72) = 0;
          return result;
        case 2:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 3;
          *(_WORD *)(a1 + 46) = 8;
          v51 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 82) = v51;
          v52 = (unsigned __int8)insn_get_next_byte();
          v53 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 2;
          *(_BYTE *)(a1 + 85) = 1;
          *(_BYTE *)(a1 + 112) = 1;
          v54 = _mm_cvtsi32_si128(v52 | (v53 << 8));
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v54, v54);
          return result;
        case 3:
          *(_WORD *)(a1 + 24) = 3;
          *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
          v48 = (unsigned __int8)insn_get_next_byte();
          v49 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 1;
          *(_BYTE *)(a1 + 72) = 1;
          *(_BYTE *)(a1 + 81) = 1;
          v50 = _mm_cvtsi32_si128(v48 | (v49 << 8));
          *(_BYTE *)(a1 + 112) = 0;
          *(_WORD *)(a1 + 86) = 8;
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v50, v50);
          return result;
        case 4:
          *(_WORD *)(a1 + 24) = 54;
          v41 = insn_get_next_byte();
          v42 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 0;
          v43 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(a1 + 82) = v42;
          *(_BYTE *)(a1 + 42) = v42 - 1;
          v44 = v41 + 65024;
          v45 = v41 <= 0x1Fu;
          *(_BYTE *)(a1 + 81) = 7;
          v46 = v41 + 65280;
          if ( !v45 )
            v46 = v44;
          *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
          v47 = (char)insn_get_next_byte();
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(
                                    (__m128i)(unsigned __int64)(v43 + result + v47),
                                    (__m128i)(unsigned __int64)(v43 + result + v47));
          return result;
        case 5:
          *(_BYTE *)(a1 + 41) = 1;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 2;
          *(_WORD *)(a1 + 46) = 10;
          *(_BYTE *)(a1 + 72) = 2;
          return result;
        case 6:
          return 0;
        case 7:
          *(_BYTE *)(a1 + 41) = 1;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 2;
          *(_WORD *)(a1 + 46) = 11;
          *(_BYTE *)(a1 + 72) = 2;
          return result;
        case 8:
          v37 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 5;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 82) = v37;
          v38 = (unsigned __int8)insn_get_next_byte();
          v39 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 2;
          *(_BYTE *)(a1 + 85) = 0;
          *(_BYTE *)(a1 + 112) = 1;
          v40 = _mm_cvtsi32_si128(v38 | (v39 << 8));
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v40, v40);
          return result;
        case 9:
          v35 = *(_WORD *)(a1 + 26);
          *(_WORD *)(a1 + 86) = 11;
          *(_WORD *)(a1 + 24) = 5;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 112) = 14;
          *(_BYTE *)(a1 + 82) = v35;
          v36 = (__m128i)(unsigned __int8)insn_get_next_byte();
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v36, v36);
          return result;
        case 10:
LABEL_25:
          v8 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 8;
          *(_WORD *)(a1 + 24) = 34;
          *(_BYTE *)(a1 + 42) = v8;
          *(_BYTE *)(a1 + 45) = 0;
          v9 = insn_get_next_byte();
          v10 = v9;
          if ( v9 == 30 )
          {
            *(_BYTE *)(a1 + 72) = 8;
            *(_QWORD *)(a1 + 48) = ((unsigned __int8)v2 >> 4) & 7;
            if ( (_BYTE)v2 == 122 )
            {
              *(_WORD *)(a1 + 24) = 57;
              result = *(unsigned __int16 *)(a1 + 26);
              *(_BYTE *)(a1 + 41) = 0;
              return result;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 72) = 64;
            v11 = v9 + 65280;
            v12 = v9 + 65024;
            if ( v10 <= 0x1Fu )
              v12 = v11;
            *(_QWORD *)(a1 + 48) = ((unsigned __int8)v2 >> 4) & 7;
            *(_QWORD *)(a1 + 56) = v12;
          }
          return *(unsigned __int16 *)(a1 + 26);
        case 11:
LABEL_30:
          *(_BYTE *)(a1 + 41) = 8;
          *(_WORD *)(a1 + 24) = 35;
          v13 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 42) = v13;
          v14 = insn_get_next_byte();
          v15 = v14;
          if ( v14 == 30 )
          {
            *(_BYTE *)(a1 + 72) = 8;
            *(_QWORD *)(a1 + 48) = ((unsigned __int8)v2 >> 4) & 7;
            if ( (_BYTE)v2 == 123 )
            {
              *(_WORD *)(a1 + 24) = 58;
              result = *(unsigned __int16 *)(a1 + 26);
              *(_BYTE *)(a1 + 41) = 0;
              return result;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 72) = 64;
            v16 = v14 + 65280;
            v17 = v14 + 65024;
            if ( v15 <= 0x1Fu )
              v17 = v16;
            *(_QWORD *)(a1 + 48) = ((unsigned __int8)v2 >> 4) & 7;
            *(_QWORD *)(a1 + 56) = v17;
          }
          return *(unsigned __int16 *)(a1 + 26);
        case 12:
LABEL_35:
          *(_BYTE *)(a1 + 41) = 7;
          *(_WORD *)(a1 + 24) = 38;
          v18 = insn_get_next_byte();
          *(_BYTE *)(a1 + 72) = 1;
          *(_QWORD *)(a1 + 56) = (v18 | (v2 << 8) & 0xF000u) + 2048;
          return *(unsigned __int16 *)(a1 + 26);
        case 13:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 5;
          *(_WORD *)(a1 + 46) = 1;
          v32 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 82) = v32;
          v33 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          v34 = (__m128i)v33;
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v34, v34);
          return result;
        case 14:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 5;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 72) = 0;
          v55 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 2;
          v56 = v55;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 85) = 0;
          *(_BYTE *)(a1 + 82) = result - 1;
          v57 = v56 + 65024;
          if ( v56 <= 0x1Fu )
            v57 = v56 + 65280;
LABEL_173:
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v57, (__m128i)(unsigned __int64)v57);
          return result;
        case 15:
          *(_BYTE *)(a1 + 41) = 1;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 5;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = 11;
          *(_BYTE *)(a1 + 112) = 2;
          return result;
        default:
          if ( (_BYTE)next_byte == 23 )
            return 0;
          if ( ((1LL << next_byte) & 0x550000) != 0 )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 3;
            *(_BYTE *)(a1 + 72) = 0;
            *(_WORD *)(a1 + 46) = (((unsigned __int8)next_byte >> 1) & 7) + 8;
            v268 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 81) = 5;
            *(_BYTE *)(a1 + 85) = 1;
            *(_BYTE *)(a1 + 82) = v268;
            v269 = (unsigned __int8)insn_get_next_byte();
            v270 = _mm_cvtsi32_si128(v269 | ((unsigned __int8)insn_get_next_byte() << 8));
            result = *(unsigned __int16 *)(a1 + 26);
            *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v270, v270);
          }
          else if ( (_BYTE)next_byte == 19 )
          {
            v264 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 2;
            *(_WORD *)(a1 + 24) = 1;
            *(_BYTE *)(a1 + 45) = 0;
            *(_BYTE *)(a1 + 42) = v264;
            v265 = insn_get_next_byte();
            *(_BYTE *)(a1 + 82) = *(_WORD *)(a1 + 26);
            *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                      (__m128i)((unsigned __int64)v265 + 65280),
                                      (__m128i)((unsigned __int64)v265 + 65280));
            v266 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 5;
            *(_BYTE *)(a1 + 85) = 0;
            v267 = (__m128i)v266;
            result = *(unsigned __int16 *)(a1 + 26);
            *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v267, v267);
          }
          else
          {
            if ( (_BYTE)next_byte != 17 )
              return 0;
            *(_WORD *)(a1 + 24) = 1;
            v238 = insn_get_next_byte();
            v239 = *(_WORD *)(a1 + 26);
            if ( v238 == 30 )
            {
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 12;
              *(_BYTE *)(a1 + 72) = 0;
            }
            else
            {
              *(_BYTE *)(a1 + 41) = 2;
              *(_BYTE *)(a1 + 42) = v239 - 1;
              v240 = v238 + 65024;
              v45 = v238 <= 0x1Fu;
              *(_BYTE *)(a1 + 45) = 0;
              v241 = v238 + 65280;
              if ( !v45 )
                v241 = v240;
              *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)v241,
                                        (__m128i)(unsigned __int64)v241);
            }
            *(_BYTE *)(a1 + 82) = v239;
            v242 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 5;
            *(_BYTE *)(a1 + 85) = 0;
            v243 = (__m128i)v242;
            result = *(unsigned __int16 *)(a1 + 26);
            *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v243, v243);
          }
          return result;
      }
    }
    switch ( (char)next_byte )
    {
      case 25:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 7;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 86) = 11;
        v80 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v80;
        v81 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v81, v81);
        return result;
      case 26:
      case 42:
      case 58:
      case 74:
      case 90:
      case 106:
      case 122:
        goto LABEL_25;
      case 27:
      case 43:
      case 59:
      case 75:
      case 91:
      case 107:
      case 123:
        goto LABEL_30;
      case 28:
      case 44:
      case 60:
      case 76:
      case 92:
      case 108:
      case 124:
        goto LABEL_35;
      case 29:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 7;
        *(_WORD *)(a1 + 46) = 1;
        v121 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v121;
        v122 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v123 = (__m128i)v122;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v123, v123);
        return result;
      case 30:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 7;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v82 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v83 = v82;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v83 + 65024;
        if ( v83 <= 0x1Fu )
          v57 = v83 + 65280;
        goto LABEL_173;
      case 31:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 7;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 32:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 34;
        *(_WORD *)(a1 + 46) = 14;
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 33:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 35;
        *(_WORD *)(a1 + 46) = 14;
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 34:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 44;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 12;
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 35:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 45;
        *(_WORD *)(a1 + 46) = 12;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 36:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 22;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
        return result;
      case 37:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 24;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
        return result;
      case 38:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 23;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
        return result;
      case 39:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 25;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
        return result;
      case 40:
        v110 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 6;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v110;
        v111 = (unsigned __int8)insn_get_next_byte();
        v112 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v113 = _mm_cvtsi32_si128(v111 | (v112 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v113, v113);
        return result;
      case 41:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 6;
        v114 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v114;
        v115 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v115, v115);
        return result;
      case 45:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 6;
        *(_WORD *)(a1 + 46) = 1;
        v116 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v116;
        v117 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v118 = (__m128i)v117;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v118, v118);
        return result;
      case 46:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 6;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v119 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v120 = v119;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v120 + 65024;
        if ( v120 <= 0x1Fu )
          v57 = v120 + 65280;
        goto LABEL_173;
      case 47:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 6;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 48:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 2;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = v2 & 7;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case 49:
        v3 = insn_get_next_byte();
        LOBYTE(v65) = v3 >> 4;
        if ( v3 > 0x98u )
        {
LABEL_209:
          v229 = v3 & 0x8F;
          switch ( v229 )
          {
            case -122:
              *(_WORD *)(a1 + 24) = 51;
              break;
            case -121:
              *(_WORD *)(a1 + 24) = 52;
              break;
            case -123:
              *(_WORD *)(a1 + 24) = 53;
              break;
            default:
              return 0;
          }
          *(_BYTE *)(a1 + 72) = 4;
          v65 &= 7u;
LABEL_214:
          *(_QWORD *)(a1 + 48) = v65;
          *(_WORD *)(a1 + 41) = 8;
          goto LABEL_215;
        }
        if ( v3 > 0x81u )
        {
          switch ( v3 )
          {
            case 0x82:
              *(_WORD *)(a1 + 24) = 17;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 2;
              *(_BYTE *)(a1 + 72) = 0;
              return *(unsigned __int16 *)(a1 + 26);
            case 0x88:
              *(_WORD *)(a1 + 24) = 16;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 0;
              *(_BYTE *)(a1 + 72) = 0;
              return *(unsigned __int16 *)(a1 + 26);
            case 0x8A:
              goto LABEL_220;
            case 0x8B:
              goto LABEL_219;
            case 0x90:
              *(_WORD *)(a1 + 24) = 26;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 11;
              *(_BYTE *)(a1 + 72) = 2;
              return *(unsigned __int16 *)(a1 + 26);
            case 0x98:
              *(_WORD *)(a1 + 24) = 46;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 8;
              *(_BYTE *)(a1 + 72) = 0;
              return *(unsigned __int16 *)(a1 + 26);
            default:
              goto LABEL_209;
          }
        }
        if ( v3 <= 0x3Bu )
        {
          if ( v3 <= 9u )
            goto LABEL_295;
          if ( ((1LL << v3) & 0x400040004000400LL) == 0 )
          {
            if ( ((1LL << v3) & 0x800080008000800LL) == 0 )
            {
              v3 &= 0x8Fu;
              goto LABEL_295;
            }
            goto LABEL_219;
          }
        }
        else
        {
          v271 = v3 - 74;
          if ( (unsigned __int8)(v3 - 74) > 0x36u )
          {
LABEL_6:
            v3 &= 0x8Fu;
            if ( v3 > 0xFu )
              return 0;
LABEL_295:
            if ( v3 )
            {
              switch ( v3 )
              {
                case 1u:
                  *(_WORD *)(a1 + 24) = 53;
                  goto LABEL_343;
                case 3u:
                  *(_WORD *)(a1 + 24) = 52;
LABEL_343:
                  v288 = *(_WORD *)(a1 + 26);
                  *(_BYTE *)(a1 + 41) = 8;
                  *(_BYTE *)(a1 + 45) = 0;
                  *(_BYTE *)(a1 + 42) = v288;
                  v289 = insn_get_next_byte();
                  if ( v289 == 30 )
                  {
                    v291 = 8;
                  }
                  else
                  {
                    v290 = v289 + 65024;
                    if ( v289 <= 0x1Fu )
                      v290 = v289 + 65280;
                    v291 = 64;
                    *(_QWORD *)(a1 + 56) = v290;
                  }
                  *(_BYTE *)(a1 + 72) = v291;
                  *(_QWORD *)(a1 + 48) = (unsigned __int8)v65;
                  break;
                case 5u:
                  *(_WORD *)(a1 + 24) = 53;
                  goto LABEL_339;
                case 6u:
                  *(_WORD *)(a1 + 24) = 51;
                  goto LABEL_339;
                case 7u:
                  *(_WORD *)(a1 + 24) = 52;
LABEL_339:
                  *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
                  v287 = insn_get_next_byte();
                  *(_BYTE *)(a1 + 41) = 8;
                  *(_BYTE *)(a1 + 72) = 32;
                  *(_QWORD *)(a1 + 48) = (unsigned __int8)v65;
                  *(_QWORD *)(a1 + 56) = v287 + 65280LL;
                  break;
                case 0xDu:
                  *(_WORD *)(a1 + 24) = 53;
                  v65 = (unsigned __int8)v65;
                  *(_BYTE *)(a1 + 72) = 16;
                  goto LABEL_214;
                case 0xEu:
                  *(_WORD *)(a1 + 24) = 51;
                  v65 = (unsigned __int8)v65;
                  *(_BYTE *)(a1 + 72) = 16;
                  goto LABEL_214;
                case 0xFu:
                  *(_WORD *)(a1 + 24) = 52;
                  v65 = (unsigned __int8)v65;
                  *(_BYTE *)(a1 + 72) = 16;
                  goto LABEL_214;
                default:
                  return 0;
              }
LABEL_215:
              v230 = *(_WORD *)(a1 + 26);
              v231 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 81) = 7;
              *(_BYTE *)(a1 + 82) = v230;
              v232 = insn_get_next_byte();
              *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(
                                        (__m128i)(v232 + v231 + (unsigned __int64)*(unsigned __int16 *)(a1 + 26)),
                                        (__m128i)(v232 + v231 + (unsigned __int64)*(unsigned __int16 *)(a1 + 26)));
              return *(unsigned __int16 *)(a1 + 26);
            }
            return 0;
          }
          if ( ((1LL << v271) & 0x1000100010001LL) == 0 )
          {
            if ( ((1LL << v271) & 0x2000200020002LL) == 0 )
            {
              if ( v3 == 0x80 )
              {
                *(_WORD *)(a1 + 24) = 27;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 11;
                *(_BYTE *)(a1 + 72) = 2;
                return *(unsigned __int16 *)(a1 + 26);
              }
              goto LABEL_6;
            }
LABEL_219:
            *(_BYTE *)(a1 + 41) = 1;
            v233 = *((unsigned __int8 *)qword_A610 + (v3 >> 4));
            *(_WORD *)(a1 + 46) = 1;
            *(_BYTE *)(a1 + 72) = 0;
            *(_WORD *)(a1 + 24) = v233;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = 11;
            *(_WORD *)(a1 + 112) = 790;
            return *(unsigned __int16 *)(a1 + 26);
          }
        }
LABEL_220:
        *(_BYTE *)(a1 + 41) = 1;
        v234 = *((unsigned __int8 *)qword_A610 + (v3 >> 4));
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_WORD *)(a1 + 24) = v234;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_WORD *)(a1 + 112) = 534;
        return *(unsigned __int16 *)(a1 + 26);
      case 56:
        v66 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 8;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v66;
        v67 = (unsigned __int8)insn_get_next_byte();
        v68 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v69 = _mm_cvtsi32_si128(v67 | (v68 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v69, v69);
        return result;
      case 57:
        v58 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 8;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v58;
        v59 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v59, v59);
        return result;
      case 61:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 8;
        *(_WORD *)(a1 + 46) = 1;
        v60 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v60;
        v61 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v62 = (__m128i)v61;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v62, v62);
        return result;
      case 62:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 8;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v63 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v64 = v63;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v64 + 65024;
        if ( v64 <= 0x1Fu )
          v57 = v64 + 65280;
        goto LABEL_173;
      case 63:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = 11;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 8;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 18;
        *(_WORD *)(a1 + 46) = v2 & 7;
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 72:
        v165 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 12;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v165;
        v166 = (unsigned __int8)insn_get_next_byte();
        v167 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v168 = _mm_cvtsi32_si128(v166 | (v167 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v168, v168);
        return result;
      case 73:
        v151 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 24) = 12;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v151;
        v152 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v152, v152);
        return result;
      case 77:
        v153 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 12;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v153;
        v154 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v155 = (__m128i)v154;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v155, v155);
        return result;
      case 78:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 12;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v70 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v71 = v70;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v71 + 65024;
        if ( v71 <= 0x1Fu )
          v57 = v71 + 65280;
        goto LABEL_173;
      case 79:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 12;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 86) = 11;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 19;
        *(_WORD *)(a1 + 46) = v2 & 7;
        *(_BYTE *)(a1 + 72) = 0;
        return result;
      case 88:
        v72 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 9;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v72;
        v73 = (unsigned __int8)insn_get_next_byte();
        v74 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v75 = _mm_cvtsi32_si128(v73 | (v74 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v75, v75);
        return result;
      case 89:
        v173 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 9;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v173;
        v174 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v174, v174);
        return result;
      case 93:
        v175 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 9;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v175;
        v176 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v177 = (__m128i)v176;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v177, v177);
        return result;
      case 94:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 24) = 9;
        *(_BYTE *)(a1 + 72) = 0;
        v178 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v179 = v178;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v179 + 65024;
        if ( v179 <= 0x1Fu )
          v57 = v179 + 65280;
        goto LABEL_173;
      case 95:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 9;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 86) = 11;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 96:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = v2 & 7;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case 97:
        v164 = insn_get_next_byte();
        if ( (v164 & 0xD7) == 0xD0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 55;
          *(_BYTE *)(a1 + 72) = 0;
          *(_WORD *)(a1 + 46) = (unsigned __int8)((((v164 >> 4) & 2) + 15) | ((v164 & 8) != 0));
          return *(unsigned __int16 *)(a1 + 26);
        }
        else if ( (v164 & 0x80u) == 0 )
        {
          v272 = 1;
          v273 = v164 & 7;
          if ( (v164 & 8) == 0 )
          {
            v272 = v164 & 7;
            v273 = 1;
          }
          *(_WORD *)(a1 + 24) = *((unsigned __int8 *)qword_A610 + (v164 >> 4));
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v272;
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = v273;
          *(_BYTE *)(a1 + 112) = 0;
        }
        else
        {
          if ( v164 == 0x80 )
          {
            *(_WORD *)(a1 + 24) = 28;
          }
          else if ( v164 == 0x90 )
          {
            *(_WORD *)(a1 + 24) = 29;
          }
          else
          {
            switch ( v164 & 0xF )
            {
              case 9:
                *(_WORD *)(a1 + 24) = 30;
                *(_BYTE *)(a1 + 72) = 16;
                *(_QWORD *)(a1 + 48) = (v164 >> 4) & 7;
                *(_WORD *)(a1 + 41) = 8;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = 14;
                *(_BYTE *)(a1 + 112) = 0;
                return *(unsigned __int16 *)(a1 + 26);
              case 0xA:
                *(_WORD *)(a1 + 24) = 34;
                *(_BYTE *)(a1 + 72) = 16;
                *(_QWORD *)(a1 + 48) = (v164 >> 4) & 7;
                *(_WORD *)(a1 + 41) = 8;
                return *(unsigned __int16 *)(a1 + 26);
              case 0xB:
                *(_WORD *)(a1 + 24) = 35;
                *(_BYTE *)(a1 + 72) = 16;
                *(_QWORD *)(a1 + 48) = (v164 >> 4) & 7;
                *(_WORD *)(a1 + 41) = 8;
                return *(unsigned __int16 *)(a1 + 26);
              case 0xC:
                *(_WORD *)(a1 + 24) = 30;
                break;
              case 0xD:
                *(_WORD *)(a1 + 24) = 31;
                break;
              case 0xE:
                *(_WORD *)(a1 + 24) = 32;
                break;
              case 0xF:
                *(_WORD *)(a1 + 24) = 33;
                break;
              default:
                return 0;
            }
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 14;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 112) = 16;
            *(_QWORD *)(a1 + 88) = (v164 >> 4) & 7;
            *(_WORD *)(a1 + 81) = 8;
          }
          return *(unsigned __int16 *)(a1 + 26);
        }
        return result;
      case 104:
        v158 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 10;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v158;
        v159 = (unsigned __int8)insn_get_next_byte();
        v160 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v161 = _mm_cvtsi32_si128(v159 | (v160 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v161, v161);
        return result;
      case 105:
        v162 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 10;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v162;
        v163 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v163, v163);
        return result;
      case 109:
        v146 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 10;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v146;
        v147 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v148 = (__m128i)v147;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v148, v148);
        return result;
      case 110:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 24) = 10;
        *(_BYTE *)(a1 + 72) = 0;
        v149 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v150 = v149;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v150 + 65024;
        if ( v150 <= 0x1Fu )
          v57 = v150 + 65280;
        goto LABEL_173;
      case 111:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 10;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 86) = 11;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case 112:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = v2 & 7;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case 113:
        v135 = insn_get_next_byte();
        v136 = v135 >> 4;
        switch ( v135 & 0x8F )
        {
          case 0:
            if ( v136 )
            {
              if ( v136 != 1 )
                return 0;
              *(_WORD *)(a1 + 24) = 59;
            }
            else
            {
              *(_WORD *)(a1 + 24) = 60;
            }
            return *(unsigned __int16 *)(a1 + 26);
          case 1:
            v278 = *(_WORD *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 30;
            *(_BYTE *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 42) = v278;
            *(_BYTE *)(a1 + 45) = 0;
            v279 = insn_get_next_byte();
            if ( v279 == 30 )
            {
              v281 = 8;
            }
            else
            {
              v280 = v279 + 65024;
              if ( v279 <= 0x1Fu )
                v280 = v279 + 65280;
              v281 = 64;
              *(_QWORD *)(a1 + 56) = v280;
            }
            *(_BYTE *)(a1 + 72) = v281;
            goto LABEL_318;
          case 4:
            *(_WORD *)(a1 + 24) = 30;
            goto LABEL_306;
          case 5:
            *(_WORD *)(a1 + 24) = 31;
            goto LABEL_306;
          case 6:
            *(_WORD *)(a1 + 24) = 32;
            goto LABEL_306;
          case 7:
            *(_WORD *)(a1 + 24) = 33;
LABEL_306:
            v274 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 14;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 82) = v274;
            *(_BYTE *)(a1 + 81) = 8;
            *(_BYTE *)(a1 + 85) = 0;
            v275 = insn_get_next_byte();
            if ( v275 == 30 )
            {
              v277 = 8;
            }
            else
            {
              v276 = v275 + 65024;
              if ( v275 <= 0x1Fu )
                v276 = v275 + 65280;
              v277 = 64;
              *(_QWORD *)(a1 + 96) = v276;
            }
            *(_BYTE *)(a1 + 112) = v277;
            *(_QWORD *)(a1 + 88) = v136;
            return *(unsigned __int16 *)(a1 + 26);
          case 9:
            v283 = *(_WORD *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 30;
            *(_BYTE *)(a1 + 42) = v283;
            v284 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 72) = 32;
            *(_QWORD *)(a1 + 56) = v284 + 65280LL;
LABEL_318:
            *(_BYTE *)(a1 + 81) = 1;
            *(_QWORD *)(a1 + 48) = v136;
            *(_WORD *)(a1 + 86) = 14;
            *(_BYTE *)(a1 + 112) = 0;
            return *(unsigned __int16 *)(a1 + 26);
          case 0xA:
            *(_WORD *)(a1 + 24) = 34;
            goto LABEL_324;
          case 0xB:
            *(_WORD *)(a1 + 24) = 35;
LABEL_324:
            *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
            v282 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 72) = 32;
            *(_QWORD *)(a1 + 48) = v136;
            *(_QWORD *)(a1 + 56) = v282 + 65280LL;
            return *(unsigned __int16 *)(a1 + 26);
          case 0xD:
            v285 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 31;
            *(_WORD *)(a1 + 46) = 14;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 82) = v285;
            v286 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 8;
            *(_BYTE *)(a1 + 112) = 32;
            *(_QWORD *)(a1 + 88) = v136;
            *(_QWORD *)(a1 + 96) = v286 + 65280LL;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x81:
            *(_WORD *)(a1 + 24) = 30;
            *(_BYTE *)(a1 + 72) = 4;
            *(_QWORD *)(a1 + 48) = (v135 >> 4) & 7;
            *(_WORD *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = 14;
            *(_BYTE *)(a1 + 112) = 0;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x82:
            *(_WORD *)(a1 + 24) = 34;
            *(_BYTE *)(a1 + 72) = 4;
            *(_QWORD *)(a1 + 48) = (v135 >> 4) & 7;
            *(_WORD *)(a1 + 41) = 8;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x83:
            *(_WORD *)(a1 + 24) = 35;
            *(_BYTE *)(a1 + 72) = 4;
            *(_QWORD *)(a1 + 48) = (v135 >> 4) & 7;
            *(_WORD *)(a1 + 41) = 8;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x84:
            *(_WORD *)(a1 + 24) = 30;
            goto LABEL_300;
          case 0x85:
            *(_WORD *)(a1 + 24) = 31;
            goto LABEL_300;
          case 0x86:
            *(_WORD *)(a1 + 24) = 32;
            goto LABEL_300;
          case 0x87:
            *(_WORD *)(a1 + 24) = 33;
LABEL_300:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 14;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 112) = 4;
            *(_QWORD *)(a1 + 88) = (v135 >> 4) & 7;
            *(_WORD *)(a1 + 81) = 8;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x8C:
            *(_WORD *)(a1 + 24) = 30;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 14;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 112) = 16;
            *(_QWORD *)(a1 + 88) = (v135 >> 4) & 7;
            *(_WORD *)(a1 + 81) = 8;
            return *(unsigned __int16 *)(a1 + 26);
          default:
            return 0;
        }
      case 120:
        v137 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 11;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v137;
        v138 = (unsigned __int8)insn_get_next_byte();
        v139 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v140 = _mm_cvtsi32_si128(v138 | (v139 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v140, v140);
        return result;
      case 121:
        v141 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 11;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v141;
        v142 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v142, v142);
        return result;
      case 125:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 11;
        *(_WORD *)(a1 + 46) = 1;
        v143 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v143;
        v144 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v145 = (__m128i)v144;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v145, v145);
        return result;
      case 126:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 11;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v133 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v134 = v133;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v134 + 65024;
        if ( v134 <= 0x1Fu )
          v57 = v134 + 65280;
        goto LABEL_173;
      case 127:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = 11;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 11;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case -128:
      case -126:
      case -124:
      case -122:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 20;
        *(_BYTE *)(a1 + 72) = 0;
        *(_WORD *)(a1 + 46) = (((unsigned __int8)next_byte >> 1) & 7) + 8;
        return *(unsigned __int16 *)(a1 + 26);
      case -127:
        *(_WORD *)(a1 + 24) = 18;
        v171 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 2;
        v172 = v171;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 42) = result - 1;
        v86 = v172 + 65024;
        if ( v172 <= 0x1Fu )
          v86 = v172 + 65280;
        goto LABEL_96;
      case -125:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 2;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v156 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        v157 = v156;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v157 + 65024;
        if ( v157 <= 0x1Fu )
          v57 = v157 + 65280;
        goto LABEL_173;
      case -123:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 10;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case -121:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_BYTE *)(a1 + 112) = 2;
        return result;
      case -120:
        *(_WORD *)(a1 + 24) = 5;
        v107 = insn_get_next_byte();
        v108 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 82) = v108;
        *(_BYTE *)(a1 + 42) = v108 - 1;
        v109 = v107 + 65024;
        v45 = v107 <= 0x1Fu;
        v92 = v107 + 65280;
        if ( !v45 )
          v92 = v109;
        goto LABEL_177;
      case -119:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 3;
        *(_WORD *)(a1 + 46) = 8;
        *(_BYTE *)(a1 + 72) = 0;
        v124 = insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        if ( v124 == 28 )
        {
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = 13;
          *(_BYTE *)(a1 + 112) = 0;
          return result;
        }
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 82) = result - 1;
        v57 = v124 + 65024;
        *(_BYTE *)(a1 + 85) = 1;
        if ( v124 <= 0x1Fu )
          v57 = v124 + 65280;
        goto LABEL_173;
      case -118:
        v125 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 2;
        v126 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(a1 + 24) = 54;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 7;
        *(_BYTE *)(a1 + 82) = v125;
        v127 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v126 + result + v127),
                                  (__m128i)(unsigned __int64)(v126 + result + v127));
        return result;
      case -117:
        v180 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 54;
        v181 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(a1 + 46) = 3;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 7;
        *(_BYTE *)(a1 + 82) = v180;
        v182 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v181 + result + v182),
                                  (__m128i)(unsigned __int64)(v181 + result + v182));
        return result;
      case -116:
      case -100:
      case -84:
        goto LABEL_40;
      case -115:
        v100 = *(_WORD *)(a1 + 26);
        v101 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(a1 + 41) = 7;
        *(_WORD *)(a1 + 24) = 47;
        *(_BYTE *)(a1 + 42) = v100;
        v102 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v101 + result + v102),
                                  (__m128i)(unsigned __int64)(v101 + result + v102));
        return result;
      case -114:
        v103 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v103;
        v104 = (unsigned __int8)insn_get_next_byte();
        v105 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v106 = _mm_cvtsi32_si128(v104 | (v105 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v106, v106);
        return result;
      case -113:
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 43;
        return result;
      case -112:
      case -110:
      case -108:
      case -106:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 21;
        *(_BYTE *)(a1 + 72) = 0;
        *(_WORD *)(a1 + 46) = (((unsigned __int8)next_byte >> 1) & 7) + 8;
        return *(unsigned __int16 *)(a1 + 26);
      case -111:
        *(_WORD *)(a1 + 24) = 19;
        v84 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 2;
        v85 = v84;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 42) = result - 1;
        v86 = v85 + 65024;
        if ( v85 <= 0x1Fu )
          v86 = v85 + 65280;
LABEL_96:
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v86, (__m128i)(unsigned __int64)v86);
        return result;
      case -109:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 2;
        *(_WORD *)(a1 + 46) = 1;
        v87 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = v87;
        v88 = (__m128i)((unsigned __int64)(unsigned __int8)insn_get_next_byte() + 65280);
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v88, v88);
        return result;
      case -107:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 10;
        *(_BYTE *)(a1 + 72) = 2;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case -105:
        *(_BYTE *)(a1 + 41) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 11;
        *(_BYTE *)(a1 + 72) = 2;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 1;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case -104:
        *(_WORD *)(a1 + 24) = 7;
        v89 = insn_get_next_byte();
        v90 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 82) = v90;
        *(_BYTE *)(a1 + 42) = v90 - 1;
        v91 = v89 + 65024;
        v45 = v89 <= 0x1Fu;
        v92 = v89 + 65280;
        if ( !v45 )
          v92 = v91;
        goto LABEL_177;
      case -103:
        *(_WORD *)(a1 + 24) = 3;
        v93 = insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        if ( v93 == 28 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = 13;
          *(_BYTE *)(a1 + 72) = 0;
        }
        else
        {
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 42) = result - 1;
          v94 = v93 + 65024;
          *(_BYTE *)(a1 + 45) = 1;
          if ( v93 <= 0x1Fu )
            v94 = v93 + 65280;
          *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v94, (__m128i)(unsigned __int64)v94);
        }
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 8;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      case -102:
        v95 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 1;
        *(_WORD *)(a1 + 24) = 37;
        *(_BYTE *)(a1 + 41) = 7;
        *(_BYTE *)(a1 + 45) = 1;
        *(_BYTE *)(a1 + 42) = v95;
        v96 = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a1 + 56) = v96 | ((unsigned __int8)insn_get_next_byte() << 8);
        return *(unsigned __int16 *)(a1 + 26);
      case -101:
        *(_BYTE *)(a1 + 72) = 1;
        *(_WORD *)(a1 + 24) = 46;
        v97 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 7;
        *(_BYTE *)(a1 + 45) = 1;
        *(_BYTE *)(a1 + 42) = v97;
        v98 = (unsigned __int8)insn_get_next_byte();
        v99 = _mm_cvtsi32_si128(v98 | ((unsigned __int8)insn_get_next_byte() << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v99, v99);
        return result;
      case -99:
        *(_BYTE *)(a1 + 41) = 7;
        v128 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(a1 + 24) = 48;
        *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
        v129 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v128 + result + v129),
                                  (__m128i)(unsigned __int64)(v128 + result + v129));
        return result;
      case -98:
        *(_WORD *)(a1 + 24) = 1;
        *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
        v130 = (unsigned __int8)insn_get_next_byte();
        v131 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 72) = 1;
        *(_BYTE *)(a1 + 81) = 1;
        v132 = _mm_cvtsi32_si128(v130 | (v131 << 8));
        *(_BYTE *)(a1 + 112) = 0;
        *(_WORD *)(a1 + 86) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v132, v132);
        return result;
      case -97:
        *(_WORD *)(a1 + 24) = 42;
        return *(unsigned __int16 *)(a1 + 26);
      case -96:
      case -95:
      case -94:
      case -93:
      case -92:
      case -91:
      case -90:
      case -89:
        v5 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = v2 & 7;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v5;
        v6 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v7 = (__m128i)v6;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v7, v7);
        return result;
      case -88:
        *(_WORD *)(a1 + 24) = 6;
        v183 = insn_get_next_byte();
        v184 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 82) = v184;
        *(_BYTE *)(a1 + 42) = v184 - 1;
        v185 = v183 + 65024;
        v45 = v183 <= 0x1Fu;
        v92 = v183 + 65280;
        if ( !v45 )
          v92 = v185;
        goto LABEL_177;
      case -87:
        v169 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 3;
        *(_WORD *)(a1 + 46) = 8;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 82) = v169;
        v170 = (__m128i)((unsigned __int64)(unsigned __int8)insn_get_next_byte() + 65280);
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v170, v170);
        return result;
      case -86:
        *(_WORD *)(a1 + 24) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_WORD *)(a1 + 112) = 534;
        return result;
      case -85:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 1;
        *(_WORD *)(a1 + 46) = 1;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 11;
        *(_WORD *)(a1 + 112) = 790;
        return result;
      case -83:
        *(_BYTE *)(a1 + 41) = 7;
        v76 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(a1 + 24) = 49;
        *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
        v77 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v76 + result + v77),
                                  (__m128i)(unsigned __int64)(v76 + result + v77));
        return result;
      case -82:
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 1;
        *(_WORD *)(a1 + 86) = 11;
        v78 = *(_WORD *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 14;
        *(_BYTE *)(a1 + 82) = v78;
        v79 = (__m128i)(unsigned __int8)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v79, v79);
        return result;
      case -81:
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 41;
        return result;
      default:
        v257 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 7;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 82) = v257;
        v258 = (unsigned __int8)insn_get_next_byte();
        v259 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 112) = 1;
        v260 = _mm_cvtsi32_si128(v258 | (v259 << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v260, v260);
        return result;
    }
  }
  if ( (unsigned __int8)next_byte <= 0xD8u )
  {
    if ( (unsigned __int8)next_byte > 0xCEu )
    {
      v249 = 1LL << ((unsigned __int8)next_byte + 49);
      if ( (v249 & 0x155) == 0 )
      {
        if ( (v249 & 0xAA) != 0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 3;
          *(_BYTE *)(a1 + 72) = 0;
          *(_WORD *)(a1 + 46) = (((unsigned __int8)v2 >> 1) & 7) + 8;
          *(_WORD *)(a1 + 86) = 8;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 112) = 0;
          return result;
        }
        *(_WORD *)(a1 + 24) = 9;
        v250 = insn_get_next_byte();
        v251 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 82) = v251;
        *(_BYTE *)(a1 + 42) = v251 - 1;
        v252 = v250 + 65280;
        v248 = v250 < 0x20u;
        v92 = v250 + 65024;
        if ( v248 )
          v92 = v252;
        goto LABEL_177;
      }
    }
    else
    {
      if ( (unsigned __int8)next_byte <= 0xBEu )
      {
        if ( (unsigned __int8)next_byte > 0xB8u )
        {
          switch ( (char)next_byte )
          {
            case -70:
              *(_WORD *)(a1 + 24) = 1;
              result = *(unsigned __int16 *)(a1 + 26);
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 11;
              *(_WORD *)(a1 + 72) = 534;
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 86) = 1;
              *(_BYTE *)(a1 + 112) = 0;
              break;
            case -69:
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 24) = 1;
              *(_WORD *)(a1 + 46) = 11;
              *(_WORD *)(a1 + 72) = 790;
              *(_WORD *)(a1 + 86) = 1;
              result = *(unsigned __int16 *)(a1 + 26);
              *(_BYTE *)(a1 + 81) = 1;
              *(_BYTE *)(a1 + 112) = 0;
              break;
            case -68:
              goto LABEL_40;
            case -67:
              *(_BYTE *)(a1 + 41) = 7;
              v27 = *(_QWORD *)(a1 + 8);
              *(_WORD *)(a1 + 24) = 50;
              *(_BYTE *)(a1 + 42) = *(_WORD *)(a1 + 26);
              v28 = (char)insn_get_next_byte();
              result = *(unsigned __int16 *)(a1 + 26);
              *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)(v27 + result + v28),
                                        (__m128i)(unsigned __int64)(v27 + result + v28));
              break;
            case -66:
              v29 = *(_WORD *)(a1 + 26);
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 11;
              *(_WORD *)(a1 + 24) = 1;
              *(_BYTE *)(a1 + 72) = 14;
              *(_BYTE *)(a1 + 42) = v29;
              v30 = insn_get_next_byte();
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 86) = 1;
              v31 = (__m128i)v30;
              *(_BYTE *)(a1 + 112) = 0;
              result = *(unsigned __int16 *)(a1 + 26);
              *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v31, v31);
              break;
            default:
              v261 = *(_WORD *)(a1 + 26);
              *(_BYTE *)(a1 + 41) = 2;
              *(_WORD *)(a1 + 24) = 3;
              *(_BYTE *)(a1 + 45) = 0;
              *(_BYTE *)(a1 + 42) = v261;
              v262 = insn_get_next_byte();
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 86) = 8;
              *(_BYTE *)(a1 + 112) = 0;
              v263 = (__m128i)((unsigned __int64)v262 + 65280);
              result = *(unsigned __int16 *)(a1 + 26);
              *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v263, v263);
              break;
          }
          return result;
        }
        v244 = 1LL << ((unsigned __int8)next_byte + 80);
        if ( (v244 & 0xAA) != 0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 44;
          *(_BYTE *)(a1 + 72) = 0;
          *(_WORD *)(a1 + 46) = (((unsigned __int8)v2 >> 1) & 7) + 8;
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( (v244 & 0x55) != 0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 45;
          *(_BYTE *)(a1 + 72) = 0;
          *(_WORD *)(a1 + 46) = (((unsigned __int8)v2 >> 1) & 7) + 8;
          return *(unsigned __int16 *)(a1 + 26);
        }
        *(_WORD *)(a1 + 24) = 8;
        v245 = insn_get_next_byte();
        v246 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 82) = v246;
        *(_BYTE *)(a1 + 42) = v246 - 1;
        v247 = v245 + 65280;
        v248 = v245 < 0x20u;
        v92 = v245 + 65024;
        if ( v248 )
          v92 = v247;
LABEL_177:
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)(unsigned __int64)v92);
        v186 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        v187 = (__m128i)v186;
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v187, v187);
        return result;
      }
      if ( (unsigned __int8)next_byte > 0xC6u )
      {
        switch ( (char)next_byte )
        {
          case -56:
            *(_WORD *)(a1 + 24) = 12;
            v222 = insn_get_next_byte();
            v223 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 2;
            *(_BYTE *)(a1 + 45) = 0;
            *(_BYTE *)(a1 + 82) = v223;
            *(_BYTE *)(a1 + 42) = v223 - 1;
            v224 = v222 + 65024;
            v45 = v222 <= 0x1Fu;
            v92 = v222 + 65280;
            if ( !v45 )
              v92 = v224;
            goto LABEL_177;
          case -54:
            v219 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 13;
            *(_WORD *)(a1 + 46) = 8;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 81) = 5;
            *(_BYTE *)(a1 + 85) = 1;
            *(_BYTE *)(a1 + 82) = v219;
            v220 = (unsigned __int8)insn_get_next_byte();
            v221 = _mm_cvtsi32_si128(v220 | ((unsigned __int8)insn_get_next_byte() << 8));
            result = *(unsigned __int16 *)(a1 + 26);
            *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v221, v221);
            break;
          case -52:
            goto LABEL_40;
          case -50:
            v225 = *(_WORD *)(a1 + 26);
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 2;
            *(_WORD *)(a1 + 46) = 1;
            *(_BYTE *)(a1 + 72) = 0;
            *(_BYTE *)(a1 + 82) = v225;
            v226 = (unsigned __int8)insn_get_next_byte();
            v227 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 2;
            *(_BYTE *)(a1 + 85) = 0;
            *(_BYTE *)(a1 + 112) = 1;
            v228 = _mm_cvtsi32_si128(v226 | (v227 << 8));
            result = *(unsigned __int16 *)(a1 + 26);
            *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v228, v228);
            break;
          default:
            goto LABEL_37;
        }
        return result;
      }
      v253 = 1LL << ((unsigned __int8)next_byte + 65);
      if ( (v253 & 0xAA) != 0 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 3;
        *(_WORD *)(a1 + 46) = 8;
        *(_WORD *)(a1 + 86) = (((unsigned __int8)v2 >> 1) & 7) + 8;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 112) = 0;
        return result;
      }
      if ( (v253 & 0x54) == 0 )
      {
        result = *(unsigned __int16 *)(a1 + 26);
        *(_WORD *)(a1 + 24) = 40;
        return result;
      }
    }
LABEL_37:
    *(_BYTE *)(a1 + 41) = 2;
    *(_WORD *)(a1 + 24) = 39;
    *(_BYTE *)(a1 + 45) = 1;
    *(_BYTE *)(a1 + 72) = 2;
    result = *(unsigned __int16 *)(a1 + 26);
    *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int8)((v2 & 0x3E) + 64),
                              (__m128i)(unsigned __int8)((v2 & 0x3E) + 64));
    return result;
  }
  if ( (unsigned __int8)next_byte <= 0xE6u )
  {
    if ( (unsigned __int8)next_byte <= 0xDCu )
    {
      if ( (_BYTE)next_byte == 0xDA )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 14;
        *(_WORD *)(a1 + 46) = 8;
        v254 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 1;
        *(_BYTE *)(a1 + 82) = v254;
        v255 = (unsigned __int8)insn_get_next_byte();
        v256 = _mm_cvtsi32_si128(v255 | ((unsigned __int8)insn_get_next_byte() << 8));
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v256, v256);
        return result;
      }
      if ( (unsigned __int8)next_byte >= 0xDCu )
      {
LABEL_40:
        v19 = *(_WORD *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 8;
        v20 = (unsigned __int8)v2 >> 4;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 24) = 51;
        *(_BYTE *)(a1 + 42) = v19;
        v21 = insn_get_next_byte();
        v22 = 8;
        if ( v21 != 30 )
        {
          v23 = v21 + 65024;
          if ( v21 <= 0x1Fu )
            v23 = v21 + 65280;
          *(_QWORD *)(a1 + 56) = v23;
          v22 = 64;
        }
        *(_BYTE *)(a1 + 72) = v22;
        v24 = *(_WORD *)(a1 + 26);
        *(_QWORD *)(a1 + 48) = v20 & 7;
        v25 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(a1 + 81) = 7;
        *(_BYTE *)(a1 + 82) = v24;
        v26 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a1 + 26);
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v25 + result + v26),
                                  (__m128i)(unsigned __int64)(v25 + result + v26));
        return result;
      }
    }
    else
    {
      v235 = 1LL << ((unsigned __int8)next_byte + 35);
      if ( (v235 & 0x155) == 0 )
      {
        if ( (v235 & 0x2A8) != 0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = 8;
          *(_WORD *)(a1 + 24) = 4;
          *(_WORD *)(a1 + 86) = (((unsigned __int8)v2 >> 1) & 7) + 8;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 112) = 0;
        }
        else
        {
          v236 = *(_WORD *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 72) = 0;
          *(_WORD *)(a1 + 24) = 2;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = 11;
          *(_BYTE *)(a1 + 112) = 14;
          *(_BYTE *)(a1 + 82) = v236;
          v237 = (__m128i)(unsigned __int8)insn_get_next_byte();
          result = *(unsigned __int16 *)(a1 + 26);
          *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v237, v237);
        }
        return result;
      }
    }
    goto LABEL_37;
  }
  switch ( (char)next_byte )
  {
    case -24:
      *(_WORD *)(a1 + 24) = 10;
      v203 = insn_get_next_byte();
      v204 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 82) = v204;
      *(_BYTE *)(a1 + 42) = v204 - 1;
      v205 = v203 + 65024;
      v45 = v203 <= 0x1Fu;
      v92 = v203 + 65280;
      if ( !v45 )
        v92 = v205;
      goto LABEL_177;
    case -22:
      v206 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 15;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      *(_BYTE *)(a1 + 82) = v206;
      v207 = (unsigned __int8)insn_get_next_byte();
      v208 = _mm_cvtsi32_si128(v207 | ((unsigned __int8)insn_get_next_byte() << 8));
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v208, v208);
      break;
    case -20:
    case -4:
      goto LABEL_40;
    case -18:
      *(_WORD *)(a1 + 24) = 3;
      v197 = insn_get_next_byte();
      v198 = *(_WORD *)(a1 + 26);
      if ( v197 == 28 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 13;
        *(_BYTE *)(a1 + 72) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 42) = v198 - 1;
        v199 = v197 + 65024;
        v45 = v197 <= 0x1Fu;
        *(_BYTE *)(a1 + 45) = 1;
        v200 = v197 + 65280;
        if ( !v45 )
          v200 = v199;
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v200, (__m128i)(unsigned __int64)v200);
      }
      *(_BYTE *)(a1 + 82) = v198;
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      v201 = (unsigned __int8)insn_get_next_byte();
      v202 = _mm_cvtsi32_si128(v201 | ((unsigned __int8)insn_get_next_byte() << 8));
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v202, v202);
      break;
    case -16:
      *(_WORD *)(a1 + 24) = 1;
      v195 = insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      if ( v195 == 30 )
      {
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 12;
        *(_BYTE *)(a1 + 112) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 82) = result - 1;
        v196 = v195 + 65024;
        *(_BYTE *)(a1 + 85) = 0;
        if ( v195 <= 0x1Fu )
          v196 = v195 + 65280;
        *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v196, (__m128i)(unsigned __int64)v196);
      }
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 72) = 0;
      break;
    case -14:
      *(_WORD *)(a1 + 24) = 1;
      v193 = insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      if ( v193 == 30 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 12;
        *(_BYTE *)(a1 + 72) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 42) = result - 1;
        v194 = v193 + 65024;
        *(_BYTE *)(a1 + 45) = 0;
        if ( v193 <= 0x1Fu )
          v194 = v193 + 65280;
        *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v194, (__m128i)(unsigned __int64)v194);
      }
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 1;
      *(_BYTE *)(a1 + 112) = 0;
      break;
    case -12:
      v191 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 82) = v191;
      v192 = (__m128i)((unsigned __int64)(unsigned __int8)insn_get_next_byte() + 65280);
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v192, v192);
      break;
    case -10:
      v188 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 1;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 42) = v188;
      v189 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 1;
      *(_BYTE *)(a1 + 112) = 0;
      v190 = (__m128i)((unsigned __int64)v189 + 65280);
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v190, v190);
      break;
    case -8:
      *(_WORD *)(a1 + 24) = 11;
      v216 = insn_get_next_byte();
      v217 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 82) = v217;
      *(_BYTE *)(a1 + 42) = v217 - 1;
      v218 = v216 + 65024;
      v45 = v216 <= 0x1Fu;
      v92 = v216 + 65280;
      if ( !v45 )
        v92 = v218;
      goto LABEL_177;
    case -6:
      v213 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 7;
      *(_WORD *)(a1 + 24) = 46;
      v214 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 42) = v213;
      v215 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)(v214 + result + v215),
                                (__m128i)(unsigned __int64)(v214 + result + v215));
      break;
    case -2:
      v209 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 3;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 42) = v209;
      v210 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      *(_BYTE *)(a1 + 82) = *(_WORD *)(a1 + 26);
      *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                                (__m128i)((unsigned __int64)v210 + 65280),
                                (__m128i)((unsigned __int64)v210 + 65280));
      v211 = (unsigned __int8)insn_get_next_byte();
      v212 = _mm_cvtsi32_si128(v211 | ((unsigned __int8)insn_get_next_byte() << 8));
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v212, v212);
      break;
    default:
      goto LABEL_37;
  }
  return result;
}

