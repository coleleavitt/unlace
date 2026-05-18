__int64 __fastcall sub_18ADE0(__int64 *a1, double *a2, int a3, _QWORD *a4, __int64 a5, int a6)
{
  __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  int v12; // r12d
  char v13; // dl
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edx
  size_t v18; // rax
  size_t v19; // rbp
  size_t v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // rbp
  __int64 v25; // rsi
  bool v26; // zf
  __int64 v27; // rax
  const char *v28; // rbx
  size_t v29; // rax
  size_t v30; // r12
  size_t v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE *v34; // rbp
  unsigned __int64 v35; // rdx
  int *p_src; // r13
  unsigned int v37; // ebx
  int *v38; // rax
  __int64 v39; // r15
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  char **v43; // r13
  char *v44; // r15
  __int64 v45; // rbx
  __int64 v46; // r12
  unsigned __int64 v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // r15
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // r15
  unsigned __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // r10
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // r15
  __int64 v65; // rax
  size_t v66; // rbp
  const char *v67; // r15
  __int64 v68; // rbx
  size_t v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rbx
  unsigned __int64 v72; // rbp
  __int64 v73; // r12
  __int64 v74; // rsi
  __int64 v75; // r12
  unsigned __int64 v76; // rbp
  __int64 v77; // rsi
  __int64 v78; // rbx
  char v79; // al
  int v80; // r8d
  int v81; // r9d
  size_t v82; // r15
  __int64 v83; // rbx
  size_t v84; // r8
  _BYTE *v85; // rsi
  void *v86; // rdx
  unsigned __int64 v87; // rbx
  size_t v88; // r12
  __int64 v89; // rbp
  size_t v90; // r13
  __int64 v91; // rsi
  __int64 v92; // rbx
  unsigned __int64 v93; // rbp
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // r12
  unsigned __int64 v98; // rbp
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // r15
  unsigned __int64 v102; // rdx
  __int64 v103; // rsi
  int v104; // ebp
  int v105; // ebx
  __int64 v106; // r12
  unsigned __int64 v107; // r13
  __int64 v108; // r15
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r15
  unsigned __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rsi
  int v117; // ebp
  int v118; // ebx
  __int64 v119; // r12
  unsigned __int64 v120; // r13
  __int64 v121; // r15
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rbp
  unsigned __int64 v129; // r12
  __int64 v130; // r13
  __int64 v131; // rsi
  int v132; // r13d
  __int64 v133; // r15
  unsigned __int64 v134; // r12
  __int64 v135; // rbp
  __int64 v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rbp
  unsigned __int64 v139; // r12
  __int64 v140; // r13
  __int64 v141; // rsi
  int v142; // r13d
  __int64 v143; // r15
  unsigned __int64 v144; // r12
  __int64 v145; // rbp
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  char *i; // rax
  __int64 *v155; // r15
  __int64 v156; // rax
  __int64 v157; // r10
  __int64 *v158; // r9
  __int64 v159; // r8
  unsigned __int64 v160; // rdx
  __int64 v161; // rsi
  unsigned __int64 v162; // rdx
  size_t v163; // r10
  __int64 v164; // r9
  __int64 v165; // r11
  __int64 v166; // rsi
  __int64 *v167; // r9
  unsigned __int64 v168; // rdx
  __int64 v169; // rsi
  unsigned __int64 v170; // rdx
  __int64 *v171; // r9
  __int64 v172; // rsi
  __int64 *v173; // r8
  unsigned __int64 v174; // rdx
  __int64 v175; // rsi
  __int64 *v176; // r8
  unsigned __int64 v177; // rdx
  __int64 v178; // rsi
  int j; // r9d
  __int64 v180; // r11
  unsigned __int64 v181; // rdx
  __int64 v182; // rsi
  __int64 *v183; // r8
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  unsigned __int64 v191; // rdx
  char **v192; // rbp
  __int64 *v193; // r13
  char **v194; // rbx
  __int64 *v195; // rbp
  __int64 v196; // r12
  const char *v197; // rcx
  const char *v198; // rdi
  __int64 v199; // r14
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rsi
  __int64 *v203; // r14
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  int v207; // [rsp+0h] [rbp-E8h]
  int v208; // [rsp+0h] [rbp-E8h]
  int v209; // [rsp+0h] [rbp-E8h]
  void *v210; // [rsp+0h] [rbp-E8h]
  void *v211; // [rsp+0h] [rbp-E8h]
  void *v212; // [rsp+0h] [rbp-E8h]
  void *v213; // [rsp+0h] [rbp-E8h]
  void *v214; // [rsp+0h] [rbp-E8h]
  __int64 *v215; // [rsp+0h] [rbp-E8h]
  __int64 v216; // [rsp+8h] [rbp-E0h]
  int v217[2]; // [rsp+8h] [rbp-E0h]
  int v218[2]; // [rsp+8h] [rbp-E0h]
  int v219[2]; // [rsp+8h] [rbp-E0h]
  int v220[2]; // [rsp+8h] [rbp-E0h]
  int v221[2]; // [rsp+8h] [rbp-E0h]
  int v222[2]; // [rsp+8h] [rbp-E0h]
  __int64 v223; // [rsp+10h] [rbp-D8h]
  __int64 *v224; // [rsp+18h] [rbp-D0h]
  __int64 v225; // [rsp+20h] [rbp-C8h]
  __int64 v226; // [rsp+28h] [rbp-C0h]
  int v227; // [rsp+30h] [rbp-B8h]
  int *v228; // [rsp+38h] [rbp-B0h] BYREF
  void *v229; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v230; // [rsp+48h] [rbp-A0h]
  void *v231; // [rsp+58h] [rbp-90h]
  void *v232; // [rsp+60h] [rbp-88h] BYREF
  int v233[4]; // [rsp+68h] [rbp-80h]
  int v234; // [rsp+78h] [rbp-70h]
  int src; // [rsp+80h] [rbp-68h] BYREF
  int v236; // [rsp+88h] [rbp-60h]
  int v237; // [rsp+90h] [rbp-58h]
  int v238; // [rsp+98h] [rbp-50h]
  __int64 v239[9]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = a1;
  v7 = (__int64)a2;
  v9 = *(unsigned int *)a2;
  v239[1] = __readfsqword(0x28u);
  v10 = a4;
  v11 = (unsigned int)(v9 - 3);
  if ( (unsigned int)v11 <= 1 )
  {
    v232 = a2;
    sub_18ACC0(a4, (unsigned __int64 *)&v232, v11, (__int64)a4, a5);
    if ( !v13 )
      return 0;
    v9 = *(unsigned int *)a2;
  }
  v12 = a3 + 1;
  switch ( v9 )
  {
    case 1LL:
      sub_2AAE0(a1);
      return 1;
    case 2LL:
      v22 = a1[1];
      if ( v22 )
      {
        v24 = v22 + 1;
        v23 = a1[1];
        --v22;
      }
      else
      {
        v23 = 1;
        v24 = 2;
      }
      v25 = *a1;
      if ( a1[2] < v24 )
      {
        v112 = sub_1987B0(a1, v25, v24, 1);
        *a1 = v112;
        v25 = v112;
      }
      a1[1] = v24;
      *(_BYTE *)(v25 + v22) = 34;
      *(_BYTE *)(*a1 + v23) = 0;
      v26 = *(_DWORD *)v7 == 2;
      v229 = nullptr;
      v27 = *(_QWORD *)(v7 + 8);
      v230 = 0;
      if ( v26 )
      {
        v28 = s1;
        if ( *(_QWORD *)(v27 + 8) )
          v28 = *(const char **)v27;
        v232 = nullptr;
        *(_OWORD *)v233 = 0;
        if ( v28 )
        {
          v29 = strlen(v28);
          v30 = v29 + 1;
          v31 = v29;
          v232 = (void *)sub_1987B0(&v232, 0, v29 + 1, 1);
          *(_QWORD *)v233 = v30;
          memmove(v232, v28, v31);
          *((_BYTE *)v232 + v31) = 0;
          v32 = *(_QWORD *)v233;
          v33 = *(_QWORD *)v233 + 16LL;
          if ( *((_QWORD *)&v230 + 1) >= (unsigned __int64)(*(_QWORD *)v233 + 16LL) )
          {
LABEL_22:
            if ( v32 )
            {
              v34 = v232;
              v35 = 0;
              v228 = (int *)v232;
              p_src = (int *)v232;
              while ( 1 )
              {
                if ( v35 >= v32 - 1 )
                  goto LABEL_100;
                v37 = sub_18ECE0(&v228);
                if ( v37 - 1 > 0xFFFFFFFD )
                {
                  v38 = v228;
                  v228 = (int *)((char *)v228 + 1);
                  v37 = *(unsigned __int8 *)v38;
                }
                if ( v37 <= 0x22 )
                  break;
                v79 = 92;
                if ( v37 != 92 )
                  goto LABEL_93;
LABEL_116:
                BYTE1(src) = v79;
                v82 = 2;
                p_src = &src;
                LOBYTE(src) = 92;
LABEL_95:
                v83 = v230;
                v84 = v82;
                if ( (_QWORD)v230 )
                {
                  v83 = v230 - 1;
                  v84 = v230 - 1 + v82;
                }
                v85 = v229;
                v86 = (void *)(v84 + 1);
                if ( *((_QWORD *)&v230 + 1) < v84 + 1 )
                {
                  *(_QWORD *)v220 = v84;
                  v212 = (void *)(v84 + 1);
                  v229 = (void *)sub_1987B0(&v229, v229, v86, 1);
                  v84 = *(_QWORD *)v220;
                  v85 = v229;
                  v86 = v212;
                }
                *(_QWORD *)&v230 = v86;
                v85[v84] = 0;
                memmove((char *)v229 + v83, p_src, v82);
                p_src = v228;
                v32 = *(_QWORD *)v233;
                v35 = (char *)v228 - v34;
                if ( !*(_QWORD *)v233 )
                  goto LABEL_100;
              }
              if ( v37 > 7 )
              {
                switch ( v37 )
                {
                  case 8u:
                    v79 = 98;
                    goto LABEL_116;
                  case 9u:
                    v79 = 116;
                    goto LABEL_116;
                  case 0xAu:
                    v79 = 110;
                    goto LABEL_116;
                  case 0xCu:
                    v79 = 102;
                    goto LABEL_116;
                  case 0xDu:
                    v79 = 114;
                    goto LABEL_116;
                  case 0x22u:
                    v79 = 34;
                    goto LABEL_116;
                  default:
                    break;
                }
              }
LABEL_93:
              if ( (unsigned __int8)sub_18C590(v37) )
              {
                v82 = (char *)v228 - (char *)p_src;
              }
              else
              {
                p_src = &src;
                v82 = (int)sub_19D9D0((unsigned int)&src, 16, (unsigned int)"\\u%04X", v37, v80, v81);
              }
              goto LABEL_95;
            }
LABEL_100:
            if ( v232 )
            {
              *(_QWORD *)v233 = 0;
              j__free(v232);
            }
            v87 = v230;
            if ( (_QWORD)v230 )
            {
              v88 = v230 - 1;
              if ( (_QWORD)v230 != 1 )
              {
                v89 = a1[1];
                v90 = v230 - 1;
                if ( v89 )
                {
                  --v89;
                  v90 = v88 + v89;
                  v87 = v230 + v89;
                }
                v91 = *a1;
                if ( a1[2] < v87 )
                {
                  v204 = sub_1987B0(a1, v91, v87, 1);
                  *a1 = v204;
                  v91 = v204;
                }
                a1[1] = v87;
                *(_BYTE *)(v91 + v90) = 0;
                memcpy((void *)(v89 + *a1), v229, v88);
              }
            }
            v92 = a1[1];
            v93 = 2;
            if ( v92 )
              v93 = v92-- + 1;
            v94 = *a1;
            if ( a1[2] < v93 )
            {
              v100 = sub_1987B0(a1, v94, v93, 1);
              *a1 = v100;
              v94 = v100;
            }
            a1[1] = v93;
            *(_BYTE *)(v94 + v92) = 34;
            *(_BYTE *)(*a1 + v92 + 1) = 0;
            if ( v229 )
            {
              *(_QWORD *)&v230 = 0;
              j__free(v229);
            }
            return 1;
          }
          v28 = (const char *)v229;
        }
        else
        {
          v33 = 16;
        }
        v229 = (void *)sub_1987B0(&v229, v28, v33, 1);
        v32 = *(_QWORD *)v233;
        goto LABEL_22;
      }
      if ( !unk_2439A0 )
        sub_198E10(1278);
      goto LABEL_264;
    case 3LL:
      v39 = a1[1];
      if ( v39 )
      {
        v41 = v39 + 1;
        v40 = a1[1];
        --v39;
      }
      else
      {
        v40 = 1;
        v41 = 2;
      }
      v42 = *a1;
      if ( a1[2] < v41 )
      {
        v216 = v40;
        v210 = (void *)v41;
        v124 = sub_1987B0(a1, v42, v41, 1);
        v40 = v216;
        v41 = (unsigned __int64)v210;
        *a1 = v124;
        v42 = v124;
      }
      a1[1] = v41;
      *(_BYTE *)(v42 + v39) = 123;
      *(_BYTE *)(*a1 + v40) = 0;
      if ( (v10[6] & 1) != 0 )
      {
        v113 = a1[1];
        if ( v113 )
        {
          v114 = v113 + 1;
          v115 = a1[1];
          --v113;
        }
        else
        {
          v115 = 1;
          v114 = 2;
        }
        v116 = *a1;
        if ( a1[2] < v114 )
        {
          v216 = v115;
          v214 = (void *)v114;
          v153 = sub_1987B0(a1, v116, v114, 1);
          v115 = v216;
          v114 = (unsigned __int64)v214;
          *a1 = v153;
          v116 = v153;
        }
        a1[1] = v114;
        *(_BYTE *)(v116 + v113) = 10;
        *(_BYTE *)(*a1 + v115) = 0;
        if ( v12 > 0 )
        {
          v223 = (__int64)v10;
          v117 = a3;
          v209 = a3 + 1;
          v118 = 0;
          v216 = v7;
          while ( 1 )
          {
            v121 = a1[1];
            if ( v121 )
            {
              v119 = v121 + 3;
              v120 = v121 + 4;
              --v121;
            }
            else
            {
              v120 = 5;
              v119 = 4;
            }
            v122 = *a1;
            if ( a1[2] < v120 )
            {
              v123 = sub_1987B0(a1, v122, v120, 1);
              *a1 = v123;
              v122 = v123;
            }
            a1[1] = v120;
            *(_BYTE *)(v122 + v119) = 0;
            *(_DWORD *)(*a1 + v121) = 538976288;
            if ( v117 == v118 )
              break;
            ++v118;
          }
          a3 = v117;
          v12 = v209;
          v7 = v216;
          v10 = (_QWORD *)v223;
        }
      }
      if ( *(_DWORD *)v7 != 3 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1279);
        goto LABEL_264;
      }
      v43 = *(char ***)(v7 + 8);
      v232 = nullptr;
      *(_OWORD *)v233 = 0;
      v44 = v43[1];
      if ( v44 )
      {
        v232 = (void *)sub_1987B0(&v232, 0, v43[1], 8);
        memset((char *)v232 + 8 * *(_QWORD *)v233, 0, 8LL * (_QWORD)&v44[-*(_QWORD *)v233]);
        *(_QWORD *)v233 = v44;
        for ( i = nullptr; i != v44; ++i )
          *((_QWORD *)v232 + (_QWORD)i) = i;
        v155 = (__int64 *)v232;
        v156 = 8LL * *(_QWORD *)v233;
        v215 = (__int64 *)((char *)v232 + 8 * *(_QWORD *)v233);
        if ( (v10[6] & 2) == 0 )
          goto LABEL_192;
        if ( v232 == (char *)v232 + 8 * *(_QWORD *)v233 )
        {
LABEL_235:
          if ( v215 )
          {
            *(_QWORD *)v233 = 0;
            j__free(v215);
          }
          goto LABEL_37;
        }
        if ( v156 >> 3 )
        {
          _BitScanReverse64(&v191, v156 >> 3);
          v216 = 8LL * *(_QWORD *)v233;
          sub_1892D0((const __m128i *)v232, v215, 2LL * (int)v191, v43);
          if ( v216 > 128 )
          {
            sub_188A70(v155, v155 + 16, (__int64 *)v43);
            LODWORD(v223) = v12;
            v224 = a1;
            LODWORD(v225) = a3;
            v226 = (__int64)v10;
            v192 = v43;
            v193 = v155 + 16;
            while ( 1 )
            {
              v194 = v192;
              v195 = v193;
              v216 = *v193;
              v196 = 40 * *v193;
              while ( 1 )
              {
                v199 = *(v195 - 1);
                v200 = (__int64)&(*v194)[40 * v199];
                v201 = (__int64)&(*v194)[v196];
                v202 = *(_QWORD *)(v201 + 8);
                if ( *(_QWORD *)(v200 + 8) )
                {
                  v197 = *(const char **)v200;
                  v198 = s1;
                  if ( !v202 )
                    goto LABEL_243;
                  goto LABEL_248;
                }
                if ( !v202 )
                  break;
                v197 = s1;
LABEL_248:
                v198 = *(const char **)v201;
LABEL_243:
                if ( strcmp(v198, v197) >= 0 )
                  break;
                *v195-- = v199;
              }
              v203 = v195;
              ++v193;
              v192 = v194;
              *v203 = v216;
              if ( v193 == v215 )
              {
                v43 = v194;
                v12 = v223;
                v6 = v224;
                a3 = v225;
                v10 = (_QWORD *)v226;
                goto LABEL_251;
              }
            }
          }
        }
        else
        {
          sub_1892D0((const __m128i *)v232, v215, -2, v43);
        }
        sub_188A70(v155, v215, (__int64 *)v43);
LABEL_251:
        v155 = (__int64 *)v232;
        v215 = (__int64 *)((char *)v232 + 8 * *(_QWORD *)v233);
LABEL_192:
        if ( v155 == v215 )
          goto LABEL_235;
        v157 = *v155;
        while ( 1 )
        {
LABEL_194:
          v158 = (__int64 *)v6[1];
          v159 = (__int64)&(*v43)[40 * v157];
          v160 = 2;
          if ( v158 )
          {
            v160 = (unsigned __int64)v158 + 1;
            v158 = (__int64 *)((char *)v158 - 1);
          }
          v161 = *v6;
          if ( v6[2] < v160 )
          {
            v224 = v158;
            v223 = (__int64)&(*v43)[40 * v157];
            v216 = v160;
            v187 = sub_1987B0(v6, v161, v160, 1);
            v158 = v224;
            v159 = v223;
            *v6 = v187;
            v161 = v187;
            v160 = v216;
          }
          v6[1] = v160;
          *((_BYTE *)v158 + v161) = 34;
          *((_BYTE *)v158 + *v6 + 1) = 0;
          v162 = *(_QWORD *)(v159 + 8);
          if ( v162 )
          {
            v163 = v162 - 1;
            if ( v162 != 1 )
            {
              v164 = v6[1];
              v165 = v162 - 1;
              if ( v164 )
              {
                --v164;
                v165 = v163 + v164;
                v162 += v164;
              }
              v166 = *v6;
              if ( v6[2] < v162 )
              {
                v226 = v165;
                v225 = v164;
                v224 = (__int64 *)v163;
                v223 = v159;
                *(_QWORD *)v222 = v162;
                v189 = sub_1987B0(v6, v166, v162, 1);
                v165 = v226;
                v164 = v225;
                *v6 = v189;
                v166 = v189;
                v163 = (size_t)v224;
                v159 = v223;
                v162 = *(_QWORD *)v222;
              }
              v6[1] = v162;
              *(_BYTE *)(v166 + v165) = 0;
              LODWORD(v216) = v159;
              memcpy((void *)(v164 + *v6), *(const void **)v159, v163);
              LODWORD(v159) = v216;
            }
          }
          v167 = (__int64 *)v6[1];
          v168 = 2;
          if ( v167 )
          {
            v168 = (unsigned __int64)v167 + 1;
            v167 = (__int64 *)((char *)v167 - 1);
          }
          v169 = *v6;
          if ( v6[2] < v168 )
          {
            v224 = v167;
            LODWORD(v223) = v159;
            v216 = v168;
            v186 = sub_1987B0(v6, v169, v168, 1);
            v167 = v224;
            LODWORD(v159) = v223;
            *v6 = v186;
            v169 = v186;
            v168 = v216;
          }
          v6[1] = v168;
          v170 = 2;
          *((_BYTE *)v167 + v169) = 34;
          *((_BYTE *)v167 + *v6 + 1) = 0;
          v171 = (__int64 *)v6[1];
          if ( v171 )
          {
            v170 = (unsigned __int64)v171 + 1;
            v171 = (__int64 *)((char *)v171 - 1);
          }
          v172 = *v6;
          if ( v6[2] < v170 )
          {
            v224 = v171;
            LODWORD(v223) = v159;
            v216 = v170;
            v185 = sub_1987B0(v6, v172, v170, 1);
            v171 = v224;
            LODWORD(v159) = v223;
            *v6 = v185;
            v172 = v185;
            v170 = v216;
          }
          v6[1] = v170;
          *((_BYTE *)v171 + v172) = 58;
          *((_BYTE *)v171 + *v6 + 1) = 0;
          if ( !(unsigned __int8)sub_18ADE0(
                                   (int)v6,
                                   (int)v159 + 24,
                                   v12,
                                   (int)v10,
                                   v159,
                                   (int)v171,
                                   (int)v215,
                                   v216,
                                   v223,
                                   (int)v224,
                                   v225,
                                   v226,
                                   v227,
                                   (int)v228,
                                   (int)v229,
                                   v230,
                                   SDWORD2(v230),
                                   v231,
                                   (__int64)v232,
                                   v233[0],
                                   v233[2],
                                   v234,
                                   src,
                                   v236,
                                   v237,
                                   v238,
                                   v239[0]) )
            break;
          if ( ++v155 == v215 )
          {
            v215 = (__int64 *)v232;
            goto LABEL_235;
          }
          v173 = (__int64 *)v6[1];
          v174 = 2;
          if ( v173 )
          {
            v174 = (unsigned __int64)v173 + 1;
            v173 = (__int64 *)((char *)v173 - 1);
          }
          v157 = *v155;
          v175 = *v6;
          if ( v6[2] < v174 )
          {
            v224 = v173;
            v223 = *v155;
            v216 = v174;
            v188 = sub_1987B0(v6, v175, v174, 1);
            v173 = v224;
            v157 = v223;
            *v6 = v188;
            v175 = v188;
            v174 = v216;
          }
          v6[1] = v174;
          *((_BYTE *)v173 + v175) = 44;
          *((_BYTE *)v173 + *v6 + 1) = 0;
          if ( (v10[6] & 1) != 0 )
          {
            v176 = (__int64 *)v6[1];
            v177 = 2;
            if ( v176 )
            {
              v177 = (unsigned __int64)v176 + 1;
              v176 = (__int64 *)((char *)v176 - 1);
            }
            v178 = *v6;
            if ( v6[2] < v177 )
            {
              v224 = v176;
              v223 = v157;
              v216 = v177;
              v190 = sub_1987B0(v6, v178, v177, 1);
              v176 = v224;
              v157 = v223;
              *v6 = v190;
              v178 = v190;
              v177 = v216;
            }
            v6[1] = v177;
            *((_BYTE *)v176 + v178) = 10;
            *((_BYTE *)v176 + *v6 + 1) = 0;
            if ( v12 > 0 )
            {
              for ( j = 0; ; ++j )
              {
                v183 = (__int64 *)v6[1];
                if ( v183 )
                {
                  v180 = (__int64)v183 + 3;
                  v181 = (unsigned __int64)v183 + 4;
                  v182 = *v6;
                  v183 = (__int64 *)((char *)v183 - 1);
                  if ( v6[2] >= v181 )
                    goto LABEL_227;
                }
                else
                {
                  v182 = *v6;
                  v181 = 5;
                  v180 = 4;
                  if ( (unsigned __int64)v6[2] >= 5 )
                    goto LABEL_227;
                }
                v226 = v180;
                LODWORD(v225) = j;
                v224 = v183;
                v223 = v157;
                v216 = v181;
                v184 = sub_1987B0(v6, v182, v181, 1);
                v180 = v226;
                j = v225;
                *v6 = v184;
                v182 = v184;
                v183 = v224;
                v157 = v223;
                v181 = v216;
LABEL_227:
                v6[1] = v181;
                *(_BYTE *)(v182 + v180) = 0;
                *(_DWORD *)((char *)v183 + *v6) = 538976288;
                if ( a3 == j )
                  goto LABEL_194;
              }
            }
          }
        }
        if ( v232 )
        {
          *(_QWORD *)v233 = 0;
          j__free(v232);
        }
        return 0;
      }
LABEL_37:
      if ( (v10[6] & 1) != 0 )
      {
        v138 = v6[1];
        if ( v138 )
        {
          v139 = v138 + 1;
          v140 = v6[1];
          --v138;
        }
        else
        {
          v140 = 1;
          v139 = 2;
        }
        v141 = *v6;
        if ( v6[2] < v139 )
        {
          v205 = sub_1987B0(v6, v141, v139, 1);
          *v6 = v205;
          v141 = v205;
        }
        v6[1] = v139;
        *(_BYTE *)(v141 + v138) = 10;
        *(_BYTE *)(*v6 + v140) = 0;
        if ( a3 > 0 )
        {
          v142 = 0;
          do
          {
            v145 = v6[1];
            if ( v145 )
            {
              v143 = v145 + 3;
              v144 = v145 + 4;
              --v145;
            }
            else
            {
              v144 = 5;
              v143 = 4;
            }
            v146 = *v6;
            if ( v6[2] < v144 )
            {
              v147 = sub_1987B0(v6, v146, v144, 1);
              *v6 = v147;
              v146 = v147;
            }
            v6[1] = v144;
            ++v142;
            *(_BYTE *)(v146 + v143) = 0;
            *(_DWORD *)(*v6 + v145) = 538976288;
          }
          while ( a3 != v142 );
        }
      }
      v45 = v6[1];
      if ( v45 )
      {
        v47 = v45 + 1;
        v46 = v6[1];
        --v45;
      }
      else
      {
        v46 = 1;
        v47 = 2;
      }
      v48 = *v6;
      if ( v6[2] < v47 )
      {
        v148 = sub_1987B0(v6, v48, v47, 1);
        *v6 = v148;
        v48 = v148;
      }
      v6[1] = v47;
      *(_BYTE *)(v48 + v45) = 125;
      *(_BYTE *)(*v6 + v46) = 0;
      return 1;
    case 4LL:
      v49 = a1[1];
      if ( v49 )
      {
        v51 = v49 + 1;
        v50 = a1[1];
        --v49;
      }
      else
      {
        v50 = 1;
        v51 = 2;
      }
      v52 = *a1;
      if ( a1[2] < v51 )
      {
        *(_QWORD *)v219 = v50;
        v211 = (void *)v51;
        v125 = sub_1987B0(a1, v52, v51, 1);
        v50 = *(_QWORD *)v219;
        v51 = (unsigned __int64)v211;
        *a1 = v125;
        v52 = v125;
      }
      a1[1] = v51;
      *(_BYTE *)(v52 + v49) = 91;
      *(_BYTE *)(*a1 + v50) = 0;
      if ( (v10[6] & 1) != 0 )
      {
        v101 = a1[1];
        if ( v101 )
        {
          v102 = v101 + 1;
          v50 = a1[1];
          --v101;
        }
        else
        {
          v50 = 1;
          v102 = 2;
        }
        v103 = *a1;
        if ( a1[2] < v102 )
        {
          *(_QWORD *)v221 = v50;
          v213 = (void *)v102;
          v152 = sub_1987B0(a1, v103, v102, 1);
          v50 = *(_QWORD *)v221;
          v102 = (unsigned __int64)v213;
          *a1 = v152;
          v103 = v152;
        }
        a1[1] = v102;
        *(_BYTE *)(v103 + v101) = 10;
        *(_BYTE *)(*a1 + v50) = 0;
        if ( v12 > 0 )
        {
          LODWORD(v50) = 0;
          v223 = (__int64)v10;
          v104 = a3;
          v208 = a3 + 1;
          v105 = 0;
          *(_QWORD *)v218 = v7;
          while ( 1 )
          {
            v108 = a1[1];
            if ( v108 )
            {
              v106 = v108 + 3;
              v107 = v108 + 4;
              --v108;
            }
            else
            {
              v107 = 5;
              v106 = 4;
            }
            v109 = *a1;
            if ( a1[2] < v107 )
            {
              v110 = sub_1987B0(a1, v109, v107, 1);
              *a1 = v110;
              v109 = v110;
            }
            a1[1] = v107;
            *(_BYTE *)(v109 + v106) = 0;
            *(_DWORD *)(*a1 + v108) = 538976288;
            if ( v104 == v105 )
              break;
            ++v105;
          }
          a3 = v104;
          v12 = v208;
          v7 = *(_QWORD *)v218;
          v10 = (_QWORD *)v223;
        }
      }
      if ( *(_DWORD *)v7 != 4 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1280);
LABEL_264:
        BUG();
      }
      v53 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)v217 = *(_QWORD *)(v53 + 8);
      if ( !*(_QWORD *)v217 )
      {
LABEL_123:
        if ( (v10[6] & 1) != 0 )
        {
          v128 = a1[1];
          if ( v128 )
          {
            v129 = v128 + 1;
            v130 = a1[1];
            --v128;
          }
          else
          {
            v130 = 1;
            v129 = 2;
          }
          v131 = *a1;
          if ( a1[2] < v129 )
          {
            v206 = sub_1987B0(a1, v131, v129, 1);
            *a1 = v206;
            v131 = v206;
          }
          a1[1] = v129;
          *(_BYTE *)(v131 + v128) = 10;
          *(_BYTE *)(*a1 + v130) = 0;
          if ( a3 > 0 )
          {
            v132 = 0;
            do
            {
              v135 = a1[1];
              if ( v135 )
              {
                v133 = v135 + 3;
                v134 = v135 + 4;
                --v135;
              }
              else
              {
                v134 = 5;
                v133 = 4;
              }
              v136 = *a1;
              if ( a1[2] < v134 )
              {
                v137 = sub_1987B0(a1, v136, v134, 1);
                *a1 = v137;
                v136 = v137;
              }
              a1[1] = v134;
              ++v132;
              *(_BYTE *)(v136 + v133) = 0;
              *(_DWORD *)(*a1 + v135) = 538976288;
            }
            while ( a3 != v132 );
          }
        }
        v96 = a1[1];
        if ( v96 )
        {
          v98 = v96 + 1;
          v97 = a1[1];
          --v96;
        }
        else
        {
          v97 = 1;
          v98 = 2;
        }
        v99 = *a1;
        if ( a1[2] < v98 )
        {
          v149 = sub_1987B0(a1, v99, v98, 1);
          *a1 = v149;
          v99 = v149;
        }
        a1[1] = v98;
        *(_BYTE *)(v99 + v96) = 93;
        *(_BYTE *)(*a1 + v97) = 0;
        return 1;
      }
      v207 = v12;
      v54 = 0;
      while ( 1 )
      {
LABEL_51:
        if ( !(unsigned __int8)sub_18ADE0(
                                 (int)a1,
                                 *(_DWORD *)v53 + 16 * (int)v54,
                                 v207,
                                 (int)v10,
                                 v50,
                                 a6,
                                 v207,
                                 v217[0],
                                 v223,
                                 (int)v224,
                                 v225,
                                 v226,
                                 v227,
                                 (int)v228,
                                 (int)v229,
                                 v230,
                                 SDWORD2(v230),
                                 v231,
                                 (__int64)v232,
                                 v233[0],
                                 v233[2],
                                 v234,
                                 src,
                                 v236,
                                 v237,
                                 v238,
                                 v239[0]) )
          return 0;
        if ( ++v54 == *(_QWORD *)v217 )
          goto LABEL_123;
        v55 = a1[1];
        if ( v55 )
        {
          v56 = v55 + 1;
          v50 = a1[1];
          --v55;
        }
        else
        {
          v50 = 1;
          v56 = 2;
        }
        v57 = *a1;
        if ( a1[2] < v56 )
        {
          v224 = (__int64 *)v50;
          v223 = v56;
          v95 = sub_1987B0(a1, v57, v56, 1);
          v50 = (__int64)v224;
          v56 = v223;
          *a1 = v95;
          v57 = v95;
        }
        a1[1] = v56;
        *(_BYTE *)(v57 + v55) = 44;
        *(_BYTE *)(*a1 + v50) = 0;
        if ( (v10[6] & 1) != 0 )
        {
          v58 = a1[1];
          if ( v58 )
          {
            v59 = v58 + 1;
            v50 = a1[1];
            --v58;
          }
          else
          {
            v50 = 1;
            v59 = 2;
          }
          v60 = *a1;
          if ( a1[2] < v59 )
          {
            v224 = (__int64 *)v50;
            v223 = v59;
            v127 = sub_1987B0(a1, v60, v59, 1);
            v50 = (__int64)v224;
            v59 = v223;
            *a1 = v127;
            v60 = v127;
          }
          a1[1] = v59;
          *(_BYTE *)(v60 + v58) = 10;
          *(_BYTE *)(*a1 + v50) = 0;
          if ( v207 > 0 )
            break;
        }
      }
      LODWORD(v50) = 0;
      break;
    case 5LL:
      v66 = 5;
      v67 = "false";
      if ( *((_BYTE *)a2 + 8) )
      {
        v66 = 4;
        v67 = "true";
      }
      v68 = a1[1];
      v69 = v66;
      if ( v68 )
        v69 = --v68 + v66;
      v70 = *a1;
      if ( a1[2] < v69 + 1 )
      {
        v111 = sub_1987B0(a1, v70, v69 + 1, 1);
        *a1 = v111;
        v70 = v111;
      }
      a1[1] = v69 + 1;
      *(_BYTE *)(v70 + v69) = 0;
      memmove((void *)(*a1 + v68), v67, v66);
      return 1;
    case 6LL:
      v71 = a1[1];
      if ( v71 )
      {
        v73 = v71 + 3;
        v72 = v71 + 4;
        --v71;
      }
      else
      {
        v72 = 5;
        v73 = 4;
      }
      v74 = *a1;
      if ( a1[2] < v72 )
      {
        v126 = sub_1987B0(a1, v74, v72, 1);
        *a1 = v126;
        v74 = v126;
      }
      a1[1] = v72;
      *(_BYTE *)(v74 + v73) = 0;
      *(_DWORD *)(*a1 + v71) = 1819047278;
      return 1;
    case 7LL:
      v15 = sub_1A6E50(&src, v239, a2[1]);
      v16 = a1[1];
      if ( v17 )
      {
        if ( v16 )
        {
          v75 = v16 + 2;
          v76 = v16 + 3;
          --v16;
        }
        else
        {
          v76 = 4;
          v75 = 3;
        }
        v77 = *a1;
        if ( a1[2] < v76 )
        {
          v151 = sub_1987B0(a1, v77, v76, 1);
          *a1 = v151;
          v77 = v151;
        }
        a1[1] = v76;
        *(_BYTE *)(v77 + v75) = 0;
        v78 = *a1 + v16;
        *(_WORD *)v78 = 24910;
        *(_BYTE *)(v78 + 2) = 78;
      }
      else
      {
        v18 = v15 - (_QWORD)&src;
        v19 = v18;
        v20 = v18;
        if ( v16 )
        {
          --v16;
          v20 = v18 + v16;
        }
        v21 = *a1;
        if ( a1[2] < v20 + 1 )
        {
          v150 = sub_1987B0(a1, v21, v20 + 1, 1);
          *a1 = v150;
          v21 = v150;
        }
        a1[1] = v20 + 1;
        *(_BYTE *)(v21 + v20) = 0;
        memmove((void *)(*a1 + v16), &src, v19);
      }
      return 1;
    default:
      return 0;
  }
  while ( 1 )
  {
    v64 = a1[1];
    if ( v64 )
    {
      v61 = v64 + 3;
      v62 = v64 + 4;
      v63 = *a1;
      --v64;
      if ( a1[2] >= v62 )
        goto LABEL_65;
    }
    else
    {
      v63 = *a1;
      v62 = 5;
      v61 = 4;
      if ( (unsigned __int64)a1[2] >= 5 )
        goto LABEL_65;
    }
    LODWORD(v225) = v50;
    v224 = (__int64 *)v61;
    v223 = v62;
    v65 = sub_1987B0(a1, v63, v62, 1);
    LODWORD(v50) = v225;
    v61 = (__int64)v224;
    *a1 = v65;
    v62 = v223;
    v63 = v65;
LABEL_65:
    a1[1] = v62;
    *(_BYTE *)(v63 + v61) = 0;
    *(_DWORD *)(*a1 + v64) = 538976288;
    if ( a3 == (_DWORD)v50 )
      goto LABEL_51;
    LODWORD(v50) = v50 + 1;
  }
}
