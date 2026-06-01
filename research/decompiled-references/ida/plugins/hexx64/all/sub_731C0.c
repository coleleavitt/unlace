__int64 __fastcall sub_731C0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        double a7,
        __m128i *a8)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *exception; // rdi
  __int64 v13; // rax
  __int64 (*v14)(void); // rdx
  __int32 v15; // r11d
  __int32 v16; // r11d
  __int64 *v17; // rcx
  int *v18; // rax
  int *v19; // rdx
  __m128i v20; // xmm0
  __int32 v21; // r11d
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // r10
  unsigned __int64 v26; // rbp
  int v27; // r9d
  unsigned __int64 v28; // rdx
  int *v29; // r8
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  signed int v32; // r12d
  int v33; // r13d
  __int64 (__fastcall *v34)(__int64, int, int); // rax
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // r9
  __int64 v45; // r13
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  signed int v48; // ebp
  int v49; // r12d
  __int64 (__fastcall *v50)(__int64, int, int); // rax
  _QWORD *v51; // rcx
  unsigned __int64 v52; // rax
  _QWORD *v53; // rax
  _DWORD *v54; // rcx
  __int64 v55; // rdx
  _DWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r10
  int *v60; // rax
  __int64 v61; // rax
  int v62; // r12d
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rbp
  __int64 v66; // r14
  __int64 v67; // r15
  int v68; // edx
  __int64 v69; // r13
  __int64 v70; // r15
  __int64 v71; // rbp
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rsi
  signed int v74; // r8d
  __int64 (__fastcall *v75)(__int64, int, int); // rax
  _QWORD *v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // eax
  int v81; // eax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rsi
  __int64 v88; // rcx
  int v89; // r14d
  __int64 v90; // r13
  __int64 v91; // rbp
  __int64 v92; // r12
  __int64 *v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rcx
  _DWORD *v96; // rdx
  _DWORD *v97; // rax
  unsigned __int64 v98; // r12
  __m128i v99; // xmm1
  _OWORD *v100; // rax
  __int64 *v101; // rsi
  __m128i v102; // xmm7
  const __m128i *v103; // rdi
  __m128i v104; // xmm0
  __m128i *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 *v108; // r8
  __int64 v109; // rsi
  int v110; // edi
  _DWORD *v111; // rax
  __int64 v112; // rsi
  __int64 (__fastcall *v113)(__int64); // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rdx
  __int64 (__fastcall *v117)(__int64); // rax
  int v118; // ecx
  _DWORD *v119; // rax
  __int64 v120; // rdx
  int v121; // r15d
  __int64 *v122; // r14
  _QWORD *v123; // rbx
  __int64 v124; // rax
  unsigned __int32 v125; // r11d
  __int64 v126; // r13
  int v127; // r12d
  __int64 v128; // rax
  __int64 v129; // r13
  __int64 v130; // rbx
  __int64 *v131; // rbp
  __int64 v132; // rsi
  __int64 v133; // rcx
  _DWORD *v134; // rdx
  _DWORD *v135; // rax
  __int64 v136; // rdi
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 *v142; // r12
  __int64 v143; // rax
  __int64 v144; // rsi
  _QWORD *v145; // rax
  __int64 *v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rdx
  char v153; // r13
  unsigned __int64 v154; // rax
  _BYTE *v155; // rdx
  _OWORD *v156; // rax
  __m128i v157; // xmm1
  __m128i v158; // xmm0
  __m128i *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __m128i *v164; // rax
  int v165; // edi
  __int64 v166; // rdx
  __int64 v167; // rax
  __m128i v168; // xmm0
  __m128i *v169; // rdi
  unsigned int v170; // eax
  int v171; // eax
  __m128i v172; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v173; // [rsp+10h] [rbp-F8h]
  _QWORD *v174; // [rsp+18h] [rbp-F0h]
  __int64 v175; // [rsp+20h] [rbp-E8h]
  __int64 v176; // [rsp+28h] [rbp-E0h]
  __int64 *v177; // [rsp+30h] [rbp-D8h]
  __m128i *v178; // [rsp+38h] [rbp-D0h]
  __int64 v179; // [rsp+40h] [rbp-C8h]
  _QWORD *v180; // [rsp+48h] [rbp-C0h]
  __int64 *v181; // [rsp+50h] [rbp-B8h]
  unsigned int v182; // [rsp+58h] [rbp-B0h]
  int v183; // [rsp+5Ch] [rbp-ACh]
  __int64 *v184; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v185; // [rsp+68h] [rbp-A0h]
  __int32 v186; // [rsp+6Ch] [rbp-9Ch]
  int v187; // [rsp+78h] [rbp-90h] BYREF
  int v188; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v189; // [rsp+80h] [rbp-88h] BYREF
  __int64 v190; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v191; // [rsp+90h] [rbp-78h] BYREF
  __int128 v192; // [rsp+98h] [rbp-70h]
  unsigned __int64 v193; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v194; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v195; // [rsp+C8h] [rbp-40h]

  v183 = a3;
  v177 = a4;
  v180 = a2;
  v184 = a6;
  v178 = a8;
  v195 = __readfsqword(0x28u);
  v13 = *(_QWORD *)a1;
  v14 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v14 == (char *)sub_65040 )
  {
    v15 = *(_DWORD *)(a1 + 56);
  }
  else
  {
    v15 = v14();
    v13 = *(_QWORD *)a1;
  }
  v172.m128i_i32[0] = v15;
  v185 = v15 + 1;
  (*(void (__fastcall **)(__int64, _QWORD))(v13 + 168))(a1, (unsigned int)(v15 + 1));
  v16 = v172.m128i_i32[0];
  v17 = v177;
  v18 = (int *)*v177;
  if ( 4 * v177[1] )
  {
    do
    {
      v19 = (int *)(*(_QWORD *)(a1 + 96) + 4LL * *v18);
      if ( *v19 >= 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC4EEu, a7);
        goto LABEL_281;
      }
      *v19 = v16;
      ++v18;
    }
    while ( v18 != (int *)(*v17 + 4 * v17[1]) );
  }
  LODWORD(v173) = v16;
  sub_67240(a1);
  v20.m128i_i64[0] = 0;
  v191 = 0;
  v21 = v173;
  v192 = 0;
  v22 = *v177;
  v23 = v177[1];
  v193 = 0;
  v194 = 0;
  v172.m128i_i64[0] = v22;
  v182 = v183 - 7;
  v181 = &v189;
  if ( !(4 * v23) )
    goto LABEL_159;
  do
  {
    v24 = *(int *)v172.m128i_i64[0];
    v25 = (_QWORD *)(24 * v24 + *(_QWORD *)(a1 + 48));
    v179 = 24 * v24;
    v26 = (unsigned int)v25[1] - 1;
    v27 = v25[1];
    while ( (v26 & 0x80000000) == 0LL )
    {
      while ( 1 )
      {
        v30 = 4 * v26;
        v31 = *(unsigned int *)(*v25 + 4 * v26);
        v32 = *(_DWORD *)(*v25 + 4 * v26);
        v33 = v32;
        if ( v31 < *(_QWORD *)(a1 + 104) )
        {
          v33 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v31);
          if ( v33 < 0 )
            v33 = *(_DWORD *)(*v25 + 4 * v26);
        }
        v34 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
        if ( v34 == sub_6BA20 )
          break;
        LODWORD(v176) = v21;
        LODWORD(v175) = v27;
        v174 = (_QWORD *)(4 * v26);
        v173 = (unsigned __int64)v25;
        v43 = v34((__int64)a5, v24, v32);
        v21 = v176;
        v27 = v175;
        v30 = 4 * v26;
        v25 = (_QWORD *)v173;
LABEL_46:
        if ( v43 != 5 )
        {
          v32 = *(_DWORD *)(*v25 + v30);
          goto LABEL_9;
        }
        if ( v33 != v21 )
        {
          if ( !under_debugger )
            sub_383060(0xC6E5u, *(double *)v20.m128i_i64);
          goto LABEL_281;
        }
        --v26;
        --v27;
        if ( (v26 & 0x80000000) != 0LL )
          goto LABEL_50;
      }
      v35 = (_QWORD *)a5[1];
      if ( !v35 )
        goto LABEL_9;
      v36 = *v35 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v36 )
      {
        v37 = 24;
LABEL_103:
        v43 = *(_DWORD *)(v37 + 8);
        goto LABEL_46;
      }
      if ( (*(_BYTE *)(*v35 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_9;
      while ( 1 )
      {
        v37 = v36 + 24;
        if ( (int)v24 < *(_DWORD *)(v36 + 24) )
        {
LABEL_44:
          v36 = *(_QWORD *)(v36 + 8);
          goto LABEL_24;
        }
        if ( (_DWORD)v24 == *(_DWORD *)(v36 + 24) )
        {
          if ( v32 < *(_DWORD *)(v36 + 28) )
            goto LABEL_44;
          if ( v32 <= *(_DWORD *)(v36 + 28) )
            break;
        }
        v36 = *(_QWORD *)(v36 + 16);
LABEL_24:
        if ( (*(_BYTE *)v36 & 2) != 0 )
        {
          v28 = v192;
          if ( v26 < (unsigned __int64)v192 )
            goto LABEL_10;
          goto LABEL_26;
        }
      }
      if ( v35 != (_QWORD *)v36 )
        goto LABEL_103;
LABEL_9:
      v28 = v192;
      if ( v26 >= (unsigned __int64)v192 )
      {
LABEL_26:
        v38 = v27;
        v187 = -1;
        v173 = v27;
        if ( v27 < v28 )
          goto LABEL_35;
        if ( v28 < v173 )
        {
          v39 = v191;
          if ( (unsigned __int64)&v187 < v191 || (unsigned __int64)&v187 >= v191 + 4LL * *((_QWORD *)&v192 + 1) )
          {
            if ( *((_QWORD *)&v192 + 1) >= v173
              || (v186 = v21,
                  LODWORD(v176) = v27,
                  v175 = v30,
                  v174 = v25,
                  v191 = qvector_reserve((__int64)&v191, v191, v173, 4),
                  v28 = v192,
                  v39 = v191,
                  v25 = v174,
                  v30 = v175,
                  v27 = v176,
                  v21 = v186,
                  (unsigned __int64)v192 < v173) )
            {
              v138 = v173;
              while ( 1 )
              {
                *(_DWORD *)(v39 + 4 * v28++) = -1;
                if ( v138 == v28 )
                  break;
                v39 = v191;
              }
            }
          }
          else if ( *((_QWORD *)&v192 + 1) >= v173
                 || (v186 = v21,
                     LODWORD(v176) = v27,
                     v175 = v30,
                     v174 = v25,
                     v191 = qvector_reserve((__int64)&v191, v191, v173, 4),
                     v28 = v192,
                     v39 = v191,
                     v25 = v174,
                     v30 = v175,
                     v27 = v176,
                     v21 = v186,
                     (unsigned __int64)v192 < v173) )
          {
            v40 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v39 + 4 * v28++) = -1;
              if ( v40 == v28 )
                break;
              v39 = v191;
            }
          }
          v38 = v173;
LABEL_35:
          *(_QWORD *)&v192 = v38;
        }
        v41 = v194;
        if ( v173 == (_QWORD)v194 )
          goto LABEL_10;
        v189 = 0;
        if ( v173 >= (unsigned __int64)v194 )
        {
          if ( (unsigned __int64)v181 < v193 || (unsigned __int64)v181 >= v193 + 8LL * *((_QWORD *)&v194 + 1) )
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              v186 = v21;
              LODWORD(v176) = v27;
              v175 = v30;
              v174 = v25;
              v193 = qvector_reserve((__int64)&v193, v193, v173, 8);
              v21 = v186;
              v41 = v194;
              v27 = v176;
              v30 = v175;
              v25 = v174;
            }
            v140 = v173;
            v141 = v189;
            if ( v41 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v41++) = v141;
              while ( v140 != v41 );
              *(_QWORD *)&v194 = v173;
              goto LABEL_10;
            }
          }
          else if ( *((_QWORD *)&v194 + 1) < v173 )
          {
            v186 = v21;
            LODWORD(v176) = v27;
            v175 = v30;
            v174 = v25;
            v193 = qvector_reserve((__int64)&v193, v193, v173, 8);
            v42 = v173;
            v41 = v194;
            v21 = v186;
            v27 = v176;
            v30 = v175;
            v25 = v174;
            if ( (unsigned __int64)v194 < v173 )
              goto LABEL_42;
          }
          else
          {
            v42 = v173;
            if ( (unsigned __int64)v194 < v173 )
            {
              do
LABEL_42:
                *(_QWORD *)(v193 + 8 * v41++) = 0;
              while ( v42 != v41 );
            }
          }
        }
        *(_QWORD *)&v194 = v173;
      }
LABEL_10:
      v29 = (int *)(v191 + v30);
      v20.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v32)).m128i_u64[0];
      if ( *v29 != -1 && v33 != *v29 && v182 > 1 )
      {
        if ( !under_debugger )
          sub_383060(0xC4EDu, *(double *)v20.m128i_i64);
        goto LABEL_281;
      }
      *v29 = v33;
      --v27;
      *(_QWORD *)(v193 + 8 * v26--) = v20.m128i_i64[0];
    }
LABEL_50:
    v44 = *(_QWORD *)(a1 + 72) + v179;
    v45 = (unsigned int)(*(_DWORD *)(v44 + 8) - 1);
    v46 = 4 * v45;
    if ( (int)v45 < 0 )
      goto LABEL_71;
    while ( 1 )
    {
LABEL_53:
      v47 = *(unsigned int *)(*(_QWORD *)v44 + v46);
      v48 = *(_DWORD *)(*(_QWORD *)v44 + v46);
      v49 = v48;
      if ( v47 < *(_QWORD *)(a1 + 104) )
      {
        v49 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v47);
        if ( v49 < 0 )
          v49 = *(_DWORD *)(*(_QWORD *)v44 + v46);
      }
      if ( v49 != v21 )
        goto LABEL_52;
      v50 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
      if ( v50 != sub_6BA20 )
      {
        LODWORD(v175) = v21;
        v174 = (_QWORD *)v46;
        v173 = v44;
        v81 = v50((__int64)a5, v48, v24);
        v21 = v175;
        v46 = (__int64)v174;
        v44 = v173;
        goto LABEL_111;
      }
      v51 = (_QWORD *)a5[1];
      if ( v51 )
      {
        v52 = *v51 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v52 )
        {
          v79 = 24;
          goto LABEL_198;
        }
        if ( (*(_BYTE *)(*v51 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
          break;
      }
LABEL_61:
      v53 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v48);
      v54 = (_DWORD *)*v53;
      v55 = *v53 + 4LL * v53[1];
      if ( *v53 == v55 )
        goto LABEL_272;
      v56 = (_DWORD *)*v53;
      while ( (_DWORD)v24 != *v56 )
      {
        if ( (_DWORD *)v55 == ++v56 )
          goto LABEL_272;
      }
      v57 = v56 - v54;
      if ( (_DWORD)v57 == -1 )
      {
LABEL_272:
        if ( !under_debugger )
          sub_383060(0xC4EFu, *(double *)v20.m128i_i64);
        goto LABEL_281;
      }
      v58 = v192;
      v59 = (int)v57;
      if ( (int)v57 < (unsigned __int64)v192 )
        goto LABEL_67;
      v188 = -1;
      v82 = (int)v57 + 1;
      v173 = v82;
      if ( v82 >= (unsigned __int64)v192 )
      {
        if ( (unsigned __int64)v192 >= v173 )
          goto LABEL_127;
        v83 = v191;
        if ( (unsigned __int64)&v188 < v191 || (unsigned __int64)&v188 >= v191 + 4LL * *((_QWORD *)&v192 + 1) )
        {
          if ( *((_QWORD *)&v192 + 1) >= v173
            || (LODWORD(v179) = v21,
                v176 = v59,
                v175 = v46,
                v174 = (_QWORD *)v44,
                v191 = qvector_reserve((__int64)&v191, v191, v173, 4),
                v58 = v192,
                v83 = v191,
                v44 = (unsigned __int64)v174,
                v46 = v175,
                v59 = v176,
                v21 = v179,
                (unsigned __int64)v192 < v173) )
          {
            v139 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v58++) = -1;
              if ( v139 == v58 )
                break;
              v83 = v191;
            }
            v82 = v173;
          }
          else
          {
            v82 = v173;
          }
        }
        else
        {
          if ( *((_QWORD *)&v192 + 1) >= v173
            || (LODWORD(v179) = v21,
                v176 = v59,
                v175 = v46,
                v174 = (_QWORD *)v44,
                v191 = qvector_reserve((__int64)&v191, v191, v173, 4),
                v58 = v192,
                v83 = v191,
                v44 = (unsigned __int64)v174,
                v46 = v175,
                v59 = v176,
                v21 = v179,
                (unsigned __int64)v192 < v173) )
          {
            v84 = v173;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v58++) = -1;
              if ( v84 == v58 )
                break;
              v83 = v191;
            }
          }
          v82 = v173;
        }
      }
      *(_QWORD *)&v192 = v82;
LABEL_127:
      v85 = v194;
      if ( v173 != (_QWORD)v194 )
      {
        v190 = 0;
        if ( v173 >= (unsigned __int64)v194 )
        {
          if ( (unsigned __int64)&v190 < v193 || (unsigned __int64)&v190 >= v193 + 8LL * *((_QWORD *)&v194 + 1) )
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              LODWORD(v179) = v21;
              v176 = v59;
              v175 = v46;
              v174 = (_QWORD *)v44;
              v193 = qvector_reserve((__int64)&v193, v193, v173, 8);
              v21 = v179;
              v85 = v194;
              v59 = v176;
              v46 = v175;
              v44 = (unsigned __int64)v174;
            }
            v87 = v173;
            v88 = v190;
            if ( v85 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v85++) = v88;
              while ( v87 != v85 );
              *(_QWORD *)&v194 = v173;
              goto LABEL_67;
            }
          }
          else
          {
            if ( *((_QWORD *)&v194 + 1) < v173 )
            {
              LODWORD(v179) = v21;
              v176 = v59;
              v175 = v46;
              v174 = (_QWORD *)v44;
              v193 = qvector_reserve((__int64)&v193, v193, v173, 8);
              v21 = v179;
              v85 = v194;
              v59 = v176;
              v46 = v175;
              v44 = (unsigned __int64)v174;
            }
            v86 = v173;
            if ( v85 < v173 )
            {
              do
                *(_QWORD *)(v193 + 8 * v85++) = 0;
              while ( v86 != v85 );
            }
          }
        }
        *(_QWORD *)&v194 = v173;
      }
LABEL_67:
      v20.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(v24)).m128i_u64[0];
      v60 = (int *)(v191 + 4 * v59);
      if ( *v60 != -1 && v49 != *v60 && v182 > 1 )
      {
        if ( !under_debugger )
          sub_383060(0xC4EDu, *(double *)v20.m128i_i64);
        goto LABEL_281;
      }
      *v60 = v49;
      LODWORD(v45) = v45 - 1;
      v46 -= 4;
      *(_QWORD *)(v193 + 8 * v59) = v20.m128i_i64[0];
      if ( (_DWORD)v45 == -1 )
        goto LABEL_71;
    }
    while ( 2 )
    {
      v79 = v52 + 24;
      if ( v48 < *(_DWORD *)(v52 + 24) )
        goto LABEL_101;
      if ( v48 != *(_DWORD *)(v52 + 24) )
      {
LABEL_97:
        v52 = *(_QWORD *)(v52 + 16);
        goto LABEL_98;
      }
      if ( (int)v24 < *(_DWORD *)(v52 + 28) )
      {
LABEL_101:
        v52 = *(_QWORD *)(v52 + 8);
LABEL_98:
        if ( (*(_BYTE *)v52 & 2) != 0 )
          goto LABEL_61;
        continue;
      }
      break;
    }
    if ( (int)v24 > *(_DWORD *)(v52 + 28) )
      goto LABEL_97;
    if ( v51 == (_QWORD *)v52 )
      goto LABEL_61;
LABEL_198:
    v81 = *(_DWORD *)(v79 + 8);
LABEL_111:
    if ( v81 != 5 )
    {
      v48 = *(_DWORD *)(*(_QWORD *)v44 + v46);
      goto LABEL_61;
    }
LABEL_52:
    LODWORD(v45) = v45 - 1;
    v46 -= 4;
    if ( (_DWORD)v45 != -1 )
      goto LABEL_53;
LABEL_71:
    v172.m128i_i64[0] += 4;
    v61 = *v177 + 4 * v177[1];
    v173 = *v177;
  }
  while ( v172.m128i_i64[0] != v61 );
  if ( v173 != v172.m128i_i64[0] )
  {
    while ( 1 )
    {
      v62 = *(_DWORD *)v173;
      v63 = 24LL * *(int *)v173;
      v64 = v63 + *(_QWORD *)(a1 + 48);
      v65 = (unsigned int)(*(_DWORD *)(v64 + 8) - 1);
      if ( (int)v65 >= 0 )
      {
        v172.m128i_i32[0] = v21;
        v174 = a5;
        v66 = 4 * v65;
        v67 = v63;
        do
        {
          LODWORD(v65) = v65 - 1;
          v68 = *(_DWORD *)(*(_QWORD *)v64 + v66);
          v66 -= 4;
          sub_6D320(a1, v62, v68);
        }
        while ( (_DWORD)v65 != -1 );
        v21 = v172.m128i_i32[0];
        a5 = v174;
        v63 = v67;
      }
      v69 = *(_QWORD *)(a1 + 72) + v63;
      v70 = (unsigned int)(*(_DWORD *)(v69 + 8) - 1);
      v71 = 4 * v70;
      if ( (int)v70 >= 0 )
        break;
LABEL_141:
      v173 += 4LL;
      if ( v173 == *v177 + 4 * v177[1] )
        goto LABEL_142;
    }
    while ( 2 )
    {
      v72 = *(unsigned int *)(*(_QWORD *)v69 + v71);
      v73 = v72;
      v74 = *(_DWORD *)(*(_QWORD *)v69 + v71);
      if ( v72 < *(_QWORD *)(a1 + 104) )
      {
        v74 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v72);
        if ( v74 < 0 )
          v74 = *(_DWORD *)(*(_QWORD *)v69 + v71);
      }
      v75 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
      if ( v75 != sub_6BA20 )
      {
        LODWORD(v174) = v21;
        v172.m128i_i32[0] = v74;
        v80 = v75((__int64)a5, v73, v62);
        v21 = (int)v174;
        v74 = v172.m128i_i32[0];
        goto LABEL_105;
      }
      v76 = (_QWORD *)a5[1];
      if ( !v76 )
        goto LABEL_79;
      v77 = *v76 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v77 )
      {
        v78 = 24;
LABEL_196:
        v80 = *(_DWORD *)(v78 + 8);
LABEL_105:
        if ( v80 != 5 || v74 == v21 )
        {
          LODWORD(v73) = *(_DWORD *)(*(_QWORD *)v69 + v71);
          if ( v80 == 5 || v74 == v21 )
            goto LABEL_109;
          goto LABEL_80;
        }
        if ( !under_debugger )
          sub_383060(0xC6E5u, *(double *)v20.m128i_i64);
LABEL_281:
        BUG();
      }
      if ( (*(_BYTE *)(*v76 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_79;
LABEL_89:
      v78 = v77 + 24;
      if ( (int)v73 < *(_DWORD *)(v77 + 24) )
        goto LABEL_100;
      if ( (_DWORD)v73 != *(_DWORD *)(v77 + 24) )
        goto LABEL_91;
      if ( v62 < *(_DWORD *)(v77 + 28) )
      {
LABEL_100:
        v77 = *(_QWORD *)(v77 + 8);
      }
      else
      {
        if ( v62 <= *(_DWORD *)(v77 + 28) )
        {
          if ( v76 != (_QWORD *)v77 )
            goto LABEL_196;
LABEL_79:
          if ( v74 != v21 )
            goto LABEL_80;
LABEL_109:
          v172.m128i_i32[0] = v21;
          sub_6D320(a1, v73, v62);
LABEL_81:
          LODWORD(v70) = v70 - 1;
          v21 = v172.m128i_i32[0];
          v71 -= 4;
          if ( (_DWORD)v70 == -1 )
            goto LABEL_141;
          continue;
        }
LABEL_91:
        v77 = *(_QWORD *)(v77 + 16);
      }
      break;
    }
    if ( (*(_BYTE *)v77 & 2) != 0 )
    {
      if ( v74 == v21 )
        goto LABEL_109;
LABEL_80:
      v172.m128i_i32[0] = v21;
      sub_72C20(a1, v178, v73, v62, v74, v21);
      goto LABEL_81;
    }
    goto LABEL_89;
  }
LABEL_142:
  if ( !(_QWORD)v192 )
    goto LABEL_159;
  v89 = 0;
  v90 = 0;
  v91 = 24LL * v21;
  while ( 2 )
  {
    v92 = *(int *)(v191 + 4 * v90);
    if ( (_DWORD)v92 == -1 )
      goto LABEL_158;
    v93 = (__int64 *)(v91 + *(_QWORD *)(a1 + 48));
    v94 = *v93;
    v95 = v93[1];
    v96 = (_DWORD *)(*v93 + 4 * v95);
    if ( (_DWORD *)*v93 == v96 )
      goto LABEL_222;
    v97 = (_DWORD *)*v93;
    while ( (_DWORD)v92 != *v97 )
    {
      if ( v96 == ++v97 )
        goto LABEL_222;
    }
    if ( v96 == v97 )
    {
LABEL_222:
      if ( v93[2] < (unsigned __int64)(v95 + 1) )
      {
        LODWORD(v173) = v21;
        v172.m128i_i64[0] = (__int64)v93;
        v162 = qvector_reserve((__int64)v93, v94, v95 + 1, 4);
        v93 = (__int64 *)v172.m128i_i64[0];
        v21 = v173;
        v163 = *(_QWORD *)(v172.m128i_i64[0] + 8);
        *(_QWORD *)v172.m128i_i64[0] = v162;
        v96 = (_DWORD *)(v162 + 4 * v163);
      }
      *v96 = v92;
      ++v93[1];
      v142 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v92);
      v143 = v142[1];
      v144 = *v142;
      if ( v142[2] < (unsigned __int64)(v143 + 1) )
      {
        v172.m128i_i32[0] = v21;
        v161 = qvector_reserve((__int64)v142, v144, v143 + 1, 4);
        *v142 = v161;
        v144 = v161;
        v21 = v172.m128i_i32[0];
        v143 = v142[1];
      }
      *(_DWORD *)(v144 + 4 * v143) = v21;
      ++v142[1];
    }
    if ( !v178 )
      goto LABEL_158;
    v98 = v178->m128i_i64[0];
    v99 = _mm_cvtsi32_si128(*(_DWORD *)(v191 + 4 * v90));
    v20 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)(v193 + 8 * v90)),
            _mm_cvtsi32_si128(*(_DWORD *)(v193 + 8 * v90 + 4)));
    v172 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v99), v20);
    if ( !v98 )
    {
      LODWORD(v173) = v21;
      v167 = qalloc();
      v168 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v167, (__m128i)(unsigned __int64)v167);
      if ( !v167 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v169 = v178;
      *(_QWORD *)(v167 + 32) = 0;
      *(_OWORD *)(v167 + 16) = 0;
      v21 = v173;
      *(__m128i *)(v167 + 8) = v168;
      *(_QWORD *)v167 = v167 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v169->m128i_i64[0] = v167;
      *(_QWORD *)v167 = v167 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v167 & 3LL;
      *(__m128i *)(v169->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                               (__m128i)v169->m128i_u64[0],
                                               (__m128i)v169->m128i_u64[0]);
      *(_QWORD *)v169->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v169->m128i_i64[0] |= 2uLL;
      v98 = v169->m128i_i64[0];
LABEL_153:
      LODWORD(v173) = v21;
      v100 = (_OWORD *)qalloc();
      v101 = (__int64 *)v100;
      if ( !v100 )
      {
        v9 = __cxa_allocate_exception(8u);
        *v9 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v9,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v102 = _mm_load_si128(&v172);
      v103 = v178;
      v100[1] = 0;
      v21 = v173;
      *v100 = 0;
      *(__m128i *)((char *)v100 + 24) = v102;
      *(_QWORD *)v100 = v98 & 0xFFFFFFFFFFFFFFFCLL;
      v104 = _mm_loadl_epi64(v103);
      *(_QWORD *)v100 = v98 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v20 = _mm_unpacklo_epi64(v104, v104);
      *(__m128i *)((char *)v100 + 8) = v20;
      if ( v103->m128i_i64[0] == v98 )
      {
LABEL_253:
        *(_QWORD *)v98 = (unsigned __int64)v101 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v98 & 3LL;
        *(_QWORD *)(v103->m128i_i64[0] + 8) = v101;
        *(_QWORD *)(v103->m128i_i64[0] + 16) = v101;
        v166 = *v101 & 2;
        *v101 &= ~1uLL;
        v172.m128i_i64[0] = v103->m128i_i64[0];
        *v101 = v166 | v172.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_157;
      }
      v105 = v178;
      *(_QWORD *)(v98 + 8) = v101;
      v106 = v105->m128i_i64[0];
      if ( *(_QWORD *)(v106 + 8) != v98 )
        goto LABEL_156;
LABEL_247:
      *(_QWORD *)(v106 + 8) = v101;
      goto LABEL_156;
    }
    if ( !v178->m128i_i64[1] )
      goto LABEL_153;
    v153 = 1;
    v154 = *(_QWORD *)v98 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v154 & 2) != 0 )
      goto LABEL_241;
    while ( 2 )
    {
      if ( v21 < *(_DWORD *)(v154 + 24) )
        goto LABEL_251;
      if ( v21 != *(_DWORD *)(v154 + 24) )
      {
LABEL_239:
        v155 = *(_BYTE **)(v154 + 16);
        v153 = 0;
        if ( (*v155 & 2) != 0 )
          goto LABEL_240;
LABEL_252:
        v154 = (unsigned __int64)v155;
        continue;
      }
      break;
    }
    v165 = _mm_cvtsi128_si32(v99);
    if ( v165 < *(_DWORD *)(v154 + 28) )
    {
LABEL_251:
      v155 = *(_BYTE **)(v154 + 8);
      v153 = 1;
      if ( (*v155 & 2) != 0 )
      {
LABEL_240:
        v98 = v154;
        goto LABEL_241;
      }
      goto LABEL_252;
    }
    if ( v165 > *(_DWORD *)(v154 + 28) )
      goto LABEL_239;
    if ( v154 )
      goto LABEL_158;
    v98 = 0;
LABEL_241:
    LODWORD(v173) = v21;
    v156 = (_OWORD *)qalloc();
    v101 = (__int64 *)v156;
    if ( !v156 )
    {
      v8 = __cxa_allocate_exception(8u);
      *v8 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v157 = _mm_load_si128(&v172);
    v103 = v178;
    v156[1] = 0;
    v21 = v173;
    *v156 = 0;
    *(__m128i *)((char *)v156 + 24) = v157;
    *(_QWORD *)v156 = v98 & 0xFFFFFFFFFFFFFFFCLL;
    v158 = _mm_loadl_epi64(v103);
    *(_QWORD *)v156 = v98 & 0xFFFFFFFFFFFFFFFCLL | 1;
    v20 = _mm_unpacklo_epi64(v158, v158);
    *(__m128i *)((char *)v156 + 8) = v20;
    if ( v98 == v103->m128i_i64[0] )
      goto LABEL_253;
    if ( v153 )
    {
      v164 = v178;
      *(_QWORD *)(v98 + 8) = v101;
      v106 = v164->m128i_i64[0];
      if ( v98 != *(_QWORD *)(v106 + 8) )
        goto LABEL_156;
      goto LABEL_247;
    }
    v159 = v178;
    *(_QWORD *)(v98 + 16) = v101;
    v160 = v159->m128i_i64[0];
    if ( v98 == *(_QWORD *)(v160 + 16) )
      *(_QWORD *)(v160 + 16) = v101;
LABEL_156:
    v172.m128i_i32[0] = v21;
    sub_72830(v178, v101);
    v21 = v172.m128i_i32[0];
LABEL_157:
    ++v178->m128i_i64[1];
LABEL_158:
    v90 = ++v89;
    if ( v89 < (unsigned __int64)v192 )
      continue;
    break;
  }
LABEL_159:
  if ( !v184 )
    goto LABEL_166;
  v107 = v184[1];
  if ( !v107 )
    goto LABEL_166;
  if ( v177[1] != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCA5Bu, *(double *)v20.m128i_i64);
    goto LABEL_281;
  }
  v108 = v184;
  v109 = *v184;
  v110 = *(_DWORD *)*v177;
  v111 = (_DWORD *)*v184;
  if ( 8 * v107 )
  {
    do
    {
      if ( *v111 == v110 )
      {
        *v111 = v21;
        v107 = v108[1];
        v109 = *v108;
      }
      v111 += 2;
    }
    while ( v111 != (_DWORD *)(v109 + 8 * v107) );
  }
LABEL_166:
  v112 = *(_QWORD *)a1;
  v113 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL);
  if ( v113 == sub_65060 )
  {
    v114 = *(unsigned int *)(a1 + 36);
  }
  else
  {
    v172.m128i_i32[0] = v21;
    v170 = v113(a1);
    v112 = *(_QWORD *)a1;
    v21 = v172.m128i_i32[0];
    v114 = v170;
  }
  v115 = (_DWORD *)*v177;
  v116 = *v177 + 4 * v177[1];
  if ( *v177 != v116 )
  {
    while ( (_DWORD)v114 != *v115 )
    {
      if ( (_DWORD *)v116 == ++v115 )
        goto LABEL_174;
    }
    if ( v115 != (_DWORD *)v116 )
      *(_DWORD *)(a1 + 36) = v21;
  }
LABEL_174:
  v117 = *(__int64 (__fastcall **)(__int64))(v112 + 88);
  if ( v117 == sub_65070 )
  {
    v118 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v172.m128i_i32[0] = v21;
    v171 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))v117)(
             a1,
             v112,
             sub_65070,
             v114);
    v21 = v172.m128i_i32[0];
    v118 = v171;
  }
  v119 = (_DWORD *)*v177;
  v120 = *v177 + 4 * v177[1];
  if ( *v177 != v120 )
  {
    while ( v118 != *v119 )
    {
      if ( (_DWORD *)v120 == ++v119 )
        goto LABEL_182;
    }
    if ( (_DWORD *)v120 != v119 )
      *(_DWORD *)(a1 + 40) = v21;
  }
LABEL_182:
  v121 = v183;
  v122 = v177;
  v172.m128i_i32[0] = v21;
  v123 = v180;
  sub_70CE0(v180, v21, v177, v183);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v123 + 168LL))(v123, v185);
  v124 = v172.m128i_i32[0];
  *(_DWORD *)(v123[38] + 4LL * v172.m128i_i32[0]) = v121;
  v125 = v124;
  if ( v122[1] )
  {
    v126 = 3 * v124;
    v127 = 0;
    v128 = 0;
    v129 = 8 * v126;
    do
    {
      v130 = *(int *)(*v177 + 4 * v128);
      v131 = (__int64 *)(v129 + v180[6]);
      v132 = *v131;
      v133 = v131[1];
      v134 = (_DWORD *)(*v131 + 4 * v133);
      if ( (_DWORD *)*v131 == v134 )
        goto LABEL_227;
      v135 = (_DWORD *)*v131;
      while ( (_DWORD)v130 != *v135 )
      {
        if ( v134 == ++v135 )
          goto LABEL_227;
      }
      if ( v134 == v135 )
      {
LABEL_227:
        if ( v131[2] < (unsigned __int64)(v133 + 1) )
        {
          v150 = v129 + v180[6];
          v172.m128i_i32[0] = v125;
          v151 = qvector_reserve(v150, v132, v133 + 1, 4);
          v152 = v131[1];
          v125 = v172.m128i_i32[0];
          *v131 = v151;
          v134 = (_DWORD *)(v151 + 4 * v152);
        }
        v145 = v180;
        *v134 = v130;
        ++v131[1];
        v146 = (__int64 *)(v145[9] + 24 * v130);
        v147 = v146[1];
        v148 = *v146;
        if ( v146[2] < (unsigned __int64)(v147 + 1) )
        {
          v172.m128i_i32[0] = v125;
          v149 = qvector_reserve((__int64)v146, v148, v147 + 1, 4);
          *v146 = v149;
          v148 = v149;
          v125 = v172.m128i_i32[0];
          v147 = v146[1];
        }
        *(_DWORD *)(v148 + 4 * v147) = v125;
        ++v146[1];
      }
      v128 = ++v127;
    }
    while ( v127 < (unsigned __int64)v177[1] );
  }
  v136 = v193;
  *((_DWORD *)v180 + 9) = v125;
  if ( v136 )
  {
    v172.m128i_i32[0] = v125;
    *(_QWORD *)&v194 = 0;
    qfree(v136);
    v125 = v172.m128i_i32[0];
  }
  if ( v191 )
  {
    v172.m128i_i32[0] = v125;
    *(_QWORD *)&v192 = 0;
    qfree(v191);
    return v172.m128i_u32[0];
  }
  return v125;
}

