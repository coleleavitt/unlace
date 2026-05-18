__int64 __fastcall sub_134D40(__int64 a1, unsigned __int8 *a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  unsigned __int8 *v5; // r15
  __int64 v6; // r13
  __m128i *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // al
  unsigned int v15; // r14d
  int v16; // eax
  unsigned __int8 *v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // esi
  signed int *v22; // r9
  signed int v23; // r14d
  int v24; // ebp
  unsigned __int8 *v25; // r12
  __int64 *v26; // r15
  __int64 *v27; // rdx
  int v28; // eax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rdi
  signed int *v33; // r9
  signed int *v34; // rcx
  int k; // eax
  int v36; // edx
  __int64 v37; // rsi
  __int64 *v38; // rax
  int v39; // ebp
  int v40; // eax
  __int64 *v41; // rax
  __int64 *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // rbp
  unsigned __int8 *v45; // rbp
  unsigned __int8 *v46; // rdi
  __int64 v47; // rsi
  int v48; // eax
  unsigned int v49; // edi
  unsigned int v50; // esi
  unsigned int v51; // ecx
  char v52; // al
  const char *v53; // rcx
  int v54; // r9d
  int v55; // eax
  _BYTE *v56; // rdx
  int v57; // ecx
  int v58; // r8d
  bool v59; // zf
  __int16 v60; // ax
  unsigned int v61; // r12d
  unsigned int v62; // r15d
  int v63; // eax
  int v64; // edx
  int v65; // edi
  _BYTE *v66; // rdx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rsi
  _QWORD *v75; // rsi
  int v76; // eax
  __int64 v77; // rdx
  _BYTE *v78; // rcx
  int v79; // esi
  unsigned __int8 *v80; // rbx
  int v81; // r14d
  const char *v82; // r8
  int v83; // ecx
  __int64 v84; // r12
  int v86; // eax
  unsigned int v87; // eax
  __int64 v88; // r9
  signed int v89; // r14d
  unsigned int v90; // eax
  unsigned int v91; // edi
  __int64 v92; // rax
  __int64 v93; // rax
  __int16 v94; // di
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  __int16 i; // cx
  int v98; // edx
  _BYTE *v99; // rax
  __int64 v100; // rbx
  unsigned int v101; // r14d
  unsigned int v102; // eax
  __int64 v103; // rax
  int v104; // edx
  __int64 v105; // rax
  int v106; // ebx
  int v107; // eax
  int v108; // r9d
  __int64 *v109; // rbx
  int v110; // eax
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned int v113; // r9d
  int v114; // eax
  int *v115; // rbx
  int v116; // eax
  _QWORD *v117; // rsi
  __int64 *v118; // rax
  char *v119; // rax
  int v120; // ecx
  char v121; // si
  int v122; // eax
  unsigned __int8 *m; // rdx
  int v124; // eax
  __int64 v125; // rsi
  const char *v126; // rcx
  unsigned int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 *v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 *v133; // r14
  __int64 *v134; // rsi
  _QWORD *v135; // rbp
  unsigned __int8 *v136; // r12
  __int64 v137; // r15
  __int64 v138; // rax
  signed int v139; // eax
  unsigned int v140; // r8d
  int v141; // eax
  unsigned __int8 *v142; // rdx
  int v143; // eax
  unsigned int v144; // esi
  int v145; // eax
  unsigned int v146; // edx
  _QWORD *v147; // r12
  int v148; // ebx
  __int64 *v149; // r13
  unsigned __int8 *v150; // r14
  int *v151; // rbp
  int v152; // esi
  _BYTE *v153; // rdx
  int v154; // eax
  __int64 v155; // rdx
  _BYTE *v156; // rcx
  __int64 v157; // rax
  const char *v158; // rcx
  unsigned __int8 v159; // al
  __int64 v160; // rax
  __int16 v161; // ax
  __int64 v162; // rsi
  unsigned int v163; // eax
  unsigned int v164; // esi
  char v165; // al
  unsigned int v166; // r11d
  unsigned int v167; // eax
  unsigned int v168; // esi
  unsigned int v169; // eax
  unsigned __int8 v170; // al
  unsigned int v171; // edx
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // rcx
  __int16 v174; // ax
  __int16 v175; // ax
  int *v176; // r14
  __int16 j; // ax
  __int64 v178; // [rsp+0h] [rbp-158h]
  _BYTE *v179; // [rsp+0h] [rbp-158h]
  __m128i *v180; // [rsp+0h] [rbp-158h]
  unsigned int v181; // [rsp+0h] [rbp-158h]
  __int64 v182; // [rsp+8h] [rbp-150h]
  unsigned int v183; // [rsp+8h] [rbp-150h]
  __int64 v184; // [rsp+8h] [rbp-150h]
  __int64 v185; // [rsp+8h] [rbp-150h]
  __int64 v186; // [rsp+8h] [rbp-150h]
  __int64 v187; // [rsp+8h] [rbp-150h]
  __int64 v188; // [rsp+8h] [rbp-150h]
  __int64 v189; // [rsp+8h] [rbp-150h]
  __int64 v190; // [rsp+8h] [rbp-150h]
  __int64 v191; // [rsp+8h] [rbp-150h]
  __int64 v192; // [rsp+8h] [rbp-150h]
  signed int *v193; // [rsp+10h] [rbp-148h]
  unsigned int **v194; // [rsp+10h] [rbp-148h]
  unsigned int v195; // [rsp+10h] [rbp-148h]
  unsigned int v196; // [rsp+10h] [rbp-148h]
  __int64 v197; // [rsp+10h] [rbp-148h]
  int v198; // [rsp+10h] [rbp-148h]
  __int64 v199; // [rsp+10h] [rbp-148h]
  unsigned int v200; // [rsp+10h] [rbp-148h]
  unsigned int v201; // [rsp+10h] [rbp-148h]
  __m128i *v202; // [rsp+18h] [rbp-140h]
  signed int *v203; // [rsp+18h] [rbp-140h]
  __int64 v204; // [rsp+18h] [rbp-140h]
  unsigned int v205; // [rsp+18h] [rbp-140h]
  __int64 v206; // [rsp+18h] [rbp-140h]
  __int64 v207; // [rsp+18h] [rbp-140h]
  __m128i *v208; // [rsp+18h] [rbp-140h]
  __int64 v209; // [rsp+18h] [rbp-140h]
  unsigned int v210; // [rsp+18h] [rbp-140h]
  unsigned int v211; // [rsp+18h] [rbp-140h]
  int v212; // [rsp+20h] [rbp-138h]
  unsigned int v213; // [rsp+20h] [rbp-138h]
  unsigned int v214; // [rsp+20h] [rbp-138h]
  __int64 v215; // [rsp+20h] [rbp-138h]
  unsigned int v216; // [rsp+20h] [rbp-138h]
  unsigned int v217; // [rsp+28h] [rbp-130h]
  unsigned int v218; // [rsp+28h] [rbp-130h]
  unsigned int v219; // [rsp+30h] [rbp-128h]
  _DWORD *v220; // [rsp+30h] [rbp-128h]
  __m128i *v221; // [rsp+30h] [rbp-128h]
  unsigned int v222; // [rsp+30h] [rbp-128h]
  __int64 v223; // [rsp+38h] [rbp-120h]
  unsigned __int8 *v224; // [rsp+38h] [rbp-120h]
  unsigned int v225; // [rsp+38h] [rbp-120h]
  unsigned int v226; // [rsp+44h] [rbp-114h]
  unsigned int v227; // [rsp+44h] [rbp-114h]
  __int64 *v228; // [rsp+48h] [rbp-110h]
  unsigned int v229; // [rsp+48h] [rbp-110h]
  __int64 v230; // [rsp+48h] [rbp-110h]
  __int64 v231; // [rsp+50h] [rbp-108h]
  unsigned int v232; // [rsp+50h] [rbp-108h]
  unsigned int v233; // [rsp+50h] [rbp-108h]
  signed int v234; // [rsp+58h] [rbp-100h]
  unsigned int v235; // [rsp+58h] [rbp-100h]
  unsigned int v236; // [rsp+58h] [rbp-100h]
  char v237; // [rsp+60h] [rbp-F8h]
  unsigned int v238; // [rsp+60h] [rbp-F8h]
  unsigned int v239; // [rsp+60h] [rbp-F8h]
  signed int v240; // [rsp+60h] [rbp-F8h]
  unsigned int v241; // [rsp+64h] [rbp-F4h]
  unsigned int v242; // [rsp+68h] [rbp-F0h]
  unsigned int v243; // [rsp+68h] [rbp-F0h]
  __int64 v244; // [rsp+70h] [rbp-E8h]
  int v245; // [rsp+78h] [rbp-E0h]
  int v246; // [rsp+80h] [rbp-D8h]
  int v247; // [rsp+88h] [rbp-D0h]
  int v248; // [rsp+88h] [rbp-D0h]
  unsigned int v249; // [rsp+8Ch] [rbp-CCh]
  __m128i si128; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v251; // [rsp+A0h] [rbp-B8h]
  __int64 v252; // [rsp+B0h] [rbp-A8h]
  char v253[4]; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v254; // [rsp+C4h] [rbp-94h]
  __int64 v255; // [rsp+C8h] [rbp-90h] BYREF
  unsigned int v256; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v257; // [rsp+D8h] [rbp-80h]
  __int64 v258; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v259; // [rsp+F8h] [rbp-60h] BYREF
  unsigned int v260; // [rsp+100h] [rbp-58h] BYREF
  __int64 v261; // [rsp+108h] [rbp-50h]
  _DWORD *v262; // [rsp+110h] [rbp-48h]
  unsigned __int64 v263; // [rsp+118h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v7 = (__m128i *)a3;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *((_QWORD *)a2 + 10);
  v263 = __readfsqword(0x28u);
  v178 = *(_QWORD *)a1;
  v10 = a3[2].m128i_i64[0];
  si128 = _mm_load_si128(a3);
  v11 = _mm_load_si128(a3 + 1);
  v252 = v10;
  v251 = v11;
  if ( !v8 )
  {
    v189 = v9;
    v118 = sub_E2050((__int64 *)a1);
    v9 = v189;
    v8 = (__int64)v118;
  }
  if ( si128.m128i_i8[0] == 12 )
  {
    v186 = v9;
    sub_E1710(v8, 118, si128.m128i_u32[1], **((_DWORD **)a2 + 4), 0);
    si128.m128i_i8[0] = 14;
    v9 = v186;
  }
  v12 = *((unsigned int *)a2 + 1);
  if ( (v12 & 0x400) != 0 )
  {
    v184 = *((_QWORD *)a2 + 12);
    a4 = v184 == 0;
    if ( !*((_QWORD *)a2 + 14) )
    {
      v80 = *((unsigned __int8 **)a2 + 10);
      if ( v80 )
      {
        v81 = 1;
        while ( 1 )
        {
          v81 += a4;
          if ( *((_QWORD *)v80 + 14) )
            goto LABEL_6;
          if ( !*((_QWORD *)v80 + 10) )
            break;
          v80 = *((unsigned __int8 **)v80 + 10);
        }
        v82 = "S";
        v83 = v81;
        if ( v81 == 1 )
        {
          v82 = "";
          v83 = 1;
        }
        sub_E8800(a1, 0, "SCAN %d CONSTANT ROW%s", v83, v82);
        goto LABEL_102;
      }
      sub_E8800(a1, 0, "SCAN %d CONSTANT ROW%s", 1, "");
      if ( a2 )
      {
        v80 = a2;
        LOWORD(v81) = 1;
LABEL_102:
        v180 = v7;
        v84 = (__int64)v80;
        do
        {
          sub_1294A0(a1, v84, -1, nullptr, 0, (unsigned __int8 *)&si128, *(double *)v11.m128i_i64, 1u, 1);
          if ( v184 )
            break;
          *(_WORD *)(v84 + 2) = v81;
          v84 = *(_QWORD *)(v84 + 88);
        }
        while ( v84 );
        v7 = v180;
      }
LABEL_106:
      v18 = 0;
      v7->m128i_i32[3] = si128.m128i_i32[3];
      v7[1].m128i_i32[0] = v251.m128i_i32[0];
      return v18;
    }
  }
LABEL_6:
  BYTE1(v12) &= 0x20u;
  if ( BYTE1(v12) && a2 )
  {
    v13 = a2;
    do
    {
      v13 = *((unsigned __int8 **)v13 + 10);
      if ( !v13 )
        goto LABEL_11;
    }
    while ( (v13[5] & 0x20) != 0 );
    if ( *((_QWORD *)a2 + 14) )
    {
      sub_DBD10(a1, "cannot use window functions in recursive queries", v12, a4, a5, v9);
LABEL_109:
      v18 = *(_DWORD *)(a1 + 48);
      if ( v18 )
        goto LABEL_106;
      v185 = 0;
LABEL_111:
      if ( (v5[4] & 0x20) != 0 )
      {
        v198 = **((_DWORD **)v5 + 4);
        v130 = sub_E3110((_BYTE *)v178, v198, 1);
        v133 = v130;
        if ( v130 )
        {
          v134 = v130 + 4;
          if ( v198 > 0 )
          {
            v207 = v8;
            v221 = v7;
            v135 = v5 + 32;
            v136 = v5;
            v137 = 0;
            do
            {
              v138 = sub_F4460(v6, v135, *((_QWORD *)v136 + 10), v137, *(double *)v11.m128i_i64);
              v134[v137] = v138;
              if ( !v138 )
                v134[v137] = *(_QWORD *)(v178 + 16);
              ++v137;
            }
            while ( (unsigned int)(v198 - 1) + 1LL != v137 );
            v5 = v136;
            v8 = v207;
            v7 = v221;
          }
          if ( v5 )
          {
            v181 = v18;
            v208 = v7;
            v147 = (_QWORD *)v8;
            v148 = v198;
            v199 = v6;
            v149 = v133;
            v150 = v5;
            do
            {
              v151 = (int *)(v150 + 20);
              do
              {
                v152 = *v151;
                if ( *v151 < 0 )
                  break;
                v153 = byte_241F50;
                if ( !*(_BYTE *)(*v147 + 103LL) )
                  v153 = (_BYTE *)(v147[17] + 24LL * v152);
                *((_DWORD *)v153 + 2) = v148;
                ++*(_DWORD *)v149;
                ++v151;
                sub_DCC50((__int64)v147, v152, (__int64)v149, 4294967288LL, v131, v132);
                *(v151 - 1) = -1;
              }
              while ( v150 + 28 != (unsigned __int8 *)v151 );
              v150 = *((unsigned __int8 **)v150 + 10);
            }
            while ( v150 );
            v133 = v149;
            v18 = v181;
            v6 = v199;
            v7 = v208;
          }
          v59 = (*(_DWORD *)v133)-- == 1;
          if ( v59 )
            sub_CFCD0(v133);
        }
        else
        {
          v18 = 7;
        }
      }
LABEL_112:
      v7->m128i_i32[3] = si128.m128i_i32[3];
      v7[1].m128i_i32[0] = v251.m128i_i32[0];
      if ( v185 )
        sub_DC930((__int64 *)v6, (__int64 *)(v6 + 184), (void (__fastcall *)(__int64, __int64))sub_D7700, v185);
      return v18;
    }
    v100 = *((_QWORD *)a2 + 5);
    v101 = **((_DWORD **)a2 + 4);
    v188 = *(_QWORD *)(a1 + 16);
    if ( (unsigned int)sub_E4020(a1, 33, 0, 0, 0) )
      goto LABEL_109;
    v102 = *(_DWORD *)(a1 + 68) - 1;
    *(_DWORD *)(a1 + 68) = v102;
    *((_WORD *)a2 + 1) = 320;
    v225 = v102;
    sub_128220(a1, (__int64)a2, v102, *(double *)v11.m128i_i64);
    v103 = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = 0;
    v230 = v103;
    v227 = *((_DWORD *)a2 + 2);
    LODWORD(v103) = *((_DWORD *)a2 + 3);
    *((_QWORD *)a2 + 1) = 0;
    v240 = v103;
    v220 = *((_DWORD **)a2 + 9);
    if ( *(int *)v100 > 0 )
    {
      if ( (*(_BYTE *)(v100 + 69) & 0x20) != 0 )
      {
        v105 = 0;
LABEL_246:
        v205 = *(_DWORD *)(v100 + 104 * v105 + 72);
LABEL_139:
        v106 = *(_DWORD *)(a1 + 52) + 1;
        v196 = *(_DWORD *)(a1 + 52);
        v107 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 52) = v106;
        v214 = v107 + 1;
        if ( *a2 == 0x86 )
        {
          v169 = v196 + 2;
          if ( !v220 )
          {
            *(_DWORD *)(a1 + 52) = v169;
            LOBYTE(v258) = 5;
            *(_DWORD *)(a1 + 56) = v214;
            HIDWORD(v258) = v196;
            v261 = 0;
            v259 = 0;
            v260 = 0;
            sub_E1710(v188, 121, v205, v214, v101);
            sub_E1710(v188, 118, v196, v101, 0);
            v113 = v106;
LABEL_143:
            if ( v113 )
            {
              *((_DWORD *)a2 + 5) = sub_E1710(v188, 118, v113, 0, 0);
              v114 = *((_DWORD *)a2 + 1) | 0x20;
              *((_DWORD *)a2 + 1) = v114;
              goto LABEL_145;
            }
LABEL_144:
            v114 = *((_DWORD *)a2 + 1);
LABEL_145:
            *((_QWORD *)a2 + 9) = 0;
            if ( (v114 & 8) != 0 )
            {
LABEL_248:
              sub_DBD10(a1, "recursive aggregate queries not supported");
            }
            else
            {
              v115 = *((int **)a2 + 10);
              *a2 = -121;
              if ( (*((_BYTE *)v115 + 5) & 0x20) != 0 )
              {
                while ( v115 )
                {
                  if ( (v115[1] & 8) != 0 )
                    goto LABEL_248;
                  v176 = *((int **)v115 + 10);
                  *(_BYTE *)v115 = -121;
                  if ( (*((_BYTE *)v176 + 5) & 0x20) == 0 )
                    goto LABEL_153;
                  v115 = v176;
                }
                v176 = &dword_40;
              }
              else
              {
                v176 = v115;
                v115 = (int *)a2;
              }
LABEL_153:
              *((_QWORD *)v176 + 11) = 0;
              sub_E8800(a1, 1, "SETUP");
              v116 = sub_11F190(a1, v176, &v258);
              *((_QWORD *)v176 + 11) = a2;
              if ( !v116 )
              {
                v233 = sub_E1710(v188, 35, v196, v225, 0);
                sub_E1710(v188, 136, v205, 0, 0);
                if ( v220 )
                  sub_E1710(v188, 94, v196, *v220 + 1, v214);
                else
                  sub_E1710(v188, 134, v196, v214, 0);
                sub_E1710(v188, 130, v196, 0, 0);
                v171 = *(_DWORD *)(a1 + 68) - 1;
                v201 = v171;
                *(_DWORD *)(a1 + 68) = v171;
                if ( v240 > 0 )
                  sub_E2490(v188, v240, v171);
                sub_1294A0(
                  a1,
                  (__int64)a2,
                  v205,
                  nullptr,
                  0,
                  (unsigned __int8 *)&si128,
                  *(double *)v11.m128i_i64,
                  v201,
                  v225);
                if ( v227 )
                  sub_E1710(v188, 60, v227, v225, 0);
                sub_E0BB0(v188, v201);
                *((_QWORD *)v115 + 10) = 0;
                sub_E8800(a1, 1, "RECURSIVE STEP");
                sub_11F190(a1, a2, &v258);
                *((_QWORD *)v115 + 10) = v176;
                sub_E1710(v188, 8, 0, v233, 0);
                sub_E0BB0(v188, v225);
              }
            }
            v117 = *((_QWORD **)a2 + 9);
            if ( v117 )
              sub_D7810(*(_QWORD *)a1, v117);
            *((_QWORD *)v5 + 9) = v220;
            *((_QWORD *)v5 + 12) = v230;
            goto LABEL_109;
          }
          *(_DWORD *)(a1 + 52) = v169;
          LOBYTE(v258) = 6;
          v261 = 0;
          HIDWORD(v258) = v196;
          v259 = 0;
          v260 = 0;
          *(_DWORD *)(a1 + 56) = v214;
          sub_E1710(v188, 121, v205, v214, v101);
          v108 = v106;
        }
        else
        {
          if ( !v220 )
          {
            LOBYTE(v258) = 8;
            v261 = 0;
            *(_DWORD *)(a1 + 56) = v214;
            HIDWORD(v258) = v196;
            v259 = 0;
            v260 = 0;
            sub_E1710(v188, 121, v205, v214, v101);
            sub_E1710(v188, 118, v196, v101, 0);
            goto LABEL_144;
          }
          LOBYTE(v258) = 7;
          v261 = 0;
          HIDWORD(v258) = v196;
          v259 = 0;
          v260 = 0;
          *(_DWORD *)(a1 + 56) = v214;
          sub_E1710(v188, 121, v205, v214, v101);
          v108 = 0;
        }
        v232 = v108;
        v109 = sub_F4770((__int64 *)a1, a2, *(double *)v11.m128i_i64);
        v110 = sub_E1710(v188, 118, v196, *v220 + 2, 0);
        sub_DCC50(v188, v110, (__int64)v109, 4294967288LL, v111, v112);
        v113 = v232;
        v262 = v220;
        goto LABEL_143;
      }
      v104 = 0;
      while ( ++v104 != *(_DWORD *)v100 )
      {
        v105 = v104;
        if ( (*(_BYTE *)(v100 + 104LL * v104 + 69) & 0x20) != 0 )
          goto LABEL_246;
      }
    }
    v205 = 0;
    goto LABEL_139;
  }
LABEL_11:
  if ( !*((_QWORD *)a2 + 9) )
  {
    if ( !*(_QWORD *)(v9 + 80) )
    {
      v191 = v9;
      sub_E8800(a1, 1, "COMPOUND QUERY");
      sub_E8800(a1, 1, "LEFT-MOST SUBQUERY");
      v9 = v191;
    }
    v14 = *a2;
    if ( *a2 != 0x87 )
    {
      if ( v14 == 0x88 || v14 == 0x86 )
      {
        if ( si128.m128i_i8[0] == 1 )
        {
          v15 = si128.m128i_u32[1];
        }
        else
        {
          v15 = *(_DWORD *)(a1 + 52);
          v192 = v9;
          *(_DWORD *)(a1 + 52) = v15 + 1;
          v141 = sub_E1710(v8, 118, v15, 0, 0);
          v142 = a2;
          *((_DWORD *)a2 + 5) = v141;
          v9 = v192;
          while ( *((_QWORD *)v142 + 11) )
            v142 = *((unsigned __int8 **)v142 + 11);
          *((_DWORD *)v142 + 1) |= 0x20u;
        }
        LOBYTE(v258) = 1;
        HIDWORD(v258) = v15;
        v261 = 0;
        v259 = 0;
        v260 = 0;
        v190 = v9;
        v18 = sub_11F190(a1, v9, &v258);
        if ( v18 )
          goto LABEL_21;
        v124 = *a2;
        v125 = *((_QWORD *)a2 + 12);
        *((_QWORD *)v5 + 10) = 0;
        *((_QWORD *)v5 + 12) = 0;
        v197 = v125;
        if ( (_BYTE)v124 == 0x88 )
        {
          LOBYTE(v258) = 2;
          v126 = "EXCEPT";
        }
        else
        {
          LOBYTE(v258) = 1;
          v126 = "UNION ALL";
          if ( (_BYTE)v124 != 0x87 )
          {
            v126 = "INTERSECT";
            if ( (_BYTE)v124 != 0x89 )
              v126 = "UNION";
          }
        }
        v206 = v190;
        sub_E8800(a1, 1, "%s USING TEMP B-TREE", v126);
        v127 = sub_11F190(a1, v5, &v258);
        v59 = *v5 == 0x86;
        v18 = v127;
        v128 = *((_QWORD *)v5 + 10);
        *((_QWORD *)v5 + 9) = 0;
        *((_QWORD *)v5 + 10) = v190;
        v185 = v128;
        if ( v59 )
          *((_WORD *)v5 + 1) = sub_CB800(*((__int16 *)v5 + 1), *(__int16 *)(v206 + 2));
        v129 = *((_QWORD *)v5 + 12);
        if ( v129 )
          sub_D7720(v178, v129);
        v59 = si128.m128i_i8[0] == 1;
        *((_QWORD *)v5 + 1) = 0;
        *((_QWORD *)v5 + 12) = v197;
        if ( !v59 && !*(_BYTE *)(v178 + 103) )
        {
          v167 = *(_DWORD *)(a1 + 68);
          v168 = v167 - 1;
          v167 -= 2;
          *(_DWORD *)(a1 + 68) = v167;
          v211 = v167;
          sub_128220(a1, (__int64)v5, v168, *(double *)v11.m128i_i64);
          sub_E1710(v8, 35, v15, v168, 0);
          v216 = *(_DWORD *)(v8 + 144);
          sub_1294A0(a1, (__int64)v5, v15, nullptr, 0, (unsigned __int8 *)&si128, *(double *)v11.m128i_i64, v211, v168);
          sub_E0BB0(v8, v211);
          sub_E1710(v8, 38, v15, v216, 0);
          sub_E0BB0(v8, v168);
LABEL_241:
          sub_E1710(v8, 122, v15, 0, 0);
        }
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 52);
        v182 = v9;
        *(_DWORD *)(a1 + 52) = v15 + 2;
        v16 = sub_E1710(v8, 118, v15, 0, 0);
        v17 = a2;
        *((_DWORD *)a2 + 5) = v16;
        while ( *((_QWORD *)v17 + 11) )
          v17 = *((unsigned __int8 **)v17 + 11);
        *((_DWORD *)v17 + 1) |= 0x20u;
        LOBYTE(v258) = 1;
        HIDWORD(v258) = v15;
        v261 = 0;
        v259 = 0;
        v260 = 0;
        v18 = sub_11F190(a1, v182, &v258);
        if ( v18 )
          goto LABEL_21;
        v200 = v15 + 1;
        *((_DWORD *)a2 + 6) = sub_E1710(v8, 118, v15 + 1, 0, 0);
        v157 = *((_QWORD *)a2 + 12);
        v158 = "EXCEPT";
        *((_QWORD *)a2 + 10) = 0;
        *((_QWORD *)a2 + 12) = 0;
        HIDWORD(v258) = v15 + 1;
        v209 = v157;
        v159 = *a2;
        if ( *a2 != 0x88 )
        {
          v158 = "INTERSECT";
          if ( v159 != 0x89 )
          {
            v158 = "UNION ALL";
            if ( v159 != 0x87 )
              v158 = "UNION";
          }
        }
        v215 = v182;
        sub_E8800(a1, 1, "%s USING TEMP B-TREE", v158);
        v18 = sub_11F190(a1, a2, &v258);
        v160 = *((_QWORD *)a2 + 10);
        *((_QWORD *)a2 + 10) = v182;
        v185 = v160;
        v161 = *(_WORD *)(v215 + 2);
        if ( *((__int16 *)a2 + 1) > v161 )
          *((_WORD *)a2 + 1) = v161;
        v162 = *((_QWORD *)a2 + 12);
        if ( v162 )
          sub_D7720(v178, v162);
        *((_QWORD *)v5 + 12) = v209;
        if ( !v18 )
        {
          v163 = *(_DWORD *)(a1 + 68);
          v164 = v163 - 1;
          v163 -= 2;
          *(_DWORD *)(a1 + 68) = v163;
          v210 = v163;
          sub_128220(a1, (__int64)v5, v164, *(double *)v11.m128i_i64);
          sub_E1710(v8, 35, v15, v164, 0);
          v165 = *(_BYTE *)(a1 + 31);
          if ( v165 )
          {
            v170 = v165 - 1;
            *(_BYTE *)(a1 + 31) = v170;
            v166 = *(_DWORD *)(a1 + 4LL * v170 + 216);
          }
          else
          {
            v166 = *(_DWORD *)(a1 + 56) + 1;
            *(_DWORD *)(a1 + 56) = v166;
          }
          v222 = v166;
          v218 = sub_E1710(v8, 134, v15, v166, 0);
          sub_E1770((_QWORD *)v8, 27, v200, v210, v222, 0);
          if ( v222 )
            sub_CEFE0(a1, v222);
          sub_1294A0(a1, (__int64)v5, v15, nullptr, 0, (unsigned __int8 *)&si128, *(double *)v11.m128i_i64, v210, v164);
          sub_E0BB0(v8, v210);
          sub_E1710(v8, 38, v15, v218, 0);
          sub_E0BB0(v8, v164);
          sub_E1710(v8, 122, v200, 0, 0);
          goto LABEL_241;
        }
      }
LABEL_187:
      if ( !*((_QWORD *)v5 + 11) )
      {
        v154 = *(_DWORD *)(v6 + 304);
        if ( v154 )
        {
          v155 = *(_QWORD *)(v6 + 16);
          if ( v154 < 0 )
            v154 = *(_DWORD *)(v155 + 144) - 1;
          v156 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v155 + 103LL) )
            v156 = (_BYTE *)(*(_QWORD *)(v155 + 136) + 24LL * v154);
          v154 = *((_DWORD *)v156 + 2);
        }
        *(_DWORD *)(v6 + 304) = v154;
      }
      if ( *(_DWORD *)(v6 + 48) )
        goto LABEL_112;
      goto LABEL_111;
    }
    v86 = *((_DWORD *)a2 + 2);
    LODWORD(v258) = 0;
    v187 = v9;
    *(_DWORD *)(v9 + 8) = v86;
    *(_DWORD *)(v9 + 12) = *((_DWORD *)a2 + 3);
    *(_QWORD *)(v9 + 96) = *((_QWORD *)a2 + 12);
    v87 = sub_11F190(a1, v9, &si128);
    v88 = v187;
    v18 = v87;
    *(_QWORD *)(v187 + 96) = 0;
    if ( v87 )
    {
LABEL_21:
      v7->m128i_i32[3] = si128.m128i_i32[3];
      v7[1].m128i_i32[0] = v251.m128i_i32[0];
      return v18;
    }
    *((_QWORD *)a2 + 10) = 0;
    v89 = *(_DWORD *)(v187 + 8);
    *((_DWORD *)a2 + 2) = v89;
    *((_DWORD *)a2 + 3) = *(_DWORD *)(v187 + 12);
    if ( v89 )
    {
      v139 = sub_E1710(v8, 16, v89, 0, 0);
      v140 = *((_DWORD *)a2 + 3);
      v89 = v139;
      v88 = v187;
      if ( v140 )
      {
        sub_E1710(v8, 160, *((_DWORD *)a2 + 2), v140 + 1, v140);
        v88 = v187;
      }
    }
    v204 = v88;
    sub_E8800(a1, 1, "UNION ALL");
    v90 = sub_11F190(a1, a2, &si128);
    v91 = *((__int16 *)a2 + 1);
    v18 = v90;
    v92 = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v204;
    v185 = v92;
    *((_WORD *)a2 + 1) = sub_CB800(v91, *(__int16 *)(v204 + 2));
    v93 = *((_QWORD *)a2 + 12);
    if ( !v93 || !(unsigned int)sub_CE930(*(_QWORD *)(v93 + 16), &v258) || (int)v258 <= 0 )
    {
LABEL_126:
      if ( v89 )
      {
        v98 = *(_DWORD *)(v8 + 144);
        if ( v89 < 0 )
          v89 = v98 - 1;
        v99 = byte_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v8 + 103LL) )
          v99 = (_BYTE *)(*(_QWORD *)(v8 + 136) + 24LL * v89);
        *((_DWORD *)v99 + 2) = v98;
      }
      goto LABEL_187;
    }
    v94 = *((_WORD *)a2 + 1);
    v95 = (int)v258;
    if ( (int)v258 > 7 )
    {
      _BitScanReverse64(&v172, (int)v258);
      if ( v94 <= (__int16)(word_1BACD0[((unsigned __int64)(int)v258 >> (60 - ((unsigned __int8)v172 ^ 0x3Fu))) & 7]
                          + 10 * (60 - (v172 ^ 0x3F))
                          + 30) )
        goto LABEL_126;
      _BitScanReverse64(&v173, (int)v258);
      LOWORD(v173) = 60 - (v173 ^ 0x3F);
      v95 = (unsigned __int64)(int)v258 >> v173;
      v174 = 10 * v173 + 30;
    }
    else
    {
      if ( (_DWORD)v258 == 1 )
      {
        if ( v94 <= 0 )
          goto LABEL_126;
        v175 = 0;
LABEL_264:
        *((_WORD *)a2 + 1) = v175;
        goto LABEL_126;
      }
      v96 = (int)v258;
      for ( i = 40; ; i -= 10 )
      {
        v96 *= 2LL;
        if ( v96 > 7 )
          break;
      }
      if ( v94 <= (__int16)(i + word_1BACD0[v96 & 7] - 20) )
        goto LABEL_126;
      for ( j = 40; ; j -= 10 )
      {
        v95 *= 2LL;
        if ( v95 > 7 )
          break;
      }
      v174 = j - 20;
    }
    v175 = word_1BACD0[v95 & 7] + v174;
    goto LABEL_264;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v179 = *(_BYTE **)a1;
  v20 = *(_DWORD *)(a1 + 68);
  v21 = v20 - 1;
  v20 -= 2;
  *(_DWORD *)(a1 + 68) = v20;
  v219 = v20;
  v22 = *((signed int **)v5 + 9);
  v183 = v21;
  v23 = *v22;
  v237 = *v5;
  v212 = *v5;
  if ( v212 != 135 && !v179[103] && **((int **)v5 + 4) > 0 )
  {
    v202 = v7;
    v24 = 1;
    v25 = v5;
    v26 = *((__int64 **)v5 + 9);
    while ( 1 )
    {
      v27 = v26 + 1;
      if ( v23 <= 0 )
      {
        if ( v23 )
          goto LABEL_34;
      }
      else
      {
        if ( v24 == *((unsigned __int16 *)v26 + 14) )
          goto LABEL_34;
        v28 = 0;
        while ( 1 )
        {
          ++v28;
          v27 += 3;
          if ( v28 == v23 )
            break;
          if ( *((unsigned __int16 *)v27 + 10) == v24 )
            goto LABEL_34;
        }
      }
      v258 = 0;
      LODWORD(v259) = 0;
      v29 = sub_DEC00((__int64)v179, 155, (__int64)&v258, 0);
      if ( !v29 )
        return 7;
      *((_DWORD *)v29 + 1) |= 0x400u;
      *((_DWORD *)v29 + 2) = v24;
      v26 = sub_E0F20((__int64 *)a1, (int *)v26, (__int64)v29);
      *((_QWORD *)v25 + 9) = v26;
      if ( v26 )
      {
        v30 = v23++;
        WORD2(v26[3 * v30 + 3]) = v24;
      }
LABEL_34:
      ++v24;
      if ( v179[103] || v24 > **((_DWORD **)v25 + 4) )
      {
        v22 = (signed int *)v26;
        v5 = v25;
        v7 = v202;
        break;
      }
    }
  }
  v193 = v22;
  v31 = sub_DBF10((__int64)v179, 4LL * (v23 + 1));
  v32 = v31;
  v244 = (__int64)v31;
  v231 = 0;
  v33 = v193;
  if ( v31 )
  {
    *(_DWORD *)v31 = v23;
    v34 = v193 + 2;
    if ( v23 > 0 )
    {
      for ( k = 1; k <= v23; ++k )
      {
        v36 = *((unsigned __int16 *)v34 + 10);
        v37 = k;
        v34 += 6;
        *((_DWORD *)v32 + v37) = v36 - 1;
      }
    }
    v38 = sub_F4770((__int64 *)v6, v5, *(double *)v11.m128i_i64);
    v33 = v193;
    v231 = (__int64)v38;
  }
  v226 = v212 - 134;
  v194 = (unsigned int **)(v5 + 32);
  if ( v212 == 135 )
  {
    v46 = *((unsigned __int8 **)v5 + 10);
    v228 = nullptr;
    v241 = 0;
  }
  else
  {
    v203 = v33;
    v39 = **((_DWORD **)v5 + 4);
    v40 = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v6 + 56) = v39 + v40 + 1;
    v241 = v40 + 1;
    sub_E1710(v19, 71, 0, v40 + 1, 0);
    v41 = sub_E3110(v179, v39, 1);
    v228 = v41;
    v33 = v203;
    if ( v41 && v39 > 0 )
    {
      v223 = v19;
      v234 = v23;
      v42 = v41;
      v43 = 0;
      v44 = (unsigned int)(v39 - 1) + 1LL;
      do
      {
        v42[v43 + 4] = sub_F4460(v6, v194, *((_QWORD *)v5 + 10), v43, *(double *)v11.m128i_i64);
        *(_BYTE *)(v42[3] + v43++) = 0;
      }
      while ( v44 != v43 );
      v33 = v203;
      v19 = v223;
      v23 = v234;
    }
    v45 = *((unsigned __int8 **)v5 + 10);
    v46 = v45;
    if ( v226 > 1 )
    {
LABEL_49:
      v224 = v5;
      goto LABEL_50;
    }
  }
  v45 = v46;
  v224 = v5;
  if ( (v179[98] & 0x20) == 0 )
  {
    if ( v46 && v237 == *v5 )
    {
      v119 = (char *)v46;
      v120 = 1;
      do
      {
        ++v120;
        if ( !*((_QWORD *)v119 + 10) )
          break;
        v121 = *v119;
        v119 = *((char **)v119 + 10);
      }
      while ( v237 == v121 );
      v224 = v5;
      if ( v120 > 3 )
      {
        v122 = 2;
        for ( m = v46; ; m = v45 )
        {
          v122 += 2;
          v45 = *((unsigned __int8 **)v45 + 10);
          if ( v120 <= v122 )
            break;
        }
        v224 = m;
      }
      goto LABEL_50;
    }
    goto LABEL_49;
  }
LABEL_50:
  *((_QWORD *)v224 + 10) = 0;
  *((_QWORD *)v45 + 11) = 0;
  *((_QWORD *)v45 + 9) = sub_DD150(*(_QWORD *)v6, v33, 0);
  sub_E4400((__int64 *)v6, v194, *((int **)v5 + 9), "ORDER");
  sub_E4400((__int64 *)v6, (unsigned int **)v45 + 4, *((int **)v45 + 9), "ORDER");
  sub_128220(v6, (__int64)v5, v183, *(double *)v11.m128i_i64);
  if ( *((_DWORD *)v5 + 2) && v212 == 135 )
  {
    v143 = *(_DWORD *)(v6 + 56);
    v144 = v143 + 1;
    v242 = v143 + 2;
    *(_DWORD *)(v6 + 56) = v143 + 2;
    v145 = *((_DWORD *)v5 + 3);
    v235 = v144;
    v146 = v145 + 1;
    if ( !v145 )
      v146 = *((_DWORD *)v5 + 2);
    sub_E1710(v19, 80, v146, v144, 0);
    sub_E1710(v19, 80, v144, v242, 0);
  }
  else
  {
    v242 = 0;
    v235 = 0;
  }
  v47 = *((_QWORD *)v5 + 12);
  if ( v47 )
    sub_D7720((__int64)v179, v47);
  *((_QWORD *)v5 + 12) = 0;
  v48 = *(_DWORD *)(v6 + 56);
  v253[0] = 13;
  v257 = 0;
  v255 = 0;
  v256 = 0;
  v49 = v48 + 1;
  v50 = v48 + 2;
  v51 = v48 + 3;
  LOBYTE(v258) = 13;
  v261 = 0;
  v249 = v48 + 4;
  *(_DWORD *)(v6 + 56) = v48 + 4;
  v52 = *v5;
  v238 = v51;
  v53 = "EXCEPT";
  v195 = v49;
  v254 = v49;
  HIDWORD(v258) = v50;
  v259 = 0;
  v260 = 0;
  if ( v52 != -120 )
  {
    v53 = "INTERSECT";
    if ( v52 != -119 )
    {
      v53 = "UNION ALL";
      if ( v52 != -121 )
        v53 = "UNION";
    }
  }
  sub_E8800(v6, 1, "MERGE (%s)", v53);
  v247 = sub_E1710(v19, 10, v49, 0, *(_DWORD *)(v19 + 144) + 1);
  *((_DWORD *)v45 + 2) = v235;
  sub_E8800(v6, 1, "LEFT");
  sub_11F190(v6, v45, v253);
  sub_E1710(v19, 68, v49, 0, 0);
  v54 = v247;
  *(_BYTE *)(*(_QWORD *)(v19 + 24) + 31LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v19 + 24) + 40LL) = 0;
  v55 = *(_DWORD *)(v19 + 144);
  if ( v247 < 0 )
    v54 = v55 - 1;
  v56 = byte_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v19 + 103LL) )
    v56 = (_BYTE *)(*(_QWORD *)(v19 + 136) + 24LL * v54);
  *((_DWORD *)v56 + 2) = v55;
  v248 = sub_E1710(v19, 10, v50, 0, *(_DWORD *)(v19 + 144) + 1);
  v57 = *((_DWORD *)v5 + 2);
  v58 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 2) = v242;
  v246 = v57;
  v245 = v58;
  sub_E8800(v6, 1, "RIGHT");
  sub_11F190(v6, v5, &v258);
  *((_DWORD *)v5 + 2) = v246;
  *((_DWORD *)v5 + 3) = v245;
  sub_E1710(v19, 68, v50, 0, 0);
  *(_BYTE *)(*(_QWORD *)(v19 + 24) + 31LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v19 + 24) + 40LL) = 0;
  v236 = sub_E24B0(
           v6,
           (unsigned int *)v5 + 2,
           (unsigned int *)v5 + 3,
           (unsigned int *)&v255 + 1,
           &v256,
           v7,
           v238,
           v241,
           v228,
           v183);
  v243 = 0;
  if ( v226 <= 1 )
    v243 = sub_E24B0(
             v6,
             (unsigned int *)v5 + 2,
             (unsigned int *)v5 + 3,
             (unsigned int *)&v259 + 1,
             &v260,
             v7,
             v249,
             v241,
             v228,
             v183);
  if ( v228 )
  {
    v59 = (*(_DWORD *)v228)-- == 1;
    if ( v59 )
      sub_CFCD0(v228);
  }
  if ( (unsigned int)(v212 - 136) > 1 )
  {
    v217 = sub_E1710(v19, 9, v249, v243, 0);
    v229 = sub_E1710(v19, 11, v50, v183, 0);
    sub_E1710(v19, 8, 0, v217, 0);
    *((_WORD *)v5 + 1) = sub_CB800(*((__int16 *)v5 + 1), *((__int16 *)v45 + 1));
  }
  else
  {
    v229 = v183;
    v217 = v183;
  }
  if ( v212 == 137 )
  {
    v60 = *((_WORD *)v45 + 1);
    if ( *((__int16 *)v5 + 1) > v60 )
      *((_WORD *)v5 + 1) = v60;
    v61 = v217;
    v62 = sub_E1710(v19, 9, v238, v236, 0);
    sub_E1710(v19, 11, v49, v217, 0);
    sub_E1710(v19, 8, 0, v219, 0);
    v239 = v62 + 1;
  }
  else
  {
    v61 = sub_E1710(v19, 9, v238, v236, 0);
    sub_E1710(v19, 11, v49, v183, 0);
    sub_E1710(v19, 8, 0, v61, 0);
    v62 = sub_E1710(v19, 9, v238, v236, 0);
    v239 = v62;
    sub_E1710(v19, 11, v49, v217, 0);
    sub_E1710(v19, 8, 0, v219, 0);
    if ( v212 != 135 )
    {
      v62 = sub_E1710(v19, 11, v49, v217, 0);
      sub_E1710(v19, 8, 0, v219, 0);
    }
  }
  v213 = *(_DWORD *)(v19 + 144);
  if ( v226 <= 1 )
    sub_E1710(v19, 9, v249, v243, 0);
  sub_E1710(v19, 11, v50, v61, 0);
  sub_E1710(v19, 8, 0, v219, 0);
  v63 = *(_DWORD *)(v19 + 144);
  v64 = v63 - 1;
  if ( v248 >= 0 )
    v64 = v248;
  v65 = v64;
  v66 = byte_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v19 + 103LL) )
    v66 = (_BYTE *)(*(_QWORD *)(v19 + 136) + 24LL * v65);
  *((_DWORD *)v66 + 2) = v63;
  sub_E1710(v19, 11, v195, v229, 0);
  sub_E1710(v19, 11, v50, v61, 0);
  sub_E0BB0(v19, v219);
  v67 = sub_E1710(v19, 89, 0, 0, 0);
  sub_DCC50(v19, v67, v244, 4294967282LL, v68, v69);
  v70 = sub_E1710(v19, 90, HIDWORD(v255), HIDWORD(v259), v23);
  sub_DCC50(v19, v70, v231, 4294967288LL, v71, v72);
  v73 = *(int *)(v19 + 144);
  if ( (int)v73 > 0 )
    *(_WORD *)(*(_QWORD *)(v19 + 136) + 24 * v73 - 22) = 1;
  sub_E1710(v19, 13, v239, v62, v213);
  sub_E0BB0(v19, v183);
  v74 = *((_QWORD **)v224 + 10);
  if ( v74 )
    sub_D75C0((__int64)v179, v74, 1);
  *((_QWORD *)v224 + 10) = v45;
  v75 = *((_QWORD **)v45 + 9);
  *((_QWORD *)v45 + 11) = v224;
  if ( v75 )
    sub_D7810((__int64)v179, v75);
  *((_QWORD *)v45 + 9) = 0;
  v76 = *(_DWORD *)(v6 + 304);
  if ( v76 )
  {
    v77 = *(_QWORD *)(v6 + 16);
    if ( v76 < 0 )
      v76 = *(_DWORD *)(v77 + 144) - 1;
    v78 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v77 + 103LL) )
      v78 = (_BYTE *)(*(_QWORD *)(v77 + 136) + 24LL * v76);
    v76 = *((_DWORD *)v78 + 2);
  }
  v79 = *(_DWORD *)(v6 + 48);
  *(_DWORD *)(v6 + 304) = v76;
  return v79 != 0;
}
