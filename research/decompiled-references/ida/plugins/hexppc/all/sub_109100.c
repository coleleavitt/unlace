unsigned __int64 __fastcall sub_109100(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // r13
  const __m128i **v18; // r15
  __int64 v19; // rbp
  const __m128i *v20; // rax
  __int64 v21; // r9
  __int64 m128i_i64; // rcx
  int v23; // ebp
  unsigned __int64 v24; // rdx
  __m128i *v25; // r12
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 *v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i *v39; // rcx
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // r15
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r13
  __int64 v49; // r12
  __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  _QWORD *v52; // rbx
  _QWORD *v53; // r12
  _QWORD *v54; // rdx
  __int64 *v55; // rax
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rbx
  __int64 *v64; // rbp
  __int64 v65; // rdx
  __int64 *v66; // rdi
  __int64 *v67; // rdi
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rbp
  __int64 v71; // rbx
  __int64 v72; // rbp
  unsigned __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdi
  __m128i si128; // xmm2
  unsigned __int64 v77; // rdx
  __m128i v78; // xmm1
  __int64 v79; // rdx
  __int64 v80; // rdi
  __m128i v81; // xmm1
  __m128i v82; // xmm2
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdi
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __m128i *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  __m128i *v100; // rbx
  __m128 v101; // xmm6
  int v102; // r15d
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdi
  __m128i v110; // xmm7
  __m128i v111; // xmm6
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdi
  __m128i v117; // xmm7
  __m128i v118; // xmm6
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  void (*v123)(); // rax
  unsigned __int64 v124; // rbp
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rbx
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rbx
  __int64 *v130; // rbp
  __int64 v131; // rax
  __int64 *v132; // rdi
  __int64 *v133; // rdi
  __int64 v134; // rax
  __m128i v135; // xmm0
  __int64 *v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rax
  __m128i v140; // xmm0
  __int64 *v141; // rbx
  __int64 *v142; // rdi
  _QWORD *v143; // rax
  _QWORD *v144; // rcx
  _QWORD *i; // rax
  __int64 *v146; // rbp
  __int64 v147; // rax
  __int64 *v148; // rdi
  __int64 *v149; // rdi
  unsigned __int64 v150; // r15
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  unsigned __int64 v153; // r12
  unsigned __int64 v154; // rdx
  unsigned __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 (__fastcall **v157)(); // rdx
  const __m128i *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // r9
  __int64 v161; // rsi
  __m128i v162; // xmm0
  bool v163; // cf
  __int64 (__fastcall **v164)(); // rcx
  __int64 (__fastcall **v165)(); // rdx
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rdx
  __m128i v169; // xmm0
  unsigned __int64 v170; // rax
  __m128i v171; // xmm0
  unsigned __int64 v172; // rdx
  _QWORD *v173; // rdx
  __int64 v174; // rcx
  unsigned __int64 v175; // rsi
  _QWORD *v176; // rdx
  __int64 v177; // rcx
  _QWORD *v178; // rsi
  _QWORD *v179; // rax
  __int64 v180; // rdx
  unsigned __int64 v181; // rcx
  __int64 v182; // r10
  unsigned __int64 v183; // rbp
  __int64 v184; // rax
  __m128i v185; // xmm0
  unsigned __int64 v186; // r12
  _QWORD *v187; // rax
  __int64 v188; // rax
  __m128i v189; // xmm0
  unsigned __int64 v190; // r11
  __int64 v191; // r13
  __int64 v192; // rax
  unsigned __int64 v193; // r15
  const __m128i *v194; // rdx
  __m128i *v195; // rdx
  unsigned __int64 v196; // rdx
  __int64 *v197; // r13
  __int64 v198; // rax
  __int64 *v199; // rdi
  __int64 *v200; // rdi
  __int64 v201; // rax
  __m128i v202; // xmm0
  __int64 v203; // rdx
  __int64 v204; // rax
  __m128i *v205; // rcx
  const __m128i *v206; // rdi
  __int64 v207; // r11
  __int64 v208; // rax
  __int64 (__fastcall **v209)(); // r9
  char v210; // r8
  __int64 v211; // r10
  __int64 v212; // rsi
  __m128i v213; // xmm0
  _QWORD *v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rax
  __m128i *v217; // rcx
  const __m128i *v218; // rdi
  __int64 v219; // rax
  __int64 v220; // rdx
  __m128i v221; // xmm0
  __m128i *v222; // rcx
  __int64 v223; // rax
  __int64 v224; // r13
  const __m128i *v225; // rdi
  __int64 v226; // rax
  unsigned __int64 v227; // rdx
  __m128i v228; // xmm0
  __int64 v229; // rax
  __m128i v230; // xmm0
  __int64 v231; // rax
  const __m128i *v232; // rdi
  __int64 v233; // rdx
  __int64 v234; // rax
  __m128i *v235; // rsi
  const __m128i *v236; // rcx
  __int64 v237; // rax
  __m128i v238; // xmm0
  __int64 v239; // rax
  const __m128i *v240; // rdi
  __int64 v241; // rdx
  __int64 v242; // rax
  __int64 v243; // r13
  const __m128i *v244; // rcx
  __int64 v245; // rax
  __m128i v246; // xmm0
  __m128 v247; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v248; // [rsp+10h] [rbp-3A8h] BYREF
  __m128i *v249; // [rsp+28h] [rbp-390h] BYREF
  __int64 (__fastcall **v250)(); // [rsp+30h] [rbp-388h] BYREF
  __int64 (__fastcall **v251)(); // [rsp+38h] [rbp-380h]
  _OWORD *v252; // [rsp+40h] [rbp-378h]
  __int64 v253; // [rsp+48h] [rbp-370h]
  __int64 v254; // [rsp+50h] [rbp-368h]
  unsigned __int64 v255; // [rsp+58h] [rbp-360h]
  __int64 v256; // [rsp+60h] [rbp-358h]
  __m128i *v257; // [rsp+68h] [rbp-350h]
  __int64 *v258; // [rsp+70h] [rbp-348h]
  size_t n; // [rsp+78h] [rbp-340h]
  const __m128i *v260; // [rsp+88h] [rbp-330h] BYREF
  const __m128i *v261; // [rsp+90h] [rbp-328h] BYREF
  const __m128i *v262; // [rsp+98h] [rbp-320h] BYREF
  const __m128i *v263; // [rsp+A0h] [rbp-318h] BYREF
  const __m128i *v264; // [rsp+A8h] [rbp-310h] BYREF
  const __m128i *v265; // [rsp+B0h] [rbp-308h] BYREF
  const __m128i *v266; // [rsp+B8h] [rbp-300h] BYREF
  const __m128i *v267; // [rsp+C0h] [rbp-2F8h] BYREF
  const __m128i *v268; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v269; // [rsp+D0h] [rbp-2E8h] BYREF
  char v270; // [rsp+D8h] [rbp-2E0h]
  __int64 v271; // [rsp+E0h] [rbp-2D8h] BYREF
  char v272; // [rsp+E8h] [rbp-2D0h]
  __m128i v273; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v274; // [rsp+100h] [rbp-2B8h] BYREF
  char v275; // [rsp+108h] [rbp-2B0h]
  __int64 v276; // [rsp+110h] [rbp-2A8h] BYREF
  char v277; // [rsp+118h] [rbp-2A0h]
  __int64 v278; // [rsp+120h] [rbp-298h] BYREF
  char v279; // [rsp+128h] [rbp-290h]
  __int64 v280; // [rsp+130h] [rbp-288h] BYREF
  char v281; // [rsp+138h] [rbp-280h]
  __int64 v282; // [rsp+140h] [rbp-278h] BYREF
  char v283; // [rsp+148h] [rbp-270h]
  _OWORD *v284; // [rsp+150h] [rbp-268h] BYREF
  char v285; // [rsp+158h] [rbp-260h]
  __m128i v286; // [rsp+160h] [rbp-258h] BYREF
  __m128i v287; // [rsp+170h] [rbp-248h] BYREF
  __m128i v288; // [rsp+180h] [rbp-238h] BYREF
  __m128i v289; // [rsp+190h] [rbp-228h] BYREF
  _OWORD *v290; // [rsp+1A0h] [rbp-218h]
  __int64 v291; // [rsp+1B0h] [rbp-208h] BYREF
  __int128 v292; // [rsp+1B8h] [rbp-200h]
  __m128i v293; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v294; // [rsp+1E0h] [rbp-1D8h]
  int v295; // [rsp+1E8h] [rbp-1D0h]
  __m128i v296; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v297; // [rsp+200h] [rbp-1B8h]
  int v298; // [rsp+208h] [rbp-1B0h]
  __m128i v299; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v300; // [rsp+220h] [rbp-198h]
  int v301; // [rsp+228h] [rbp-190h]
  __m128i v302; // [rsp+230h] [rbp-188h] BYREF
  __m128i *v303; // [rsp+240h] [rbp-178h]
  __m128i v304; // [rsp+248h] [rbp-170h]
  __m128i v305; // [rsp+260h] [rbp-158h] BYREF
  __m128i *v306; // [rsp+270h] [rbp-148h]
  __m128i v307; // [rsp+278h] [rbp-140h]
  __m128i v308; // [rsp+290h] [rbp-128h] BYREF
  __m128i *v309; // [rsp+2A0h] [rbp-118h]
  __m128i v310; // [rsp+2A8h] [rbp-110h]
  __m128i v311; // [rsp+2C0h] [rbp-F8h] BYREF
  __m128i *v312; // [rsp+2D0h] [rbp-E8h]
  __m128i v313; // [rsp+2D8h] [rbp-E0h]
  __m128i v314; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i *v315; // [rsp+300h] [rbp-B8h]
  __m128i v316; // [rsp+308h] [rbp-B0h]
  char v317; // [rsp+318h] [rbp-A0h]
  __int64 v318; // [rsp+320h] [rbp-98h]
  __int64 v319[2]; // [rsp+328h] [rbp-90h] BYREF
  void *v320; // [rsp+338h] [rbp-80h]
  __int128 v321; // [rsp+340h] [rbp-78h]
  __m128i v322; // [rsp+350h] [rbp-68h] BYREF
  __int64 v323; // [rsp+360h] [rbp-58h]
  unsigned __int64 v324; // [rsp+368h] [rbp-50h]
  int v325; // [rsp+370h] [rbp-48h]
  char v326; // [rsp+374h] [rbp-44h]
  char v327; // [rsp+375h] [rbp-43h]
  unsigned __int64 v328; // [rsp+378h] [rbp-40h]

  v328 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 320);
  v289 = 0u;
  v8 = *(int *)(v7 + 64);
  v9 = v7;
  v253 = *(_QWORD *)(v7 + 1504);
  v254 = *(_QWORD *)(v7 + 136);
  v252 = (_OWORD *)*(int *)(v7 + 128);
  v290 = v252;
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
    goto LABEL_87;
  v10 = *(_QWORD *)(a1 + 88);
  v255 = (int)v8;
  if ( (int)v8 != v10 )
  {
    v291 = 0;
    v292 = 0;
    if ( (int)v8 < v10 )
    {
      v186 = (int)v8;
      do
      {
        v187 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 24 * v186);
        if ( *v187 )
        {
          v187[1] = 0;
          qfree();
        }
        ++v186;
      }
      while ( v186 < v10 );
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(a1 + 96);
      if ( (unsigned __int64)&v291 < v11 || (unsigned __int64)&v291 >= v11 + 24 * v12 )
      {
        if ( v12 < v255 )
        {
          v249 = &v289;
          *(_QWORD *)(a1 + 80) = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v255;
        if ( v10 < v255 )
        {
          v13 = 24 * v10;
          do
          {
            ++v10;
            v14 = v13 + *(_QWORD *)(a1 + 80);
            v13 += 24;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
          }
          while ( a4 != (_QWORD *)v10 );
        }
      }
      else
      {
        if ( v12 < v255 )
        {
          v249 = &v289;
          *(_QWORD *)(a1 + 80) = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v255;
        if ( v10 < v255 )
        {
          v167 = 24 * v10;
          do
          {
            ++v10;
            v168 = v167 + *(_QWORD *)(a1 + 80);
            v167 += 24;
            *(_QWORD *)v168 = 0;
            *(_OWORD *)(v168 + 8) = 0;
          }
          while ( a4 != (_QWORD *)v10 );
        }
      }
    }
    v7 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 88) = v255;
    v9 = v7;
    if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
      goto LABEL_87;
  }
  if ( !*(_QWORD *)(v7 + 440) )
    goto LABEL_26;
  a4 = &v269;
  v15 = 0;
  v16 = 0;
  v247.m128_u64[0] = (unsigned __int64)&v269;
  do
  {
    v17 = *(_QWORD *)(v7 + 432) + 104 * v16;
    if ( *(_DWORD *)(v17 + 92) )
      goto LABEL_14;
    if ( *(_DWORD *)v17 == 1 )
    {
      v18 = *(const __m128i ***)(a1 + 80);
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *v18;
      v21 = (int)v19;
      m128i_i64 = (__int64)(*v18)[(_QWORD)v18[1]].m128i_i64;
      if ( *v18 == (const __m128i *)m128i_i64 )
        goto LABEL_130;
      while ( v20->m128i_i8[8] != 5 || (int)v19 != v20->m128i_i64[0] )
      {
        if ( (const __m128i *)m128i_i64 == ++v20 )
          goto LABEL_130;
      }
      if ( (const __m128i *)m128i_i64 == v20 )
      {
LABEL_130:
        if ( v18[2] < (const __m128i *)&v18[1]->m128i_i8[1] )
        {
          v250 = (__int64 (__fastcall **)())v18[2];
          v248.m128i_i64[0] = (int)v19;
          v249 = &v289;
          v156 = qvector_reserve();
          v157 = (__int64 (__fastcall **)())v18[2];
          v158 = *v18;
          v159 = (__int64)&v18[1][-1].m128i_i64[1] + 7;
          v18[2] = (const __m128i *)v250;
          v160 = v248.m128i_i64[0];
          if ( v159 >= 0 )
          {
            v161 = v156;
            do
            {
              v162 = _mm_loadu_si128(v158);
              v161 += 16;
              ++v158;
              *(__m128i *)(v161 - 16) = v162;
              v163 = v159-- == 0;
            }
            while ( !v163 );
          }
          v251 = v157;
          v250 = (__int64 (__fastcall **)())v156;
          v248.m128i_i64[0] = v160;
          v249 = &v289;
          qfree();
          v164 = v250;
          v165 = v251;
          v21 = v248.m128i_i64[0];
          v166 = 2LL * (_QWORD)v18[1];
          *v18 = (const __m128i *)v250;
          v18[2] = (const __m128i *)v165;
          m128i_i64 = (__int64)&v164[v166];
        }
        *(_QWORD *)m128i_i64 = v21;
        *(_BYTE *)(m128i_i64 + 8) = 5;
        v18[1] = (const __m128i *)((char *)v18[1] + 1);
      }
      v269 = v21;
      v270 = 5;
      v260 = (const __m128i *)v247.m128_u64[0];
      v249 = &v289;
      sub_108060(&v289, v247.m128_i64[0], &v260);
      v23 = *(_DWORD *)(v17 + 88) + v19;
      v272 = 5;
      v261 = (const __m128i *)&v271;
      v271 = v23;
      sub_108060(&v289, (__int64)&v271, &v261);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v17 != 2 )
      goto LABEL_14;
    v314 = 0u;
    v315 = (__m128i *)v252;
    v249 = &v289;
    sub_1084D0();
    v182 = v314.m128i_i64[0];
    if ( !v314.m128i_i64[0] )
      goto LABEL_24;
    if ( !v314.m128i_i64[1] )
    {
      v183 = *(_QWORD *)v314.m128i_i64[0];
LABEL_203:
      *(_QWORD *)v182 = v182 & 0xFFFFFFFFFFFFFFFCLL | v183 & 3;
      v184 = v314.m128i_i64[0];
      v185 = (__m128i)v314.m128i_u64[0];
      *(_QWORD *)v314.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v184 + 8) = _mm_unpacklo_epi64(v185, v185);
      *(_QWORD *)v314.m128i_i64[0] |= 2uLL;
      goto LABEL_231;
    }
    v190 = *(_QWORD *)(v314.m128i_i64[0] + 8);
    if ( v314.m128i_i64[0] == v190 )
    {
      v183 = *(_QWORD *)v314.m128i_i64[0];
    }
    else
    {
      do
      {
        v191 = *(_QWORD *)(a1 + 80);
        a6 = *(_QWORD *)(v190 + 24);
        a5 = *(unsigned __int8 *)(v190 + 32);
        v192 = *(_QWORD *)(v191 + 8);
        v193 = *(_QWORD *)(v191 + 16);
        if ( v193 < v192 + 1 )
        {
          v256 = v182;
          LOBYTE(v251) = a5;
          v250 = (__int64 (__fastcall **)())a6;
          v248.m128i_i64[0] = v190;
          v203 = qvector_reserve();
          v204 = *(_QWORD *)(v191 + 8);
          v205 = *(__m128i **)(v191 + 16);
          *(_QWORD *)(v191 + 16) = v193;
          v206 = *(const __m128i **)v191;
          v207 = v248.m128i_i64[0];
          v208 = v204 - 1;
          v209 = v250;
          v210 = (char)v251;
          v211 = v256;
          if ( v208 >= 0 )
          {
            v212 = v203;
            do
            {
              v213 = _mm_loadu_si128(v206);
              v212 += 16;
              ++v206;
              *(__m128i *)(v212 - 16) = v213;
              v163 = v208-- == 0;
            }
            while ( !v163 );
          }
          v258 = (__int64 *)v211;
          v257 = v205;
          v256 = v203;
          LOBYTE(v251) = v210;
          v250 = v209;
          v248.m128i_i64[0] = v207;
          qfree();
          v194 = (const __m128i *)v256;
          a4 = v257->m128i_i64;
          v192 = *(_QWORD *)(v191 + 8);
          v182 = (__int64)v258;
          a5 = (unsigned __int8)v251;
          a6 = (__int64)v250;
          *(_QWORD *)v191 = v256;
          *(_QWORD *)(v191 + 16) = a4;
          v190 = v248.m128i_i64[0];
        }
        else
        {
          v194 = *(const __m128i **)v191;
        }
        v195 = (__m128i *)&v194[v192];
        v195->m128i_i64[0] = a6;
        v195->m128i_i8[8] = a5;
        ++*(_QWORD *)(v191 + 8);
        if ( (*(_QWORD *)v190 & 2) == 0 )
        {
          v196 = *(_QWORD *)(v190 + 16);
          if ( (*(_BYTE *)v196 & 2) != 0 )
          {
            v214 = (_QWORD *)(*(_QWORD *)v190 & 0xFFFFFFFFFFFFFFFCLL);
            v215 = *v214;
            if ( (*v214 & 2) != 0 || v214[2] != v190 )
            {
LABEL_238:
              v190 = (unsigned __int64)v214;
            }
            else
            {
              while ( 1 )
              {
                v190 = v215 & 0xFFFFFFFFFFFFFFFCLL;
                v215 = *(_QWORD *)(v215 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v215 & 2) != 0 )
                  break;
                a4 = v214;
                v214 = (_QWORD *)v190;
                if ( *(_QWORD **)(v190 + 16) != a4 )
                  goto LABEL_238;
              }
            }
          }
          else
          {
            do
            {
              v190 = v196;
              v196 = *(_QWORD *)(v196 + 8);
            }
            while ( (*(_BYTE *)v196 & 2) == 0 );
          }
        }
      }
      while ( v182 != v190 );
      v182 = v314.m128i_i64[0];
      if ( !v314.m128i_i64[0] )
        goto LABEL_24;
      v183 = *(_QWORD *)v314.m128i_i64[0];
      if ( !v314.m128i_i64[1] )
        goto LABEL_203;
    }
    v197 = (__int64 *)(v183 & 0xFFFFFFFFFFFFFFFCLL);
    v198 = *(_QWORD *)(v183 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v198 & 2) == 0 )
    {
      v199 = (__int64 *)v197[1];
      if ( (*(_BYTE *)v199 & 2) != 0 )
      {
        v200 = (__int64 *)v197[2];
        if ( (*(_BYTE *)v200 & 2) != 0 )
          goto LABEL_265;
      }
      else
      {
        sub_FE5C0(v199);
        v200 = (__int64 *)v197[2];
        if ( (*(_BYTE *)v200 & 2) != 0 )
          goto LABEL_226;
      }
      sub_FE5C0(v200);
LABEL_226:
      v198 = *v197;
      if ( (*v197 & 2) != 0 )
      {
LABEL_227:
        if ( v183 > 3 )
          qfree();
        v182 = v314.m128i_i64[0];
        goto LABEL_230;
      }
LABEL_265:
      *v197 = v198 | 2;
      goto LABEL_227;
    }
LABEL_230:
    *(_QWORD *)v182 = v182 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v182 & 3LL;
    v201 = v314.m128i_i64[0];
    v202 = (__m128i)v314.m128i_u64[0];
    *(_QWORD *)v314.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v201 + 8) = _mm_unpacklo_epi64(v202, v202);
    *(_QWORD *)v314.m128i_i64[0] |= 2uLL;
    v314.m128i_i64[1] = 0;
LABEL_231:
    if ( v314.m128i_i64[0] )
      qfree();
LABEL_24:
    v7 = *(_QWORD *)(a1 + 320);
LABEL_14:
    ++v15;
    v9 = v7;
    v16 = v15;
  }
  while ( (unsigned __int64)v15 < *(_QWORD *)(v7 + 440) );
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
  {
LABEL_87:
    v250 = &off_4CA3C0;
    v251 = &off_4CA3C0 - 6;
    v249 = &v289;
    v247 = _mm_loadh_ps((const double *)&v250);
    v248 = (__m128i)_mm_loadh_ps((const double *)&v249);
    if ( (int)v8 > 0 )
    {
      v70 = 5 * v8;
      v71 = 0;
      v72 = 8 * v70;
      do
      {
        v73 = *(_QWORD *)(v9 + 1440);
        v74 = *(_QWORD *)(v9 + 128);
        v294 = v9;
        v75 = *(_QWORD *)(a1 + 176);
        si128 = _mm_load_si128((const __m128i *)&v247);
        v295 = 4;
        v77 = v73 + v74;
        v78 = _mm_load_si128(&v248);
        v303 = &v293;
        v302 = si128;
        v293 = v78;
        v304 = _mm_unpacklo_epi64((__m128i)v73, (__m128i)v77);
        sub_3132D0(v71 + v75 + 16, &v302.m128i_u64[1], v77, a4, a5, a6, v247.m128_u64[0]);
        v79 = *(_QWORD *)(a1 + 320);
        v80 = *(_QWORD *)(a1 + 200);
        v298 = 4;
        v81 = _mm_load_si128(&v248);
        v82 = _mm_load_si128((const __m128i *)&v247);
        v306 = &v296;
        v83 = *(_QWORD *)(v79 + 1440);
        v84 = *(_QWORD *)(v79 + 128);
        v297 = v79;
        v296 = v81;
        v85 = v83 + v84;
        v305 = v82;
        v307 = _mm_unpacklo_epi64((__m128i)v83, (__m128i)v85);
        sub_3132D0(v71 + v80 + 16, &v305.m128i_u64[1], v79, v85, v86, v87, v247.m128_u64[0]);
        v88 = *(_QWORD *)(a1 + 320);
        v89 = *(_QWORD *)(a1 + 224);
        v90 = _mm_load_si128(&v248);
        v91 = _mm_load_si128((const __m128i *)&v247);
        v301 = 4;
        v92 = *(_QWORD *)(v88 + 128);
        v300 = v88;
        v93 = *(_QWORD *)(v88 + 1440);
        v309 = &v299;
        v299 = v90;
        v94 = v93 + v92;
        v308 = v91;
        v310 = _mm_unpacklo_epi64((__m128i)v93, (__m128i)v94);
        sub_3132D0(v71 + v89 + 16, &v308.m128i_u64[1], v94, &v299, v95, v96, v247.m128_u64[0]);
        v71 += 40;
        v9 = *(_QWORD *)(a1 + 320);
      }
      while ( v72 != v71 );
    }
    v97 = v249;
    sub_100410((__int64)v249, v9, a1 + 264, 4, a5, a6);
    sub_100410((__int64)v97, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 320) + 208LL, 4, v98, v99);
    goto LABEL_91;
  }
LABEL_26:
  v311 = 0u;
  v312 = (__m128i *)v252;
  if ( (int)v8 > 0 )
  {
    v250 = nullptr;
    v248.m128i_i64[0] = (__int64)&v311;
    v247.m128_u64[0] = (unsigned __int64)&v314;
    while ( 2 )
    {
      if ( (unsigned int)v250 >= *(_DWORD *)(v9 + 64) )
      {
        v249 = &v289;
        v257 = &v311;
        sub_FE330();
      }
      v24 = v311.m128i_i64[0];
      v25 = *(__m128i **)(*(_QWORD *)(v9 + 528) + 8LL * (_QWORD)v250);
      if ( !v311.m128i_i64[0] )
        goto LABEL_123;
      v26 = *(_QWORD *)v311.m128i_i64[0];
      if ( !v311.m128i_i64[1] )
      {
        *(_QWORD *)v311.m128i_i64[0] = *(_QWORD *)v311.m128i_i64[0] & 3LL | v311.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        v27 = v311.m128i_i64[0];
        v28 = (__m128i)v311.m128i_u64[0];
        *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v28, v28);
        *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
        goto LABEL_32;
      }
      v141 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
      v138 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v138 & 2) == 0 )
      {
        v142 = (__int64 *)v141[1];
        if ( (*(_BYTE *)v142 & 2) != 0 )
        {
          v137 = (__int64 *)v141[2];
          if ( (*(_BYTE *)v137 & 2) == 0 )
            goto LABEL_117;
        }
        else
        {
          sub_FE5C0(v142);
          v137 = (__int64 *)v141[2];
          if ( (*(_BYTE *)v137 & 2) == 0 )
LABEL_117:
            sub_FE5C0(v137);
          v138 = *v141;
          if ( (*v141 & 2) != 0 )
          {
LABEL_119:
            if ( v26 > 3 )
              qfree();
            v24 = v311.m128i_i64[0];
            v26 = *(_QWORD *)v311.m128i_i64[0];
            goto LABEL_122;
          }
        }
        *v141 = v138 | 2;
        goto LABEL_119;
      }
LABEL_122:
      *(_QWORD *)v24 = v26 & 3 | v24 & 0xFFFFFFFFFFFFFFFCLL;
      v139 = v311.m128i_i64[0];
      v140 = (__m128i)v311.m128i_u64[0];
      *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v139 + 8) = _mm_unpacklo_epi64(v140, v140);
      *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
LABEL_123:
      v311.m128i_i64[1] = 0;
LABEL_32:
      v29 = *(_QWORD *)(a1 + 80);
      LODWORD(v251) = *(_DWORD *)(a1 + 316) ^ 1;
      v30 = (__int64 *)(v29 + 24LL * (_QWORD)v250);
      if ( (v25[1].m128i_i32[2] & 0x600) != 0x200 )
      {
        if ( !under_debugger )
        {
          v249 = &v289;
          v257 = &v311;
          sub_37EEE0(50139);
        }
        BUG();
      }
      v31 = 40LL * v25[4].m128i_i32[2];
      if ( ((unsigned __int8)v251 & 1) != 0 )
        v32 = *(_QWORD *)(a1 + 176) + v31;
      else
        v32 = *(_QWORD *)(a1 + 200) + v31;
      v33 = v25[4].m128i_i64[0];
      v249 = &v289;
      v257 = (__m128i *)v248.m128i_i64[0];
      sub_1004B0(v248.m128i_i64[0], v33, (_QWORD *)v32, (int)v251);
      v34 = v25[4].m128i_i64[0];
      v35 = v25[4].m128i_i32[2];
      v315 = v25;
      v314.m128i_i64[1] = v34;
      LODWORD(v256) = v35;
      v318 = v248.m128i_i64[0];
      v316 = 0u;
      v317 = 0;
      v314.m128i_i64[0] = (__int64)off_4CA520;
      v258 = v319;
      v249 = &v289;
      sub_605C0(v319, v32);
      v320 = nullptr;
      v321 = 0;
      v39 = *(__m128i **)(v32 + 24);
      if ( v39 )
      {
        v249 = *(__m128i **)(v32 + 24);
        n = 16LL * (_QWORD)v39;
        v320 = (void *)qalloc_or_throw();
        *((_QWORD *)&v321 + 1) = v249;
        memcpy(v320, *(const void **)(v32 + 16), n);
        v39 = v249;
        *(_QWORD *)&v321 = v249;
      }
      v40 = *(_QWORD *)(v318 + 16);
      v322 = 0u;
      v323 = v40;
      v41 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v314.m128i_i64[1] + 1504) + 80LL));
      v326 = (unsigned __int8)v251 & 1;
      v327 = 0;
      v325 = (int)v251;
      v324 = _mm_unpacklo_epi32(v41, _mm_cvtsi32_si128(v256)).m128i_u64[0];
      v42 = v25[3].m128i_i64[0];
      if ( v42 )
      {
        if ( ((unsigned __int8)v251 & 1) != 0 || (v42 = v25[3].m128i_i64[1]) != 0 )
        {
          while ( 1 )
          {
            sub_11AEC0(v42, &v314, v36, v39, v37, v38);
            if ( ((unsigned __int8)v251 & 1) == 0 )
              break;
            if ( !*(_QWORD *)(v42 + 8) )
              goto LABEL_47;
            v42 = *(_QWORD *)(v42 + 8);
          }
          while ( 1 )
          {
            v42 = *(_QWORD *)(v42 + 16);
            if ( !v42 )
              break;
            sub_11AEC0(v42, &v314, v36, v39, v37, v38);
          }
LABEL_47:
          v43 = v25[4].m128i_i32[2];
          if ( ((unsigned __int8)v251 & 1) != 0 )
            v44 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 40 * v43);
          else
LABEL_48:
            v44 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 40 * v43);
          sub_1004B0(v248.m128i_i64[0], v25[4].m128i_i64[0], v44, (int)v251);
          goto LABEL_50;
        }
        v43 = v25[4].m128i_i32[2];
        goto LABEL_48;
      }
      sub_107CE0(&v314, (__int64)v258, 0);
LABEL_50:
      v45 = v30[1];
      v46 = *v30;
      v47 = *v30;
      if ( 16 * v45 )
      {
        do
        {
          v308.m128i_i64[0] = v46;
          sub_1076A0(&v322, v46, (const __m128i **)&v308);
          v45 = v30[1];
          v47 = *v30;
          v46 += 16;
        }
        while ( v46 != *v30 + 16 * v45 );
      }
      v48 = v322.m128i_u64[1];
      if ( v322.m128i_i64[1] == v45 )
        goto LABEL_55;
      v273.m128i_i64[0] = -1;
      v273.m128i_i8[8] = 0;
      if ( v322.m128i_i64[1] < v45 )
      {
        v30[1] = v322.m128i_i64[1];
LABEL_55:
        v49 = v47;
        goto LABEL_56;
      }
      v150 = v30[2];
      if ( (unsigned __int64)&v273 < v47 || (unsigned __int64)&v273 >= v47 + 16 * v150 )
      {
        v49 = v47;
        if ( v150 < v322.m128i_i64[1] )
        {
          v49 = qvector_reserve();
          v216 = v30[1];
          v217 = (__m128i *)v30[2];
          v30[2] = v150;
          v218 = (const __m128i *)*v30;
          v219 = v216 - 1;
          if ( v219 >= 0 )
          {
            v220 = v49;
            do
            {
              v221 = _mm_loadu_si128(v218);
              v220 += 16;
              ++v218;
              *(__m128i *)(v220 - 16) = v221;
              v163 = v219-- == 0;
            }
            while ( !v163 );
          }
          v249 = v217;
          qfree();
          v222 = v249;
          v45 = v30[1];
          *v30 = v49;
          v30[2] = (__int64)v222;
        }
        if ( v45 < v48 )
        {
          v169 = _mm_load_si128(&v273);
          do
          {
            v170 = v45++;
            *(__m128i *)(v49 + 16 * v170) = v169;
            v49 = *v30;
          }
          while ( v48 != v45 );
        }
      }
      else
      {
        v49 = v47;
        if ( v150 < v322.m128i_i64[1] )
        {
          v231 = qvector_reserve();
          v232 = (const __m128i *)*v30;
          v49 = v231;
          v233 = v231;
          v234 = v30[1];
          v235 = (__m128i *)v30[2];
          v30[2] = v150;
          v236 = v232;
          v237 = v234 - 1;
          if ( v237 >= 0 )
          {
            do
            {
              v238 = _mm_loadu_si128(v236);
              v233 += 16;
              ++v236;
              *(__m128i *)(v233 - 16) = v238;
              v163 = v237-- == 0;
            }
            while ( !v163 );
          }
          v249 = v235;
          qfree();
          v45 = v30[1];
          *v30 = v49;
          v30[2] = (__int64)v235;
        }
        if ( v45 < v48 )
        {
          do
          {
            v151 = v45++;
            v152 = v49 + 16 * v151;
            *(_QWORD *)v152 = -1;
            *(_BYTE *)(v152 + 8) = 0;
            v49 = *v30;
          }
          while ( v48 != v45 );
        }
      }
      v30[1] = v48;
LABEL_56:
      v50 = v322.m128i_i64[0];
      if ( v322.m128i_i64[0] )
      {
        if ( !v322.m128i_i64[1] )
        {
          v314.m128i_i64[0] = (__int64)off_4CA520;
          v51 = *(_QWORD *)v322.m128i_i64[0];
          goto LABEL_59;
        }
        v143 = *(_QWORD **)(v322.m128i_i64[0] + 8);
        if ( (_QWORD *)v322.m128i_i64[0] == v143 )
        {
          v314.m128i_i64[0] = (__int64)off_4CA520;
          v51 = *(_QWORD *)v322.m128i_i64[0];
          goto LABEL_141;
        }
        do
        {
          v49 += 16;
          *(_QWORD *)(v49 - 16) = v143[3];
          *(_BYTE *)(v49 - 8) = *((_BYTE *)v143 + 32);
          if ( (*v143 & 2) == 0 )
          {
            v144 = (_QWORD *)v143[2];
            if ( (*(_BYTE *)v144 & 2) != 0 )
            {
              v173 = (_QWORD *)(*v143 & 0xFFFFFFFFFFFFFFFCLL);
              v174 = *v173;
              if ( (*v173 & 2) == 0 )
              {
                while ( (_QWORD *)v173[2] == v143 )
                {
                  v143 = v173;
                  v175 = v174 & 0xFFFFFFFFFFFFFFFCLL;
                  v174 = *(_QWORD *)(v174 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v174 & 2) != 0 )
                  {
                    v143 = (_QWORD *)v175;
                    goto LABEL_138;
                  }
                  v173 = (_QWORD *)v175;
                }
              }
              v143 = v173;
            }
            else
            {
              for ( i = (_QWORD *)v144[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v144 = i;
              v143 = v144;
            }
          }
LABEL_138:
          ;
        }
        while ( (_QWORD *)v322.m128i_i64[0] != v143 );
        v314.m128i_i64[0] = (__int64)off_4CA520;
        if ( !v143 )
          goto LABEL_62;
        v51 = *v143;
        if ( v322.m128i_i64[1] )
        {
LABEL_141:
          v146 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
          v147 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v147 & 2) != 0 )
            goto LABEL_148;
          v148 = (__int64 *)v146[1];
          if ( (*(_BYTE *)v148 & 2) != 0 )
          {
            v149 = (__int64 *)v146[2];
            if ( (*(_BYTE *)v149 & 2) == 0 )
            {
LABEL_144:
              sub_FE5C0(v149);
              goto LABEL_145;
            }
          }
          else
          {
            sub_FE5C0(v148);
            v149 = (__int64 *)v146[2];
            if ( (*(_BYTE *)v149 & 2) == 0 )
              goto LABEL_144;
LABEL_145:
            v147 = *v146;
            if ( (*v146 & 2) != 0 )
            {
LABEL_146:
              if ( v51 > 3 )
                qfree();
LABEL_148:
              *(_QWORD *)v322.m128i_i64[0] = v322.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL
                                           | *(_QWORD *)v322.m128i_i64[0] & 3LL;
              *(__m128i *)(v322.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                      (__m128i)v322.m128i_u64[0],
                                                      (__m128i)v322.m128i_u64[0]);
              *(_QWORD *)v322.m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v322.m128i_i64[0] |= 2uLL;
              v322.m128i_i64[1] = 0;
LABEL_60:
              if ( v322.m128i_i64[0] )
                qfree();
              goto LABEL_62;
            }
          }
          *v146 = v147 | 2;
          goto LABEL_146;
        }
        v50 = (__int64)v143;
LABEL_59:
        *(_QWORD *)v50 = v50 & 0xFFFFFFFFFFFFFFFCLL | v51 & 3;
        *(__m128i *)(v322.m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v322.m128i_u64[0], (__m128i)v322.m128i_u64[0]);
        *(_QWORD *)v322.m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v322.m128i_i64[0] |= 2uLL;
        goto LABEL_60;
      }
      v314.m128i_i64[0] = (__int64)off_4CA520;
LABEL_62:
      if ( v320 )
      {
        *(_QWORD *)&v321 = 0;
        qfree();
      }
      qfree();
      v52 = (_QWORD *)v311.m128i_i64[0];
      if ( v311.m128i_i64[0] )
      {
        if ( v311.m128i_i64[1] )
        {
          v53 = *(_QWORD **)(v311.m128i_i64[0] + 8);
          if ( v53 != (_QWORD *)v311.m128i_i64[0] )
          {
            v249 = &v289;
            do
            {
              v262 = (const __m128i *)(v53 + 3);
              sub_1076A0(v249, (__int64)(v53 + 3), &v262);
              if ( (*v53 & 2) == 0 )
              {
                v54 = (_QWORD *)v53[2];
                if ( (*(_BYTE *)v54 & 2) != 0 )
                {
                  v179 = (_QWORD *)(*v53 & 0xFFFFFFFFFFFFFFFCLL);
                  v180 = *v179;
                  if ( (*v179 & 2) == 0 )
                  {
                    while ( (_QWORD *)v179[2] == v53 )
                    {
                      v53 = v179;
                      v181 = v180 & 0xFFFFFFFFFFFFFFFCLL;
                      v180 = *(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v180 & 2) != 0 )
                      {
                        v53 = (_QWORD *)v181;
                        goto LABEL_71;
                      }
                      v179 = (_QWORD *)v181;
                    }
                  }
                  v53 = v179;
                }
                else
                {
                  do
                  {
                    v53 = v54;
                    v54 = (_QWORD *)v54[1];
                  }
                  while ( (*(_BYTE *)v54 & 2) == 0 );
                }
              }
LABEL_71:
              ;
            }
            while ( v52 != v53 );
          }
        }
      }
      v250 = (__int64 (__fastcall **)())((char *)v250 + 1);
      v9 = *(_QWORD *)(a1 + 320);
      if ( (__int64 (__fastcall **)())v255 == v250 )
        break;
      continue;
    }
  }
  if ( !*(_DWORD *)(v9 + 64) )
  {
    v249 = &v289;
    v257 = &v311;
    sub_FE330();
  }
  v55 = *(__int64 **)(v9 + 528);
  v56 = *(_DWORD *)(a1 + 316);
  v249 = &v289;
  v57 = *v55;
  v257 = &v311;
  sub_1004B0((__int64)&v289, v9, (_QWORD *)(v57 + 240), v56);
  v58 = *(_QWORD *)(a1 + 320);
  v257 = &v311;
  v59 = sub_1D15B0(v58);
  v60 = *(_DWORD *)(a1 + 316);
  v61 = *(_QWORD *)(a1 + 320);
  v257 = &v311;
  sub_1004B0((__int64)&v289, v61, (_QWORD *)(v59 + 160), v60);
  v62 = v311.m128i_i64[0];
  if ( !v311.m128i_i64[0] )
  {
    v250 = &off_4CA3C0;
    v251 = &off_4CA3C0 - 6;
    goto LABEL_91;
  }
  v63 = *(_QWORD *)v311.m128i_i64[0];
  if ( !v311.m128i_i64[1] )
  {
    *(_QWORD *)v311.m128i_i64[0] = *(_QWORD *)v311.m128i_i64[0] & 3LL | v311.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v229 = v311.m128i_i64[0];
    v230 = (__m128i)v311.m128i_u64[0];
    *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v229 + 8) = _mm_unpacklo_epi64(v230, v230);
    *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
    goto LABEL_85;
  }
  v64 = (__int64 *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
  v65 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v65 & 2) != 0 )
    goto LABEL_84;
  v66 = (__int64 *)v64[1];
  if ( (*(_BYTE *)v66 & 2) != 0 )
  {
    v67 = (__int64 *)v64[2];
    if ( (*(_BYTE *)v67 & 2) == 0 )
    {
LABEL_79:
      sub_FE5C0(v67);
      goto LABEL_80;
    }
    goto LABEL_267;
  }
  sub_FE5C0(v66);
  v67 = (__int64 *)v64[2];
  if ( (*(_BYTE *)v67 & 2) == 0 )
    goto LABEL_79;
LABEL_80:
  v65 = *v64;
  if ( (*v64 & 2) == 0 )
LABEL_267:
    *v64 = v65 | 2;
  if ( v63 > 3 )
    qfree();
  v62 = v311.m128i_i64[0];
  v63 = *(_QWORD *)v311.m128i_i64[0];
LABEL_84:
  *(_QWORD *)v62 = v63 & 3 | v62 & 0xFFFFFFFFFFFFFFFCLL;
  v68 = v311.m128i_i64[0];
  v69 = (__m128i)v311.m128i_u64[0];
  *(_QWORD *)v311.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v68 + 8) = _mm_unpacklo_epi64(v69, v69);
  *(_QWORD *)v311.m128i_i64[0] |= 2uLL;
  v311.m128i_i64[1] = 0;
LABEL_85:
  v250 = &off_4CA3C0;
  v251 = &off_4CA3C0 - 6;
  if ( v311.m128i_i64[0] )
    qfree();
LABEL_91:
  v100 = v249;
  v274 = 0;
  v101 = _mm_loadh_ps((const double *)&v250);
  v275 = 5;
  v263 = (const __m128i *)&v274;
  v247 = v101;
  v248 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4CA560, (__m128i)(unsigned __int64)v249);
  sub_108060(v249, (__int64)&v274, &v263);
  v102 = v254;
  v277 = 5;
  v264 = (const __m128i *)&v276;
  v276 = (int)v254;
  sub_108060(v100, (__int64)&v276, &v264);
  v103 = *(_QWORD *)(a1 + 320);
  v279 = 5;
  v104 = *(_DWORD *)(v103 + 116);
  v265 = (const __m128i *)&v278;
  v278 = v102 + v104;
  sub_108060(v100, (__int64)&v278, &v265);
  v105 = *(_QWORD *)(a1 + 320);
  v281 = 5;
  v106 = *(_QWORD *)(v105 + 144);
  v266 = (const __m128i *)&v280;
  v280 = v106;
  sub_108060(v100, (__int64)&v280, &v266);
  v107 = *(_QWORD *)(a1 + 320);
  v283 = 5;
  v108 = *(_QWORD *)(v107 + 168);
  v267 = (const __m128i *)&v282;
  v282 = v108;
  sub_108060(v100, (__int64)&v282, &v267);
  v285 = 5;
  v284 = v252;
  v268 = (const __m128i *)&v284;
  sub_108060(v100, (__int64)&v284, &v268);
  v109 = *(_QWORD *)(a1 + 320);
  v110 = _mm_load_si128(&v248);
  v111 = _mm_load_si128((const __m128i *)&v247);
  v112 = *(_QWORD *)(v109 + 1440);
  v312 = &v286;
  v286 = v110;
  v311 = v111;
  v313 = _mm_unpacklo_epi64((__m128i)v112, (__m128i)((unsigned __int64)v290 + v112));
  sub_3132D0(v109 + 232, &v311.m128i_u64[1], (char *)v290 + v112, v113, v114, v115, v247.m128_u64[0]);
  v116 = *(_QWORD *)(a1 + 320);
  v117 = _mm_load_si128(&v248);
  v118 = _mm_load_si128((const __m128i *)&v247);
  v119 = *(_QWORD *)(v116 + 1440);
  v315 = &v287;
  v287 = v117;
  v314 = v118;
  v316 = _mm_unpacklo_epi64((__m128i)v119, (__m128i)((unsigned __int64)v290 + v119));
  sub_3132D0(v116 + 184, &v314.m128i_u64[1], (char *)v290 + v119, v120, v121, v122, v247.m128_u64[0]);
  v123 = *(void (**)())(*(_QWORD *)v253 + 72LL);
  if ( v123 != nullsub_35 )
    ((void (__fastcall *)(__int64, _QWORD, __m128i *))v123)(v253, *(_QWORD *)(a1 + 320), v249);
  v124 = v289.m128i_u64[1];
  v125 = *(_QWORD *)(a1 + 112);
  v126 = *(_QWORD *)(a1 + 104);
  if ( v289.m128i_i64[1] != v125 )
  {
    v288.m128i_i64[0] = -1;
    v288.m128i_i8[8] = 0;
    if ( v289.m128i_i64[1] >= v125 )
    {
      v153 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int64)&v288 < v126 || (unsigned __int64)&v288 >= v126 + 16 * v153 )
      {
        if ( v153 < v289.m128i_i64[1] )
        {
          v126 = qvector_reserve();
          v223 = *(_QWORD *)(a1 + 112);
          v224 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v153;
          v225 = *(const __m128i **)(a1 + 104);
          v226 = v223 - 1;
          if ( v226 >= 0 )
          {
            v227 = v126;
            do
            {
              v228 = _mm_loadu_si128(v225);
              v227 += 16LL;
              ++v225;
              *(__m128i *)(v227 - 16) = v228;
              v163 = v226-- == 0;
            }
            while ( !v163 );
          }
          qfree();
          *(_QWORD *)(a1 + 104) = v126;
          v125 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v224;
        }
        if ( v125 < v124 )
        {
          v171 = _mm_load_si128(&v288);
          do
          {
            v172 = v125++;
            *(__m128i *)(v126 + 16 * v172) = v171;
            v126 = *(_QWORD *)(a1 + 104);
          }
          while ( v124 != v125 );
        }
      }
      else
      {
        if ( v153 < v289.m128i_i64[1] )
        {
          v239 = qvector_reserve();
          v240 = *(const __m128i **)(a1 + 104);
          v126 = v239;
          v241 = v239;
          v242 = *(_QWORD *)(a1 + 112);
          v243 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v153;
          v244 = v240;
          v245 = v242 - 1;
          if ( v245 >= 0 )
          {
            do
            {
              v246 = _mm_loadu_si128(v244);
              v241 += 16;
              ++v244;
              *(__m128i *)(v241 - 16) = v246;
              v163 = v245-- == 0;
            }
            while ( !v163 );
          }
          qfree();
          *(_QWORD *)(a1 + 104) = v126;
          v125 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v243;
        }
        if ( v125 < v124 )
        {
          do
          {
            v154 = v125++;
            v155 = v126 + 16 * v154;
            *(_QWORD *)v155 = -1;
            *(_BYTE *)(v155 + 8) = 0;
            v126 = *(_QWORD *)(a1 + 104);
          }
          while ( v124 != v125 );
        }
      }
    }
    *(_QWORD *)(a1 + 112) = v124;
  }
  if ( !v289.m128i_i64[0] )
    return v328 - __readfsqword(0x28u);
  if ( !v289.m128i_i64[1] )
  {
    v129 = *(_QWORD *)v289.m128i_i64[0];
    v127 = v289.m128i_i64[0];
    goto LABEL_211;
  }
  v127 = *(_QWORD *)(v289.m128i_i64[0] + 8);
  if ( v289.m128i_i64[0] == v127 )
  {
    v129 = *(_QWORD *)v289.m128i_i64[0];
LABEL_105:
    v130 = (__int64 *)(v129 & 0xFFFFFFFFFFFFFFFCLL);
    v131 = *(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v131 & 2) != 0 )
      goto LABEL_112;
    v132 = (__int64 *)v130[1];
    if ( (*(_BYTE *)v132 & 2) != 0 )
    {
      v133 = (__int64 *)v130[2];
      if ( (*(_BYTE *)v133 & 2) != 0 )
      {
LABEL_256:
        *v130 = v131 | 2;
LABEL_110:
        if ( v129 > 3 )
          qfree();
LABEL_112:
        *(_QWORD *)v289.m128i_i64[0] = v289.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v289.m128i_i64[0] & 3LL;
        v134 = v289.m128i_i64[0];
        v135 = (__m128i)v289.m128i_u64[0];
        *(_QWORD *)v289.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v134 + 8) = _mm_unpacklo_epi64(v135, v135);
        *(_QWORD *)v289.m128i_i64[0] |= 2uLL;
        v289.m128i_i64[1] = 0;
        goto LABEL_113;
      }
    }
    else
    {
      sub_FE5C0(v132);
      v133 = (__int64 *)v130[2];
      if ( (*(_BYTE *)v133 & 2) != 0 )
        goto LABEL_109;
    }
    sub_FE5C0(v133);
LABEL_109:
    v131 = *v130;
    if ( (*v130 & 2) != 0 )
      goto LABEL_110;
    goto LABEL_256;
  }
  do
  {
    *(_QWORD *)v126 = *(_QWORD *)(v127 + 24);
    *(_BYTE *)(v126 + 8) = *(_BYTE *)(v127 + 32);
    if ( (*(_QWORD *)v127 & 2) == 0 )
    {
      v128 = *(_QWORD *)(v127 + 16);
      if ( (*(_BYTE *)v128 & 2) != 0 )
      {
        v176 = (_QWORD *)(*(_QWORD *)v127 & 0xFFFFFFFFFFFFFFFCLL);
        v177 = *v176;
        if ( (*v176 & 2) != 0 || v176[2] != v127 )
        {
LABEL_189:
          v127 = (unsigned __int64)v176;
        }
        else
        {
          while ( 1 )
          {
            v127 = v177 & 0xFFFFFFFFFFFFFFFCLL;
            v177 = *(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v177 & 2) != 0 )
              break;
            v178 = v176;
            v176 = (_QWORD *)v127;
            if ( *(_QWORD **)(v127 + 16) != v178 )
              goto LABEL_189;
          }
        }
      }
      else
      {
        do
        {
          v127 = v128;
          v128 = *(_QWORD *)(v128 + 8);
        }
        while ( (*(_BYTE *)v128 & 2) == 0 );
      }
    }
    v126 += 16LL;
  }
  while ( v289.m128i_i64[0] != v127 );
  if ( v127 )
  {
    v129 = *(_QWORD *)v127;
    if ( v289.m128i_i64[1] )
      goto LABEL_105;
LABEL_211:
    *(_QWORD *)v127 = v129 & 3 | v127 & 0xFFFFFFFFFFFFFFFCLL;
    v188 = v289.m128i_i64[0];
    v189 = (__m128i)v289.m128i_u64[0];
    *(_QWORD *)v289.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v188 + 8) = _mm_unpacklo_epi64(v189, v189);
    *(_QWORD *)v289.m128i_i64[0] |= 2uLL;
LABEL_113:
    if ( v289.m128i_i64[0] )
      qfree();
  }
  return v328 - __readfsqword(0x28u);
}

