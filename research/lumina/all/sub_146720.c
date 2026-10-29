unsigned __int64 __fastcall sub_146720(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 *v22; // rdx
  int v23; // eax
  unsigned int v24; // ebp
  char v25; // r13
  int *v26; // r14
  const char *v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // r12
  const char *v31; // rdx
  __int64 i; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int16 v35; // ax
  __int64 v36; // r8
  const char *v37; // rcx
  int v38; // eax
  __int16 v39; // cx
  int v40; // r13d
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdi
  _DWORD *v45; // rdx
  __int64 v46; // r13
  int v47; // r14d
  __int64 v48; // rdi
  __int64 v49; // r11
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r8
  _BOOL4 v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  bool v57; // bl
  int v58; // eax
  bool v59; // dl
  unsigned int v60; // eax
  int v61; // eax
  int v62; // r8d
  unsigned int v63; // ebx
  __int64 v64; // rax
  int v65; // r13d
  int v66; // r10d
  __int64 v67; // rbx
  __int64 v68; // r15
  int v69; // ecx
  __int16 v70; // ax
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rbx
  int v77; // r15d
  __int64 v78; // r13
  unsigned int v79; // ebp
  __int64 v80; // rdx
  int v81; // eax
  const char *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r14
  unsigned int v88; // r12d
  __int64 v89; // rbx
  _QWORD *v90; // rax
  __int64 v91; // rbx
  unsigned int v92; // esi
  int v93; // eax
  int v94; // edx
  int v95; // r13d
  int v96; // eax
  __int64 k; // r13
  __m128i *v98; // rax
  __int64 *v99; // r10
  __int64 *v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rsi
  __m128i *v103; // rax
  unsigned int v104; // r9d
  int v105; // eax
  __int64 v106; // r8
  __int64 v107; // r9
  __int16 v108; // dx
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // edx
  _BYTE *v112; // rax
  int v113; // eax
  unsigned int v114; // edx
  unsigned int v115; // r13d
  int v116; // r13d
  __int64 *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  int v128; // eax
  int v129; // r13d
  int v130; // ecx
  int v131; // eax
  _BYTE *v132; // rdx
  unsigned int v133; // edx
  int v134; // edx
  __int64 v135; // r9
  __int64 v136; // r14
  unsigned int v137; // r12d
  __int64 v138; // rbx
  int v139; // ecx
  unsigned int v140; // r8d
  __int64 v141; // rbx
  int v142; // eax
  __int64 v143; // r8
  __int64 v144; // rax
  __int64 v145; // rsi
  __int64 v146; // r10
  int v147; // r9d
  __int64 v148; // rbp
  signed int v149; // ebx
  __int64 v150; // rax
  unsigned int v151; // r8d
  __int64 v152; // rax
  __int64 j; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rax
  unsigned int v157; // eax
  unsigned int v158; // eax
  unsigned int v161; // [rsp+10h] [rbp-198h]
  int *v162; // [rsp+10h] [rbp-198h]
  unsigned int v163; // [rsp+10h] [rbp-198h]
  __int64 v165; // [rsp+18h] [rbp-190h]
  __int64 *v166; // [rsp+18h] [rbp-190h]
  unsigned int v167; // [rsp+18h] [rbp-190h]
  int v168; // [rsp+18h] [rbp-190h]
  __int64 *v169; // [rsp+20h] [rbp-188h]
  int *v170; // [rsp+28h] [rbp-180h]
  unsigned int v171; // [rsp+28h] [rbp-180h]
  int v172; // [rsp+28h] [rbp-180h]
  __int64 *v173; // [rsp+28h] [rbp-180h]
  unsigned int v174; // [rsp+28h] [rbp-180h]
  __int16 v175; // [rsp+28h] [rbp-180h]
  __int64 *v176; // [rsp+30h] [rbp-178h]
  unsigned int v177; // [rsp+30h] [rbp-178h]
  int v179; // [rsp+3Ch] [rbp-16Ch]
  unsigned int v180; // [rsp+3Ch] [rbp-16Ch]
  signed int v181; // [rsp+3Ch] [rbp-16Ch]
  __int64 v182; // [rsp+40h] [rbp-168h]
  __int64 *v183; // [rsp+40h] [rbp-168h]
  __int64 v184; // [rsp+40h] [rbp-168h]
  unsigned int v185; // [rsp+48h] [rbp-160h]
  __int64 v186; // [rsp+48h] [rbp-160h]
  __int64 v187; // [rsp+50h] [rbp-158h]
  unsigned int v188; // [rsp+50h] [rbp-158h]
  int v189; // [rsp+50h] [rbp-158h]
  __int64 v190; // [rsp+50h] [rbp-158h]
  __int16 v191; // [rsp+50h] [rbp-158h]
  unsigned int v192; // [rsp+50h] [rbp-158h]
  unsigned __int8 *v193; // [rsp+58h] [rbp-150h]
  unsigned int v194; // [rsp+58h] [rbp-150h]
  int v195; // [rsp+60h] [rbp-148h]
  int v196; // [rsp+60h] [rbp-148h]
  int *v198; // [rsp+68h] [rbp-140h]
  unsigned int v199; // [rsp+68h] [rbp-140h]
  unsigned int v200; // [rsp+68h] [rbp-140h]
  unsigned __int8 v201; // [rsp+70h] [rbp-138h]
  int v202; // [rsp+70h] [rbp-138h]
  __int64 v203; // [rsp+70h] [rbp-138h]
  unsigned __int8 *v204; // [rsp+78h] [rbp-130h]
  int v205; // [rsp+78h] [rbp-130h]
  __int64 v206; // [rsp+78h] [rbp-130h]
  char v207; // [rsp+80h] [rbp-128h]
  int v208; // [rsp+80h] [rbp-128h]
  unsigned int v209; // [rsp+80h] [rbp-128h]
  int v210; // [rsp+84h] [rbp-124h]
  signed int v211; // [rsp+88h] [rbp-120h]
  __int64 v212; // [rsp+88h] [rbp-120h]
  unsigned int v213; // [rsp+90h] [rbp-118h]
  unsigned int v214; // [rsp+90h] [rbp-118h]
  unsigned int v215; // [rsp+90h] [rbp-118h]
  int v216; // [rsp+94h] [rbp-114h]
  int v217; // [rsp+94h] [rbp-114h]
  unsigned int v218; // [rsp+98h] [rbp-110h]
  __int64 v219; // [rsp+A0h] [rbp-108h]
  _BYTE *s; // [rsp+A8h] [rbp-100h]
  int v221; // [rsp+B0h] [rbp-F8h]
  unsigned int v222; // [rsp+B0h] [rbp-F8h]
  int v223; // [rsp+B4h] [rbp-F4h]
  __int16 n; // [rsp+B8h] [rbp-F0h]
  __int64 v225; // [rsp+C0h] [rbp-E8h]
  unsigned int v226; // [rsp+C0h] [rbp-E8h]
  __int64 v227; // [rsp+C8h] [rbp-E0h]
  unsigned int v228; // [rsp+C8h] [rbp-E0h]
  int v229; // [rsp+D4h] [rbp-D4h]
  unsigned int *v230; // [rsp+D8h] [rbp-D0h]
  unsigned int v231; // [rsp+D8h] [rbp-D0h]
  unsigned int v232; // [rsp+D8h] [rbp-D0h]
  unsigned int v233; // [rsp+E0h] [rbp-C8h]
  __int64 v234; // [rsp+E0h] [rbp-C8h]
  char v235; // [rsp+E9h] [rbp-BFh]
  unsigned __int8 v236; // [rsp+EAh] [rbp-BEh]
  bool v237; // [rsp+EBh] [rbp-BDh]
  int v238; // [rsp+ECh] [rbp-BCh]
  __int64 v239; // [rsp+F0h] [rbp-B8h]
  unsigned int v240; // [rsp+F8h] [rbp-B0h]
  __int64 v241; // [rsp+F8h] [rbp-B0h]
  int *v242; // [rsp+100h] [rbp-A8h]
  char v243; // [rsp+10Bh] [rbp-9Dh]
  unsigned int v244; // [rsp+10Ch] [rbp-9Ch]
  int v245; // [rsp+118h] [rbp-90h] BYREF
  int v246; // [rsp+11Ch] [rbp-8Ch] BYREF
  __int128 v247; // [rsp+120h] [rbp-88h]
  _QWORD v248[3]; // [rsp+130h] [rbp-78h] BYREF
  __int128 v249; // [rsp+148h] [rbp-60h]
  __int128 v250; // [rsp+158h] [rbp-50h]
  unsigned __int64 v251; // [rsp+168h] [rbp-40h]

  v7 = *(_QWORD *)a1;
  v251 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(a1 + 48);
  v246 = 0;
  v161 = v8;
  v247 = 0;
  if ( v8 )
    goto LABEL_2;
  v10 = a1;
  v11 = sub_145BE0((__int64 *)a1, a2, 0.0);
  v12 = v11;
  if ( !v11 )
    goto LABEL_13;
  v13 = *(_QWORD *)(v11 + 96);
  v179 = -32768;
  if ( v13 )
    v179 = sub_CFB20(*(_QWORD *)a1, v13);
  v193 = sub_E60E0((__int64 *)a1, v12, 129, a3, &v245);
  v207 = *(_BYTE *)(v12 + 63);
  if ( *(int *)a2 > 1 )
    v161 = *a3;
  if ( (unsigned int)sub_136CC0(a1, v12) )
    goto LABEL_13;
  v221 = sub_E6130((_BYTE *)a1, (const char **)v12, v245);
  if ( v221 )
    goto LABEL_13;
  v211 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 52) = v211 + 1;
  v210 = v211 + 1;
  v15 = *(_QWORD *)(v12 + 16);
  if ( *(char *)(v12 + 48) >= 0 )
  {
    v182 = 0;
    if ( v15 )
      goto LABEL_23;
LABEL_98:
    v216 = 0;
    v21 = 2;
    v20 = 0;
    v185 = v211;
    goto LABEL_28;
  }
  if ( !v15 )
  {
    v182 = 0;
    goto LABEL_98;
  }
  if ( (*(_BYTE *)(v15 + 99) & 3) == 2 )
  {
    v182 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 16);
    do
      v16 = *(_QWORD *)(v16 + 40);
    while ( v16 && (*(_BYTE *)(v16 + 99) & 3) != 2 );
    v182 = v16;
  }
LABEL_23:
  v17 = v211 + 1;
  v18 = v211;
  do
  {
    if ( v15 == v182 )
      v18 = v17;
    *(_DWORD *)(a1 + 52) = ++v17;
    v15 = *(_QWORD *)(v15 + 40);
    v19 = ~v211 + v17;
  }
  while ( v15 );
  v20 = v19;
  v216 = ~v211 + v17;
  v185 = v18;
  v21 = v19 + 2LL;
LABEL_28:
  if ( a6 )
  {
    v210 = *(_DWORD *)(a6 + 80);
    v185 = *(_DWORD *)(a6 + 76);
    *(_DWORD *)(a1 + 52) = v211;
  }
  *(_DWORD *)(a2 + 72) = v185;
  v169 = sub_DBF10(v7, v21 + 4LL * (v216 + *(__int16 *)(v12 + 54) + 1));
  if ( !v169 )
  {
LABEL_13:
    v14 = *((_QWORD *)&v247 + 1);
    if ( *((_QWORD *)&v247 + 1) )
    {
      *((_QWORD *)&v247 + 1) = 0;
      *(_QWORD *)(v14 + 360) = v247;
    }
    goto LABEL_2;
  }
  v219 = (__int64)v169 + 4 * *(__int16 *)(v12 + 54);
  s = (_BYTE *)(v219 + 4 * v20 + 4);
  memset(s, 1, v216 + 1);
  s[v20 + 1] = 0;
  if ( *(__int16 *)(v12 + 54) > 0 )
  {
    v22 = v169;
    v23 = 0;
    do
    {
      *(_DWORD *)v22 = -1;
      ++v23;
      v22 = (__int64 *)((char *)v22 + 4);
    }
    while ( v23 < *(__int16 *)(v12 + 54) );
  }
  v248[0] = a1;
  v250 = 0;
  LODWORD(v250) = 512;
  v249 = 0;
  v248[1] = a2;
  v248[2] = a6;
  v176 = *(__int64 **)(a1 + 16);
  if ( !v176 )
  {
    v176 = sub_E2050((__int64 *)a1);
    if ( !v176 )
      goto LABEL_101;
  }
  if ( *a3 > 0 )
  {
    v187 = v7;
    v213 = -1;
    v204 = nullptr;
    v201 = 0;
    v235 = 0;
    v170 = a3;
    v24 = 0;
    while ( 1 )
    {
      v25 = 0;
      v26 = &v170[6 * v24];
      v27 = *((const char **)v26 + 2);
      if ( v27 )
        v25 = sub_CAF70(*((unsigned __int8 **)v26 + 2));
      if ( !v161 )
      {
        if ( sub_E45E0((__int64)v248, *((_QWORD *)v26 + 1)) )
          goto LABEL_105;
        v27 = *((const char **)v26 + 2);
      }
      if ( *(__int16 *)(v12 + 54) <= 0 )
        goto LABEL_92;
      v28 = *(_QWORD *)(v12 + 8);
      v29 = 0;
      while ( 1 )
      {
        v30 = (int)v29;
        if ( *(_BYTE *)(v28 + 11) == v25 )
          break;
LABEL_42:
        ++v29;
        v28 += 16;
        if ( (unsigned int)(*(__int16 *)(v12 + 54) - 1) + 1LL == v29 )
          goto LABEL_92;
      }
      v31 = *(const char **)v28;
      for ( i = 0; ; ++i )
      {
        v33 = (unsigned __int8)v31[i];
        v34 = (unsigned __int8)v27[i];
        if ( (_DWORD)v33 == (_DWORD)v34 )
          break;
        if ( byte_1BF000[v33] != byte_1BF000[v34] )
          goto LABEL_42;
LABEL_46:
        ;
      }
      if ( v31[i] )
        goto LABEL_46;
      if ( *(__int16 *)(v12 + 52) == (_DWORD)v29 )
      {
        v213 = v24;
        v201 = 1;
        v204 = *((unsigned __int8 **)v26 + 1);
      }
      else
      {
        v35 = *(_WORD *)(v28 + 14);
        if ( v182 && (v35 & 1) != 0 )
        {
          v235 = 1;
        }
        else if ( (v35 & 0x60) != 0 )
        {
          v7 = v187;
          a3 = v170;
          sub_DBD10(a1, "cannot UPDATE generated column \"%s\"", v31);
          goto LABEL_101;
        }
      }
      *((_DWORD *)v169 + v29) = v24;
      if ( *(__int16 *)(v12 + 54) > (int)v29 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(v187 + 32) + 32LL * v179);
        v37 = *(const char **)(*(_QWORD *)(v12 + 8) + 16 * v29);
        goto LABEL_55;
      }
      v27 = *((const char **)v26 + 2);
LABEL_92:
      if ( v182 || !(unsigned int)sub_CED50((__int64)v27) )
      {
        v7 = v187;
        a3 = v170;
        sub_DBD10(a1, "no such column: %s", v27);
        *(_BYTE *)(a1 + 29) = 1;
        goto LABEL_101;
      }
      v30 = -1;
      v213 = v24;
      v201 = 1;
      v37 = "ROWID";
      v204 = *((unsigned __int8 **)v26 + 1);
      v36 = *(_QWORD *)(*(_QWORD *)(v187 + 32) + 32LL * v179);
LABEL_55:
      v38 = sub_E4020(a1, 23, *(_QWORD *)v12, (__int64)v37, v36);
      if ( v38 == 1 )
      {
LABEL_105:
        v7 = v187;
        a3 = v170;
        goto LABEL_101;
      }
      if ( v38 == 2 )
        *((_DWORD *)v169 + v30) = -1;
      if ( (int)++v24 >= *v170 )
      {
        v7 = v187;
        v10 = a1;
        a3 = v170;
        goto LABEL_60;
      }
    }
  }
  v213 = -1;
  v204 = nullptr;
  v201 = 0;
  v235 = 0;
LABEL_60:
  v236 = v201 + v235;
  if ( (*(_BYTE *)(v12 + 48) & 0x60) != 0 )
  {
    v39 = *(_WORD *)(v12 + 54);
    do
    {
      if ( v39 <= 0 )
        break;
      v40 = 0;
      v41 = 0;
      do
      {
        if ( *((int *)v169 + v41) < 0 )
        {
          v42 = *(_QWORD *)(v12 + 8) + 16 * v41;
          if ( (*(_BYTE *)(v42 + 14) & 0x60) != 0 )
          {
            v43 = *(unsigned __int16 *)(v42 + 12);
            v44 = 0;
            if ( (_WORD)v43 )
            {
              if ( !*(_BYTE *)(v12 + 63) )
              {
                v45 = *(_DWORD **)(v12 + 80);
                if ( v45 )
                {
                  if ( *v45 >= v43 )
                    v44 = *(_QWORD *)&v45[6 * v43 - 4];
                }
              }
            }
            if ( sub_CE2B0(v44, (__int64)v169, v201) )
            {
              *((_DWORD *)v169 + v41) = 99999;
              v40 = 1;
            }
            v39 = *(_WORD *)(v12 + 54);
          }
        }
        ++v41;
      }
      while ( v39 > (int)v41 );
    }
    while ( v40 );
  }
  v223 = 0;
  v237 = 0;
  *(_QWORD *)(a2 + 88) = -(__int64)(*(_BYTE *)(v12 + 63) == 1);
  if ( (*(_BYTE *)(*(_QWORD *)v10 + 49LL) & 0x40) != 0 && !*(_BYTE *)(v12 + 63) )
  {
    v223 = sub_CF7D0(v12, (__int64)v169, v236);
    v237 = v223 != 0;
  }
  if ( a5 == 5 )
    v246 = 1;
  if ( *(_QWORD *)(v12 + 16) )
  {
    v46 = *(_QWORD *)(v12 + 16);
    v198 = a3;
    v47 = 0;
    while ( 1 )
    {
      if ( v182 == v46
        || v223 > 1
        || v236 != 0
        || (v48 = *(_QWORD *)(v46 + 72)) != 0 && sub_CE2B0(v48, (__int64)v169, v201) )
      {
        v49 = v47;
        v50 = *(_DWORD *)(v10 + 56) + 1;
        *(_DWORD *)(v10 + 56) = v50;
        *(_DWORD *)(v10 + 56) = v50 + *(unsigned __int16 *)(v46 + 96);
      }
      else
      {
        v52 = 0;
        v49 = v47;
        if ( !*(_WORD *)(v46 + 94) )
        {
LABEL_90:
          s[v49 + 1] = 0;
          v50 = 0;
          goto LABEL_83;
        }
        while ( 1 )
        {
          v54 = *(__int16 *)(*(_QWORD *)(v46 + 8) + 2 * v52);
          if ( (v54 & 0x8000u) == 0LL )
          {
            v53 = *((_DWORD *)v169 + v54) >= 0;
          }
          else
          {
            v227 = v49;
            v225 = v52;
            v53 = sub_CE2B0(*(_QWORD *)(*(_QWORD *)(v46 + 80) + 24LL * (int)v52 + 8), (__int64)v169, v201);
            v49 = v227;
            v52 = v225;
          }
          if ( v53 )
            break;
          if ( *(unsigned __int16 *)(v46 + 94) <= (int)++v52 )
            goto LABEL_90;
        }
        v50 = *(_DWORD *)(v10 + 56) + 1;
        *(_DWORD *)(v10 + 56) = v50;
        *(_DWORD *)(v10 + 56) = v50 + *(unsigned __int16 *)(v46 + 96);
        if ( a5 == 11 && *(_BYTE *)(v46 + 98) == 5 )
          v246 = 1;
      }
      if ( !v50 )
        goto LABEL_90;
LABEL_83:
      *(_DWORD *)(v219 + 4 * v49) = v50;
      v46 = *(_QWORD *)(v46 + 40);
      ++v47;
      if ( !v46 )
      {
        v55 = v47;
        a3 = v198;
        v230 = (unsigned int *)(v219 + 4 * v55);
        goto LABEL_115;
      }
    }
  }
  v230 = (unsigned int *)v219;
LABEL_115:
  v56 = *(_DWORD *)(v10 + 56) + 1;
  *(_DWORD *)(v10 + 56) = v56;
  *v230 = v56;
  if ( v246 )
    memset(s, 1, v216 + 1);
  if ( !*(_BYTE *)(v10 + 30) )
    *((_BYTE *)v176 + 198) |= 0x10u;
  v57 = v193 != nullptr;
  sub_11C930(v10, v193 != nullptr || v237, v179);
  if ( *(_BYTE *)(v12 + 63) != 1 )
  {
    v240 = *v230;
    v58 = *(_DWORD *)(v10 + 56);
    v171 = v58 + 1;
    *(_DWORD *)(v10 + 56) = v58 + 1;
    v59 = v57 || v236 != 0;
    if ( (unsigned __int8)v235 | v57 || v237 )
    {
      v229 = v58 + 2;
      v60 = v171 + *(__int16 *)(v12 + 54);
      *(_DWORD *)(v10 + 56) = v60;
      if ( !v237 )
      {
        v199 = v171;
        if ( !v59 )
          goto LABEL_125;
      }
    }
    else
    {
      if ( !v59 )
      {
        v229 = 0;
        v60 = v58 + 1;
        v199 = v171;
        goto LABEL_125;
      }
      v60 = v58 + 1;
      v229 = 0;
    }
    v199 = ++v60;
    *(_DWORD *)(v10 + 56) = v60;
LABEL_125:
    v226 = v60 + 1;
    *(_DWORD *)(v10 + 56) = *(__int16 *)(v12 + 54) + v60;
    goto LABEL_126;
  }
  v240 = 0;
  v229 = 0;
  v226 = 0;
  v199 = 0;
  v171 = 0;
LABEL_126:
  if ( v207 == 2 )
  {
    v82 = *(const char **)v12;
    v83 = *(_QWORD *)(v10 + 360);
    *((_QWORD *)&v247 + 1) = v10;
    *(_QWORD *)(v10 + 360) = v82;
    *(_QWORD *)&v247 = v83;
    if ( v161 )
      goto LABEL_128;
    sub_136B80((__int64 *)v10, (const char **)v12, *(_QWORD *)(v12 + 96), a4, v185);
  }
  else if ( v161 )
  {
LABEL_128:
    v243 = 0;
    goto LABEL_129;
  }
  if ( sub_E45E0((__int64)v248, a4) )
    goto LABEL_101;
  v243 = 1;
LABEL_129:
  if ( *(_BYTE *)(v12 + 63) == 1 )
  {
    v90 = *(_QWORD **)(v12 + 80);
    v91 = *(_QWORD *)(v10 + 16);
    v165 = *(_QWORD *)v10;
    v186 = (__int64)v90;
    if ( v90 && *(_QWORD *)v10 != *v90 )
    {
      do
        v90 = (_QWORD *)v90[5];
      while ( v90 && v165 != *v90 );
      v186 = (__int64)v90;
    }
    v163 = *(_DWORD *)(v10 + 52);
    v196 = *(__int16 *)(v12 + 54);
    v181 = v196 + 2;
    v92 = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(v10 + 52) = v163 + 1;
    v93 = sub_E1710(v91, 118, v163, v196 + 2, 0);
    v94 = *(_DWORD *)(v10 + 56);
    v95 = v93;
    v96 = v94 + v196 + 2;
    v189 = v94;
    *(_DWORD *)(v10 + 56) = v96;
    v177 = v94 + 1;
    if ( *(int *)a2 <= 1 )
    {
      v194 = v96 + 2;
      *(_DWORD *)(v10 + 56) = v96 + 2;
      v209 = v96 + 1;
      v184 = sub_12EFF0(v10, a2, a4, 0, 0, 0, 4, 0);
      if ( !v184 )
        goto LABEL_101;
      if ( *(__int16 *)(v12 + 54) > 0 )
      {
        v203 = v7;
        v148 = v91;
        v149 = 0;
        v166 = v169;
        do
        {
          v150 = *(int *)v166;
          v151 = v189 + 3 + v149;
          if ( (int)v150 >= 0 )
          {
            if ( *(_QWORD *)(v10 + 16) )
              sub_127300(v10, *(unsigned __int8 **)&a3[6 * v150 + 2], v151, 0.0);
          }
          else
          {
            sub_E1710(v148, 175, v92, v149, v151);
            v152 = *(int *)(v148 + 144);
            if ( (int)v152 > 0 )
              *(_WORD *)(*(_QWORD *)(v148 + 136) + 24 * v152 - 22) = 1;
          }
          ++v149;
          v166 = (__int64 *)((char *)v166 + 4);
        }
        while ( v149 < *(__int16 *)(v12 + 54) );
        v91 = v148;
        v7 = v203;
      }
      v167 = v189 + 2;
      if ( *(char *)(v12 + 48) >= 0 )
      {
        sub_E1710(v91, 135, v92, v177, 0);
        if ( v204 )
        {
          if ( *(_QWORD *)(v10 + 16) )
            sub_127300(v10, v204, v167, 0.0);
        }
        else
        {
          sub_E1710(v91, 135, v92, v167, 0);
        }
      }
      else
      {
        for ( j = *(_QWORD *)(v12 + 16); j && (*(_BYTE *)(j + 99) & 3) != 2; j = *(_QWORD *)(j + 40) )
          ;
        v200 = **(__int16 **)(j + 8);
        sub_E1710(v91, 175, v92, v200, v177);
        sub_E1710(v91, 81, v189 + v200 + 3, v167, 0);
      }
      if ( *(_BYTE *)(v184 + 74) )
      {
        v168 = *(unsigned __int8 *)(v184 + 74);
        sub_D0600(*(_QWORD *)v91, (_QWORD *)(v91 + 136), v95, v154, v155, *(unsigned __int8 *)(v184 + 74));
        sub_E1710(v91, 122, v92, 0, 0);
        v221 = v168;
LABEL_259:
        sub_E3B50(v10, v12);
        v105 = sub_E1710(v91, 7, 0, v181, v177);
        sub_DCC50(v91, v105, v186, 4294967285LL, v106, v107);
        if ( a5 == 11 )
          v108 = 2;
        else
          v108 = a5;
        v109 = *(int *)(v91 + 144);
        if ( (int)v109 > 0 )
          *(_WORD *)(*(_QWORD *)(v91 + 136) + 24 * v109 - 22) = v108;
        v110 = *(_QWORD *)(v10 + 160);
        if ( !v110 )
          v110 = v10;
        *(_BYTE *)(v110 + 33) = 1;
        if ( v221 )
        {
          sub_133C90(v184, 0.0);
        }
        else
        {
          sub_E1710(v91, 38, v163, v95 + 1, 0);
          v111 = *(_DWORD *)(v91 + 144);
          if ( v95 < 0 )
            v95 = v111 - 1;
          v112 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v91 + 103LL) )
            v112 = (_BYTE *)(*(_QWORD *)(v91 + 136) + 24LL * v95);
          *((_DWORD *)v112 + 2) = v111;
          sub_E1710(v91, 122, v163, 0, 0);
        }
        goto LABEL_101;
      }
      v156 = *(_QWORD *)(v10 + 160);
      if ( !v156 )
        v156 = v10;
      *(_BYTE *)(v156 + 32) = 1;
      sub_E1710(v91, 97, v177, v181, v209);
      sub_E1710(v91, 127, v163, v194, 0);
      sub_E1710(v91, 128, v163, v209, v194);
    }
    else
    {
      if ( *(char *)(v12 + 48) < 0 )
      {
        for ( k = *(_QWORD *)(v12 + 16); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*(_BYTE *)(k + 99) & 3) == 2 )
            break;
        }
        v144 = *((int *)v169 + **(__int16 **)(k + 8));
        if ( (int)v144 < 0 )
        {
          v175 = **(_WORD **)(k + 8);
          v98 = (__m128i *)sub_F04A0((__int64 *)v10, 75, 0, 0);
          if ( v98 )
            v98[3].m128i_i16[0] = v175 + 1;
        }
        else
        {
          v145 = *(_QWORD *)&a3[6 * v144 + 2];
          v98 = nullptr;
          if ( v145 )
            v98 = sub_DD6E0(v165, v145, 0, nullptr);
        }
      }
      else if ( v204 )
      {
        k = 0;
        v98 = sub_DD6E0(v165, (__int64)v204, 0, nullptr);
      }
      else
      {
        v98 = (__m128i *)sub_F04A0((__int64 *)v10, 75, 0, 0);
        k = 0;
      }
      v99 = sub_DEBF0((__int64 *)v10, (__int64)v98);
      if ( *(__int16 *)(v12 + 54) > 0 )
      {
        v190 = v91;
        v100 = v99;
        v172 = 0;
        v183 = v169;
        do
        {
          v101 = *(int *)v183;
          if ( (int)v101 < 0 )
          {
            v103 = (__m128i *)sub_F04A0((__int64 *)v10, 75, 0, 0);
            if ( v103 )
              v103[3].m128i_i16[0] = v172 + 1;
          }
          else
          {
            v102 = *(_QWORD *)&a3[6 * v101 + 2];
            v103 = nullptr;
            if ( v102 )
              v103 = sub_DD6E0(v165, v102, 0, nullptr);
          }
          ++v172;
          v100 = sub_E0F20((__int64 *)v10, (int *)v100, (__int64)v103);
          v183 = (__int64 *)((char *)v183 + 4);
        }
        while ( v172 < *(__int16 *)(v12 + 54) );
        v99 = v100;
        v91 = v190;
      }
      v173 = v99;
      sub_24673((_QWORD *)v10, v163, k, v99, a2, a4);
      v184 = 0;
      if ( v173 )
        sub_D7810(v165, v173);
    }
    if ( *(_DWORD *)a2 == 1 )
      sub_133C90(v184, 0.0);
    v95 = sub_E1710(v91, 35, v163, 0, 0);
    if ( v181 > 0 )
    {
      v104 = 0;
      do
      {
        v174 = v104;
        sub_E1710(v91, 94, v163, v104, v177 + v104);
        v104 = v174 + 1;
      }
      while ( v174 + 1 != v196 + 2 );
    }
    goto LABEL_259;
  }
  v228 = 0;
  v61 = *(_DWORD *)(v10 + 68) - 1;
  *(_DWORD *)(v10 + 68) = v61;
  v222 = v61;
  if ( (*(_BYTE *)(v7 + 52) & 1) != 0 && !*(_QWORD *)(v10 + 168) && !*(_BYTE *)(v10 + 30) )
  {
    if ( *(_BYTE *)(v10 + 213) || a6 )
    {
      v228 = 0;
    }
    else
    {
      v157 = *(_DWORD *)(v10 + 56) + 1;
      *(_DWORD *)(v10 + 56) = v157;
      v228 = v157;
      sub_E1710((__int64)v176, 71, 0, v157, 0);
    }
  }
  if ( v161 || *(char *)(v12 + 48) < 0 )
  {
    if ( v182 )
    {
      n = *(_WORD *)(v182 + 94);
      v195 = n;
    }
    else
    {
      v195 = 0;
      n = 0;
    }
    v62 = *(_DWORD *)(v10 + 56);
    v63 = v62 + 1;
    v233 = v195 + v62 + 1 + v161;
    *(_DWORD *)(v10 + 56) = v233;
    if ( a6 )
    {
      v180 = 0;
      if ( v161 )
      {
LABEL_138:
        v64 = *(_QWORD *)(v10 + 160);
        v218 = v63;
        v188 = 0;
        v238 = 1;
        v234 = 0;
        if ( !v64 )
          v64 = v10;
        *(_BYTE *)(v64 + 32) = 1;
        goto LABEL_141;
      }
      v218 = v62 + 1;
      v116 = 0;
      v63 = v195 + v62 + 1;
      v180 = 0;
      goto LABEL_321;
    }
    v113 = 0;
    v114 = v195 + v161;
    if ( v207 == 2 )
      v113 = *(__int16 *)(v12 + 54);
    v115 = v114 + v113;
    v180 = *(_DWORD *)(v10 + 52);
    *(_DWORD *)(v10 + 52) = v180 + 1;
    if ( v182 )
    {
      sub_E1710((__int64)v176, 75, 0, v63, v195 + v62);
      v191 = v115;
      v116 = sub_E1710((__int64)v176, 118, v180, v115, 0);
      v117 = sub_F2500(v10, v182, 0.0);
      if ( v117 )
      {
        *((_WORD *)v117 + 4) = v191;
        sub_D04B0((__int64)v176, (__int64)v117, 0xFFFFFFF8, v118, v119, v120);
      }
    }
    else
    {
      v116 = sub_E1710((__int64)v176, 118, v180, v114 + v113, 0);
    }
    if ( v161 )
    {
      sub_24673((_QWORD *)v10, v180, v182, a3, a2, a4);
      v158 = v185;
      if ( v207 == 2 )
        v158 = v180;
      v185 = v158;
      goto LABEL_138;
    }
    v218 = v63;
    v63 = v233;
  }
  else
  {
    sub_E1710((__int64)v176, 75, 0, v240, v171);
    v63 = 0;
    v180 = *(_DWORD *)(v10 + 52);
    *(_DWORD *)(v10 + 52) = v180 + 1;
    v116 = sub_E1710((__int64)v176, 118, v180, 0, v240);
    v218 = 0;
    n = 0;
    if ( a6 )
    {
LABEL_321:
      sub_1253C0(v10, a4, v222, 16, 0.0);
      v134 = *(_DWORD *)(v12 + 48);
      v238 = 0;
      v188 = 1;
      v234 = 0;
      goto LABEL_322;
    }
  }
  v121 = 4;
  if ( !*(_BYTE *)(v10 + 30) )
  {
    if ( v193 || v223 || v246 || (v121 = 12, v236) )
      v121 = 4;
  }
  v122 = sub_12EFF0(v10, a2, a4, 0, 0, 0, v121, v210);
  v234 = v122;
  if ( !v122 )
    goto LABEL_101;
  v239 = *(_QWORD *)(v122 + 48);
  v188 = *(unsigned __int8 *)(v122 + 74);
  v238 = *(_BYTE *)(v122 + 76) & 1;
  if ( v188 != 1 )
  {
    v124 = *(_QWORD *)(v10 + 160);
    if ( !v124 )
      v124 = v10;
    *(_BYTE *)(v124 + 32) = 1;
    if ( v188 == 2 )
    {
      v134 = *(_DWORD *)(v12 + 48);
      if ( v239 < 0 || v185 == HIDWORD(v239) || !s[HIDWORD(v239) - v211] )
        goto LABEL_322;
      if ( (*(_DWORD *)(v12 + 48) & 0x80) != 0 )
      {
        LODWORD(v135) = n;
        v195 = n;
        if ( n <= 0 )
        {
          v232 = v63;
          goto LABEL_335;
        }
        v232 = v63;
        v188 = 0;
        v63 = v218;
LABEL_324:
        v242 = a3;
        v136 = v10;
        v137 = v63;
        v241 = (unsigned int)(v135 - 1) + 1LL;
        v138 = 0;
        do
        {
          v244 = v135;
          v139 = *(__int16 *)(*(_QWORD *)(v182 + 8) + 2 * v138);
          v140 = v218 + v138++;
          sub_127530(v176, v12, v185, v139, v140, 0.0);
          v135 = v244;
        }
        while ( v241 != v138 );
        v63 = v137;
        v10 = v136;
        a3 = v242;
LABEL_327:
        if ( v188 )
        {
          if ( v116 )
            sub_D0600(*v176, v176 + 17, v116, v188, v123, v135);
          goto LABEL_141;
        }
LABEL_335:
        v192 = v135;
        v141 = sub_E3A30(v7, v182);
        v142 = sub_E1710((__int64)v176, 97, v218, v192, v232);
        sub_DCC50((__int64)v176, v142, v141, v192, v143, v192);
        v63 = v232;
        sub_E1770(v176, 138, v180, v232, v218, v192);
        v195 = 0;
        v188 = 0;
        goto LABEL_141;
      }
      sub_E1710((__int64)v176, 135, v185, v171, 0);
    }
    else
    {
      if ( *(char *)(v12 + 48) < 0 )
        goto LABEL_323;
      sub_E1710((__int64)v176, 135, v185, v171, 0);
      if ( v188 )
      {
        v195 = v116;
        goto LABEL_331;
      }
    }
    v128 = *(_DWORD *)(v10 + 56) + 1;
    *(_DWORD *)(v10 + 56) = v128;
    *v230 = v128;
    sub_E1710((__int64)v176, 128, v180, v240, v171);
    v195 = 0;
    v188 = 0;
    goto LABEL_293;
  }
  v134 = *(_DWORD *)(v12 + 48);
LABEL_322:
  if ( (v134 & 0x80) != 0 )
  {
LABEL_323:
    v135 = (unsigned int)n;
    v232 = v63;
    v63 = v218;
    v195 = n;
    if ( (int)v135 <= 0 )
      goto LABEL_327;
    goto LABEL_324;
  }
  sub_E1710((__int64)v176, 135, v185, v171, 0);
  v195 = v116;
LABEL_331:
  if ( v116 )
  {
    sub_D0600(*v176, v176 + 17, v116, v125, v126, v127);
    v195 = 0;
  }
LABEL_141:
  v65 = v222;
  v231 = 0;
  if ( a6 )
    goto LABEL_142;
LABEL_293:
  if ( v188 != 2 && v243 )
    sub_133C90(v234, 0.0);
  if ( v207 != 2 )
  {
    if ( !v188 )
      goto LABEL_298;
    if ( (int)v239 >= 0 )
      s[(int)v239 - v211] = 0;
    if ( v239 >= 0 )
      s[HIDWORD(v239) - v211] = 0;
    if ( v188 == 2 && v216 - (v239 >= 0) > 0 )
      v129 = sub_E1710((__int64)v176, 14, 0, 0, 0);
    else
LABEL_298:
      v129 = 0;
    if ( *(_BYTE *)(v12 + 63) == 1 )
      dword_0 = -999;
    else
      sub_F26F0(v10, v12, 113, 0, v211, s, 0.0, nullptr, nullptr);
    if ( v129 )
    {
      v130 = *((_DWORD *)v176 + 36);
      v131 = v130 - 1;
      if ( v129 == v130 - 1 )
      {
        *((_DWORD *)v176 + 36) = v129;
      }
      else
      {
        v132 = byte_241F50;
        if ( v129 >= 0 )
          v131 = v129;
        if ( !*(_BYTE *)(*v176 + 103) )
          v132 = (_BYTE *)(v176[17] + 24LL * v131);
        *((_DWORD *)v132 + 2) = v130;
      }
    }
  }
  if ( v188 )
  {
    if ( v185 != (_DWORD)v239 && v185 != HIDWORD(v239) )
      sub_E1770(v176, 27, v185, v222, v63, v195);
    if ( v188 == 1 )
    {
      v65 = v222;
    }
    else
    {
      v65 = *(_DWORD *)(v10 + 68) - 1;
      *(_DWORD *)(v10 + 68) = v65;
    }
    v133 = v171;
    if ( v182 )
      v133 = v63;
    sub_E1710((__int64)v176, 50, v133, v222, 0);
    v231 = 0;
    goto LABEL_142;
  }
  if ( !v182 && !v161 )
  {
    sub_E1710((__int64)v176, 35, v180, v222, 0);
    v65 = *(_DWORD *)(v10 + 68) - 1;
    *(_DWORD *)(v10 + 68) = v65;
    v231 = sub_E1710((__int64)v176, 135, v180, v171, 0);
    sub_E1710((__int64)v176, 30, v185, v65, v171);
    goto LABEL_340;
  }
  v65 = *(_DWORD *)(v10 + 68) - 1;
  *(_DWORD *)(v10 + 68) = v65;
  sub_E1710((__int64)v176, 35, v180, v222, 0);
  v231 = *((_DWORD *)v176 + 36);
  if ( !v161 )
  {
    sub_E1710((__int64)v176, 134, v180, v63, 0);
    sub_E1770(v176, 27, v185, v65, v63, 0);
LABEL_340:
    if ( !v201 )
      goto LABEL_147;
    goto LABEL_144;
  }
  if ( v207 == 2 )
  {
    if ( !v201 )
      goto LABEL_147;
    goto LABEL_380;
  }
  if ( v182 )
  {
    v146 = 0;
    v147 = n;
    while ( (int)v146 < v147 )
    {
      v217 = v147;
      v212 = v146;
      sub_E1710((__int64)v176, 94, v180, v146, v218 + v146);
      v147 = v217;
      v146 = v212 + 1;
    }
    sub_E1770(v176, 27, v185, v65, v218, v147);
  }
  else
  {
    sub_E1710((__int64)v176, 135, v180, v171, 0);
    sub_E1710((__int64)v176, 30, v185, v65, v171);
  }
LABEL_142:
  if ( v201 )
  {
    if ( !v161 )
    {
LABEL_144:
      if ( *(_QWORD *)(v10 + 16) )
        sub_127300(v10, v204, v199, 0.0);
      goto LABEL_146;
    }
LABEL_380:
    sub_E1710((__int64)v176, 94, v180, v213, v199);
LABEL_146:
    sub_E1710((__int64)v176, 12, v199, 0, 0);
  }
LABEL_147:
  if ( v235 || v237 )
  {
    if ( v223 )
    {
      v66 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)v10 + 49LL) & 0x40) != 0 && !*(_BYTE *)(v12 + 63) )
        v66 = sub_E65E0(v10, v12);
    }
    else
    {
      v66 = 0;
    }
    goto LABEL_150;
  }
  v66 = 0;
  if ( v193 )
  {
LABEL_150:
    v205 = v66 | sub_14DF00(v10, (_DWORD)v193, (_DWORD)a3, 0, 3, v12, a5);
    if ( *(__int16 *)(v12 + 54) > 0 )
    {
      v214 = v63;
      v67 = v12;
      v68 = 0;
      do
      {
        v69 = v68;
        v70 = v68;
        if ( (*(_BYTE *)(v67 + 48) & 0x20) != 0 )
        {
          v70 = sub_CF5E0(v67, v68);
          v69 = v68;
        }
        v71 = v229 + v70;
        if ( v205 == -1
          || v69 <= 31 && ((1 << v69) & v205) != 0
          || (*(_BYTE *)(*(_QWORD *)(v67 + 8) + 16 * v68 + 14) & 1) != 0 )
        {
          sub_127530(v176, v67, v185, v69, v71, 0.0);
        }
        else
        {
          sub_E1710((__int64)v176, 75, 0, v71, 0);
        }
        ++v68;
      }
      while ( *(__int16 *)(v67 + 54) > (int)v68 );
      v12 = v67;
      v63 = v214;
    }
    if ( !v201 && !v182 )
      sub_E1710((__int64)v176, 80, v171, v199, 0);
  }
  v202 = sub_14DF00(v10, (_DWORD)v193, (_DWORD)a3, 1, 1, v12, a5);
  v75 = *(__int16 *)(v12 + 54);
  if ( v75 <= 0 )
    goto LABEL_180;
  v74 = 0;
  v206 = v7;
  v215 = v63;
  v76 = v12;
  v77 = v65;
  v78 = 0;
  v79 = v226;
  do
  {
    v72 = (unsigned int)v78;
    if ( *(__int16 *)(v76 + 52) == (_DWORD)v78 )
    {
LABEL_178:
      sub_E1710((__int64)v176, 75, 0, v79, 0);
      v75 = *(__int16 *)(v76 + 54);
      goto LABEL_170;
    }
    if ( (*(_WORD *)(*(_QWORD *)(v76 + 8) + 16 * v78 + 14) & 0x60) != 0 )
    {
      v79 = ((*(_WORD *)(*(_QWORD *)(v76 + 8) + 16 * v78 + 14) & 0x20) == 0) + v79 - 1;
      goto LABEL_170;
    }
    v80 = *((int *)v169 + v78);
    if ( (int)v80 < 0 )
    {
      if ( (v245 & 1) != 0 && (int)v78 <= 31 )
      {
        v81 = v202;
        if ( !_bittest(&v81, v78) )
          goto LABEL_178;
      }
      sub_127530(v176, v76, v185, v78, v79, 0.0);
      v238 = 0;
      v75 = *(__int16 *)(v76 + 54);
    }
    else
    {
      v72 = v161;
      if ( v161 )
      {
        if ( v207 != 2 )
          v75 = n;
        sub_E1710((__int64)v176, 94, v180, v80 + v75, v79);
        v75 = *(__int16 *)(v76 + 54);
      }
      else if ( *(_QWORD *)(v10 + 16) )
      {
        sub_127300(v10, *(unsigned __int8 **)&a3[6 * v80 + 2], v79, 0.0);
        v75 = *(__int16 *)(v76 + 54);
      }
    }
LABEL_170:
    ++v79;
    ++v78;
  }
  while ( v75 > (int)v78 );
  v65 = v77;
  v7 = v206;
  v12 = v76;
  v63 = v215;
LABEL_180:
  if ( (*(_BYTE *)(v12 + 48) & 0x60) != 0 )
    sub_1277E0(v10, v226, v12, v72, v73, v74, 0.0);
  if ( (v245 & 1) != 0 )
  {
    sub_E3840((__int64)v176, v12, v226, v72, v73, v74);
    sub_14EA60(v10, (_DWORD)v193, 129, (_DWORD)a3, 1, v12, v171, a5, v65);
    if ( v207 != 2 )
    {
      if ( v182 )
        sub_E1770(v176, 27, v185, v65, v63, v195);
      else
        sub_E1710((__int64)v176, 30, v185, v65, v171);
      if ( *(__int16 *)(v12 + 54) > 0 )
      {
        v162 = a3;
        LODWORD(v86) = v226;
        v87 = v10;
        v88 = v63;
        v89 = 0;
        do
        {
          if ( (*(_WORD *)(*(_QWORD *)(v12 + 8) + 16 * v89 + 14) & 0x60) != 0 )
          {
            LODWORD(v86) = ((*(_WORD *)(*(_QWORD *)(v12 + 8) + 16 * v89 + 14) & 0x20) == 0) + (_DWORD)v86 - 1;
          }
          else if ( *((int *)v169 + v89) < 0 && *(__int16 *)(v12 + 52) != (_DWORD)v89 )
          {
            v208 = v86;
            sub_127530(v176, v12, v185, v89, v86, 0.0);
            LODWORD(v86) = v208;
          }
          v84 = (unsigned int)*(__int16 *)(v12 + 54);
          v86 = (unsigned int)(v86 + 1);
          ++v89;
        }
        while ( (int)v84 > (int)v89 );
        v63 = v88;
        v10 = v87;
        a3 = v162;
      }
      if ( (*(_BYTE *)(v12 + 48) & 0x60) != 0 )
        sub_1277E0(v10, v226, v12, v84, v85, v86, 0.0);
LABEL_184:
      sub_149160(
        v10,
        v12,
        v219,
        v185,
        v210,
        v199,
        v171,
        v236,
        (unsigned __int8)a5,
        v65,
        (__int64)&v246,
        (__int64)v169,
        0);
      if ( v246 || v236 )
      {
        if ( v182 )
          sub_E1770(v176, 27, v185, v65, v63, v195);
        else
          sub_E1710((__int64)v176, 30, v185, v65, v171);
      }
      if ( v223 )
        sub_145FF0(v10, (unsigned __int8 **)v12, v171, 0, (__int64)v169, v236, 0.0);
      sub_12CFE0(v10, v12, v185, v210, v219, -1, 0.0);
      if ( v238 )
        sub_E1710((__int64)v176, 143, v185, 0, 0);
      if ( v223 > 1 || v236 )
        sub_E1710((__int64)v176, 130, v185, 0, 0);
      if ( v223 )
      {
        sub_145FF0(v10, (unsigned __int8 **)v12, 0, v199, (__int64)v169, v236, 0.0);
        if ( v188 == 2 )
          sub_E2980(*(_QWORD *)(v10 + 16), (_BYTE *)(v10 + 30), v12, v185, v210, v199, v219, 6, 0, 0);
        else
          sub_E2980(*(_QWORD *)(v10 + 16), (_BYTE *)(v10 + 30), v12, v185, v210, v199, v219, 4, 0, 0);
        if ( (*(_BYTE *)(*(_QWORD *)v10 + 49LL) & 0x40) != 0 )
          sub_14E0D0(v10, v12, a3, v171, v169, v236);
      }
      else if ( v188 == 2 )
      {
        sub_E2980(*(_QWORD *)(v10 + 16), (_BYTE *)(v10 + 30), v12, v185, v210, v199, v219, 6, 0, 0);
      }
      else
      {
        sub_E2980(*(_QWORD *)(v10 + 16), (_BYTE *)(v10 + 30), v12, v185, v210, v199, v219, 4, 0, 0);
      }
    }
  }
  else if ( v207 != 2 )
  {
    goto LABEL_184;
  }
  if ( v228 )
    sub_E1710((__int64)v176, 86, v228, 1u, 0);
  sub_14EA60(v10, (_DWORD)v193, 129, (_DWORD)a3, 2, v12, v171, a5, v65);
  if ( v188 != 1 )
  {
    sub_E0BB0((__int64)v176, v65);
    if ( v188 == 2 )
      sub_133C90(v234, 0.0);
    else
      sub_E1710((__int64)v176, 38, v180, v231, 0);
  }
  sub_E0BB0((__int64)v176, v222);
  if ( !*(_BYTE *)(v10 + 30) && !*(_QWORD *)(v10 + 168) && !a6 && *(_QWORD *)(v10 + 152) )
    sub_21CEE((__int64 *)v10);
  if ( v228 )
    sub_F1F70((__int64)v176, v228, "rows updated");
LABEL_101:
  v51 = *((_QWORD *)&v247 + 1);
  if ( *((_QWORD *)&v247 + 1) )
  {
    *((_QWORD *)&v247 + 1) = 0;
    *(_QWORD *)(v51 + 360) = v247;
  }
  sub_C9250(v7, v169);
LABEL_2:
  sub_D8260(v7, (_QWORD *)a2);
  if ( a3 )
    sub_D7810(v7, a3);
  if ( a4 )
    sub_D7720(v7, a4);
  return __readfsqword(0x28u) ^ v251;
}
