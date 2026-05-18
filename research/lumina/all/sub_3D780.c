__int64 __fastcall sub_3D780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  const char *v6; // rbx
  unsigned int v7; // ebx
  unsigned __int64 v9; // rdx
  const char *v10; // rdx
  __int64 v11; // r13
  char v12; // al
  char *v13; // rdi
  char *v14; // rax
  unsigned __int64 v15; // r14
  char *v16; // rax
  __int64 v17; // rdx
  size_t v18; // rdx
  size_t v19; // r12
  __int64 v20; // r14
  const void *v21; // r15
  unsigned __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r8
  int v27; // r12d
  int *v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  int *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // r12d
  _DWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r12
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __m128i si128; // xmm1
  __int64 v48; // r12
  size_t v49; // r15
  size_t v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // r15
  char *v61; // r12
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  __int64 v65; // rdi
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // r9
  _QWORD *v69; // rax
  int *v70; // rdi
  __int64 v71; // r10
  __int64 v72; // rdx
  char *v73; // r14
  int v74; // r12d
  __int64 v75; // r14
  void *v76; // r15
  __int64 v77; // rcx
  _QWORD *v78; // rax
  int *v79; // rdi
  __int64 v80; // r8
  __int64 v81; // rdx
  int v82; // r12d
  _QWORD *v83; // rax
  int *v84; // rdi
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r15
  char *v88; // r12
  int v89; // r14d
  char *v90; // r12
  int *v91; // rax
  int v92; // r15d
  char *v93; // r12
  int *v94; // rax
  int v95; // r15d
  char *v96; // r12
  int *v97; // rax
  int v98; // r15d
  char *v99; // r12
  int *v100; // rax
  int v101; // r15d
  __int64 v102; // rdx
  __int64 v103; // rsi
  __m128i v104; // xmm2
  __int64 v105; // r12
  size_t v106; // r14
  size_t v107; // r14
  char *v108; // rdx
  char *v109; // rdi
  __int64 v110; // r14
  __int64 v111; // r12
  __int64 v112; // rax
  void *v113; // rax
  void *v114; // rax
  __int64 v115; // rax
  void *v116; // rax
  void *v117; // rax
  __int64 v118; // rax
  char *v119; // rax
  __int64 v120; // rdx
  size_t v121; // rdx
  const void *v122; // r12
  __int64 v123; // r15
  __int64 v124; // rax
  __int64 v125; // rsi
  __m128i *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rax
  char v129; // r14
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rax
  __m128i v133; // xmm0
  __int64 v134; // rdx
  __m128i v135; // xmm0
  void *v136; // rdi
  unsigned int v137; // r13d
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // r15
  __int64 v141; // rax
  __m128i *v142; // rax
  unsigned __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // [rsp+0h] [rbp-530h]
  __int64 v148; // [rsp+0h] [rbp-530h]
  __int64 v149; // [rsp+0h] [rbp-530h]
  __int64 v150; // [rsp+0h] [rbp-530h]
  __int64 v151; // [rsp+0h] [rbp-530h]
  __int64 v152; // [rsp+0h] [rbp-530h]
  unsigned __int64 v153; // [rsp+0h] [rbp-530h]
  __int64 v155; // [rsp+18h] [rbp-518h]
  int v157; // [rsp+5Ch] [rbp-4D4h]
  int v158; // [rsp+78h] [rbp-4B8h]
  __int64 v159; // [rsp+78h] [rbp-4B8h]
  unsigned __int64 v160; // [rsp+90h] [rbp-4A0h]
  __int64 v162; // [rsp+A0h] [rbp-490h]
  unsigned __int64 v163; // [rsp+A8h] [rbp-488h]
  __int64 v164; // [rsp+A8h] [rbp-488h]
  __int64 v165; // [rsp+B0h] [rbp-480h] BYREF
  __int64 v166; // [rsp+B8h] [rbp-478h] BYREF
  __int64 v167; // [rsp+C0h] [rbp-470h] BYREF
  __int64 v168; // [rsp+C8h] [rbp-468h] BYREF
  void *v169; // [rsp+D0h] [rbp-460h] BYREF
  __int128 v170; // [rsp+D8h] [rbp-458h]
  void *v171; // [rsp+F0h] [rbp-440h] BYREF
  __int128 v172; // [rsp+F8h] [rbp-438h]
  void *v173; // [rsp+110h] [rbp-420h] BYREF
  __int128 v174; // [rsp+118h] [rbp-418h]
  void *v175; // [rsp+130h] [rbp-400h] BYREF
  __int128 v176; // [rsp+138h] [rbp-3F8h]
  void *v177; // [rsp+150h] [rbp-3E0h] BYREF
  __int128 v178; // [rsp+158h] [rbp-3D8h]
  void *ptr; // [rsp+170h] [rbp-3C0h] BYREF
  __int128 v180; // [rsp+178h] [rbp-3B8h]
  void *v181; // [rsp+190h] [rbp-3A0h] BYREF
  __int128 v182; // [rsp+198h] [rbp-398h]
  __int64 v183; // [rsp+1B0h] [rbp-380h] BYREF
  int v184; // [rsp+1B8h] [rbp-378h] BYREF
  _QWORD *v185; // [rsp+1C0h] [rbp-370h]
  int *v186; // [rsp+1C8h] [rbp-368h]
  int *v187; // [rsp+1D0h] [rbp-360h]
  __int64 v188; // [rsp+1D8h] [rbp-358h]
  __int64 v189; // [rsp+1E0h] [rbp-350h] BYREF
  int v190; // [rsp+1E8h] [rbp-348h] BYREF
  _QWORD *v191; // [rsp+1F0h] [rbp-340h]
  int *v192; // [rsp+1F8h] [rbp-338h]
  int *v193; // [rsp+200h] [rbp-330h]
  __int64 v194; // [rsp+208h] [rbp-328h]
  __int64 v195; // [rsp+210h] [rbp-320h] BYREF
  int v196; // [rsp+218h] [rbp-318h] BYREF
  _QWORD *v197; // [rsp+220h] [rbp-310h]
  int *v198; // [rsp+228h] [rbp-308h]
  int *v199; // [rsp+230h] [rbp-300h]
  __int64 v200; // [rsp+238h] [rbp-2F8h]
  __int64 v201; // [rsp+240h] [rbp-2F0h] BYREF
  int v202; // [rsp+248h] [rbp-2E8h] BYREF
  void *v203; // [rsp+250h] [rbp-2E0h]
  int *v204; // [rsp+258h] [rbp-2D8h]
  int *v205; // [rsp+260h] [rbp-2D0h]
  __int64 v206; // [rsp+268h] [rbp-2C8h]
  __int64 v207; // [rsp+270h] [rbp-2C0h] BYREF
  int v208; // [rsp+278h] [rbp-2B8h] BYREF
  void *v209; // [rsp+280h] [rbp-2B0h]
  int *v210; // [rsp+288h] [rbp-2A8h]
  int *v211; // [rsp+290h] [rbp-2A0h]
  __int64 v212; // [rsp+298h] [rbp-298h]
  __int64 v213; // [rsp+2A0h] [rbp-290h] BYREF
  int v214; // [rsp+2A8h] [rbp-288h] BYREF
  void *v215; // [rsp+2B0h] [rbp-280h]
  int *v216; // [rsp+2B8h] [rbp-278h]
  int *v217; // [rsp+2C0h] [rbp-270h]
  __int64 v218; // [rsp+2C8h] [rbp-268h]
  __int64 v219; // [rsp+2D0h] [rbp-260h] BYREF
  int v220; // [rsp+2D8h] [rbp-258h] BYREF
  void *v221; // [rsp+2E0h] [rbp-250h]
  int *v222; // [rsp+2E8h] [rbp-248h]
  int *v223; // [rsp+2F0h] [rbp-240h]
  __int64 v224; // [rsp+2F8h] [rbp-238h]
  __int64 v225; // [rsp+300h] [rbp-230h] BYREF
  int v226; // [rsp+308h] [rbp-228h] BYREF
  _QWORD *v227; // [rsp+310h] [rbp-220h]
  int *v228; // [rsp+318h] [rbp-218h]
  int *v229; // [rsp+320h] [rbp-210h]
  __int64 v230; // [rsp+328h] [rbp-208h]
  _BYTE v231[24]; // [rsp+330h] [rbp-200h] BYREF
  void *src; // [rsp+348h] [rbp-1E8h]
  size_t n[2]; // [rsp+350h] [rbp-1E0h] BYREF
  __int64 v234; // [rsp+360h] [rbp-1D0h]
  char v235; // [rsp+370h] [rbp-1C0h]
  __int128 v236; // [rsp+380h] [rbp-1B0h] BYREF
  __int128 v237; // [rsp+390h] [rbp-1A0h]
  __int128 v238; // [rsp+3A0h] [rbp-190h]
  __int128 v239; // [rsp+3B0h] [rbp-180h]
  __int128 v240; // [rsp+3C0h] [rbp-170h]
  _BYTE v241[24]; // [rsp+3D0h] [rbp-160h] BYREF
  _BYTE v242[24]; // [rsp+3E8h] [rbp-148h] BYREF
  __m128i v243; // [rsp+400h] [rbp-130h] BYREF
  __int64 v244; // [rsp+410h] [rbp-120h]
  __int64 v245; // [rsp+418h] [rbp-118h]
  char *v246; // [rsp+420h] [rbp-110h] BYREF
  __int128 v247; // [rsp+428h] [rbp-108h]
  __int64 v248; // [rsp+438h] [rbp-F8h]
  __int128 v249; // [rsp+440h] [rbp-F0h]
  __int64 v250; // [rsp+450h] [rbp-E0h]
  __int128 v251; // [rsp+458h] [rbp-D8h]
  char v252[24]; // [rsp+468h] [rbp-C8h] BYREF
  __int64 v253; // [rsp+480h] [rbp-B0h]
  __int128 v254; // [rsp+488h] [rbp-A8h]
  __int64 v255; // [rsp+498h] [rbp-98h]
  __int128 v256; // [rsp+4A0h] [rbp-90h]
  __int64 v257; // [rsp+4B0h] [rbp-80h]
  __int128 v258; // [rsp+4B8h] [rbp-78h]
  __int64 v259; // [rsp+4C8h] [rbp-68h]
  __int128 v260; // [rsp+4D0h] [rbp-60h]
  __m128i v261; // [rsp+4E0h] [rbp-50h] BYREF
  unsigned __int64 v262; // [rsp+4F8h] [rbp-38h]

  v262 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(0);
LABEL_269:
    BUG();
  }
  v236 = -1;
  v5 = *(_DWORD *)(a4 + 16);
  v237 = -1;
  v238 = -1;
  v158 = v5 & 2;
  v239 = -1;
  v240 = -1;
  v246 = nullptr;
  v248 = 0;
  v250 = 0;
  v247 = 0;
  v249 = 0;
  v251 = 0;
  sub_31930((__int64)v252, "history");
  v253 = 0;
  v255 = 0;
  v257 = 0;
  v259 = 0;
  v254 = 0;
  v256 = 0;
  v258 = 0;
  v260 = 0;
  sub_2D0E0((__int64 *)&v246, &v236, (int *)(a4 + 16), v158 != 0);
  v169 = nullptr;
  v170 = 0;
  v162 = a3 + 40;
  v171 = nullptr;
  v173 = nullptr;
  v172 = 0;
  v174 = 0;
  if ( !(unsigned __int8)sub_28B60(&v246, (__int64 *)&v169)
    || !(unsigned __int8)sub_2AD40((__int64)&v246, (__int64 *)&v171, v162)
    || !(unsigned __int8)sub_28F70((__int64)&v246, (__int64 *)&v173) )
  {
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a4 + 264);
  if ( 80 * v9 > 0x63FFFFF )
  {
    v6 = "Maximum number of entries is too high";
    goto LABEL_4;
  }
  v155 = a2 + 16;
  if ( *(_QWORD *)(a2 + 32) < v9 )
    *(_QWORD *)(a2 + 16) = sub_1987B0(a2 + 16, *(_QWORD *)(a2 + 16), v9, 80);
  v176 = 0;
  v175 = nullptr;
  v157 = *(_DWORD *)(a4 + 16) & 4;
  sub_299F0((char **)&v175);
  v10 = s1;
  if ( (_QWORD)v176 )
    v10 = (const char *)v175;
  sub_318B0((__int64)&v165, a1, v10);
  if ( !v165 || !(unsigned __int8)sub_29560((__int64)&v246, v162, (__int64)&v165) )
    goto LABEL_190;
  unk_241E60(&v166, &v165, v162);
  if ( !v166 )
    goto LABEL_189;
  v184 = 0;
  v11 = 0;
  v186 = &v184;
  v187 = &v184;
  v192 = &v190;
  v193 = &v190;
  v198 = &v196;
  v199 = &v196;
  v204 = &v202;
  v205 = &v202;
  v210 = &v208;
  v211 = &v208;
  v185 = nullptr;
  v188 = 0;
  v190 = 0;
  v191 = nullptr;
  v194 = 0;
  v196 = 0;
  v197 = nullptr;
  v200 = 0;
  v202 = 0;
  v203 = nullptr;
  v206 = 0;
  v208 = 0;
  v209 = nullptr;
  v212 = 0;
  v214 = 0;
  v215 = nullptr;
  v216 = &v214;
  v217 = &v214;
  v222 = &v220;
  v223 = &v220;
  v218 = 0;
  v220 = 0;
  v221 = nullptr;
  v224 = 0;
  v226 = 0;
  v227 = nullptr;
  v228 = &v226;
  v229 = &v226;
  v230 = 0;
  v177 = nullptr;
  ptr = nullptr;
  v163 = 1;
  v178 = 0;
  v180 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)unk_241E70(&v166, v162) )
      goto LABEL_193;
    if ( *(_QWORD *)(a4 + 264) == v163 - 1 )
      break;
    v181 = nullptr;
    v182 = 0;
    v12 = sub_295D0(&v246, (__int64 *)&v181, (__int64)&v166, v162);
    v13 = (char *)v181;
    if ( !v12 )
    {
      if ( v181 )
      {
        if ( (_QWORD)v182 )
        {
          v139 = 0;
          v140 = v182;
          do
          {
            v141 = v139++;
            sub_176520(&v13[32 * v141]);
            v13 = (char *)v181;
          }
          while ( v140 != v139 );
        }
        *(_QWORD *)&v182 = 0;
        j__free(v13);
      }
      goto LABEL_184;
    }
    v244 = 0;
    *(_QWORD *)&v241[8] = -1;
    *(_QWORD *)&v241[16] = 0;
    v245 = 0;
    memset(v242, 0, sizeof(v242));
    v243 = 0;
    *(_QWORD *)v241 = *((_QWORD *)v181 + 4 * SDWORD2(v237) + 1);
    v244 = *((_QWORD *)v181 + 4 * SHIDWORD(v237) + 1);
    v14 = (char *)v181 + 32 * (int)v239;
    if ( &v241[16] != v14 + 8 )
    {
      v15 = *((_QWORD *)v14 + 2);
      if ( v15 > 1 )
      {
        v122 = *((const void **)v14 + 1);
        *(_QWORD *)&v241[16] = sub_1987B0(&v241[16], 0, *((_QWORD *)v14 + 2), 1);
        *(_QWORD *)v242 = v15;
        memmove(*(void **)&v241[16], v122, v15 - 1);
        *(_BYTE *)(*(_QWORD *)&v241[16] + v15 - 1) = 0;
        v13 = (char *)v181;
      }
    }
    HIDWORD(v245) = *(_QWORD *)&v13[32 * (int)v240 + 8];
    if ( v158 )
    {
      if ( SDWORD1(v237) < 0 || SDWORD1(v239) < 0 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1698);
        goto LABEL_269;
      }
      v16 = &v13[32 * SDWORD1(v239)];
      v17 = *((_QWORD *)v16 + 2);
      if ( v17 )
      {
        v18 = v17 - 1;
        v19 = v18;
        if ( v18 )
        {
          v20 = v243.m128i_i64[0];
          v21 = *((const void **)v16 + 1);
          v22 = v243.m128i_i64[0] + v18;
          if ( !__CFADD__(v243.m128i_i64[0], v18) )
            goto LABEL_35;
          if ( v243.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
          {
            v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_35:
            v23 = *(_QWORD *)&v242[16];
            v24 = v243.m128i_i64[0];
            if ( v243.m128i_i64[1] < v22 )
            {
              v153 = v22;
              *(_QWORD *)&v242[16] = sub_1987B0(&v242[16], *(_QWORD *)&v242[16], v22, 1);
              v23 = *(_QWORD *)&v242[16];
              v22 = v153;
              v24 = v243.m128i_i64[0];
            }
            v147 = v22;
            memset((void *)(v23 + v24), 0, v22 - v24);
            v243.m128i_i64[0] = v147;
          }
          else if ( v243.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          {
            v243.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v20 + *(_QWORD *)&v242[16]), v21, v19);
          v13 = (char *)v181;
        }
      }
    }
    v25 = v227;
    v26 = *(_QWORD *)&v13[32 * SDWORD2(v239) + 8];
    LODWORD(v167) = v26;
    v27 = v26;
    LODWORD(v168) = *(_QWORD *)&v13[32 * SHIDWORD(v239) + 8];
    if ( !v227 )
    {
      v35 = v230;
      v32 = &v226;
      goto LABEL_52;
    }
    v28 = &v226;
    v29 = v227;
    do
    {
      while ( 1 )
      {
        v30 = v29[2];
        v31 = v29[3];
        if ( *((_DWORD *)v29 + 8) < (unsigned int)v26 )
          break;
        v28 = (int *)v29;
        v29 = (_QWORD *)v29[2];
        if ( !v30 )
          goto LABEL_44;
      }
      v29 = (_QWORD *)v29[3];
    }
    while ( v31 );
LABEL_44:
    if ( v28 == &v226 || (unsigned int)v26 < v28[8] )
    {
      v32 = &v226;
      do
      {
        while ( 1 )
        {
          v33 = v25[2];
          v34 = v25[3];
          if ( *((_DWORD *)v25 + 8) < (unsigned int)v26 )
            break;
          v32 = (int *)v25;
          v25 = (_QWORD *)v25[2];
          if ( !v33 )
            goto LABEL_50;
        }
        v25 = (_QWORD *)v25[3];
      }
      while ( v34 );
LABEL_50:
      v35 = v230;
      if ( v32 == &v226 || (unsigned int)v26 < v32[8] )
      {
LABEL_52:
        *(_QWORD *)v231 = &v167;
        v36 = sub_2CED0(&v225, (__int64)v32, (unsigned int **)v231);
        v27 = v167;
        v32 = (int *)v36;
      }
      v32[9] = v35;
      v37 = *(_QWORD *)(a2 + 72);
      v38 = *(_QWORD *)(a2 + 64);
      if ( *(_QWORD *)(a2 + 80) < (unsigned __int64)(v37 + 1) )
      {
        v127 = sub_1987B0(a2 + 64, v38, v37 + 1, 4);
        *(_QWORD *)(a2 + 64) = v127;
        v38 = v127;
        v37 = *(_QWORD *)(a2 + 72);
      }
      *(_DWORD *)(v38 + 4 * v37) = v27;
      v39 = v178;
      ++*(_QWORD *)(a2 + 72);
      v40 = v168;
      v41 = v177;
      if ( *((_QWORD *)&v178 + 1) < (unsigned __int64)(v39 + 1) )
      {
        v177 = (void *)sub_1987B0(&v177, v177, v39 + 1, 4);
        v41 = v177;
        v39 = v178;
      }
      v41[v39] = v40;
      v42 = v180;
      *(_QWORD *)&v178 = v178 + 1;
      v43 = v244;
      v44 = ptr;
      if ( *((_QWORD *)&v180 + 1) < (unsigned __int64)(v180 + 1) )
      {
        ptr = (void *)sub_1987B0(&ptr, ptr, v180 + 1, 8);
        v44 = ptr;
        v42 = v180;
      }
      v44[v42] = v43;
      *(_QWORD *)&v180 = v180 + 1;
      goto LABEL_62;
    }
    v35 = v28[9];
    if ( v157 )
      *((_QWORD *)ptr + v35) = v244;
LABEL_62:
    LODWORD(v245) = v35;
    if ( (SDWORD1(v237) & 0x80000000) == 0 )
      *(_QWORD *)&v241[8] = *((_QWORD *)v181 + 4 * SDWORD1(v237) + 1);
    v45 = *(_QWORD *)(a2 + 24);
    v46 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v45 + 1) )
    {
      v115 = sub_1987B0(v155, v46, v45 + 1, 80);
      *(_QWORD *)(a2 + 16) = v115;
      v45 = *(_QWORD *)(a2 + 24);
      v46 = v115;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B10);
    memset(v231, 0, sizeof(v231));
    v48 = v46 + 80 * v45;
    *(_OWORD *)n = 0;
    src = nullptr;
    *(_QWORD *)(v48 + 16) = 0;
    *(__m128i *)v48 = si128;
    *(_OWORD *)(v48 + 24) = 0;
    v49 = *(_QWORD *)&v231[8];
    if ( *(_QWORD *)&v231[8] )
    {
      v114 = (void *)sub_198760(*(_QWORD *)&v231[8]);
      *(_QWORD *)(v48 + 16) = v114;
      *(_QWORD *)(v48 + 32) = v49;
      memcpy(v114, *(const void **)v231, v49);
      *(_QWORD *)(v48 + 24) = v49;
    }
    *(_QWORD *)(v48 + 40) = 0;
    *(_OWORD *)(v48 + 48) = 0;
    v50 = n[0];
    if ( n[0] )
    {
      v113 = (void *)sub_198760(n[0]);
      *(_QWORD *)(v48 + 40) = v113;
      *(_QWORD *)(v48 + 56) = v50;
      memcpy(v113, src, v50);
      *(_QWORD *)(v48 + 48) = v50;
    }
    if ( src )
    {
      n[0] = 0;
      j__free(src);
    }
    if ( *(_QWORD *)v231 )
    {
      *(_QWORD *)&v231[8] = 0;
      j__free(*(void **)v231);
    }
    *(_QWORD *)(v48 + 64) = 0;
    *(_QWORD *)(v48 + 72) = 0;
    v51 = *(_QWORD *)v241;
    ++*(_QWORD *)(a2 + 24);
    v52 = *(_QWORD *)v48;
    *(_QWORD *)v48 = v51;
    *(_QWORD *)v241 = v52;
    v53 = *(_QWORD *)(v48 + 8);
    *(_QWORD *)(v48 + 8) = *(_QWORD *)&v241[8];
    *(_QWORD *)&v241[8] = v53;
    v54 = *(_QWORD *)(v48 + 16);
    *(_QWORD *)(v48 + 16) = *(_QWORD *)&v241[16];
    v55 = _mm_loadu_si128((const __m128i *)(v48 + 24));
    *(_QWORD *)(v48 + 24) = *(_QWORD *)v242;
    *(_QWORD *)(v48 + 32) = *(_QWORD *)&v242[8];
    *(_QWORD *)&v241[16] = v54;
    *(__m128i *)v242 = v55;
    v56 = *(_QWORD *)(v48 + 40);
    v57 = _mm_loadu_si128((const __m128i *)(v48 + 48));
    *(_QWORD *)(v48 + 40) = *(_QWORD *)&v242[16];
    *(__m128i *)(v48 + 48) = v243;
    *(_QWORD *)&v242[16] = v56;
    v243 = v57;
    v58 = *(_QWORD *)(v48 + 64);
    *(_QWORD *)(v48 + 64) = v244;
    v244 = v58;
    LODWORD(v58) = *(_DWORD *)(v48 + 72);
    *(_DWORD *)(v48 + 72) = v245;
    LODWORD(v245) = v58;
    LODWORD(v58) = *(_DWORD *)(v48 + 76);
    *(_DWORD *)(v48 + 76) = HIDWORD(v245);
    HIDWORD(v245) = v58;
    if ( (int)v236 >= 0 )
    {
      v59 = *(_QWORD *)(a2 + 240);
      v60 = v35;
      if ( v35 >= v59 )
      {
        v61 = (char *)v181 + 32 * (int)v236;
        if ( *((_QWORD *)v61 + 2) != 17 )
        {
          if ( !unk_2439A0 )
            sub_198E10(1642);
          goto LABEL_269;
        }
        v62 = v35 + 1;
        if ( v62 == v59 )
        {
          v142 = (__m128i *)(*(_QWORD *)(a2 + 232) + 16 * v60);
        }
        else
        {
          v63 = *(_QWORD *)(a2 + 232);
          v261 = 0;
          if ( v62 >= v59 )
          {
            v64 = *(_QWORD *)(a2 + 248);
            v65 = a2 + 232;
            if ( (unsigned __int64)&v261 < v63 || (unsigned __int64)&v261 >= v63 + 16 * v64 )
            {
              if ( v64 < v62 )
              {
                v144 = sub_1987B0(v65, v63, v62, 16);
                *(_QWORD *)(a2 + 232) = v144;
                v59 = *(_QWORD *)(a2 + 240);
                v63 = v144;
              }
              if ( v59 < v62 )
              {
                v66 = v163;
                do
                {
                  v67 = v59++;
                  *(__m128i *)(v63 + 16 * v67) = _mm_load_si128(&v261);
                  v63 = *(_QWORD *)(a2 + 232);
                }
                while ( v62 != v59 );
                goto LABEL_87;
              }
            }
            else
            {
              if ( v64 < v62 )
              {
                v146 = sub_1987B0(v65, v63, v62, 16);
                *(_QWORD *)(a2 + 232) = v146;
                v59 = *(_QWORD *)(a2 + 240);
                v63 = v146;
              }
              if ( v59 < v62 )
              {
                v66 = v163;
                do
                {
                  v143 = v59++;
                  *(_OWORD *)(v63 + 16 * v143) = 0;
                  v63 = *(_QWORD *)(a2 + 232);
                }
                while ( v62 != v59 );
LABEL_87:
                v163 = v66;
              }
            }
          }
          *(_QWORD *)(a2 + 240) = v62;
          if ( *((_QWORD *)v61 + 2) != 17 )
            goto LABEL_89;
          v142 = (__m128i *)(v63 + 16 * v60);
        }
        *v142 = _mm_loadu_si128((const __m128i *)*((_QWORD *)v61 + 1));
      }
    }
LABEL_89:
    if ( (SDWORD2(v236) & 0x80000000) == 0 )
    {
      if ( SDWORD1(v236) < 0 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1702);
        goto LABEL_269;
      }
      v68 = *((_QWORD *)v181 + 4 * SDWORD1(v236) + 1);
      v69 = v185;
      *(_DWORD *)v231 = v68;
      if ( !v185 )
        goto LABEL_98;
      v70 = &v184;
      do
      {
        while ( 1 )
        {
          v71 = v69[2];
          v72 = v69[3];
          if ( *((_DWORD *)v69 + 8) < (unsigned int)v68 )
            break;
          v70 = (int *)v69;
          v69 = (_QWORD *)v69[2];
          if ( !v71 )
            goto LABEL_96;
        }
        v69 = (_QWORD *)v69[3];
      }
      while ( v72 );
LABEL_96:
      if ( v70 != &v184 && (unsigned int)v68 >= v70[8] )
      {
        v74 = v70[9];
      }
      else
      {
LABEL_98:
        v73 = (char *)v181 + 32 * SDWORD2(v236);
        if ( *((_QWORD *)v73 + 2) != 17 )
        {
          if ( !unk_2439A0 )
            sub_198E10(1703);
          goto LABEL_269;
        }
        v123 = *(_QWORD *)(a2 + 120);
        v74 = v123;
        *(_DWORD *)sub_31F80(&v183, (unsigned int *)v231) = v123;
        v124 = *(_QWORD *)(a2 + 120);
        v125 = *(_QWORD *)(a2 + 112);
        if ( *(_QWORD *)(a2 + 128) < (unsigned __int64)(v124 + 1) )
        {
          v138 = sub_1987B0(a2 + 112, v125, v124 + 1, 16);
          *(_QWORD *)(a2 + 112) = v138;
          v125 = v138;
          v124 = *(_QWORD *)(a2 + 120);
        }
        v126 = (__m128i *)(16 * v124 + v125);
        *v126 = 0;
        ++*(_QWORD *)(a2 + 120);
        if ( *((_QWORD *)v73 + 2) == 17 )
          *v126 = _mm_loadu_si128((const __m128i *)*((_QWORD *)v73 + 1));
      }
      sub_32030((__int64 *)(a2 + 88), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + v11) = v74;
    }
    v75 = SHIDWORD(v236);
    if ( v236 >= 0 )
    {
      if ( SDWORD1(v236) < 0 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1706);
        goto LABEL_269;
      }
      v76 = v181;
      v77 = *((_QWORD *)v181 + 4 * SDWORD1(v236) + 1);
      v78 = v191;
      *(_DWORD *)v231 = v77;
      if ( !v191 )
        goto LABEL_112;
      v79 = &v190;
      do
      {
        while ( 1 )
        {
          v80 = v78[2];
          v81 = v78[3];
          if ( *((_DWORD *)v78 + 8) < (unsigned int)v77 )
            break;
          v79 = (int *)v78;
          v78 = (_QWORD *)v78[2];
          if ( !v80 )
            goto LABEL_110;
        }
        v78 = (_QWORD *)v78[3];
      }
      while ( v81 );
LABEL_110:
      if ( v79 != &v190 && (unsigned int)v77 >= v79[8] )
      {
        v82 = v79[9];
      }
      else
      {
LABEL_112:
        v148 = *(_QWORD *)(a2 + 168);
        v82 = v148;
        *(_DWORD *)sub_31F80(&v189, (unsigned int *)v231) = v148;
        sub_319C0((__int64 *)(a2 + 160), (__int64)v76 + 32 * v75 + 8);
      }
      sub_32030((__int64 *)(a2 + 136), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 136) + v11) = v82;
    }
    if ( (int)v237 >= 0 )
    {
      v83 = v197;
      if ( !v197 )
        goto LABEL_122;
      v84 = &v196;
      do
      {
        while ( 1 )
        {
          v85 = v83[2];
          v86 = v83[3];
          if ( *((_DWORD *)v83 + 8) < (unsigned int)v168 )
            break;
          v84 = (int *)v83;
          v83 = (_QWORD *)v83[2];
          if ( !v85 )
            goto LABEL_120;
        }
        v83 = (_QWORD *)v83[3];
      }
      while ( v86 );
LABEL_120:
      if ( v84 != &v196 && (unsigned int)v168 >= v84[8] )
      {
        v89 = v84[9];
      }
      else
      {
LABEL_122:
        v87 = *(_QWORD *)(a2 + 216);
        v88 = (char *)v181 + 32 * (int)v237 + 8;
        v89 = v87;
        *(_DWORD *)sub_31F80(&v195, (unsigned int *)&v168) = v87;
        sub_319C0((__int64 *)(a2 + 208), (__int64)v88);
      }
      sub_32030((__int64 *)(a2 + 184), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 184) + v11) = v89;
    }
    if ( (int)v238 >= 0 )
    {
      v90 = (char *)v181 + 32 * (int)v238 + 8;
      v91 = (int *)sub_327C0((__int64)&v201, (__int64)v90);
      if ( v91 == &v202 )
      {
        v149 = *(_QWORD *)(a2 + 288);
        v92 = v149;
        *(_DWORD *)sub_3D640(&v201, (__int64)v90) = v149;
        sub_319C0((__int64 *)(a2 + 280), (__int64)v90);
      }
      else
      {
        v92 = v91[14];
      }
      sub_32030((__int64 *)(a2 + 256), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 256) + v11) = v92;
    }
    if ( (SDWORD1(v238) & 0x80000000) == 0 )
    {
      v93 = (char *)v181 + 32 * SDWORD1(v238) + 8;
      v94 = (int *)sub_327C0((__int64)&v207, (__int64)v93);
      if ( v94 == &v208 )
      {
        v150 = *(_QWORD *)(a2 + 336);
        v95 = v150;
        *(_DWORD *)sub_3D640(&v207, (__int64)v93) = v150;
        sub_319C0((__int64 *)(a2 + 328), (__int64)v93);
      }
      else
      {
        v95 = v94[14];
      }
      sub_32030((__int64 *)(a2 + 304), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 304) + v11) = v95;
    }
    if ( (SDWORD2(v238) & 0x80000000) == 0 )
    {
      v96 = (char *)v181 + 32 * SDWORD2(v238) + 8;
      v97 = (int *)sub_327C0((__int64)&v213, (__int64)v96);
      if ( v97 == &v214 )
      {
        v151 = *(_QWORD *)(a2 + 384);
        v98 = v151;
        *(_DWORD *)sub_3D640(&v213, (__int64)v96) = v151;
        sub_319C0((__int64 *)(a2 + 376), (__int64)v96);
      }
      else
      {
        v98 = v97[14];
      }
      sub_32030((__int64 *)(a2 + 352), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 352) + v11) = v98;
    }
    if ( v238 >= 0 )
    {
      v99 = (char *)v181 + 32 * SHIDWORD(v238) + 8;
      v100 = (int *)sub_327C0((__int64)&v219, (__int64)v99);
      if ( v100 == &v220 )
      {
        v152 = *(_QWORD *)(a2 + 432);
        v101 = v152;
        *(_DWORD *)sub_3D640(&v219, (__int64)v99) = v152;
        sub_319C0((__int64 *)(a2 + 424), (__int64)v99);
      }
      else
      {
        v101 = v100[14];
      }
      sub_32030((__int64 *)(a2 + 400), v163);
      *(_DWORD *)(*(_QWORD *)(a2 + 400) + v11) = v101;
    }
    if ( (*(_BYTE *)(a4 + 16) & 8) != 0 )
    {
      v102 = *(_QWORD *)(a2 + 48);
      v103 = *(_QWORD *)(a2 + 40);
      if ( *(_QWORD *)(a2 + 56) < (unsigned __int64)(v102 + 1) )
      {
        v118 = sub_1987B0(a2 + 40, v103, v102 + 1, 72);
        *(_QWORD *)(a2 + 40) = v118;
        v102 = *(_QWORD *)(a2 + 48);
        v103 = v118;
      }
      v104 = _mm_load_si128((const __m128i *)&xmmword_1B6B10);
      memset(v231, 0, sizeof(v231));
      v105 = v103 + 72 * v102;
      src = nullptr;
      *(_OWORD *)n = 0;
      *(_QWORD *)(v105 + 16) = 0;
      *(__m128i *)v105 = v104;
      *(_OWORD *)(v105 + 24) = 0;
      v106 = *(_QWORD *)&v231[8];
      if ( *(_QWORD *)&v231[8] )
      {
        v117 = (void *)sub_198760(*(_QWORD *)&v231[8]);
        *(_QWORD *)(v105 + 16) = v117;
        *(_QWORD *)(v105 + 32) = v106;
        memcpy(v117, *(const void **)v231, v106);
        *(_QWORD *)(v105 + 24) = v106;
      }
      *(_QWORD *)(v105 + 40) = 0;
      *(_OWORD *)(v105 + 48) = 0;
      v107 = n[0];
      if ( n[0] )
      {
        v116 = (void *)sub_198760(n[0]);
        *(_QWORD *)(v105 + 40) = v116;
        *(_QWORD *)(v105 + 56) = v107;
        memcpy(v116, src, v107);
        *(_QWORD *)(v105 + 48) = v107;
      }
      if ( src )
      {
        n[0] = 0;
        j__free(src);
      }
      if ( *(_QWORD *)v231 )
      {
        *(_QWORD *)&v231[8] = 0;
        j__free(*(void **)v231);
      }
      *(_BYTE *)(v105 + 64) = 0;
      ++*(_QWORD *)(a2 + 48);
      *(_BYTE *)(v105 + 64) = 0;
      sub_2DCF0(v105 + 16, (__int64)v181 + 32 * SDWORD1(v240) + 8);
      v108 = (char *)v181;
      *(_QWORD *)(v105 + 8) = *((_QWORD *)v181 + 4 * SDWORD2(v240) + 1);
      if ( v158 )
      {
        v119 = &v108[32 * SHIDWORD(v240)];
        v120 = *((_QWORD *)v119 + 2);
        if ( v120 )
        {
          v121 = v120 - 1;
          if ( v121 )
            sub_2DB60((__int64 *)(v105 + 40), *((const void **)v119 + 1), v121);
        }
      }
    }
    if ( *(_QWORD *)&v242[16] )
    {
      v243.m128i_i64[0] = 0;
      j__free(*(void **)&v242[16]);
    }
    if ( *(_QWORD *)&v241[16] )
    {
      *(_QWORD *)v242 = 0;
      j__free(*(void **)&v241[16]);
    }
    v109 = (char *)v181;
    if ( v181 )
    {
      v110 = v182;
      if ( (_QWORD)v182 )
      {
        v111 = 0;
        do
        {
          v112 = v111++;
          sub_176520(&v109[32 * v112]);
          v109 = (char *)v181;
        }
        while ( v110 != v111 );
      }
      *(_QWORD *)&v182 = 0;
      j__free(v109);
    }
    ++v163;
    v11 += 4;
  }
  *(_BYTE *)(a2 + 448) = 1;
LABEL_193:
  v128 = v230;
  v160 = *(_QWORD *)(a2 + 72);
  if ( v160 != v230 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1639);
    goto LABEL_269;
  }
  if ( v160 != (_QWORD)v180 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1640);
    goto LABEL_269;
  }
  if ( (*(_BYTE *)(a4 + 16) & 8) != 0 )
    goto LABEL_222;
  v159 = a2 + 40;
  if ( *(_QWORD *)(a2 + 56) < v160 )
  {
    *(_QWORD *)(a2 + 40) = sub_1987B0(v159, *(_QWORD *)(a2 + 40), v160, 72);
  }
  else if ( !v160 )
  {
    goto LABEL_222;
  }
  v164 = 0;
  while ( 2 )
  {
    v137 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 4 * v164);
    sub_318B0(
      (__int64)&v167,
      a1,
      "SELECT name, ea, metadata, time FROM history WHERE fk_func = ? AND time > ? ORDER BY time ASC LIMIT 1");
    if ( !v167
      || !(unsigned __int8)sub_2F9D0(
                             v162,
                             (__int64)&v167,
                             (__int64)"ut",
                             v137,
                             (unsigned __int64)(unsigned int)(*((_DWORD *)ptr + 2 * v164 + 1) + 1) << 32) )
    {
      goto LABEL_183;
    }
    unk_241E60(&v168, &v167, v162);
    if ( !v168 )
      goto LABEL_182;
    memset(v241, 0, sizeof(v241));
    memset(v242, 0, sizeof(v242));
    *(__m128i *)v231 = _mm_load_si128((const __m128i *)&xmmword_1B6B10);
    sub_2F860((__int64)&v231[16], (__int64)v241);
    if ( *(_QWORD *)v242 )
    {
      *(_QWORD *)&v242[8] = 0;
      j__free(*(void **)v242);
    }
    if ( *(_QWORD *)v241 )
    {
      *(_QWORD *)&v241[8] = 0;
      j__free(*(void **)v241);
    }
    v235 = 0;
    v235 = unk_241E70(&v168, v162);
    if ( v235 )
    {
      if ( !(unsigned __int8)sub_2F910(v162, (__int64)&v168, (__int64)"sUBt", &v231[16], &v231[8], &n[1], v241) )
        goto LABEL_181;
    }
    else
    {
      sub_318B0((__int64)&v181, a1, "SELECT name, ea, metadata FROM funcs WHERE id = ?");
      if ( !v181 || !(unsigned __int8)sub_2F9D0(v162, (__int64)&v181, (__int64)"u", v137) )
        goto LABEL_180;
      unk_241E60(v241, &v181, v162);
      if ( !*(_QWORD *)v241 )
        goto LABEL_179;
      if ( (unsigned __int8)unk_241E70(v241, v162) )
      {
        if ( (unsigned __int8)sub_2F910(v162, (__int64)v241, (__int64)"sUB", &v231[16], &v231[8], &n[1]) )
          goto LABEL_220;
LABEL_179:
        sub_33A10(v241);
LABEL_180:
        sub_32C50(&v181);
LABEL_181:
        sub_2F820((__int64)&v231[16]);
LABEL_182:
        sub_33A10(&v168);
LABEL_183:
        sub_32C50(&v167);
LABEL_184:
        if ( ptr )
        {
          *(_QWORD *)&v180 = 0;
          j__free(ptr);
        }
        if ( v177 )
        {
          *(_QWORD *)&v178 = 0;
          j__free(v177);
        }
        sub_2EF10(v227);
        sub_2DA90(v221);
        sub_2DA90(v215);
        sub_2DA90(v209);
        sub_2DA90(v203);
        sub_2EF10(v197);
        sub_2EF10(v191);
        sub_2EF10(v185);
LABEL_189:
        sub_33A10(&v166);
LABEL_190:
        sub_32C50(&v165);
        if ( v175 )
        {
          *(_QWORD *)&v176 = 0;
          j__free(v175);
        }
LABEL_3:
        v6 = "Error executing query";
LABEL_4:
        if ( v173 )
        {
          *(_QWORD *)&v174 = 0;
          j__free(v173);
        }
        if ( v171 )
        {
          *(_QWORD *)&v172 = 0;
          j__free(v171);
        }
        if ( v169 )
        {
          *(_QWORD *)&v170 = 0;
          j__free(v169);
        }
        sub_2DC20((__int64 *)(a3 + 16), v6);
        v7 = -1;
        goto LABEL_11;
      }
      sub_2F0E0(a1, (__int64)"WARNING: No data in funcs table although changes are present in history\n");
LABEL_220:
      sub_33A10(v241);
      sub_32C50(&v181);
    }
    *(__m128i *)v241 = _mm_load_si128((const __m128i *)v231);
    sub_2F860((__int64)&v241[16], (__int64)&v231[16]);
    v129 = v235;
    v130 = *(_QWORD *)(a2 + 48);
    v131 = *(_QWORD *)(a2 + 40);
    LOBYTE(v244) = v235;
    if ( *(_QWORD *)(a2 + 56) < (unsigned __int64)(v130 + 1) )
    {
      v145 = sub_1987B0(v159, v131, v130 + 1, 72);
      *(_QWORD *)(a2 + 40) = v145;
      v130 = *(_QWORD *)(a2 + 48);
      v131 = v145;
    }
    v132 = v131 + 72 * v130;
    *(__m128i *)v132 = _mm_load_si128((const __m128i *)v241);
    v133 = _mm_loadu_si128((const __m128i *)v242);
    *(_QWORD *)(v132 + 16) = *(_QWORD *)&v241[16];
    *(__m128i *)(v132 + 24) = v133;
    v134 = *(_QWORD *)&v242[16];
    v135 = _mm_load_si128(&v243);
    *(_BYTE *)(v132 + 64) = v129;
    *(_QWORD *)(v132 + 40) = v134;
    *(__m128i *)(v132 + 48) = v135;
    v136 = (void *)n[1];
    ++*(_QWORD *)(a2 + 48);
    if ( v136 )
    {
      v234 = 0;
      j__free(v136);
    }
    if ( *(_QWORD *)&v231[16] )
    {
      src = nullptr;
      j__free(*(void **)&v231[16]);
    }
    sub_33A10(&v168);
    sub_32C50(&v167);
    if ( ++v164 != v160 )
      continue;
    break;
  }
  v128 = v230;
LABEL_222:
  if ( *(_QWORD *)(a2 + 48) != v128 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1641);
    goto LABEL_269;
  }
  if ( ptr )
  {
    *(_QWORD *)&v180 = 0;
    j__free(ptr);
  }
  if ( v177 )
  {
    *(_QWORD *)&v178 = 0;
    j__free(v177);
  }
  sub_2EF10(v227);
  sub_2DA90(v221);
  sub_2DA90(v215);
  sub_2DA90(v209);
  sub_2DA90(v203);
  sub_2EF10(v197);
  sub_2EF10(v191);
  sub_2EF10(v185);
  sub_33A10(&v166);
  sub_32C50(&v165);
  if ( v175 )
  {
    *(_QWORD *)&v176 = 0;
    j__free(v175);
  }
  if ( v173 )
  {
    *(_QWORD *)&v174 = 0;
    j__free(v173);
  }
  if ( v171 )
  {
    *(_QWORD *)&v172 = 0;
    j__free(v171);
  }
  if ( v169 )
  {
    *(_QWORD *)&v170 = 0;
    j__free(v169);
  }
  v7 = 0;
LABEL_11:
  sub_30780(&v246);
  return v7;
}
