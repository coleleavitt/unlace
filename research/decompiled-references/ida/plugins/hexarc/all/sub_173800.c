__int64 __fastcall sub_173800(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 *v14; // r14
  int v15; // r13d
  __int64 v16; // rbx
  int v17; // edx
  unsigned __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  _QWORD *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // r14
  _QWORD *v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r14
  int v38; // r14d
  unsigned int v39; // ebx
  __int64 v40; // r8
  int v41; // r9d
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __m128i si128; // xmm0
  _QWORD *v49; // r8
  _QWORD *v50; // rdx
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rdx
  void *v58; // rbx
  size_t v59; // rcx
  __int64 *v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // r13
  size_t v65; // r15
  size_t v66; // rdi
  __m128i v67; // xmm0
  __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // r13
  size_t v71; // r15
  __int64 v72; // rbx
  unsigned __int64 v73; // r13
  __int64 v74; // rsi
  __int64 v75; // r13
  __int64 v76; // r15
  __int64 *v77; // rdi
  unsigned __int64 v78; // rsi
  __int64 v79; // r8
  int i; // r13d
  unsigned __int64 v81; // rdx
  int v82; // eax
  void *v83; // rax
  const void *v84; // rsi
  __int64 v85; // r15
  unsigned __int64 v86; // r13
  unsigned __int64 v87; // rbx
  __int64 v88; // rax
  size_t v89; // rbx
  __int64 v90; // rcx
  unsigned __int64 *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r9
  __int64 v94; // r14
  __int64 *v95; // r13
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  int v101; // r15d
  _DWORD *v102; // rcx
  _DWORD *v103; // rax
  unsigned __int64 **v104; // r14
  unsigned __int64 *v105; // rcx
  unsigned __int64 *v106; // rbx
  __int64 v107; // r15
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rsi
  _QWORD *v111; // rcx
  _QWORD *v112; // rsi
  int v113; // ebx
  _QWORD *v114; // rbx
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  __int64 v117; // rax
  _DWORD *v118; // rsi
  unsigned __int64 v119; // rsi
  __int64 v120; // rax
  unsigned __int64 v121; // rbx
  __int64 (__fastcall **v122)(); // rdi
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdi
  __int64 v129; // rax
  __int64 (__fastcall *v130)(__int64); // rax
  __int64 v131; // rax
  unsigned __int64 v132; // rbx
  int v133; // r14d
  int v134; // esi
  __int64 *v135; // rax
  __int64 *v136; // rdx
  __int64 *j; // r14
  __int64 v138; // rdx
  int v139; // edi
  __int64 (__fastcall *v140)(__int64, int); // rax
  int v141; // eax
  __int64 v142; // r15
  __int64 v143; // r13
  __int64 (__fastcall *v144)(__int64, int, int); // rax
  int v145; // eax
  int v146; // r10d
  __int64 *v147; // rdi
  __int64 v148; // rcx
  _DWORD *v149; // rdx
  _DWORD *v150; // rax
  __int64 (__fastcall *v151)(__int64, int); // rax
  int v152; // eax
  __int64 v153; // r13
  __int64 v154; // r15
  __int64 (__fastcall *v155)(__int64, int, int); // rax
  int v156; // eax
  int v157; // r10d
  __int64 *v158; // rdi
  _DWORD *v159; // rsi
  __int64 v160; // rcx
  _DWORD *v161; // rdx
  _DWORD *v162; // rax
  __int64 v163; // r12
  _DWORD *v164; // rsi
  _DWORD *v165; // rsi
  __int64 v166; // rax
  __int64 *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rsi
  __int64 *v170; // rdi
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 *v177; // r15
  unsigned __int64 v178; // r14
  unsigned __int64 v179; // r15
  __int64 v180; // rsi
  __int64 *v181; // r8
  __int64 v182; // r14
  void *v183; // rax
  size_t v184; // r13
  __int64 v185; // r15
  unsigned __int64 v186; // r15
  __int64 v187; // rbx
  int v188; // eax
  int k; // r14d
  int v190; // eax
  size_t v191; // rsi
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rax
  _DWORD *v197; // r14
  __int64 v198; // r8
  unsigned int v199; // eax
  _QWORD *v200; // rdx
  unsigned __int64 v201; // rax
  __int64 v202; // rsi
  int v203; // r14d
  __int64 v204; // rax
  __int64 v205; // rax
  size_t v206; // rax
  __int64 v207; // rsi
  size_t v208; // r15
  unsigned __int64 v209; // rbx
  unsigned __int64 v210; // rbx
  unsigned __int64 v211; // r15
  __int64 v212; // rax
  __int64 v213; // rax
  _QWORD *v214; // [rsp+0h] [rbp-400h]
  int v215; // [rsp+0h] [rbp-400h]
  int v216; // [rsp+0h] [rbp-400h]
  int v217; // [rsp+0h] [rbp-400h]
  __int64 v218; // [rsp+8h] [rbp-3F8h]
  size_t v219[2]; // [rsp+10h] [rbp-3F0h] BYREF
  __int64 *v220; // [rsp+20h] [rbp-3E0h]
  __int64 v221; // [rsp+28h] [rbp-3D8h]
  __m128i v222; // [rsp+30h] [rbp-3D0h] BYREF
  __int64 v223; // [rsp+40h] [rbp-3C0h]
  size_t n; // [rsp+48h] [rbp-3B8h]
  __int64 *v225; // [rsp+50h] [rbp-3B0h]
  __int64 *v226; // [rsp+58h] [rbp-3A8h]
  __int64 *v227; // [rsp+60h] [rbp-3A0h]
  __int64 *v228; // [rsp+68h] [rbp-398h]
  size_t v229; // [rsp+70h] [rbp-390h]
  __int64 *v230; // [rsp+78h] [rbp-388h]
  int v231; // [rsp+80h] [rbp-380h]
  unsigned int v232; // [rsp+84h] [rbp-37Ch]
  __int64 *v233; // [rsp+88h] [rbp-378h]
  size_t v234[2]; // [rsp+90h] [rbp-370h] BYREF
  unsigned int v235; // [rsp+ACh] [rbp-354h] BYREF
  __int64 v236[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 *v237; // [rsp+C0h] [rbp-340h] BYREF
  int v238; // [rsp+C8h] [rbp-338h]
  _DWORD *v239; // [rsp+D0h] [rbp-330h]
  __int128 v240; // [rsp+D8h] [rbp-328h]
  unsigned __int64 v241; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v242; // [rsp+F8h] [rbp-308h]
  _DWORD *v243; // [rsp+110h] [rbp-2F0h]
  __int128 v244; // [rsp+118h] [rbp-2E8h]
  __int64 v245; // [rsp+130h] [rbp-2D0h] BYREF
  __int128 v246; // [rsp+138h] [rbp-2C8h]
  __int64 v247; // [rsp+150h] [rbp-2B0h]
  __int128 v248; // [rsp+158h] [rbp-2A8h]
  __int64 v249; // [rsp+170h] [rbp-290h]
  __int128 v250; // [rsp+178h] [rbp-288h]
  _QWORD v251[2]; // [rsp+190h] [rbp-270h] BYREF
  int v252; // [rsp+1A0h] [rbp-260h]
  __int64 v253[2]; // [rsp+1B0h] [rbp-250h] BYREF
  int v254; // [rsp+1C0h] [rbp-240h]
  __int64 (__fastcall **v255)(); // [rsp+1D0h] [rbp-230h] BYREF
  __int64 v256[2]; // [rsp+1D8h] [rbp-228h] BYREF
  char v257; // [rsp+1E8h] [rbp-218h]
  __int64 v258; // [rsp+1F0h] [rbp-210h] BYREF
  int v259; // [rsp+1F8h] [rbp-208h]
  void *src; // [rsp+200h] [rbp-200h] BYREF
  __int128 v261; // [rsp+208h] [rbp-1F8h]
  __int64 v262[2]; // [rsp+220h] [rbp-1E0h] BYREF
  size_t v263; // [rsp+230h] [rbp-1D0h]
  __m128i v264; // [rsp+238h] [rbp-1C8h]
  __int64 v265[2]; // [rsp+250h] [rbp-1B0h] BYREF
  __int64 v266; // [rsp+260h] [rbp-1A0h] BYREF
  __int128 v267; // [rsp+268h] [rbp-198h]
  __int64 v268; // [rsp+280h] [rbp-180h] BYREF
  int v269; // [rsp+288h] [rbp-178h] BYREF
  _QWORD *v270; // [rsp+290h] [rbp-170h]
  int *v271; // [rsp+298h] [rbp-168h]
  int *v272; // [rsp+2A0h] [rbp-160h]
  __int64 v273; // [rsp+2A8h] [rbp-158h]
  __m256i v274; // [rsp+2B0h] [rbp-150h] BYREF
  _QWORD v275[2]; // [rsp+2D0h] [rbp-130h] BYREF
  int v276; // [rsp+2E0h] [rbp-120h]
  __int64 v277; // [rsp+2E8h] [rbp-118h] BYREF
  int v278; // [rsp+2F8h] [rbp-108h]
  int v279; // [rsp+300h] [rbp-100h]
  unsigned __int64 *v280; // [rsp+308h] [rbp-F8h]
  __int64 (__fastcall **v281)(); // [rsp+310h] [rbp-F0h] BYREF
  __int64 v282; // [rsp+318h] [rbp-E8h]
  __int128 v283; // [rsp+320h] [rbp-E0h]
  char v284; // [rsp+330h] [rbp-D0h]
  unsigned __int64 v285; // [rsp+334h] [rbp-CCh]
  __int64 v286; // [rsp+340h] [rbp-C0h]
  __int128 v287; // [rsp+348h] [rbp-B8h]
  __int64 v288; // [rsp+358h] [rbp-A8h]
  __int128 v289; // [rsp+360h] [rbp-A0h]
  __int64 v290; // [rsp+370h] [rbp-90h]
  __int128 v291; // [rsp+378h] [rbp-88h]
  __int64 v292; // [rsp+388h] [rbp-78h]
  __int128 v293; // [rsp+390h] [rbp-70h]
  int v294; // [rsp+3A0h] [rbp-60h]
  __int64 v295; // [rsp+3A8h] [rbp-58h]
  __int128 v296; // [rsp+3B0h] [rbp-50h]
  unsigned __int64 v297; // [rsp+3C8h] [rbp-38h]

  v233 = a1;
  v227 = a2;
  v223 = a7;
  LODWORD(v228) = a4;
  v232 = a5;
  LODWORD(v225) = a8;
  LOBYTE(v220) = a8;
  v297 = __readfsqword(0x28u);
  v230 = &v258;
  sub_5DA80(&v258, a3);
  v11 = *(_QWORD *)(a3 + 24);
  src = nullptr;
  v261 = 0;
  if ( v11 )
  {
    v83 = (void *)qalloc_or_throw();
    v84 = *(const void **)(a3 + 16);
    src = v83;
    *((_QWORD *)&v261 + 1) = v11;
    memcpy(v83, v84, 16 * v11);
    *(_QWORD *)&v261 = v11;
  }
  v262[0] = 0;
  v264 = 0;
  v262[1] = 0;
  v263 = 0;
  v231 = (unsigned __int8)v225;
  if ( sub_1720E0(v233, v227, &v235, v230, (unsigned int)v228, v232, a6, v223, (unsigned __int8)v225, a9) )
  {
    v12 = v235;
    goto LABEL_5;
  }
  v236[0] = 0;
  v236[1] = 0;
  sub_5DC10(v236, (int)v228);
  if ( v232 != -1 )
    sub_69770((__int64)v233, v232, v236);
  v255 = off_4A8358;
  v256[0] = 0;
  v256[1] = 0;
  v257 = 0;
  sub_69010((__int64 *)&v255, v233, (int)v228, 0);
  v14 = v256;
  if ( v232 != -1 )
  {
    sub_5E180(v236, v256);
    v14 = v236;
  }
  v12 = 0;
  if ( (unsigned __int8)sub_5E300(v14) )
    goto LABEL_83;
  v239 = nullptr;
  v240 = 0;
  LODWORD(v226) = -1;
  v15 = sub_5E3E0(v14, 0);
  v16 = -1;
  while ( v15 != *((_DWORD *)v14 + 2) )
  {
    v166 = v240;
    if ( (_DWORD)v228 == v15 )
    {
      v16 = (int)v240;
    }
    else
    {
      v17 = (int)v226;
      if ( v15 == v232 )
        v17 = v240;
      LODWORD(v226) = v17;
    }
    v165 = v239;
    LODWORD(v281) = v15;
    v18 = v240 + 1;
    if ( &v281 < (__int64 (__fastcall ***)())v239 || &v281 >= (__int64 (__fastcall ***)())&v239[*((_QWORD *)&v240 + 1)] )
    {
      if ( *((_QWORD *)&v240 + 1) < v18 )
      {
        v239 = (_DWORD *)qvector_reserve();
        v165 = v239;
        v19 = (int)v281;
        v166 = v240;
      }
      else
      {
        v19 = v15;
      }
      v165[v166] = v19;
    }
    else
    {
      if ( *((_QWORD *)&v240 + 1) < v18 )
      {
        v239 = (_DWORD *)qvector_reserve();
        v165 = v239;
        v166 = v240;
      }
      v165[v166] = v15;
    }
    *(_QWORD *)&v240 = v240 + 1;
    v15 = sub_5E3E0(v14, v15 + 1);
  }
  if ( (_DWORD)v16 == -1 )
  {
    if ( !under_debugger )
      sub_37B760(50542);
    goto LABEL_372;
  }
  if ( (_DWORD)v16 )
  {
    v239[v16] = *v239;
    *v239 = (_DWORD)v228;
  }
  v38 = v240;
  if ( (_DWORD)v226 != -1 && (int)v226 != (_QWORD)v240 - 1LL )
  {
    v39 = v232;
    v239[(int)v226] = v239[(_QWORD)v240 - 1];
    v239[(_QWORD)v240 - 1] = v39;
    v38 = v240;
  }
  LODWORD(v229) = v38;
  v241 = 0;
  v243 = nullptr;
  v245 = 0;
  v247 = 0;
  v249 = 0;
  v242 = 0;
  v244 = 0;
  v246 = 0;
  v248 = 0;
  v250 = 0;
  if ( v38 )
  {
    v249 = qvector_reserve();
    if ( (unsigned __int64)v250 < v38 )
    {
      v42 = v250 + 1;
      v43 = 24 * v250;
      v44 = 24 * v250 + v249;
      *(_QWORD *)v44 = 0;
      *(_OWORD *)(v44 + 8) = 0;
      if ( v42 < v38 )
      {
        v45 = v43 + 24;
        do
        {
          ++v42;
          v46 = v45 + v249;
          v45 += 24;
          *(_QWORD *)v46 = 0;
          *(_OWORD *)(v46 + 8) = 0;
        }
        while ( v38 != v42 );
      }
    }
    v47 = (unsigned int)v229;
    *(_QWORD *)&v250 = v38;
    if ( (int)v229 > 0 )
    {
      v234[0] = 0;
      v221 = 4LL * (unsigned int)(v38 - 1) + 4;
      while ( 1 )
      {
        v53 = v233[5];
        v54 = *(unsigned int *)((char *)v239 + v234[0]);
        if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 64) )
          break;
        v55 = *(_QWORD *)(v53 + 528);
        v56 = *(_QWORD *)(v55 + 8 * v54);
        if ( (*(_DWORD *)(v56 + 24) & 0x600) != 0x200 )
          sub_A0ED0(v56, 0, v55, v47, v40, v41);
        v49 = (_QWORD *)(v249 + 6 * v234[0]);
        v57 = v56 + 200;
        v222.m128i_i8[0] = a9 & 1;
        if ( (a9 & 1) == 0 )
          v57 = v56 + 240;
        v58 = nullptr;
        v59 = *(_QWORD *)(v57 + 24);
        if ( v59 )
        {
          v214 = (_QWORD *)(v249 + 6 * v234[0]);
          v218 = v57;
          v219[0] = *(_QWORD *)(v57 + 24);
          n = 16 * v59;
          v58 = (void *)qalloc_or_throw();
          memcpy(v58, *(const void **)(v218 + 16), n);
          v49 = v214;
          v59 = v219[0];
        }
        si128 = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v59);
        if ( *v49 )
        {
          v49[1] = 0;
          n = (size_t)v49;
          *(__m128i *)v219 = si128;
          qfree();
          si128 = _mm_load_si128((const __m128i *)v219);
          v49 = (_QWORD *)n;
        }
        *v49 = v58;
        *(__m128i *)(v49 + 1) = si128;
        n = (size_t)&src;
        sub_310D40(v49, &src);
        if ( ((unsigned __int8)v220 & 1) != 0 && *(_DWORD *)(v56 + 72) != (_DWORD)v228 )
        {
          v50 = (_QWORD *)(v56 + 200);
          if ( v222.m128i_i8[0] )
            v50 = (_QWORD *)(v56 + 240);
          v222.m128i_i64[0] = (__int64)v50;
          if ( (unsigned __int8)sub_5E200(v50, v230) || (unsigned __int8)sub_3110F0(v222.m128i_i64[0] + 16, n) )
          {
            sub_5E350(v262, v230);
            n = 0;
            v222.m128i_i64[0] = v261;
            if ( (_QWORD)v261 )
            {
              v219[0] = 16 * v261;
              n = qalloc_or_throw();
              memcpy((void *)n, src, v219[0]);
            }
            v51 = _mm_loadl_epi64(&v222);
            v52 = _mm_unpacklo_epi64(v51, v51);
            if ( v263 )
            {
              v222 = v52;
              v264.m128i_i64[0] = 0;
              qfree();
              v52 = _mm_load_si128(&v222);
            }
            v264 = v52;
            v263 = n;
            v12 = sub_16C980(v227, v262, v56, 0, 0, v231, a9);
            v235 = v12;
            if ( v12 )
              goto LABEL_63;
          }
        }
        v234[0] += 4LL;
        if ( v221 == v234[0] )
          goto LABEL_117;
      }
      if ( !under_debugger )
        sub_37B760(52719);
LABEL_372:
      BUG();
    }
  }
LABEL_117:
  if ( ((unsigned __int8)v225 & 1) != 0 )
  {
    if ( v232 != -1 )
    {
      v60 = v230;
      sub_5E350(v262, v230);
      v64 = v261;
      v65 = 0;
      if ( (_QWORD)v261 )
      {
        v234[0] = 16 * v261;
        v183 = (void *)qalloc_or_throw();
        v60 = (__int64 *)src;
        v65 = (size_t)v183;
        memcpy(v183, src, v234[0]);
      }
      v66 = v263;
      v67 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
      if ( v263 )
      {
        *(__m128i *)v234 = v67;
        v264.m128i_i64[0] = 0;
        qfree();
        v67 = _mm_load_si128((const __m128i *)v234);
      }
      v263 = v65;
      v264 = v67;
      v68 = v233[5];
      if ( v232 >= *(_DWORD *)(v68 + 64) )
        sub_16CD00(v66, v60, v68, v61, v62, v63);
      v12 = sub_16C980(v227, v262, *(_QWORD *)(*(_QWORD *)(v68 + 528) + 8LL * v232), 0, v223, v231, a9);
      v235 = v12;
      if ( v12 )
        goto LABEL_63;
    }
    if ( ((unsigned __int8)v225 & 2) == 0 )
    {
      v12 = 0;
      goto LABEL_63;
    }
  }
  v269 = 0;
  v234[0] = (size_t)&v269;
  v271 = &v269;
  v272 = &v269;
  v270 = nullptr;
  v228 = &v268;
  v273 = 0;
  n = (size_t)&src;
  sub_173760(&v268, (__int64)&src);
  if ( (int)v229 > 0 )
  {
    v69 = 0;
    do
    {
      sub_173760(v228, v69 + v249);
      v69 += 24;
    }
    while ( v69 != 8 * (3LL * (unsigned int)(v38 - 1) + 3) );
  }
  LODWORD(v221) = sub_5E5A0((__int64)v230);
  v251[0] = 0;
  v251[1] = 0;
  v222.m128i_i64[0] = v273;
  v252 = 0;
  if ( v241 )
  {
    v70 = v242;
    if ( (_QWORD)v242 )
    {
      v71 = v234[0];
      v72 = 0;
      do
      {
        ++v72;
        qfree();
      }
      while ( v70 != v72 );
      v234[0] = v71;
    }
    *(_QWORD *)&v242 = 0;
    qfree();
    v241 = 0;
    *((_QWORD *)&v242 + 1) = 0;
  }
  v73 = v242;
  if ( v38 < (unsigned __int64)v242 )
  {
    v208 = v234[0];
    v209 = v38;
    do
    {
      ++v209;
      qfree();
    }
    while ( v209 < v73 );
    v234[0] = v208;
    *(_QWORD *)&v242 = v38;
  }
  else if ( (unsigned __int64)v242 < v38 )
  {
    v74 = v241;
    if ( (unsigned __int64)v251 < v241 || (unsigned __int64)v251 >= v241 + 24LL * *((_QWORD *)&v242 + 1) )
    {
      if ( *((_QWORD *)&v242 + 1) >= (unsigned __int64)v38
        || (v213 = qvector_reserve(), v73 = v242, v241 = v213, v74 = v213, (unsigned __int64)v242 < v38) )
      {
        while ( 1 )
        {
          v210 = v74 + 24 * v73;
          sub_5DA80((__int64 *)v210, (__int64)v251);
          ++v73;
          *(_DWORD *)(v210 + 16) = v252;
          if ( v73 >= v38 )
            break;
          v74 = v241;
        }
      }
      *(_QWORD *)&v242 = v38;
    }
    else
    {
      sub_5DA80((__int64 *)&v281, (__int64)v251);
      LODWORD(v283) = v252;
      if ( *((_QWORD *)&v242 + 1) < (unsigned __int64)v38 )
        v241 = qvector_reserve();
      v75 = v242;
      if ( (unsigned __int64)v242 < v38 )
      {
        do
        {
          v76 = v241 + 24 * v75;
          sub_5DA80((__int64 *)v76, (__int64)&v281);
          ++v75;
          *(_DWORD *)(v76 + 16) = v283;
        }
        while ( v38 != v75 );
      }
      *(_QWORD *)&v242 = v38;
      qfree();
    }
  }
  v77 = v230;
  v78 = 0;
  for ( i = sub_5E3E0(v230, 0); ; i = sub_5E3E0(v230, v78) )
  {
    v163 = v244;
    if ( i == v259 )
      break;
    v164 = v243;
    LODWORD(v281) = i;
    v81 = v244 + 1;
    if ( &v281 < (__int64 (__fastcall ***)())v243 || &v281 >= (__int64 (__fastcall ***)())&v243[*((_QWORD *)&v244 + 1)] )
    {
      if ( *((_QWORD *)&v244 + 1) < v81 )
      {
        v243 = (_DWORD *)qvector_reserve();
        v164 = v243;
        v163 = v244;
        v82 = (int)v281;
      }
      else
      {
        v82 = i;
      }
      v164[v163] = v82;
    }
    else
    {
      if ( *((_QWORD *)&v244 + 1) < v81 )
      {
        v243 = (_DWORD *)qvector_reserve();
        v163 = v244;
        v164 = v243;
      }
      v164[v163] = i;
    }
    v77 = v230;
    v78 = (unsigned int)(i + 1);
    *(_QWORD *)&v244 = v244 + 1;
  }
  v85 = (__int64)v271;
  v86 = v246;
  if ( v271 != (int *)v234[0] )
  {
    v225 = &v245;
    do
    {
      v87 = *(_QWORD *)(v85 + 32);
      v78 = v245;
      if ( *((_QWORD *)&v246 + 1) < v86 + 1 )
      {
        v245 = qvector_reserve();
        v86 = v246;
        v78 = v245;
      }
      *(_QWORD *)(v78 + 8 * v86) = v87;
      v77 = (__int64 *)v85;
      v86 = v246 + 1;
      *(_QWORD *)&v246 = v246 + 1;
      v85 = std::_Rb_tree_increment();
    }
    while ( v85 != v234[0] );
  }
  v88 = v248;
  if ( (unsigned __int64)v248 < v86 )
  {
    v207 = v247;
    if ( *((_QWORD *)&v248 + 1) < v86 )
    {
      v247 = qvector_reserve();
      v207 = v247;
      v88 = v248;
    }
    v77 = (__int64 *)(v207 + 8 * v88);
    v78 = 0;
    memset(v77, 0, 8 * (v86 - v88));
    *(_QWORD *)&v248 = v86;
    v86 = v246;
  }
  else if ( v86 != (_QWORD)v248 )
  {
    *(_QWORD *)&v248 = v86;
  }
  v89 = v234[0];
  v90 = 0;
  v91 = nullptr;
  if ( v86 )
  {
    do
    {
      v90 = (unsigned int)(v90 + 1);
      v78 = (unsigned __int64)v91;
      v92 = -1;
      v91 = (unsigned __int64 *)(int)v90;
      if ( (int)v90 < v86 )
        v92 = *(_QWORD *)(v245 + 8LL * (int)v90);
      v77 = (__int64 *)v247;
      *(_QWORD *)(v247 + 8 * v78) = v92 - *(_QWORD *)(v245 + 8 * v78);
      v86 = v246;
    }
    while ( (int)v90 < (unsigned __int64)v246 );
    v234[0] = v89;
  }
  v93 = (unsigned int)v229;
  if ( (int)v229 > 0 )
  {
    v225 = nullptr;
    v220 = (__int64 *)(4LL * (unsigned int)(v38 - 1) + 4);
    LOBYTE(v219[0]) = a9 & 1;
    while ( 1 )
    {
      v94 = 6LL * (_QWORD)v225;
      v95 = (__int64 *)(6LL * (_QWORD)v225 + v241);
      v96 = v233[5];
      v97 = *(unsigned int *)((char *)v225 + (_QWORD)v239);
      if ( (unsigned int)v97 >= *(_DWORD *)(v96 + 64) )
        sub_16CD00(v77, v78, v96, v90, v79, v93);
      v98 = *(_QWORD *)(*(_QWORD *)(v96 + 528) + 8 * v97);
      if ( (*(_DWORD *)(v98 + 24) & 0x600) != 0x200 )
      {
        if ( !under_debugger )
          sub_37B760(50543);
        goto LABEL_372;
      }
      v99 = v98 + 240;
      v100 = v98 + 200;
      if ( !LOBYTE(v219[0]) )
        v99 = v100;
      sub_5DA80((__int64 *)&v237, v99);
      sub_5E180((__int64 *)&v237, v230);
      v101 = sub_5E3E0(&v237, 0);
      if ( v101 != v238 )
        break;
LABEL_183:
      v104 = (unsigned __int64 **)(v249 + v94);
      v105 = v104[1];
      v78 = (unsigned __int64)*v104;
      v106 = *v104;
      if ( !(16LL * (_QWORD)v105) )
        goto LABEL_196;
      do
      {
        v107 = (__int64)v271;
        if ( v271 == (int *)v234[0] )
          goto LABEL_195;
        do
        {
          v108 = v106[1];
          v109 = *(_QWORD *)(v107 + 32);
          v110 = *v106;
          if ( v108 && v109 >= v110 && v108 + v110 - 1 >= v109 )
          {
            v111 = (_QWORD *)(v245 + 8 * v246);
            if ( (_QWORD *)v245 == v111 )
            {
LABEL_248:
              if ( !under_debugger )
                sub_37B760(50545);
              goto LABEL_372;
            }
            v112 = (_QWORD *)v245;
            while ( v109 != *v112 )
            {
              if ( v111 == ++v112 )
                goto LABEL_248;
            }
            sub_5DC10(v95, v163 + (((__int64)v112 - v245) >> 3));
          }
          v107 = std::_Rb_tree_increment();
        }
        while ( v107 != v234[0] );
        v78 = (unsigned __int64)*v104;
        v105 = v104[1];
LABEL_195:
        v106 += 2;
      }
      while ( v106 != (unsigned __int64 *)(v78 + 16LL * (_QWORD)v105) );
LABEL_196:
      v77 = v237;
      qfree();
      v225 = (__int64 *)((char *)v225 + 4);
      if ( v220 == v225 )
        goto LABEL_197;
    }
    while ( 1 )
    {
      v102 = &v243[v244];
      if ( v243 == v102 )
        break;
      v103 = v243;
      while ( *v103 != v101 )
      {
        if ( v102 == ++v103 )
          goto LABEL_352;
      }
      sub_5DC10(v95, v103 - v243);
      v101 = sub_5E3E0(&v237, v101 + 1);
      if ( v101 == v238 )
        goto LABEL_183;
    }
LABEL_352:
    if ( !under_debugger )
      sub_37B760(50544);
    goto LABEL_372;
  }
LABEL_197:
  v113 = v222.m128i_i32[0] + v221;
  if ( (_QWORD)v246 + (int)v163 != v222.m128i_i32[0] + (_DWORD)v221 )
  {
    if ( !under_debugger )
      sub_37B760(50546);
    goto LABEL_372;
  }
  qfree();
  sub_16D3F0(v270);
  v254 = v113;
  v253[0] = 0;
  v225 = v253;
  v253[1] = 0;
  sub_5D900(v253, 0, v163);
  v114 = src;
  if ( 16LL * (_QWORD)v261 )
  {
    while ( 1 )
    {
      v115 = (_QWORD *)(v245 + 8 * v246);
      if ( (_QWORD *)v245 == v115 )
        break;
      v116 = (_QWORD *)v245;
      while ( *v114 != *v116 )
      {
        if ( v115 == ++v116 )
          goto LABEL_340;
      }
      sub_5DC10(v225, v163 + (((__int64)v116 - v245) >> 3));
      v114 += 2;
      if ( v114 == (_QWORD *)((char *)src + 16 * (_QWORD)v261) )
        goto LABEL_204;
    }
LABEL_340:
    if ( !under_debugger )
      sub_37B760(50547);
    goto LABEL_372;
  }
LABEL_204:
  if ( v232 != -1 && (_DWORD)v226 == -1 )
  {
    v117 = v240;
    v118 = v239;
    if ( *((_QWORD *)&v240 + 1) < (unsigned __int64)(v240 + 1) )
    {
      v239 = (_DWORD *)qvector_reserve();
      v118 = v239;
      v117 = v240;
    }
    v118[v117] = v232;
    *(_QWORD *)&v240 = v240 + 1;
    sub_5DA80((__int64 *)&v281, (__int64)v225);
    v119 = v241;
    LODWORD(v283) = v254;
    v120 = v242;
    if ( *((_QWORD *)&v242 + 1) < (unsigned __int64)(v242 + 1) )
    {
      v241 = qvector_reserve();
      v119 = v241;
      v120 = v242;
    }
    v121 = v119 + 24 * v120;
    sub_5DA80((__int64 *)v121, (__int64)&v281);
    *(_QWORD *)&v242 = v242 + 1;
    *(_DWORD *)(v121 + 16) = v283;
    v122 = v281;
    qfree();
    v126 = v233[5];
    if ( v232 >= *(_DWORD *)(v126 + 64) )
      sub_16CD00(v122, &v281, v126, v123, v124, v125);
    v127 = *(_QWORD *)(v126 + 528);
    v128 = *(_QWORD *)(v127 + 8LL * v232);
    if ( (*(_DWORD *)(v128 + 24) & 0x600) != 0x200 )
      sub_A0ED0(v128, 0, v127, v123, v124, v125);
    LODWORD(v229) = v229 + 1;
  }
  v282 = 0;
  v284 = 0;
  v293 = 0;
  v281 = off_4B7AD8;
  v286 = 0;
  v285 = 0xFFFFFFFF00000000LL;
  v129 = *v233;
  v288 = 0;
  v290 = 0;
  v292 = 0;
  v294 = 0;
  v295 = 0;
  memset(&v274, 0, 24);
  LODWORD(v268) = -1;
  v283 = 0;
  v287 = 0;
  v289 = 0;
  v291 = 0;
  v296 = 0;
  v130 = *(__int64 (__fastcall **)(__int64))(v129 + 56);
  if ( v130 != sub_FB3E0 )
  {
    v132 = (int)v130((__int64)v233);
    if ( v132 < v274.m256i_i64[1] )
    {
LABEL_330:
      v274.m256i_i64[1] = v132;
      goto LABEL_216;
    }
    if ( v274.m256i_i64[1] >= v132 )
      goto LABEL_216;
    v202 = v274.m256i_i64[0];
    v201 = v274.m256i_u64[2];
    if ( (unsigned __int64)v228 < v274.m256i_i64[0] )
    {
LABEL_334:
      if ( v201 < v132 )
        v274.m256i_i64[0] = qvector_reserve();
      v205 = v274.m256i_i64[1];
      if ( v274.m256i_i64[1] < v132 )
      {
        do
          *(_DWORD *)(v274.m256i_i64[0] + 4 * v205++) = v268;
        while ( v132 != v205 );
      }
      goto LABEL_330;
    }
LABEL_325:
    if ( (unsigned __int64)v228 < v202 + 4 * v201 )
    {
      v203 = v268;
      if ( v201 < v132 )
        v274.m256i_i64[0] = qvector_reserve();
      v204 = v274.m256i_i64[1];
      if ( v274.m256i_i64[1] < v132 )
      {
        do
          *(_DWORD *)(v274.m256i_i64[0] + 4 * v204++) = v203;
        while ( v204 != v132 );
      }
      goto LABEL_330;
    }
    goto LABEL_334;
  }
  v131 = v233[5];
  v132 = *(int *)(v131 + 64);
  if ( *(_DWORD *)(v131 + 64) )
  {
    v201 = v274.m256i_u64[2];
    v202 = 0;
    goto LABEL_325;
  }
LABEL_216:
  v133 = v240;
  v134 = v240;
  if ( (int)v240 <= 0 )
  {
    sub_60E40((__int64)&v281, v240);
    LODWORD(v219[0]) = v133 - 1;
  }
  else
  {
    LODWORD(v219[0]) = v240 - 1;
    v220 = (__int64 *)(unsigned int)(v240 - 1);
    v135 = nullptr;
    do
    {
      *(_DWORD *)(v274.m256i_i64[0] + 4LL * (int)v239[(_QWORD)v135]) = (_DWORD)v135;
      v136 = v135;
      v135 = (__int64 *)((char *)v135 + 1);
    }
    while ( v220 != v136 );
    sub_60E40((__int64)&v281, v134);
    v226 = nullptr;
    for ( j = nullptr; ; j = (__int64 *)((char *)j + 1) )
    {
      v222.m128i_i32[0] = (int)j;
      v138 = *v233;
      v139 = v239[(_QWORD)j];
      v140 = *(__int64 (__fastcall **)(__int64, int))(*v233 + 104);
      LODWORD(v234[0]) = v139;
      if ( v140 == sub_12DC50 )
      {
        v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v233[5] + 528) + 8LL * v139) + 352LL);
      }
      else
      {
        v177 = v233;
        v141 = v140((__int64)v233, v234[0]);
        v138 = *v177;
      }
      if ( v141 > 0 )
      {
        v142 = v141;
        v143 = 0;
        v221 = 8LL * SLODWORD(v234[0]);
        do
        {
          v144 = *(__int64 (__fastcall **)(__int64, int, int))(v138 + 120);
          if ( v144 == sub_16C1D0 )
            v145 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v233[5] + 528) + v221) + 344LL) + 4 * v143);
          else
            v145 = v144((__int64)v233, v234[0], v143);
          v146 = *(_DWORD *)(v274.m256i_i64[0] + 4LL * v145);
          if ( v146 != -1 )
          {
            v147 = (__int64 *)(v286 + 24LL * v146);
            v148 = v147[1];
            v149 = (_DWORD *)(*v147 + 4 * v148);
            if ( (_DWORD *)*v147 == v149 )
              goto LABEL_250;
            v150 = (_DWORD *)*v147;
            while ( *v150 != (_DWORD)j )
            {
              if ( v149 == ++v150 )
                goto LABEL_250;
            }
            if ( v149 == v150 )
            {
LABEL_250:
              if ( v147[2] < (unsigned __int64)(v148 + 1) )
              {
                v217 = v146;
                v175 = qvector_reserve();
                v146 = v217;
                v176 = v147[1];
                *v147 = v175;
                v149 = (_DWORD *)(v175 + 4 * v176);
              }
              *v149 = v222.m128i_i32[0];
              ++v147[1];
              v167 = (__int64 *)((char *)v226 + v288);
              v168 = *(__int64 *)((char *)v226 + v288 + 8);
              v169 = *(__int64 *)((char *)v226 + v288);
              if ( *(__int64 *)((char *)v226 + v288 + 16) < (unsigned __int64)(v168 + 1) )
              {
                v216 = v146;
                v169 = qvector_reserve();
                v146 = v216;
                *v167 = v169;
                v168 = v167[1];
              }
              *(_DWORD *)(v169 + 4 * v168) = v146;
              ++v167[1];
            }
          }
          ++v143;
          v138 = *v233;
        }
        while ( v143 != v142 );
      }
      v151 = *(__int64 (__fastcall **)(__int64, int))(v138 + 96);
      if ( v151 == sub_12DC30 )
        v152 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v233[5] + 528) + 8LL * SLODWORD(v234[0])) + 376LL);
      else
        v152 = v151((__int64)v233, v234[0]);
      if ( v152 > 0 )
      {
        v153 = 0;
        v221 = v152;
        v154 = 8LL * SLODWORD(v234[0]);
        do
        {
          v155 = *(__int64 (__fastcall **)(__int64, int, int))(*v233 + 112);
          if ( v155 == sub_12DC70 )
            v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v233[5] + 528) + v154) + 368LL) + 4 * v153);
          else
            v156 = v155((__int64)v233, v234[0], v153);
          v157 = *(_DWORD *)(v274.m256i_i64[0] + 4LL * v156);
          if ( v157 != -1 )
          {
            v158 = (__int64 *)((char *)v226 + v286);
            v159 = *(_DWORD **)((char *)v226 + v286);
            v160 = *(__int64 *)((char *)v226 + v286 + 8);
            v161 = &v159[v160];
            if ( v159 == v161 )
              goto LABEL_255;
            v162 = *(_DWORD **)((char *)v226 + v286);
            while ( v157 != *v162 )
            {
              if ( v161 == ++v162 )
                goto LABEL_255;
            }
            if ( v162 == v161 )
            {
LABEL_255:
              if ( v158[2] < (unsigned __int64)(v160 + 1) )
              {
                v215 = v157;
                v173 = qvector_reserve();
                v157 = v215;
                v174 = v158[1];
                *v158 = v173;
                v161 = (_DWORD *)(v173 + 4 * v174);
              }
              *v161 = v157;
              ++v158[1];
              v170 = (__int64 *)(v288 + 24LL * v157);
              v171 = v170[1];
              v172 = *v170;
              if ( v170[2] < (unsigned __int64)(v171 + 1) )
              {
                v172 = qvector_reserve();
                *v170 = v172;
                v171 = v170[1];
              }
              *(_DWORD *)(v172 + 4 * v171) = v222.m128i_i32[0];
              ++v170[1];
            }
          }
          ++v153;
        }
        while ( v221 != v153 );
      }
      v226 += 3;
      if ( j == v220 )
        break;
    }
  }
  HIDWORD(v285) = v219[0];
  if ( v274.m256i_i64[0] )
  {
    v274.m256i_i64[1] = 0;
    qfree();
  }
  memset(&v274.m256i_u64[1], 0, 24);
  v234[0] = (int)v229;
  v274.m256i_i64[0] = (__int64)&unk_4B7CE0;
  v275[0] = 0;
  v275[1] = 0;
  v276 = v254;
  sub_5DA80(&v277, (__int64)v225);
  v178 = v274.m256i_u64[2];
  v279 = 1;
  v278 = v254;
  if ( v234[0] < v274.m256i_i64[2] )
  {
    v184 = v234[0];
    v185 = v234[0];
    do
    {
      ++v184;
      qfree();
    }
    while ( v184 < v178 );
    v234[0] = v185;
    v274.m256i_i64[2] = v185;
  }
  else
  {
    v179 = v234[0];
    if ( v274.m256i_i64[2] < v234[0] )
    {
      v180 = v274.m256i_i64[1];
      v181 = v275;
      if ( (unsigned __int64)v275 < v274.m256i_i64[1]
        || (unsigned __int64)v275 >= v274.m256i_i64[1] + 24 * v274.m256i_i64[3] )
      {
        if ( v274.m256i_i64[3] >= v234[0]
          || (v211 = v234[0],
              v228 = v275,
              v212 = qvector_reserve(),
              v178 = v274.m256i_u64[2],
              v274.m256i_i64[1] = v212,
              v180 = v212,
              v181 = v228,
              v274.m256i_i64[2] < v211) )
        {
          while ( 1 )
          {
            v226 = v181;
            v228 = (__int64 *)(v180 + 24 * v178);
            sub_5DA80(v228, (__int64)v181);
            ++v178;
            v206 = v234[0];
            *((_DWORD *)v228 + 4) = v276;
            if ( v178 >= v206 )
              break;
            v180 = v274.m256i_i64[1];
            v181 = v226;
          }
        }
        v274.m256i_i64[2] = v234[0];
      }
      else
      {
        sub_5DA80(v228, (__int64)v275);
        LODWORD(v270) = v276;
        if ( v274.m256i_i64[3] < v179 )
          v274.m256i_i64[1] = qvector_reserve();
        v182 = v274.m256i_i64[2];
        if ( v274.m256i_i64[2] < v234[0] )
        {
          do
          {
            v226 = (__int64 *)(v274.m256i_i64[1] + 24 * v182);
            sub_5DA80(v226, (__int64)v228);
            ++v182;
            *((_DWORD *)v226 + 4) = (_DWORD)v270;
          }
          while ( v234[0] != v182 );
        }
        v274.m256i_i64[2] = v234[0];
        qfree();
      }
    }
  }
  v274.m256i_i64[0] = (__int64)&off_4AA808;
  v280 = &v241;
  sub_30A3E0(&v281, &v274);
  if ( (int)v229 <= 0 )
  {
LABEL_318:
    v12 = 0;
    goto LABEL_35;
  }
  v186 = 0;
  v229 = 4 * v234[0];
  while ( 1 )
  {
    v187 = v274.m256i_i64[1] + 6 * v186;
    if ( !(unsigned __int8)sub_5E300((_QWORD *)v187) )
      break;
LABEL_281:
    v186 += 4LL;
    if ( v229 == v186 )
      goto LABEL_318;
  }
  if ( (int)sub_5E680((_QWORD *)v187) >= *(_DWORD *)(v187 + 16) )
  {
    if ( !under_debugger )
      sub_37B760(50548);
    goto LABEL_372;
  }
  v265[0] = 0;
  v265[1] = 0;
  v266 = 0;
  v267 = 0;
  v188 = sub_5E3E0((_QWORD *)v187, 0);
  v234[0] = (size_t)v265;
  for ( k = v188; k != *(_DWORD *)(v187 + 8); k = sub_5E3E0((_QWORD *)v187, k + 1) )
  {
    if ( k >= (int)v163 )
    {
      v190 = k - v163;
      if ( k - (int)v163 < 0 || v190 >= (unsigned __int64)v246 )
      {
        if ( !under_debugger )
          sub_37B760(50549);
        goto LABEL_372;
      }
      sub_11C460((__int64 *)v234[0], *(_QWORD *)(v245 + 8LL * v190), *(_QWORD *)(v247 + 8LL * v190));
    }
    else
    {
      sub_5DC10((__int64 *)v234[0], v243[k]);
    }
  }
  sub_5E180(v265, v230);
  v191 = n;
  sub_310D40(&v266, n);
  if ( (unsigned __int8)sub_5E300(v265) && !(_QWORD)v267 )
  {
    if ( v266 )
      qfree();
LABEL_296:
    qfree();
    goto LABEL_281;
  }
  v195 = v233[5];
  v196 = (unsigned int)v239[v186 / 4];
  if ( (unsigned int)v196 >= *(_DWORD *)(v195 + 64) )
    sub_16CD00(v265, v191, v195, v192, v193, v194);
  v197 = *(_DWORD **)(*(_QWORD *)(v195 + 528) + 8 * v196);
  LODWORD(v234[0]) = v197[6];
  if ( (v234[0] & 0x600) != 0x200 )
  {
    if ( !under_debugger )
      sub_37B760(50550);
    goto LABEL_372;
  }
  if ( v197[19] == 1 )
  {
    v200 = v197 + 30;
    if ( (a9 & 1) != 0 )
      v200 = v197 + 40;
    v234[0] = (size_t)v200;
    if ( !(unsigned __int8)sub_5E200(v265, v200) && !(unsigned __int8)sub_3110F0(&v266, v234[0] + 16) )
      goto LABEL_304;
    v199 = sub_16C980(v227, v265, (__int64)v197, 0, 0, v231, a9);
  }
  else
  {
    v198 = 0;
    if ( v197[18] == v232 )
      v198 = v223;
    v199 = sub_16C980(v227, v265, (__int64)v197, 0, v198, v231, a9);
  }
  v12 = v199;
  v235 = v199;
  if ( !v199 )
  {
LABEL_304:
    if ( v266 )
    {
      *(_QWORD *)&v267 = 0;
      qfree();
    }
    goto LABEL_296;
  }
  if ( v266 )
  {
    *(_QWORD *)&v267 = 0;
    qfree();
  }
  qfree();
LABEL_35:
  v274.m256i_i64[0] = (__int64)&unk_4B7CE0;
  qfree();
  qfree();
  if ( v274.m256i_i64[1] )
  {
    v20 = v274.m256i_i64[2];
    if ( v274.m256i_i64[2] )
    {
      v21 = 0;
      do
      {
        v22 = v21 + 1;
        qfree();
        v21 = v22;
      }
      while ( v20 != v22 );
    }
    v274.m256i_i64[2] = 0;
    qfree();
  }
  v281 = off_4B7AD8;
  if ( v295 )
  {
    *(_QWORD *)&v296 = 0;
    qfree();
  }
  if ( v292 )
  {
    *(_QWORD *)&v293 = 0;
    qfree();
  }
  if ( v290 )
  {
    *(_QWORD *)&v291 = 0;
    qfree();
  }
  v23 = v288;
  if ( v288 )
  {
    v24 = v289;
    if ( (_QWORD)v289 )
    {
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v23 + 24 * v25);
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
          v23 = v288;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v289 = 0;
    qfree();
  }
  v27 = v286;
  if ( v286 )
  {
    v28 = v287;
    if ( (_QWORD)v287 )
    {
      v29 = 0;
      do
      {
        v30 = (_QWORD *)(v27 + 24 * v29);
        if ( *v30 )
        {
          v30[1] = 0;
          qfree();
          v27 = v286;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v287 = 0;
    qfree();
  }
  v281 = (__int64 (__fastcall **)())&unk_4B8648;
  if ( v282 )
  {
    *(_QWORD *)&v283 = 0;
    qfree();
  }
  qfree();
LABEL_63:
  v31 = v249;
  if ( v249 )
  {
    v32 = v250;
    if ( (_QWORD)v250 )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v31 + 24 * v33);
        if ( *v34 )
        {
          v34[1] = 0;
          qfree();
          v31 = v249;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v250 = 0;
    qfree();
  }
  if ( v247 )
  {
    *(_QWORD *)&v248 = 0;
    qfree();
  }
  if ( v245 )
  {
    *(_QWORD *)&v246 = 0;
    qfree();
  }
  if ( v243 )
  {
    *(_QWORD *)&v244 = 0;
    qfree();
  }
  if ( v241 )
  {
    v35 = v242;
    if ( (_QWORD)v242 )
    {
      v36 = 0;
      do
      {
        v37 = v36 + 1;
        qfree();
        v36 = v37;
      }
      while ( v35 != v37 );
    }
    *(_QWORD *)&v242 = 0;
    qfree();
  }
  if ( v239 )
  {
    *(_QWORD *)&v240 = 0;
    qfree();
  }
LABEL_83:
  v255 = off_4A8358;
  qfree();
  qfree();
LABEL_5:
  if ( v263 )
  {
    v264.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    *(_QWORD *)&v261 = 0;
    qfree();
  }
  qfree();
  return v12;
}

