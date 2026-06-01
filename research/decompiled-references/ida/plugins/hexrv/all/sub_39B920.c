__int64 __fastcall sub_39B920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rdi
  __int64 v16; // rbx
  __int64 result; // rax
  unsigned int v18; // eax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 *v30; // rsi
  __int64 v31; // rdx
  unsigned __int64 *v32; // rax
  __int64 v33; // r14
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *(__fastcall ***v38)(__int64, __int64, __int64, __int64, __int64, __int64, __m128i, __m128, char); // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  int **v53; // rsi
  __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 *v56; // rcx
  __int64 v57; // rbx
  unsigned int v58; // eax
  __int64 *v59; // rdx
  __int64 v60; // rbp
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // rdx
  __int64 v65; // rbx
  unsigned int v66; // eax
  unsigned __int64 *v67; // rdx
  __int64 v68; // rdx
  __int64 *v69; // rax
  int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 *v76; // rbx
  __int64 *jj; // rbp
  unsigned int v78; // eax
  const char **v79; // rdx
  const char *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // r9
  unsigned int v84; // r14d
  __int64 v85; // rbp
  unsigned int v86; // r15d
  __int64 **v87; // rbp
  __int64 *v88; // rbp
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdx
  _BYTE *v92; // rcx
  __int64 v93; // r15
  void *func; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // r14
  __int64 v99; // r12
  __int64 v100; // rbp
  unsigned int v101; // edx
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 *v104; // r15
  __int64 v105; // rcx
  _QWORD *v106; // rax
  __int64 *v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // r8
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 *v113; // rax
  __int64 *v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 *v117; // rax
  __int64 *v118; // rdx
  __int64 v119; // rdi
  _QWORD **v120; // rax
  _QWORD *v121; // rdx
  const char **v122; // rax
  __int64 *v123; // rdx
  __int64 *v124; // rax
  _QWORD *v125; // rsi
  _QWORD *v126; // rax
  __int64 *v127; // rax
  _QWORD **v128; // r14
  _DWORD **v129; // r12
  __int64 *v130; // rax
  __int64 *v131; // r9
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned int v134; // eax
  __int64 **v135; // rcx
  __int64 *v136; // rbp
  __int64 v137; // rsi
  __int64 v138; // r12
  __int64 v139; // rdi
  _QWORD *v140; // rax
  __int64 v141; // rdx
  _BYTE *v142; // rcx
  _QWORD *v143; // rbx
  int *v144; // r12
  char v145; // dl
  size_t v146; // r14
  int v147; // r15d
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __m128 v152; // xmm4
  __m128 v153; // xmm5
  unsigned __int64 v154; // rbx
  __int64 v155; // rsi
  unsigned __int64 v156; // rbx
  size_t v157; // r15
  __int64 v158; // r14
  __int64 *v159; // r8
  __int64 v160; // rsi
  __int64 v161; // r14
  const char *v162; // rsi
  unsigned __int64 v163; // rbx
  __int64 v164; // r15
  unsigned __int64 v165; // rbx
  __int64 v166; // rax
  __int64 v167; // rax
  bool v168; // zf
  _QWORD *v169; // rbp
  __int64 v170; // r13
  __int64 v171; // rdi
  __int64 n; // r12
  _QWORD *v173; // rdx
  __int64 v174; // r13
  __int64 v175; // rdi
  __int64 ii; // r12
  _QWORD *v177; // rax
  int *v178; // r14
  __int64 v179; // rax
  __m128i v180; // xmm2
  char *v181; // rbx
  __int64 *v182; // rbp
  __int64 v183; // r12
  int v184; // eax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rsi
  __int64 v188; // r12
  int v189; // eax
  __int64 v190; // rax
  __int64 v191; // rsi
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  unsigned __int64 v195; // r12
  __int64 v196; // rbp
  char *v197; // rcx
  __int64 v198; // rax
  char *v199; // rcx
  char *v200; // r8
  char v201; // bp
  char merge_state; // al
  char *v203; // r12
  __int64 v204; // rbp
  _DWORD *v205; // rdi
  __int64 v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // r9
  unsigned __int64 v209; // rbp
  bool v210; // r12
  char *v211; // r14
  unsigned int v212; // eax
  char *v214; // r14
  unsigned int v215; // eax
  unsigned int v216; // eax
  unsigned __int64 v217; // rbp
  void *v218; // r12
  char *v219; // rax
  const char *v220; // rsi
  const char *v221; // rsi
  const char *v222; // rdi
  __int64 v223; // rbx
  _WORD *v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rax
  int v227; // eax
  int v228; // ebp
  __int64 v229; // rax
  __int64 *v230; // r14
  __int64 v231; // r12
  __int64 v232; // rax
  __int64 *v233; // r8
  __int64 v234; // rax
  _QWORD *v235; // rbx
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rbp
  __int64 v242; // rdi
  __int64 i; // rbx
  _QWORD *v244; // rdx
  __int64 v245; // rbp
  __int64 v246; // rdi
  __int64 j; // rbx
  _QWORD *v248; // rax
  __int64 *v249; // rbx
  char *v250; // rax
  __int64 v251; // r12
  __int64 v252; // rdi
  __int64 v253; // rbp
  char *v254; // r13
  _QWORD *v255; // rcx
  __int64 v256; // r12
  __int64 v257; // rdi
  __int64 v258; // rbp
  char *v259; // r13
  _QWORD *v260; // rdx
  __int64 v261; // rax
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 *v264; // rbx
  __int64 v265; // r12
  __int64 v266; // rdi
  __int64 k; // rbp
  _QWORD *v268; // rdx
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // r12
  __int64 v272; // rdi
  __int64 m; // rbp
  _QWORD *v274; // rax
  char *s1[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v276; // [rsp+10h] [rbp-128h]
  __int64 *p_src; // [rsp+18h] [rbp-120h]
  __int64 v278; // [rsp+20h] [rbp-118h]
  __m128i *v279; // [rsp+28h] [rbp-110h]
  char *v280; // [rsp+30h] [rbp-108h]
  __int64 *v281; // [rsp+38h] [rbp-100h]
  __m128i *v282; // [rsp+40h] [rbp-F8h]
  _QWORD *v283; // [rsp+48h] [rbp-F0h]
  __int64 *v284; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v285; // [rsp+58h] [rbp-E0h]
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v287[24]; // [rsp+68h] [rbp-D0h] BYREF
  int v288; // [rsp+80h] [rbp-B8h]
  int v289; // [rsp+88h] [rbp-B0h]
  __m128i v290; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v291; // [rsp+A0h] [rbp-98h]
  _OWORD v292[3]; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v293; // [rsp+D8h] [rbp-60h]
  __int128 v294; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v295; // [rsp+F8h] [rbp-40h]

  v278 = a1;
  v14 = *(_QWORD *)(a1 + 16);
  v295 = __readfsqword(0x28u);
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
            v18 = *(_DWORD *)a3;
            if ( *(_DWORD *)a3 > 0x2Fu )
            {
              v19 = *(__int64 **)(a3 + 8);
              *(_QWORD *)(a3 + 8) = v19 + 1;
            }
            else
            {
              v19 = (__int64 *)(*(_QWORD *)(a3 + 16) + v18);
              *(_DWORD *)a3 = v18 + 8;
            }
            v20 = *v19;
            v21 = *(_QWORD *)(*(_QWORD *)(v278 + 16) + 1008LL);
            v22 = *(__int64 **)(v21 + 40);
            v23 = &v22[*(_QWORD *)(v21 + 48)];
            if ( v22 != v23 )
            {
              while ( 1 )
              {
                v24 = *v22;
                if ( *v22 )
                {
                  if ( v20 == *(_QWORD *)(v24 + 8) || v20 == *(_QWORD *)(v24 + 16) )
                    break;
                }
                if ( v23 == ++v22 )
                  return 0;
              }
              if ( *(_QWORD *)(v24 + 32) )
              {
                v134 = *(_DWORD *)a3;
                if ( *(_DWORD *)a3 > 0x2Fu )
                {
                  v135 = *(__int64 ***)(a3 + 8);
                  *(_QWORD *)(a3 + 8) = v135 + 1;
                }
                else
                {
                  v135 = (__int64 **)(*(_QWORD *)(a3 + 16) + v134);
                  *(_DWORD *)a3 = v134 + 8;
                }
                v136 = *v135;
                v137 = (*v135)[1];
                v138 = **(_QWORD **)(v24 + 32);
                v139 = **v135;
                if ( v137 )
                {
                  v140 = (_QWORD *)**v135;
                  v141 = 0;
                  while ( 1 )
                  {
                    if ( v140[1] )
                    {
                      v142 = (_BYTE *)*v140;
                      if ( *(_BYTE *)*v140 == 101 && v142[1] == 97 && !v142[2] )
                        break;
                    }
                    ++v141;
                    v140 += 5;
                    if ( v137 == v141 )
                      goto LABEL_317;
                  }
                  v143 = v140 + 3;
                }
                else
                {
LABEL_317:
                  if ( v136[2] < (unsigned __int64)(v137 + 1) )
                  {
                    v262 = qvector_reserve();
                    *v136 = v262;
                    v137 = v136[1];
                    v139 = v262;
                  }
                  v223 = v139 + 40 * v137;
                  *(_QWORD *)v223 = 0;
                  *(_OWORD *)(v223 + 8) = 0;
                  *(_DWORD *)(v223 + 24) = 0;
                  *(_QWORD *)(v223 + 32) = 0;
                  ++v136[1];
                  v224 = *(_WORD **)v223;
                  if ( *(_QWORD *)(v223 + 16) <= 2u )
                  {
                    v261 = qvector_reserve();
                    *(_QWORD *)v223 = v261;
                    v224 = (_WORD *)v261;
                  }
                  *(_QWORD *)(v223 + 8) = 3;
                  v143 = (_QWORD *)(v223 + 24);
                  *v224 = 24933;
                  *(_BYTE *)(*(v143 - 3) + 2LL) = 0;
                }
                if ( *(_DWORD *)v143 )
                  jvalue_t_clear();
                *(_DWORD *)v143 = 1;
                v143[1] = v138;
              }
            }
          }
          return 0;
        }
        v101 = *(_DWORD *)a3;
        if ( v101 > 0x2F )
        {
          v120 = *(_QWORD ***)(a3 + 8);
          v121 = v120 + 1;
          *(_QWORD *)(a3 + 8) = v120 + 1;
          v104 = *v120;
        }
        else
        {
          v102 = *(_QWORD *)(a3 + 16);
          v103 = v101 + 8;
          *(_DWORD *)a3 = v103;
          v104 = *(__int64 **)(v102 + v101);
          if ( (unsigned int)v103 <= 0x2F )
          {
            v105 = v101 + 16;
            *(_DWORD *)a3 = v105;
            v282 = *(__m128i **)(v102 + v103);
            if ( (unsigned int)v105 <= 0x2F )
            {
              v106 = (_QWORD *)(v105 + v102);
              *(_DWORD *)a3 = v101 + 24;
              goto LABEL_117;
            }
            v106 = *(_QWORD **)(a3 + 8);
LABEL_135:
            *(_QWORD *)(a3 + 8) = v106 + 1;
LABEL_117:
            v283 = (_QWORD *)*v106;
            v107 = (__int64 *)v283[4];
            if ( !v107 )
            {
LABEL_161:
              v110 = *(_QWORD *)(v278 + 16);
              goto LABEL_126;
            }
            v108 = *v107;
            v109 = *v107 + 16 * v107[1];
            v110 = *(_QWORD *)(v278 + 16);
            if ( v109 == *v107 )
            {
LABEL_126:
              if ( !v282 )
                return 0;
              v116 = *(_QWORD *)(v110 + 1008);
              v117 = *(__int64 **)(v116 + 40);
              v118 = &v117[*(_QWORD *)(v116 + 48)];
              if ( v117 == v118 )
                return 0;
              while ( 1 )
              {
                v119 = *v117;
                if ( *v117 )
                {
                  if ( *(__m128i **)(v119 + 8) == v282 || *(__m128i **)(v119 + 16) == v282 )
                    break;
                }
                if ( v118 == ++v117 )
                  return 0;
              }
              s1[0] = *(char **)(v119 + 44);
              v290.m128i_i64[0] = _mm_shuffle_epi32((__m128i)(unsigned __int64)s1[0], 225).m128i_u64[0];
              v178 = sub_389FE0((_QWORD *)v119, &v290);
              if ( !v178 )
                return 0;
              v179 = v283[1];
              v282 = (__m128i *)(v179 + 24LL * v283[2]);
              if ( v282 == (__m128i *)v179 )
                return 0;
              v180 = _mm_loadl_epi64((const __m128i *)s1);
              v279 = (__m128i *)v179;
              LODWORD(p_src) = _mm_cvtsi128_si32(v180);
              LODWORD(v281) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v180, 229));
              while ( 1 )
              {
                v181 = (char *)v279->m128i_i64[0];
                s1[0] = (char *)(v279->m128i_i64[0] + 8 * v279->m128i_i64[1]);
                if ( s1[0] != v181 )
                  break;
LABEL_257:
                v279 = (__m128i *)((char *)v279 + 24);
                if ( v282 == v279 )
                  return 0;
              }
              while ( 1 )
              {
                v182 = *(__int64 **)v181;
                v183 = **(_QWORD **)v181;
                v184 = *(_DWORD *)(v183 + 12);
                if ( v184 == (_DWORD)p_src )
                {
                  v185 = operator new(0x18u);
                  *(_QWORD *)v185 = v182;
                  *(_DWORD *)(v185 + 20) = 1;
                  *(_QWORD *)(v185 + 8) = 0x5400000001LL;
                  v280 = (char *)v185;
                  *(_DWORD *)(v185 + 16) = (_DWORD)v281;
                  v186 = v104[1];
                  v187 = *v104;
                  if ( v104[2] < (unsigned __int64)(v186 + 1) )
                  {
                    v193 = qvector_reserve();
                    *v104 = v193;
                    v187 = v193;
                    v186 = v104[1];
                  }
                  *(_QWORD *)(v187 + 8 * v186) = v280;
                  ++v104[1];
                  if ( v178[1] == *(_DWORD *)(v183 + 12) )
                    goto LABEL_254;
LABEL_249:
                  v181 += 8;
                  if ( s1[0] == v181 )
                    goto LABEL_257;
                }
                else
                {
                  if ( v178[1] != v184 )
                    goto LABEL_249;
LABEL_254:
                  v188 = operator new(0x18u);
                  v189 = *v178;
                  *(_QWORD *)v188 = v182;
                  *(_QWORD *)(v188 + 8) = 0x5400000001LL;
                  *(_DWORD *)(v188 + 16) = v189;
                  *(_DWORD *)(v188 + 20) = 1;
                  v190 = v104[1];
                  v191 = *v104;
                  if ( v104[2] < (unsigned __int64)(v190 + 1) )
                  {
                    v192 = qvector_reserve();
                    *v104 = v192;
                    v191 = v192;
                    v190 = v104[1];
                  }
                  *(_QWORD *)(v191 + 8 * v190) = v188;
                  v181 += 8;
                  ++v104[1];
                  if ( s1[0] == v181 )
                    goto LABEL_257;
                }
              }
            }
            while ( 1 )
            {
              if ( !*(_BYTE *)v108 )
              {
                v111 = *(_QWORD *)(v110 + 1008);
                v112 = *(_QWORD *)(v108 + 8);
                v113 = *(__int64 **)(v111 + 40);
                v114 = &v113[*(_QWORD *)(v111 + 48)];
                if ( v113 != v114 )
                  break;
              }
LABEL_125:
              v108 += 16;
              if ( v109 == v108 )
                goto LABEL_126;
            }
            while ( 1 )
            {
              v115 = *v113;
              if ( *v113 )
              {
                if ( v112 == *(_QWORD *)(v115 + 8) || v112 == *(_QWORD *)(v115 + 16) )
                  break;
              }
              if ( v114 == ++v113 )
                goto LABEL_125;
            }
            LODWORD(p_src) = callui(144, v282, &callui, v114, v110, a6, s1[0], s1[1], v276, p_src);
            src = nullptr;
            v288 = -1;
            memset(v287, 0, sizeof(v287));
            if ( (_DWORD)p_src == 46 )
            {
              v203 = (char *)v283[1];
              v280 = &v203[24 * v283[2]];
              if ( v203 != v280 )
              {
LABEL_269:
                s1[0] = v203;
                v279 = &v290;
                while ( 1 )
                {
                  v204 = *(_QWORD *)s1[0] + 8LL * *((_QWORD *)s1[0] + 1);
                  v128 = *(_QWORD ***)s1[0];
                  if ( v204 == *(_QWORD *)s1[0] )
                    goto LABEL_158;
                  while ( 1 )
                  {
                    v129 = (_DWORD **)*v128;
                    v205 = (_DWORD *)**v128;
                    if ( (_DWORD)p_src != 46 )
                    {
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v205 + 128LL))(v205);
                      if ( *(_QWORD *)v287 )
                        goto LABEL_275;
                      while ( 1 )
                      {
                        do
                        {
                          if ( (_QWORD **)v204 == ++v128 )
                            goto LABEL_158;
                          v129 = (_DWORD **)*v128;
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)**v128 + 128LL))(**v128);
                        }
                        while ( !*(_QWORD *)v287 );
LABEL_275:
                        if ( rangeset_t_find_range() )
                          goto LABEL_155;
                      }
                    }
                    if ( v205[3] != *(_DWORD *)(v115 + 44) )
                      break;
LABEL_155:
                    v130 = (__int64 *)operator new(0x18u);
                    *v130 = (__int64)v129;
                    v131 = v130;
                    v290.m128i_i64[0] = (__int64)v130;
                    v130[1] = 0x5200000000LL;
                    v130[2] = -1;
                    v132 = v104[1];
                    v133 = *v104;
                    if ( v104[2] < (unsigned __int64)(v132 + 1) )
                    {
                      v281 = v131;
                      v206 = qvector_reserve();
                      *v104 = v206;
                      v133 = v206;
                      v131 = v281;
                      v132 = v104[1];
                    }
                    ++v128;
                    *(_QWORD *)(v133 + 8 * v132) = v131;
                    ++v104[1];
                    if ( (_QWORD **)v204 == v128 )
                      goto LABEL_158;
                  }
                  while ( (_QWORD **)v204 != ++v128 )
                  {
                    v129 = (_DWORD **)*v128;
                    if ( *(_DWORD *)(**v128 + 12LL) == *(_DWORD *)(v115 + 44) )
                      goto LABEL_155;
                  }
LABEL_158:
                  s1[0] += 24;
                  if ( v280 == s1[0] )
                    goto LABEL_159;
                }
              }
              goto LABEL_161;
            }
            v195 = *(int *)(v115 + 44);
            v196 = *(_QWORD *)(v115 + 32);
            v197 = (char *)sub_387440(v196, *(unsigned int *)(v115 + 44), v194);
            if ( !v197 )
            {
              if ( v195 >= *(_QWORD *)(v196 + 136)
                || (v290.m128i_i64[0] = (__int64)off_4B9510,
                    v290.m128i_i64[1] = 0,
                    sub_385270(v196, *(char **)(32 * v195 + *(_QWORD *)(v196 + 128)), 0, (__int64)&v290, 0.0),
                    (v197 = (char *)v290.m128i_i64[1]) == nullptr) )
              {
                *(_QWORD *)&v287[16] = 0;
                v200 = (char *)sub_253420(v196);
                v199 = nullptr;
LABEL_281:
                v207 = *(_QWORD **)v200;
                if ( *(_QWORD *)v200 )
                {
                  v208 = 24;
                  v209 = *v207 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( !v209 )
                    goto LABEL_307;
                  if ( (*(_BYTE *)(*v207 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
                  {
                    v210 = v199 == &byte_1;
                    LOBYTE(s1[0]) = v199 == nullptr;
                    while ( 1 )
                    {
                      v211 = *(char **)(v209 + 24);
                      v208 = v209 + 24;
                      if ( v211 == v199 )
                      {
LABEL_306:
                        if ( *(_QWORD *)v200 != v209 )
                        {
LABEL_307:
                          v217 = *(_QWORD *)(v208 + 16);
                          v218 = nullptr;
                          if ( v217 )
                          {
                            s1[0] = (char *)v208;
                            v218 = (void *)qalloc_or_throw();
                            memcpy(v218, *((const void **)s1[0] + 1), 16 * v217);
                          }
                          src = v218;
                          *(_QWORD *)&v287[16] = 0;
                          *(__m128i *)v287 = _mm_unpacklo_epi64((__m128i)v217, (__m128i)v217);
                        }
                        goto LABEL_268;
                      }
                      if ( !v211 || v210 )
                        break;
                      v281 = (__int64 *)(v209 + 24);
                      if ( v211 != &byte_1 && !LOBYTE(s1[0]) )
                      {
                        v280 = v200;
                        v279 = (__m128i *)v199;
                        v212 = sub_254AA0((__int64)v199, (__int64)v211);
                        v199 = (char *)v279;
                        v200 = v280;
                        v208 = (__int64)v281;
                        if ( !(v212 ? v212 >> 31 : v279->m128i_i64[0] < *(_QWORD *)v211) )
                        {
                          v214 = (char *)*v281;
                          if ( (__m128i *)*v281 == v279 || v214 == &byte_1 )
                            goto LABEL_306;
                          if ( v214 )
                          {
                            v215 = sub_254AA0(*v281, (__int64)v279);
                            v199 = (char *)v279;
                            v200 = v280;
                            v208 = (__int64)v281;
                            if ( v215 )
                              v216 = v215 >> 31;
                            else
                              LOBYTE(v216) = *(_QWORD *)v214 < v279->m128i_i64[0];
                            if ( !(_BYTE)v216 )
                              goto LABEL_306;
                          }
                          goto LABEL_374;
                        }
                      }
                      v209 = *(_QWORD *)(v209 + 8);
LABEL_294:
                      if ( (*(_BYTE *)v209 & 2) != 0 )
                        goto LABEL_268;
                    }
                    if ( v211 == &byte_1 || LOBYTE(s1[0]) )
                      goto LABEL_306;
LABEL_374:
                    v209 = *(_QWORD *)(v209 + 16);
                    goto LABEL_294;
                  }
                }
LABEL_268:
                v203 = (char *)v283[1];
                v280 = &v203[24 * v283[2]];
                if ( v280 != v203 )
                  goto LABEL_269;
LABEL_159:
                if ( src )
                {
                  *(_QWORD *)v287 = 0;
                  qfree();
                }
                goto LABEL_161;
              }
              if ( *(int *)(v290.m128i_i64[1] + 8) <= 69 )
                v197 = (char *)sub_2527F0(v196, v290.m128i_i64[1]);
            }
            s1[0] = v197;
            *(_QWORD *)&v287[16] = 0;
            v198 = sub_253420(v196);
            v199 = s1[0];
            v200 = (char *)v198;
            if ( s1[0] > &byte_1 )
            {
              v279 = (__m128i *)v198;
              v290.m128i_i64[0] = *(_QWORD *)s1[0];
              v290.m128i_i32[2] = *((_DWORD *)s1[0] + 2);
              v201 = sub_2532A0(v196, (unsigned __int64 *)&v290);
              merge_state = get_merge_state();
              v199 = s1[0];
              v200 = (char *)v279;
              if ( (merge_state & 3) == 0 && (v201 & 1) != 0 )
              {
                v290.m128i_i32[2] = 0;
                v291 = 0;
                v290.m128i_i64[0] = (__int64)&off_4B9530;
                *((_QWORD *)&v292[2] + 1) = &src;
                v293 = (__int64)v279;
                memset(v292, 0, 40);
                sub_250E80(v290.m128i_i64, (__int64)s1[0], 0);
                v290.m128i_i64[0] = (__int64)off_4AE778;
                if ( *(_QWORD *)&v292[1] )
                {
                  *((_QWORD *)&v292[1] + 1) = 0;
                  qfree();
                }
                if ( v291 )
                {
                  *(_QWORD *)&v292[0] = 0;
                  qfree();
                }
                goto LABEL_268;
              }
            }
            goto LABEL_281;
          }
          v121 = *(_QWORD **)(a3 + 8);
        }
        v106 = v121 + 1;
        *(_QWORD *)(a3 + 8) = v121 + 1;
        v282 = (__m128i *)*v121;
        goto LABEL_135;
      }
      if ( a2 == 136 )
      {
        sub_3BD020(v14, 0);
        return 0;
      }
      if ( a2 != 138 )
        return 0;
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v27 = *(_QWORD *)(a3 + 8);
        v127 = (__int64 *)(v27 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 8;
        v28 = *(_QWORD *)v27;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16);
        a4 = (unsigned __int64 *)(v25 + 8);
        v27 = v25;
        *(_DWORD *)a3 = (_DWORD)a4;
        v28 = *(_QWORD *)(v26 + v25);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v27 = v25 + 16;
          *(_DWORD *)a3 = v27;
          v29 = *(unsigned __int64 *)((char *)a4 + v26);
          if ( (unsigned int)v27 <= 0x2F )
          {
            v30 = (__int64 *)(v27 + v26);
            *(_DWORD *)a3 = v25 + 24;
LABEL_25:
            if ( !v28
              || (v31 = *(_QWORD *)(*(_QWORD *)(v278 + 16) + 1008LL),
                  v32 = *(unsigned __int64 **)(v31 + 40),
                  v27 = *(_QWORD *)(v31 + 48),
                  a4 = &v32[v27],
                  v32 == a4) )
            {
LABEL_31:
              v33 = *v30;
              v34 = callui(144, v28, v27, a4, a5, a6, s1[0], s1[1], v276, p_src);
              if ( v34 == 10 || v34 == 58 && *(_BYTE *)(*(_QWORD *)(v33 + 208) + 31LL) != 12 )
                callui(131, v28, v29, "hx:JumpGlobalXref", "Compact types...", 0, s1[0], s1[1], v276, p_src);
            }
            else
            {
              while ( 1 )
              {
                v27 = *v32;
                if ( *v32 )
                {
                  if ( *(_QWORD *)(v27 + 8) == v28 || *(_QWORD *)(v27 + 16) == v28 )
                    break;
                }
                if ( a4 == ++v32 )
                  goto LABEL_31;
              }
              if ( *(_QWORD *)(v27 + 8) == v28 )
                sub_3BBD50(
                  v28,
                  v29,
                  v27,
                  (_DWORD)a4,
                  a5,
                  a6,
                  (__int64)s1[0],
                  (__int64)s1[1],
                  v276,
                  (_DWORD)p_src,
                  v278,
                  (_DWORD)v279,
                  (_DWORD)v280,
                  (_DWORD)v281,
                  (_DWORD)v282,
                  (char)v283,
                  (_DWORD)v284,
                  (_DWORD)v285,
                  (_DWORD)src,
                  *(_DWORD *)v287,
                  *(_DWORD *)&v287[8],
                  *(_DWORD *)&v287[16],
                  v288,
                  v289,
                  v290.m128i_i32[0],
                  v290.m128i_i32[2],
                  v291,
                  v292[0],
                  DWORD2(v292[0]),
                  v292[1],
                  DWORD2(v292[1]),
                  v292[2],
                  DWORD2(v292[2]),
                  v293,
                  v294);
            }
            return 0;
          }
          v30 = *(__int64 **)(a3 + 8);
LABEL_150:
          *(_QWORD *)(a3 + 8) = v30 + 1;
          goto LABEL_25;
        }
        v127 = *(__int64 **)(a3 + 8);
      }
      v30 = v127 + 1;
      *(_QWORD *)(a3 + 8) = v127 + 1;
      v29 = *v127;
      goto LABEL_150;
    }
    v84 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v122 = *(const char ***)(a3 + 8);
      v87 = (__int64 **)(v122 + 1);
      *(_QWORD *)(a3 + 8) = v122 + 1;
      if ( strncmp(*v122, "Pseudocode-", 0xBu) )
        return 0;
    }
    else
    {
      v85 = *(_QWORD *)(a3 + 16);
      v86 = v84 + 8;
      *(_DWORD *)a3 = v84 + 8;
      if ( strncmp(*(const char **)(v85 + v84), "Pseudocode-", 0xBu) )
        return 0;
      if ( v86 <= 0x2F )
      {
        v87 = (__int64 **)(v86 + v85);
        *(_DWORD *)a3 = v84 + 16;
LABEL_91:
        v88 = *v87;
        v89 = v88[1];
        if ( !v89 )
          return 0;
        v90 = *v88;
        v91 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v90 + 8) )
          {
            v92 = *(_BYTE **)v90;
            if ( **(_BYTE **)v90 == 101 && v92[1] == 97 && !v92[2] )
              break;
          }
          ++v91;
          v90 += 40;
          if ( v89 == v91 )
            return 0;
        }
        if ( *(_DWORD *)(v90 + 24) != 1 )
          return 0;
        v93 = *(_QWORD *)(v90 + 32);
        func = (void *)get_func();
        if ( !func )
          return 0;
        src = func;
        v290.m128i_i64[0] = 0;
        v95 = *(_QWORD *)(v278 + 16);
        v290.m128i_i64[1] = -1;
        v291 = 0;
        memset(v287, 0, sizeof(v287));
        v292[0] = 0;
        v96 = *(_QWORD *)(v95 + 112);
        s1[0] = (char *)&v284;
        p_src = (__int64 *)&src;
        sub_148900(&v284, v96, &src, &v290, 8);
        if ( *(_QWORD *)v287 )
        {
          *(_QWORD *)&v287[8] = 0;
          qfree();
        }
        if ( v284 )
        {
          if ( (get_merge_state() & 3) == 0 )
            goto LABEL_322;
          v98 = v88[1];
          if ( !v98 )
            goto LABEL_322;
          v99 = *v88;
          v100 = 0;
          while ( !*(_QWORD *)(v99 + 8) || strcmp(*(const char **)v99, "merge_kind") )
          {
            ++v100;
            v99 += 40;
            if ( v98 == v100 )
              goto LABEL_322;
          }
          if ( *(_DWORD *)(v99 + 24) != 1 || (unsigned __int8)sub_2B64E0(*(unsigned int *)(v99 + 32)) )
          {
LABEL_322:
            v227 = sub_3820E0(*(_QWORD *)(*(_QWORD *)(v278 + 16) + 1008LL));
            src = nullptr;
            v228 = v227;
            *(_OWORD *)v287 = 0;
            sub_38B4C0(p_src, v227, "Pseudocode-");
            v229 = operator new(0xA8u);
            v230 = v284;
            v231 = v229;
            v232 = *(_QWORD *)v287;
            v285 = v284;
            if ( v284 )
            {
              ++*((_DWORD *)v284 + 26);
              if ( v232 )
                v233 = (__int64 *)src;
              else
                v233 = (__int64 *)::s1;
              v234 = *(_QWORD *)(v278 + 16);
              *(_DWORD *)(v231 + 4) = v228;
              *(_DWORD *)v231 = 0;
              *(_OWORD *)(v231 + 8) = 0;
              *(__m128i *)(v231 + 24) = _mm_unpacklo_epi64(
                                          _mm_loadl_epi64((const __m128i *)(v230 + 1)),
                                          (__m128i)(unsigned __int64)v230);
              ++*((_DWORD *)v230 + 26);
            }
            else
            {
              v270 = v278;
              if ( *(_QWORD *)v287 )
              {
                *(_DWORD *)(v231 + 4) = v228;
                *(_DWORD *)v231 = 0;
                v233 = (__int64 *)src;
              }
              else
              {
                *(_DWORD *)(v231 + 4) = v228;
                *(_DWORD *)v231 = 0;
                v233 = (__int64 *)::s1;
              }
              v234 = *(_QWORD *)(v270 + 16);
              *(_OWORD *)(v231 + 8) = 0;
              *(_OWORD *)(v231 + 24) = 0;
            }
            *(_DWORD *)v231 &= ~2u;
            *(_QWORD *)(v231 + 52) = 0;
            *(_QWORD *)(v231 + 44) = 0xFFFFFFFFLL;
            *(_DWORD *)(v231 + 80) = 0;
            *(_DWORD *)(v231 + 104) = 0;
            *(_QWORD *)(v231 + 128) = v234;
            *(_QWORD *)(v231 + 136) = 0;
            *(_QWORD *)(v231 + 160) = 0;
            *(_OWORD *)(v231 + 144) = 0;
            v235 = *(_QWORD **)(v234 + 1008);
            v236 = v235[6];
            if ( v235[7] < (unsigned __int64)(v236 + 1) )
            {
              p_src = v233;
              v235[5] = qvector_reserve();
              v233 = p_src;
              v236 = v235[6];
            }
            *(_QWORD *)(v235[5] + 8 * v236) = v231;
            ++v235[6];
            sub_38F2D0((_QWORD *)v231, (__int64)v233, 202, v93);
            if ( v230 )
            {
              v168 = (*((_DWORD *)v230 + 26))-- == 1;
              if ( v168 )
              {
                sub_253D70(v230);
                if ( v230[23] )
                {
                  v241 = v230[24];
                  if ( v241 )
                  {
                    v242 = v230[23];
                    for ( i = 0; i != v241; ++i )
                    {
                      v244 = (_QWORD *)(v242 + 24 * i);
                      if ( *v244 )
                      {
                        v244[1] = 0;
                        qfree();
                        v242 = v230[23];
                      }
                    }
                  }
                  v230[24] = 0;
                  qfree();
                }
                if ( v230[20] )
                {
                  v230[21] = 0;
                  qfree();
                }
                if ( v230[16] )
                {
                  v245 = v230[17];
                  if ( v245 )
                  {
                    v246 = v230[16];
                    for ( j = 0; j != v245; ++j )
                    {
                      v248 = (_QWORD *)(v246 + 32 * j);
                      if ( *v248 )
                      {
                        v248[1] = 0;
                        qfree();
                        v246 = v230[16];
                      }
                    }
                  }
                  v230[17] = 0;
                  qfree();
                }
                sub_250450((__int64)(v230 + 2));
                j__qfree();
              }
            }
            *(_DWORD *)v231 |= 1u;
            sub_37EDF0(v231, v284, v237, v238, v239, v240);
            sub_338EA0(*(_QWORD *)(v278 + 16), 0x64u, v231);
            result = *(_QWORD *)(v231 + 16);
            if ( src )
            {
              s1[0] = *(char **)(v231 + 16);
              *(_QWORD *)v287 = 0;
              qfree();
              result = (__int64)s1[0];
            }
            v249 = v284;
            if ( v284 )
            {
              v168 = (*((_DWORD *)v284 + 26))-- == 1;
              if ( v168 )
              {
                s1[0] = (char *)result;
                sub_253D70(v249);
                v250 = s1[0];
                if ( v249[23] )
                {
                  v251 = v249[24];
                  if ( v251 )
                  {
                    v252 = v249[23];
                    v253 = 0;
                    v254 = s1[0];
                    do
                    {
                      v255 = (_QWORD *)(v252 + 24 * v253);
                      if ( *v255 )
                      {
                        v255[1] = 0;
                        qfree();
                        v252 = v249[23];
                      }
                      ++v253;
                    }
                    while ( v251 != v253 );
                    v250 = v254;
                  }
                  s1[0] = v250;
                  v249[24] = 0;
                  qfree();
                  v250 = s1[0];
                }
                if ( v249[20] )
                {
                  s1[0] = v250;
                  v249[21] = 0;
                  qfree();
                  v250 = s1[0];
                }
                if ( v249[16] )
                {
                  v256 = v249[17];
                  if ( v256 )
                  {
                    v257 = v249[16];
                    v258 = 0;
                    v259 = v250;
                    do
                    {
                      v260 = (_QWORD *)(v257 + 32 * v258);
                      if ( *v260 )
                      {
                        v260[1] = 0;
                        qfree();
                        v257 = v249[16];
                      }
                      ++v258;
                    }
                    while ( v256 != v258 );
                    v250 = v259;
                  }
                  s1[0] = v250;
                  v249[17] = 0;
                  qfree();
                  v250 = s1[0];
                }
                s1[0] = v250;
                sub_250450((__int64)(v249 + 2));
                j__qfree();
                result = (__int64)s1[0];
              }
            }
            if ( v291 )
            {
              s1[0] = (char *)result;
              *(_QWORD *)&v292[0] = 0;
              qfree();
              return (__int64)s1[0];
            }
            return result;
          }
          sub_13BC80((_QWORD *)s1[0], (__int64)"merge_kind");
          if ( !v291 )
            return 0;
        }
        else
        {
          sub_32BD10((__int64)p_src, (__int64)&v290, v97);
          sub_68D20((__int64)"%a: %s\n", 0.0, (const char *)v290.m128i_i64[1]);
          if ( src )
          {
            *(_QWORD *)v287 = 0;
            qfree();
          }
          v264 = v284;
          if ( v284 )
          {
            v168 = (*((_DWORD *)v284 + 26))-- == 1;
            if ( v168 )
            {
              sub_253D70(v264);
              if ( v264[23] )
              {
                v265 = v264[24];
                if ( v265 )
                {
                  v266 = v264[23];
                  for ( k = 0; k != v265; ++k )
                  {
                    v268 = (_QWORD *)(v266 + 24 * k);
                    if ( *v268 )
                    {
                      v268[1] = 0;
                      qfree();
                      v266 = v264[23];
                    }
                  }
                }
                v264[24] = 0;
                qfree();
              }
              if ( v264[20] )
              {
                v264[21] = 0;
                qfree();
              }
              if ( v264[16] )
              {
                v271 = v264[17];
                if ( v271 )
                {
                  v272 = v264[16];
                  for ( m = 0; m != v271; ++m )
                  {
                    v274 = (_QWORD *)(v272 + 32 * m);
                    if ( *v274 )
                    {
                      v274[1] = 0;
                      qfree();
                      v272 = v264[16];
                    }
                  }
                }
                v264[17] = 0;
                qfree();
              }
              sub_250450((__int64)(v264 + 2));
              j__qfree();
            }
          }
          if ( !v291 )
            return 0;
        }
        *(_QWORD *)&v292[0] = 0;
        qfree();
        return 0;
      }
      v87 = *(__int64 ***)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v87 + 1;
    goto LABEL_91;
  }
  if ( a2 <= 61 )
  {
    if ( a2 == 7 )
    {
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v126 = *(_QWORD **)(a3 + 8);
        v38 = (char *(__fastcall ***)(__int64, __int64, __int64, __int64, __int64, __int64, __m128i, __m128, char))(v126 + 1);
        *(_QWORD *)(a3 + 8) = v126 + 1;
        if ( *v126 == 0xDEC0DE00000004LL )
          goto LABEL_146;
      }
      else
      {
        v36 = *(_QWORD *)(a3 + 16);
        v37 = v35 + 8;
        *(_DWORD *)a3 = v37;
        if ( *(_QWORD *)(v36 + v35) == 0xDEC0DE00000004LL )
        {
          if ( (unsigned int)v37 <= 0x2F )
          {
            v38 = (char *(__fastcall ***)(__int64, __int64, __int64, __int64, __int64, __int64, __m128i, __m128, char))(v37 + v36);
            *(_DWORD *)a3 = v35 + 16;
LABEL_40:
            if ( *v38 )
              **v38 = sub_3456A0;
            return 14598366;
          }
          v38 = *(char *(__fastcall ****)(__int64, __int64, __int64, __int64, __int64, __int64, __m128i, __m128, char))(a3 + 8);
LABEL_146:
          *(_QWORD *)(a3 + 8) = v38 + 1;
          goto LABEL_40;
        }
      }
    }
    return 0;
  }
  v16 = *(_QWORD *)(v14 + 1008);
  switch ( a2 )
  {
    case '>':
      v66 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v67 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v67 + 1;
      }
      else
      {
        v67 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v66);
        *(_DWORD *)a3 = v66 + 8;
      }
      v46 = *v67;
      v68 = *(_QWORD *)(*(_QWORD *)(v278 + 16) + 1008LL);
      v69 = *(__int64 **)(v68 + 40);
      v44 = *(_QWORD *)(v68 + 48);
      v45 = (__int64)&v69[v44];
      if ( v69 == (__int64 *)v45 )
        goto LABEL_46;
      while ( 1 )
      {
        v44 = *v69;
        if ( *v69 )
        {
          if ( v46 == *(_QWORD *)(v44 + 8) || v46 == *(_QWORD *)(v44 + 16) )
            break;
        }
        if ( (__int64 *)v45 == ++v69 )
        {
LABEL_46:
          sub_39B650(v16, v46, v44, v45, a5, a6);
          return 0;
        }
      }
      *(_DWORD *)v44 |= 1u;
      return 0;
    case '@':
      v58 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v59 = (__int64 *)(*(_QWORD *)(a3 + 16) + v58);
        *(_DWORD *)a3 = v58 + 8;
      }
      else
      {
        v59 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v59 + 1;
      }
      v60 = *v59;
      v61 = *(_QWORD *)(v278 + 16);
      v62 = *(_QWORD *)(v61 + 1008);
      v63 = *(__int64 **)(v62 + 40);
      v64 = &v63[*(_QWORD *)(v62 + 48)];
      if ( v63 == v64 )
        return 0;
      while ( 1 )
      {
        v65 = *v63;
        if ( *v63 )
        {
          if ( v60 == *(_QWORD *)(v65 + 8) || v60 == *(_QWORD *)(v65 + 16) )
            break;
        }
        if ( v64 == ++v63 )
          return 0;
      }
      sub_338EA0(v61, 0x67u, *v63);
      v166 = *(_QWORD *)(v65 + 8);
      if ( v166 == v60 )
      {
        *(_OWORD *)(v65 + 8) = 0;
      }
      else if ( v166 )
      {
        return 0;
      }
      sub_38A0A0(v65);
      sub_384A80(v65);
      clear_tinfo_t();
      if ( *(_QWORD *)(v65 + 136) )
      {
        *(_QWORD *)(v65 + 144) = 0;
        qfree();
      }
      v167 = *(_QWORD *)(v65 + 32);
      if ( v167 )
      {
        v168 = (*(_DWORD *)(v167 + 104))-- == 1;
        if ( v168 )
        {
          v169 = *(_QWORD **)(v65 + 32);
          if ( v169 )
          {
            sub_253D70(*(__int64 **)(v65 + 32));
            if ( v169[23] )
            {
              v170 = v169[24];
              if ( v170 )
              {
                v171 = v169[23];
                for ( n = 0; n != v170; ++n )
                {
                  v173 = (_QWORD *)(v171 + 24 * n);
                  if ( *v173 )
                  {
                    v173[1] = 0;
                    qfree();
                    v171 = v169[23];
                  }
                }
              }
              v169[24] = 0;
              qfree();
            }
            if ( v169[20] )
            {
              v169[21] = 0;
              qfree();
            }
            if ( v169[16] )
            {
              v174 = v169[17];
              if ( v174 )
              {
                v175 = v169[16];
                for ( ii = 0; ii != v174; ++ii )
                {
                  v177 = (_QWORD *)(v175 + 32 * ii);
                  if ( *v177 )
                  {
                    v177[1] = 0;
                    qfree();
                    v175 = v169[16];
                  }
                }
              }
              v169[17] = 0;
              qfree();
            }
            sub_250450((__int64)(v169 + 2));
            j__qfree();
          }
        }
      }
      operator delete((void *)v65, 0xA8u);
      return 0;
    case 'I':
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v123 = *(__int64 **)(a3 + 8);
        v124 = v123 + 1;
        *(_QWORD *)(a3 + 8) = v123 + 1;
        v50 = *v123;
LABEL_140:
        v125 = v124 + 1;
        *(_QWORD *)(a3 + 8) = v124 + 1;
        v51 = *v124;
LABEL_141:
        v53 = (int **)(v125 + 1);
        goto LABEL_142;
      }
      v48 = *(_QWORD *)(a3 + 16);
      v49 = v47 + 8;
      *(_DWORD *)a3 = v49;
      v50 = *(_QWORD *)(v48 + v47);
      if ( (unsigned int)v49 > 0x2F )
      {
        v124 = *(__int64 **)(a3 + 8);
        goto LABEL_140;
      }
      *(_DWORD *)a3 = v47 + 16;
      v51 = *(_QWORD *)(v48 + v49);
      if ( v47 + 16 > 0x2F )
      {
        v125 = *(_QWORD **)(a3 + 8);
        goto LABEL_141;
      }
      v52 = v47 + 24;
      *(_DWORD *)a3 = v52;
      if ( (unsigned int)v52 <= 0x2F )
      {
        v53 = (int **)(v52 + v48);
        *(_DWORD *)a3 = v47 + 32;
        goto LABEL_52;
      }
      v53 = *(int ***)(a3 + 8);
LABEL_142:
      *(_QWORD *)(a3 + 8) = v53 + 1;
LABEL_52:
      v54 = *(_QWORD *)(*(_QWORD *)(v278 + 16) + 1008LL);
      v55 = *(__int64 **)(v54 + 40);
      v56 = &v55[*(_QWORD *)(v54 + 48)];
      if ( v55 == v56 )
        return 0;
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          if ( *(_QWORD *)(v57 + 8) == v51 || *(_QWORD *)(v57 + 16) == v51 )
            break;
        }
        if ( v56 == ++v55 )
          return 0;
      }
      v144 = *v53;
      v145 = sub_386210(*v55, 1);
      result = 0;
      if ( v145 )
      {
        v146 = *(_QWORD *)(v50 + 8);
        v147 = *v144;
        s1[0] = nullptr;
        if ( v146 )
        {
          v219 = (char *)qalloc_or_throw();
          v220 = *(const char **)v50;
          s1[0] = v219;
          memcpy(v219, v220, v146);
        }
        result = sub_338EA0(*(_QWORD *)(v278 + 16), 0x6Cu, v57, v50, v144);
        if ( result == 1 )
          goto LABEL_216;
        LOBYTE(p_src) = 0;
        if ( *v144 == v147 )
        {
          v221 = ::s1;
          if ( *(_QWORD *)(v50 + 8) )
            v221 = *(const char **)v50;
          v222 = ::s1;
          if ( v146 )
            v222 = s1[0];
          LOBYTE(p_src) = strcmp(v222, v221) == 0;
        }
        v290.m128i_i64[0] = v57;
        *(_OWORD *)v287 = 0;
        src = nullptr;
        v290.m128i_i64[1] = v57 + 80;
        LODWORD(v291) = 0;
        memset(v292, 0, sizeof(v292));
        v293 = 0;
        v294 = 0;
        if ( (unsigned __int8)sub_38C9D0(
                                &v290,
                                (__int64 *)&src,
                                (__m128)0LL,
                                a8,
                                a9,
                                a10,
                                v152,
                                v153,
                                a13,
                                a14,
                                v148,
                                v149,
                                v150,
                                v151) != 1
          && (_BYTE)p_src )
        {
LABEL_207:
          v290.m128i_i64[0] = 0;
          if ( v293 )
          {
            *(_QWORD *)&v294 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v292[1] + 1) )
          {
            *(_QWORD *)&v292[2] = 0;
            qfree();
          }
          if ( *(_QWORD *)&v292[0] )
          {
            *((_QWORD *)&v292[0] + 1) = 0;
            qfree();
          }
          if ( src )
          {
            *(_QWORD *)v287 = 0;
            qfree();
          }
          result = 0;
LABEL_216:
          if ( s1[0] )
          {
            s1[0] = (char *)result;
            qfree();
            return (__int64)s1[0];
          }
          return result;
        }
        v154 = *(_QWORD *)(v50 + 8);
        if ( v154 > 1 )
        {
          v155 = *(_QWORD *)v50;
          if ( *(_BYTE *)(*(_QWORD *)v50 + v154 - 2) != 10 )
          {
            if ( *(_QWORD *)(v50 + 16) < v154 + 1 )
            {
              v263 = qvector_reserve();
              *(_QWORD *)v50 = v263;
              v155 = v263;
            }
            *(_QWORD *)(v50 + 8) = v154 + 1;
            *(_BYTE *)(v155 + v154 - 1) = 10;
            *(_BYTE *)(*(_QWORD *)v50 + v154) = 0;
          }
        }
        v156 = *(_QWORD *)v287;
        if ( *(_QWORD *)v287 )
        {
          v157 = *(_QWORD *)v287 - 1LL;
          if ( *(_QWORD *)v287 != 1 )
          {
            v158 = *(_QWORD *)(v50 + 8);
            v159 = (__int64 *)(*(_QWORD *)v287 - 1LL);
            if ( v158 )
            {
              --v158;
              v159 = (__int64 *)(v157 + v158);
              v156 = *(_QWORD *)v287 + v158;
            }
            v160 = *(_QWORD *)v50;
            if ( *(_QWORD *)(v50 + 16) < v156 )
            {
              p_src = v159;
              v269 = qvector_reserve();
              *(_QWORD *)v50 = v269;
              v159 = p_src;
              v160 = v269;
            }
            *(_QWORD *)(v50 + 8) = v156;
            *((_BYTE *)v159 + v160) = 0;
            memcpy((void *)(v158 + *(_QWORD *)v50), src, v157);
          }
        }
        *v144 += v291;
        v161 = *(_QWORD *)(v50 + 8);
        v162 = *(const char **)v50;
        if ( v161 )
        {
          if ( v161 != 1 && v162[v161 - 2] == 10 )
          {
LABEL_311:
            v164 = v161 + 1;
            v165 = v161 + 2;
            --v161;
LABEL_204:
            if ( *(_QWORD *)(v50 + 16) < v165 )
            {
              v225 = qvector_reserve();
              *(_QWORD *)v50 = v225;
              v162 = (const char *)v225;
            }
            *(_QWORD *)(v50 + 8) = v165;
            v162[v164] = 0;
            *(_WORD *)(v161 + *(_QWORD *)v50) = 32257;
            ++*v144;
            goto LABEL_207;
          }
          v163 = v161-- + 1;
        }
        else
        {
          v163 = 2;
        }
        if ( *(_QWORD *)(v50 + 16) < v163 )
        {
          v226 = qvector_reserve();
          *(_QWORD *)v50 = v226;
          v162 = (const char *)v226;
        }
        *(_QWORD *)(v50 + 8) = v163;
        v164 = 2;
        v165 = 3;
        v162[v161] = 10;
        *(_BYTE *)(*(_QWORD *)v50 + v161 + 1) = 0;
        v161 = *(_QWORD *)(v50 + 8);
        v162 = *(const char **)v50;
        if ( !v161 )
          goto LABEL_204;
        goto LABEL_311;
      }
      return result;
    case 'L':
      v39 = *(_DWORD *)(v14 + 1416);
      if ( (v39 & 0x200) != 0 )
        return 0;
      BYTE1(v39) |= 2u;
      *(_DWORD *)(v14 + 1416) = v39;
      sub_33BE70();
      v43 = callui(61, a2, &callui, v40, v41, v42, s1[0], s1[1], v276, p_src);
      if ( !v43 )
        return 0;
      v46 = v43;
      goto LABEL_46;
    case 'P':
      v78 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v79 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v79 + 1;
      }
      else
      {
        v79 = (const char **)(*(_QWORD *)(a3 + 16) + v78);
        *(_DWORD *)a3 = v78 + 8;
      }
      v80 = *v79;
      if ( !*v79 )
        return 0;
      v81 = sub_3849C0(*(_QWORD *)(v278 + 16), a2);
      v82 = v81;
      if ( !v81 )
        return 0;
      sub_386210(v81, 0);
      if ( !strcmp(v80, "JumpExplored") )
        return (unsigned __int8)callui(100, "SelectAll", 0, 0, &callui, v83, s1[0], s1[1], v276, p_src);
      if ( strcmp(v80, "JumpEnter") )
        return 0;
      sub_395540(v82, 0, 0);
      return 1;
    case 'Q':
      v70 = *(_DWORD *)(v14 + 1416);
      if ( (v70 & 0x10) != 0 )
      {
        v71 = v278;
        *(_DWORD *)(v14 + 1416) = v70 & 0xFFFFFFEF;
        sub_325F60(*(_QWORD *)(v71 + 16));
        sub_324C10(*(_QWORD *)(v71 + 16), 0);
        sub_13C7D0(*(_QWORD *)(v71 + 16), 1);
        sub_3DDEB0(*(_QWORD *)(v71 + 16));
        if ( sub_3849C0(*(_QWORD *)(v71 + 16), 1) )
        {
          v75 = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 1008LL);
          v76 = *(__int64 **)(v75 + 40);
          for ( jj = &v76[*(_QWORD *)(v75 + 48)]; jj != v76; ++v76 )
          {
            if ( *v76 )
              sub_390810(*v76, 0, a7, v72, v73, v74);
          }
        }
      }
      return 0;
    default:
      return 0;
  }
}

