__int64 __fastcall sub_113B10(const __m128i *a1, __int64 a2, char a3, __m128i a4)
{
  __m128i *v4; // r15
  int v8; // r13d
  const __m128i *v9; // r12
  __int64 v10; // rbx
  unsigned __int8 *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // r9d
  char *v15; // rdi
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  __int32 v21; // eax
  _DWORD *v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r13
  int v30; // edx
  __m128i *v31; // r12
  unsigned int v32; // eax
  __int64 v33; // r12
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int32 v37; // eax
  int v38; // eax
  int v39; // eax
  char *v40; // rdi
  __int64 v41; // rax
  char *v42; // rax
  char *v43; // rdi
  __int64 v44; // rdx
  char *v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rax
  _DWORD *v53; // r12
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r12
  int v58; // edi
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  __int64 v64; // rt0
  __int64 v65; // rax
  _DWORD *v66; // rcx
  __int64 v67; // r13
  char v68; // r8
  __int64 v69; // rbx
  unsigned int *v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  char v74; // r8
  __int64 v75; // rbx
  char *v76; // r13
  int v77; // eax
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  __m128i *v82; // rax
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // rbx
  bool v86; // zf
  unsigned int *v87; // rax
  unsigned int v88; // eax
  char v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i v93; // xmm0
  _DWORD *v94; // r13
  __int64 v95; // rbx
  int v96; // ecx
  __int64 v97; // rax
  int v98; // r13d
  int v99; // eax
  int v100; // ecx
  int v101; // edx
  __int64 v102; // rdx
  __int64 v103; // r13
  int v104; // eax
  __int64 v105; // r14
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  int v110; // eax
  unsigned int v111; // edi
  unsigned int v112; // eax
  __int64 v113; // rdi
  int v114; // esi
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // r13d
  int v118; // edx
  char v119; // r9
  int v120; // eax
  char *v121; // rdi
  _DWORD *v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rax
  int v126; // r8d
  int v127; // r9d
  unsigned __int8 *v128; // r13
  __int64 v129; // r12
  int v130; // eax
  unsigned __int8 *v131; // r13
  __int64 v132; // r12
  char v133; // al
  int v134; // r8d
  int v135; // r9d
  char v136; // r13
  int v137; // r8d
  int v138; // r9d
  __int64 v139; // r13
  int v140; // r12d
  _DWORD *v141; // rax
  int v142; // r8d
  int v143; // r9d
  __int64 v144; // rsi
  char v145; // r13
  __int64 v146; // r12
  __int64 v147; // rax
  __int64 v148; // rax
  unsigned int v149; // ebx
  int v150; // r13d
  int v151; // edx
  int v152; // eax
  __int64 v153; // rax
  int v154; // r13d
  int v155; // eax
  int v156; // ecx
  int v157; // edx
  __int64 *v158; // rdi
  int v159; // eax
  int v160; // eax
  __int64 v161; // rdi
  char *v162; // rdi
  __int64 v163; // rax
  char *v164; // rdx
  unsigned __int8 *v165; // rcx
  int v166; // eax
  int v167; // edx
  __int64 v168; // r13
  __int64 v169; // rax
  __int32 v170; // eax
  __int32 v171; // eax
  int v172; // eax
  _DWORD *v173; // rdi
  __int64 v174; // r12
  int v175; // [rsp+0h] [rbp-220h]
  int v176; // [rsp+0h] [rbp-220h]
  __int64 *v177; // [rsp+8h] [rbp-218h]
  int v178; // [rsp+8h] [rbp-218h]
  int v179; // [rsp+10h] [rbp-210h]
  int v180; // [rsp+10h] [rbp-210h]
  int v181; // [rsp+14h] [rbp-20Ch]
  _DWORD *v182; // [rsp+18h] [rbp-208h]
  int v183; // [rsp+18h] [rbp-208h]
  __int64 v184; // [rsp+20h] [rbp-200h]
  __int64 v185; // [rsp+20h] [rbp-200h]
  __int64 v186; // [rsp+28h] [rbp-1F8h]
  char v187; // [rsp+28h] [rbp-1F8h]
  int v188; // [rsp+28h] [rbp-1F8h]
  int v189; // [rsp+28h] [rbp-1F8h]
  int v190; // [rsp+28h] [rbp-1F8h]
  int v191; // [rsp+30h] [rbp-1F0h]
  _DWORD *v192; // [rsp+30h] [rbp-1F0h]
  char v193; // [rsp+30h] [rbp-1F0h]
  int v194; // [rsp+30h] [rbp-1F0h]
  int v195; // [rsp+30h] [rbp-1F0h]
  __int64 v196; // [rsp+38h] [rbp-1E8h]
  __int64 v197; // [rsp+38h] [rbp-1E8h]
  int v198; // [rsp+38h] [rbp-1E8h]
  int v199; // [rsp+38h] [rbp-1E8h]
  int v200; // [rsp+38h] [rbp-1E8h]
  _DWORD *v201; // [rsp+40h] [rbp-1E0h]
  __int64 v202; // [rsp+40h] [rbp-1E0h]
  __int64 v203; // [rsp+40h] [rbp-1E0h]
  unsigned int *v204; // [rsp+40h] [rbp-1E0h]
  int v205; // [rsp+40h] [rbp-1E0h]
  __int64 v206; // [rsp+40h] [rbp-1E0h]
  _DWORD *v207; // [rsp+40h] [rbp-1E0h]
  const __m128i *v208; // [rsp+48h] [rbp-1D8h]
  __int64 v209; // [rsp+48h] [rbp-1D8h]
  __int64 v210; // [rsp+48h] [rbp-1D8h]
  __int64 v211; // [rsp+48h] [rbp-1D8h]
  int v212; // [rsp+48h] [rbp-1D8h]
  __int64 v213; // [rsp+48h] [rbp-1D8h]
  __int64 v214; // [rsp+48h] [rbp-1D8h]
  __int64 v215; // [rsp+48h] [rbp-1D8h]
  __int64 v216; // [rsp+48h] [rbp-1D8h]
  __int64 v217; // [rsp+48h] [rbp-1D8h]
  int v218; // [rsp+50h] [rbp-1D0h]
  _DWORD *v219; // [rsp+50h] [rbp-1D0h]
  __int64 v220; // [rsp+50h] [rbp-1D0h]
  unsigned __int8 *v221; // [rsp+50h] [rbp-1D0h]
  __int64 v222; // [rsp+50h] [rbp-1D0h]
  __int64 v223; // [rsp+50h] [rbp-1D0h]
  unsigned int v224; // [rsp+50h] [rbp-1D0h]
  unsigned int v225; // [rsp+50h] [rbp-1D0h]
  __int64 v226; // [rsp+50h] [rbp-1D0h]
  int v227; // [rsp+50h] [rbp-1D0h]
  __int64 v228; // [rsp+58h] [rbp-1C8h]
  __int64 v229; // [rsp+60h] [rbp-1C0h] BYREF
  __int64 *v230; // [rsp+68h] [rbp-1B8h] BYREF
  __int64 v231; // [rsp+70h] [rbp-1B0h] BYREF
  __m128i *v232; // [rsp+78h] [rbp-1A8h] BYREF
  __int64 v233; // [rsp+80h] [rbp-1A0h] BYREF
  unsigned __int8 *v234; // [rsp+88h] [rbp-198h] BYREF
  __int64 v235[3]; // [rsp+90h] [rbp-190h] BYREF
  __int128 v236; // [rsp+A8h] [rbp-178h]
  __m128i v237; // [rsp+C0h] [rbp-160h] BYREF
  __int64 v238; // [rsp+D0h] [rbp-150h]
  __int128 v239; // [rsp+D8h] [rbp-148h]
  __int64 v240; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v241; // [rsp+F8h] [rbp-128h]
  __int64 *v242; // [rsp+100h] [rbp-120h]
  __int64 v243; // [rsp+108h] [rbp-118h]
  __int64 v244; // [rsp+110h] [rbp-110h]
  __int64 v245; // [rsp+118h] [rbp-108h]
  _DWORD *v246; // [rsp+120h] [rbp-100h]
  __int16 v247; // [rsp+128h] [rbp-F8h]
  __int64 v248; // [rsp+12Ch] [rbp-F4h]
  __int64 v249; // [rsp+134h] [rbp-ECh]
  __m256i v250; // [rsp+140h] [rbp-E0h] BYREF
  __int64 v251; // [rsp+160h] [rbp-C0h]
  __int64 v252; // [rsp+168h] [rbp-B8h]
  _DWORD *v253; // [rsp+170h] [rbp-B0h]
  __int16 v254; // [rsp+178h] [rbp-A8h]
  __int64 v255; // [rsp+17Ch] [rbp-A4h]
  __int64 v256; // [rsp+184h] [rbp-9Ch]
  __int64 v257[2]; // [rsp+190h] [rbp-90h] BYREF
  __m128i *v258; // [rsp+1A0h] [rbp-80h]
  __int64 v259; // [rsp+1A8h] [rbp-78h]
  __int64 v260; // [rsp+1B0h] [rbp-70h]
  __int64 v261; // [rsp+1B8h] [rbp-68h]
  __int64 v262; // [rsp+1C0h] [rbp-60h]
  __int16 v263; // [rsp+1C8h] [rbp-58h]
  __int64 v264; // [rsp+1CCh] [rbp-54h]
  __int64 v265; // [rsp+1D4h] [rbp-4Ch]
  unsigned __int64 v266; // [rsp+1E8h] [rbp-38h]

  v266 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = (__m128i *)a1;
  if ( a1[3].m128i_i64[1] != a2
    || (*(_BYTE *)(a2 + 4) & 0x10) != 0
    || !*(_BYTE *)(a2 + 32)
    || *(_DWORD *)(a2 + 36) >= *(_DWORD *)(*(_QWORD *)(a1[30].m128i_i64[0] + 112) + 88LL) )
  {
    return 0;
  }
  v218 = sub_1122B0((__int64 **)&v237, (__int64)a1, (_DWORD *)a2, *(double *)a4.m128i_i64);
  v8 = (a3 & 2) == 0 ? 25 : 27;
  if ( v218 )
  {
    v20 = v237.m128i_i64[0];
    if ( (unsigned __int8)sub_111A30(a2, a1, a2, a2, *(_QWORD *)(v237.m128i_i64[0] + 56), v8) )
    {
LABEL_44:
      v21 = v4[1].m128i_i32[2];
      BYTE1(v21) &= ~2u;
      LOBYTE(v21) = v21 | 0x80;
      v4[1].m128i_i32[2] = v21;
      if ( (v218 & 0xFFFFFFFD) == 1 )
        sub_112660(v20, *(double *)a4.m128i_i64);
      else
        sub_1127B0(v20, *(double *)a4.m128i_i64);
      v22 = *(_DWORD **)(v20 + 64);
      *v22 |= 0x400u;
      sub_66FA0((__int64)v22, 1);
      return 1;
    }
  }
  if ( a1[22].m128i_i32[0] == 1 && sub_330DE0((__int64)a1) == 1 )
  {
    v18 = a1[4].m128i_i64[0];
    v19 = *(unsigned int *)a1[21].m128i_i64[1];
    if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 64) )
      goto LABEL_308;
    v208 = *(const __m128i **)(*(_QWORD *)(v18 + 528) + 8 * v19);
    v201 = (_DWORD *)v208[3].m128i_i64[1];
    v218 = sub_1122B0((__int64 **)&v237, (__int64)v208, v201, *(double *)a4.m128i_i64);
    if ( v218 )
    {
      v20 = v237.m128i_i64[0];
      if ( (unsigned __int8)sub_111A30(
                              (__int64)v201,
                              v208,
                              (__int64)v201,
                              (__int64)v201,
                              *(_QWORD *)(v237.m128i_i64[0] + 56),
                              v8) )
      {
        v4 = (__m128i *)v208;
        goto LABEL_44;
      }
    }
  }
  if ( a1[4].m128i_i32[3] == 4 && *(_BYTE *)(a1[3].m128i_i64[1] + 64) == 7 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      goto LABEL_50;
    v222 = sub_1120C0(a1->m128i_i64[1], 1);
    if ( (unsigned __int8)sub_16E3A0(v222, &v229) )
    {
      v46 = v229;
      v47 = *(_DWORD *)a2;
      if ( *(_DWORD *)v229 == 9 )
      {
        if ( *(_BYTE *)(v229 + 32) != 4 )
        {
          if ( v47 != 44 )
          {
            if ( v47 != 43 )
              goto LABEL_113;
            goto LABEL_58;
          }
LABEL_50:
          if ( (a3 & 1) == 0 )
            return 0;
          goto LABEL_12;
        }
        v229 = *(_QWORD *)(v229 + 40);
      }
      if ( v47 != 44 )
      {
        if ( v47 != 43 || *(_DWORD *)v229 == 33 )
        {
LABEL_113:
          v48 = a1[4].m128i_i64[0];
          v49 = *(unsigned int *)(a2 + 72);
          v210 = v46;
          if ( (unsigned int)v49 >= *(_DWORD *)(v48 + 64) )
            goto LABEL_308;
          v50 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v48 + 528) + 8 * v49), 0);
          v51 = *(_QWORD *)(v222 + 64);
          v52 = **(unsigned int **)(v222 + 368);
          if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 64) )
            goto LABEL_308;
          if ( v50 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v51 + 528) + 8 * v52), 0) )
          {
            v53 = (_DWORD *)a1[4].m128i_i64[0];
            v230 = (__int64 *)a1;
            v231 = a2;
            if ( (unsigned __int8)sub_1297E0((__int64)v53, (__int64 *)&v230, &v231, v210 + 64) )
            {
              if ( *(_DWORD *)v231 == 4
                || (unsigned __int8)sub_11FD80((char *)(v231 + 32), &v237, 0) && !v237.m128i_i64[0] )
              {
                if ( (unsigned __int8)sub_111A30(v229, a1, a2, a2, v229, v8) )
                {
                  v54 = *(_DWORD *)(v222 + 24);
                  BYTE1(v54) &= ~2u;
                  LOBYTE(v54) = v54 | 0x80;
                  *(_DWORD *)(v222 + 24) = v54;
                  v55 = a1[4].m128i_i64[0];
                  v56 = *(unsigned int *)(a1[3].m128i_i64[1] + 72);
                  if ( (unsigned int)v56 < *(_DWORD *)(v55 + 64) )
                  {
                    sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v55 + 528) + 8 * v56));
                    sub_13B2C0(a1->m128i_i64[1]);
                    sub_112660((__int64)a1, *(double *)a4.m128i_i64);
                    if ( a1 == (const __m128i *)v230 )
                      sub_11D5A0(v231);
                    *v53 |= 0x400u;
                    sub_66FA0((__int64)v53, 1);
                    return 1;
                  }
                  goto LABEL_308;
                }
              }
            }
          }
          goto LABEL_10;
        }
LABEL_58:
        if ( (a3 & 1) == 0 )
          return 0;
        goto LABEL_59;
      }
      if ( *(_DWORD *)v229 == 32 )
        goto LABEL_113;
      goto LABEL_50;
    }
  }
LABEL_10:
  if ( (a3 & 1) == 0 )
    return 0;
  if ( *(_DWORD *)a2 != 43 )
    goto LABEL_12;
LABEL_59:
  if ( !(unsigned __int8)sub_112410((__int64)a1, v235) || !*(_QWORD *)(a2 + 16) )
    goto LABEL_402;
  v23 = _mm_loadl_epi64((const __m128i *)(a1[30].m128i_i64[0] + 112));
  v238 = 0;
  v24 = v235[0];
  v237 = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)a2);
  a4 = 0;
  v239 = 0;
  if ( sub_113000(v237.m128i_i64, a1, v235[0]) && (unsigned __int8)sub_110F20((__int64)a1, a2, a2 + 32, a2 + 48) )
  {
    sub_112920(v237.m128i_i64, (__int64)a1);
    v25 = a1[4].m128i_i64[0];
    v26 = *(unsigned int *)(a1[3].m128i_i64[1] + 72);
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 64) )
      sub_111110(0.0);
    v27 = *(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v26);
    sub_13B2C0(v24);
    sub_13B2C0(v27);
    sub_11D5A0(a2);
    sub_112550((__int64)a1, v24, v27);
    sub_66FA0(v25, 1);
    if ( v238 )
    {
      *(_QWORD *)&v239 = 0;
      qfree(v238);
    }
    return 1;
  }
  if ( v238 )
  {
    *(_QWORD *)&v239 = 0;
    qfree(v238);
  }
  if ( *(_DWORD *)a2 == 43 )
  {
LABEL_402:
    if ( (unsigned __int8)sub_1124A0((__int64)a1, (__int64 *)&v234, v235, 1, 1, *(double *)a4.m128i_i64) )
    {
      v221 = v234;
      v28 = *((_QWORD *)v234 + 6);
      v202 = v235[0];
      v29 = *(_QWORD *)(v235[0] + 48);
      v196 = a1[4].m128i_i64[0];
      if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      {
        if ( !under_debugger )
          sub_383060(0xC3F7u, *(double *)a4.m128i_i64);
        goto LABEL_399;
      }
      v191 = sub_32EA20(*(_DWORD *)v28);
      if ( v191 != *(_DWORD *)v28
        && (*(_BYTE *)(a2 + 4) & 0x10) == 0
        && (*(_BYTE *)(v28 + 4) & 0x10) == 0
        && (*(_BYTE *)(v29 + 4) & 0x10) == 0 )
      {
        v30 = *(_DWORD *)v29;
        v31 = (__m128i *)(v29 + 48);
        v186 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
        v209 = v29 + 32;
        v237 = (__m128i)0xFFFFFFFF00000000LL;
        if ( v30 == 29 )
        {
          v31 = &v237;
          sub_120A10((__int64)&v237, v186, 0, *(_DWORD *)(v29 + 36), *(_QWORD *)(v29 + 24), 0);
          v30 = 40;
        }
        LODWORD(v184) = v30;
        if ( v191 == v30 )
        {
          v82 = v31;
          v31 = (__m128i *)(v29 + 32);
          v209 = (__int64)v82;
        }
        else if ( v30 != (unsigned int)sub_32EA00(v191) )
        {
LABEL_188:
          sub_11CDA0((__int64)&v237);
          goto LABEL_12;
        }
        v184 = a2 + 32;
        if ( sub_125B60((unsigned __int8 *)(a2 + 32), (__int64)v31, 0)
          && sub_125B60((unsigned __int8 *)(a2 + 48), v209, 0)
          || sub_125B60((unsigned __int8 *)v184, v209, 0) && sub_125B60((unsigned __int8 *)(a2 + 48), (__int64)v31, 0) )
        {
          if ( sub_125B60((unsigned __int8 *)(v28 + 64), v29 + 64, 0) )
          {
            v184 = v28 + 32;
            if ( (unsigned int)sub_111200(a1, a2, v28 + 32, (__int64)v31, 34) )
            {
              v182 = (_DWORD *)(v28 + 48);
              if ( (unsigned int)sub_111200(a1, a2, v28 + 48, v209, 34) )
              {
                sub_1571F0((__int64)a1, a2, v184, a2, (__int64)v31, 0);
                sub_1571F0((__int64)a1, a2, (__int64)v182, a2, v209, 0);
                v32 = *(_DWORD *)v28;
                if ( (unsigned int)(*(_DWORD *)v28 - 29) > 0xC )
                {
                  if ( *(_BYTE *)(v28 + 64) != 7 )
                    *(_DWORD *)(v28 + 68) *= 2;
                  if ( v32 == 42 )
                    *(_DWORD *)(v28 + 36) *= 2;
                }
                *(_DWORD *)v28 = v191;
                sub_11D5D0(v28, v186);
                sub_11D5A0(a2);
                sub_11D5A0(v29);
                sub_11CDA0((__int64)&v237);
                v33 = *(_QWORD *)(*(_QWORD *)(v196 + 528) + 8LL * **((int **)v221 + 46));
                v34 = *(_DWORD *)(v202 + 72);
                v237.m128i_i64[0] = 0xFFFFFFFF00000007LL;
                v237.m128i_i64[1] = v34;
                v35 = *(_QWORD *)(v28 + 8);
                if ( v35 )
                  sub_125180(v35 + 32, (unsigned __int8 *)&v237);
                else
                  sub_A3240((__int64)v221, v28, 55, (unsigned __int8 *)&v237, nullptr, nullptr, a4);
                v237.m128i_i32[2] = *(_DWORD *)(v33 + 72);
                v36 = *(_QWORD *)(v29 + 8);
                if ( v36 )
                  sub_125180(v36 + 32, (unsigned __int8 *)&v237);
                else
                  sub_A3240(v202, v29, 55, (unsigned __int8 *)&v237, nullptr, nullptr, a4);
                v37 = a1[1].m128i_i32[2];
                BYTE1(v37) &= ~2u;
                LOBYTE(v37) = v37 | 0x80;
                a1[1].m128i_i32[2] = v37;
                v38 = *((_DWORD *)v221 + 6);
                BYTE1(v38) &= ~2u;
                LOBYTE(v38) = v38 | 0x80;
                *((_DWORD *)v221 + 6) = v38;
                v39 = *(_DWORD *)(v202 + 24);
                BYTE1(v39) &= ~2u;
                LOBYTE(v39) = v39 | 0x80;
                *(_DWORD *)(v202 + 24) = v39;
                v40 = (char *)a1[23].m128i_i64[0];
                v41 = v4[23].m128i_i64[1];
                v4[4].m128i_i32[3] = 3;
                v42 = &v40[4 * v41];
                if ( v40 != v42 )
                {
                  while ( *(_DWORD *)(v202 + 72) != *(_DWORD *)v40 )
                  {
                    v40 += 4;
                    if ( v42 == v40 )
                      goto LABEL_99;
                  }
                  if ( v42 != v40 )
                  {
                    memmove(v40, v40 + 4, v42 - v40 - 4);
                    --v4[23].m128i_i64[1];
                  }
                }
LABEL_99:
                **(_DWORD **)(v202 + 344) = *((_DWORD *)v221 + 18);
                **((_DWORD **)v221 + 46) = *(_DWORD *)(v202 + 72);
                v43 = *(char **)(v33 + 344);
                v44 = *(_QWORD *)(v33 + 352);
                v45 = &v43[4 * v44];
                if ( v43 != v45 )
                {
                  while ( *((_DWORD *)v221 + 18) != *(_DWORD *)v43 )
                  {
                    v43 += 4;
                    if ( v45 == v43 )
                      goto LABEL_105;
                  }
                  if ( v45 != v43 )
                  {
                    memmove(v43, v43 + 4, v45 - v43 - 4);
                    v44 = *(_QWORD *)(v33 + 352) - 1LL;
                    *(_QWORD *)(v33 + 352) = v44;
                  }
                }
LABEL_105:
                if ( !v44 )
                  **(_DWORD **)(v33 + 64) |= 0x400u;
                *(_DWORD *)v196 |= 0x400u;
                sub_66FA0(v196, 1);
                sub_11CDA0((__int64)&v237);
                return 1;
              }
            }
          }
        }
        goto LABEL_188;
      }
    }
  }
LABEL_12:
  if ( a1[4].m128i_i32[3] != 4 )
    goto LABEL_13;
  v57 = a1[3].m128i_i64[1];
  if ( *(_BYTE *)(v57 + 64) != 7 || a2 != v57 || (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
    goto LABEL_13;
  v197 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( *(_BYTE *)(a2 + 48) == 2 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), &v237, 0) || v237.m128i_i64[0] )
      goto LABEL_13;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(a2 + 32) == 2 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 32), &v237, 0) || v237.m128i_i64[0] )
      goto LABEL_13;
    v211 = a2 + 48;
  }
  else
  {
    v211 = a2 + 48;
    if ( (unsigned __int8)sub_111030(v197, a2 + 48, (int)a1 + 448) )
    {
LABEL_131:
      v58 = 47;
      v203 = a2 + 32;
      v211 = a2 + 32;
      goto LABEL_132;
    }
    if ( !(unsigned __int8)sub_111030(v197, a2 + 32, (int)a1 + 448) )
      goto LABEL_13;
  }
  v58 = 46;
  v203 = v57 + 32;
  if ( v57 + 32 == v211 )
    v58 = 47;
LABEL_132:
  v59 = v4[4].m128i_i64[0];
  v60 = v4->m128i_i64[1];
  v61 = *(unsigned int *)(v57 + 72);
  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 64) )
    goto LABEL_308;
  v62 = *(_QWORD *)(*(_QWORD *)(v59 + 528) + 8 * v61);
  v63 = *(_DWORD *)v57;
  if ( *(_DWORD *)v57 == 43 || v63 == v58 )
  {
    v187 = 0;
  }
  else
  {
    if ( v63 != 44 && v63 != (unsigned int)sub_32E9E0(v58) )
      goto LABEL_13;
    v187 = 1;
    v64 = v62;
    v62 = v60;
    v60 = v64;
  }
  v223 = sub_1120C0(v60, 1);
  v65 = sub_1120C0(v62, 0);
  v66 = (_DWORD *)v4[4].m128i_i64[0];
  v67 = v65;
  v232 = nullptr;
  v233 = 0;
  v192 = v66;
  if ( *(_DWORD *)(v223 + 76) != 4
    || *(_BYTE *)(*(_QWORD *)(v223 + 56) + 64LL) != 7
    || *(_DWORD *)(v223 + 352) != 1
    || sub_330DE0(v223) != 1
    || (v87 = *(unsigned int **)(v223 + 56), *v87 - 43 > 9) )
  {
    v68 = sub_16E3A0(v223, v235);
    if ( !v68 )
      goto LABEL_13;
    v69 = v235[0];
    v70 = (unsigned int *)v235[0];
    if ( *(_DWORD *)v235[0] == 9 )
    {
      if ( *(_BYTE *)(v235[0] + 32) != 4 )
        goto LABEL_13;
      v70 = *(unsigned int **)(v235[0] + 40);
      v235[0] = (__int64)v70;
    }
    v71 = *v70;
    if ( v71 != 36 )
    {
      if ( v71 > 0x24 )
      {
        if ( v71 != 37 )
          goto LABEL_13;
        v68 = 0;
      }
      else if ( v71 != 34 )
      {
        v68 = 0;
        if ( v71 != 35 )
          goto LABEL_13;
      }
    }
    LOBYTE(v184) = v68;
    v72 = *(_QWORD *)(v223 + 64);
    v73 = **(unsigned int **)(v223 + 368);
    if ( (unsigned int)v73 >= *(_DWORD *)(v72 + 64) )
      goto LABEL_308;
    if ( v67 != sub_1120C0(*(_QWORD *)(*(_QWORD *)(v72 + 528) + 8 * v73), 0) )
      goto LABEL_13;
    v232 = v4;
    v233 = v57;
    if ( !(unsigned __int8)sub_1297E0((__int64)v192, (__int64 *)&v232, &v233, v69 + 64)
      || *(_DWORD *)v233 != 4
      || !(unsigned __int8)sub_11FD80((char *)(v233 + 32), &v237, 1u) )
    {
      goto LABEL_13;
    }
    v74 = v184;
    if ( v237.m128i_i64[0] )
    {
      if ( v237.m128i_i64[0] != 1 )
        goto LABEL_13;
      goto LABEL_152;
    }
LABEL_223:
    v74 ^= 1u;
    goto LABEL_152;
  }
  v235[0] = *(_QWORD *)(v223 + 56);
  v88 = *v87;
  if ( v88 != 47 )
  {
    if ( v88 > 0x2F )
    {
      if ( v88 != 48 )
        goto LABEL_13;
      goto LABEL_209;
    }
    if ( v88 != 45 )
    {
      if ( v88 != 46 )
        goto LABEL_13;
LABEL_209:
      v89 = 0;
      goto LABEL_210;
    }
  }
  v89 = 1;
LABEL_210:
  LOBYTE(v184) = v89;
  v90 = sub_1120C0(*(_QWORD *)(v223 + 8), 0);
  v74 = v184;
  if ( v67 == v90 )
    goto LABEL_223;
  v91 = *(_QWORD *)(v223 + 64);
  v92 = *(unsigned int *)(v235[0] + 72);
  if ( (unsigned int)v92 >= *(_DWORD *)(v91 + 64) )
    goto LABEL_308;
  if ( v67 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v91 + 528) + 8 * v92), 0) )
  {
    v74 = v184;
LABEL_152:
    if ( (*(_BYTE *)(v235[0] + 4) & 0x10) == 0 )
    {
      v75 = v235[0] + 32;
      v76 = (char *)(v235[0] + 48);
      if ( !v74 )
      {
        v75 = v235[0] + 48;
        v76 = (char *)(v235[0] + 32);
      }
      if ( *(_DWORD *)(v75 + 4) == *(_DWORD *)(v211 + 4)
        && (unsigned int)sub_111200(v4, v57, v75, v211, 2)
        && (unsigned __int8)sub_110F20((__int64)v4, v57, v203, v57 + 48) )
      {
        sub_1571F0((__int64)v4, v57, v75, v57, v211, 6);
        sub_12AB50((unsigned __int8 *)v75, v197, *(_DWORD *)(v75 + 4), 2);
        sub_1207E0(v76, v197, 9, *(_QWORD *)(v235[0] + 24), *(_DWORD *)(v75 + 4));
        sub_11D5D0(v235[0], v197);
        v77 = *(_DWORD *)(v223 + 24);
        BYTE1(v77) &= ~2u;
        LOBYTE(v77) = v77 | 0x80;
        *(_DWORD *)(v223 + 24) = v77;
        if ( (unsigned int)(*(_DWORD *)v235[0] - 43) <= 9 )
          sub_111130((_QWORD *)v223, *(double *)a4.m128i_i64);
        sub_111130(v4, *(double *)a4.m128i_i64);
        if ( v187 )
          sub_1127B0((__int64)v4, *(double *)a4.m128i_i64);
        else
          sub_112660((__int64)v4, *(double *)a4.m128i_i64);
        if ( v4 == v232 )
          sub_11D5A0(v233);
        *v192 |= 0x400u;
        sub_66FA0((__int64)v192, 1);
        return 1;
      }
    }
  }
LABEL_13:
  if ( !(unsigned __int8)sub_1136B0(v4, (_DWORD *)a2) )
  {
    if ( v4[4].m128i_i32[3] != 4 )
      goto LABEL_15;
    v78 = v4[3].m128i_i64[1];
    if ( *(_BYTE *)(v78 + 64) != 7 || a2 != v78 || (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
    {
LABEL_170:
      if ( *(_BYTE *)(v78 + 64) != 7 || a2 != v78 || (unsigned int)(*(_DWORD *)a2 - 45) > 7 )
        goto LABEL_171;
      v93 = _mm_loadl_epi64(v4 + 4);
      v255 = 0;
      a4 = _mm_unpacklo_epi64(v93, (__m128i)(unsigned __int64)v4);
      v256 = 0;
      v252 = 0;
      v253 = nullptr;
      v254 = 0;
      v251 = a2;
      *(_OWORD *)&v250.m256i_u64[2] = 0;
      *(__m128i *)v250.m256i_i8 = a4;
      if ( (unsigned __int8)sub_1132B0(v250.m256i_i64, 2, *(double *)a4.m128i_i64) )
      {
        v94 = v253;
        v95 = v250.m256i_i64[3];
        v204 = v253;
        HIDWORD(v256) = *v253;
        v224 = HIDWORD(v256);
        v96 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(v250.m256i_i64[3] + 8), 0) + 72);
        v97 = (unsigned int)v94[18];
        v198 = v96;
        if ( (unsigned int)v97 >= *(_DWORD *)(v250.m256i_i64[0] + 64) )
          goto LABEL_308;
        v98 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v250.m256i_i64[0] + 528) + 8 * v97), 0) + 72);
        v212 = v256;
        if ( v212 != (unsigned int)sub_32EAF0(v256) )
        {
          v224 = sub_32EA20(v224);
          HIDWORD(v256) = v224;
        }
        v99 = sub_32EC60(v224);
        v100 = v255;
        v101 = v99;
        if ( (_DWORD)v255 )
        {
          if ( v198 == (_DWORD)v255 )
          {
            v195 = v255;
            v104 = sub_32EA00(v99);
            v100 = v195;
            v101 = v104;
          }
          else
          {
            if ( v98 != (_DWORD)v255 )
              goto LABEL_253;
            v98 = v198;
          }
        }
        v194 = v101;
        v188 = v100;
        if ( (unsigned int)sub_32EA00(v212) == v101 )
        {
          if ( !HIDWORD(v255) || v98 == HIDWORD(v255) )
          {
            v103 = v78 + 32;
            v102 = v78 + 48;
LABEL_248:
            if ( *(_DWORD *)(v95 + 76) == 4
              && *(_BYTE *)(*(_QWORD *)(v95 + 56) + 64LL) == 7
              && *(_DWORD *)(v95 + 352) == 1 )
            {
              v213 = v102;
              if ( sub_330DE0(v95) == 1 && (unsigned int)(**(_DWORD **)(v95 + 56) - 43) <= 9 )
              {
                if ( (unsigned __int8)sub_1301F0(v4, v78, v213, v78, (__int64)(v204 + 8))
                  && (unsigned __int8)sub_1301F0(v4, v78, v103, v78, (__int64)(v204 + 12)) )
                {
                  *v204 = v224;
                  sub_11D5D0((__int64)v204, *(_QWORD *)(v4[30].m128i_i64[0] + 112));
                  v105 = v250.m256i_i64[1];
                  v106 = *(_QWORD *)(v250.m256i_i64[1] + 64);
                  v107 = *(unsigned int *)(*(_QWORD *)(v250.m256i_i64[1] + 56) + 72LL);
                  if ( (unsigned int)v107 < *(_DWORD *)(v106 + 64) )
                  {
                    sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v106 + 528) + 8 * v107));
                    sub_13B2C0(*(_QWORD *)(v105 + 8));
                    v108 = *(_QWORD *)(v95 + 64);
                    v109 = *(unsigned int *)(*(_QWORD *)(v95 + 56) + 72LL);
                    if ( (unsigned int)v109 < *(_DWORD *)(v108 + 64) )
                    {
                      sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v108 + 528) + 8 * v109));
                      sub_13B2C0(*(_QWORD *)(v95 + 8));
                      v110 = *(_DWORD *)(v95 + 24);
                      BYTE1(v110) &= ~2u;
                      LOBYTE(v110) = v110 | 0x80;
                      *(_DWORD *)(v95 + 24) = v110;
                      if ( (_BYTE)v254 )
                        sub_1127B0(v105, *(double *)a4.m128i_i64);
                      else
                        sub_112660(v105, *(double *)a4.m128i_i64);
                      *(_DWORD *)v4[4].m128i_i64[0] |= 0x400u;
                      sub_66FA0(v4[4].m128i_i64[0], 1);
                      return 1;
                    }
                  }
LABEL_308:
                  sub_111110(*(double *)a4.m128i_i64);
                }
                goto LABEL_253;
              }
            }
            if ( !under_debugger )
              sub_383060(0xCCA6u, *(double *)a4.m128i_i64);
LABEL_399:
            BUG();
          }
        }
        else if ( v212 == v194 )
        {
          if ( v188 )
          {
            if ( !HIDWORD(v255) || v98 == HIDWORD(v255) )
              goto LABEL_247;
          }
          else if ( v198 == HIDWORD(v255) || !HIDWORD(v255) )
          {
LABEL_247:
            v102 = v78 + 32;
            v103 = v78 + 48;
            goto LABEL_248;
          }
        }
      }
LABEL_253:
      if ( v4[4].m128i_i32[3] != 4 )
        goto LABEL_15;
      v78 = v4[3].m128i_i64[1];
LABEL_171:
      if ( *(_BYTE *)(v78 + 64) != 7 )
        goto LABEL_15;
      if ( a2 != v78 )
        goto LABEL_15;
      if ( (unsigned int)(*(_DWORD *)a2 - 43) > 9 )
        goto LABEL_15;
      if ( *(_BYTE *)(a2 + 48) != 2 )
        goto LABEL_15;
      v79 = v4[4].m128i_i64[0];
      v263 = 0;
      v264 = 0;
      v257[0] = v79;
      v265 = 0;
      v257[1] = 0;
      v259 = 0;
      v260 = 0;
      v262 = 0;
      v258 = v4;
      v261 = a2;
      if ( !(unsigned __int8)sub_1134B0(v257, 0, *(double *)a4.m128i_i64) )
        goto LABEL_15;
      if ( v4[4].m128i_i32[3] == 4
        && *(_BYTE *)(v4[3].m128i_i64[1] + 64) == 7
        && v4[22].m128i_i32[0] == 1
        && sub_330DE0((__int64)v4) == 1
        && (unsigned int)(*(_DWORD *)v4[3].m128i_i64[1] - 43) <= 9 )
      {
        v161 = v4[1].m128i_i64[0];
        if ( v161 )
        {
          if ( (unsigned __int8)sub_1136B0((__m128i *)v161, *(_DWORD **)(v161 + 56)) )
            return 1;
        }
      }
      if ( (unsigned int)(*(_DWORD *)v78 - 43) <= 1 && (unsigned __int8)sub_11FD80((char *)(v262 + 48), &v234, 1u) )
      {
        if ( sub_A2350((char *)(v78 + 48), -1, 1u) && v234 != (unsigned __int8 *)-1LL )
        {
          LODWORD(v265) = 47;
          goto LABEL_346;
        }
        if ( sub_A2350((char *)(v78 + 48), 0, 0) && v234 )
        {
          LODWORD(v265) = 46;
          goto LABEL_346;
        }
      }
      if ( !(_DWORD)v265 )
      {
        v80 = *(_QWORD *)(v4[30].m128i_i64[0] + 112);
        v237.m128i_i64[0] = 0;
        v237.m128i_i8[8] = 0;
        if ( !(unsigned __int8)sub_1DFF30((__int64)&v237, v80, &v232, v78 + 32) )
          goto LABEL_15;
        a4.m128i_i64[0] = 0;
        v250.m256i_i32[0] = 0;
        v250.m256i_i32[1] = (int)v232;
        memset(&v250.m256i_u64[1], 0, 24);
        if ( !(unsigned __int8)sub_1E0180((int)v4 + 448, (unsigned int)&v250, (unsigned int)&v237, 1, 0, 0)
          || !(unsigned __int8)sub_312B30(&v250, (__int64)&v233, (__int64)v235)
          || (unsigned int)v233 <= 1
          || (v81 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v78 + 56) + 16LL), *(_DWORD *)(v78 + 52), 0), v235[0] != v81) )
        {
          sub_312B80((__int64)&v250);
          goto LABEL_15;
        }
        LODWORD(v265) = sub_32E9E0((int)v233 + 43);
        sub_312B80((__int64)&v250);
      }
LABEL_346:
      v149 = v265;
      v150 = sub_32EA00(v265);
      v151 = sub_32EBC0(v149);
      v152 = *(_DWORD *)v78;
      if ( (unsigned int)(*(_DWORD *)v78 - 43) <= 1 || v150 == v152 || v151 == v152 )
      {
        v217 = v259;
        v227 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(v259 + 8), 0) + 72);
        v207 = (_DWORD *)v262;
        v153 = *(unsigned int *)(v262 + 72);
        if ( (unsigned int)v153 >= *(_DWORD *)(v257[0] + 64) )
          goto LABEL_308;
        v154 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v257[0] + 528) + 8 * v153), 0) + 72);
        if ( v149 != (unsigned int)sub_32EAF0(v149) )
          HIDWORD(v265) = sub_32EA20(HIDWORD(v265));
        v200 = HIDWORD(v265);
        v155 = sub_32EC60(HIDWORD(v265));
        v156 = v264;
        v157 = v155;
        if ( (_DWORD)v264 )
        {
          if ( v227 == (_DWORD)v264 )
          {
            v190 = v264;
            v160 = sub_32EA00(v155);
            v156 = v190;
            v157 = v160;
          }
          else
          {
            if ( v154 != (_DWORD)v264 )
              goto LABEL_15;
            v154 = v227;
          }
        }
        v189 = v157;
        LODWORD(v184) = v156;
        if ( (unsigned int)sub_32EA00(v149) != v157 )
        {
          if ( v149 != v189 )
            goto LABEL_15;
          if ( !(_DWORD)v184 )
            v154 = v227;
        }
        if ( (!HIDWORD(v264) || HIDWORD(v264) == v154)
          && (unsigned __int8)sub_111A30((__int64)v207, v4, v78, v78, (__int64)v207, 3) )
        {
          v158 = (__int64 *)v258;
          *v207 = v200;
          sub_111130(v158, *(double *)a4.m128i_i64);
          sub_111130((_QWORD *)v217, *(double *)a4.m128i_i64);
          v159 = *(_DWORD *)(v217 + 24);
          BYTE1(v159) &= ~2u;
          LOBYTE(v159) = v159 | 0x80;
          *(_DWORD *)(v217 + 24) = v159;
          sub_113680((__int64)v257, 1, *(double *)a4.m128i_i64);
          *(_DWORD *)v4[4].m128i_i64[0] |= 0x400u;
          sub_66FA0(v4[4].m128i_i64[0], 1);
          return 1;
        }
      }
LABEL_15:
      if ( !(unsigned __int8)sub_112410((__int64)v4, &v232)
        || *(_DWORD *)a2 != 44
        || (v121 = (char *)sub_11C8A0(a2, &v233)) == nullptr
        || !(unsigned __int8)sub_11FD80(v121, &v237, 0)
        || v237.m128i_i64[0]
        || *(_BYTE *)v233 != 4
        || (v122 = *(_DWORD **)(v233 + 8), *v122 != 20)
        || !v122
        || (v123 = sub_11C8A0((__int64)v122, &v234), (v124 = v123) == 0)
        || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v123 + 8) + 16LL), *(_DWORD *)(v123 + 4), 1) != 32
        || *(_DWORD *)(v124 + 4) != 1 )
      {
LABEL_17:
        if ( *(_DWORD *)a2 == 45 )
        {
          if ( (unsigned __int8)sub_11FD80((char *)(a2 + 48), &v237, 1u) )
          {
            if ( v237.m128i_i64[0] == 32 && *(_DWORD *)(a2 + 36) == 1 )
            {
              if ( (unsigned __int8)sub_1124A0((__int64)v4, v235, v237.m128i_i64, -1, 2, *(double *)a4.m128i_i64) )
              {
                v9 = (const __m128i *)v235[0];
                if ( (unsigned __int64)sub_330DE0(v235[0]) > 1 )
                {
                  v10 = v237.m128i_i64[0];
                  if ( (unsigned __int64)sub_330DE0(v237.m128i_i64[0]) > 1 )
                  {
                    v219 = (_DWORD *)sub_1229A0(v9[3].m128i_i64[0]);
                    v11 = (unsigned __int8 *)sub_111170((__int64)v219);
                    if ( v11 )
                    {
                      if ( sub_125B60(v11, a2 + 32, 0) )
                      {
                        if ( *v219 == 23 )
                        {
                          v12 = *(_QWORD *)(v10 + 48);
                          if ( *(_DWORD *)v12 == 9 )
                          {
                            if ( sub_125B60((unsigned __int8 *)(v12 + 64), (__int64)(v219 + 16), 0) )
                            {
                              if ( *(_DWORD *)(v12 + 36) == 4 )
                              {
                                if ( (unsigned __int8)sub_1301F0(
                                                        v9,
                                                        (__int64)v219,
                                                        v12 + 32,
                                                        (__int64)v219,
                                                        (__int64)(v219 + 8)) )
                                {
                                  v13 = sub_1229A0(*(_QWORD *)(v12 + 8));
                                  v228 = v13;
                                  if ( *(_DWORD *)v13 == 23 )
                                  {
                                    v220 = (__int64)(v219 + 12);
                                    if ( sub_125B60((unsigned __int8 *)(v13 + 48), v220, 0) )
                                    {
                                      if ( sub_125B60((unsigned __int8 *)(v228 + 32), v228 + 64, 0)
                                        && (unsigned __int8)sub_12CF30(
                                                              v4[4].m128i_i64[0],
                                                              v228 + 32,
                                                              (unsigned __int8 *)(v12 + 32),
                                                              0,
                                                              0,
                                                              v14) )
                                      {
                                        sub_125180(v220, (unsigned __int8 *)(a2 + 32));
                                        sub_11D5A0(a2);
                                        sub_11D5A0(v12);
                                        sub_11D5A0(v228);
                                        v15 = (char *)v4[23].m128i_i64[0];
                                        v16 = v4[23].m128i_i64[1];
                                        v4[4].m128i_i32[3] = 3;
                                        v17 = &v15[4 * v16];
                                        while ( v17 != v15 )
                                        {
                                          if ( *(_DWORD *)(v10 + 72) == *(_DWORD *)v15 )
                                          {
                                            memmove(v15, v15 + 4, v17 - v15 - 4);
                                            --v4[23].m128i_i64[1];
                                            break;
                                          }
                                          v15 += 4;
                                        }
                                        v162 = *(char **)(v10 + 344);
                                        v163 = *(_QWORD *)(v10 + 352);
                                        v164 = &v162[4 * v163];
                                        while ( v164 != v162 )
                                        {
                                          if ( v4[4].m128i_i32[2] == *(_DWORD *)v162 )
                                          {
                                            memmove(v162, v162 + 4, v164 - v162 - 4);
                                            v163 = *(_QWORD *)(v10 + 352) - 1LL;
                                            *(_QWORD *)(v10 + 352) = v163;
                                            break;
                                          }
                                          v162 += 4;
                                        }
                                        if ( !v163 )
                                          **(_DWORD **)(v10 + 64) |= 0x400u;
                                        v170 = v4[1].m128i_i32[2];
                                        BYTE1(v170) &= ~2u;
                                        LOBYTE(v170) = v170 | 0x80;
                                        v4[1].m128i_i32[2] = v170;
                                        v171 = v9[1].m128i_i32[2];
                                        BYTE1(v171) &= ~2u;
                                        LOBYTE(v171) = v171 | 0x80;
                                        v9[1].m128i_i32[2] = v171;
                                        v172 = *(_DWORD *)(v10 + 24);
                                        BYTE1(v172) &= ~2u;
                                        LOBYTE(v172) = v172 | 0x80;
                                        *(_DWORD *)(v10 + 24) = v172;
                                        v173 = (_DWORD *)v4[4].m128i_i64[0];
                                        *v173 |= 0x400u;
                                        sub_66FA0((__int64)v173, 1);
                                        return 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return 0;
      }
      a4.m128i_i64[0] = 0;
      memset(v235, 0, sizeof(v235));
      v226 = (__int64)v232;
      v236 = 0;
      v125 = sub_330DE0((__int64)v232);
      if ( v125 != 1 )
      {
        if ( v125 != 2 )
          goto LABEL_307;
        v128 = v234;
        v129 = sub_1229A0(*(_QWORD *)(v226 + 48));
        v215 = sub_1229A0(*(_QWORD *)(v129 + 8));
        v130 = *(_DWORD *)v215;
        if ( *(_DWORD *)v129 == 4 )
        {
          if ( v130 != 22 )
          {
            if ( v130 != 4 )
              goto LABEL_307;
            v131 = (unsigned __int8 *)(v215 + 32);
            if ( (unsigned __int8)sub_11FD80((char *)(v215 + 32), &v237, 0) && !v237.m128i_i64[0] )
            {
              v169 = v129;
              v129 = v215;
              v131 = (unsigned __int8 *)(v169 + 32);
              v215 = v169;
            }
            else if ( !(unsigned __int8)sub_11FD80((char *)(v129 + 32), &v237, 0) || v237.m128i_i64[0] )
            {
              goto LABEL_307;
            }
            v132 = v129 + 64;
            v133 = sub_125B60(v131, v132, 0);
            v136 = 0;
            if ( !v133 )
            {
LABEL_307:
              sub_93B40(v235);
              goto LABEL_17;
            }
            goto LABEL_320;
          }
        }
        else
        {
          if ( v130 != 4 || *(_DWORD *)v129 != 22 )
            goto LABEL_307;
          v148 = v129;
          v129 = v215;
          v215 = v148;
        }
        if ( !(unsigned __int8)sub_11FD80((char *)(v129 + 32), &v237, 0) )
          goto LABEL_307;
        if ( v237.m128i_i64[0] )
          goto LABEL_307;
        v136 = sub_125B60((unsigned __int8 *)(v215 + 48), (__int64)v128, 0);
        if ( !v136 )
          goto LABEL_307;
        v132 = v129 + 64;
LABEL_320:
        sub_127FE0(v226, (__int64)v235, v132, 0, v134, v135, v175, (int)v177, v179, (int)v182, v184);
        sub_127FE0(v226, (__int64)v235, v215 + 64, 0, v137, v138, v176, v178, v180, v183, v185);
        if ( v136 )
          v139 = v215 + 32;
        else
          v139 = 0;
        v140 = 22;
LABEL_323:
        v141 = (_DWORD *)sub_129150((__int64)v4, v235, a2, 0, 0, 0, 0x101u);
        v216 = (__int64)v141;
        if ( v141 && *v141 == v140 )
        {
          sub_127A20((__int64)&v237, v226, (__int64)v141, 0, v142, v143);
          if ( !sub_122C30((__int64)&v237, (__int64)v235)
            && (!v139 || (unsigned __int8)sub_1321C0(v4, v216, v139, v216, v216 + 32))
            && (v144 = sub_111170(v216)) != 0
            && (v145 = sub_125B60(v234, v144, 0)) != 0 )
          {
            v146 = v4[4].m128i_i64[0];
            v147 = *(unsigned int *)(v4[3].m128i_i64[1] + 72);
            if ( (unsigned int)v147 >= *(_DWORD *)(v146 + 64) )
              sub_111110(0.0);
            v206 = *(_QWORD *)(*(_QWORD *)(v146 + 528) + 8 * v147);
            sub_125180(v216 + 48, v234);
            sub_11D5A0(a2);
            sub_113AB0(v226);
            sub_112550((__int64)v4, v226, v206);
            sub_66FA0(v146, 1);
          }
          else
          {
            v145 = 0;
          }
          sub_93B40(v237.m128i_i64);
          sub_93B40(v235);
          if ( v145 )
            return 1;
          goto LABEL_17;
        }
        goto LABEL_307;
      }
      v165 = *(unsigned __int8 **)(v226 + 56);
      v166 = *(_DWORD *)v165;
      v167 = *((_DWORD *)v165 + 9);
      if ( *(_DWORD *)v165 == 24 )
      {
        if ( v167 != 8 )
          goto LABEL_307;
        v168 = (__int64)(v165 + 64);
        v174 = *(_QWORD *)(v226 + 56);
        if ( !sub_125B60(v165 + 32, (__int64)(v165 + 64), 0) || !sub_A2350((char *)(v174 + 48), 32, 1u) )
          goto LABEL_307;
      }
      else
      {
        if ( v167 != 4 || *((_DWORD *)v165 + 17) != 8 )
          goto LABEL_307;
        if ( v166 == 9 )
        {
          v140 = 23;
          v168 = (__int64)(v165 + 64);
          goto LABEL_388;
        }
        if ( v166 != 8 )
          goto LABEL_307;
        v168 = (__int64)(v165 + 64);
      }
      v140 = 24;
LABEL_388:
      sub_127FE0(v226, (__int64)v235, v168, 0, v126, v127, v175, (int)v177, v179, (int)v182, v184);
      v139 = 0;
      goto LABEL_323;
    }
    v83 = v4[4].m128i_i64[0];
    v247 = 0;
    v248 = 0;
    v240 = v83;
    v249 = 0;
    v241 = 0;
    v243 = 0;
    v244 = 0;
    v246 = nullptr;
    v242 = (__int64 *)v4;
    v245 = a2;
    v177 = &v240;
    v193 = sub_1134B0(&v240, 1, *(double *)a4.m128i_i64);
    if ( v193 )
    {
      v84 = v240;
      if ( HIDWORD(v248) >= *(_DWORD *)(v240 + 64) )
        goto LABEL_308;
      v85 = *(_QWORD *)(*(_QWORD *)(v240 + 528) + 8LL * HIDWORD(v248));
      v86 = *(_DWORD *)(v85 + 76) == 4;
      v241 = v85;
      if ( v86 && *(_BYTE *)(*(_QWORD *)(v85 + 56) + 64LL) == 7 && *(_DWORD *)(v85 + 352) == 1 && sub_330DE0(v85) == 1 )
      {
        v111 = **(_DWORD **)(v85 + 56);
        if ( v111 - 43 <= 9 )
        {
          v244 = *(_QWORD *)(v85 + 56);
          v214 = v244;
          LOBYTE(v247) = 0;
          v112 = sub_32EC60(v111);
          v113 = *(_QWORD *)(v85 + 8);
          v225 = v112;
          LODWORD(v249) = v112;
          v114 = *(_DWORD *)(sub_1120C0(v113, 0) + 72);
          v115 = *(unsigned int *)(v214 + 72);
          HIDWORD(v248) = v114;
          if ( (unsigned int)v115 >= *(_DWORD *)(v84 + 64) )
            goto LABEL_308;
          v205 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v84 + 528) + 8 * v115), 0) + 72);
          LODWORD(v248) = v205;
          v184 = v243;
          v199 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(v243 + 8), 0) + 72);
          v182 = v246;
          v116 = (unsigned int)v246[18];
          if ( (unsigned int)v116 >= *(_DWORD *)(v84 + 64) )
            goto LABEL_308;
          v117 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v84 + 528) + 8 * v116), 0) + 72);
          if ( v225 != (unsigned int)sub_32EAF0(v225) )
            HIDWORD(v249) = sub_32EA20(HIDWORD(v249));
          v181 = HIDWORD(v249);
          v118 = sub_32EC60(HIDWORD(v249));
          if ( v205 )
          {
            if ( v205 == v199 )
            {
              v118 = sub_32EA00(v118);
            }
            else
            {
              if ( v205 != v117 )
                goto LABEL_195;
              v117 = v199;
            }
          }
          v179 = v118;
          if ( (unsigned int)sub_32EA00(v225) == v118 )
            goto LABEL_286;
          if ( v225 == v179 )
          {
            v193 = 0;
            if ( !v205 )
              v117 = v199;
LABEL_286:
            if ( (!v114 || v114 == v117)
              && (unsigned int)sub_130480(
                                 *(_QWORD *)(v4[30].m128i_i64[0] + 112),
                                 v4,
                                 v78,
                                 (_DWORD *)v78,
                                 v78,
                                 v214 + 32,
                                 v214 + 48,
                                 2) )
            {
              v119 = 7;
              if ( !v193 )
                v119 = 3;
              if ( (unsigned __int8)sub_111A30((__int64)v182, v4, v78, v214, (__int64)v182, v119) )
              {
                *v182 = v181;
                sub_111130((_QWORD *)v85, *(double *)a4.m128i_i64);
                sub_111130(v242, *(double *)a4.m128i_i64);
                sub_111130((_QWORD *)v184, *(double *)a4.m128i_i64);
                v120 = *(_DWORD *)(v184 + 24);
                BYTE1(v120) &= ~2u;
                LOBYTE(v120) = v120 | 0x80;
                *(_DWORD *)(v184 + 24) = v120;
                sub_113680((__int64)&v240, 0, *(double *)a4.m128i_i64);
                sub_113680((__int64)&v240, 1, *(double *)a4.m128i_i64);
                *(_DWORD *)v4[4].m128i_i64[0] |= 0x400u;
                sub_66FA0(v4[4].m128i_i64[0], 1);
                return 1;
              }
            }
          }
        }
      }
    }
LABEL_195:
    if ( v4[4].m128i_i32[3] != 4 )
      goto LABEL_15;
    v78 = v4[3].m128i_i64[1];
    goto LABEL_170;
  }
  return 1;
}

