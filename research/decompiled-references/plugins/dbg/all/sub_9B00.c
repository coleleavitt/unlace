unsigned __int64 __fastcall sub_9B00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __m128i *a3,
        __int64 a4,
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
  void *exception; // rdi
  int v15; // r13d
  __int64 v16; // rbx
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rsi
  char v21; // dl
  __int64 v22; // rdx
  unsigned __int64 result; // rax
  char v24; // dl
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rsi
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rsi
  unsigned int *v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r9
  unsigned __int8 *v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r10
  char *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbx
  const char *v45; // rsi
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rsi
  char v49; // dl
  __int64 v50; // rdx
  _DWORD *v51; // rsi
  char v52; // cl
  char v53; // dl
  char v54; // dl
  __int64 v55; // rsi
  char v56; // cl
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rsi
  char v60; // dl
  __int64 v61; // rdx
  unsigned int *v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  unsigned int *v65; // rdx
  bool v66; // zf
  unsigned int v67; // r15d
  int v68; // r9d
  int v69; // r14d
  int v70; // r13d
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  char *v73; // rdi
  __int64 v74; // rcx
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdx
  int v80; // eax
  char *v81; // rcx
  int v82; // eax
  char *v83; // rcx
  __int64 v84; // rdx
  __m128i v85; // xmm0
  __int64 v86; // rsi
  __int64 v87; // rdx
  __m128i v88; // xmm0
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int16 *v92; // rcx
  __int16 v93; // ax
  _WORD *v94; // rdx
  unsigned __int16 v95; // ax
  bool v96; // cf
  unsigned __int64 v97; // rax
  __m128i v98; // xmm1
  __m128i v99; // xmm0
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  __int16 v102; // r13
  __int64 v103; // r12
  __int64 v104; // rax
  unsigned __int64 v105; // rcx
  unsigned __int8 *v106; // rax
  unsigned __int64 v107; // r8
  __int64 v108; // rdx
  unsigned __int8 *v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // r9
  char *v112; // rdi
  __int64 v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // r8
  char *v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rdi
  __int64 v123; // rax
  __m128i v124; // xmm0
  __int64 v125; // rdx
  unsigned __int16 *v126; // rdx
  unsigned __int8 *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  unsigned __int64 v130; // rdx
  __int64 v131; // r13
  unsigned __int16 v132; // r12
  __int64 v133; // rdi
  const char *v134; // rcx
  __int64 v135; // rdx
  unsigned __int64 v136; // rcx
  unsigned __int16 *v137; // rdx
  __int64 v138; // r8
  unsigned __int64 v139; // rdx
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // r9
  char *v142; // rdi
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // r13
  __int64 v146; // r14
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 func; // rax
  __int64 v150; // rdx
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // r8
  char *v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __m128 v159; // xmm4
  __m128 v160; // xmm5
  void *v161; // rdx
  unsigned __int8 *v162; // rax
  const char *v163; // rcx
  const char *v164; // r8
  unsigned __int16 v165; // ax
  unsigned __int16 v166; // r13
  const char *v167; // r8
  unsigned __int16 v168; // r12
  const char *v169; // r8
  unsigned __int8 *v170; // rcx
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // rax
  unsigned __int64 v174; // r8
  char *v175; // rdi
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __m128i v186; // [rsp+0h] [rbp-8C8h] BYREF
  int v187; // [rsp+1Ch] [rbp-8ACh]
  int v188; // [rsp+20h] [rbp-8A8h]
  int v189; // [rsp+24h] [rbp-8A4h]
  unsigned int v190; // [rsp+28h] [rbp-8A0h]
  int v191; // [rsp+2Ch] [rbp-89Ch]
  __m128i v192; // [rsp+30h] [rbp-898h] BYREF
  _OWORD v193[2]; // [rsp+40h] [rbp-888h] BYREF
  char v194[8]; // [rsp+60h] [rbp-868h] BYREF
  __int128 v195; // [rsp+68h] [rbp-860h]
  __int64 v196; // [rsp+78h] [rbp-850h]
  char v197[1024]; // [rsp+80h] [rbp-848h] BYREF
  char v198[1032]; // [rsp+480h] [rbp-448h] BYREF
  unsigned __int64 v199; // [rsp+888h] [rbp-40h]

  v15 = a2;
  v16 = a1;
  v199 = __readfsqword(0x28u);
  if ( (int)a2 <= 268 )
  {
    if ( (int)a2 > 255 )
    {
      switch ( (int)a2 )
      {
        case 256:
          v51 = *(_DWORD **)(a1 + 200);
          if ( v51 == (_DWORD *)-1LL )
            return v199 - __readfsqword(0x28u);
          v52 = 0;
          return sub_9120(a1, v51, a3->m128i_i64, v52);
        case 257:
        case 258:
        case 259:
          v24 = 0;
          return sub_8F80(a1, (__int64)a3, v24);
        case 260:
        case 261:
          v25 = *(_QWORD *)(a1 + 224);
          v26 = _mm_loadu_si128((const __m128i *)(a1 + 200));
          v27 = *(_QWORD *)(a1 + 216);
          if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v25 + 1) )
          {
            v186 = v26;
            v179 = qvector_reserve(a1 + 216, v27, v25 + 1, 16);
            v25 = *(_QWORD *)(a1 + 224);
            v26 = _mm_load_si128(&v186);
            *(_QWORD *)(a1 + 216) = v179;
            v27 = v179;
          }
          *(__m128i *)(v27 + 16 * v25) = v26;
          v28 = 0;
          ++*(_QWORD *)(a1 + 224);
          goto LABEL_22;
        case 262:
          v57 = *(_QWORD *)(a1 + 224);
          v58 = _mm_loadu_si128((const __m128i *)(a1 + 200));
          v59 = *(_QWORD *)(a1 + 216);
          if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v57 + 1) )
          {
            v186 = v58;
            v177 = qvector_reserve(a1 + 216, v59, v57 + 1, 16);
            v57 = *(_QWORD *)(a1 + 224);
            v58 = _mm_load_si128(&v186);
            *(_QWORD *)(a1 + 216) = v177;
            v59 = v177;
          }
          *(__m128i *)(v59 + 16 * v57) = v58;
          v60 = 0;
          ++*(_QWORD *)(a1 + 224);
          goto LABEL_66;
        case 263:
          v46 = *(_QWORD *)(a1 + 224);
          v47 = _mm_loadu_si128((const __m128i *)(a1 + 200));
          v48 = *(_QWORD *)(a1 + 216);
          if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v46 + 1) )
          {
            v186 = v47;
            v178 = qvector_reserve(a1 + 216, v48, v46 + 1, 16);
            v46 = *(_QWORD *)(a1 + 224);
            v47 = _mm_load_si128(&v186);
            *(_QWORD *)(a1 + 216) = v178;
            v48 = v178;
          }
          *(__m128i *)(v48 + 16 * v46) = v47;
          v49 = 0;
          ++*(_QWORD *)(a1 + 224);
          goto LABEL_52;
        case 264:
          v18 = *(_QWORD *)(a1 + 224);
          v19 = _mm_loadu_si128((const __m128i *)(a1 + 200));
          v20 = *(_QWORD *)(a1 + 216);
          if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v18 + 1) )
          {
            v186 = v19;
            v181 = qvector_reserve(a1 + 216, v20, v18 + 1, 16);
            v18 = *(_QWORD *)(a1 + 224);
            v19 = _mm_load_si128(&v186);
            *(_QWORD *)(a1 + 216) = v181;
            v20 = v181;
          }
          *(__m128i *)(v20 + 16 * v18) = v19;
          v21 = 0;
          ++*(_QWORD *)(a1 + 224);
          goto LABEL_9;
        case 265:
          v53 = 0;
          return sub_97F0(a1, a3, v53);
        case 266:
          v54 = 0;
          return sub_84A0(a1, (__int64)a3, v54, a4, a5, a6);
        case 268:
          v55 = *(_QWORD *)(a1 + 200);
          if ( v55 == -1 )
            return v199 - __readfsqword(0x28u);
          v56 = 0;
          goto LABEL_62;
        default:
          return v199 - __readfsqword(0x28u);
      }
    }
    if ( (unsigned int)(a2 - 1) > 0xD )
      return v199 - __readfsqword(0x28u);
    switch ( (int)a2 )
    {
      case 1:
        v129 = a3[1].m128i_i64[0];
        v130 = a3[1].m128i_u64[1];
        a2 = v129 + 1;
        if ( v130 < v129 + 1 )
          goto LABEL_305;
        if ( v130 < v129 + 2 )
        {
          a3[1].m128i_i64[0] = a2;
          goto LABEL_305;
        }
        a3[1].m128i_i64[0] = v129 + 2;
        v131 = *(unsigned __int8 *)(v129 + 1);
        if ( v130 < v129 + 4 )
          goto LABEL_305;
        v132 = *(_WORD *)(v129 + 2);
        a3[1].m128i_i64[0] = v129 + 4;
        v133 = *(_QWORD *)(a1 + 184);
        if ( v133 == -1 )
          return v199 - __readfsqword(0x28u);
        v134 = *(const char **)(v16 + 192);
        if ( !v134 )
          return v199 - __readfsqword(0x28u);
        sub_4FE0(v133, 1u, (__int64)"Object file: %s\n", v134);
        switch ( v131 )
        {
          case 0LL:
            v163 = "C";
            break;
          case 1LL:
            v163 = "C++";
            break;
          case 2LL:
            v163 = "Fortran";
            break;
          case 3LL:
            v163 = "Masm";
            break;
          case 4LL:
            v163 = "Pascal";
            break;
          case 5LL:
            v163 = "Basic";
            break;
          case 6LL:
            v163 = "Cobol";
            break;
          case 7LL:
            v163 = "Linker";
            break;
          default:
            v163 = "Unknown";
            break;
        }
        sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"Language   : %s\n", v163);
        sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"Flags      : (%04X)\n", v132);
        if ( (v132 & 1) != 0 )
          sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"  Pcode is present\n");
        if ( (v132 & 6) != 0 )
          sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"  Floating point presicion conforms ANSI C rules\n");
        if ( (v132 & 0x800) != 0 )
          sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"  32-bit program\n");
        v164 = "Hardware";
        v165 = (v132 >> 3) & 3;
        if ( v165 )
        {
          v164 = "Emulator";
          if ( v165 != 1 )
          {
            v164 = "Unknown";
            if ( v165 == 2 )
              v164 = "Altmath";
          }
        }
        sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"Floating package: (%d) %s\n", v165, v164);
        v166 = (unsigned __int8)v132 >> 5;
        v167 = "Far";
        if ( v166 != 1 )
        {
          v167 = "Huge";
          if ( v166 != 2 )
          {
            v167 = "Near";
            if ( (unsigned __int8)v132 >> 5 )
              v167 = "Unknown";
          }
        }
        v168 = HIBYTE(v132) & 7;
        sub_49D0(*(_QWORD *)(v16 + 184), (__int64)"%s      : (%d) %s\n", "Code model", v166, v167);
        a1 = *(_QWORD *)(v16 + 184);
        v169 = "Far";
        if ( v168 != 1 )
        {
          v169 = "Huge";
          if ( v168 != 2 )
          {
            v169 = "Near";
            if ( v168 )
              v169 = "Unknown";
          }
        }
        sub_49D0(a1, (__int64)"%s      : (%d) %s\n", "Data model", v168, v169);
        v170 = (unsigned __int8 *)a3[1].m128i_i64[0];
        v171 = a3[1].m128i_u64[1];
        a2 = (unsigned __int64)(v170 + 1);
        if ( v171 >= (unsigned __int64)(v170 + 1) )
        {
          a3[1].m128i_i64[0] = a2;
          v172 = *v170;
          v173 = (unsigned int)(v171 - a2);
          if ( v173 > v172 )
            v173 = v172;
          v174 = a2 + v173;
          if ( v171 >= a2 + v173 && v174 >= a2 )
          {
            v175 = v197;
            if ( (unsigned int)v173 >= 8 )
            {
              qmemcpy(v197, (const void *)a2, 8 * (v173 >> 3));
              a2 += 8 * (v173 >> 3);
              v175 = &v197[8 * (v173 >> 3)];
            }
            v176 = 0;
            if ( (v173 & 4) != 0 )
            {
              *(_DWORD *)v175 = *(_DWORD *)a2;
              v176 = 4;
            }
            if ( (v173 & 2) != 0 )
            {
              *(_WORD *)&v175[v176] = *(_WORD *)(a2 + v176);
              v176 += 2;
            }
            if ( (v173 & 1) != 0 )
              v175[v176] = *(_BYTE *)(a2 + v176);
            v197[v173] = 0;
            a3[1].m128i_i64[0] = v174;
            sub_4FE0(*(_QWORD *)(v16 + 184), 1u, (__int64)"Version    : %s\n", v197);
            return v199 - __readfsqword(0x28u);
          }
        }
        break;
      case 2:
        goto LABEL_186;
      case 3:
        goto LABEL_175;
      case 6:
        v123 = *(_QWORD *)(a1 + 224);
        if ( !v123 )
          sub_3660(a1, a2);
        v124 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 216) + 16LL * *(_QWORD *)(a1 + 224) - 16));
        *(_QWORD *)(a1 + 224) = v123 - 1;
        *(__m128i *)(a1 + 200) = v124;
        return v199 - __readfsqword(0x28u);
      case 9:
        v115 = a3[1].m128i_i64[0];
        v116 = a3[1].m128i_u64[1];
        if ( v116 < v115 + 4 )
          goto LABEL_305;
        a2 = v115 + 5;
        if ( v116 < v115 + 5 )
        {
          a3[1].m128i_i64[0] = v115 + 4;
        }
        else
        {
          a3[1].m128i_i64[0] = a2;
          v117 = *(unsigned __int8 *)(v115 + 4);
          v118 = (unsigned int)(v116 - a2);
          if ( v118 > v117 )
            v118 = v117;
          v119 = a2 + v118;
          if ( v116 >= a2 + v118 && v119 >= a2 )
          {
            v120 = v197;
            if ( (unsigned int)v118 >= 8 )
            {
              qmemcpy(v197, (const void *)a2, 8 * (v118 >> 3));
              a2 += 8 * (v118 >> 3);
              v120 = &v197[8 * (v118 >> 3)];
            }
            v121 = 0;
            if ( (v118 & 4) != 0 )
            {
              *(_DWORD *)v120 = *(_DWORD *)a2;
              v121 = 4;
            }
            if ( (v118 & 2) != 0 )
            {
              *(_WORD *)&v120[v121] = *(_WORD *)(a2 + v121);
              v121 += 2;
            }
            if ( (v118 & 1) != 0 )
              v120[v121] = *(_BYTE *)(a2 + v121);
            a3[1].m128i_i64[0] = v119;
            v122 = *(_QWORD *)(v16 + 192);
            v197[v118] = 0;
            qfree(v122);
            *(_QWORD *)(v16 + 192) = qstrdup(v197);
            return v199 - __readfsqword(0x28u);
          }
        }
        goto LABEL_305;
      case 12:
        goto LABEL_138;
      case 13:
        if ( *(_QWORD *)(a1 + 200) == -1 )
          return v199 - __readfsqword(0x28u);
        v100 = a3[1].m128i_i64[0];
        v101 = a3[1].m128i_u64[1];
        a2 = v100 + 2;
        if ( v101 < v100 + 2 )
          goto LABEL_305;
        v102 = *(_WORD *)v100;
        if ( v101 >= v100 + 3 )
        {
          a3[1].m128i_i64[0] = v100 + 3;
          v103 = *(unsigned __int8 *)(v100 + 2);
          if ( (v102 & 1) != 0 )
          {
            a1 = *(_QWORD *)(a1 + 200);
            sub_49D0(a1, (__int64)"Push varargs right to left");
          }
          if ( (v102 & 2) != 0 )
          {
            a1 = *(_QWORD *)(v16 + 200);
            sub_49D0(a1, (__int64)"Callee stack cleanup");
          }
          switch ( v103 )
          {
            case 0LL:
              return sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Void return");
            case 1LL:
              v162 = (unsigned __int8 *)a3[1].m128i_i64[0];
              a2 = (unsigned __int64)(v162 + 1);
              if ( a3[1].m128i_i64[1] < (unsigned __int64)(v162 + 1) )
                goto LABEL_305;
              a3[1].m128i_i64[0] = a2;
              sub_4D80(*(_QWORD *)(v16 + 8), a2, *v162, v197);
              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Return value is in %s", v197);
              break;
            case 2LL:
              return sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Indirect caller-allocated near");
            case 3LL:
              return sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Indirect caller-allocated far");
            case 4LL:
              return sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Indirect returnee-allocated near");
            case 5LL:
              return sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Indirect returnee-allocated far");
            default:
              return v199 - __readfsqword(0x28u);
          }
          return v199 - __readfsqword(0x28u);
        }
        a3[1].m128i_i64[0] = a2;
        goto LABEL_305;
      case 14:
        v92 = (__int16 *)a3[1].m128i_i64[0];
        a1 = a3[1].m128i_u64[1];
        if ( a1 < (unsigned __int64)(v92 + 1) )
          goto LABEL_305;
        v93 = *v92;
        a3[1].m128i_i64[0] = (__int64)(v92 + 1);
        v94 = v92 + 2;
        v95 = v93 - 2;
        if ( a1 < (unsigned __int64)(v92 + 2) )
          goto LABEL_305;
        a2 = (unsigned __int16)v92[1];
        a3[1].m128i_i64[0] = (__int64)v94;
        v96 = __CFADD__(v94, v95);
        v97 = (unsigned __int64)v94 + v95;
        v98 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v94, (__m128i)v97);
        if ( v96 || a1 < v97 )
          goto LABEL_305;
        v99 = _mm_loadl_epi64(a3);
        a3[1].m128i_i64[0] = v97;
        v193[1] = v98;
        v193[0] = _mm_unpacklo_epi64(v99, (__m128i)(unsigned __int64)v94);
        sub_9B00(v16, a2, v193);
        return v199 - __readfsqword(0x28u);
      default:
        return v199 - __readfsqword(0x28u);
    }
    goto LABEL_305;
  }
  if ( (int)a2 > 526 )
  {
    if ( (int)a2 > 769 )
    {
      switch ( (int)a2 )
      {
        case 4097:
LABEL_186:
          v135 = a3[1].m128i_i64[0];
          v136 = a3[1].m128i_u64[1];
          if ( *(_DWORD *)(a1 + 132) == 11 )
          {
            v137 = (unsigned __int16 *)(v135 + 4);
            if ( v136 < (unsigned __int64)v137 )
              break;
          }
          else
          {
            v137 = (unsigned __int16 *)(v135 + 2);
            if ( v136 < (unsigned __int64)v137 )
              break;
          }
          a3[1].m128i_i64[0] = (__int64)v137;
          if ( v136 >= (unsigned __int64)(v137 + 1) )
          {
            a2 = (unsigned __int64)v137 + 3;
            v138 = *v137;
            if ( v136 < (unsigned __int64)v137 + 3 )
            {
              a3[1].m128i_i64[0] = (__int64)(v137 + 1);
            }
            else
            {
              a3[1].m128i_i64[0] = a2;
              v139 = *((unsigned __int8 *)v137 + 2);
              v140 = (unsigned int)(v136 - a2);
              if ( v140 > v139 )
                v140 = v139;
              v141 = a2 + v140;
              if ( v136 >= a2 + v140 && v141 >= a2 )
              {
                v142 = v197;
                if ( (unsigned int)v140 >= 8 )
                {
                  qmemcpy(v197, (const void *)a2, 8 * (v140 >> 3));
                  a2 += 8 * (v140 >> 3);
                  v142 = &v197[8 * (v140 >> 3)];
                  v136 = 0;
                }
                v143 = 0;
                if ( (v140 & 4) != 0 )
                {
                  *(_DWORD *)v142 = *(_DWORD *)a2;
                  v143 = 4;
                }
                if ( (v140 & 2) != 0 )
                {
                  v136 = *(unsigned __int16 *)(a2 + v143);
                  *(_WORD *)&v142[v143] = v136;
                  v143 += 2;
                }
                if ( (v140 & 1) != 0 )
                {
                  v136 = *(unsigned __int8 *)(a2 + v143);
                  v142[v143] = v136;
                }
                a3[1].m128i_i64[0] = v141;
                v66 = *(_QWORD *)(v16 + 200) == -1;
                v197[v140] = 0;
                if ( !v66 )
                {
                  v144 = (unsigned __int16)v138;
                  sub_4ED0(*(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL), (unsigned __int16)v138, (__int64)v198, v136, v138);
                  v145 = *(_QWORD *)(v16 + 200);
                  v146 = *(_QWORD *)(v16 + 208);
                  func = get_func(v145, v144, v147, v148);
                  add_regvar(func, v145, v146, v198, v197, 0);
                  if ( (debug & 0x10) != 0 )
                    sub_5170(
                      (__int64)"(%a, %a): %s = %s\n",
                      a7,
                      *(double *)a8.m128_u64,
                      *(const char **)(v16 + 200),
                      *(const char **)(v16 + 208));
                }
                return v199 - __readfsqword(0x28u);
              }
            }
          }
          break;
        case 4098:
LABEL_175:
          v125 = a3[1].m128i_i64[0];
          a1 = a3[1].m128i_u64[1];
          if ( *(_DWORD *)(v16 + 132) == 11 )
          {
            v126 = (unsigned __int16 *)(v125 + 4);
            if ( a1 < (unsigned __int64)v126 )
              break;
          }
          else
          {
            v126 = (unsigned __int16 *)(v125 + 2);
            if ( a1 < (unsigned __int64)v126 )
              break;
          }
          v127 = (unsigned __int8 *)(v126 + 1);
          a3[1].m128i_i64[0] = (__int64)v126;
          if ( a1 >= (unsigned __int64)(v126 + 1) )
          {
            v128 = *v126;
            a3[1].m128i_i64[0] = (__int64)v127;
            LOWORD(v193[0]) = v128;
            if ( (v128 & 0x8000u) == 0LL )
            {
              *(_QWORD *)((char *)v193 + 2) = v193;
            }
            else
            {
              LOWORD(v128) = v128 + 0x8000;
              *(_QWORD *)((char *)v193 + 2) = v126 + 1;
              switch ( v128 )
              {
                case 0LL:
                  v150 = 1;
                  goto LABEL_206;
                case 1LL:
                case 2LL:
                  v150 = 2;
                  goto LABEL_206;
                case 3LL:
                case 4LL:
                case 5LL:
                  v150 = 4;
                  goto LABEL_206;
                case 6LL:
                case 9LL:
                case 10LL:
                case 12LL:
                  v150 = 8;
                  goto LABEL_206;
                case 7LL:
                  v150 = 10;
                  goto LABEL_206;
                case 8LL:
                case 13LL:
                  v150 = 16;
                  goto LABEL_206;
                case 11LL:
                  v150 = 6;
                  goto LABEL_206;
                case 14LL:
                  v150 = 20;
                  goto LABEL_206;
                case 15LL:
                  v150 = 32;
                  goto LABEL_206;
                case 16LL:
                  v127 = (unsigned __int8 *)(v126 + 2);
                  if ( a1 < (unsigned __int64)(v126 + 2) )
                    goto LABEL_305;
                  v150 = v126[1];
                  a3[1].m128i_i64[0] = (__int64)v127;
LABEL_206:
                  v96 = __CFADD__(v150, v127);
                  v127 += v150;
                  if ( v96 || a1 < (unsigned __int64)v127 )
                    goto LABEL_305;
                  a3[1].m128i_i64[0] = (__int64)v127;
                  break;
                default:
                  exception = __cxa_allocate_exception(1u);
                  __cxa_throw(exception, (struct type_info *)&`typeinfo for'bad_cv_t, nullptr);
              }
            }
            a2 = (unsigned __int64)(v127 + 1);
            if ( a1 >= (unsigned __int64)(v127 + 1) )
            {
              a3[1].m128i_i64[0] = a2;
              v151 = *v127;
              v152 = v151;
              if ( (unsigned int)(a1 - a2) <= v151 )
                v152 = (unsigned int)(a1 - a2);
              v153 = a2 + v152;
              if ( a1 >= a2 + v152 && v153 >= a2 )
              {
                v154 = v197;
                if ( (unsigned int)v152 >= 8 )
                {
                  qmemcpy(v197, (const void *)a2, 8 * (v152 >> 3));
                  a2 += 8 * (v152 >> 3);
                  v154 = &v197[8 * (v152 >> 3)];
                }
                v155 = 0;
                if ( (v152 & 4) != 0 )
                {
                  *(_DWORD *)v154 = *(_DWORD *)a2;
                  v155 = 4;
                }
                if ( (v152 & 2) != 0 )
                {
                  *(_WORD *)&v154[v155] = *(_WORD *)(a2 + v155);
                  v155 += 2;
                }
                if ( (v152 & 1) != 0 )
                  v154[v155] = *(_BYTE *)(a2 + v155);
                a3[1].m128i_i64[0] = v153;
                v197[v152] = 0;
                v194[0] = 2;
                v196 = 0;
                v195 = 0;
                if ( (unsigned __int8)sub_83B0((unsigned __int16 *)v193, (__int64)v194) )
                {
                  idcv_string(v194);
                  v161 = &unk_FFEA;
                  if ( *((_QWORD *)&v195 + 1) )
                    v161 = (void *)v195;
                  sub_50A0(
                    (__int64)"%s = %s",
                    (__int64)v197,
                    (__int64)v161,
                    v156,
                    v157,
                    v158,
                    (__m128)0LL,
                    a8,
                    a9,
                    a10,
                    v159,
                    v160,
                    a13,
                    a14,
                    v186.m128i_i8[0]);
                }
                free_idcv(v194);
                return v199 - __readfsqword(0x28u);
              }
            }
          }
          break;
        case 4101:
LABEL_138:
          if ( *(_QWORD *)(a1 + 200) == -1 )
            return v199 - __readfsqword(0x28u);
          v104 = a3[1].m128i_i64[0];
          v105 = a3[1].m128i_u64[1];
          if ( *(_DWORD *)(a1 + 132) == 11 )
          {
            v106 = (unsigned __int8 *)(v104 + 4);
            if ( v105 < (unsigned __int64)v106 )
              break;
          }
          else
          {
            v106 = (unsigned __int8 *)(v104 + 2);
            if ( v105 < (unsigned __int64)v106 )
              break;
          }
          v107 = (unsigned __int64)(v106 + 1);
          if ( v105 < (unsigned __int64)(v106 + 1) )
          {
            a3[1].m128i_i64[0] = (__int64)v106;
          }
          else
          {
            a3[1].m128i_i64[0] = v107;
            v108 = *v106;
            v109 = (unsigned __int8 *)(v107 + v108);
            if ( v105 >= v107 + v108 && (unsigned __int64)v109 >= v107 )
            {
              a2 = (unsigned __int64)(v109 + 1);
              if ( v105 < (unsigned __int64)(v109 + 1) )
              {
                a3[1].m128i_i64[0] = (__int64)v109;
              }
              else
              {
                a3[1].m128i_i64[0] = a2;
                a1 = *v109;
                v110 = a1;
                if ( (unsigned int)(v105 - a2) <= a1 )
                  v110 = (unsigned int)(v105 - a2);
                v111 = a2 + v110;
                if ( v105 >= a2 + v110 && v111 >= a2 )
                {
                  v112 = v198;
                  if ( (unsigned int)v110 >= 8 )
                  {
                    qmemcpy(v198, (const void *)a2, 8 * (v110 >> 3));
                    a2 += 8 * (v110 >> 3);
                    v112 = &v198[8 * (v110 >> 3)];
                  }
                  v113 = 0;
                  if ( (v110 & 4) != 0 )
                  {
                    *(_DWORD *)v112 = *(_DWORD *)a2;
                    v113 = 4;
                  }
                  if ( (v110 & 2) != 0 )
                  {
                    *(_WORD *)&v112[v113] = *(_WORD *)(a2 + v113);
                    v113 += 2;
                  }
                  if ( (v110 & 1) != 0 )
                    v112[v113] = *(_BYTE *)(a2 + v113);
                  a3[1].m128i_i64[0] = v111;
                  v114 = *(_QWORD *)(v16 + 8);
                  v198[v110] = 0;
                  sub_4D80(v114, v107, v108, v197);
                  sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"%s = %s", v198, v197);
                  return v199 - __readfsqword(0x28u);
                }
              }
            }
          }
          break;
        case 4102:
LABEL_112:
          v51 = *(_DWORD **)(a1 + 200);
          if ( v51 == (_DWORD *)-1LL )
            return v199 - __readfsqword(0x28u);
          v52 = 1;
          return sub_9120(a1, v51, a3->m128i_i64, v52);
        case 4103:
        case 4104:
        case 4105:
LABEL_18:
          v24 = 1;
          return sub_8F80(a1, (__int64)a3, v24);
        case 4106:
        case 4107:
LABEL_23:
          v30 = *(_QWORD *)(a1 + 224);
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 200));
          v32 = *(_QWORD *)(a1 + 216);
          if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v30 + 1) )
          {
            v186 = v31;
            v180 = qvector_reserve(a1 + 216, v32, v30 + 1, 16);
            v30 = *(_QWORD *)(a1 + 224);
            v31 = _mm_load_si128(&v186);
            *(_QWORD *)(a1 + 216) = v180;
            v32 = v180;
          }
          *(__m128i *)(v32 + 16 * v30) = v31;
          v28 = 1;
          ++*(_QWORD *)(a1 + 224);
LABEL_22:
          *(_QWORD *)(a1 + 200) = sub_8B60(a1, (__int64)a3, v28);
          *(_QWORD *)(a1 + 208) = v29;
          return v199 - __readfsqword(0x28u);
        case 4110:
        case 4111:
LABEL_26:
          v33 = (unsigned int *)a3[1].m128i_i64[0];
          v34 = a3[1].m128i_u64[1];
          if ( *(_DWORD *)(a1 + 132) != 11 )
            goto LABEL_27;
          if ( v34 < (unsigned __int64)++v33 )
            break;
          a3[1].m128i_i64[0] = (__int64)v33;
LABEL_27:
          if ( v34 < (unsigned __int64)(v33 + 1) )
            break;
          v35 = *v33;
          a3[1].m128i_i64[0] = (__int64)(v33 + 1);
          v36 = (unsigned __int8 *)v33 + 6;
          if ( v34 < (unsigned __int64)v33 + 6 )
            break;
          v37 = *((unsigned __int16 *)v33 + 2);
          a3[1].m128i_i64[0] = (__int64)v36;
          if ( *(_DWORD *)(a1 + 132) == 11 )
            goto LABEL_32;
          v36 = (unsigned __int8 *)(v33 + 2);
          if ( v34 < (unsigned __int64)(v33 + 2) )
            break;
          a3[1].m128i_i64[0] = (__int64)v36;
LABEL_32:
          a2 = (unsigned __int64)(v36 + 1);
          if ( v34 < (unsigned __int64)(v36 + 1) )
            break;
          a3[1].m128i_i64[0] = a2;
          v38 = *v36;
          v39 = (unsigned int)(v34 - a2);
          if ( v39 > v38 )
            v39 = v38;
          v40 = v39 + a2;
          if ( __CFADD__(v39, a2) || v34 < v40 )
            break;
          v41 = v197;
          if ( (unsigned int)v39 >= 8 )
          {
            qmemcpy(v197, (const void *)a2, 8 * (v39 >> 3));
            a2 += 8 * (v39 >> 3);
            v41 = &v197[8 * (v39 >> 3)];
            v38 = 0;
          }
          v42 = 0;
          if ( (v39 & 4) != 0 )
          {
            *(_DWORD *)v41 = *(_DWORD *)a2;
            v42 = 4;
          }
          if ( (v39 & 2) != 0 )
          {
            v38 = *(unsigned __int16 *)(a2 + v42);
            *(_WORD *)&v41[v42] = v38;
            v42 += 2;
          }
          if ( (v39 & 1) != 0 )
          {
            v38 = *(unsigned __int8 *)(a2 + v42);
            v41[v42] = v38;
          }
          a3[1].m128i_i64[0] = v40;
          v197[v39] = 0;
          v43 = sub_81F0(v16, (unsigned __int16)v37, v35, v38, v37, v35);
          v44 = v43;
          if ( v43 != -1 )
          {
            set_name(v43, v197, 1281);
            v45 = "Global Thread Storage data";
            if ( v15 == 525 )
              v45 = "Local Thread Storage data";
            sub_49D0(v44, (__int64)v45);
          }
          return v199 - __readfsqword(0x28u);
        case 4112:
        case 4113:
          goto LABEL_68;
        default:
          return v199 - __readfsqword(0x28u);
      }
LABEL_305:
      sub_3660(a1, a2);
    }
    if ( (int)a2 > 767 )
    {
LABEL_68:
      v62 = (unsigned int *)a3[1].m128i_i64[0];
      v63 = a3[1].m128i_u64[1];
      if ( v63 < (unsigned __int64)(v62 + 1) )
        goto LABEL_305;
      a2 = (unsigned __int64)(v62 + 2);
      if ( v63 < (unsigned __int64)(v62 + 2) )
      {
        a3[1].m128i_i64[0] = (__int64)(v62 + 1);
      }
      else if ( v63 < (unsigned __int64)(v62 + 3) )
      {
        a3[1].m128i_i64[0] = a2;
      }
      else
      {
        a3[1].m128i_i64[0] = (__int64)(v62 + 3);
        if ( v63 < (unsigned __int64)(v62 + 4) )
          goto LABEL_305;
        a2 = (unsigned __int64)(v62 + 5);
        v64 = v62[3];
        if ( v63 < (unsigned __int64)(v62 + 5) )
        {
          a3[1].m128i_i64[0] = (__int64)(v62 + 4);
        }
        else if ( v63 < (unsigned __int64)(v62 + 6) )
        {
          a3[1].m128i_i64[0] = a2;
        }
        else
        {
          a3[1].m128i_i64[0] = (__int64)(v62 + 6);
          if ( v63 >= (unsigned __int64)(v62 + 7) )
          {
            a1 = v62[6];
            a3[1].m128i_i64[0] = (__int64)(v62 + 7);
            v186.m128i_i32[0] = a1;
            if ( v63 >= (unsigned __int64)(v62 + 8) )
            {
              a1 = v62[7];
              a3[1].m128i_i64[0] = (__int64)(v62 + 8);
              v187 = a1;
              if ( v63 >= (unsigned __int64)(v62 + 9) )
              {
                a1 = v62[8];
                a3[1].m128i_i64[0] = (__int64)(v62 + 9);
                v65 = v62 + 10;
                v188 = a1;
                if ( v63 >= (unsigned __int64)(v62 + 10) )
                {
                  a1 = v62[9];
                  a3[1].m128i_i64[0] = (__int64)v65;
                  v66 = *(_DWORD *)(v16 + 132) == 11;
                  v189 = a1;
                  if ( v66 )
                  {
                    v65 = v62 + 11;
                    if ( v63 < (unsigned __int64)(v62 + 11) )
                      goto LABEL_305;
                    a3[1].m128i_i64[0] = (__int64)v65;
                  }
                  if ( v63 >= (unsigned __int64)(v65 + 1) )
                  {
                    a1 = (unsigned __int64)v65 + 6;
                    v67 = *v65;
                    a3[1].m128i_i64[0] = (__int64)(v65 + 1);
                    if ( v63 >= (unsigned __int64)v65 + 6 )
                    {
                      v68 = *((unsigned __int16 *)v65 + 2);
                      a3[1].m128i_i64[0] = a1;
                      if ( *(_DWORD *)(v16 + 132) != 11 )
                      {
                        a1 = (unsigned __int64)(v65 + 2);
                        if ( v63 < (unsigned __int64)(v65 + 2) )
                          goto LABEL_305;
                        a3[1].m128i_i64[0] = a1;
                      }
                      if ( v63 >= a1 + 1 )
                      {
                        a3[1].m128i_i64[0] = a1 + 1;
                        v69 = *(unsigned __int8 *)a1;
                        if ( v63 >= a1 + 2 )
                        {
                          a2 = a1 + 3;
                          a3[1].m128i_i64[0] = a1 + 2;
                          v70 = *(unsigned __int8 *)(a1 + 1);
                          if ( v63 >= a1 + 3 )
                          {
                            a3[1].m128i_i64[0] = a2;
                            v71 = (unsigned int)(v63 - a2);
                            if ( v71 > *(unsigned __int8 *)(a1 + 2) )
                              v71 = *(unsigned __int8 *)(a1 + 2);
                            v72 = v71 + a2;
                            if ( !__CFADD__(v71, a2) && v63 >= v72 )
                            {
                              v73 = v197;
                              if ( (unsigned int)v71 >= 8 )
                              {
                                qmemcpy(v197, (const void *)a2, 8 * (v71 >> 3));
                                a2 += 8 * (v71 >> 3);
                                v73 = &v197[8 * (v71 >> 3)];
                              }
                              v74 = 0;
                              if ( (v71 & 4) != 0 )
                              {
                                *(_DWORD *)v73 = *(_DWORD *)a2;
                                v74 = 4;
                              }
                              if ( (v71 & 2) != 0 )
                              {
                                *(_WORD *)&v73[v74] = *(_WORD *)(a2 + v74);
                                v74 += 2;
                              }
                              if ( (v71 & 1) != 0 )
                                v73[v74] = *(_BYTE *)(a2 + v74);
                              a3[1].m128i_i64[0] = v72;
                              v75 = _mm_loadu_si128((const __m128i *)(v16 + 200));
                              v197[v71] = 0;
                              v76 = *(_QWORD *)(v16 + 224);
                              v77 = *(_QWORD *)(v16 + 216);
                              if ( *(_QWORD *)(v16 + 232) < (unsigned __int64)(v76 + 1) )
                              {
                                v191 = v68;
                                v190 = v64;
                                v192 = v75;
                                v185 = qvector_reserve(v16 + 216, v77, v76 + 1, 16);
                                v75 = _mm_load_si128(&v192);
                                LOWORD(v68) = v191;
                                *(_QWORD *)(v16 + 216) = v185;
                                v77 = v185;
                                v64 = v190;
                                v76 = *(_QWORD *)(v16 + 224);
                              }
                              *(__m128i *)(v77 + 16 * v76) = v75;
                              ++*(_QWORD *)(v16 + 224);
                              v78 = sub_8750(v16, v68, v67, (__int64)v197, v64, 0);
                              *(_QWORD *)(v16 + 200) = v78;
                              *(_QWORD *)(v16 + 208) = v79;
                              sub_49D0(v78, (__int64)"Int regmask: %08X\n", v186.m128i_i32[0]);
                              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"FP  regmask: %08X\n", v187);
                              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Int offset : %08X\n", v188);
                              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"FP  offset : %08X\n", v189);
                              v80 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL);
                              if ( v80 == 7 )
                              {
                                v81 = sub_3FF0(v69);
                              }
                              else if ( v80 == 12 )
                              {
                                v81 = sub_4280(v69);
                              }
                              else
                              {
                                v81 = "?";
                                if ( !v80 )
                                  v81 = sub_3D90(v69);
                              }
                              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Return reg : %02X (%s)\n", v69, v81);
                              v82 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL);
                              if ( v82 == 7 )
                              {
                                v83 = sub_3FF0(v70);
                              }
                              else if ( v82 == 12 )
                              {
                                v83 = sub_4280(v70);
                              }
                              else
                              {
                                v83 = "?";
                                if ( !v82 )
                                  v83 = sub_3D90(v70);
                              }
                              sub_49D0(*(_QWORD *)(v16 + 200), (__int64)"Frame ptr  : %02X (%s)\n", v70, v83);
                              return v199 - __readfsqword(0x28u);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_305;
    }
    return v199 - __readfsqword(0x28u);
  }
  if ( (int)a2 <= 511 )
    return v199 - __readfsqword(0x28u);
  switch ( (int)a2 )
  {
    case 512:
      goto LABEL_112;
    case 513:
    case 514:
    case 515:
      goto LABEL_18;
    case 516:
    case 517:
      goto LABEL_23;
    case 518:
      v90 = *(_QWORD *)(a1 + 224);
      v58 = _mm_loadu_si128((const __m128i *)(a1 + 200));
      v91 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v90 + 1) )
      {
        v186 = v58;
        v184 = qvector_reserve(a1 + 216, v91, v90 + 1, 16);
        v90 = *(_QWORD *)(a1 + 224);
        v58 = _mm_load_si128(&v186);
        *(_QWORD *)(a1 + 216) = v184;
        v91 = v184;
      }
      *(__m128i *)(v91 + 16 * v90) = v58;
      v60 = 1;
      ++*(_QWORD *)(a1 + 224);
LABEL_66:
      *(_QWORD *)(a1 + 200) = sub_87E0(a1, (__int64)a3, v60, *(double *)v58.m128i_i64);
      *(_QWORD *)(a1 + 208) = v61;
      return v199 - __readfsqword(0x28u);
    case 519:
      v84 = *(_QWORD *)(a1 + 224);
      v85 = _mm_loadu_si128((const __m128i *)(a1 + 200));
      v86 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v84 + 1) )
      {
        v186 = v85;
        v182 = qvector_reserve(a1 + 216, v86, v84 + 1, 16);
        v84 = *(_QWORD *)(a1 + 224);
        v85 = _mm_load_si128(&v186);
        *(_QWORD *)(a1 + 216) = v182;
        v86 = v182;
      }
      *(__m128i *)(v86 + 16 * v84) = v85;
      v49 = 1;
      ++*(_QWORD *)(a1 + 224);
LABEL_52:
      *(_QWORD *)(a1 + 200) = sub_8DB0(a1, a3->m128i_i8, v49);
      *(_QWORD *)(a1 + 208) = v50;
      return v199 - __readfsqword(0x28u);
    case 520:
      v87 = *(_QWORD *)(a1 + 224);
      v88 = _mm_loadu_si128((const __m128i *)(a1 + 200));
      v89 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v87 + 1) )
      {
        v186 = v88;
        v183 = qvector_reserve(a1 + 216, v89, v87 + 1, 16);
        v87 = *(_QWORD *)(a1 + 224);
        v88 = _mm_load_si128(&v186);
        *(_QWORD *)(a1 + 216) = v183;
        v89 = v183;
      }
      *(__m128i *)(v89 + 16 * v87) = v88;
      v21 = 1;
      ++*(_QWORD *)(a1 + 224);
LABEL_9:
      *(_QWORD *)(a1 + 200) = sub_9640(a1, (__int64)a3, v21);
      *(_QWORD *)(a1 + 208) = v22;
      return v199 - __readfsqword(0x28u);
    case 521:
      v53 = 1;
      return sub_97F0(a1, a3, v53);
    case 522:
      v54 = 1;
      return sub_84A0(a1, (__int64)a3, v54, a4, a5, a6);
    case 524:
      v55 = *(_QWORD *)(a1 + 200);
      if ( v55 == -1 )
        return v199 - __readfsqword(0x28u);
      v56 = 1;
LABEL_62:
      result = sub_9950(a1, v55, (__int64)a3, v56);
      break;
    case 525:
    case 526:
      goto LABEL_26;
    default:
      return v199 - __readfsqword(0x28u);
  }
  return result;
}
