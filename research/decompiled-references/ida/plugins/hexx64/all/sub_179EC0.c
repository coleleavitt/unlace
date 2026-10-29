__int64 __fastcall sub_179EC0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __int64 a8,
        int a9,
        unsigned int a10)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned int v16; // ebx
  __int64 *v18; // r14
  int v19; // r13d
  __int64 v20; // rbx
  int v21; // edx
  unsigned __int64 v22; // rdx
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // r14
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // r14d
  unsigned int v48; // ebx
  __m128i si128; // xmm0
  unsigned __int64 **p_src; // rsi
  __int64 v51; // r8
  int v52; // r9d
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdi
  __m128i *v60; // rdx
  __int64 v61; // rcx
  __int64 *v62; // r8
  _QWORD *v63; // rdx
  __int64 *v64; // rsi
  __int64 v65; // rcx
  __m128i v66; // xmm0
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r13
  void *v71; // rbx
  __int64 *v72; // rsi
  __int64 v73; // rcx
  unsigned __int64 v74; // r13
  void *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r13
  __int64 v78; // rdi
  __int64 v79; // r13
  size_t v80; // r15
  __int64 v81; // rbx
  __int64 v82; // rax
  unsigned __int64 v83; // r13
  unsigned __int64 v84; // rsi
  __int64 v85; // r13
  __int64 v86; // r15
  int i; // r13d
  unsigned __int64 v88; // rdx
  int v89; // eax
  void *v90; // rax
  const void *v91; // rsi
  __int64 v92; // r15
  unsigned __int64 v93; // r13
  __int64 v94; // rbx
  __int64 v95; // rsi
  __int64 v96; // rax
  size_t v97; // rbx
  int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // r14
  __int64 *v103; // r13
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  int v109; // r15d
  __int64 (__fastcall ***v110)(); // rcx
  char *v111; // rax
  unsigned __int64 **v112; // r14
  unsigned __int64 *v113; // rcx
  unsigned __int64 *v114; // rsi
  unsigned __int64 *v115; // rbx
  __int64 v116; // r15
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rsi
  _QWORD *v120; // rcx
  _QWORD *v121; // rsi
  int v122; // ebx
  _QWORD *v123; // rbx
  _QWORD *v124; // rdx
  _QWORD *v125; // rax
  __int64 v126; // rax
  _DWORD *v127; // rsi
  unsigned __int64 v128; // rsi
  __int64 v129; // rax
  unsigned __int64 v130; // rbx
  __int64 v131; // rcx
  __int64 v132; // r8
  int v133; // r9d
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rdi
  __int64 v137; // rax
  __int64 (__fastcall *v138)(__int64); // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rbx
  int v141; // r14d
  int v142; // esi
  __int64 *v143; // rax
  __int64 *v144; // rdx
  __int64 *j; // r14
  __int64 v146; // rdx
  int v147; // edi
  __int64 (__fastcall *v148)(__int64, int); // rax
  int v149; // eax
  __int64 v150; // r15
  __int64 v151; // r13
  __int64 (__fastcall *v152)(__int64, int, int); // rax
  int v153; // eax
  int v154; // r10d
  __int64 *v155; // rdi
  __int64 v156; // rcx
  _DWORD *v157; // rdx
  _DWORD *v158; // rax
  __int64 (__fastcall *v159)(__int64, int); // rax
  int v160; // eax
  __int64 v161; // r13
  __int64 v162; // r15
  __int64 (__fastcall *v163)(__int64, int, int); // rax
  int v164; // eax
  int v165; // r10d
  __int64 *v166; // rdi
  __int64 v167; // rsi
  __int64 v168; // rcx
  _DWORD *v169; // rdx
  _DWORD *v170; // rax
  __int64 v171; // r12
  unsigned __int64 v172; // rsi
  _DWORD *v173; // rsi
  __int64 v174; // rax
  __int64 *v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 *v178; // rdi
  __int64 v179; // rax
  __int64 v180; // rsi
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 *v185; // r15
  size_t v186; // r14
  size_t v187; // r15
  __int64 v188; // rsi
  __int64 *v189; // r8
  __int64 v190; // r14
  size_t v191; // r13
  size_t v192; // r15
  __int64 v193; // rax
  unsigned __int64 v194; // r15
  __int64 v195; // rbx
  int v196; // eax
  int k; // r14d
  int v198; // eax
  __m128i *v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rdx
  __int64 v202; // rax
  _DWORD *v203; // r14
  __int64 v204; // r8
  unsigned int v205; // eax
  _QWORD *v206; // rdx
  unsigned __int64 v207; // rax
  __int64 (__fastcall **v208)(); // rsi
  int v209; // r14d
  __int64 v210; // rax
  __int64 v211; // rax
  size_t v212; // rax
  __int64 v213; // rsi
  size_t v214; // r15
  unsigned __int64 v215; // rbx
  __int64 v216; // rax
  unsigned __int64 v217; // rbx
  size_t v218; // r15
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 *v221; // [rsp+0h] [rbp-400h]
  int v222; // [rsp+0h] [rbp-400h]
  int v223; // [rsp+0h] [rbp-400h]
  int v224; // [rsp+0h] [rbp-400h]
  __m128i *v225; // [rsp+8h] [rbp-3F8h]
  size_t v226[2]; // [rsp+10h] [rbp-3F0h] BYREF
  __int64 *v227; // [rsp+20h] [rbp-3E0h]
  __int64 v228; // [rsp+28h] [rbp-3D8h]
  __m128i v229; // [rsp+30h] [rbp-3D0h] BYREF
  __int64 v230; // [rsp+40h] [rbp-3C0h]
  size_t n; // [rsp+48h] [rbp-3B8h]
  __int64 *v232; // [rsp+50h] [rbp-3B0h]
  __int64 *v233; // [rsp+58h] [rbp-3A8h]
  __int64 *v234; // [rsp+60h] [rbp-3A0h]
  __int64 *v235; // [rsp+68h] [rbp-398h]
  size_t v236; // [rsp+70h] [rbp-390h]
  __int64 *v237; // [rsp+78h] [rbp-388h]
  int v238; // [rsp+80h] [rbp-380h]
  unsigned int v239; // [rsp+84h] [rbp-37Ch]
  __int64 *v240; // [rsp+88h] [rbp-378h]
  size_t v241[2]; // [rsp+90h] [rbp-370h] BYREF
  unsigned int v242; // [rsp+ACh] [rbp-354h] BYREF
  __int64 v243[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 v244; // [rsp+C0h] [rbp-340h] BYREF
  int v245; // [rsp+C8h] [rbp-338h]
  _DWORD *v246; // [rsp+D0h] [rbp-330h] BYREF
  __int128 v247; // [rsp+D8h] [rbp-328h]
  unsigned __int64 v248; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v249; // [rsp+F8h] [rbp-308h]
  __int64 (__fastcall ***v250)(); // [rsp+110h] [rbp-2F0h] BYREF
  __int128 v251; // [rsp+118h] [rbp-2E8h]
  _QWORD *v252; // [rsp+130h] [rbp-2D0h] BYREF
  __int128 v253; // [rsp+138h] [rbp-2C8h]
  __int64 v254; // [rsp+150h] [rbp-2B0h] BYREF
  __int128 v255; // [rsp+158h] [rbp-2A8h]
  __int64 v256; // [rsp+170h] [rbp-290h] BYREF
  __int128 v257; // [rsp+178h] [rbp-288h]
  __int64 v258[2]; // [rsp+190h] [rbp-270h] BYREF
  int v259; // [rsp+1A0h] [rbp-260h]
  __int64 v260[2]; // [rsp+1B0h] [rbp-250h] BYREF
  int v261; // [rsp+1C0h] [rbp-240h]
  __int64 (__fastcall **v262)(); // [rsp+1D0h] [rbp-230h] BYREF
  __int64 v263[2]; // [rsp+1D8h] [rbp-228h] BYREF
  char v264; // [rsp+1E8h] [rbp-218h]
  __int64 v265; // [rsp+1F0h] [rbp-210h] BYREF
  int v266; // [rsp+1F8h] [rbp-208h]
  void *src; // [rsp+200h] [rbp-200h] BYREF
  __int128 v268; // [rsp+208h] [rbp-1F8h]
  unsigned __int64 *v269[2]; // [rsp+220h] [rbp-1E0h] BYREF
  size_t v270; // [rsp+230h] [rbp-1D0h]
  __m128i v271; // [rsp+238h] [rbp-1C8h]
  unsigned __int64 *v272[2]; // [rsp+250h] [rbp-1B0h] BYREF
  unsigned __int64 *v273; // [rsp+260h] [rbp-1A0h] BYREF
  __int128 v274; // [rsp+268h] [rbp-198h]
  __int64 v275; // [rsp+280h] [rbp-180h] BYREF
  int v276; // [rsp+288h] [rbp-178h] BYREF
  _QWORD *v277; // [rsp+290h] [rbp-170h]
  int *v278; // [rsp+298h] [rbp-168h]
  int *v279; // [rsp+2A0h] [rbp-160h]
  __int64 v280; // [rsp+2A8h] [rbp-158h]
  __int64 (__fastcall **v281)(); // [rsp+2B0h] [rbp-150h] BYREF
  _BYTE v282[24]; // [rsp+2B8h] [rbp-148h] BYREF
  __int64 v283[2]; // [rsp+2D0h] [rbp-130h] BYREF
  int v284; // [rsp+2E0h] [rbp-120h]
  __int64 v285; // [rsp+2E8h] [rbp-118h] BYREF
  int v286; // [rsp+2F8h] [rbp-108h]
  int v287; // [rsp+300h] [rbp-100h]
  unsigned __int64 *v288; // [rsp+308h] [rbp-F8h]
  __int64 (__fastcall **v289)(); // [rsp+310h] [rbp-F0h] BYREF
  __int64 v290; // [rsp+318h] [rbp-E8h]
  __int128 v291; // [rsp+320h] [rbp-E0h]
  char v292; // [rsp+330h] [rbp-D0h]
  unsigned __int64 v293; // [rsp+334h] [rbp-CCh]
  __int64 v294; // [rsp+340h] [rbp-C0h]
  __int128 v295; // [rsp+348h] [rbp-B8h]
  __int64 v296; // [rsp+358h] [rbp-A8h]
  __int128 v297; // [rsp+360h] [rbp-A0h]
  __int64 v298; // [rsp+370h] [rbp-90h]
  __int128 v299; // [rsp+378h] [rbp-88h]
  __int64 v300; // [rsp+388h] [rbp-78h]
  __int128 v301; // [rsp+390h] [rbp-70h]
  int v302; // [rsp+3A0h] [rbp-60h]
  __int64 v303; // [rsp+3A8h] [rbp-58h]
  __int128 v304; // [rsp+3B0h] [rbp-50h]
  unsigned __int64 v305; // [rsp+3C8h] [rbp-38h]

  v240 = a1;
  v234 = a2;
  v230 = a8;
  LODWORD(v235) = a4;
  v239 = a5;
  LODWORD(v232) = a9;
  LOBYTE(v227) = a9;
  v305 = __readfsqword(0x28u);
  v237 = &v265;
  sub_64000(&v265, a3, a7);
  v15 = *(_QWORD *)(a3 + 24);
  src = nullptr;
  v268 = 0;
  if ( v15 )
  {
    v90 = (void *)qalloc_or_throw(16 * v15, a3, v13, v14);
    v91 = *(const void **)(a3 + 16);
    src = v90;
    *((_QWORD *)&v268 + 1) = v15;
    memcpy(v90, v91, 16 * v15);
    *(_QWORD *)&v268 = v15;
  }
  v269[0] = nullptr;
  v271 = 0;
  v269[1] = nullptr;
  v270 = 0;
  v238 = (unsigned __int8)v232;
  if ( sub_1787A0(v240, v234, &v242, v237, (unsigned int)v235, v239, 0.0, a6, v230, (char)v232, a10) )
  {
    v16 = v242;
    goto LABEL_5;
  }
  v243[0] = 0;
  v243[1] = 0;
  sub_64190(v243, (int)v235, 0.0);
  if ( v239 != -1 )
    sub_6FCF0((__int64)v240, v239, v243, 0.0);
  v262 = off_4DBB18;
  v263[0] = 0;
  v263[1] = 0;
  v264 = 0;
  sub_6F590((__int64 *)&v262, v240, (int)v235, 0);
  v18 = v263;
  if ( v239 != -1 )
  {
    sub_64700(v243, v263);
    v18 = v243;
  }
  v16 = 0;
  if ( (unsigned __int8)sub_64880(v18) )
    goto LABEL_83;
  v246 = nullptr;
  v247 = 0;
  LODWORD(v233) = -1;
  v19 = sub_64960(v18, 0);
  v20 = -1;
  while ( v19 != *((_DWORD *)v18 + 2) )
  {
    v174 = v247;
    if ( (_DWORD)v235 == v19 )
    {
      v20 = (int)v247;
    }
    else
    {
      v21 = (int)v233;
      if ( v19 == v239 )
        v21 = v247;
      LODWORD(v233) = v21;
    }
    v173 = v246;
    LODWORD(v289) = v19;
    v22 = v247 + 1;
    if ( &v289 < (__int64 (__fastcall ***)())v246 || &v289 >= (__int64 (__fastcall ***)())&v246[*((_QWORD *)&v247 + 1)] )
    {
      if ( *((_QWORD *)&v247 + 1) < v22 )
      {
        v246 = (_DWORD *)qvector_reserve((__int64)&v246, (__int64)v246, v22, 4);
        v173 = v246;
        v23 = (int)v289;
        v174 = v247;
      }
      else
      {
        v23 = v19;
      }
      v173[v174] = v23;
    }
    else
    {
      if ( *((_QWORD *)&v247 + 1) < v22 )
      {
        v246 = (_DWORD *)qvector_reserve((__int64)&v246, (__int64)v246, v22, 4);
        v173 = v246;
        v174 = v247;
      }
      v173[v174] = v19;
    }
    *(_QWORD *)&v247 = v247 + 1;
    v19 = sub_64960(v18, v19 + 1);
  }
  if ( (_DWORD)v20 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC56Eu, 0.0);
    goto LABEL_372;
  }
  if ( (_DWORD)v20 )
  {
    v246[v20] = *v246;
    *v246 = (_DWORD)v235;
  }
  v47 = v247;
  if ( (_DWORD)v233 != -1 && (int)v233 != (_QWORD)v247 - 1LL )
  {
    v48 = v239;
    v246[(int)v233] = v246[(_QWORD)v247 - 1];
    v246[(_QWORD)v247 - 1] = v48;
    v47 = v247;
  }
  si128.m128i_i64[0] = 0;
  LODWORD(v236) = v47;
  v248 = 0;
  v250 = nullptr;
  v252 = nullptr;
  v254 = 0;
  v256 = 0;
  v249 = 0;
  v251 = 0;
  v253 = 0;
  v255 = 0;
  v257 = 0;
  if ( v47 )
  {
    p_src = nullptr;
    v256 = qvector_reserve((__int64)&v256, 0, v47, 24);
    if ( (unsigned __int64)v257 < v47 )
    {
      si128.m128i_i64[0] = 0;
      v53 = v257 + 1;
      v54 = 24 * v257;
      v55 = 24 * v257 + v256;
      *(_QWORD *)v55 = 0;
      *(_OWORD *)(v55 + 8) = 0;
      if ( v53 < v47 )
      {
        v56 = v54 + 24;
        do
        {
          ++v53;
          v57 = v56 + v256;
          v56 += 24;
          *(_QWORD *)v57 = 0;
          *(_OWORD *)(v57 + 8) = 0;
        }
        while ( v47 != v53 );
      }
    }
    v58 = (unsigned int)v236;
    *(_QWORD *)&v257 = v47;
    if ( (int)v236 > 0 )
    {
      v241[0] = 0;
      v228 = 4LL * (unsigned int)(v47 - 1) + 4;
      while ( 1 )
      {
        v67 = v240[5];
        v68 = *(unsigned int *)((char *)v246 + v241[0]);
        if ( (unsigned int)v68 >= *(_DWORD *)(v67 + 64) )
          break;
        v69 = *(_QWORD *)(v67 + 528);
        v70 = *(_QWORD *)(v69 + 8 * v68);
        if ( (*(_DWORD *)(v70 + 24) & 0x600) != 0x200 )
        {
          p_src = nullptr;
          sub_A7590(v70, 0, v69, v58, v51, v52);
        }
        v62 = (__int64 *)(v256 + 6 * v241[0]);
        v60 = (__m128i *)(v70 + 200);
        v229.m128i_i8[0] = a10 & 1;
        if ( (a10 & 1) == 0 )
          v60 = (__m128i *)(v70 + 240);
        v71 = nullptr;
        v61 = v60[1].m128i_i64[1];
        if ( v61 )
        {
          v221 = (__int64 *)(v256 + 6 * v241[0]);
          v225 = v60;
          v226[0] = v60[1].m128i_u64[1];
          n = 16 * v61;
          v71 = (void *)qalloc_or_throw(16 * v61, (__int64)p_src, (__int64)v60, v61);
          memcpy(v71, (const void *)v225[1].m128i_i64[0], n);
          v62 = v221;
          v61 = v226[0];
        }
        v59 = *v62;
        si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v61);
        if ( *v62 )
        {
          v62[1] = 0;
          n = (size_t)v62;
          *(__m128i *)v226 = si128;
          qfree(v59);
          si128 = _mm_load_si128((const __m128i *)v226);
          v62 = (__int64 *)n;
        }
        *v62 = (__int64)v71;
        *(__m128i *)(v62 + 1) = si128;
        p_src = (unsigned __int64 **)&src;
        n = (size_t)&src;
        sub_3180C0(v62, (__int64)&src, v60, v61);
        if ( ((unsigned __int8)v227 & 1) != 0 && *(_DWORD *)(v70 + 72) != (_DWORD)v235 )
        {
          v63 = (_QWORD *)(v70 + 200);
          if ( v229.m128i_i8[0] )
            v63 = (_QWORD *)(v70 + 240);
          v229.m128i_i64[0] = (__int64)v63;
          if ( (unsigned __int8)sub_64780(v63, v237)
            || (p_src = (unsigned __int64 **)n,
                (unsigned __int8)sub_318470((unsigned __int64 **)(v229.m128i_i64[0] + 16), n)) )
          {
            v64 = v237;
            sub_648D0((__int64 *)v269, (const void **)v237, *(double *)si128.m128i_i64);
            n = 0;
            v229.m128i_i64[0] = v268;
            if ( (_QWORD)v268 )
            {
              v226[0] = 16 * v268;
              n = qalloc_or_throw(16 * v268, (__int64)v64, 16 * v268, v65);
              memcpy((void *)n, src, v226[0]);
            }
            v66 = _mm_loadl_epi64(&v229);
            si128 = _mm_unpacklo_epi64(v66, v66);
            if ( v270 )
            {
              v229 = si128;
              v271.m128i_i64[0] = 0;
              qfree(v270);
              si128 = _mm_load_si128(&v229);
            }
            v271 = si128;
            p_src = v269;
            v270 = n;
            v16 = sub_173040(v234, v269, v70, 0, 0, v238, a10);
            v242 = v16;
            if ( v16 )
              goto LABEL_63;
          }
        }
        v241[0] += 4LL;
        if ( v228 == v241[0] )
          goto LABEL_117;
      }
      if ( !under_debugger )
        sub_383060(0xCDEFu, *(double *)si128.m128i_i64);
LABEL_372:
      BUG();
    }
  }
LABEL_117:
  if ( ((unsigned __int8)v232 & 1) != 0 )
  {
    if ( v239 != -1 )
    {
      v72 = v237;
      sub_648D0((__int64 *)v269, (const void **)v237, *(double *)si128.m128i_i64);
      v74 = v268;
      v75 = nullptr;
      if ( (_QWORD)v268 )
      {
        v241[0] = 16 * v268;
        v75 = (void *)qalloc_or_throw(16 * v268, (__int64)v72, 16 * v268, v73);
        memcpy(v75, src, v241[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v74);
      if ( v270 )
      {
        *(__m128i *)v241 = si128;
        v271.m128i_i64[0] = 0;
        qfree(v270);
        si128 = _mm_load_si128((const __m128i *)v241);
      }
      v270 = (size_t)v75;
      v271 = si128;
      v76 = v240[5];
      if ( v239 >= *(_DWORD *)(v76 + 64) )
        sub_1733C0(*(double *)si128.m128i_i64);
      v16 = sub_173040(v234, v269, *(_QWORD *)(*(_QWORD *)(v76 + 528) + 8LL * v239), 0, v230, v238, a10);
      v242 = v16;
      if ( v16 )
        goto LABEL_63;
    }
    if ( ((unsigned __int8)v232 & 2) == 0 )
    {
      v16 = 0;
      goto LABEL_63;
    }
  }
  v276 = 0;
  v241[0] = (size_t)&v276;
  v278 = &v276;
  v279 = &v276;
  v277 = nullptr;
  v235 = &v275;
  v280 = 0;
  n = (size_t)&src;
  sub_179E20(&v275, (__int64)&src);
  if ( (int)v236 > 0 )
  {
    v77 = 0;
    do
    {
      sub_179E20(v235, v77 + v256);
      v77 += 24;
    }
    while ( v77 != 8 * (3LL * (unsigned int)(v47 - 1) + 3) );
  }
  LODWORD(v228) = sub_64B20((__int64)v237);
  v78 = v248;
  v258[0] = 0;
  v258[1] = 0;
  v229.m128i_i64[0] = v280;
  v259 = 0;
  if ( v248 )
  {
    v79 = v249;
    if ( (_QWORD)v249 )
    {
      v80 = v241[0];
      v81 = 0;
      do
      {
        v82 = 3 * v81++;
        qfree(*(_QWORD *)(v78 + 8 * v82));
        v78 = v248;
      }
      while ( v79 != v81 );
      v241[0] = v80;
    }
    *(_QWORD *)&v249 = 0;
    qfree(v78);
    v248 = 0;
    *((_QWORD *)&v249 + 1) = 0;
  }
  v83 = v249;
  if ( v47 < (unsigned __int64)v249 )
  {
    v214 = v241[0];
    v215 = v47;
    do
    {
      v216 = 3 * v215++;
      qfree(*(_QWORD *)(v248 + 8 * v216));
    }
    while ( v215 < v83 );
    v241[0] = v214;
    *(_QWORD *)&v249 = v47;
  }
  else if ( (unsigned __int64)v249 < v47 )
  {
    v84 = v248;
    if ( (unsigned __int64)v258 < v248 || (unsigned __int64)v258 >= v248 + 24LL * *((_QWORD *)&v249 + 1) )
    {
      if ( *((_QWORD *)&v249 + 1) >= (unsigned __int64)v47
        || (v220 = qvector_reserve((__int64)&v248, v248, v47, 24),
            v83 = v249,
            v248 = v220,
            v84 = v220,
            (unsigned __int64)v249 < v47) )
      {
        while ( 1 )
        {
          v217 = v84 + 24 * v83;
          sub_64000((__int64 *)v217, (__int64)v258, *(double *)si128.m128i_i64);
          ++v83;
          *(_DWORD *)(v217 + 16) = v259;
          if ( v83 >= v47 )
            break;
          v84 = v248;
        }
      }
      *(_QWORD *)&v249 = v47;
    }
    else
    {
      sub_64000((__int64 *)&v289, (__int64)v258, *(double *)si128.m128i_i64);
      LODWORD(v291) = v259;
      if ( *((_QWORD *)&v249 + 1) < (unsigned __int64)v47 )
        v248 = qvector_reserve((__int64)&v248, v248, v47, 24);
      v85 = v249;
      if ( (unsigned __int64)v249 < v47 )
      {
        do
        {
          v86 = v248 + 24 * v85;
          sub_64000((__int64 *)v86, (__int64)&v289, *(double *)si128.m128i_i64);
          ++v85;
          *(_DWORD *)(v86 + 16) = v291;
        }
        while ( v47 != v85 );
      }
      *(_QWORD *)&v249 = v47;
      qfree((__int64)v289);
    }
  }
  for ( i = sub_64960(v237, 0); ; i = sub_64960(v237, i + 1) )
  {
    v171 = v251;
    if ( i == v266 )
      break;
    v172 = (unsigned __int64)v250;
    LODWORD(v289) = i;
    v88 = v251 + 1;
    if ( &v289 < v250 || &v289 >= (__int64 (__fastcall ***)())((char *)v250 + 4 * *((_QWORD *)&v251 + 1)) )
    {
      if ( *((_QWORD *)&v251 + 1) < v88 )
      {
        v250 = (__int64 (__fastcall ***)())qvector_reserve((__int64)&v250, (__int64)v250, v88, 4);
        v172 = (unsigned __int64)v250;
        v171 = v251;
        v89 = (int)v289;
      }
      else
      {
        v89 = i;
      }
      *(_DWORD *)(v172 + 4 * v171) = v89;
    }
    else
    {
      if ( *((_QWORD *)&v251 + 1) < v88 )
      {
        v250 = (__int64 (__fastcall ***)())qvector_reserve((__int64)&v250, (__int64)v250, v88, 4);
        v171 = v251;
        v172 = (unsigned __int64)v250;
      }
      *(_DWORD *)(v172 + 4 * v171) = i;
    }
    *(_QWORD *)&v251 = v251 + 1;
  }
  v92 = (__int64)v278;
  v93 = v253;
  if ( v278 != (int *)v241[0] )
  {
    v232 = (__int64 *)&v252;
    do
    {
      v94 = *(_QWORD *)(v92 + 32);
      v95 = (__int64)v252;
      if ( *((_QWORD *)&v253 + 1) < v93 + 1 )
      {
        v252 = (_QWORD *)qvector_reserve((__int64)v232, (__int64)v252, v93 + 1, 8);
        v93 = v253;
        v95 = (__int64)v252;
      }
      *(_QWORD *)(v95 + 8 * v93) = v94;
      v93 = v253 + 1;
      *(_QWORD *)&v253 = v253 + 1;
      v92 = std::_Rb_tree_increment();
    }
    while ( v92 != v241[0] );
  }
  v96 = v255;
  if ( (unsigned __int64)v255 < v93 )
  {
    v213 = v254;
    if ( *((_QWORD *)&v255 + 1) < v93 )
    {
      v254 = qvector_reserve((__int64)&v254, v254, v93, 8);
      v213 = v254;
      v96 = v255;
    }
    memset((void *)(v213 + 8 * v96), 0, 8 * (v93 - v96));
    *(_QWORD *)&v255 = v93;
    v93 = v253;
  }
  else if ( v93 != (_QWORD)v255 )
  {
    *(_QWORD *)&v255 = v93;
  }
  v97 = v241[0];
  v98 = 0;
  v99 = 0;
  if ( v93 )
  {
    do
    {
      ++v98;
      v100 = v99;
      v101 = -1;
      v99 = v98;
      if ( v98 < v93 )
        v101 = v252[v98];
      *(_QWORD *)(v254 + 8 * v100) = v101 - v252[v100];
      v93 = v253;
    }
    while ( v98 < (unsigned __int64)v253 );
    v241[0] = v97;
  }
  if ( (int)v236 > 0 )
  {
    v232 = nullptr;
    v227 = (__int64 *)(4LL * (unsigned int)(v47 - 1) + 4);
    LOBYTE(v226[0]) = a10 & 1;
    while ( 1 )
    {
      v102 = 6LL * (_QWORD)v232;
      v103 = (__int64 *)(6LL * (_QWORD)v232 + v248);
      v104 = v240[5];
      v105 = *(unsigned int *)((char *)v232 + (_QWORD)v246);
      if ( (unsigned int)v105 >= *(_DWORD *)(v104 + 64) )
        sub_1733C0(*(double *)si128.m128i_i64);
      v106 = *(_QWORD *)(*(_QWORD *)(v104 + 528) + 8 * v105);
      if ( (*(_DWORD *)(v106 + 24) & 0x600) != 0x200 )
      {
        if ( !under_debugger )
          sub_383060(0xC56Fu, *(double *)si128.m128i_i64);
        goto LABEL_372;
      }
      v107 = v106 + 240;
      v108 = v106 + 200;
      if ( !LOBYTE(v226[0]) )
        v107 = v108;
      sub_64000(&v244, v107, *(double *)si128.m128i_i64);
      sub_64700(&v244, v237);
      v109 = sub_64960(&v244, 0);
      if ( v109 != v245 )
        break;
LABEL_183:
      v112 = (unsigned __int64 **)(v256 + v102);
      v113 = v112[1];
      v114 = *v112;
      v115 = *v112;
      if ( !(16LL * (_QWORD)v113) )
        goto LABEL_196;
      do
      {
        v116 = (__int64)v278;
        if ( v278 == (int *)v241[0] )
          goto LABEL_195;
        do
        {
          v117 = v115[1];
          v118 = *(_QWORD *)(v116 + 32);
          v119 = *v115;
          if ( v117 && v118 >= v119 && v117 + v119 - 1 >= v118 )
          {
            v120 = &v252[v253];
            if ( v252 == v120 )
            {
LABEL_248:
              if ( !under_debugger )
                sub_383060(0xC571u, *(double *)si128.m128i_i64);
              goto LABEL_372;
            }
            v121 = v252;
            while ( v118 != *v121 )
            {
              if ( v120 == ++v121 )
                goto LABEL_248;
            }
            sub_64190(v103, v171 + v121 - v252, *(double *)si128.m128i_i64);
          }
          v116 = std::_Rb_tree_increment();
        }
        while ( v116 != v241[0] );
        v114 = *v112;
        v113 = v112[1];
LABEL_195:
        v115 += 2;
      }
      while ( v115 != &v114[2 * (_QWORD)v113] );
LABEL_196:
      qfree(v244);
      v232 = (__int64 *)((char *)v232 + 4);
      if ( v227 == v232 )
        goto LABEL_197;
    }
    while ( 1 )
    {
      v110 = (__int64 (__fastcall ***)())((char *)v250 + 4 * v251);
      if ( v250 == v110 )
        break;
      v111 = (char *)v250;
      while ( *(_DWORD *)v111 != v109 )
      {
        v111 += 4;
        if ( v110 == (__int64 (__fastcall ***)())v111 )
          goto LABEL_352;
      }
      sub_64190(v103, (v111 - (char *)v250) >> 2, *(double *)si128.m128i_i64);
      v109 = sub_64960(&v244, v109 + 1);
      if ( v109 == v245 )
        goto LABEL_183;
    }
LABEL_352:
    if ( !under_debugger )
      sub_383060(0xC570u, *(double *)si128.m128i_i64);
    goto LABEL_372;
  }
LABEL_197:
  v122 = v229.m128i_i32[0] + v228;
  if ( (_QWORD)v253 + (int)v171 != v229.m128i_i32[0] + (_DWORD)v228 )
  {
    if ( !under_debugger )
      sub_383060(0xC572u, *(double *)si128.m128i_i64);
    goto LABEL_372;
  }
  qfree(v258[0]);
  sub_173AB0(v277);
  v261 = v122;
  v260[0] = 0;
  v232 = v260;
  v260[1] = 0;
  sub_63E80(v260, 0, v171, *(double *)si128.m128i_i64);
  v123 = src;
  if ( 16LL * (_QWORD)v268 )
  {
    while ( 1 )
    {
      v124 = &v252[v253];
      if ( v252 == v124 )
        break;
      v125 = v252;
      while ( *v123 != *v125 )
      {
        if ( v124 == ++v125 )
          goto LABEL_340;
      }
      sub_64190(v232, v171 + v125 - v252, *(double *)si128.m128i_i64);
      v123 += 2;
      if ( v123 == (_QWORD *)((char *)src + 16 * (_QWORD)v268) )
        goto LABEL_204;
    }
LABEL_340:
    if ( !under_debugger )
      sub_383060(0xC573u, *(double *)si128.m128i_i64);
    goto LABEL_372;
  }
LABEL_204:
  if ( v239 != -1 && (_DWORD)v233 == -1 )
  {
    v126 = v247;
    v127 = v246;
    if ( *((_QWORD *)&v247 + 1) < (unsigned __int64)(v247 + 1) )
    {
      v246 = (_DWORD *)qvector_reserve((__int64)&v246, (__int64)v246, v247 + 1, 4);
      v127 = v246;
      v126 = v247;
    }
    v127[v126] = v239;
    *(_QWORD *)&v247 = v247 + 1;
    sub_64000((__int64 *)&v289, (__int64)v232, *(double *)si128.m128i_i64);
    v128 = v248;
    LODWORD(v291) = v261;
    v129 = v249;
    if ( *((_QWORD *)&v249 + 1) < (unsigned __int64)(v249 + 1) )
    {
      v248 = qvector_reserve((__int64)&v248, v248, v249 + 1, 24);
      v128 = v248;
      v129 = v249;
    }
    v130 = v128 + 24 * v129;
    sub_64000((__int64 *)v130, (__int64)&v289, *(double *)si128.m128i_i64);
    *(_QWORD *)&v249 = v249 + 1;
    *(_DWORD *)(v130 + 16) = v291;
    qfree((__int64)v289);
    v134 = v240[5];
    if ( v239 >= *(_DWORD *)(v134 + 64) )
      sub_1733C0(*(double *)si128.m128i_i64);
    v135 = *(_QWORD *)(v134 + 528);
    v136 = *(_QWORD *)(v135 + 8LL * v239);
    if ( (*(_DWORD *)(v136 + 24) & 0x600) != 0x200 )
      sub_A7590(v136, 0, v135, v131, v132, v133);
    LODWORD(v236) = v236 + 1;
  }
  v290 = 0;
  v292 = 0;
  v301 = 0;
  v289 = off_4EBC98;
  v294 = 0;
  v293 = 0xFFFFFFFF00000000LL;
  v137 = *v240;
  v296 = 0;
  v298 = 0;
  v300 = 0;
  v302 = 0;
  v303 = 0;
  v281 = nullptr;
  LODWORD(v275) = -1;
  v291 = 0;
  v295 = 0;
  v297 = 0;
  v299 = 0;
  v304 = 0;
  *(_OWORD *)v282 = 0;
  v138 = *(__int64 (__fastcall **)(__int64))(v137 + 56);
  if ( v138 != sub_101AA0 )
  {
    v140 = (int)v138((__int64)v240);
    if ( v140 < *(_QWORD *)v282 )
    {
LABEL_330:
      *(_QWORD *)v282 = v140;
      goto LABEL_216;
    }
    if ( *(_QWORD *)v282 >= v140 )
      goto LABEL_216;
    v208 = v281;
    v207 = *(_QWORD *)&v282[8];
    if ( v235 < (__int64 *)v281 )
    {
LABEL_334:
      if ( v207 < v140 )
        v281 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v281, (__int64)v208, v140, 4);
      v211 = *(_QWORD *)v282;
      if ( *(_QWORD *)v282 < v140 )
      {
        do
          *((_DWORD *)v281 + v211++) = v275;
        while ( v140 != v211 );
      }
      goto LABEL_330;
    }
LABEL_325:
    if ( v235 < (__int64 *)((char *)v208 + 4 * v207) )
    {
      v209 = v275;
      if ( v207 < v140 )
        v281 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v281, (__int64)v208, v140, 4);
      v210 = *(_QWORD *)v282;
      if ( *(_QWORD *)v282 < v140 )
      {
        do
          *((_DWORD *)v281 + v210++) = v209;
        while ( v210 != v140 );
      }
      goto LABEL_330;
    }
    goto LABEL_334;
  }
  v139 = v240[5];
  v140 = *(int *)(v139 + 64);
  if ( *(_DWORD *)(v139 + 64) )
  {
    v207 = *(_QWORD *)&v282[8];
    v208 = nullptr;
    goto LABEL_325;
  }
LABEL_216:
  v141 = v247;
  v142 = v247;
  if ( (int)v247 <= 0 )
  {
    sub_673C0((__int64)&v289, v247, 0.0);
    LODWORD(v226[0]) = v141 - 1;
  }
  else
  {
    LODWORD(v226[0]) = v247 - 1;
    v227 = (__int64 *)(unsigned int)(v247 - 1);
    v143 = nullptr;
    do
    {
      *((_DWORD *)v281 + (int)v246[(_QWORD)v143]) = (_DWORD)v143;
      v144 = v143;
      v143 = (__int64 *)((char *)v143 + 1);
    }
    while ( v227 != v144 );
    sub_673C0((__int64)&v289, v142, 0.0);
    v233 = nullptr;
    for ( j = nullptr; ; j = (__int64 *)((char *)j + 1) )
    {
      v229.m128i_i32[0] = (int)j;
      v146 = *v240;
      v147 = v246[(_QWORD)j];
      v148 = *(__int64 (__fastcall **)(__int64, int))(*v240 + 104);
      LODWORD(v241[0]) = v147;
      if ( v148 == sub_134310 )
      {
        v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v240[5] + 528) + 8LL * v147) + 352LL);
      }
      else
      {
        v185 = v240;
        v149 = v148((__int64)v240, v241[0]);
        v146 = *v185;
      }
      if ( v149 > 0 )
      {
        v150 = v149;
        v151 = 0;
        v228 = 8LL * SLODWORD(v241[0]);
        do
        {
          v152 = *(__int64 (__fastcall **)(__int64, int, int))(v146 + 120);
          if ( v152 == sub_172890 )
            v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v240[5] + 528) + v228) + 344LL) + 4 * v151);
          else
            v153 = v152((__int64)v240, v241[0], v151);
          v154 = *((_DWORD *)v281 + v153);
          if ( v154 != -1 )
          {
            v155 = (__int64 *)(v294 + 24LL * v154);
            v156 = v155[1];
            v157 = (_DWORD *)(*v155 + 4 * v156);
            if ( (_DWORD *)*v155 == v157 )
              goto LABEL_250;
            v158 = (_DWORD *)*v155;
            while ( *v158 != (_DWORD)j )
            {
              if ( v157 == ++v158 )
                goto LABEL_250;
            }
            if ( v157 == v158 )
            {
LABEL_250:
              if ( v155[2] < (unsigned __int64)(v156 + 1) )
              {
                v224 = v154;
                v183 = qvector_reserve((__int64)v155, *v155, v156 + 1, 4);
                v154 = v224;
                v184 = v155[1];
                *v155 = v183;
                v157 = (_DWORD *)(v183 + 4 * v184);
              }
              *v157 = v229.m128i_i32[0];
              ++v155[1];
              v175 = (__int64 *)((char *)v233 + v296);
              v176 = *(__int64 *)((char *)v233 + v296 + 8);
              v177 = *(__int64 *)((char *)v233 + v296);
              if ( *(__int64 *)((char *)v233 + v296 + 16) < (unsigned __int64)(v176 + 1) )
              {
                v223 = v154;
                v177 = qvector_reserve((__int64)v175, v177, v176 + 1, 4);
                v154 = v223;
                *v175 = v177;
                v176 = v175[1];
              }
              *(_DWORD *)(v177 + 4 * v176) = v154;
              ++v175[1];
            }
          }
          ++v151;
          v146 = *v240;
        }
        while ( v151 != v150 );
      }
      v159 = *(__int64 (__fastcall **)(__int64, int))(v146 + 96);
      if ( v159 == sub_1342F0 )
        v160 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v240[5] + 528) + 8LL * SLODWORD(v241[0])) + 376LL);
      else
        v160 = v159((__int64)v240, v241[0]);
      if ( v160 > 0 )
      {
        v161 = 0;
        v228 = v160;
        v162 = 8LL * SLODWORD(v241[0]);
        do
        {
          v163 = *(__int64 (__fastcall **)(__int64, int, int))(*v240 + 112);
          if ( v163 == sub_134330 )
            v164 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v240[5] + 528) + v162) + 368LL) + 4 * v161);
          else
            v164 = v163((__int64)v240, v241[0], v161);
          v165 = *((_DWORD *)v281 + v164);
          if ( v165 != -1 )
          {
            v166 = (__int64 *)((char *)v233 + v294);
            v167 = *(__int64 *)((char *)v233 + v294);
            v168 = *(__int64 *)((char *)v233 + v294 + 8);
            v169 = (_DWORD *)(v167 + 4 * v168);
            if ( (_DWORD *)v167 == v169 )
              goto LABEL_255;
            v170 = *(_DWORD **)((char *)v233 + v294);
            while ( v165 != *v170 )
            {
              if ( v169 == ++v170 )
                goto LABEL_255;
            }
            if ( v170 == v169 )
            {
LABEL_255:
              if ( v166[2] < (unsigned __int64)(v168 + 1) )
              {
                v222 = v165;
                v181 = qvector_reserve((__int64)v166, v167, v168 + 1, 4);
                v165 = v222;
                v182 = v166[1];
                *v166 = v181;
                v169 = (_DWORD *)(v181 + 4 * v182);
              }
              *v169 = v165;
              ++v166[1];
              v178 = (__int64 *)(v296 + 24LL * v165);
              v179 = v178[1];
              v180 = *v178;
              if ( v178[2] < (unsigned __int64)(v179 + 1) )
              {
                v180 = qvector_reserve((__int64)v178, v180, v179 + 1, 4);
                *v178 = v180;
                v179 = v178[1];
              }
              *(_DWORD *)(v180 + 4 * v179) = v229.m128i_i32[0];
              ++v178[1];
            }
          }
          ++v161;
        }
        while ( v228 != v161 );
      }
      v233 += 3;
      if ( j == v227 )
        break;
    }
  }
  HIDWORD(v293) = v226[0];
  if ( v281 )
  {
    *(_QWORD *)v282 = 0;
    qfree((__int64)v281);
  }
  memset(v282, 0, sizeof(v282));
  v241[0] = (int)v236;
  v281 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v283[0] = 0;
  v283[1] = 0;
  v284 = v261;
  sub_64000(&v285, (__int64)v232, 0.0);
  v186 = *(_QWORD *)&v282[8];
  v287 = 1;
  v286 = v261;
  if ( v241[0] < *(_QWORD *)&v282[8] )
  {
    v191 = v241[0];
    v192 = v241[0];
    do
    {
      v193 = 3 * v191++;
      qfree(*(_QWORD *)(*(_QWORD *)v282 + 8 * v193));
    }
    while ( v191 < v186 );
    v241[0] = v192;
    *(_QWORD *)&v282[8] = v192;
  }
  else
  {
    v187 = v241[0];
    if ( *(_QWORD *)&v282[8] < v241[0] )
    {
      v188 = *(_QWORD *)v282;
      v189 = v283;
      if ( (unsigned __int64)v283 < *(_QWORD *)v282
        || (unsigned __int64)v283 >= *(_QWORD *)v282 + 24LL * *(_QWORD *)&v282[16] )
      {
        if ( *(_QWORD *)&v282[16] >= v241[0]
          || (v218 = v241[0],
              v235 = v283,
              v219 = qvector_reserve((__int64)v282, *(__int64 *)v282, v241[0], 24),
              v186 = *(_QWORD *)&v282[8],
              *(_QWORD *)v282 = v219,
              v188 = v219,
              v189 = v235,
              *(_QWORD *)&v282[8] < v218) )
        {
          while ( 1 )
          {
            v233 = v189;
            v235 = (__int64 *)(v188 + 24 * v186);
            sub_64000(v235, (__int64)v189, 0.0);
            ++v186;
            v212 = v241[0];
            *((_DWORD *)v235 + 4) = v284;
            if ( v186 >= v212 )
              break;
            v188 = *(_QWORD *)v282;
            v189 = v233;
          }
        }
        *(_QWORD *)&v282[8] = v241[0];
      }
      else
      {
        sub_64000(v235, (__int64)v283, 0.0);
        LODWORD(v277) = v284;
        if ( *(_QWORD *)&v282[16] < v187 )
          *(_QWORD *)v282 = qvector_reserve((__int64)v282, *(__int64 *)v282, v241[0], 24);
        v190 = *(_QWORD *)&v282[8];
        if ( *(_QWORD *)&v282[8] < v241[0] )
        {
          do
          {
            v233 = (__int64 *)(*(_QWORD *)v282 + 24 * v190);
            sub_64000(v233, (__int64)v235, 0.0);
            ++v190;
            *((_DWORD *)v233 + 4) = (_DWORD)v277;
          }
          while ( v241[0] != v190 );
        }
        *(_QWORD *)&v282[8] = v241[0];
        qfree(v275);
      }
    }
  }
  v281 = &off_4DDFC8;
  v288 = &v248;
  sub_311760((__int64 *)&v289, (__int64)&v281);
  if ( (int)v236 <= 0 )
  {
LABEL_318:
    v16 = 0;
    goto LABEL_35;
  }
  v194 = 0;
  v236 = 4 * v241[0];
  while ( 1 )
  {
    v195 = *(_QWORD *)v282 + 6 * v194;
    if ( !(unsigned __int8)sub_64880((_QWORD *)v195) )
      break;
LABEL_281:
    v194 += 4LL;
    if ( v236 == v194 )
      goto LABEL_318;
  }
  if ( (int)sub_64C00((_QWORD *)v195) >= *(_DWORD *)(v195 + 16) )
  {
    if ( !under_debugger )
      sub_383060(0xC574u, 0.0);
    goto LABEL_372;
  }
  v272[0] = nullptr;
  v272[1] = nullptr;
  v273 = nullptr;
  v274 = 0;
  v196 = sub_64960((_QWORD *)v195, 0);
  v241[0] = (size_t)v272;
  for ( k = v196; k != *(_DWORD *)(v195 + 8); k = sub_64960((_QWORD *)v195, k + 1) )
  {
    if ( k >= (int)v171 )
    {
      v198 = k - v171;
      if ( k - (int)v171 < 0 || v198 >= (unsigned __int64)v253 )
      {
        if ( !under_debugger )
          sub_383060(0xC575u, 0.0);
        goto LABEL_372;
      }
      sub_122B20((__int64 *)v241[0], v252[v198], *(_QWORD *)(v254 + 8LL * v198));
    }
    else
    {
      sub_64190((__int64 *)v241[0], *((_DWORD *)v250 + k), 0.0);
    }
  }
  sub_64700((__int64 *)v272, v237);
  sub_3180C0((__int64 *)&v273, n, v199, v200);
  if ( (unsigned __int8)sub_64880(v272) && !(_QWORD)v274 )
  {
    if ( v273 )
      qfree((__int64)v273);
LABEL_296:
    qfree((__int64)v272[0]);
    goto LABEL_281;
  }
  v201 = v240[5];
  v202 = (unsigned int)v246[v194 / 4];
  if ( (unsigned int)v202 >= *(_DWORD *)(v201 + 64) )
    sub_1733C0(0.0);
  v203 = *(_DWORD **)(*(_QWORD *)(v201 + 528) + 8 * v202);
  LODWORD(v241[0]) = v203[6];
  if ( (v241[0] & 0x600) != 0x200 )
  {
    if ( !under_debugger )
      sub_383060(0xC576u, 0.0);
    goto LABEL_372;
  }
  if ( v203[19] == 1 )
  {
    v206 = v203 + 30;
    if ( (a10 & 1) != 0 )
      v206 = v203 + 40;
    v241[0] = (size_t)v206;
    if ( !(unsigned __int8)sub_64780(v272, v206) && !(unsigned __int8)sub_318470(&v273, v241[0] + 16) )
      goto LABEL_304;
    v205 = sub_173040(v234, v272, (__int64)v203, 0, 0, v238, a10);
  }
  else
  {
    v204 = 0;
    if ( v203[18] == v239 )
      v204 = v230;
    v205 = sub_173040(v234, v272, (__int64)v203, 0, v204, v238, a10);
  }
  v16 = v205;
  v242 = v205;
  if ( !v205 )
  {
LABEL_304:
    if ( v273 )
    {
      *(_QWORD *)&v274 = 0;
      qfree((__int64)v273);
    }
    goto LABEL_296;
  }
  if ( v273 )
  {
    *(_QWORD *)&v274 = 0;
    qfree((__int64)v273);
  }
  qfree((__int64)v272[0]);
LABEL_35:
  v281 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v285);
  qfree(v283[0]);
  v24 = *(_QWORD *)v282;
  if ( *(_QWORD *)v282 )
  {
    v25 = *(_QWORD *)&v282[8];
    if ( *(_QWORD *)&v282[8] )
    {
      v26 = 0;
      do
      {
        v27 = v26 + 1;
        qfree(*(_QWORD *)(v24 + 24 * v26));
        v24 = *(_QWORD *)v282;
        v26 = v27;
      }
      while ( v25 != v27 );
    }
    *(_QWORD *)&v282[8] = 0;
    qfree(v24);
  }
  v289 = off_4EBC98;
  if ( v303 )
  {
    *(_QWORD *)&v304 = 0;
    qfree(v303);
  }
  if ( v300 )
  {
    *(_QWORD *)&v301 = 0;
    qfree(v300);
  }
  if ( v298 )
  {
    *(_QWORD *)&v299 = 0;
    qfree(v298);
  }
  v28 = v296;
  if ( v296 )
  {
    v29 = v297;
    if ( (_QWORD)v297 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32);
          v28 = v296;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v297 = 0;
    qfree(v28);
  }
  v33 = v294;
  if ( v294 )
  {
    v34 = v295;
    if ( (_QWORD)v295 )
    {
      v35 = 0;
      do
      {
        v36 = (__int64 *)(v33 + 24 * v35);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          qfree(v37);
          v33 = v294;
        }
        ++v35;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v295 = 0;
    qfree(v33);
  }
  v289 = (__int64 (__fastcall **)())&unk_4EC808;
  if ( v290 )
  {
    *(_QWORD *)&v291 = 0;
    qfree(v290);
  }
  qfree(v260[0]);
LABEL_63:
  v38 = v256;
  if ( v256 )
  {
    v39 = v257;
    if ( (_QWORD)v257 )
    {
      v40 = 0;
      do
      {
        v41 = (__int64 *)(v38 + 24 * v40);
        v42 = *v41;
        if ( *v41 )
        {
          v41[1] = 0;
          qfree(v42);
          v38 = v256;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v257 = 0;
    qfree(v38);
  }
  if ( v254 )
  {
    *(_QWORD *)&v255 = 0;
    qfree(v254);
  }
  if ( v252 )
  {
    *(_QWORD *)&v253 = 0;
    qfree((__int64)v252);
  }
  if ( v250 )
  {
    *(_QWORD *)&v251 = 0;
    qfree((__int64)v250);
  }
  v43 = v248;
  if ( v248 )
  {
    v44 = v249;
    if ( (_QWORD)v249 )
    {
      v45 = 0;
      do
      {
        v46 = v45 + 1;
        qfree(*(_QWORD *)(v43 + 24 * v45));
        v43 = v248;
        v45 = v46;
      }
      while ( v44 != v46 );
    }
    *(_QWORD *)&v249 = 0;
    qfree(v43);
  }
  if ( v246 )
  {
    *(_QWORD *)&v247 = 0;
    qfree((__int64)v246);
  }
LABEL_83:
  v262 = off_4DBB18;
  qfree(v263[0]);
  qfree(v243[0]);
LABEL_5:
  if ( v270 )
  {
    v271.m128i_i64[0] = 0;
    qfree(v270);
  }
  qfree((__int64)v269[0]);
  if ( src )
  {
    *(_QWORD *)&v268 = 0;
    qfree((__int64)src);
  }
  qfree(v265);
  return v16;
}

