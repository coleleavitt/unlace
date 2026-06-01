unsigned __int64 __fastcall sub_10CB40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __m128i a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  const __m128i **v19; // r15
  __int64 v20; // rbp
  const __m128i *v21; // rax
  __int64 v22; // r9
  __int64 m128i_i64; // rcx
  int v24; // ebp
  unsigned __int64 v25; // rdx
  __m128i *v26; // r12
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  _QWORD *v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  _QWORD *v49; // rbx
  _QWORD *v50; // r12
  _QWORD *v51; // rdx
  __int64 *v52; // rax
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ecx
  __int64 v60; // rsi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 *v63; // rbp
  __int64 v64; // rdx
  __int64 *v65; // rdi
  __int64 *v66; // rdi
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rbp
  __int64 v70; // rbx
  __int64 v71; // rbp
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdi
  __m128i si128; // xmm2
  __m128i v76; // xmm1
  __int64 v77; // rdx
  __int64 v78; // rdi
  __m128i v79; // xmm1
  __m128i v80; // xmm2
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdi
  __m128i v85; // xmm1
  __m128i v86; // xmm2
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  __m128i *v89; // rbx
  __m128i *v90; // rbx
  __m128 v91; // xmm6
  int v92; // r15d
  __int64 v93; // rax
  int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdi
  __m128i v100; // xmm7
  __m128i v101; // xmm6
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  __m128i v104; // xmm7
  __m128i v105; // xmm6
  unsigned __int64 v106; // rax
  void (*v107)(); // rax
  unsigned __int64 v108; // rbp
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rbx
  __int64 *v114; // rbp
  __int64 v115; // rax
  __int64 *v116; // rdi
  __int64 *v117; // rdi
  __int64 v118; // rax
  __m128i v119; // xmm0
  __int64 *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __m128i v124; // xmm0
  __int64 *v125; // rbx
  __int64 *v126; // rdi
  unsigned __int64 v127; // rdx
  _QWORD *v128; // rax
  _QWORD *v129; // rcx
  _QWORD *i; // rax
  __int64 *v131; // rbp
  __int64 v132; // rax
  __int64 *v133; // rdi
  __int64 *v134; // rdi
  unsigned __int64 v135; // r15
  unsigned __int64 v136; // rax
  __int64 v137; // rax
  unsigned __int64 v138; // r12
  __int64 v139; // rdi
  unsigned __int64 v140; // rdx
  unsigned __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // rcx
  __int64 (__fastcall **v144)(); // rdx
  const __m128i *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // r9
  __int64 v148; // rsi
  bool v149; // cf
  __int64 (__fastcall **v150)(); // rcx
  __int64 (__fastcall **v151)(); // rdx
  __int64 v152; // rax
  unsigned __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  unsigned __int64 v156; // rax
  __m128i v157; // xmm0
  unsigned __int64 v158; // rdx
  _QWORD *v159; // rdx
  __int64 v160; // rcx
  unsigned __int64 v161; // rsi
  _QWORD *v162; // rdx
  __int64 v163; // rcx
  _QWORD *v164; // rsi
  _QWORD *v165; // rax
  __int64 v166; // rdx
  unsigned __int64 v167; // rcx
  __int64 v168; // r10
  unsigned __int64 v169; // rbp
  __int64 v170; // rax
  __m128i v171; // xmm0
  unsigned __int64 v172; // r12
  __int64 *v173; // rax
  __int64 v174; // rdi
  __int64 v175; // rax
  __m128i v176; // xmm0
  unsigned __int64 v177; // r11
  __int64 v178; // r13
  __int64 (__fastcall **v179)(); // r9
  __int8 v180; // r8
  __int64 v181; // rax
  unsigned __int64 v182; // r15
  const __m128i *v183; // rdx
  __m128i *v184; // rdx
  unsigned __int64 v185; // rdx
  __int64 *v186; // r13
  __int64 v187; // rax
  __int64 *v188; // rdi
  __int64 *v189; // rdi
  __int64 v190; // rax
  __m128i v191; // xmm0
  __int64 v192; // rdi
  __int64 v193; // rdx
  __int64 v194; // rax
  __m128i *v195; // rcx
  const __m128i *v196; // rdi
  __int64 v197; // r11
  __int64 v198; // rax
  __int64 (__fastcall **v199)(); // r9
  char v200; // r8
  __int64 v201; // r10
  __int64 v202; // rsi
  __m128i *v203; // rcx
  _QWORD *v204; // rax
  __int64 v205; // rdx
  _QWORD *v206; // rcx
  __int64 v207; // rax
  __m128i *v208; // rcx
  const __m128i *v209; // rdi
  __int64 v210; // rax
  __int64 v211; // rdx
  __m128i *v212; // rcx
  __int64 v213; // rax
  __int64 v214; // r13
  const __m128i *v215; // rdi
  __int64 v216; // rax
  unsigned __int64 v217; // rdx
  __m128i v218; // xmm0
  __int64 v219; // rax
  __m128i v220; // xmm0
  __int64 v221; // rax
  __int64 v222; // rdi
  __int64 v223; // rdx
  __int64 v224; // rax
  __m128i *v225; // rsi
  const __m128i *v226; // rcx
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rdi
  __int64 v230; // rdx
  __int64 v231; // rax
  __int64 v232; // r13
  const __m128i *v233; // rcx
  __int64 v234; // rax
  __m128i v235; // xmm0
  __m128 v236; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v237; // [rsp+10h] [rbp-3A8h] BYREF
  __m128i *v238; // [rsp+28h] [rbp-390h] BYREF
  __int64 v239; // [rsp+30h] [rbp-388h] BYREF
  __int64 (__fastcall **v240)(); // [rsp+38h] [rbp-380h]
  _OWORD *v241; // [rsp+40h] [rbp-378h]
  __int64 v242; // [rsp+48h] [rbp-370h]
  __int64 v243; // [rsp+50h] [rbp-368h]
  unsigned __int64 v244; // [rsp+58h] [rbp-360h]
  __int64 v245; // [rsp+60h] [rbp-358h]
  __m128i *v246; // [rsp+68h] [rbp-350h]
  __int64 *v247; // [rsp+70h] [rbp-348h]
  size_t n; // [rsp+78h] [rbp-340h]
  const __m128i *v249; // [rsp+88h] [rbp-330h] BYREF
  const __m128i *v250; // [rsp+90h] [rbp-328h] BYREF
  const __m128i *v251; // [rsp+98h] [rbp-320h] BYREF
  const __m128i *v252; // [rsp+A0h] [rbp-318h] BYREF
  const __m128i *v253; // [rsp+A8h] [rbp-310h] BYREF
  const __m128i *v254; // [rsp+B0h] [rbp-308h] BYREF
  const __m128i *v255; // [rsp+B8h] [rbp-300h] BYREF
  const __m128i *v256; // [rsp+C0h] [rbp-2F8h] BYREF
  const __m128i *v257; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v258; // [rsp+D0h] [rbp-2E8h] BYREF
  char v259; // [rsp+D8h] [rbp-2E0h]
  __int64 v260; // [rsp+E0h] [rbp-2D8h] BYREF
  char v261; // [rsp+E8h] [rbp-2D0h]
  __m128i v262; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v263; // [rsp+100h] [rbp-2B8h] BYREF
  char v264; // [rsp+108h] [rbp-2B0h]
  __int64 v265; // [rsp+110h] [rbp-2A8h] BYREF
  char v266; // [rsp+118h] [rbp-2A0h]
  __int64 v267; // [rsp+120h] [rbp-298h] BYREF
  char v268; // [rsp+128h] [rbp-290h]
  __int64 v269; // [rsp+130h] [rbp-288h] BYREF
  char v270; // [rsp+138h] [rbp-280h]
  __int64 v271; // [rsp+140h] [rbp-278h] BYREF
  char v272; // [rsp+148h] [rbp-270h]
  _OWORD *v273; // [rsp+150h] [rbp-268h] BYREF
  char v274; // [rsp+158h] [rbp-260h]
  __m128i v275; // [rsp+160h] [rbp-258h] BYREF
  __m128i v276; // [rsp+170h] [rbp-248h] BYREF
  __m128i v277; // [rsp+180h] [rbp-238h] BYREF
  __m128i v278; // [rsp+190h] [rbp-228h] BYREF
  _OWORD *v279; // [rsp+1A0h] [rbp-218h]
  __int64 v280; // [rsp+1B0h] [rbp-208h] BYREF
  __int128 v281; // [rsp+1B8h] [rbp-200h]
  __m128i v282; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v283; // [rsp+1E0h] [rbp-1D8h]
  int v284; // [rsp+1E8h] [rbp-1D0h]
  __m128i v285; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v286; // [rsp+200h] [rbp-1B8h]
  int v287; // [rsp+208h] [rbp-1B0h]
  __m128i v288; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v289; // [rsp+220h] [rbp-198h]
  int v290; // [rsp+228h] [rbp-190h]
  __m128i v291; // [rsp+230h] [rbp-188h] BYREF
  __m128i *v292; // [rsp+240h] [rbp-178h]
  __m128i v293; // [rsp+248h] [rbp-170h]
  __m128i v294; // [rsp+260h] [rbp-158h] BYREF
  __m128i *v295; // [rsp+270h] [rbp-148h]
  __m128i v296; // [rsp+278h] [rbp-140h]
  __m128i v297; // [rsp+290h] [rbp-128h] BYREF
  __m128i *v298; // [rsp+2A0h] [rbp-118h]
  __m128i v299; // [rsp+2A8h] [rbp-110h]
  __m128i v300; // [rsp+2C0h] [rbp-F8h] BYREF
  __m128i *v301; // [rsp+2D0h] [rbp-E8h]
  __m128i v302; // [rsp+2D8h] [rbp-E0h]
  __m128i v303; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i *v304; // [rsp+300h] [rbp-B8h]
  __m128i v305; // [rsp+308h] [rbp-B0h]
  char v306; // [rsp+318h] [rbp-A0h]
  __int64 v307; // [rsp+320h] [rbp-98h]
  __int64 v308[2]; // [rsp+328h] [rbp-90h] BYREF
  void *v309; // [rsp+338h] [rbp-80h]
  __int128 v310; // [rsp+340h] [rbp-78h]
  __m128i v311; // [rsp+350h] [rbp-68h] BYREF
  __int64 v312; // [rsp+360h] [rbp-58h]
  unsigned __int64 v313; // [rsp+368h] [rbp-50h]
  int v314; // [rsp+370h] [rbp-48h]
  char v315; // [rsp+374h] [rbp-44h]
  char v316; // [rsp+375h] [rbp-43h]
  unsigned __int64 v317; // [rsp+378h] [rbp-40h]

  v317 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 320);
  v278 = 0u;
  v7 = *(int *)(v6 + 64);
  v8 = v6;
  v242 = *(_QWORD *)(v6 + 1504);
  v243 = *(_QWORD *)(v6 + 136);
  v241 = (_OWORD *)*(int *)(v6 + 128);
  v279 = v241;
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
    goto LABEL_87;
  v9 = *(_QWORD *)(a1 + 88);
  v244 = (int)v7;
  if ( (int)v7 != v9 )
  {
    v280 = 0;
    a5.m128i_i64[0] = 0;
    v281 = 0;
    if ( (int)v7 < v9 )
    {
      v172 = (int)v7;
      do
      {
        v173 = (__int64 *)(*(_QWORD *)(a1 + 80) + 24 * v172);
        v174 = *v173;
        if ( *v173 )
        {
          v173[1] = 0;
          qfree(v174);
        }
        ++v172;
      }
      while ( v172 < v9 );
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 80);
      v11 = *(_QWORD *)(a1 + 96);
      v12 = a1 + 80;
      if ( (unsigned __int64)&v280 < v10 || (unsigned __int64)&v280 >= v10 + 24 * v11 )
      {
        if ( v11 < v244 )
        {
          v238 = &v278;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v12, v10, v244, 24);
          v9 = *(_QWORD *)(a1 + 88);
        }
        v13 = v244;
        if ( v9 < v244 )
        {
          a5.m128i_i64[0] = 0;
          v14 = 24 * v9;
          do
          {
            ++v9;
            v15 = v14 + *(_QWORD *)(a1 + 80);
            v14 += 24;
            *(_QWORD *)v15 = 0;
            *(_OWORD *)(v15 + 8) = 0;
          }
          while ( v13 != v9 );
        }
      }
      else
      {
        if ( v11 < v244 )
        {
          v238 = &v278;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v12, v10, v244, 24);
          v9 = *(_QWORD *)(a1 + 88);
        }
        v153 = v244;
        if ( v9 < v244 )
        {
          a5.m128i_i64[0] = 0;
          v154 = 24 * v9;
          do
          {
            ++v9;
            v155 = v154 + *(_QWORD *)(a1 + 80);
            v154 += 24;
            *(_QWORD *)v155 = 0;
            *(_OWORD *)(v155 + 8) = 0;
          }
          while ( v153 != v9 );
        }
      }
    }
    v6 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 88) = v244;
    v8 = v6;
    if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
      goto LABEL_87;
  }
  if ( !*(_QWORD *)(v6 + 440) )
    goto LABEL_26;
  v16 = 0;
  v17 = 0;
  v236.m128_u64[0] = (unsigned __int64)&v258;
  do
  {
    v18 = *(_QWORD *)(v6 + 432) + 104 * v17;
    if ( *(_DWORD *)(v18 + 92) )
      goto LABEL_14;
    if ( *(_DWORD *)v18 == 1 )
    {
      v19 = *(const __m128i ***)(a1 + 80);
      v20 = *(_QWORD *)(v18 + 8);
      v21 = *v19;
      v22 = (int)v20;
      m128i_i64 = (__int64)(*v19)[(_QWORD)v19[1]].m128i_i64;
      if ( *v19 == (const __m128i *)m128i_i64 )
        goto LABEL_130;
      while ( v21->m128i_i8[8] != 5 || (int)v20 != v21->m128i_i64[0] )
      {
        if ( (const __m128i *)m128i_i64 == ++v21 )
          goto LABEL_130;
      }
      if ( (const __m128i *)m128i_i64 == v21 )
      {
LABEL_130:
        v127 = (unsigned __int64)v19[1]->m128i_u64 + 1;
        if ( (unsigned __int64)v19[2] < v127 )
        {
          v142 = *(_QWORD *)(a1 + 80);
          v239 = (__int64)v19[2];
          v237.m128i_i64[0] = (int)v20;
          v238 = &v278;
          v143 = qvector_reserve(v142, 0, v127, 16);
          v144 = (__int64 (__fastcall **)())v19[2];
          v145 = *v19;
          v146 = (__int64)&v19[1][-1].m128i_i64[1] + 7;
          v19[2] = (const __m128i *)v239;
          v147 = v237.m128i_i64[0];
          if ( v146 >= 0 )
          {
            v148 = v143;
            do
            {
              a5 = _mm_loadu_si128(v145);
              v148 += 16;
              ++v145;
              *(__m128i *)(v148 - 16) = a5;
              v149 = v146-- == 0;
            }
            while ( !v149 );
            v145 = *v19;
          }
          v240 = v144;
          v239 = v143;
          v237.m128i_i64[0] = v147;
          v238 = &v278;
          qfree((__int64)v145);
          v150 = (__int64 (__fastcall **)())v239;
          v151 = v240;
          v22 = v237.m128i_i64[0];
          v152 = 2LL * (_QWORD)v19[1];
          *v19 = (const __m128i *)v239;
          v19[2] = (const __m128i *)v151;
          m128i_i64 = (__int64)&v150[v152];
        }
        *(_QWORD *)m128i_i64 = v22;
        *(_BYTE *)(m128i_i64 + 8) = 5;
        v19[1] = (const __m128i *)((char *)v19[1] + 1);
      }
      v258 = v22;
      v259 = 5;
      v249 = (const __m128i *)v236.m128_u64[0];
      v238 = &v278;
      sub_10BAA0(&v278, v236.m128_i64[0], &v249);
      v24 = *(_DWORD *)(v18 + 88) + v20;
      v261 = 5;
      v250 = (const __m128i *)&v260;
      v260 = v24;
      sub_10BAA0(&v278, (__int64)&v260, &v250);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v18 != 2 )
      goto LABEL_14;
    v303 = 0u;
    v304 = (__m128i *)v241;
    v238 = &v278;
    sub_10BF10();
    v168 = v303.m128i_i64[0];
    if ( !v303.m128i_i64[0] )
      goto LABEL_24;
    if ( !v303.m128i_i64[1] )
    {
      v169 = *(_QWORD *)v303.m128i_i64[0];
LABEL_204:
      *(_QWORD *)v168 = v168 & 0xFFFFFFFFFFFFFFFCLL | v169 & 3;
      v170 = v303.m128i_i64[0];
      v171 = (__m128i)v303.m128i_u64[0];
      *(_QWORD *)v303.m128i_i64[0] &= ~1uLL;
      a5 = _mm_unpacklo_epi64(v171, v171);
      *(__m128i *)(v170 + 8) = a5;
      *(_QWORD *)v303.m128i_i64[0] |= 2uLL;
      goto LABEL_232;
    }
    v177 = *(_QWORD *)(v303.m128i_i64[0] + 8);
    if ( v303.m128i_i64[0] == v177 )
    {
      v169 = *(_QWORD *)v303.m128i_i64[0];
    }
    else
    {
      do
      {
        v178 = *(_QWORD *)(a1 + 80);
        v179 = *(__int64 (__fastcall ***)())(v177 + 24);
        v180 = *(_BYTE *)(v177 + 32);
        v181 = *(_QWORD *)(v178 + 8);
        v182 = *(_QWORD *)(v178 + 16);
        if ( v182 < v181 + 1 )
        {
          v192 = *(_QWORD *)(a1 + 80);
          v245 = v168;
          LOBYTE(v240) = v180;
          v239 = (__int64)v179;
          v237.m128i_i64[0] = v177;
          v193 = qvector_reserve(v192, 0, v181 + 1, 16);
          v194 = *(_QWORD *)(v178 + 8);
          v195 = *(__m128i **)(v178 + 16);
          *(_QWORD *)(v178 + 16) = v182;
          v196 = *(const __m128i **)v178;
          v197 = v237.m128i_i64[0];
          v198 = v194 - 1;
          v199 = (__int64 (__fastcall **)())v239;
          v200 = (char)v240;
          v201 = v245;
          if ( v198 >= 0 )
          {
            v202 = v193;
            do
            {
              a5 = _mm_loadu_si128(v196);
              v202 += 16;
              ++v196;
              *(__m128i *)(v202 - 16) = a5;
              v149 = v198-- == 0;
            }
            while ( !v149 );
            v196 = *(const __m128i **)v178;
          }
          v247 = (__int64 *)v201;
          v246 = v195;
          v245 = v193;
          LOBYTE(v240) = v200;
          v239 = (__int64)v199;
          v237.m128i_i64[0] = v197;
          qfree((__int64)v196);
          v183 = (const __m128i *)v245;
          v203 = v246;
          v181 = *(_QWORD *)(v178 + 8);
          v168 = (__int64)v247;
          v180 = (char)v240;
          v179 = (__int64 (__fastcall **)())v239;
          *(_QWORD *)v178 = v245;
          *(_QWORD *)(v178 + 16) = v203;
          v177 = v237.m128i_i64[0];
        }
        else
        {
          v183 = *(const __m128i **)v178;
        }
        v184 = (__m128i *)&v183[v181];
        v184->m128i_i64[0] = (__int64)v179;
        v184->m128i_i8[8] = v180;
        ++*(_QWORD *)(v178 + 8);
        if ( (*(_QWORD *)v177 & 2) == 0 )
        {
          v185 = *(_QWORD *)(v177 + 16);
          if ( (*(_BYTE *)v185 & 2) != 0 )
          {
            v204 = (_QWORD *)(*(_QWORD *)v177 & 0xFFFFFFFFFFFFFFFCLL);
            v205 = *v204;
            if ( (*v204 & 2) != 0 || v204[2] != v177 )
            {
LABEL_240:
              v177 = (unsigned __int64)v204;
            }
            else
            {
              while ( 1 )
              {
                v177 = v205 & 0xFFFFFFFFFFFFFFFCLL;
                v205 = *(_QWORD *)(v205 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v205 & 2) != 0 )
                  break;
                v206 = v204;
                v204 = (_QWORD *)v177;
                if ( *(_QWORD **)(v177 + 16) != v206 )
                  goto LABEL_240;
              }
            }
          }
          else
          {
            do
            {
              v177 = v185;
              v185 = *(_QWORD *)(v185 + 8);
            }
            while ( (*(_BYTE *)v185 & 2) == 0 );
          }
        }
      }
      while ( v168 != v177 );
      v168 = v303.m128i_i64[0];
      if ( !v303.m128i_i64[0] )
        goto LABEL_24;
      v169 = *(_QWORD *)v303.m128i_i64[0];
      if ( !v303.m128i_i64[1] )
        goto LABEL_204;
    }
    v186 = (__int64 *)(v169 & 0xFFFFFFFFFFFFFFFCLL);
    v187 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v187 & 2) == 0 )
    {
      v188 = (__int64 *)v186[1];
      if ( (*(_BYTE *)v188 & 2) != 0 )
      {
        v189 = (__int64 *)v186[2];
        if ( (*(_BYTE *)v189 & 2) != 0 )
          goto LABEL_271;
      }
      else
      {
        sub_102000(v188);
        v189 = (__int64 *)v186[2];
        if ( (*(_BYTE *)v189 & 2) != 0 )
          goto LABEL_227;
      }
      sub_102000(v189);
LABEL_227:
      v187 = *v186;
      if ( (*v186 & 2) != 0 )
      {
LABEL_228:
        if ( v169 > 3 )
          qfree(v169 & 0xFFFFFFFFFFFFFFFCLL);
        v168 = v303.m128i_i64[0];
        goto LABEL_231;
      }
LABEL_271:
      *v186 = v187 | 2;
      goto LABEL_228;
    }
LABEL_231:
    *(_QWORD *)v168 = v168 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v168 & 3LL;
    v190 = v303.m128i_i64[0];
    v191 = (__m128i)v303.m128i_u64[0];
    *(_QWORD *)v303.m128i_i64[0] &= ~1uLL;
    a5 = _mm_unpacklo_epi64(v191, v191);
    *(__m128i *)(v190 + 8) = a5;
    *(_QWORD *)v303.m128i_i64[0] |= 2uLL;
    v303.m128i_i64[1] = 0;
LABEL_232:
    if ( v303.m128i_i64[0] )
      qfree(v303.m128i_i64[0]);
LABEL_24:
    v6 = *(_QWORD *)(a1 + 320);
LABEL_14:
    ++v16;
    v8 = v6;
    v17 = v16;
  }
  while ( (unsigned __int64)v16 < *(_QWORD *)(v6 + 440) );
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
  {
LABEL_87:
    v239 = (__int64)&off_4DD260;
    v240 = &off_4DD260 - 6;
    v238 = &v278;
    v236 = _mm_loadh_ps((const double *)&v239);
    v237 = (__m128i)_mm_loadh_ps((const double *)&v238);
    if ( (int)v7 > 0 )
    {
      v69 = 5 * v7;
      v70 = 0;
      v71 = 8 * v69;
      do
      {
        v72 = *(_QWORD *)(v8 + 1440);
        v73 = *(_QWORD *)(v8 + 128);
        v283 = v8;
        v74 = *(_QWORD *)(a1 + 176);
        si128 = _mm_load_si128((const __m128i *)&v236);
        v284 = 4;
        v76 = _mm_load_si128(&v237);
        v292 = &v282;
        v291 = si128;
        v282 = v76;
        v293 = _mm_unpacklo_epi64((__m128i)v72, (__m128i)(v72 + v73));
        sub_317450((__int64 *)(v70 + v74 + 16), (__int64 (__fastcall ***)(_QWORD, __int64))&v291.m128i_i64[1]);
        v77 = *(_QWORD *)(a1 + 320);
        v78 = *(_QWORD *)(a1 + 200);
        v287 = 4;
        v79 = _mm_load_si128(&v237);
        v80 = _mm_load_si128((const __m128i *)&v236);
        v295 = &v285;
        v81 = *(_QWORD *)(v77 + 1440);
        v82 = *(_QWORD *)(v77 + 128);
        v286 = v77;
        v285 = v79;
        v294 = v80;
        v296 = _mm_unpacklo_epi64((__m128i)v81, (__m128i)(v81 + v82));
        sub_317450((__int64 *)(v70 + v78 + 16), (__int64 (__fastcall ***)(_QWORD, __int64))&v294.m128i_i64[1]);
        v83 = *(_QWORD *)(a1 + 320);
        v84 = *(_QWORD *)(a1 + 224);
        v85 = _mm_load_si128(&v237);
        v86 = _mm_load_si128((const __m128i *)&v236);
        v290 = 4;
        v87 = *(_QWORD *)(v83 + 128);
        v289 = v83;
        v88 = *(_QWORD *)(v83 + 1440);
        v298 = &v288;
        v288 = v85;
        v297 = v86;
        v299 = _mm_unpacklo_epi64((__m128i)v88, (__m128i)(v88 + v87));
        sub_317450((__int64 *)(v70 + v84 + 16), (__int64 (__fastcall ***)(_QWORD, __int64))&v297.m128i_i64[1]);
        v70 += 40;
        v8 = *(_QWORD *)(a1 + 320);
      }
      while ( v71 != v70 );
    }
    v89 = v238;
    sub_103E50((__int64)v238, v8, (__int64 *)(a1 + 264), 4);
    sub_103E50((__int64)v89, *(_QWORD *)(a1 + 320), (__int64 *)(*(_QWORD *)(a1 + 320) + 208LL), 4);
    goto LABEL_91;
  }
LABEL_26:
  v300 = 0u;
  v301 = (__m128i *)v241;
  if ( (int)v7 > 0 )
  {
    v239 = 0;
    v237.m128i_i64[0] = (__int64)&v300;
    v236.m128_u64[0] = (unsigned __int64)&v303;
    while ( 2 )
    {
      if ( (unsigned int)v239 >= *(_DWORD *)(v8 + 64) )
      {
        v238 = &v278;
        v246 = &v300;
        sub_101D70(*(double *)a5.m128i_i64);
      }
      v25 = v300.m128i_i64[0];
      v26 = *(__m128i **)(*(_QWORD *)(v8 + 528) + 8 * v239);
      if ( !v300.m128i_i64[0] )
        goto LABEL_123;
      v27 = *(_QWORD *)v300.m128i_i64[0];
      if ( !v300.m128i_i64[1] )
      {
        *(_QWORD *)v300.m128i_i64[0] = *(_QWORD *)v300.m128i_i64[0] & 3LL | v300.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        v28 = v300.m128i_i64[0];
        v29 = (__m128i)v300.m128i_u64[0];
        *(_QWORD *)v300.m128i_i64[0] &= ~1uLL;
        a5 = _mm_unpacklo_epi64(v29, v29);
        *(__m128i *)(v28 + 8) = a5;
        *(_QWORD *)v300.m128i_i64[0] |= 2uLL;
        goto LABEL_32;
      }
      v125 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      v122 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v122 & 2) == 0 )
      {
        v126 = (__int64 *)v125[1];
        if ( (*(_BYTE *)v126 & 2) != 0 )
        {
          v121 = (__int64 *)v125[2];
          if ( (*(_BYTE *)v121 & 2) == 0 )
            goto LABEL_117;
        }
        else
        {
          sub_102000(v126);
          v121 = (__int64 *)v125[2];
          if ( (*(_BYTE *)v121 & 2) == 0 )
LABEL_117:
            sub_102000(v121);
          v122 = *v125;
          if ( (*v125 & 2) != 0 )
          {
LABEL_119:
            if ( v27 > 3 )
              qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
            v25 = v300.m128i_i64[0];
            v27 = *(_QWORD *)v300.m128i_i64[0];
            goto LABEL_122;
          }
        }
        *v125 = v122 | 2;
        goto LABEL_119;
      }
LABEL_122:
      *(_QWORD *)v25 = v27 & 3 | v25 & 0xFFFFFFFFFFFFFFFCLL;
      v123 = v300.m128i_i64[0];
      v124 = (__m128i)v300.m128i_u64[0];
      *(_QWORD *)v300.m128i_i64[0] &= ~1uLL;
      a5 = _mm_unpacklo_epi64(v124, v124);
      *(__m128i *)(v123 + 8) = a5;
      *(_QWORD *)v300.m128i_i64[0] |= 2uLL;
LABEL_123:
      v300.m128i_i64[1] = 0;
LABEL_32:
      v30 = *(_QWORD *)(a1 + 80);
      LODWORD(v240) = *(_DWORD *)(a1 + 316) ^ 1;
      v31 = (__int64 *)(v30 + 24 * v239);
      if ( (v26[1].m128i_i32[2] & 0x600) != 0x200 )
      {
        if ( !under_debugger )
        {
          v238 = &v278;
          v246 = &v300;
          sub_383060(0xC3DBu, *(double *)a5.m128i_i64);
        }
        BUG();
      }
      v32 = 40LL * v26[4].m128i_i32[2];
      if ( ((unsigned __int8)v240 & 1) != 0 )
        v33 = *(_QWORD *)(a1 + 176) + v32;
      else
        v33 = *(_QWORD *)(a1 + 200) + v32;
      v34 = v26[4].m128i_i64[0];
      v238 = &v278;
      v246 = (__m128i *)v237.m128i_i64[0];
      sub_103EF0(v237.m128i_i64[0], v34, (_QWORD *)v33, (int)v240);
      v35 = v26[4].m128i_i64[0];
      v36 = v26[4].m128i_i32[2];
      v304 = v26;
      v303.m128i_i64[1] = v35;
      LODWORD(v245) = v36;
      v307 = v237.m128i_i64[0];
      v305 = 0u;
      v306 = 0;
      v303.m128i_i64[0] = (__int64)off_4DD3C0;
      v247 = v308;
      v238 = &v278;
      sub_64000(v308, v33, *(double *)a5.m128i_i64);
      v309 = nullptr;
      v310 = 0;
      v37 = *(_QWORD *)(v33 + 24);
      if ( v37 )
      {
        v238 = *(__m128i **)(v33 + 24);
        n = 16 * v37;
        v309 = (void *)qalloc_or_throw(16 * v37, v33, 16 * v37, v37);
        *((_QWORD *)&v310 + 1) = v238;
        memcpy(v309, *(const void **)(v33 + 16), n);
        *(_QWORD *)&v310 = v238;
      }
      v38 = *(_QWORD *)(v307 + 16);
      v311 = 0u;
      v312 = v38;
      a5 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v303.m128i_i64[1] + 1504) + 80LL));
      v315 = (unsigned __int8)v240 & 1;
      v316 = 0;
      a5.m128i_i64[0] = _mm_unpacklo_epi32(a5, _mm_cvtsi32_si128(v245)).m128i_u64[0];
      v314 = (int)v240;
      v313 = a5.m128i_i64[0];
      v39 = v26[3].m128i_i64[0];
      if ( v39 )
      {
        if ( ((unsigned __int8)v240 & 1) != 0 || (v39 = v26[3].m128i_i64[1]) != 0 )
        {
          while ( 1 )
          {
            sub_11E900((_BYTE *)v39, (__int64)&v303);
            if ( ((unsigned __int8)v240 & 1) == 0 )
              break;
            if ( !*(_QWORD *)(v39 + 8) )
              goto LABEL_47;
            v39 = *(_QWORD *)(v39 + 8);
          }
          while ( 1 )
          {
            v39 = *(_QWORD *)(v39 + 16);
            if ( !v39 )
              break;
            sub_11E900((_BYTE *)v39, (__int64)&v303);
          }
LABEL_47:
          v40 = v26[4].m128i_i32[2];
          if ( ((unsigned __int8)v240 & 1) != 0 )
            v41 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 40 * v40);
          else
LABEL_48:
            v41 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 40 * v40);
          sub_103EF0(v237.m128i_i64[0], v26[4].m128i_i64[0], v41, (int)v240);
          goto LABEL_50;
        }
        v40 = v26[4].m128i_i32[2];
        goto LABEL_48;
      }
      sub_10B720(&v303, (__int64)v247, 0, *(double *)a5.m128i_i64);
LABEL_50:
      v42 = v31[1];
      v43 = *v31;
      v44 = *v31;
      if ( 16 * v42 )
      {
        do
        {
          v297.m128i_i64[0] = v43;
          sub_10B0E0(&v311, v43, (const __m128i **)&v297);
          v42 = v31[1];
          v44 = *v31;
          v43 += 16;
        }
        while ( v43 != *v31 + 16 * v42 );
      }
      v45 = v311.m128i_u64[1];
      if ( v311.m128i_i64[1] == v42 )
        goto LABEL_55;
      v262.m128i_i64[0] = -1;
      v262.m128i_i8[8] = 0;
      if ( v311.m128i_i64[1] < v42 )
      {
        v31[1] = v311.m128i_i64[1];
LABEL_55:
        v46 = v44;
        goto LABEL_56;
      }
      v135 = v31[2];
      if ( (unsigned __int64)&v262 < v44 || (unsigned __int64)&v262 >= v44 + 16 * v135 )
      {
        v46 = v44;
        if ( v135 < v311.m128i_i64[1] )
        {
          v46 = qvector_reserve((__int64)v31, 0, v311.m128i_i64[1], 16);
          v207 = v31[1];
          v208 = (__m128i *)v31[2];
          v31[2] = v135;
          v209 = (const __m128i *)*v31;
          v210 = v207 - 1;
          if ( v210 >= 0 )
          {
            v211 = v46;
            do
            {
              a5 = _mm_loadu_si128(v209);
              v211 += 16;
              ++v209;
              *(__m128i *)(v211 - 16) = a5;
              v149 = v210-- == 0;
            }
            while ( !v149 );
            v209 = (const __m128i *)*v31;
          }
          v238 = v208;
          qfree((__int64)v209);
          v212 = v238;
          v42 = v31[1];
          *v31 = v46;
          v31[2] = (__int64)v212;
        }
        if ( v42 < v45 )
        {
          a5 = _mm_load_si128(&v262);
          do
          {
            v156 = v42++;
            *(__m128i *)(v46 + 16 * v156) = a5;
            v46 = *v31;
          }
          while ( v45 != v42 );
        }
      }
      else
      {
        v46 = v44;
        if ( v135 < v311.m128i_i64[1] )
        {
          v221 = qvector_reserve((__int64)v31, 0, v311.m128i_i64[1], 16);
          v222 = *v31;
          v46 = v221;
          v223 = v221;
          v224 = v31[1];
          v225 = (__m128i *)v31[2];
          v31[2] = v135;
          v226 = (const __m128i *)v222;
          v227 = v224 - 1;
          if ( v227 >= 0 )
          {
            do
            {
              a5 = _mm_loadu_si128(v226);
              v223 += 16;
              ++v226;
              *(__m128i *)(v223 - 16) = a5;
              v149 = v227-- == 0;
            }
            while ( !v149 );
            v222 = *v31;
          }
          v238 = v225;
          qfree(v222);
          v42 = v31[1];
          *v31 = v46;
          v31[2] = (__int64)v225;
        }
        if ( v42 < v45 )
        {
          do
          {
            v136 = v42++;
            v137 = v46 + 16 * v136;
            *(_QWORD *)v137 = -1;
            *(_BYTE *)(v137 + 8) = 0;
            v46 = *v31;
          }
          while ( v45 != v42 );
        }
      }
      v31[1] = v45;
LABEL_56:
      v47 = v311.m128i_i64[0];
      if ( v311.m128i_i64[0] )
      {
        if ( !v311.m128i_i64[1] )
        {
          v303.m128i_i64[0] = (__int64)off_4DD3C0;
          v48 = *(_QWORD *)v311.m128i_i64[0];
          goto LABEL_59;
        }
        v128 = *(_QWORD **)(v311.m128i_i64[0] + 8);
        if ( (_QWORD *)v311.m128i_i64[0] == v128 )
        {
          v303.m128i_i64[0] = (__int64)off_4DD3C0;
          v48 = *(_QWORD *)v311.m128i_i64[0];
          goto LABEL_141;
        }
        do
        {
          v46 += 16;
          *(_QWORD *)(v46 - 16) = v128[3];
          *(_BYTE *)(v46 - 8) = *((_BYTE *)v128 + 32);
          if ( (*v128 & 2) == 0 )
          {
            v129 = (_QWORD *)v128[2];
            if ( (*(_BYTE *)v129 & 2) != 0 )
            {
              v159 = (_QWORD *)(*v128 & 0xFFFFFFFFFFFFFFFCLL);
              v160 = *v159;
              if ( (*v159 & 2) == 0 )
              {
                while ( (_QWORD *)v159[2] == v128 )
                {
                  v128 = v159;
                  v161 = v160 & 0xFFFFFFFFFFFFFFFCLL;
                  v160 = *(_QWORD *)(v160 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v160 & 2) != 0 )
                  {
                    v128 = (_QWORD *)v161;
                    goto LABEL_138;
                  }
                  v159 = (_QWORD *)v161;
                }
              }
              v128 = v159;
            }
            else
            {
              for ( i = (_QWORD *)v129[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v129 = i;
              v128 = v129;
            }
          }
LABEL_138:
          ;
        }
        while ( (_QWORD *)v311.m128i_i64[0] != v128 );
        v303.m128i_i64[0] = (__int64)off_4DD3C0;
        if ( !v128 )
          goto LABEL_62;
        v48 = *v128;
        if ( v311.m128i_i64[1] )
        {
LABEL_141:
          v131 = (__int64 *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
          v132 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v132 & 2) != 0 )
            goto LABEL_148;
          v133 = (__int64 *)v131[1];
          if ( (*(_BYTE *)v133 & 2) != 0 )
          {
            v134 = (__int64 *)v131[2];
            if ( (*(_BYTE *)v134 & 2) == 0 )
            {
LABEL_144:
              sub_102000(v134);
              goto LABEL_145;
            }
          }
          else
          {
            sub_102000(v133);
            v134 = (__int64 *)v131[2];
            if ( (*(_BYTE *)v134 & 2) == 0 )
              goto LABEL_144;
LABEL_145:
            v132 = *v131;
            if ( (*v131 & 2) != 0 )
            {
LABEL_146:
              if ( v48 > 3 )
                qfree(v48 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_148:
              *(_QWORD *)v311.m128i_i64[0] = v311.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL
                                           | *(_QWORD *)v311.m128i_i64[0] & 3LL;
              a5 = _mm_unpacklo_epi64((__m128i)v311.m128i_u64[0], (__m128i)v311.m128i_u64[0]);
              *(__m128i *)(v311.m128i_i64[0] + 8) = a5;
              *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
              v311.m128i_i64[1] = 0;
LABEL_60:
              if ( v311.m128i_i64[0] )
                qfree(v311.m128i_i64[0]);
              goto LABEL_62;
            }
          }
          *v131 = v132 | 2;
          goto LABEL_146;
        }
        v47 = (__int64)v128;
LABEL_59:
        *(_QWORD *)v47 = v47 & 0xFFFFFFFFFFFFFFFCLL | v48 & 3;
        a5 = _mm_unpacklo_epi64((__m128i)v311.m128i_u64[0], (__m128i)v311.m128i_u64[0]);
        *(__m128i *)(v311.m128i_i64[0] + 8) = a5;
        *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
        goto LABEL_60;
      }
      v303.m128i_i64[0] = (__int64)off_4DD3C0;
LABEL_62:
      if ( v309 )
      {
        *(_QWORD *)&v310 = 0;
        qfree((__int64)v309);
      }
      qfree(v308[0]);
      v49 = (_QWORD *)v300.m128i_i64[0];
      if ( v300.m128i_i64[0] )
      {
        if ( v300.m128i_i64[1] )
        {
          v50 = *(_QWORD **)(v300.m128i_i64[0] + 8);
          if ( v50 != (_QWORD *)v300.m128i_i64[0] )
          {
            v238 = &v278;
            do
            {
              v251 = (const __m128i *)(v50 + 3);
              sub_10B0E0(v238, (__int64)(v50 + 3), &v251);
              if ( (*v50 & 2) == 0 )
              {
                v51 = (_QWORD *)v50[2];
                if ( (*(_BYTE *)v51 & 2) != 0 )
                {
                  v165 = (_QWORD *)(*v50 & 0xFFFFFFFFFFFFFFFCLL);
                  v166 = *v165;
                  if ( (*v165 & 2) == 0 )
                  {
                    while ( (_QWORD *)v165[2] == v50 )
                    {
                      v50 = v165;
                      v167 = v166 & 0xFFFFFFFFFFFFFFFCLL;
                      v166 = *(_QWORD *)(v166 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v166 & 2) != 0 )
                      {
                        v50 = (_QWORD *)v167;
                        goto LABEL_71;
                      }
                      v165 = (_QWORD *)v167;
                    }
                  }
                  v50 = v165;
                }
                else
                {
                  do
                  {
                    v50 = v51;
                    v51 = (_QWORD *)v51[1];
                  }
                  while ( (*(_BYTE *)v51 & 2) == 0 );
                }
              }
LABEL_71:
              ;
            }
            while ( v49 != v50 );
          }
        }
      }
      ++v239;
      v8 = *(_QWORD *)(a1 + 320);
      if ( v244 == v239 )
        break;
      continue;
    }
  }
  if ( !*(_DWORD *)(v8 + 64) )
  {
    v238 = &v278;
    v246 = &v300;
    sub_101D70(*(double *)a5.m128i_i64);
  }
  v52 = *(__int64 **)(v8 + 528);
  v53 = *(_DWORD *)(a1 + 316);
  v238 = &v278;
  v54 = *v52;
  v246 = &v300;
  sub_103EF0((__int64)&v278, v8, (_QWORD *)(v54 + 240), v53);
  v55 = *(_QWORD *)(a1 + 320);
  v246 = &v300;
  v58 = sub_1D5170(v55, v8, v56, v57);
  v59 = *(_DWORD *)(a1 + 316);
  v60 = *(_QWORD *)(a1 + 320);
  v246 = &v300;
  sub_103EF0((__int64)&v278, v60, (_QWORD *)(v58 + 160), v59);
  v61 = v300.m128i_i64[0];
  if ( !v300.m128i_i64[0] )
  {
    v239 = (__int64)&off_4DD260;
    v240 = &off_4DD260 - 6;
    goto LABEL_91;
  }
  v62 = *(_QWORD *)v300.m128i_i64[0];
  if ( !v300.m128i_i64[1] )
  {
    *(_QWORD *)v300.m128i_i64[0] = *(_QWORD *)v300.m128i_i64[0] & 3LL | v300.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v219 = v300.m128i_i64[0];
    v220 = (__m128i)v300.m128i_u64[0];
    *(_QWORD *)v300.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v219 + 8) = _mm_unpacklo_epi64(v220, v220);
    *(_QWORD *)v300.m128i_i64[0] |= 2uLL;
    goto LABEL_85;
  }
  v63 = (__int64 *)(v62 & 0xFFFFFFFFFFFFFFFCLL);
  v64 = *(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v64 & 2) != 0 )
    goto LABEL_84;
  v65 = (__int64 *)v63[1];
  if ( (*(_BYTE *)v65 & 2) != 0 )
  {
    v66 = (__int64 *)v63[2];
    if ( (*(_BYTE *)v66 & 2) == 0 )
    {
LABEL_79:
      sub_102000(v66);
      goto LABEL_80;
    }
    goto LABEL_273;
  }
  sub_102000(v65);
  v66 = (__int64 *)v63[2];
  if ( (*(_BYTE *)v66 & 2) == 0 )
    goto LABEL_79;
LABEL_80:
  v64 = *v63;
  if ( (*v63 & 2) == 0 )
LABEL_273:
    *v63 = v64 | 2;
  if ( v62 > 3 )
    qfree(v62 & 0xFFFFFFFFFFFFFFFCLL);
  v61 = v300.m128i_i64[0];
  v62 = *(_QWORD *)v300.m128i_i64[0];
LABEL_84:
  *(_QWORD *)v61 = v62 & 3 | v61 & 0xFFFFFFFFFFFFFFFCLL;
  v67 = v300.m128i_i64[0];
  v68 = (__m128i)v300.m128i_u64[0];
  *(_QWORD *)v300.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v67 + 8) = _mm_unpacklo_epi64(v68, v68);
  *(_QWORD *)v300.m128i_i64[0] |= 2uLL;
  v300.m128i_i64[1] = 0;
LABEL_85:
  v239 = (__int64)&off_4DD260;
  v240 = &off_4DD260 - 6;
  if ( v300.m128i_i64[0] )
    qfree(v300.m128i_i64[0]);
LABEL_91:
  v90 = v238;
  v263 = 0;
  v91 = _mm_loadh_ps((const double *)&v239);
  v264 = 5;
  v252 = (const __m128i *)&v263;
  v236 = v91;
  v237 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4DD400, (__m128i)(unsigned __int64)v238);
  sub_10BAA0(v238, (__int64)&v263, &v252);
  v92 = v243;
  v266 = 5;
  v253 = (const __m128i *)&v265;
  v265 = (int)v243;
  sub_10BAA0(v90, (__int64)&v265, &v253);
  v93 = *(_QWORD *)(a1 + 320);
  v268 = 5;
  v94 = *(_DWORD *)(v93 + 116);
  v254 = (const __m128i *)&v267;
  v267 = v92 + v94;
  sub_10BAA0(v90, (__int64)&v267, &v254);
  v95 = *(_QWORD *)(a1 + 320);
  v270 = 5;
  v96 = *(_QWORD *)(v95 + 144);
  v255 = (const __m128i *)&v269;
  v269 = v96;
  sub_10BAA0(v90, (__int64)&v269, &v255);
  v97 = *(_QWORD *)(a1 + 320);
  v272 = 5;
  v98 = *(_QWORD *)(v97 + 168);
  v256 = (const __m128i *)&v271;
  v271 = v98;
  sub_10BAA0(v90, (__int64)&v271, &v256);
  v274 = 5;
  v273 = v241;
  v257 = (const __m128i *)&v273;
  sub_10BAA0(v90, (__int64)&v273, &v257);
  v99 = *(_QWORD *)(a1 + 320);
  v100 = _mm_load_si128(&v237);
  v101 = _mm_load_si128((const __m128i *)&v236);
  v102 = *(_QWORD *)(v99 + 1440);
  v301 = &v275;
  v275 = v100;
  v300 = v101;
  v302 = _mm_unpacklo_epi64((__m128i)v102, (__m128i)((unsigned __int64)v279 + v102));
  sub_317450((__int64 *)(v99 + 232), (__int64 (__fastcall ***)(_QWORD, __int64))&v300.m128i_i64[1]);
  v103 = *(_QWORD *)(a1 + 320);
  v104 = _mm_load_si128(&v237);
  v105 = _mm_load_si128((const __m128i *)&v236);
  v106 = *(_QWORD *)(v103 + 1440);
  v304 = &v276;
  v276 = v104;
  v303 = v105;
  v305 = _mm_unpacklo_epi64((__m128i)v106, (__m128i)((unsigned __int64)v279 + v106));
  sub_317450((__int64 *)(v103 + 184), (__int64 (__fastcall ***)(_QWORD, __int64))&v303.m128i_i64[1]);
  v107 = *(void (**)())(*(_QWORD *)v242 + 72LL);
  if ( v107 != nullsub_35 )
    ((void (__fastcall *)(__int64, _QWORD, __m128i *))v107)(v242, *(_QWORD *)(a1 + 320), v238);
  v108 = v278.m128i_u64[1];
  v109 = *(_QWORD *)(a1 + 112);
  v110 = *(_QWORD *)(a1 + 104);
  if ( v278.m128i_i64[1] != v109 )
  {
    v277.m128i_i64[0] = -1;
    v277.m128i_i8[8] = 0;
    if ( v278.m128i_i64[1] >= v109 )
    {
      v138 = *(_QWORD *)(a1 + 120);
      v139 = a1 + 104;
      if ( (unsigned __int64)&v277 < v110 || (unsigned __int64)&v277 >= v110 + 16 * v138 )
      {
        if ( v138 < v278.m128i_i64[1] )
        {
          v110 = qvector_reserve(v139, 0, v278.m128i_i64[1], 16);
          v213 = *(_QWORD *)(a1 + 112);
          v214 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v138;
          v215 = *(const __m128i **)(a1 + 104);
          v216 = v213 - 1;
          if ( v216 >= 0 )
          {
            v217 = v110;
            do
            {
              v218 = _mm_loadu_si128(v215);
              v217 += 16LL;
              ++v215;
              *(__m128i *)(v217 - 16) = v218;
              v149 = v216-- == 0;
            }
            while ( !v149 );
            v215 = *(const __m128i **)(a1 + 104);
          }
          qfree((__int64)v215);
          *(_QWORD *)(a1 + 104) = v110;
          v109 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v214;
        }
        if ( v109 < v108 )
        {
          v157 = _mm_load_si128(&v277);
          do
          {
            v158 = v109++;
            *(__m128i *)(v110 + 16 * v158) = v157;
            v110 = *(_QWORD *)(a1 + 104);
          }
          while ( v108 != v109 );
        }
      }
      else
      {
        if ( v138 < v278.m128i_i64[1] )
        {
          v228 = qvector_reserve(v139, 0, v278.m128i_i64[1], 16);
          v229 = *(_QWORD *)(a1 + 104);
          v110 = v228;
          v230 = v228;
          v231 = *(_QWORD *)(a1 + 112);
          v232 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v138;
          v233 = (const __m128i *)v229;
          v234 = v231 - 1;
          if ( v234 >= 0 )
          {
            do
            {
              v235 = _mm_loadu_si128(v233);
              v230 += 16;
              ++v233;
              *(__m128i *)(v230 - 16) = v235;
              v149 = v234-- == 0;
            }
            while ( !v149 );
            v229 = *(_QWORD *)(a1 + 104);
          }
          qfree(v229);
          *(_QWORD *)(a1 + 104) = v110;
          v109 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v232;
        }
        if ( v109 < v108 )
        {
          do
          {
            v140 = v109++;
            v141 = v110 + 16 * v140;
            *(_QWORD *)v141 = -1;
            *(_BYTE *)(v141 + 8) = 0;
            v110 = *(_QWORD *)(a1 + 104);
          }
          while ( v108 != v109 );
        }
      }
    }
    *(_QWORD *)(a1 + 112) = v108;
  }
  if ( !v278.m128i_i64[0] )
    return v317 - __readfsqword(0x28u);
  if ( !v278.m128i_i64[1] )
  {
    v113 = *(_QWORD *)v278.m128i_i64[0];
    v111 = v278.m128i_i64[0];
    goto LABEL_212;
  }
  v111 = *(_QWORD *)(v278.m128i_i64[0] + 8);
  if ( v278.m128i_i64[0] == v111 )
  {
    v113 = *(_QWORD *)v278.m128i_i64[0];
LABEL_105:
    v114 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFFCLL);
    v115 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v115 & 2) != 0 )
      goto LABEL_112;
    v116 = (__int64 *)v114[1];
    if ( (*(_BYTE *)v116 & 2) != 0 )
    {
      v117 = (__int64 *)v114[2];
      if ( (*(_BYTE *)v117 & 2) != 0 )
      {
LABEL_260:
        *v114 = v115 | 2;
LABEL_110:
        if ( v113 > 3 )
          qfree(v113 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_112:
        *(_QWORD *)v278.m128i_i64[0] = v278.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v278.m128i_i64[0] & 3LL;
        v118 = v278.m128i_i64[0];
        v119 = (__m128i)v278.m128i_u64[0];
        *(_QWORD *)v278.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64(v119, v119);
        *(_QWORD *)v278.m128i_i64[0] |= 2uLL;
        v278.m128i_i64[1] = 0;
        goto LABEL_113;
      }
    }
    else
    {
      sub_102000(v116);
      v117 = (__int64 *)v114[2];
      if ( (*(_BYTE *)v117 & 2) != 0 )
        goto LABEL_109;
    }
    sub_102000(v117);
LABEL_109:
    v115 = *v114;
    if ( (*v114 & 2) != 0 )
      goto LABEL_110;
    goto LABEL_260;
  }
  do
  {
    *(_QWORD *)v110 = *(_QWORD *)(v111 + 24);
    *(_BYTE *)(v110 + 8) = *(_BYTE *)(v111 + 32);
    if ( (*(_QWORD *)v111 & 2) == 0 )
    {
      v112 = *(_QWORD *)(v111 + 16);
      if ( (*(_BYTE *)v112 & 2) != 0 )
      {
        v162 = (_QWORD *)(*(_QWORD *)v111 & 0xFFFFFFFFFFFFFFFCLL);
        v163 = *v162;
        if ( (*v162 & 2) != 0 || v162[2] != v111 )
        {
LABEL_190:
          v111 = (unsigned __int64)v162;
        }
        else
        {
          while ( 1 )
          {
            v111 = v163 & 0xFFFFFFFFFFFFFFFCLL;
            v163 = *(_QWORD *)(v163 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v163 & 2) != 0 )
              break;
            v164 = v162;
            v162 = (_QWORD *)v111;
            if ( *(_QWORD **)(v111 + 16) != v164 )
              goto LABEL_190;
          }
        }
      }
      else
      {
        do
        {
          v111 = v112;
          v112 = *(_QWORD *)(v112 + 8);
        }
        while ( (*(_BYTE *)v112 & 2) == 0 );
      }
    }
    v110 += 16LL;
  }
  while ( v278.m128i_i64[0] != v111 );
  if ( v111 )
  {
    v113 = *(_QWORD *)v111;
    if ( v278.m128i_i64[1] )
      goto LABEL_105;
LABEL_212:
    *(_QWORD *)v111 = v113 & 3 | v111 & 0xFFFFFFFFFFFFFFFCLL;
    v175 = v278.m128i_i64[0];
    v176 = (__m128i)v278.m128i_u64[0];
    *(_QWORD *)v278.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v175 + 8) = _mm_unpacklo_epi64(v176, v176);
    *(_QWORD *)v278.m128i_i64[0] |= 2uLL;
LABEL_113:
    if ( v278.m128i_i64[0] )
      qfree(v278.m128i_i64[0]);
  }
  return v317 - __readfsqword(0x28u);
}

