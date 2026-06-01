__int64 __fastcall sub_3A0BA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v13; // rdi
  __int64 v15; // rbx
  __int64 result; // rax
  unsigned int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 *v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 *v31; // rax
  __int64 v32; // r14
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD **v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rdx
  const char **v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  int **v52; // rsi
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rcx
  __int64 v56; // rbx
  unsigned int v57; // eax
  __int64 *v58; // rdx
  __int64 v59; // rbp
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 *v63; // rdx
  __int64 v64; // rbx
  unsigned int v65; // eax
  unsigned __int64 *v66; // rdx
  __int64 v67; // rdx
  __int64 *v68; // rax
  int v69; // eax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 *v75; // rbx
  __int64 *jj; // rbp
  unsigned int v77; // eax
  const char **v78; // rdx
  const char *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rbp
  __int64 v82; // r9
  unsigned int v83; // r14d
  __int64 v84; // rbp
  unsigned int v85; // r15d
  __int64 **v86; // rbp
  __int64 *v87; // rbp
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdx
  _BYTE *v91; // rcx
  __int64 v92; // r15
  void *func; // rax
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // r14
  __int64 v97; // r12
  __int64 v98; // rbp
  __int64 v99; // rdi
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 *v103; // r15
  __int64 v104; // rcx
  _QWORD *v105; // rax
  __int64 *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 *v112; // rax
  __int64 *v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 *v116; // rax
  __int64 *v117; // rdx
  __int64 v118; // rdi
  __int64 **v119; // rax
  _QWORD *v120; // rdx
  const char **v121; // rax
  _QWORD **v122; // rdx
  __int64 *v123; // rax
  _QWORD *v124; // rsi
  _QWORD *v125; // rax
  __int64 *v126; // rax
  _QWORD **v127; // r14
  _DWORD **v128; // r12
  __int64 *v129; // rax
  __int64 *v130; // r9
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned int v133; // eax
  __int64 **v134; // rcx
  __int64 *v135; // rbp
  __int64 v136; // rsi
  __int64 v137; // r12
  __int64 v138; // rdi
  _QWORD *v139; // rax
  __int64 v140; // rdx
  _BYTE *v141; // rcx
  _QWORD *v142; // rbx
  int *v143; // r12
  __int64 v144; // rdx
  __int64 v145; // rcx
  size_t v146; // r14
  int v147; // r15d
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  unsigned __int64 v152; // rbx
  __int64 v153; // rsi
  unsigned __int64 v154; // rbx
  size_t v155; // r15
  const char *v156; // r14
  __int64 *v157; // r8
  __int64 v158; // rsi
  const char *v159; // r14
  __int64 v160; // rsi
  unsigned __int64 v161; // rbx
  __int64 v162; // r15
  unsigned __int64 v163; // rbx
  char *v164; // rdi
  __int64 v165; // rax
  __int64 v166; // rdi
  __int64 v167; // rax
  bool v168; // zf
  _QWORD *v169; // rbp
  __int64 v170; // r13
  __int64 v171; // rdi
  __int64 n; // r12
  __int64 *v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rdi
  __int64 v176; // r13
  __int64 v177; // rdi
  __int64 ii; // r12
  __int64 *v179; // rax
  __int64 v180; // rdx
  int *v181; // r14
  __int64 v182; // rax
  __m128i v183; // xmm2
  char *v184; // rbx
  __int64 *v185; // rbp
  __int64 v186; // r12
  int v187; // eax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rsi
  __int64 v191; // r12
  int v192; // eax
  __int64 v193; // rax
  __int64 v194; // rsi
  __int64 v195; // rax
  __int64 v196; // rax
  int v197; // eax
  unsigned __int64 v198; // r12
  __m128i *v199; // rbp
  __int64 v200; // rsi
  char *v201; // rcx
  __int64 v202; // rax
  char *v203; // rcx
  char *v204; // r8
  char v205; // bp
  char merge_state; // al
  char *v207; // r12
  __int64 v208; // rbp
  _DWORD *v209; // rdi
  __int64 v210; // rax
  __int64 v211; // r9
  _BYTE *v212; // rdx
  _QWORD *v213; // rbp
  bool v214; // r12
  char *v215; // r14
  unsigned int v216; // eax
  char *v218; // r14
  unsigned int v219; // eax
  unsigned int v220; // eax
  unsigned __int64 v221; // rbp
  void *v222; // r12
  char *v223; // rax
  const char *v224; // rsi
  const char *v225; // rsi
  const char *v226; // rdi
  __int64 v227; // rbx
  _WORD *v228; // rsi
  __int64 v229; // rax
  __int64 v230; // rax
  int v231; // eax
  int v232; // ebp
  __int64 v233; // rax
  __int64 *v234; // r14
  __int64 v235; // r12
  __int64 v236; // rax
  __int64 *v237; // r8
  __int64 v238; // rax
  _QWORD *v239; // rbx
  __int64 v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rbp
  __int64 v246; // rdi
  __int64 i; // rbx
  __int64 *v248; // rdx
  __int64 v249; // rax
  __int64 v250; // rdi
  __int64 v251; // rbp
  __int64 v252; // rdi
  __int64 j; // rbx
  __int64 *v254; // rax
  __int64 v255; // rdx
  __int64 *v256; // rbx
  char *v257; // rax
  __int64 v258; // r12
  __int64 v259; // rdi
  __int64 v260; // rbp
  char *v261; // r13
  __int64 *v262; // rcx
  __int64 v263; // rdx
  __int64 v264; // rdi
  __int64 v265; // r12
  __int64 v266; // rdi
  __int64 v267; // rbp
  char *v268; // r13
  __int64 *v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // rax
  __int64 v272; // rax
  __int64 v273; // rax
  __int64 *v274; // rbx
  __int64 v275; // r12
  __int64 v276; // rdi
  __int64 k; // rbp
  __int64 *v278; // rdx
  __int64 v279; // rdi
  __int64 v280; // rdi
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rsi
  __int64 v284; // rdi
  __int64 v285; // r12
  __int64 m; // rbp
  __int64 *v287; // rax
  __int64 v288; // rdi
  char *s1[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v290; // [rsp+10h] [rbp-128h]
  __int64 *p_src; // [rsp+18h] [rbp-120h]
  __int64 v292; // [rsp+20h] [rbp-118h]
  __m128i *v293; // [rsp+28h] [rbp-110h]
  char *v294; // [rsp+30h] [rbp-108h]
  __int64 *v295; // [rsp+38h] [rbp-100h]
  __m128i *v296; // [rsp+40h] [rbp-F8h]
  _QWORD *v297; // [rsp+48h] [rbp-F0h]
  __int64 *v298[2]; // [rsp+50h] [rbp-E8h] BYREF
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v300[24]; // [rsp+68h] [rbp-D0h] BYREF
  int v301; // [rsp+80h] [rbp-B8h]
  __m128i v302; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v303; // [rsp+A0h] [rbp-98h]
  _OWORD v304[3]; // [rsp+A8h] [rbp-90h] BYREF
  __m128i *v305; // [rsp+D8h] [rbp-60h]
  __int128 v306; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v307; // [rsp+F8h] [rbp-40h]

  v292 = a1;
  v13 = *(_QWORD *)(a1 + 16);
  v307 = __readfsqword(0x28u);
  if ( a2 > 81 )
  {
    if ( a2 != 171 )
    {
      if ( a2 > 171 )
      {
        if ( a2 != 175 )
        {
          if ( a2 == 177 )
          {
            v17 = *(_DWORD *)a3;
            if ( *(_DWORD *)a3 > 0x2Fu )
            {
              v18 = *(__int64 **)(a3 + 8);
              *(_QWORD *)(a3 + 8) = v18 + 1;
            }
            else
            {
              v18 = (__int64 *)(*(_QWORD *)(a3 + 16) + v17);
              *(_DWORD *)a3 = v17 + 8;
            }
            v19 = *v18;
            v20 = *(_QWORD *)(*(_QWORD *)(v292 + 16) + 1008LL);
            v21 = *(__int64 **)(v20 + 40);
            v22 = &v21[*(_QWORD *)(v20 + 48)];
            if ( v21 != v22 )
            {
              while ( 1 )
              {
                v23 = *v21;
                if ( *v21 )
                {
                  if ( v19 == *(_QWORD *)(v23 + 8) || v19 == *(_QWORD *)(v23 + 16) )
                    break;
                }
                if ( v22 == ++v21 )
                  return 0;
              }
              if ( *(_QWORD *)(v23 + 32) )
              {
                v133 = *(_DWORD *)a3;
                if ( *(_DWORD *)a3 > 0x2Fu )
                {
                  v134 = *(__int64 ***)(a3 + 8);
                  *(_QWORD *)(a3 + 8) = v134 + 1;
                }
                else
                {
                  v134 = (__int64 **)(*(_QWORD *)(a3 + 16) + v133);
                  *(_DWORD *)a3 = v133 + 8;
                }
                v135 = *v134;
                v136 = (*v134)[1];
                v137 = **(_QWORD **)(v23 + 32);
                v138 = **v134;
                if ( v136 )
                {
                  v139 = (_QWORD *)**v134;
                  v140 = 0;
                  while ( 1 )
                  {
                    if ( v139[1] )
                    {
                      v141 = (_BYTE *)*v139;
                      if ( *(_BYTE *)*v139 == 101 && v141[1] == 97 && !v141[2] )
                        break;
                    }
                    ++v140;
                    v139 += 5;
                    if ( v136 == v140 )
                      goto LABEL_317;
                  }
                  v142 = v139 + 3;
                }
                else
                {
LABEL_317:
                  if ( v135[2] < (unsigned __int64)(v136 + 1) )
                  {
                    v272 = qvector_reserve((__int64)v135, v138, v136 + 1, 40);
                    *v135 = v272;
                    v136 = v135[1];
                    v138 = v272;
                  }
                  v227 = v138 + 40 * v136;
                  *(_QWORD *)v227 = 0;
                  *(_OWORD *)(v227 + 8) = 0;
                  *(_DWORD *)(v227 + 24) = 0;
                  *(_QWORD *)(v227 + 32) = 0;
                  ++v135[1];
                  v228 = *(_WORD **)v227;
                  if ( *(_QWORD *)(v227 + 16) <= 2u )
                  {
                    v271 = qvector_reserve(v227, (__int64)v228, 3, 1);
                    *(_QWORD *)v227 = v271;
                    v228 = (_WORD *)v271;
                  }
                  *(_QWORD *)(v227 + 8) = 3;
                  v142 = (_QWORD *)(v227 + 24);
                  *v228 = 24933;
                  *(_BYTE *)(*(v142 - 3) + 2LL) = 0;
                }
                if ( *(_DWORD *)v142 )
                  jvalue_t_clear();
                *(_DWORD *)v142 = 1;
                v142[1] = v137;
              }
            }
          }
          return 0;
        }
        v100 = *(_DWORD *)a3;
        if ( v100 > 0x2F )
        {
          v119 = *(__int64 ***)(a3 + 8);
          v120 = v119 + 1;
          *(_QWORD *)(a3 + 8) = v119 + 1;
          v103 = *v119;
        }
        else
        {
          v101 = *(_QWORD *)(a3 + 16);
          v102 = v100 + 8;
          *(_DWORD *)a3 = v102;
          v103 = *(__int64 **)(v101 + v100);
          if ( (unsigned int)v102 <= 0x2F )
          {
            v104 = v100 + 16;
            *(_DWORD *)a3 = v104;
            v296 = *(__m128i **)(v101 + v102);
            if ( (unsigned int)v104 <= 0x2F )
            {
              v105 = (_QWORD *)(v104 + v101);
              *(_DWORD *)a3 = v100 + 24;
              goto LABEL_117;
            }
            v105 = *(_QWORD **)(a3 + 8);
LABEL_135:
            *(_QWORD *)(a3 + 8) = v105 + 1;
LABEL_117:
            v297 = (_QWORD *)*v105;
            v106 = (__int64 *)v297[4];
            if ( !v106 )
            {
LABEL_161:
              v109 = *(_QWORD *)(v292 + 16);
              goto LABEL_126;
            }
            v107 = *v106;
            v108 = *v106 + 16 * v106[1];
            v109 = *(_QWORD *)(v292 + 16);
            if ( v108 == *v106 )
            {
LABEL_126:
              if ( !v296 )
                return 0;
              v115 = *(_QWORD *)(v109 + 1008);
              v116 = *(__int64 **)(v115 + 40);
              v117 = &v116[*(_QWORD *)(v115 + 48)];
              if ( v116 == v117 )
                return 0;
              while ( 1 )
              {
                v118 = *v116;
                if ( *v116 )
                {
                  if ( *(__m128i **)(v118 + 8) == v296 || *(__m128i **)(v118 + 16) == v296 )
                    break;
                }
                if ( v117 == ++v116 )
                  return 0;
              }
              s1[0] = *(char **)(v118 + 44);
              v302.m128i_i64[0] = _mm_shuffle_epi32((__m128i)(unsigned __int64)s1[0], 225).m128i_u64[0];
              v181 = sub_38F260((_QWORD *)v118, &v302);
              if ( !v181 )
                return 0;
              v182 = v297[1];
              v296 = (__m128i *)(v182 + 24LL * v297[2]);
              if ( v296 == (__m128i *)v182 )
                return 0;
              v183 = _mm_loadl_epi64((const __m128i *)s1);
              v293 = (__m128i *)v182;
              LODWORD(p_src) = _mm_cvtsi128_si32(v183);
              LODWORD(v295) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v183, 229));
              while ( 1 )
              {
                v184 = (char *)v293->m128i_i64[0];
                s1[0] = (char *)(v293->m128i_i64[0] + 8 * v293->m128i_i64[1]);
                if ( s1[0] != v184 )
                  break;
LABEL_257:
                v293 = (__m128i *)((char *)v293 + 24);
                if ( v296 == v293 )
                  return 0;
              }
              while ( 1 )
              {
                v185 = *(__int64 **)v184;
                v186 = **(_QWORD **)v184;
                v187 = *(_DWORD *)(v186 + 12);
                if ( v187 == (_DWORD)p_src )
                {
                  v188 = operator new(0x18u);
                  *(_QWORD *)v188 = v185;
                  *(_DWORD *)(v188 + 20) = 1;
                  *(_QWORD *)(v188 + 8) = 0x5400000001LL;
                  v294 = (char *)v188;
                  *(_DWORD *)(v188 + 16) = (_DWORD)v295;
                  v189 = v103[1];
                  v190 = *v103;
                  if ( v103[2] < (unsigned __int64)(v189 + 1) )
                  {
                    v196 = qvector_reserve((__int64)v103, v190, v189 + 1, 8);
                    *v103 = v196;
                    v190 = v196;
                    v189 = v103[1];
                  }
                  *(_QWORD *)(v190 + 8 * v189) = v294;
                  ++v103[1];
                  if ( v181[1] == *(_DWORD *)(v186 + 12) )
                    goto LABEL_254;
LABEL_249:
                  v184 += 8;
                  if ( s1[0] == v184 )
                    goto LABEL_257;
                }
                else
                {
                  if ( v181[1] != v187 )
                    goto LABEL_249;
LABEL_254:
                  v191 = operator new(0x18u);
                  v192 = *v181;
                  *(_QWORD *)v191 = v185;
                  *(_QWORD *)(v191 + 8) = 0x5400000001LL;
                  *(_DWORD *)(v191 + 16) = v192;
                  *(_DWORD *)(v191 + 20) = 1;
                  v193 = v103[1];
                  v194 = *v103;
                  if ( v103[2] < (unsigned __int64)(v193 + 1) )
                  {
                    v195 = qvector_reserve((__int64)v103, v194, v193 + 1, 8);
                    *v103 = v195;
                    v194 = v195;
                    v193 = v103[1];
                  }
                  *(_QWORD *)(v194 + 8 * v193) = v191;
                  v184 += 8;
                  ++v103[1];
                  if ( s1[0] == v184 )
                    goto LABEL_257;
                }
              }
            }
            while ( 1 )
            {
              if ( !*(_BYTE *)v107 )
              {
                v110 = *(_QWORD *)(v109 + 1008);
                v111 = *(_QWORD *)(v107 + 8);
                v112 = *(__int64 **)(v110 + 40);
                v113 = &v112[*(_QWORD *)(v110 + 48)];
                if ( v112 != v113 )
                  break;
              }
LABEL_125:
              v107 += 16;
              if ( v108 == v107 )
                goto LABEL_126;
            }
            while ( 1 )
            {
              v114 = *v112;
              if ( *v112 )
              {
                if ( v111 == *(_QWORD *)(v114 + 8) || v111 == *(_QWORD *)(v114 + 16) )
                  break;
              }
              if ( v113 == ++v112 )
                goto LABEL_125;
            }
            callui(144, v296, &callui, v113, v109, a6, s1[0], s1[1], v290, p_src);
            LODWORD(p_src) = v197;
            src = nullptr;
            v301 = -1;
            memset(v300, 0, sizeof(v300));
            if ( v197 == 46 )
            {
              v207 = (char *)v297[1];
              v294 = &v207[24 * v297[2]];
              if ( v207 != v294 )
              {
LABEL_269:
                s1[0] = v207;
                v293 = &v302;
                while ( 1 )
                {
                  v208 = *(_QWORD *)s1[0] + 8LL * *((_QWORD *)s1[0] + 1);
                  v127 = *(_QWORD ***)s1[0];
                  if ( v208 == *(_QWORD *)s1[0] )
                    goto LABEL_158;
                  while ( 1 )
                  {
                    v128 = (_DWORD **)*v127;
                    v209 = (_DWORD *)**v127;
                    if ( (_DWORD)p_src != 46 )
                    {
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v209 + 128LL))(v209);
                      if ( *(_QWORD *)v300 )
                        goto LABEL_275;
                      while ( 1 )
                      {
                        do
                        {
                          if ( (_QWORD **)v208 == ++v127 )
                            goto LABEL_158;
                          v128 = (_DWORD **)*v127;
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)**v127 + 128LL))(**v127);
                        }
                        while ( !*(_QWORD *)v300 );
LABEL_275:
                        if ( rangeset_t_find_range() )
                          goto LABEL_155;
                      }
                    }
                    if ( v209[3] != *(_DWORD *)(v114 + 44) )
                      break;
LABEL_155:
                    v129 = (__int64 *)operator new(0x18u);
                    *v129 = (__int64)v128;
                    v130 = v129;
                    v302.m128i_i64[0] = (__int64)v129;
                    v129[1] = 0x5200000000LL;
                    v129[2] = -1;
                    v131 = v103[1];
                    v132 = *v103;
                    if ( v103[2] < (unsigned __int64)(v131 + 1) )
                    {
                      v295 = v130;
                      v210 = qvector_reserve((__int64)v103, v132, v131 + 1, 8);
                      *v103 = v210;
                      v132 = v210;
                      v130 = v295;
                      v131 = v103[1];
                    }
                    ++v127;
                    *(_QWORD *)(v132 + 8 * v131) = v130;
                    ++v103[1];
                    if ( (_QWORD **)v208 == v127 )
                      goto LABEL_158;
                  }
                  while ( (_QWORD **)v208 != ++v127 )
                  {
                    v128 = (_DWORD **)*v127;
                    if ( *(_DWORD *)(**v127 + 12LL) == *(_DWORD *)(v114 + 44) )
                      goto LABEL_155;
                  }
LABEL_158:
                  s1[0] += 24;
                  if ( v294 == s1[0] )
                    goto LABEL_159;
                }
              }
              goto LABEL_161;
            }
            v198 = *(int *)(v114 + 44);
            v199 = *(__m128i **)(v114 + 32);
            v200 = *(unsigned int *)(v114 + 44);
            v201 = (char *)sub_38C6C0(v199, v200);
            if ( !v201 )
            {
              if ( v198 >= v199[8].m128i_i64[1]
                || (v302.m128i_i64[0] = (__int64)off_4E6AF0,
                    v302.m128i_i64[1] = 0,
                    v200 = *(_QWORD *)(32 * v198 + v199[8].m128i_i64[0]),
                    sub_38A4F0((__int64)v199, (char *)v200, 0, (__int64)&v302, 0.0),
                    (v201 = (char *)v302.m128i_i64[1]) == nullptr) )
              {
                *(_QWORD *)&v300[16] = 0;
                v204 = (char *)sub_258020((__int64)v199);
                v203 = nullptr;
LABEL_281:
                if ( *(_QWORD *)v204 )
                {
                  v211 = 24;
                  v212 = (_BYTE *)(**(_QWORD **)v204 & 0xFFFFFFFFFFFFFFFCLL);
                  v213 = v212;
                  if ( !v212 )
                    goto LABEL_307;
                  if ( (*v212 & 2) == 0 )
                  {
                    v214 = v203 == &byte_1;
                    LOBYTE(s1[0]) = v203 == nullptr;
                    while ( 1 )
                    {
                      v215 = (char *)v213[3];
                      v211 = (__int64)(v213 + 3);
                      if ( v215 == v203 )
                      {
LABEL_306:
                        if ( *(_QWORD **)v204 != v213 )
                        {
LABEL_307:
                          v221 = *(_QWORD *)(v211 + 16);
                          v222 = nullptr;
                          if ( v221 )
                          {
                            s1[0] = (char *)v211;
                            v222 = (void *)qalloc_or_throw(16 * v221, v200, (__int64)v212, (__int64)v203);
                            memcpy(v222, *((const void **)s1[0] + 1), 16 * v221);
                          }
                          src = v222;
                          *(_QWORD *)&v300[16] = 0;
                          *(__m128i *)v300 = _mm_unpacklo_epi64((__m128i)v221, (__m128i)v221);
                        }
                        goto LABEL_268;
                      }
                      if ( !v215 || v214 )
                        break;
                      v295 = v213 + 3;
                      if ( v215 != &byte_1 && !LOBYTE(s1[0]) )
                      {
                        v200 = (__int64)v215;
                        v294 = v204;
                        v293 = (__m128i *)v203;
                        v216 = sub_2596A0((__int64)v203, (__int64)v215, 0.0);
                        v203 = (char *)v293;
                        v204 = v294;
                        v211 = (__int64)v295;
                        if ( !(v216 ? v216 >> 31 : v293->m128i_i64[0] < *(_QWORD *)v215) )
                        {
                          v218 = (char *)*v295;
                          if ( (__m128i *)*v295 == v293 || v218 == &byte_1 )
                            goto LABEL_306;
                          if ( v218 )
                          {
                            v200 = (__int64)v293;
                            v219 = sub_2596A0(*v295, (__int64)v293, 0.0);
                            v203 = (char *)v293;
                            v204 = v294;
                            v211 = (__int64)v295;
                            if ( v219 )
                              v220 = v219 >> 31;
                            else
                              LOBYTE(v220) = *(_QWORD *)v218 < v293->m128i_i64[0];
                            if ( !(_BYTE)v220 )
                              goto LABEL_306;
                          }
                          goto LABEL_374;
                        }
                      }
                      v213 = (_QWORD *)v213[1];
LABEL_294:
                      if ( (*(_BYTE *)v213 & 2) != 0 )
                        goto LABEL_268;
                    }
                    if ( v215 == &byte_1 || LOBYTE(s1[0]) )
                      goto LABEL_306;
LABEL_374:
                    v213 = (_QWORD *)v213[2];
                    goto LABEL_294;
                  }
                }
LABEL_268:
                v207 = (char *)v297[1];
                v294 = &v207[24 * v297[2]];
                if ( v294 != v207 )
                  goto LABEL_269;
LABEL_159:
                if ( src )
                {
                  *(_QWORD *)v300 = 0;
                  qfree((__int64)src);
                }
                goto LABEL_161;
              }
              if ( *(int *)(v302.m128i_i64[1] + 8) <= 69 )
              {
                v200 = v302.m128i_i64[1];
                v201 = (char *)sub_2573F0((__int64)v199, v302.m128i_i64[1]);
              }
            }
            s1[0] = v201;
            *(_QWORD *)&v300[16] = 0;
            v202 = sub_258020((__int64)v199);
            v203 = s1[0];
            v204 = (char *)v202;
            if ( s1[0] > &byte_1 )
            {
              v293 = (__m128i *)v202;
              v200 = (__int64)&v302;
              v302.m128i_i64[0] = *(_QWORD *)s1[0];
              v302.m128i_i32[2] = *((_DWORD *)s1[0] + 2);
              v205 = sub_257EA0((__int64)v199, (unsigned __int64 *)&v302);
              merge_state = get_merge_state();
              v203 = s1[0];
              v204 = (char *)v293;
              if ( (merge_state & 3) == 0 && (v205 & 1) != 0 )
              {
                v302.m128i_i32[2] = 0;
                v303 = 0;
                v302.m128i_i64[0] = (__int64)&off_4E6B10;
                *((_QWORD *)&v304[2] + 1) = &src;
                v305 = v293;
                memset(v304, 0, 40);
                sub_255A80(v302.m128i_i64, (__int64)s1[0], 0, 0.0);
                v302.m128i_i64[0] = (__int64)off_4DBCF8;
                if ( *(_QWORD *)&v304[1] )
                {
                  *((_QWORD *)&v304[1] + 1) = 0;
                  qfree(*(__int64 *)&v304[1]);
                }
                if ( v303 )
                {
                  *(_QWORD *)&v304[0] = 0;
                  qfree(v303);
                }
                goto LABEL_268;
              }
            }
            goto LABEL_281;
          }
          v120 = *(_QWORD **)(a3 + 8);
        }
        v105 = v120 + 1;
        *(_QWORD *)(a3 + 8) = v120 + 1;
        v296 = (__m128i *)*v120;
        goto LABEL_135;
      }
      if ( a2 == 136 )
      {
        sub_3C22A0(v13, 0);
        return 0;
      }
      if ( a2 != 138 )
        return 0;
      v24 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(_QWORD *)(a3 + 8);
        v126 = (__int64 *)(v26 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 8;
        v27 = *(_QWORD *)v26;
      }
      else
      {
        v25 = *(_QWORD *)(a3 + 16);
        a4 = (unsigned __int64 *)(v24 + 8);
        v26 = v24;
        *(_DWORD *)a3 = (_DWORD)a4;
        v27 = *(_QWORD *)(v25 + v24);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v26 = v24 + 16;
          *(_DWORD *)a3 = v26;
          v28 = *(unsigned __int64 *)((char *)a4 + v25);
          if ( (unsigned int)v26 <= 0x2F )
          {
            v29 = (__int64 *)(v26 + v25);
            *(_DWORD *)a3 = v24 + 24;
LABEL_25:
            if ( !v27
              || (v30 = *(_QWORD *)(*(_QWORD *)(v292 + 16) + 1008LL),
                  v31 = *(unsigned __int64 **)(v30 + 40),
                  v26 = *(_QWORD *)(v30 + 48),
                  a4 = &v31[v26],
                  v31 == a4) )
            {
LABEL_31:
              v32 = *v29;
              callui(144, v27, v26, a4, a5, a6, s1[0], s1[1], v290, p_src);
              if ( v33 == 10 || v33 == 58 && *(_BYTE *)(*(_QWORD *)(v32 + 208) + 31LL) != 12 )
                callui(131, v27, v28, "hx:JumpGlobalXref", "Compact types...", 0, s1[0], s1[1], v290, p_src);
            }
            else
            {
              while ( 1 )
              {
                v26 = *v31;
                if ( *v31 )
                {
                  if ( *(_QWORD *)(v26 + 8) == v27 || *(_QWORD *)(v26 + 16) == v27 )
                    break;
                }
                if ( a4 == ++v31 )
                  goto LABEL_31;
              }
              if ( *(_QWORD *)(v26 + 8) == v27 )
                sub_3C0FD0(v27, v28, v26, *(double *)a7.m128_u64, a8, a9);
            }
            return 0;
          }
          v29 = *(__int64 **)(a3 + 8);
LABEL_150:
          *(_QWORD *)(a3 + 8) = v29 + 1;
          goto LABEL_25;
        }
        v126 = *(__int64 **)(a3 + 8);
      }
      v29 = v126 + 1;
      *(_QWORD *)(a3 + 8) = v126 + 1;
      v28 = *v126;
      goto LABEL_150;
    }
    v83 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v121 = *(const char ***)(a3 + 8);
      v86 = (__int64 **)(v121 + 1);
      *(_QWORD *)(a3 + 8) = v121 + 1;
      if ( strncmp(*v121, "Pseudocode-", 0xBu) )
        return 0;
    }
    else
    {
      v84 = *(_QWORD *)(a3 + 16);
      v85 = v83 + 8;
      *(_DWORD *)a3 = v83 + 8;
      if ( strncmp(*(const char **)(v84 + v83), "Pseudocode-", 0xBu) )
        return 0;
      if ( v85 <= 0x2F )
      {
        v86 = (__int64 **)(v85 + v84);
        *(_DWORD *)a3 = v83 + 16;
LABEL_91:
        v87 = *v86;
        v88 = v87[1];
        if ( !v88 )
          return 0;
        v89 = *v87;
        v90 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v89 + 8) )
          {
            v91 = *(_BYTE **)v89;
            if ( **(_BYTE **)v89 == 101 && v91[1] == 97 && !v91[2] )
              break;
          }
          ++v90;
          v89 += 40;
          if ( v88 == v90 )
            return 0;
        }
        if ( *(_DWORD *)(v89 + 24) != 1 )
          return 0;
        v92 = *(_QWORD *)(v89 + 32);
        func = (void *)get_func();
        if ( !func )
          return 0;
        src = func;
        v302.m128i_i64[0] = 0;
        v94 = *(_QWORD *)(v292 + 16);
        v302.m128i_i64[1] = -1;
        v303 = 0;
        memset(v300, 0, sizeof(v300));
        v304[0] = 0;
        v95 = *(_QWORD *)(v94 + 112);
        s1[0] = (char *)v298;
        p_src = (__int64 *)&src;
        sub_14CDC0(
          (__int64 *)v298,
          v95,
          (__int64 **)&src,
          &v302,
          8,
          0.0,
          *(double *)a8.m128_u64,
          (__m128i)a9,
          *(double *)a10.m128_u64);
        if ( *(_QWORD *)v300 )
        {
          *(_QWORD *)&v300[8] = 0;
          qfree(*(__int64 *)v300);
        }
        if ( v298[0] )
        {
          if ( (get_merge_state() & 3) == 0 )
            goto LABEL_322;
          v96 = v87[1];
          if ( !v96 )
            goto LABEL_322;
          v97 = *v87;
          v98 = 0;
          while ( !*(_QWORD *)(v97 + 8) || strcmp(*(const char **)v97, "merge_kind") )
          {
            ++v98;
            v97 += 40;
            if ( v96 == v98 )
              goto LABEL_322;
          }
          if ( *(_DWORD *)(v97 + 24) != 1 || (unsigned __int8)sub_2BB0E0(0.0) )
          {
LABEL_322:
            v231 = sub_387360(*(_QWORD *)(*(_QWORD *)(v292 + 16) + 1008LL));
            src = nullptr;
            v232 = v231;
            *(_OWORD *)v300 = 0;
            sub_390740(p_src, v231, "Pseudocode-");
            v233 = operator new(0xA8u);
            v234 = v298[0];
            v235 = v233;
            v236 = *(_QWORD *)v300;
            v298[1] = v298[0];
            if ( v298[0] )
            {
              ++*((_DWORD *)v298[0] + 26);
              if ( v236 )
                v237 = (__int64 *)src;
              else
                v237 = (__int64 *)::s1;
              v238 = *(_QWORD *)(v292 + 16);
              *(_DWORD *)(v235 + 4) = v232;
              *(_DWORD *)v235 = 0;
              *(_OWORD *)(v235 + 8) = 0;
              *(__m128i *)(v235 + 24) = _mm_unpacklo_epi64(
                                          _mm_loadl_epi64((const __m128i *)(v234 + 1)),
                                          (__m128i)(unsigned __int64)v234);
              ++*((_DWORD *)v234 + 26);
            }
            else
            {
              v282 = v292;
              if ( *(_QWORD *)v300 )
              {
                *(_DWORD *)(v235 + 4) = v232;
                *(_DWORD *)v235 = 0;
                v237 = (__int64 *)src;
              }
              else
              {
                *(_DWORD *)(v235 + 4) = v232;
                *(_DWORD *)v235 = 0;
                v237 = (__int64 *)::s1;
              }
              v238 = *(_QWORD *)(v282 + 16);
              *(_OWORD *)(v235 + 8) = 0;
              *(_OWORD *)(v235 + 24) = 0;
            }
            *(_DWORD *)v235 &= ~2u;
            *(_QWORD *)(v235 + 52) = 0;
            *(_QWORD *)(v235 + 44) = 0xFFFFFFFFLL;
            *(_DWORD *)(v235 + 80) = 0;
            *(_DWORD *)(v235 + 104) = 0;
            *(_QWORD *)(v235 + 128) = v238;
            *(_QWORD *)(v235 + 136) = 0;
            *(_QWORD *)(v235 + 160) = 0;
            *(_OWORD *)(v235 + 144) = 0;
            v239 = *(_QWORD **)(v238 + 1008);
            v240 = v239[6];
            if ( v239[7] < (unsigned __int64)(v240 + 1) )
            {
              v283 = v239[5];
              p_src = v237;
              v239[5] = qvector_reserve((__int64)(v239 + 5), v283, v240 + 1, 8);
              v237 = p_src;
              v240 = v239[6];
            }
            *(_QWORD *)(v239[5] + 8 * v240) = v235;
            ++v239[6];
            sub_394550(
              (_QWORD *)v235,
              (__int64)v237,
              202,
              v92,
              0.0,
              *(double *)a8.m128_u64,
              (__m128i)a9,
              *(double *)a10.m128_u64);
            if ( v234 )
            {
              v168 = (*((_DWORD *)v234 + 26))-- == 1;
              if ( v168 )
              {
                sub_258970(v234);
                if ( v234[23] )
                {
                  v245 = v234[24];
                  if ( v245 )
                  {
                    v246 = v234[23];
                    for ( i = 0; i != v245; ++i )
                    {
                      v248 = (__int64 *)(v246 + 24 * i);
                      v249 = *v248;
                      if ( *v248 )
                      {
                        v248[1] = 0;
                        qfree(v249);
                        v246 = v234[23];
                      }
                    }
                  }
                  else
                  {
                    v246 = v234[23];
                  }
                  v234[24] = 0;
                  qfree(v246);
                }
                v250 = v234[20];
                if ( v250 )
                {
                  v234[21] = 0;
                  qfree(v250);
                }
                if ( v234[16] )
                {
                  v251 = v234[17];
                  if ( v251 )
                  {
                    v252 = v234[16];
                    for ( j = 0; j != v251; ++j )
                    {
                      v254 = (__int64 *)(v252 + 32 * j);
                      v255 = *v254;
                      if ( *v254 )
                      {
                        v254[1] = 0;
                        qfree(v255);
                        v252 = v234[16];
                      }
                    }
                  }
                  else
                  {
                    v252 = v234[16];
                  }
                  v234[17] = 0;
                  qfree(v252);
                }
                sub_255050((__int64)(v234 + 2), 0.0);
                j__qfree((__int64)v234);
              }
            }
            *(_DWORD *)v235 |= 1u;
            sub_384070(v235, v298[0], v241, v242, v243, v244);
            sub_33E140(*(_QWORD *)(v292 + 16), 0x64u, v235);
            result = *(_QWORD *)(v235 + 16);
            if ( src )
            {
              s1[0] = *(char **)(v235 + 16);
              *(_QWORD *)v300 = 0;
              qfree((__int64)src);
              result = (__int64)s1[0];
            }
            v256 = v298[0];
            if ( v298[0] )
            {
              v168 = (*((_DWORD *)v298[0] + 26))-- == 1;
              if ( v168 )
              {
                s1[0] = (char *)result;
                sub_258970(v256);
                v257 = s1[0];
                if ( v256[23] )
                {
                  v258 = v256[24];
                  if ( v258 )
                  {
                    v259 = v256[23];
                    v260 = 0;
                    v261 = s1[0];
                    do
                    {
                      v262 = (__int64 *)(v259 + 24 * v260);
                      v263 = *v262;
                      if ( *v262 )
                      {
                        v262[1] = 0;
                        qfree(v263);
                        v259 = v256[23];
                      }
                      ++v260;
                    }
                    while ( v258 != v260 );
                    v257 = v261;
                  }
                  else
                  {
                    v259 = v256[23];
                  }
                  s1[0] = v257;
                  v256[24] = 0;
                  qfree(v259);
                  v257 = s1[0];
                }
                v264 = v256[20];
                if ( v264 )
                {
                  s1[0] = v257;
                  v256[21] = 0;
                  qfree(v264);
                  v257 = s1[0];
                }
                if ( v256[16] )
                {
                  v265 = v256[17];
                  if ( v265 )
                  {
                    v266 = v256[16];
                    v267 = 0;
                    v268 = v257;
                    do
                    {
                      v269 = (__int64 *)(v266 + 32 * v267);
                      v270 = *v269;
                      if ( *v269 )
                      {
                        v269[1] = 0;
                        qfree(v270);
                        v266 = v256[16];
                      }
                      ++v267;
                    }
                    while ( v265 != v267 );
                    v257 = v268;
                  }
                  else
                  {
                    v266 = v256[16];
                  }
                  s1[0] = v257;
                  v256[17] = 0;
                  qfree(v266);
                  v257 = s1[0];
                }
                s1[0] = v257;
                sub_255050((__int64)(v256 + 2), 0.0);
                j__qfree((__int64)v256);
                result = (__int64)s1[0];
              }
            }
            if ( v303 )
            {
              s1[0] = (char *)result;
              *(_QWORD *)&v304[0] = 0;
              qfree(v303);
              return (__int64)s1[0];
            }
            return result;
          }
          sub_140140((__int64 **)s1[0]);
          v99 = v303;
          if ( !v303 )
            return 0;
        }
        else
        {
          sub_3310F0((__int64)p_src, &v302, 0.0);
          sub_6D0A0((__int64)"%a: %s\n", 0.0, (const char *)v302.m128i_i64[1]);
          if ( src )
          {
            *(_QWORD *)v300 = 0;
            qfree((__int64)src);
          }
          v274 = v298[0];
          if ( v298[0] )
          {
            v168 = (*((_DWORD *)v298[0] + 26))-- == 1;
            if ( v168 )
            {
              sub_258970(v274);
              if ( v274[23] )
              {
                v275 = v274[24];
                if ( v275 )
                {
                  v276 = v274[23];
                  for ( k = 0; k != v275; ++k )
                  {
                    v278 = (__int64 *)(v276 + 24 * k);
                    if ( *v278 )
                    {
                      v279 = *v278;
                      v278[1] = 0;
                      qfree(v279);
                      v276 = v274[23];
                    }
                  }
                }
                else
                {
                  v276 = v274[23];
                }
                v274[24] = 0;
                qfree(v276);
              }
              v284 = v274[20];
              if ( v284 )
              {
                v274[21] = 0;
                qfree(v284);
              }
              if ( v274[16] )
              {
                v285 = v274[17];
                if ( v285 )
                {
                  v280 = v274[16];
                  for ( m = 0; m != v285; ++m )
                  {
                    v287 = (__int64 *)(v280 + 32 * m);
                    if ( *v287 )
                    {
                      v288 = *v287;
                      v287[1] = 0;
                      qfree(v288);
                      v280 = v274[16];
                    }
                  }
                }
                else
                {
                  v280 = v274[16];
                }
                v274[17] = 0;
                qfree(v280);
              }
              sub_255050((__int64)(v274 + 2), 0.0);
              j__qfree((__int64)v274);
            }
          }
          v99 = v303;
          if ( !v303 )
            return 0;
        }
        *(_QWORD *)&v304[0] = 0;
        qfree(v99);
        return 0;
      }
      v86 = *(__int64 ***)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v86 + 1;
    goto LABEL_91;
  }
  if ( a2 <= 61 )
  {
    if ( a2 == 7 )
    {
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v125 = *(_QWORD **)(a3 + 8);
        v37 = (_QWORD **)(v125 + 1);
        *(_QWORD *)(a3 + 8) = v125 + 1;
        if ( *v125 == 0xDEC0DE00000004LL )
          goto LABEL_146;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        if ( *(_QWORD *)(v35 + v34) == 0xDEC0DE00000004LL )
        {
          if ( (unsigned int)v36 <= 0x2F )
          {
            v37 = (_QWORD **)(v36 + v35);
            *(_DWORD *)a3 = v34 + 16;
LABEL_40:
            if ( *v37 )
              **v37 = sub_34A920;
            return 14598366;
          }
          v37 = *(_QWORD ***)(a3 + 8);
LABEL_146:
          *(_QWORD *)(a3 + 8) = v37 + 1;
          goto LABEL_40;
        }
      }
    }
    return 0;
  }
  v15 = *(_QWORD *)(v13 + 1008);
  switch ( a2 )
  {
    case '>':
      v65 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v66 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v66 + 1;
      }
      else
      {
        v66 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v65);
        *(_DWORD *)a3 = v65 + 8;
      }
      v45 = *v66;
      v67 = *(_QWORD *)(*(_QWORD *)(v292 + 16) + 1008LL);
      v68 = *(__int64 **)(v67 + 40);
      v43 = *(_QWORD *)(v67 + 48);
      v44 = (__int64)&v68[v43];
      if ( v68 == (__int64 *)v44 )
        goto LABEL_46;
      while ( 1 )
      {
        v43 = *v68;
        if ( *v68 )
        {
          if ( v45 == *(_QWORD *)(v43 + 8) || v45 == *(_QWORD *)(v43 + 16) )
            break;
        }
        if ( (__int64 *)v44 == ++v68 )
        {
LABEL_46:
          sub_3A08D0(v15, v45, v43, v44, a5, a6);
          return 0;
        }
      }
      *(_DWORD *)v43 |= 1u;
      return 0;
    case '@':
      v57 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v58 = (__int64 *)(*(_QWORD *)(a3 + 16) + v57);
        *(_DWORD *)a3 = v57 + 8;
      }
      else
      {
        v58 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v58 + 1;
      }
      v59 = *v58;
      v60 = *(_QWORD *)(v292 + 16);
      v61 = *(_QWORD *)(v60 + 1008);
      v62 = *(__int64 **)(v61 + 40);
      v63 = &v62[*(_QWORD *)(v61 + 48)];
      if ( v62 == v63 )
        return 0;
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          if ( v59 == *(_QWORD *)(v64 + 8) || v59 == *(_QWORD *)(v64 + 16) )
            break;
        }
        if ( v63 == ++v62 )
          return 0;
      }
      sub_33E140(v60, 0x67u, *v62, a4, *(double *)a7.m128_u64);
      v165 = *(_QWORD *)(v64 + 8);
      if ( v165 == v59 )
      {
        a7.m128_u64[0] = 0;
        *(_OWORD *)(v64 + 8) = 0;
      }
      else if ( v165 )
      {
        return 0;
      }
      sub_38F320(v64, *(double *)a7.m128_u64);
      sub_389D00(v64);
      clear_tinfo_t();
      v166 = *(_QWORD *)(v64 + 136);
      if ( v166 )
      {
        *(_QWORD *)(v64 + 144) = 0;
        qfree(v166);
      }
      v167 = *(_QWORD *)(v64 + 32);
      if ( v167 )
      {
        v168 = (*(_DWORD *)(v167 + 104))-- == 1;
        if ( v168 )
        {
          v169 = *(_QWORD **)(v64 + 32);
          if ( v169 )
          {
            sub_258970(*(__int64 **)(v64 + 32));
            if ( v169[23] )
            {
              v170 = v169[24];
              if ( v170 )
              {
                v171 = v169[23];
                for ( n = 0; n != v170; ++n )
                {
                  v173 = (__int64 *)(v171 + 24 * n);
                  v174 = *v173;
                  if ( *v173 )
                  {
                    v173[1] = 0;
                    qfree(v174);
                    v171 = v169[23];
                  }
                }
              }
              else
              {
                v171 = v169[23];
              }
              v169[24] = 0;
              qfree(v171);
            }
            v175 = v169[20];
            if ( v175 )
            {
              v169[21] = 0;
              qfree(v175);
            }
            if ( v169[16] )
            {
              v176 = v169[17];
              if ( v176 )
              {
                v177 = v169[16];
                for ( ii = 0; ii != v176; ++ii )
                {
                  v179 = (__int64 *)(v177 + 32 * ii);
                  v180 = *v179;
                  if ( *v179 )
                  {
                    v179[1] = 0;
                    qfree(v180);
                    v177 = v169[16];
                  }
                }
              }
              else
              {
                v177 = v169[16];
              }
              v169[17] = 0;
              qfree(v177);
            }
            sub_255050((__int64)(v169 + 2), *(double *)a7.m128_u64);
            j__qfree((__int64)v169);
          }
        }
      }
      operator delete((void *)v64, 0xA8u);
      return 0;
    case 'I':
      v46 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v122 = *(_QWORD ***)(a3 + 8);
        v123 = (__int64 *)(v122 + 1);
        *(_QWORD *)(a3 + 8) = v122 + 1;
        v49 = (const char **)*v122;
LABEL_140:
        v124 = v123 + 1;
        *(_QWORD *)(a3 + 8) = v123 + 1;
        v50 = *v123;
LABEL_141:
        v52 = (int **)(v124 + 1);
        goto LABEL_142;
      }
      v47 = *(_QWORD *)(a3 + 16);
      v48 = v46 + 8;
      *(_DWORD *)a3 = v48;
      v49 = *(const char ***)(v47 + v46);
      if ( (unsigned int)v48 > 0x2F )
      {
        v123 = *(__int64 **)(a3 + 8);
        goto LABEL_140;
      }
      *(_DWORD *)a3 = v46 + 16;
      v50 = *(_QWORD *)(v47 + v48);
      if ( v46 + 16 > 0x2F )
      {
        v124 = *(_QWORD **)(a3 + 8);
        goto LABEL_141;
      }
      v51 = v46 + 24;
      *(_DWORD *)a3 = v51;
      if ( (unsigned int)v51 <= 0x2F )
      {
        v52 = (int **)(v51 + v47);
        *(_DWORD *)a3 = v46 + 32;
        goto LABEL_52;
      }
      v52 = *(int ***)(a3 + 8);
LABEL_142:
      *(_QWORD *)(a3 + 8) = v52 + 1;
LABEL_52:
      v53 = *(_QWORD *)(*(_QWORD *)(v292 + 16) + 1008LL);
      v54 = *(__int64 **)(v53 + 40);
      v55 = &v54[*(_QWORD *)(v53 + 48)];
      if ( v54 == v55 )
        return 0;
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          if ( *(_QWORD *)(v56 + 8) == v50 || *(_QWORD *)(v56 + 16) == v50 )
            break;
        }
        if ( v55 == ++v54 )
          return 0;
      }
      v143 = *v52;
      v144 = (unsigned int)sub_38B490(*v54, 1);
      result = 0;
      if ( (_BYTE)v144 )
      {
        v146 = (size_t)v49[1];
        v147 = *v143;
        s1[0] = nullptr;
        if ( v146 )
        {
          v223 = (char *)qalloc_or_throw(v146, 1, v144, v145);
          v224 = *v49;
          s1[0] = v223;
          memcpy(v223, v224, v146);
        }
        result = sub_33E140(*(_QWORD *)(v292 + 16), 0x6Cu, v56, v49, v143, *(double *)a7.m128_u64);
        if ( result == 1 )
          goto LABEL_216;
        LOBYTE(p_src) = 0;
        if ( *v143 == v147 )
        {
          v225 = ::s1;
          if ( v49[1] )
            v225 = *v49;
          v226 = ::s1;
          if ( v146 )
            v226 = s1[0];
          LOBYTE(p_src) = strcmp(v226, v225) == 0;
        }
        v302.m128i_i64[0] = v56;
        *(_OWORD *)v300 = 0;
        src = nullptr;
        v302.m128i_i64[1] = v56 + 80;
        LODWORD(v303) = 0;
        memset(v304, 0, sizeof(v304));
        v305 = nullptr;
        v306 = 0;
        if ( (unsigned __int8)sub_391C50(&v302, (__int64 *)&src, (__m128)0LL, v148, v149, v150, v151, a8) != 1
          && (_BYTE)p_src )
        {
LABEL_207:
          v302.m128i_i64[0] = 0;
          if ( v305 )
          {
            *(_QWORD *)&v306 = 0;
            qfree((__int64)v305);
          }
          if ( *((_QWORD *)&v304[1] + 1) )
          {
            *(_QWORD *)&v304[2] = 0;
            qfree(*((__int64 *)&v304[1] + 1));
          }
          if ( *(_QWORD *)&v304[0] )
          {
            *((_QWORD *)&v304[0] + 1) = 0;
            qfree(*(__int64 *)&v304[0]);
          }
          if ( src )
          {
            *(_QWORD *)v300 = 0;
            qfree((__int64)src);
          }
          result = 0;
LABEL_216:
          v164 = s1[0];
          if ( s1[0] )
          {
            s1[0] = (char *)result;
            qfree((__int64)v164);
            return (__int64)s1[0];
          }
          return result;
        }
        v152 = (unsigned __int64)v49[1];
        if ( v152 > 1 )
        {
          v153 = (__int64)*v49;
          if ( (*v49)[v152 - 2] != 10 )
          {
            if ( (unsigned __int64)v49[2] < v152 + 1 )
            {
              v273 = qvector_reserve((__int64)v49, v153, v152 + 1, 1);
              *v49 = (const char *)v273;
              v153 = v273;
            }
            v49[1] = (const char *)(v152 + 1);
            *(_BYTE *)(v153 + v152 - 1) = 10;
            (*v49)[v152] = 0;
          }
        }
        v154 = *(_QWORD *)v300;
        if ( *(_QWORD *)v300 )
        {
          v155 = *(_QWORD *)v300 - 1LL;
          if ( *(_QWORD *)v300 != 1 )
          {
            v156 = v49[1];
            v157 = (__int64 *)(*(_QWORD *)v300 - 1LL);
            if ( v156 )
            {
              --v156;
              v157 = (__int64 *)&v156[v155];
              v154 = (unsigned __int64)&v156[*(_QWORD *)v300];
            }
            v158 = (__int64)*v49;
            if ( (unsigned __int64)v49[2] < v154 )
            {
              p_src = v157;
              v281 = qvector_reserve((__int64)v49, v158, v154, 1);
              *v49 = (const char *)v281;
              v157 = p_src;
              v158 = v281;
            }
            v49[1] = (const char *)v154;
            *((_BYTE *)v157 + v158) = 0;
            memcpy((void *)&(*v49)[(_QWORD)v156], src, v155);
          }
        }
        *v143 += v303;
        v159 = v49[1];
        v160 = (__int64)*v49;
        if ( v159 )
        {
          if ( v159 != &byte_1 && v159[v160 - 2] == 10 )
          {
LABEL_311:
            v162 = (__int64)(v159 + 1);
            v163 = (unsigned __int64)(v159 + 2);
            --v159;
LABEL_204:
            if ( (unsigned __int64)v49[2] < v163 )
            {
              v229 = qvector_reserve((__int64)v49, v160, v163, 1);
              *v49 = (const char *)v229;
              v160 = v229;
            }
            v49[1] = (const char *)v163;
            *(_BYTE *)(v160 + v162) = 0;
            *(_WORD *)&(*v49)[(_QWORD)v159] = 32257;
            ++*v143;
            goto LABEL_207;
          }
          v161 = (unsigned __int64)(v159-- + 1);
        }
        else
        {
          v161 = 2;
        }
        if ( (unsigned __int64)v49[2] < v161 )
        {
          v230 = qvector_reserve((__int64)v49, v160, v161, 1);
          *v49 = (const char *)v230;
          v160 = v230;
        }
        v49[1] = (const char *)v161;
        v162 = 2;
        v163 = 3;
        v159[v160] = 10;
        v159[(_QWORD)*v49 + 1] = 0;
        v159 = v49[1];
        v160 = (__int64)*v49;
        if ( !v159 )
          goto LABEL_204;
        goto LABEL_311;
      }
      return result;
    case 'L':
      v38 = *(_DWORD *)(v13 + 1416);
      if ( (v38 & 0x200) != 0 )
        return 0;
      BYTE1(v38) |= 2u;
      *(_DWORD *)(v13 + 1416) = v38;
      sub_3410F0(a7, *(double *)a8.m128_u64, a9, a10, a11, a12, a13);
      callui(61, a2, &callui, v39, v40, v41, s1[0], s1[1], v290, p_src);
      if ( !v42 )
        return 0;
      v45 = v42;
      goto LABEL_46;
    case 'P':
      v77 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v78 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v78 + 1;
      }
      else
      {
        v78 = (const char **)(*(_QWORD *)(a3 + 16) + v77);
        *(_DWORD *)a3 = v77 + 8;
      }
      v79 = *v78;
      if ( !*v78 )
        return 0;
      v80 = sub_389C40(*(_QWORD *)(v292 + 16), a2);
      v81 = v80;
      if ( !v80 )
        return 0;
      sub_38B490(v80, 0);
      if ( !strcmp(v79, "JumpExplored") )
      {
        callui(100, "SelectAll", 0, 0, &callui, v82, s1[0], s1[1], v290, p_src);
        return (unsigned __int8)result;
      }
      if ( strcmp(v79, "JumpEnter") )
        return 0;
      sub_39A7C0(v81, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, (__m128i)a9, *(double *)a10.m128_u64);
      return 1;
    case 'Q':
      v69 = *(_DWORD *)(v13 + 1416);
      if ( (v69 & 0x10) != 0 )
      {
        v70 = v292;
        *(_DWORD *)(v13 + 1416) = v69 & 0xFFFFFFEF;
        sub_32B210(*(_QWORD *)(v70 + 16), *(double *)a7.m128_u64);
        sub_329DA0(*(__m128i **)(v70 + 16), 0);
        sub_140C90(*(_QWORD *)(v70 + 16), 1);
        sub_3E3130(*(_QWORD *)(v70 + 16), *(double *)a7.m128_u64, a8, *(double *)a9.m128_u64);
        if ( sub_389C40(*(_QWORD *)(v70 + 16), 1) )
        {
          v74 = *(_QWORD *)(*(_QWORD *)(v70 + 16) + 1008LL);
          v75 = *(__int64 **)(v74 + 40);
          for ( jj = &v75[*(_QWORD *)(v74 + 48)]; jj != v75; ++v75 )
          {
            if ( *v75 )
              sub_395A90(
                *v75,
                0,
                *(double *)a7.m128_u64,
                v71,
                v72,
                v73,
                *(double *)a8.m128_u64,
                (__m128i)a9,
                *(double *)a10.m128_u64);
          }
        }
      }
      return 0;
    default:
      return 0;
  }
}

