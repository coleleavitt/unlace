__int64 __fastcall sub_3FE20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  int v6; // eax
  _BYTE *v7; // rdx
  char *v8; // rax
  __int64 v9; // r12
  char *v10; // rdi
  char *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  _BYTE *v16; // rsi
  __int64 v17; // rax
  char *v18; // rbx
  size_t v19; // r12
  const void *v20; // r13
  void *v21; // rdi
  __int64 v22; // rdi
  _BYTE *v23; // rax
  char *v24; // rdx
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  const char *v27; // rdx
  const char *v28; // rsi
  __int64 v29; // rax
  size_t v30; // rbp
  void *v31; // r14
  unsigned __int64 v32; // r12
  void *v33; // r13
  char *v34; // rax
  __int64 v35; // r15
  char *v36; // rdi
  char v37; // al
  char *v38; // rdi
  __int64 v39; // rax
  size_t v40; // rbx
  __int64 v41; // rax
  void *v42; // rbx
  int *v43; // rax
  unsigned int v44; // ebx
  __int64 *v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rsi
  __m128i si128; // xmm6
  __int64 v49; // rbx
  size_t v50; // r15
  size_t v51; // r15
  char *v52; // r15
  void *v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __m128i v56; // xmm0
  void *v57; // r8
  __m128i v58; // xmm1
  __int64 v59; // r12
  int *v60; // rax
  void *v61; // r12
  int *v62; // rax
  char *v63; // rdi
  __int64 v64; // r15
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rdx
  size_t v70; // rdx
  void *v71; // rax
  __int64 v72; // rax
  size_t v73; // rax
  size_t v74; // rbx
  void *v75; // r8
  __int64 v76; // r15
  unsigned __int64 v77; // r9
  char *v78; // rsi
  __int64 v79; // rax
  void *v80; // rax
  __int64 v81; // rax
  const char *v82; // r13
  const char *v83; // rbp
  const char *v84; // r13
  const char *v85; // rsi
  const char *v86; // rbx
  const char *v87; // rdi
  int v88; // eax
  const char *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r13
  unsigned __int64 v93; // r9
  int *v94; // r10
  int *v95; // rcx
  _BYTE *v96; // rsi
  unsigned __int64 v97; // rdi
  __int64 v98; // r8
  __int64 v99; // rax
  unsigned __int8 v100; // dl
  unsigned __int8 v101; // di
  int *v102; // rdx
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // r8
  __int64 i; // rax
  unsigned __int8 v106; // cl
  unsigned __int8 v107; // di
  _QWORD *v108; // rax
  int *v109; // rdi
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // r10
  __int64 v112; // rax
  unsigned __int8 v113; // cl
  unsigned __int8 v114; // r13
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // r8
  __int64 v117; // rax
  unsigned __int8 v118; // dl
  unsigned __int8 v119; // r11
  __int64 v120; // rdx
  __int64 v121; // rsi
  __int64 v122; // rax
  const char *v123; // r13
  const char *v124; // rbx
  const char *v125; // r13
  const char *v126; // rsi
  const char *v127; // r12
  const char *v128; // rdi
  int v129; // eax
  const char *v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  const char *v133; // r8
  const char *v134; // rsi
  const char *v135; // rdi
  int v136; // eax
  const char *v137; // r8
  const char *v138; // rsi
  const char *v139; // rdi
  int v140; // eax
  __int64 v141; // rax
  unsigned __int64 v142; // rax
  __int64 v143; // r14
  int *v144; // rax
  int *v145; // rsi
  int v146; // ecx
  unsigned int v147; // ebp
  char *v148; // rdi
  __int64 v149; // r12
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v153; // rbp
  __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rax
  const char *v157; // r13
  const char *v158; // r13
  __int64 v159; // rsi
  int v160; // eax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rcx
  unsigned __int64 v164; // [rsp+0h] [rbp-320h]
  int v165; // [rsp+8h] [rbp-318h]
  void *v166; // [rsp+8h] [rbp-318h]
  __int64 v168; // [rsp+18h] [rbp-308h]
  void *srca; // [rsp+20h] [rbp-300h]
  void *src; // [rsp+20h] [rbp-300h]
  void *srcc; // [rsp+20h] [rbp-300h]
  void *srcb; // [rsp+20h] [rbp-300h]
  __int64 v173; // [rsp+30h] [rbp-2F0h]
  void *v174; // [rsp+38h] [rbp-2E8h]
  __int64 v175; // [rsp+40h] [rbp-2E0h]
  void *v176; // [rsp+40h] [rbp-2E0h]
  unsigned __int64 v177; // [rsp+48h] [rbp-2D8h]
  __int64 v178; // [rsp+58h] [rbp-2C8h]
  __int64 v179; // [rsp+58h] [rbp-2C8h]
  unsigned __int64 v180; // [rsp+60h] [rbp-2C0h]
  __int64 v181; // [rsp+68h] [rbp-2B8h]
  const char *v183; // [rsp+88h] [rbp-298h]
  __int64 v185; // [rsp+A0h] [rbp-280h]
  __int64 v186; // [rsp+A0h] [rbp-280h]
  const char *v187; // [rsp+A0h] [rbp-280h]
  const char *v188; // [rsp+A0h] [rbp-280h]
  size_t v189; // [rsp+B0h] [rbp-270h]
  __int64 v190; // [rsp+B8h] [rbp-268h]
  __int64 v191; // [rsp+D0h] [rbp-250h] BYREF
  __int64 v192; // [rsp+D8h] [rbp-248h] BYREF
  void **p_dest; // [rsp+E0h] [rbp-240h] BYREF
  void **v194; // [rsp+E8h] [rbp-238h] BYREF
  __int64 v195; // [rsp+F0h] [rbp-230h] BYREF
  void *v196; // [rsp+F8h] [rbp-228h] BYREF
  __int128 v197; // [rsp+100h] [rbp-220h]
  void *v198; // [rsp+118h] [rbp-208h] BYREF
  __int128 v199; // [rsp+120h] [rbp-200h]
  void *v200; // [rsp+138h] [rbp-1E8h] BYREF
  __int128 v201; // [rsp+140h] [rbp-1E0h]
  void *v202; // [rsp+158h] [rbp-1C8h] BYREF
  __int128 v203; // [rsp+160h] [rbp-1C0h]
  void *v204; // [rsp+178h] [rbp-1A8h] BYREF
  __m128i v205; // [rsp+180h] [rbp-1A0h] BYREF
  void *v206; // [rsp+198h] [rbp-188h] BYREF
  __int128 v207; // [rsp+1A0h] [rbp-180h]
  void *dest; // [rsp+1B8h] [rbp-168h] BYREF
  __int128 v209; // [rsp+1C0h] [rbp-160h]
  __int64 v210; // [rsp+1D8h] [rbp-148h] BYREF
  int v211; // [rsp+1E0h] [rbp-140h] BYREF
  void *v212; // [rsp+1E8h] [rbp-138h]
  int *v213; // [rsp+1F0h] [rbp-130h]
  int *v214; // [rsp+1F8h] [rbp-128h]
  __int64 v215; // [rsp+200h] [rbp-120h]
  __int64 v216; // [rsp+208h] [rbp-118h] BYREF
  int v217; // [rsp+210h] [rbp-110h] BYREF
  void *v218; // [rsp+218h] [rbp-108h]
  int *v219; // [rsp+220h] [rbp-100h]
  int *v220; // [rsp+228h] [rbp-F8h]
  __int64 v221; // [rsp+230h] [rbp-F0h]
  __int64 v222; // [rsp+238h] [rbp-E8h] BYREF
  int v223; // [rsp+240h] [rbp-E0h] BYREF
  int *v224; // [rsp+248h] [rbp-D8h]
  int *v225; // [rsp+250h] [rbp-D0h]
  int *v226; // [rsp+258h] [rbp-C8h]
  __int64 v227; // [rsp+260h] [rbp-C0h]
  void *v228; // [rsp+268h] [rbp-B8h] BYREF
  size_t v229[2]; // [rsp+270h] [rbp-B0h]
  void *v230; // [rsp+280h] [rbp-A0h]
  size_t n[3]; // [rsp+288h] [rbp-98h]
  char v232[24]; // [rsp+2A0h] [rbp-80h] BYREF
  char v233[8]; // [rsp+2B8h] [rbp-68h] BYREF
  __int128 v234; // [rsp+2C0h] [rbp-60h]
  __int64 v235; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v236; // [rsp+2E0h] [rbp-40h]

  v236 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a4 + 24);
  v197 = 0;
  v196 = nullptr;
  v198 = nullptr;
  v199 = 0;
  v180 = v5;
  if ( !v5 )
  {
    v6 = *(_DWORD *)(a4 + 40);
    v201 = 0;
    v200 = nullptr;
    v165 = v6 & 2;
    if ( (v6 & 2) != 0 )
    {
      v165 = 2;
      v202 = nullptr;
      v203 = 0;
    }
    else
    {
      v203 = 0;
      v202 = nullptr;
    }
    goto LABEL_34;
  }
  if ( v5 == -1 )
  {
    v7 = nullptr;
  }
  else
  {
    v198 = (void *)sub_1987B0(&v198, 0, v5 + 1, 1);
    v7 = v198;
    v162 = v199;
    if ( (unsigned __int64)v199 < v5 + 1 )
    {
      do
      {
        v163 = v162;
        v7[v162++] = 66;
        v7 = v198;
      }
      while ( v5 != v163 );
    }
    *(_QWORD *)&v199 = v5 + 1;
  }
  v7[v5] = 0;
  v201 = 0;
  v200 = nullptr;
  v233[0] = 2;
  v235 = 0;
  v234 = 0;
  v8 = (char *)sub_1987B0(&v200, 0, v5, 32);
  v9 = v201;
  v200 = v8;
  v10 = v8;
  if ( (unsigned __int64)v201 < v5 )
  {
    while ( 1 )
    {
      v11 = &v10[32 * v9];
      *v11 = 2;
      *((_QWORD *)v11 + 3) = 0;
      *(_OWORD *)(v11 + 8) = 0;
      sub_176730(v11, v233);
      if ( v5 == ++v9 )
        break;
      v10 = (char *)v200;
    }
  }
  *(_QWORD *)&v201 = v5;
  sub_176520(v233);
  if ( *((_QWORD *)&v197 + 1) < 2 * v5 )
    v196 = (void *)sub_1987B0(&v196, v196, 2 * v5, 1);
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v15 = v197;
      if ( (_QWORD)v197 )
      {
        v13 = v197 + 1;
        v14 = v197 + 2;
        v15 = v197 - 1;
      }
      else
      {
        v14 = 3;
        v13 = 2;
      }
      v16 = v196;
      if ( *((_QWORD *)&v197 + 1) < v14 )
      {
        v196 = (void *)sub_1987B0(&v196, v196, v14, 1);
        v16 = v196;
      }
      *(_QWORD *)&v197 = v14;
      v16[v13] = 0;
      *(_WORD *)((char *)v196 + v15) = 11327;
      v17 = 32 * v12 + *(_QWORD *)(a4 + 16);
      v18 = (char *)v200 + 32 * v12;
      v19 = *(_QWORD *)(v17 + 16);
      v20 = *(const void **)(v17 + 8);
      sub_176520(v18);
      *v18 = 7;
      *((_QWORD *)v18 + 1) = 0;
      *((_OWORD *)v18 + 1) = 0;
      if ( v19 )
        break;
      if ( v180 == ++v12 )
        goto LABEL_23;
    }
    v21 = nullptr;
    if ( v19 != -1 )
    {
      v141 = sub_1987B0(v18 + 8, 0, v19 + 1, 1);
      *((_QWORD *)v18 + 1) = v141;
      v21 = (void *)v141;
    }
    *((_QWORD *)v18 + 2) = v19 + 1;
    ++v12;
    memmove(v21, v20, v19);
    *(_BYTE *)(*((_QWORD *)v18 + 1) + v19) = 0;
  }
  while ( v180 != v12 );
LABEL_23:
  v22 = v197;
  if ( (unsigned __int64)v197 <= 1 )
  {
LABEL_33:
    v202 = nullptr;
    v203 = 0;
    v165 = *(_DWORD *)(a4 + 40) & 2;
    goto LABEL_34;
  }
  v23 = (char *)v196 + v197 - 1;
  v24 = (char *)v196;
  if ( v196 < v23 )
  {
    while ( *(v23 - 1) == 44 )
    {
      if ( v196 == --v23 )
        goto LABEL_259;
    }
  }
  v25 = v23 - (_BYTE *)v196;
  if ( v23 != v196 )
  {
    v26 = v25 + 1;
    if ( (unsigned __int64)v197 < v25 + 1 )
    {
      if ( *((_QWORD *)&v197 + 1) < v26 )
      {
        v196 = (void *)sub_1987B0(&v196, v196, v25 + 1, 1);
        v22 = v197;
        v24 = (char *)v196;
      }
      memset(&v24[v22], 0, v26 - v22);
      *(_QWORD *)&v197 = v25 + 1;
      v23 = (char *)v196 + v25;
    }
    else if ( (_QWORD)v197 != v25 + 1 )
    {
      *(_QWORD *)&v197 = v25 + 1;
    }
    *v23 = 0;
    goto LABEL_33;
  }
LABEL_259:
  if ( v196 )
  {
    *(_QWORD *)&v197 = 0;
    j__free(v196);
    v196 = nullptr;
    *((_QWORD *)&v197 + 1) = 0;
    goto LABEL_33;
  }
  v160 = *(_DWORD *)(a4 + 40);
  v203 = 0;
  v202 = nullptr;
  v165 = v160 & 2;
  if ( (v160 & 2) != 0 )
    v165 = 2;
LABEL_34:
  sub_299F0((char **)&v202);
  v27 = s1;
  v168 = a3 + 40;
  if ( (_QWORD)v203 )
    v27 = (const char *)v202;
  sub_318B0((__int64)&v191, a1, v27);
  if ( !v191 )
    goto LABEL_247;
  v28 = s1;
  if ( (_QWORD)v199 )
    v28 = (const char *)v198;
  if ( !(unsigned __int8)unk_241E80(&v191, v28, v232, &v200, v168) )
    goto LABEL_247;
  unk_241E60(&v192, &v191, v168);
  if ( !v192 )
  {
LABEL_246:
    sub_33A10(&v192);
LABEL_247:
    sub_2DC20((__int64 *)(a3 + 16), "Error executing query");
    v147 = -1;
    goto LABEL_222;
  }
  v211 = 0;
  v213 = &v211;
  v214 = &v211;
  v219 = &v217;
  v220 = &v217;
  v225 = &v223;
  v226 = &v223;
  v212 = nullptr;
  v215 = 0;
  v217 = 0;
  v218 = nullptr;
  v221 = 0;
  v223 = 0;
  v224 = nullptr;
  v227 = 0;
  v204 = nullptr;
  v183 = "stsBssBB";
  v164 = 8;
  v205 = 0;
  if ( !v165 )
  {
    v164 = 6;
    v183 = "stsBss";
  }
  v29 = 256;
  v173 = 0;
  if ( v164 == 6 )
    v29 = 192;
  v30 = 0;
  v31 = nullptr;
  v32 = 0;
  v33 = nullptr;
  v181 = v29;
  while ( (unsigned __int8)unk_241E70(&v192, v168) )
  {
    v206 = nullptr;
    v233[0] = 2;
    v235 = 0;
    v207 = 0;
    v234 = 0;
    v34 = (char *)sub_1987B0(&v206, 0, v164, 32);
    v206 = v34;
    if ( (unsigned __int64)v207 < v164 )
    {
      v35 = 32 * v207;
      while ( 1 )
      {
        v36 = &v34[v35];
        *v36 = 2;
        *((_QWORD *)v36 + 3) = 0;
        *(_OWORD *)(v36 + 8) = 0;
        sub_176730(&v34[v35], v233);
        v35 += 32;
        if ( v181 == v35 )
          break;
        v34 = (char *)v206;
      }
    }
    *(_QWORD *)&v207 = v164;
    sub_176520(v233);
    v37 = unk_241E78(&v192, v183, v233, &v206, v168);
    v38 = (char *)v206;
    if ( !v37 )
    {
      if ( v206 )
      {
        v153 = v207;
        if ( (_QWORD)v207 )
        {
          v154 = 0;
          do
          {
            v155 = v154++;
            sub_176520(&v38[32 * v155]);
            v38 = (char *)v206;
          }
          while ( v153 != v154 );
        }
        *(_QWORD *)&v207 = 0;
        j__free(v38);
      }
      if ( v31 )
        j__free(v31);
      if ( v204 )
      {
        v205.m128i_i64[0] = 0;
        j__free(v204);
      }
      if ( v33 )
        j__free(v33);
      sub_2E5D0(v224);
      sub_2DA90(v218);
      sub_2DA90(v212);
      goto LABEL_246;
    }
    v39 = *((_QWORD *)v206 + 14);
    dest = nullptr;
    v209 = 0;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v39 == 1 )
      {
        if ( v30 )
          goto LABEL_95;
      }
      else
      {
        srca = *((void **)v206 + 13);
        dest = (void *)sub_1987B0(&dest, 0, v40, 1);
        memset((char *)dest + v209, 0, v40 - v209);
        *(_QWORD *)&v209 = v40;
        memcpy(dest, srca, v40);
        if ( (_QWORD)v209 != v30 )
        {
          if ( (_QWORD)v209 )
          {
            v30 = v209;
            goto LABEL_59;
          }
LABEL_95:
          v30 = 0;
          v42 = nullptr;
LABEL_60:
          if ( v31 )
            j__free(v31);
          if ( v33 )
          {
            j__free(v33);
            v173 = 0;
            v32 = 0;
          }
          if ( v165 && v204 )
          {
            v205.m128i_i64[0] = 0;
            j__free(v204);
            v204 = nullptr;
            v205.m128i_i64[1] = 0;
          }
          v177 = v32;
          v31 = v42;
          src = nullptr;
          v175 = v173;
          goto LABEL_66;
        }
        if ( v30 )
        {
          v41 = 0;
          while ( *((_BYTE *)dest + v41) == *((_BYTE *)v31 + v41) )
          {
            if ( ++v41 == v30 )
            {
              v177 = v32;
              src = v33;
              v175 = v173;
              goto LABEL_66;
            }
          }
LABEL_59:
          v42 = (void *)sub_198760(v30);
          memcpy(v42, dest, v30);
          goto LABEL_60;
        }
      }
    }
    else if ( v30 )
    {
      goto LABEL_95;
    }
    v177 = v32;
    v30 = 0;
    src = v33;
    v175 = v173;
LABEL_66:
    v43 = (int *)sub_3D0F0((__int64)&v222, &dest);
    if ( v43 != &v223 )
    {
      v44 = v43[14];
      goto LABEL_68;
    }
    v92 = a2[6];
    if ( !v224 )
    {
      v94 = &v223;
LABEL_143:
      p_dest = &dest;
      v108 = sub_3FC90(&v222, v94, (__int64 *)&p_dest);
      v102 = v224;
      *((_DWORD *)v108 + 14) = v92;
      if ( v102 )
      {
        v93 = v209;
        v96 = dest;
        goto LABEL_145;
      }
LABEL_269:
      v109 = &v223;
      goto LABEL_163;
    }
    v93 = v209;
    v94 = &v223;
    v95 = v224;
    v96 = dest;
    do
    {
      v97 = *((_QWORD *)v95 + 5);
      v98 = v209;
      if ( v97 <= (unsigned __int64)v209 )
        v98 = *((_QWORD *)v95 + 5);
      if ( v98 )
      {
        v99 = 0;
        while ( 1 )
        {
          v100 = *(_BYTE *)(*((_QWORD *)v95 + 4) + v99);
          v101 = *((_BYTE *)dest + v99);
          if ( v100 < v101 )
            break;
          if ( v101 < v100 )
            goto LABEL_171;
          if ( v98 == ++v99 )
          {
            v97 = *((_QWORD *)v95 + 5);
            goto LABEL_170;
          }
        }
LABEL_133:
        v95 = *((int **)v95 + 3);
        continue;
      }
LABEL_170:
      if ( v97 < (unsigned __int64)v209 )
        goto LABEL_133;
LABEL_171:
      v94 = v95;
      v95 = *((int **)v95 + 2);
    }
    while ( v95 );
    v102 = v224;
    if ( v94 == &v223 )
      goto LABEL_143;
    v103 = *((_QWORD *)v94 + 5);
    v104 = v103;
    if ( (unsigned __int64)v209 <= v103 )
      v104 = v209;
    if ( v104 )
    {
      for ( i = 0; i != v104; ++i )
      {
        v106 = *((_BYTE *)dest + i);
        v107 = *(_BYTE *)(*((_QWORD *)v94 + 4) + i);
        if ( v106 < v107 )
          goto LABEL_143;
        if ( v107 < v106 )
          goto LABEL_252;
      }
      v103 = *((_QWORD *)v94 + 5);
    }
    if ( (unsigned __int64)v209 < v103 )
      goto LABEL_143;
LABEL_252:
    v94[14] = v92;
LABEL_145:
    v109 = &v223;
    while ( 2 )
    {
      v110 = *((_QWORD *)v102 + 5);
      v111 = v93;
      if ( v110 <= v93 )
        v111 = *((_QWORD *)v102 + 5);
      if ( v111 )
      {
        v112 = 0;
        while ( 1 )
        {
          v113 = *(_BYTE *)(*((_QWORD *)v102 + 4) + v112);
          v114 = v96[v112];
          if ( v113 < v114 )
            break;
          if ( v114 < v113 )
            goto LABEL_168;
          if ( v111 == ++v112 )
            goto LABEL_167;
        }
LABEL_153:
        v102 = *((int **)v102 + 3);
      }
      else
      {
LABEL_167:
        if ( v110 < v93 )
          goto LABEL_153;
LABEL_168:
        v109 = v102;
        v102 = *((int **)v102 + 2);
      }
      if ( v102 )
        continue;
      break;
    }
    if ( v109 == &v223 )
      goto LABEL_269;
    v115 = *((_QWORD *)v109 + 5);
    v116 = v115;
    if ( v93 <= v115 )
      v116 = v93;
    if ( v116 )
    {
      v117 = 0;
      while ( 1 )
      {
        v118 = v96[v117];
        v119 = *(_BYTE *)(*((_QWORD *)v109 + 4) + v117);
        if ( v118 < v119 )
          break;
        if ( v119 < v118 )
          goto LABEL_164;
        if ( v116 == ++v117 )
          goto LABEL_248;
      }
LABEL_163:
      v194 = &dest;
      v109 = (int *)sub_3FC90(&v222, v109, (__int64 *)&v194);
    }
    else
    {
LABEL_248:
      if ( v93 < v115 )
        goto LABEL_163;
    }
LABEL_164:
    v44 = v109[14];
    v120 = a2[6];
    v121 = a2[5];
    if ( a2[7] < (unsigned __int64)(v120 + 1) )
    {
      v156 = sub_1987B0(a2 + 5, v121, v120 + 1, 24);
      a2[5] = v156;
      v120 = a2[6];
      v121 = v156;
    }
    v122 = v121 + 24 * v120;
    *(_QWORD *)v122 = 0;
    *(_OWORD *)(v122 + 8) = 0;
    ++a2[6];
LABEL_68:
    v45 = (__int64 *)(a2[5] + 24LL * v44);
    v46 = v45[1];
    v47 = *v45;
    if ( v45[2] < (unsigned __int64)(v46 + 1) )
    {
      v81 = sub_1987B0(a2[5] + 24LL * v44, v47, v46 + 1, 80);
      *v45 = v81;
      v46 = v45[1];
      v47 = v81;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B10);
    v228 = nullptr;
    *(_OWORD *)v229 = 0;
    v49 = v47 + 80 * v46;
    *(_OWORD *)n = 0;
    v230 = nullptr;
    *(_QWORD *)(v49 + 16) = 0;
    *(__m128i *)v49 = si128;
    *(_OWORD *)(v49 + 24) = 0;
    v50 = v229[0];
    if ( v229[0] )
    {
      v80 = (void *)sub_198760(v229[0]);
      *(_QWORD *)(v49 + 16) = v80;
      *(_QWORD *)(v49 + 32) = v50;
      memcpy(v80, v228, v50);
      *(_QWORD *)(v49 + 24) = v50;
    }
    *(_QWORD *)(v49 + 40) = 0;
    *(_OWORD *)(v49 + 48) = 0;
    v51 = n[0];
    if ( n[0] )
    {
      v71 = (void *)sub_198760(n[0]);
      *(_QWORD *)(v49 + 40) = v71;
      *(_QWORD *)(v49 + 56) = v51;
      memcpy(v71, v230, v51);
      *(_QWORD *)(v49 + 48) = v51;
    }
    if ( v230 )
    {
      n[0] = 0;
      j__free(v230);
    }
    if ( v228 )
    {
      v229[0] = 0;
      j__free(v228);
    }
    *(_QWORD *)(v49 + 64) = 0;
    v52 = (char *)v206;
    *(_QWORD *)(v49 + 72) = 0;
    ++v45[1];
    if ( v32 <= 1 )
    {
      v67 = *(_QWORD *)(v49 + 16);
      v68 = _mm_loadu_si128((const __m128i *)(v49 + 24));
      *(_QWORD *)(v49 + 16) = *((_QWORD *)v52 + 1);
      *(_QWORD *)(v49 + 24) = *((_QWORD *)v52 + 2);
      *(_QWORD *)(v49 + 32) = *((_QWORD *)v52 + 3);
      *((_QWORD *)v52 + 1) = v67;
      *((__m128i *)v52 + 1) = v68;
      if ( v165 )
      {
        v69 = *((_QWORD *)v52 + 26);
        if ( v69 )
        {
          v70 = v69 - 1;
          if ( v70 )
          {
            sub_2DB60((__int64 *)(v49 + 40), *((const void **)v52 + 25), v70);
            v52 = (char *)v206;
          }
        }
      }
    }
    else
    {
      v53 = *(void **)(v49 + 16);
      v54 = *(_QWORD *)(v49 + 24);
      *(_QWORD *)(v49 + 24) = v32;
      *(_QWORD *)(v49 + 16) = src;
      v55 = *(_QWORD *)(v49 + 32);
      *(_QWORD *)(v49 + 32) = v173;
      if ( v165 )
      {
        v56 = _mm_loadu_si128((const __m128i *)(v49 + 48));
        v57 = v204;
        v58 = _mm_loadu_si128(&v205);
        v204 = *(void **)(v49 + 40);
        *(_QWORD *)(v49 + 40) = v57;
        *(__m128i *)(v49 + 48) = v58;
        v205 = v56;
      }
      v175 = v55;
      v177 = v54;
      src = v53;
    }
    v59 = (__int64)(v52 + 136);
    *(_QWORD *)(v49 + 64) = *((_QWORD *)v52 + 5);
    v60 = (int *)sub_327C0((__int64)&v210, (__int64)(v52 + 136));
    if ( v60 != &v211 )
    {
      *(_DWORD *)(v49 + 72) = v60[14];
      goto LABEL_84;
    }
    v123 = (const char *)v212;
    v179 = a2[9];
    *(_DWORD *)(v49 + 72) = v179;
    if ( !v123 )
    {
      v137 = (const char *)&v211;
      goto LABEL_198;
    }
    v190 = v49;
    v124 = v123;
    v125 = (const char *)&v211;
    v186 = *((_QWORD *)v52 + 18);
    while ( 2 )
    {
      v131 = *((_QWORD *)v124 + 5);
      if ( v186 )
      {
        v126 = *((const char **)v52 + 17);
        v127 = v124;
        v128 = s1;
        if ( v131 )
          goto LABEL_175;
        goto LABEL_176;
      }
      if ( v131 )
      {
LABEL_183:
        v126 = s1;
LABEL_175:
        v128 = *((const char **)v124 + 4);
        v127 = v124;
LABEL_176:
        v129 = strcmp(v128, v126);
        v130 = *((const char **)v124 + 2);
        v124 = *((const char **)v124 + 3);
        if ( v129 >= 0 )
        {
          v125 = v127;
          v124 = v130;
        }
        if ( !v124 )
        {
          v59 = (__int64)(v52 + 136);
          v137 = v125;
          v49 = v190;
          goto LABEL_193;
        }
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v132 = *((_QWORD *)v124 + 2);
      if ( !v132 )
        break;
      v125 = v124;
      v124 = *((const char **)v124 + 2);
      if ( *(_QWORD *)(v132 + 40) )
        goto LABEL_183;
    }
    v157 = v124;
    v59 = (__int64)(v52 + 136);
    v49 = v190;
    v137 = v157;
LABEL_193:
    if ( v137 == (const char *)&v211 )
      goto LABEL_198;
    if ( *((_QWORD *)v137 + 5) )
    {
      v138 = *((const char **)v137 + 4);
      v139 = s1;
      if ( v186 )
        goto LABEL_196;
LABEL_197:
      v188 = v137;
      v140 = strcmp(v139, v138);
      v137 = v188;
      if ( v140 < 0 )
      {
LABEL_198:
        v195 = v59;
        v137 = sub_3D4E0(&v210, v137, &v195);
      }
    }
    else
    {
      v138 = s1;
      if ( v186 )
      {
LABEL_196:
        v139 = *((const char **)v52 + 17);
        goto LABEL_197;
      }
    }
    *((_DWORD *)v137 + 14) = v179;
    sub_319C0(a2 + 8, v59);
    v52 = (char *)v206;
LABEL_84:
    v61 = v52 + 168;
    v62 = (int *)sub_327C0((__int64)&v216, (__int64)(v52 + 168));
    if ( v62 != &v217 )
    {
      *(_DWORD *)(v49 + 76) = v62[14];
      goto LABEL_86;
    }
    v82 = (const char *)v218;
    v178 = a2[12];
    *(_DWORD *)(v49 + 76) = v178;
    if ( !v82 )
    {
      v133 = (const char *)&v217;
      goto LABEL_190;
    }
    v189 = v30;
    v83 = v82;
    v84 = (const char *)&v217;
    v185 = *((_QWORD *)v52 + 22);
    while ( 2 )
    {
      v90 = *((_QWORD *)v83 + 5);
      if ( v185 )
      {
        v85 = *((const char **)v52 + 21);
        v86 = v83;
        v87 = s1;
        if ( v90 )
          goto LABEL_115;
        goto LABEL_116;
      }
      if ( v90 )
      {
LABEL_123:
        v85 = s1;
LABEL_115:
        v87 = *((const char **)v83 + 4);
        v86 = v83;
LABEL_116:
        v88 = strcmp(v87, v85);
        v89 = *((const char **)v83 + 2);
        v83 = *((const char **)v83 + 3);
        if ( v88 >= 0 )
        {
          v84 = v86;
          v83 = v89;
        }
        if ( !v83 )
        {
          v61 = v52 + 168;
          v30 = v189;
          v133 = v84;
          goto LABEL_185;
        }
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v91 = *((_QWORD *)v83 + 2);
      if ( !v91 )
        break;
      v84 = v83;
      v83 = *((const char **)v83 + 2);
      if ( *(_QWORD *)(v91 + 40) )
        goto LABEL_123;
    }
    v158 = v83;
    v61 = v52 + 168;
    v30 = v189;
    v133 = v158;
LABEL_185:
    if ( v133 == (const char *)&v217 )
      goto LABEL_190;
    if ( *((_QWORD *)v133 + 5) )
    {
      v134 = *((const char **)v133 + 4);
      v135 = s1;
      if ( v185 )
        goto LABEL_188;
LABEL_189:
      v187 = v133;
      v136 = strcmp(v135, v134);
      v133 = v187;
      if ( v136 < 0 )
      {
LABEL_190:
        v228 = v61;
        v133 = sub_3D4E0(&v216, v133, (__int64 *)&v228);
      }
    }
    else
    {
      v134 = s1;
      if ( v185 )
      {
LABEL_188:
        v135 = *((const char **)v52 + 21);
        goto LABEL_189;
      }
    }
    *((_DWORD *)v133 + 14) = v178;
    sub_319C0(a2 + 11, (__int64)v61);
    v52 = (char *)v206;
LABEL_86:
    v33 = *((void **)v52 + 9);
    v32 = *((_QWORD *)v52 + 10);
    v173 = *((_QWORD *)v52 + 11);
    *((_QWORD *)v52 + 9) = src;
    *((_QWORD *)v52 + 10) = v177;
    *((_QWORD *)v52 + 11) = v175;
    if ( v165 )
    {
      if ( v204 )
      {
        v205.m128i_i64[0] = 0;
        j__free(v204);
        v204 = nullptr;
        v52 = (char *)v206;
        v205.m128i_i64[1] = 0;
      }
      v72 = *((_QWORD *)v52 + 30);
      if ( v72 )
      {
        v73 = v72 - 1;
        v74 = v73;
        if ( v73 )
        {
          v75 = *((void **)v52 + 29);
          v76 = v205.m128i_i64[0];
          v77 = v205.m128i_i64[0] + v73;
          if ( !__CFADD__(v205.m128i_i64[0], v73) )
            goto LABEL_105;
          if ( v205.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
          {
            v77 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_105:
            v78 = (char *)v204;
            v79 = v205.m128i_i64[0];
            if ( v205.m128i_i64[1] < v77 )
            {
              v176 = v75;
              srcb = (void *)v77;
              v204 = (void *)sub_1987B0(&v204, v204, v77, 1);
              v78 = (char *)v204;
              v77 = (unsigned __int64)srcb;
              v79 = v205.m128i_i64[0];
              v75 = v176;
            }
            v174 = v75;
            srcc = (void *)v77;
            memset(&v78[v79], 0, v77 - v79);
            v75 = v174;
            v205.m128i_i64[0] = (__int64)srcc;
          }
          else if ( v205.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          {
            v205.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((char *)v204 + v76, v75, v74);
        }
      }
    }
    if ( dest )
    {
      *(_QWORD *)&v209 = 0;
      j__free(dest);
    }
    v63 = (char *)v206;
    if ( v206 )
    {
      v64 = v207;
      if ( (_QWORD)v207 )
      {
        v65 = 0;
        do
        {
          v66 = v65++;
          sub_176520(&v63[32 * v66]);
          v63 = (char *)v206;
        }
        while ( v64 != v65 );
      }
      *(_QWORD *)&v207 = 0;
      j__free(v63);
    }
  }
  v142 = a2[3];
  if ( v142 < v180 )
  {
    v159 = a2[2];
    if ( a2[4] < v180 )
    {
      v161 = sub_1987B0(a2 + 2, v159, v180, 4);
      a2[2] = v161;
      v159 = v161;
      v142 = a2[3];
    }
    memset((void *)(v159 + 4 * v142), 0, 4 * (v180 - v142));
    a2[3] = v180;
LABEL_210:
    v166 = v31;
    v143 = 0;
    do
    {
      v144 = (int *)sub_3D0F0((__int64)&v222, (_QWORD *)(*(_QWORD *)(a4 + 16) + 32 * v143 + 8));
      v145 = (int *)(a2[2] + 4 * v143);
      v146 = -1;
      if ( v144 != &v223 )
        v146 = v144[14];
      ++v143;
      *v145 = v146;
    }
    while ( v180 != v143 );
    v31 = v166;
  }
  else
  {
    if ( v180 != v142 )
      a2[3] = v180;
    if ( v180 )
      goto LABEL_210;
  }
  if ( v31 )
    j__free(v31);
  if ( v204 )
  {
    v205.m128i_i64[0] = 0;
    j__free(v204);
  }
  if ( v33 )
    j__free(v33);
  v147 = 0;
  sub_2E5D0(v224);
  sub_2DA90(v218);
  sub_2DA90(v212);
  sub_33A10(&v192);
LABEL_222:
  sub_32C50(&v191);
  if ( v202 )
  {
    *(_QWORD *)&v203 = 0;
    j__free(v202);
  }
  v148 = (char *)v200;
  if ( v200 )
  {
    v149 = v201;
    if ( (_QWORD)v201 )
    {
      v150 = 0;
      do
      {
        v151 = v150++;
        sub_176520(&v148[32 * v151]);
        v148 = (char *)v200;
      }
      while ( v149 != v150 );
    }
    *(_QWORD *)&v201 = 0;
    j__free(v148);
  }
  if ( v198 )
  {
    *(_QWORD *)&v199 = 0;
    j__free(v198);
  }
  if ( v196 )
  {
    *(_QWORD *)&v197 = 0;
    j__free(v196);
  }
  return v147;
}
