__int64 __fastcall sub_D3600(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // esi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  unsigned int v35; // ecx
  char v36; // al
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rsi
  __int64 v47; // rax
  unsigned __int64 *v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // rcx
  _BYTE *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rsi
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  _DWORD *v63; // r8
  unsigned int v64; // eax
  int v65; // esi
  int v66; // eax
  char v68; // al
  _DWORD *v69; // rdi
  bool v70; // al
  int v71; // r10d
  _DWORD *v72; // r11
  bool v73; // zf
  int v74; // eax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __m128i v82; // xmm0
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned __int64 v85; // rax
  __m128i v86; // xmm0
  bool v87; // cc
  _BYTE *v88; // rdx
  __int64 v89; // rax
  char v90; // r13
  _QWORD *v91; // rax
  _QWORD *v92; // r12
  char v93; // bl
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // r14
  __int64 v97; // rbp
  _QWORD *v98; // rbx
  _QWORD *v99; // rdx
  unsigned __int64 v100; // rsi
  unsigned __int64 v101; // rax
  int v102; // eax
  int v103; // r10d
  bool v104; // al
  int v105; // r10d
  bool v106; // al
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  __int64 v114; // rsi
  unsigned int v115; // eax
  _DWORD *v116; // rdx
  unsigned int v117; // eax
  __int64 v118; // rbx
  unsigned __int64 v119; // rcx
  __int64 v120; // rsi
  unsigned int v121; // eax
  _DWORD *v122; // rdx
  unsigned int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rdx
  int v129; // r13d
  __int64 v130; // rdi
  int v131; // ebp
  __int64 v132; // r9
  __int64 v133; // r12
  __int64 v134; // rax
  int v135; // r10d
  __int64 v136; // rsi
  int v137; // r10d
  __int64 v138; // rsi
  unsigned int v139; // r14d
  int v140; // r12d
  __int64 v141; // rax
  __int64 v142; // rsi
  _QWORD *v143; // rbx
  char v144; // bp
  unsigned int *v145; // rdx
  __m128i *v146; // r12
  __int64 v147; // rax
  __int64 v148; // rax
  char v149; // r12
  __int64 v150; // rax
  char *v151; // r14
  unsigned __int64 v152; // rdx
  __m128i *v153; // r8
  __int32 v154; // ecx
  __int32 v155; // edx
  __int32 *v156; // rax
  __m128i *v157; // rsi
  int *v158; // r12
  int *v159; // r14
  __int64 v160; // rax
  int v161; // r8d
  __int64 v162; // rbx
  int v163; // r11d
  __int64 v164; // rsi
  int v165; // ebx
  int v166; // r12d
  unsigned __int64 v167; // rax
  __int64 *v168; // rbx
  unsigned int v169; // ecx
  unsigned int v170; // ebp
  __int64 v171; // rax
  int v172; // r13d
  __int64 v173; // r14
  _QWORD *v174; // rax
  __int64 v175; // rdx
  _QWORD *v176; // r12
  unsigned __int64 v177; // rcx
  int v178; // eax
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // rcx
  _DWORD *v182; // rdx
  int v183; // ecx
  __int64 v184; // rdx
  int v185; // r9d
  __int64 v186; // rsi
  _QWORD *v187; // rax
  int v188; // r11d
  int v189; // r10d
  unsigned int *v190; // rdx
  __int64 v191; // r9
  bool v192; // bl
  __int64 v193; // rax
  __int64 v194; // rdi
  __int64 v195; // r12
  __int64 v196; // rbx
  _QWORD *v197; // rbp
  unsigned __int64 v198; // rsi
  unsigned __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rbp
  __int64 v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rbx
  __int64 v207; // rdi
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // [rsp+0h] [rbp-158h]
  char v211; // [rsp+0h] [rbp-158h]
  int v212; // [rsp+0h] [rbp-158h]
  __int64 v213; // [rsp+8h] [rbp-150h]
  unsigned int v214; // [rsp+8h] [rbp-150h]
  int v215; // [rsp+8h] [rbp-150h]
  int v216; // [rsp+8h] [rbp-150h]
  int v217; // [rsp+8h] [rbp-150h]
  int v218; // [rsp+8h] [rbp-150h]
  unsigned int *v219; // [rsp+8h] [rbp-150h]
  __int64 v220; // [rsp+8h] [rbp-150h]
  int v221; // [rsp+8h] [rbp-150h]
  unsigned int v222; // [rsp+8h] [rbp-150h]
  __int64 v223; // [rsp+10h] [rbp-148h]
  unsigned __int64 v224; // [rsp+10h] [rbp-148h]
  __int64 *v225; // [rsp+18h] [rbp-140h]
  int v226; // [rsp+18h] [rbp-140h]
  _QWORD *v227; // [rsp+20h] [rbp-138h]
  char v228; // [rsp+20h] [rbp-138h]
  int v229; // [rsp+28h] [rbp-130h]
  int v230; // [rsp+28h] [rbp-130h]
  bool v231; // [rsp+2Ch] [rbp-12Ch]
  char v232; // [rsp+2Ch] [rbp-12Ch]
  int v233; // [rsp+2Ch] [rbp-12Ch]
  _QWORD *v235; // [rsp+38h] [rbp-120h]
  _DWORD *v236; // [rsp+38h] [rbp-120h]
  unsigned int v237; // [rsp+38h] [rbp-120h]
  int v238; // [rsp+38h] [rbp-120h]
  __int64 v239; // [rsp+38h] [rbp-120h]
  __int64 v240; // [rsp+38h] [rbp-120h]
  char v241; // [rsp+38h] [rbp-120h]
  unsigned __int64 *v242; // [rsp+40h] [rbp-118h]
  __int64 v243; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v244; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v245; // [rsp+40h] [rbp-118h]
  char v246; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v247; // [rsp+40h] [rbp-118h]
  __int64 v249; // [rsp+50h] [rbp-108h]
  int v250; // [rsp+50h] [rbp-108h]
  __int64 *v251; // [rsp+58h] [rbp-100h]
  __int64 *v252; // [rsp+60h] [rbp-F8h]
  char v253; // [rsp+68h] [rbp-F0h]
  __int64 v254; // [rsp+68h] [rbp-F0h]
  unsigned int *v255; // [rsp+70h] [rbp-E8h]
  int v256; // [rsp+70h] [rbp-E8h]
  int v257; // [rsp+78h] [rbp-E0h]
  char v258; // [rsp+78h] [rbp-E0h]
  int v259; // [rsp+7Ch] [rbp-DCh]
  int v260; // [rsp+7Ch] [rbp-DCh]
  __int64 v261; // [rsp+80h] [rbp-D8h]
  int v262; // [rsp+80h] [rbp-D8h]
  unsigned int *v263; // [rsp+88h] [rbp-D0h]
  __int64 v264; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v265; // [rsp+98h] [rbp-C0h]
  __int64 v266; // [rsp+A8h] [rbp-B0h]
  __int64 v267; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v268; // [rsp+B8h] [rbp-A0h]
  __int64 v269; // [rsp+C8h] [rbp-90h]
  __int64 v270; // [rsp+D0h] [rbp-88h]
  __int64 v271; // [rsp+D8h] [rbp-80h]
  __int128 v272; // [rsp+E0h] [rbp-78h]
  __int64 v273; // [rsp+F0h] [rbp-68h]
  __int128 v274; // [rsp+F8h] [rbp-60h]
  char v275; // [rsp+108h] [rbp-50h]
  unsigned __int64 v276; // [rsp+118h] [rbp-40h]

  v276 = __readfsqword(0x28u);
  v231 = 0;
  if ( !*(_BYTE *)(a3 + 320) )
    v231 = (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0;
  v7 = (unsigned __int64)a2;
  v8 = a3;
  v9 = (_QWORD *)(a3 + 296);
  v249 = *(_QWORD *)(a3 + 1504);
  v229 = *(_DWORD *)(v249 + 80);
  v257 = 2 * v229;
  v252 = a2 + 6;
  v251 = a2 + 9;
  v225 = &v264;
LABEL_4:
  sub_CCC50((_QWORD *)v7);
  HIDWORD(v210) = HIDWORD(v7);
  LODWORD(v10) = *(_QWORD *)(a1 + 96);
  v11 = 4LL * ((int)v10 - 1);
  while ( (int)v10 > 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + v11);
    v11 -= 4;
    if ( !sub_5FEB0(v9, v12) )
      goto LABEL_9;
    LODWORD(v10) = v10 - 1;
  }
  LODWORD(v10) = 0;
LABEL_9:
  v13 = *(_QWORD *)(a1 + 120);
  v213 = v7;
  v14 = (int)v13;
  v15 = 4LL * ((int)v13 - 1);
  while ( 1 )
  {
    if ( (int)v14 <= 0 )
    {
      v14 = 0;
      v7 = v213;
      v10 = (int)v10;
      if ( *(_DWORD *)a1 != 3 )
        goto LABEL_14;
      goto LABEL_95;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v15);
    v15 -= 4;
    if ( !sub_5FEB0(v9, v16) )
      break;
    v14 = (int)v14 - 1;
  }
  v7 = v213;
  v10 = (int)v10;
  if ( *(_DWORD *)a1 != 3 )
    goto LABEL_14;
LABEL_95:
  if ( (int)v14 <= (int)v10 )
    v10 = (int)v14;
  else
    v14 = (int)v10;
LABEL_14:
  LODWORD(v267) = -1;
  v17 = *(_QWORD *)(v7 + 56);
  if ( v10 >= v17 )
  {
    if ( v17 >= v10 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v7 + 48);
    v19 = *(_QWORD *)(v7 + 64);
    if ( (unsigned __int64)&v267 < v18 || (unsigned __int64)&v267 >= v18 + 4 * v19 )
    {
      if ( v19 >= v10
        || (v108 = qvector_reserve(), v17 = *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 48) = v108, v18 = v108, v17 < v10) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v18 + 4 * v17++) = v267;
          if ( v10 == v17 )
            break;
          v18 = *(_QWORD *)(v7 + 48);
        }
      }
    }
    else if ( v19 >= v10
           || (v111 = qvector_reserve(), v17 = *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 48) = v111, v18 = v111, v17 < v10) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v18 + 4 * v17++) = -1;
        if ( v10 == v17 )
          break;
        v18 = *(_QWORD *)(v7 + 48);
      }
    }
  }
  *(_QWORD *)(v7 + 56) = v10;
LABEL_23:
  LODWORD(v267) = -1;
  v20 = *(_QWORD *)(v7 + 80);
  if ( v14 < v20 )
  {
LABEL_31:
    *(_QWORD *)(v7 + 80) = v14;
    goto LABEL_32;
  }
  if ( v20 < v14 )
  {
    v21 = *(_QWORD *)(v7 + 72);
    v22 = *(_QWORD *)(v7 + 88);
    if ( (unsigned __int64)&v267 < v21 || (unsigned __int64)&v267 >= v21 + 4 * v22 )
    {
      if ( v22 >= v14
        || (v107 = qvector_reserve(), v20 = *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 72) = v107, v21 = v107, v20 < v14) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v20++) = v267;
          if ( v14 == v20 )
            break;
          v21 = *(_QWORD *)(v7 + 72);
        }
      }
    }
    else if ( v22 >= v14
           || (v110 = qvector_reserve(), v20 = *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 72) = v110, v21 = v110, v20 < v14) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v21 + 4 * v20++) = -1;
        if ( v14 == v20 )
          break;
        v21 = *(_QWORD *)(v7 + 72);
      }
    }
    goto LABEL_31;
  }
LABEL_32:
  if ( !*(_QWORD *)(v8 + 464) )
    goto LABEL_204;
  LODWORD(v210) = 0;
  v23 = 0;
  LODWORD(v213) = -1;
  v227 = v9;
  while ( 1 )
  {
    v24 = *(int *)(*(_QWORD *)(v8 + 456) + 4 * v23);
    LODWORD(v223) = v24;
    v25 = 104 * v24;
    v26 = 104 * v24 + *(_QWORD *)(v8 + 432);
    if ( !a1 || !(unsigned __int8)sub_3695A0(*(_QWORD *)(v8 + 1504), *(unsigned int *)(a1 + 72)) || *(_DWORD *)v26 == 1 )
    {
      v57 = sub_1BE780(v26);
      v30 = v57;
      if ( v57 == -1 || v57 < *(_QWORD *)(v8 + 144) )
        goto LABEL_79;
      goto LABEL_41;
    }
    v27 = *(unsigned int *)(a1 + 72);
    v28 = *(_QWORD *)(v8 + 1504);
    *(_QWORD *)&v268 = a1;
    v267 = (__int64)off_4B05E8;
    *((_QWORD *)&v268 + 1) = v8;
    if ( (unsigned __int8)sub_3695A0(v28, v27) )
    {
      v264 = 32;
      v266 = 0;
      v265 = 0;
      get_stkarg_area_info();
      v29 = *(_QWORD *)(v8 + 144) + v265 - *(int *)(v8 + 120);
    }
    else
    {
      v29 = -1;
    }
    v269 = v29;
    v270 = -1;
    if ( (unsigned int)for_all_arglocs() == -1 )
      break;
    v30 = v270;
    if ( v270 == -1 )
      goto LABEL_79;
LABEL_41:
    v31 = *(_DWORD *)(a1 + 72);
    LODWORD(v264) = 0;
    v214 = v31;
    get_tinfo_size();
    v34 = v264;
    v35 = v214;
    if ( ((unsigned int)v264 & ((_DWORD)v264 - 1)) != 0 )
    {
      if ( !under_debugger )
      {
        interr();
        goto LABEL_497;
      }
LABEL_564:
      BUG();
    }
    if ( (int)v264 <= v257 )
    {
      if ( v229 <= (int)v264 )
      {
        if ( v214 <= 0x10 )
          goto LABEL_168;
        goto LABEL_148;
      }
      if ( v214 > 0x10 )
        goto LABEL_45;
      goto LABEL_165;
    }
    if ( v214 > 0x10 )
    {
      if ( v214 == 256 || v214 == 176 )
      {
        v34 = 2 * v229;
        if ( v229 <= v257 )
          v34 = v229;
        goto LABEL_50;
      }
      goto LABEL_129;
    }
    v238 = v264;
    v102 = getinf();
    if ( v102 != 176 && v102 != 256 )
    {
      v35 = v214;
      v34 = v238;
LABEL_129:
      v216 = v34;
      v237 = v35;
      v68 = getinf_flag();
      v34 = v216;
      if ( v68 )
        goto LABEL_50;
      v34 = 2 * v229;
      if ( v229 <= v257 )
      {
        if ( v237 > 0x10 )
        {
          v34 = 2 * v229;
LABEL_150:
          v215 = v34;
LABEL_48:
          v36 = getinf_flag();
          v34 = v215;
          if ( v36 )
            goto LABEL_50;
          goto LABEL_49;
        }
LABEL_167:
        v34 = 2 * v229;
LABEL_168:
        v218 = v34;
        v84 = getinf();
        v34 = v218;
        v35 = v84;
LABEL_148:
        if ( v35 == 176 || v35 == 256 )
        {
LABEL_49:
          v34 = v229;
          goto LABEL_50;
        }
        goto LABEL_150;
      }
      if ( v237 > 0x10 )
        goto LABEL_47;
      goto LABEL_164;
    }
    if ( v229 <= v257 )
      goto LABEL_167;
LABEL_164:
    v34 = 2 * v229;
LABEL_165:
    v217 = v34;
    v83 = getinf();
    v34 = v217;
    v35 = v83;
LABEL_45:
    if ( v35 != 176 && v35 != 256 )
    {
LABEL_47:
      v215 = v34;
      goto LABEL_48;
    }
LABEL_50:
    v37 = v229;
    if ( v34 <= v229 )
      v37 = v34;
    if ( (*(_BYTE *)(v26 + 27) & 4) != 0 )
      v34 = v37;
    v38 = v25 + *(_QWORD *)(v8 + 432);
    v39 = -v34 & (unsigned __int64)v30;
    if ( *(_DWORD *)v38 == 1 )
    {
      v213 = v25 + *(_QWORD *)(v8 + 432);
      v58 = sub_CCDE0(a1, v8);
      v38 = v213;
      if ( v39 < v58 )
        goto LABEL_98;
    }
    v40 = *(unsigned __int64 **)(v7 + 120);
    if ( !v40 )
    {
      if ( !*(_QWORD *)(v7 + 128) )
      {
        LODWORD(v213) = -1;
        v235 = (_QWORD *)(v7 + 120);
LABEL_158:
        v81 = qalloc();
        v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v81, (__m128i)(unsigned __int64)v81);
        if ( !v81 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v81 + 32) = 0;
        *(_OWORD *)(v81 + 16) = 0;
        *(__m128i *)(v81 + 8) = v82;
        *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_QWORD *)(v7 + 120) = v81;
        *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v81 & 3LL;
        *(__m128i *)(*(_QWORD *)(v7 + 120) + 8LL) = _mm_unpacklo_epi64(
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120),
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120));
        **(_QWORD **)(v7 + 120) &= ~1uLL;
        **(_QWORD **)(v7 + 120) |= 2uLL;
LABEL_73:
        v242 = *(unsigned __int64 **)(v7 + 120);
        v47 = qalloc();
        if ( !v47 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v48 = v242;
        *(_QWORD *)(v47 + 32) = 0;
        *(_OWORD *)v47 = 0;
        *(_OWORD *)(v47 + 16) = 0;
        *(_QWORD *)(v47 + 24) = v39;
        *(_QWORD *)v47 = (unsigned __int64)v242 & 0xFFFFFFFFFFFFFFFCLL;
        v49 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
        *(_QWORD *)v47 = (unsigned __int64)v242 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v49, v49);
        if ( v242 == *(unsigned __int64 **)(v7 + 120) )
        {
LABEL_271:
          *v48 = v47 & 0xFFFFFFFFFFFFFFFCLL | *v48 & 3;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8LL) = v47;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL) = v47;
          v51 = *(_QWORD *)v47 & 2LL;
          *(_QWORD *)v47 &= ~1uLL;
          *(_QWORD *)v47 = v51 | *(_QWORD *)(v7 + 120) & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_77;
        }
        v242[1] = v47;
        v50 = *(_QWORD *)(v7 + 120);
        if ( v242 == *(unsigned __int64 **)(v50 + 8) )
          goto LABEL_178;
        goto LABEL_76;
      }
      v41 = unk_0;
      if ( (unk_0 & 2) == 0 )
        goto LABEL_60;
      goto LABEL_264;
    }
    v41 = *v40;
    v42 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v42 )
    {
      v32 = *(_QWORD *)(v7 + 120);
      if ( (*(_BYTE *)(*v40 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_58;
      do
      {
        v33 = *(_QWORD *)(v42 + 8);
        if ( v39 > *(_QWORD *)(v42 + 24) )
        {
          v42 = *(_QWORD *)(v42 + 16);
        }
        else
        {
          v32 = v42;
          v42 = *(_QWORD *)(v42 + 8);
        }
      }
      while ( (*(_BYTE *)v42 & 2) == 0 );
      if ( v40 == (unsigned __int64 *)v32 )
      {
LABEL_58:
        if ( !*(_QWORD *)(v7 + 128) )
          goto LABEL_72;
        if ( (v41 & 2) == 0 )
          goto LABEL_60;
LABEL_264:
        v44 = v40[2];
        goto LABEL_265;
      }
    }
    else
    {
      v32 = 0;
    }
    if ( v39 == *(_QWORD *)(v32 + 24) )
    {
      v65 = *(_DWORD *)(v32 + 32);
      LODWORD(v213) = v65;
      if ( v65 != -1 )
      {
        v32 = *(_QWORD *)(v8 + 432) + 104LL * v65;
        goto LABEL_116;
      }
      if ( !*(_QWORD *)(v7 + 128) )
      {
        v235 = (_QWORD *)(v7 + 120);
        goto LABEL_73;
      }
      if ( v40 == (unsigned __int64 *)v32 )
      {
        if ( (v41 & 2) != 0 )
        {
          LODWORD(v213) = *(_DWORD *)(v40[2] + 32);
          if ( (_DWORD)v213 == -1 )
          {
LABEL_309:
            v235 = (_QWORD *)(v7 + 120);
LABEL_310:
            v80 = *(_QWORD *)(v7 + 128);
            goto LABEL_172;
          }
LABEL_266:
          v247 = *(unsigned __int64 **)(v7 + 120);
          v240 = v38;
          v106 = sub_CAA60((int *)(*(_QWORD *)(v8 + 432) + 104LL * (int)v213), v38);
          v38 = v240;
          v40 = v247;
          if ( v106 )
          {
            LODWORD(v213) = -1;
            goto LABEL_112;
          }
LABEL_116:
          if ( (*(_BYTE *)(*(_QWORD *)(v8 + 1504) + 48LL) & 0x21) != 0 )
          {
LABEL_119:
            if ( (*(_BYTE *)(v38 + 26) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v32 + 26) & 8) != 0 )
                goto LABEL_123;
              if ( !*(_DWORD *)(v38 + 92) )
              {
                if ( v231 )
                  goto LABEL_123;
                goto LABEL_102;
              }
            }
LABEL_98:
            if ( (_DWORD)v223 == -1 )
              goto LABEL_198;
          }
          else
          {
            v66 = *(_DWORD *)v32;
            if ( *(_DWORD *)v38 != 1 )
            {
              if ( v66 != 1 )
                goto LABEL_119;
LABEL_100:
              if ( v231 || (*(_BYTE *)(v32 + 26) & 8) != 0 )
                goto LABEL_123;
LABEL_102:
              if ( *(_DWORD *)(v32 + 92) )
                goto LABEL_123;
              if ( *(_BYTE *)(v8 + 320) )
              {
                if ( !under_debugger )
                  sub_37CFE0(52089);
                goto LABEL_564;
              }
              v59 = *(unsigned int *)(a1 + 72);
              if ( (_DWORD)v59 != *(_DWORD *)(v8 + 72) || (_DWORD)v59 == 112 && (*(_BYTE *)(v249 + 48) & 8) != 0 )
                return 0;
              v236 = (_DWORD *)v32;
              v60 = sub_3695A0(v249, v59);
              v63 = v236;
              if ( v60 )
              {
                v64 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
                if ( v64 == 64 || v64 == 208 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 936) + 56LL))(*(_QWORD *)(v8 + 936)) )
                  {
                    v63 = v236;
                    if ( *v236 == 1 )
                    {
LABEL_123:
                      v9 = v227;
LABEL_124:
                      if ( !(unsigned __int8)sub_CE3C0(a1, v8, v213) )
                        return 0;
                      goto LABEL_4;
                    }
                  }
                }
              }
              if ( !(unsigned __int8)sub_1E96A0(v8, v59, v61, v62, v63) )
              {
                if ( !under_debugger )
                  sub_37CFE0(52020);
                goto LABEL_564;
              }
              v40 = *(unsigned __int64 **)(v7 + 120);
LABEL_112:
              v235 = (_QWORD *)(v7 + 120);
              if ( !v40 )
                goto LABEL_158;
              goto LABEL_310;
            }
            if ( v66 == 1 )
              goto LABEL_119;
            if ( (_DWORD)v223 == -1 )
            {
LABEL_198:
              LODWORD(v213) = -1;
              v40 = *(unsigned __int64 **)(v7 + 120);
              goto LABEL_112;
            }
          }
          LODWORD(v213) = v223;
          v32 = v25 + *(_QWORD *)(v8 + 432);
          goto LABEL_100;
        }
LABEL_60:
        v43 = v40[1];
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
          v44 = v41 & 0xFFFFFFFFFFFFFFFCLL;
          v45 = *(_QWORD *)v44;
          if ( (*(_QWORD *)v44 & 2) == 0 )
          {
            v32 = *(_QWORD *)(v7 + 120);
            v46 = v44;
            if ( *(unsigned __int64 **)(v44 + 8) == v40 )
            {
              do
              {
                v32 = v46;
                v44 = v45 & 0xFFFFFFFFFFFFFFFCLL;
                v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v45 & 2) != 0 )
                  break;
                v46 = v44;
              }
              while ( *(_QWORD *)(v44 + 8) == v32 );
            }
          }
        }
        else
        {
          do
          {
            v44 = v43;
            v43 = *(_QWORD *)(v43 + 16);
          }
          while ( (*(_BYTE *)v43 & 2) == 0 );
        }
LABEL_265:
        LODWORD(v213) = *(_DWORD *)(v44 + 32);
        if ( (_DWORD)v213 != -1 )
          goto LABEL_266;
        goto LABEL_112;
      }
    }
    else if ( !*(_QWORD *)(v7 + 128) )
    {
LABEL_72:
      LODWORD(v213) = -1;
      v235 = (_QWORD *)(v7 + 120);
      goto LABEL_73;
    }
    v69 = (_DWORD *)v38;
    v244 = *(unsigned __int64 **)(v7 + 120);
    v70 = sub_CAA60((int *)v38, *(_QWORD *)(v8 + 432) + 104LL * *(int *)(v32 + 32));
    v40 = v244;
    v38 = (__int64)v69;
    v73 = !v70;
    v74 = -1;
    if ( v73 )
      v74 = v71;
    LODWORD(v213) = v74;
    if ( v244[1] != v32 )
    {
      if ( (*(_QWORD *)v32 & 2) != 0 )
      {
        v76 = *(_QWORD *)(v32 + 16);
      }
      else
      {
        v75 = *(_QWORD *)(v32 + 8);
        if ( (*(_BYTE *)v75 & 2) != 0 )
        {
          v76 = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFCLL;
          v77 = *(_QWORD *)v76;
          if ( (*(_QWORD *)v76 & 2) == 0 )
          {
            while ( *(_QWORD *)(v76 + 8) == v32 )
            {
              v78 = v77 & 0xFFFFFFFFFFFFFFFCLL;
              v77 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v77 & 2) != 0 )
              {
                v76 = v78;
                if ( v244 != (unsigned __int64 *)v78 )
                  goto LABEL_259;
                goto LABEL_144;
              }
              v32 = v76;
              v76 = v78;
            }
          }
        }
        else
        {
          do
          {
            v76 = v75;
            v109 = *(_QWORD *)(v75 + 16);
            if ( (*(_BYTE *)v109 & 2) != 0 )
              break;
            v76 = v109;
            v75 = *(_QWORD *)(v109 + 16);
          }
          while ( (*(_BYTE *)v75 & 2) == 0 );
        }
      }
      if ( v244 != (unsigned __int64 *)v76 )
      {
LABEL_259:
        v103 = *(_DWORD *)(v76 + 32);
        if ( v103 != -1 )
        {
          v239 = v38;
          v104 = sub_CAA60((int *)(v33 + 104LL * v103), v38);
          v38 = v239;
          if ( !v104 )
          {
            LODWORD(v213) = v105;
            goto LABEL_116;
          }
          v79 = (int)v213;
          v40 = v244;
          if ( (_DWORD)v213 == -1 )
            goto LABEL_309;
LABEL_262:
          v32 = v33 + 104 * v79;
          goto LABEL_116;
        }
      }
LABEL_144:
      v79 = (int)v213;
      if ( (_DWORD)v213 == -1 )
      {
        v235 = (_QWORD *)(v7 + 120);
        v80 = *(_QWORD *)(v7 + 128);
        goto LABEL_172;
      }
      goto LABEL_262;
    }
    if ( *v69 == 1 && *v72 == 1 )
    {
      if ( !under_debugger )
        sub_37CFE0(52213);
      goto LABEL_564;
    }
    LODWORD(v213) = -1;
    v80 = *(_QWORD *)(v7 + 128);
    v235 = (_QWORD *)(v7 + 120);
LABEL_172:
    if ( !v80 )
      goto LABEL_73;
    v51 = 1;
    v85 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v85 & 2) == 0 )
    {
      v52 = (_BYTE *)(v85 + 24);
      v87 = v39 <= *(_QWORD *)(v85 + 24);
      if ( v39 < *(_QWORD *)(v85 + 24) )
      {
LABEL_180:
        v88 = *(_BYTE **)(v85 + 8);
        v51 = 1;
        if ( (*v88 & 2) == 0 )
          goto LABEL_181;
LABEL_184:
        v40 = (unsigned __int64 *)v85;
        goto LABEL_174;
      }
      while ( !v87 )
      {
        v88 = *(_BYTE **)(v85 + 16);
        v51 = 0;
        if ( (*v88 & 2) != 0 )
          goto LABEL_184;
LABEL_181:
        v85 = (unsigned __int64)v88;
        v52 = v88 + 24;
        v87 = v39 <= *(_QWORD *)v52;
        if ( v39 < *(_QWORD *)v52 )
          goto LABEL_180;
      }
      if ( v85 )
        goto LABEL_78;
      v40 = nullptr;
    }
LABEL_174:
    v253 = v51;
    v245 = v40;
    v47 = qalloc();
    if ( !v47 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v48 = v245;
    *(_QWORD *)(v47 + 32) = 0;
    *(_OWORD *)v47 = 0;
    *(_OWORD *)(v47 + 16) = 0;
    *(_QWORD *)(v47 + 24) = v39;
    *(_QWORD *)v47 = (unsigned __int64)v245 & 0xFFFFFFFFFFFFFFFCLL;
    v86 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
    *(_QWORD *)v47 = (unsigned __int64)v245 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v86, v86);
    if ( *(unsigned __int64 **)(v7 + 120) == v245 )
      goto LABEL_271;
    if ( !v253 )
    {
      v245[2] = v47;
      v112 = *(_QWORD *)(v7 + 120);
      if ( *(unsigned __int64 **)(v112 + 16) == v245 )
        *(_QWORD *)(v112 + 16) = v47;
      goto LABEL_76;
    }
    v245[1] = v47;
    v50 = *(_QWORD *)(v7 + 120);
    if ( *(unsigned __int64 **)(v50 + 8) == v245 )
LABEL_178:
      *(_QWORD *)(v50 + 8) = v47;
LABEL_76:
    v243 = v47;
    sub_D3220(v235, (__int64 *)v47);
    v47 = v243;
LABEL_77:
    ++*(_QWORD *)(v7 + 128);
    v52 = (_BYTE *)(v47 + 24);
LABEL_78:
    *((_DWORD *)v52 + 2) = v223;
    v53 = *(int *)(v26 + 88);
    v267 = v39;
    *(_QWORD *)&v268 = v53;
    sub_3112F0(v7 + 96, &v267, v52, v51, v32, v33, v210, v213, v223, v225);
LABEL_79:
    if ( (get_tinfo_property() & 0xF) == 9 && (*(_BYTE *)(v26 + 27) & 4) == 0 )
      sub_5F710((__int64 *)(v7 + 32), v210);
    if ( *(_DWORD *)v26 == 1 )
    {
      sub_5F710((__int64 *)v7, v210);
    }
    else
    {
      v54 = sub_CEC00(v7, a1, (_DWORD *)v26, *(unsigned int *)(v26 + 88), v210);
      if ( v54 == -1 )
        return 0;
      if ( v54 == 1 )
      {
        v124 = v25;
        v9 = v227;
        if ( !v231 )
        {
          v125 = v124 + *(_QWORD *)(v8 + 432);
          if ( (*(_BYTE *)(v125 + 26) & 8) == 0 && !*(_DWORD *)(v125 + 92) )
            return 0;
        }
        goto LABEL_202;
      }
      if ( v231
        && !(unsigned __int8)sub_1BE390(v26, 0, 0, v55, v56)
        && !(unsigned __int8)sub_CFAC0(a1, v8, (_DWORD *)v26) )
      {
        v9 = v227;
        goto LABEL_202;
      }
      if ( ((*(_DWORD *)v26 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)v26 - 3) > 1 )
        {
          if ( !under_debugger )
            sub_37CFE0(51619);
          goto LABEL_564;
        }
      }
      else
      {
        sub_5F710((__int64 *)(v7 + 16), v210);
      }
    }
    LODWORD(v210) = v210 + 1;
    v23 = (int)v210;
    if ( (unsigned __int64)(int)v210 >= *(_QWORD *)(v8 + 464) )
    {
      v9 = v227;
      goto LABEL_203;
    }
  }
  v9 = v227;
  if ( !v231 || *(_DWORD *)v26 == 1 )
    return 0;
LABEL_202:
  LODWORD(v213) = v223;
LABEL_203:
  if ( (_DWORD)v213 != -1 )
    goto LABEL_124;
LABEL_204:
  v246 = *(_BYTE *)(a3 + 320);
  if ( v246 )
  {
    v113 = a2[7];
    v114 = a2[6];
    v115 = v113 - 1;
    if ( (int)v113 - 1 < 0 )
    {
LABEL_443:
      if ( v114 )
      {
        a2[7] = 0;
        qfree();
        a2[6] = 0;
        a2[8] = 0;
      }
    }
    else
    {
      v116 = (_DWORD *)(v114 + 4LL * v115);
      while ( *v116 == -1 )
      {
        --v115;
        --v116;
        if ( v115 == -1 )
          goto LABEL_443;
      }
      v117 = v115 + 1;
      v118 = (int)v117;
      if ( v113 < (int)v117 )
      {
        if ( a2[8] < (unsigned __int64)(int)v117 )
        {
          v114 = qvector_reserve();
          a2[6] = v114;
          v113 = a2[7];
        }
        memset((void *)(v114 + 4 * v113), 0, 4 * (v118 - v113));
        a2[7] = v118;
      }
      else if ( v113 != v117 )
      {
        a2[7] = (int)v117;
      }
    }
    v119 = a2[10];
    v120 = a2[9];
    v121 = v119 - 1;
    if ( (int)v119 - 1 >= 0 )
    {
      v122 = (_DWORD *)(v120 + 4LL * v121);
      do
      {
        if ( *v122 != -1 )
        {
          v123 = v121 + 1;
          v8 = (int)v123;
          if ( v119 < (int)v123 )
          {
            if ( a2[11] < (unsigned __int64)(int)v123 )
            {
              v120 = qvector_reserve();
              a2[9] = v120;
              v119 = a2[10];
            }
            memset((void *)(v120 + 4 * v119), 0, 4 * (v8 - v119));
          }
          else if ( v119 == v123 )
          {
            return 1;
          }
          goto LABEL_306;
        }
        --v121;
        --v122;
      }
      while ( v121 != -1 );
    }
    if ( v120 )
    {
      a2[10] = 0;
      qfree();
      a2[9] = 0;
      a2[11] = 0;
    }
    return 1;
  }
  v250 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a1 != 5 )
  {
    v89 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v89 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_207;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v89 + 112) + 200LL))(
           *(_QWORD *)(v89 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v178 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
               **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) > 1u
        && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v178 )
      {
        goto LABEL_430;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) <= 1u
        || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
      {
        goto LABEL_207;
      }
LABEL_430:
      v178 = round_down_power2();
    }
    if ( v178 <= 7 && (unsigned __int64)a2[10] > 1 )
    {
      v179 = 1;
      v180 = 1;
      do
      {
        v181 = a2[9];
        v182 = (_DWORD *)(v181 + 4 * v180);
        if ( *v182 == -1 )
        {
          v183 = *(_DWORD *)(v181 + 4LL * (v179 - 1));
          if ( v183 != -1 )
            *v182 = v183;
        }
        v179 += 2;
        v180 = v179;
      }
      while ( v179 < (unsigned __int64)a2[10] );
    }
    goto LABEL_207;
  }
  v126 = a2[10];
  v230 = a2[7];
  LODWORD(v127) = v126;
  if ( !v126 )
  {
    v241 = 0;
    v129 = -1;
    v130 = *(_QWORD *)(a3 + 1496);
    v254 = *(_QWORD *)(a3 + 1504);
    if ( (*(_BYTE *)(v130 + 606) & 0x10) != 0 )
      goto LABEL_324;
    v228 = 0;
    v267 = 0;
    v268 = 0;
    goto LABEL_516;
  }
  v128 = a2[9];
  while ( 1 )
  {
    v129 = *(_DWORD *)(v128 + 4 * v126 - 4);
    if ( v129 != -1 )
      break;
    a2[10] = --v126;
    if ( !v126 )
      goto LABEL_322;
  }
  v129 = v126 - 1;
  LOBYTE(v126) = (int)v126 > 0;
LABEL_322:
  v241 = (v230 > 0) & v126;
  v254 = *(_QWORD *)(a3 + 1504);
  v258 = *(_BYTE *)(a3 + 320);
  if ( v258 )
  {
    v228 = 0;
    v258 = 0;
  }
  else
  {
    v130 = *(_QWORD *)(a3 + 1496);
    v228 = 0;
    if ( (*(_BYTE *)(v130 + 606) & 0x10) != 0 )
    {
LABEL_324:
      if ( *(_DWORD *)(a3 + 792)
        && (unsigned int)(**(_DWORD **)(a3 + 432) - 3) <= 1
        && (unsigned __int8)sub_36EBC0(v130, *(_QWORD *)(a3 + 40), &v267)
        && (v267 & 0xFFFFFFFD) == 1
        && (v205 = sub_1C9B60(a3)) != 0
        && !*(_DWORD *)(v205 + 112)
        && (v206 = (int)sub_EE1C0(a3), v206 != *(_QWORD *)(a3 + 144)) )
      {
        v207 = *(_QWORD *)(a3 + 432) + 104LL * (*(_DWORD *)(a3 + 792) - 1);
        v258 = v206 > (int)sub_1BE840(v207, *(unsigned int *)(v207 + 88));
      }
      else
      {
        v258 = 0;
      }
      v228 = 1;
    }
  }
  v267 = 0;
  v268 = 0;
  if ( !v241 )
  {
    v127 = a2[10];
LABEL_516:
    v212 = 0;
    v166 = *(_DWORD *)(a1 + 40) - ((v127 + 1) & 0xFFFFFFFE);
    v167 = 0;
    if ( v166 <= 0 )
      goto LABEL_393;
    goto LABEL_401;
  }
  v212 = 0;
  v131 = 0;
  while ( 1 )
  {
    v224 = v131;
    v139 = *(_DWORD *)(a2[9] + 4LL * v131);
    if ( v139 == -1 )
    {
      if ( (v131 & 1) == 0 )
      {
        v140 = *(_DWORD *)(a2[6] + 4LL * v212);
        if ( v140 != -1 )
        {
          v141 = v268;
          v142 = v267;
          if ( *((_QWORD *)&v268 + 1) < (unsigned __int64)(v268 + 1) )
          {
            v267 = qvector_reserve();
            v142 = v267;
            v141 = v268;
          }
          *(_DWORD *)(v142 + 4 * v141) = v140;
          *(_QWORD *)&v268 = v268 + 1;
        }
        ++v212;
      }
      ++v131;
      goto LABEL_339;
    }
    v132 = v212;
    v133 = 4LL * v212;
    v134 = v268;
    v135 = *(_DWORD *)(a2[6] + v133);
    if ( v135 != -1 )
    {
      v136 = v267;
      if ( *((_QWORD *)&v268 + 1) < (unsigned __int64)(v268 + 1) )
      {
        v221 = *(_DWORD *)(a2[6] + 4LL * v212);
        v267 = qvector_reserve();
        v136 = v267;
        v132 = v212;
        v134 = v268;
        v135 = v221;
      }
      *(_DWORD *)(v136 + 4 * v134) = v135;
      v134 = v268 + 1;
      *(_QWORD *)&v268 = v268 + 1;
    }
    v226 = v212 % 2;
    if ( v131 >= v129 )
    {
      if ( v134 )
      {
LABEL_356:
        v232 = 0;
        goto LABEL_357;
      }
LABEL_355:
      ++v131;
      v138 = a2[6];
      goto LABEL_338;
    }
    v137 = v131 + 1;
    if ( v139 == *(_DWORD *)(a2[9] + 4LL * (v131 + 1)) )
      break;
    if ( v134 )
      goto LABEL_356;
    ++v131;
    v138 = a2[6];
LABEL_338:
    ++v212;
    *(_DWORD *)(v138 + v133) = v139;
LABEL_339:
    if ( v129 < v131 || v212 >= v230 )
    {
      v166 = *(_DWORD *)(a1 + 40) - ((a2[10] + 1) & 0xFFFFFFFE);
      if ( v166 <= 0 )
        goto LABEL_393;
      if ( (_QWORD)v268 )
      {
        if ( !under_debugger )
          sub_37CFE0(52424);
        goto LABEL_564;
      }
      v167 = v212;
LABEL_401:
      v168 = a2 + 4;
      if ( v167 < a2[7] )
      {
        while ( 1 )
        {
          v170 = *(_DWORD *)(a2[6] + 4 * v167);
          if ( v170 != -1 )
          {
            if ( !sub_5FEB0(v168, v170) )
              goto LABEL_393;
            v171 = sub_1386C0(a3, v170);
            v172 = *(_DWORD *)(v171 + 88);
            v173 = v171;
            if ( *(_QWORD *)(a1 + 120) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL)
                                                                     + 200LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                     **(unsigned int **)(a1 + 112)) )
              {
                v169 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                         *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                         **(unsigned int **)(a1 + 112));
              }
              else
              {
                v169 = 8;
              }
              if ( *(_QWORD *)(a1 + 120) > 1u
                && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v169 )
              {
                v169 = round_down_power2();
              }
            }
            else
            {
              v169 = 8;
            }
            if ( v172 / (int)v169 > v166 )
              goto LABEL_393;
            if ( (*(_BYTE *)(v173 + 24) & 0x40) == 0
              && (unsigned __int8)sub_1EA2C0(v173, v254, *(unsigned int *)(v173 + 88), 2) )
            {
              sub_5F8C0(v168, v170);
              goto LABEL_393;
            }
            if ( !v228 )
              goto LABEL_467;
            sub_CAEE0(a2, a3, v170);
          }
          v167 = ++v212;
          if ( v212 >= (unsigned __int64)a2[7] )
            goto LABEL_393;
        }
      }
      if ( v267 )
        qfree();
      goto LABEL_207;
    }
  }
  v161 = v212 + 1;
  v162 = v212 + 1;
  v163 = *(_DWORD *)(a2[6] + 4 * v162);
  if ( v163 != -1 )
  {
    v164 = v267;
    if ( *((_QWORD *)&v268 + 1) < (unsigned __int64)(v134 + 1) )
    {
      v259 = *(_DWORD *)(a2[6] + 4LL * (v212 + 1));
      v261 = v132;
      v267 = qvector_reserve();
      v164 = v267;
      v163 = v259;
      v134 = v268;
      v132 = v261;
      v161 = v212 + 1;
      v137 = v131 + 1;
    }
    *(_DWORD *)(v164 + 4 * v134) = v163;
    v134 = v268 + 1;
    *(_QWORD *)&v268 = v268 + 1;
  }
  if ( v226 == 1 )
  {
    v212 += 2;
    v184 = a2[6];
    v185 = *(_DWORD *)(v184 + 4LL * v212);
    if ( v185 == -1 )
    {
      if ( v134 )
        goto LABEL_442;
    }
    else
    {
      v186 = v267;
      if ( *((_QWORD *)&v268 + 1) < (unsigned __int64)(v134 + 1) )
      {
        v256 = *(_DWORD *)(v184 + 4LL * v212);
        v233 = v137;
        v267 = qvector_reserve();
        v186 = v267;
        v185 = v256;
        v134 = v268;
        v137 = v233;
      }
      *(_DWORD *)(v186 + 4 * v134) = v185;
      v73 = (_QWORD)v268 == -1;
      v134 = v268 + 1;
      *(_QWORD *)&v268 = v268 + 1;
      if ( !v73 )
        goto LABEL_442;
      v184 = a2[6];
    }
    v160 = v133;
    *(_DWORD *)(v184 + 4 * v162) = v139;
    v133 = 4LL * v212;
    v131 = v137;
    goto LABEL_379;
  }
  if ( !v134 )
  {
    v133 = 4LL * (v212 + 1);
    v212 = v161;
    v131 = v137;
    *(_DWORD *)(a2[6] + 4 * v132) = v139;
    goto LABEL_355;
  }
  v212 = v161;
LABEL_442:
  v232 = v241;
LABEL_357:
  v145 = (unsigned int *)v267;
  v146 = (__m128i *)(v267 + 4 * v134);
  if ( (__m128i *)v267 == v146 )
  {
LABEL_366:
    v150 = 4 * v268;
    v151 = &v146->m128i_i8[4 * v268];
    if ( v151 == (char *)v146 )
    {
LABEL_376:
      ++v131;
      *(_QWORD *)&v268 = 0;
      v133 = 4LL * v212;
      v138 = a2[6];
      v139 = *(_DWORD *)(a2[9] + 4 * v224);
      if ( !v232 )
        goto LABEL_338;
      *(_DWORD *)(v138 + 4LL * (v212 - 1)) = v139;
      if ( v226 != 1 )
        goto LABEL_355;
      v160 = 4LL * (v212 - 2);
LABEL_379:
      *(_DWORD *)(a2[6] + v160) = -1;
      goto LABEL_355;
    }
    if ( v150 >> 2 )
    {
      _BitScanReverse64(&v152, v150 >> 2);
      v220 = 4 * v268;
      sub_CA880(v146, &v146->m128i_i32[v268], 2LL * (int)(63 - (v152 ^ 0x3F)));
      if ( v220 > 64 )
      {
        sub_CA7C0(v146->m128i_i8, v146[4].m128i_i8);
        v153 = v146 + 4;
        do
        {
          v154 = v153->m128i_i32[0];
          v155 = v153[-1].m128i_i32[3];
          v156 = &v153[-1].m128i_i32[3];
          if ( v153->m128i_i32[0] >= v155 )
          {
            v157 = v153;
          }
          else
          {
            do
            {
              v156[1] = v155;
              v157 = (__m128i *)v156;
              v155 = *--v156;
            }
            while ( v154 < v155 );
          }
          v153 = (__m128i *)((char *)v153 + 4);
          v157->m128i_i32[0] = v154;
        }
        while ( v151 != (char *)v153 );
LABEL_373:
        v158 = (int *)(v267 + 4 * v268);
        if ( (int *)v267 != v158 )
        {
          v159 = (int *)v267;
          do
            sub_CAEE0(a2, a3, *v159++);
          while ( v158 != v159 );
        }
        goto LABEL_376;
      }
    }
    else
    {
      sub_CA880(v146, &v146->m128i_i32[v268], -2);
    }
    sub_CA7C0(v146->m128i_i8, v151);
    goto LABEL_373;
  }
  while ( 1 )
  {
    v219 = v145;
    v147 = sub_1386C0(a3, *v145);
    if ( (*(_BYTE *)(v147 + 26) & 8) == 0 && !*(_DWORD *)(v147 + 92) )
      break;
    v145 = v219 + 1;
    if ( v146 == (__m128i *)(v219 + 1) )
      goto LABEL_365;
  }
  v148 = sub_1386C0(a3, v139);
  if ( (*(_BYTE *)(v148 + 26) & 8) != 0 || *(_DWORD *)(v148 + 92) )
  {
LABEL_390:
    if ( v131 % 2 == 1 )
    {
      v165 = v131 - 1;
      if ( v139 == *(_DWORD *)(a2[9] + 4LL * (v131 - 1)) )
      {
        v202 = sub_1386C0(a3, v139);
        if ( ((*(_BYTE *)(v202 + 26) & 8) != 0 || *(_DWORD *)(v202 + 92))
          && v258
          && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v139) < *(_DWORD *)(a3 + 792) )
        {
          v203 = sub_1386C0(a3, v139);
          if ( *(_QWORD *)(a1 + 120) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                   **(unsigned int **)(a1 + 112)) )
            {
              v204 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112));
            }
            else
            {
              v204 = 8;
            }
            if ( *(_QWORD *)(a1 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v204 )
            {
              v204 = (unsigned int)round_down_power2();
            }
          }
          else
          {
            v204 = 8;
          }
          if ( (unsigned __int8)sub_1EA2C0(v203, v254, v204, 3) )
          {
            sub_7D400(v251, v224);
            goto LABEL_393;
          }
        }
        v131 = v165;
      }
    }
    sub_CAEE0(a2, a3, v139);
    sub_7D400(v251, v131);
LABEL_393:
    if ( v267 )
    {
      *(_QWORD *)&v268 = 0;
      qfree();
    }
LABEL_207:
    if ( ((v250 & 0xFFFFFFF0) == 0x40 || (v250 & 0xFFFFFFF0) == 0xD0)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 936) + 56LL))(*(_QWORD *)(a3 + 936)) )
    {
      return 1;
    }
    if ( *(_DWORD *)a1 == 6 )
    {
      if ( (unsigned __int8)sub_5FE00(a2) )
        sub_CCB80(v252);
      if ( !(unsigned __int8)sub_5FD00(a2, a2 + 4) )
        sub_CCB80(v251);
      return 1;
    }
    v90 = *(_DWORD *)a1 == 2 || (unsigned int)(*(_DWORD *)a1 - 4) <= 1;
    if ( v90 )
    {
      if ( (unsigned __int8)sub_5FE00(a2) )
        goto LABEL_349;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v91 = (_QWORD *)a2[15];
        if ( v91 )
        {
          if ( a2[16] )
          {
            v92 = (_QWORD *)v91[1];
            if ( v91 != v92 )
              goto LABEL_216;
          }
        }
LABEL_349:
        v143 = a2 + 4;
        sub_5FDA0(a2, a2 + 4);
        v246 = v90;
LABEL_350:
        sub_CCB80(v252);
        v144 = v246;
LABEL_351:
        if ( (unsigned __int8)sub_5FD00(a2, v143) != 1 || v144 )
          sub_CCB80(v251);
LABEL_244:
        if ( *(_DWORD *)a1 == 3 )
        {
          LODWORD(v267) = -1;
          v8 = a2[7];
          v7 = a2[10];
          if ( v8 < v7 )
          {
            v100 = a2[6];
            v101 = a2[8];
            if ( (unsigned __int64)&v267 < v100 || (unsigned __int64)&v267 >= v100 + 4 * v101 )
            {
              if ( v101 >= v7 || (v201 = qvector_reserve(), v100 = v201, v8 = a2[7], a2[6] = v201, v8 < v7) )
              {
                while ( 1 )
                {
                  *(_DWORD *)(v100 + 4 * v8++) = v267;
                  if ( v7 == v8 )
                    break;
                  v100 = a2[6];
                }
              }
            }
            else if ( v101 >= v7 || (v200 = qvector_reserve(), v100 = v200, v8 = a2[7], a2[6] = v200, v8 < v7) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v100 + 4 * v8++) = -1;
                if ( v7 == v8 )
                  break;
                v100 = a2[6];
              }
            }
            a2[7] = v7;
            return 1;
          }
LABEL_497:
          if ( v7 >= v8 )
            return 1;
          v198 = a2[9];
          v199 = a2[11];
          if ( (unsigned __int64)&v267 < v198 || (unsigned __int64)&v267 >= v198 + 4 * v199 )
          {
            if ( v199 >= v8 || (v209 = qvector_reserve(), v198 = v209, v7 = a2[10], a2[9] = v209, v7 < v8) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v198 + 4 * v7++) = v267;
                if ( v8 == v7 )
                  break;
                v198 = a2[9];
              }
            }
          }
          else if ( v199 >= v8 || (v208 = qvector_reserve(), v198 = v208, v7 = a2[10], a2[9] = v208, v7 < v8) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v198 + 4 * v7++) = -1;
              if ( v8 == v7 )
                break;
              v198 = a2[9];
            }
          }
LABEL_306:
          a2[10] = v8;
          return 1;
        }
        return 1;
      }
LABEL_493:
      v143 = a2 + 4;
      v144 = sub_5FDA0(a2, a2 + 4);
      if ( v144 )
        goto LABEL_350;
      goto LABEL_351;
    }
    v90 = sub_5FE00(a2);
    if ( !v90 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v187 = (_QWORD *)a2[15];
        if ( v187 )
        {
          if ( a2[16] )
          {
            v92 = (_QWORD *)v187[1];
            if ( v92 != v187 )
            {
LABEL_216:
              v93 = v250;
              if ( v250 == 192 || (v250 & 0xFFFFFF0F) != 0 )
                v93 = -64;
              while ( (get_tinfo_property() & 0x2F) == 0xD )
              {
                v267 = 0;
                v269 = 0;
                v270 = 0;
                v271 = 0;
                v273 = 0;
                v268 = 0;
                v272 = 0;
                v274 = 0;
                if ( v250 == 192 || (v250 & 0xFFFFFF0F) != 0 )
                  HIDWORD(v269) = v250;
                v275 = v93;
                v267 = qvector_reserve();
                v94 = 80 * v268 + v267;
                *(_DWORD *)v94 = 0;
                *(_QWORD *)(v94 + 8) = 0;
                *(_QWORD *)(v94 + 16) = 0;
                *(_QWORD *)(v94 + 40) = 0;
                *(_QWORD *)(v94 + 64) = 0;
                *(_DWORD *)(v94 + 72) = 0;
                *(_OWORD *)(v94 + 24) = 0;
                *(_OWORD *)(v94 + 48) = 0;
                *(_QWORD *)&v268 = v268 + 1;
                copy_tinfo_t();
                v264 = 1;
                copy_tinfo_t();
                clear_tinfo_t();
                if ( !(unsigned __int8)calc_arglocs() || *(_DWORD *)v267 != 1 )
                {
                  if ( v273 )
                  {
                    *(_QWORD *)&v274 = 0;
                    qfree();
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v194 = v267;
                  if ( v267 )
                  {
                    v195 = v268;
                    v196 = 0;
                    if ( (_QWORD)v268 )
                    {
                      do
                      {
                        v197 = (_QWORD *)(v194 + 80 * v196);
                        clear_tinfo_t();
                        if ( v197[5] )
                        {
                          v197[6] = 0;
                          qfree();
                        }
                        if ( v197[2] )
                        {
                          v197[3] = 0;
                          qfree();
                        }
                        ++v196;
                        cleanup_argloc();
                        v194 = v267;
                      }
                      while ( v195 != v196 );
                    }
                    *(_QWORD *)&v268 = 0;
                    qfree();
                  }
                  break;
                }
                if ( v273 )
                {
                  *(_QWORD *)&v274 = 0;
                  qfree();
                }
                cleanup_argloc();
                clear_tinfo_t();
                v95 = v267;
                if ( v267 )
                {
                  v96 = v268;
                  if ( (_QWORD)v268 )
                  {
                    v211 = v93;
                    v97 = 0;
                    do
                    {
                      v98 = (_QWORD *)(v95 + 80 * v97);
                      clear_tinfo_t();
                      if ( v98[5] )
                      {
                        v98[6] = 0;
                        qfree();
                      }
                      if ( v98[2] )
                      {
                        v98[3] = 0;
                        qfree();
                      }
                      ++v97;
                      cleanup_argloc();
                      v95 = v267;
                    }
                    while ( v96 != v97 );
                    v93 = v211;
                  }
                  *(_QWORD *)&v268 = 0;
                  qfree();
                }
                if ( (*v92 & 2) == 0 )
                {
                  v99 = (_QWORD *)v92[2];
                  if ( (*(_BYTE *)v99 & 2) != 0 )
                  {
                    v174 = (_QWORD *)(*v92 & 0xFFFFFFFFFFFFFFFCLL);
                    v175 = *v174;
                    if ( (*v174 & 2) != 0 || v92 != (_QWORD *)v174[2] )
                    {
LABEL_421:
                      v92 = v174;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v176 = v174;
                        v177 = v175 & 0xFFFFFFFFFFFFFFFCLL;
                        v175 = *(_QWORD *)(v175 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v175 & 2) != 0 )
                          break;
                        v174 = (_QWORD *)v177;
                        if ( v176 != *(_QWORD **)(v177 + 16) )
                          goto LABEL_421;
                      }
                      v92 = (_QWORD *)v177;
                    }
                  }
                  else
                  {
                    do
                    {
                      v92 = v99;
                      v99 = (_QWORD *)v99[1];
                    }
                    while ( (*(_BYTE *)v99 & 2) == 0 );
                  }
                }
                if ( (_QWORD *)a2[15] == v92 )
                {
                  if ( v90 )
                    goto LABEL_349;
                  goto LABEL_240;
                }
              }
              if ( !v90 )
                goto LABEL_459;
              goto LABEL_493;
            }
          }
        }
        goto LABEL_240;
      }
LABEL_459:
      if ( (unsigned __int8)sub_5FE00(a2) )
LABEL_241:
        sub_CCB80(v252);
      if ( a2[9] )
      {
        a2[10] = 0;
        qfree();
        a2[9] = 0;
        a2[11] = 0;
      }
      goto LABEL_244;
    }
LABEL_240:
    sub_5FE00(a2);
    goto LABEL_241;
  }
  if ( v228 )
  {
    v149 = v131 != v129;
    if ( v258 )
    {
      v188 = *(_DWORD *)(a3 + 792);
      v189 = *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v139);
      v190 = (unsigned int *)v267;
      v191 = v267 + 4 * v268;
      v192 = v189 >= v188;
      if ( v267 == v191 )
      {
LABEL_466:
        v149 |= v192;
      }
      else
      {
        while ( 1 )
        {
          v263 = (unsigned int *)v191;
          v262 = v188;
          v260 = v189;
          v255 = v190;
          v222 = *v190;
          v193 = sub_1386C0(a3, *v190);
          v189 = v260;
          v188 = v262;
          v191 = (__int64)v263;
          if ( (*(_BYTE *)(v193 + 26) & 8) == 0
            && !*(_DWORD *)(v193 + 92)
            && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v222) >= *(_DWORD *)(a3 + 792) )
          {
            break;
          }
          v190 = v255 + 1;
          if ( v263 == v255 + 1 )
            goto LABEL_466;
        }
        if ( v260 < v262 )
          goto LABEL_390;
      }
    }
    if ( !v149 )
      goto LABEL_390;
LABEL_365:
    v146 = (__m128i *)v267;
    goto LABEL_366;
  }
LABEL_467:
  if ( v267 )
  {
    *(_QWORD *)&v268 = 0;
    qfree();
  }
  return 0;
}

