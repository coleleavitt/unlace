__int64 __fastcall sub_6EE40(__int64 a1, _QWORD *a2, int a3, __int64 *a4, _QWORD *a5, __int64 *a6, __m128i *a7)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *exception; // rdi
  __int64 v12; // rax
  __int64 (*v13)(void); // rdx
  __int32 v14; // r11d
  __int32 v15; // r11d
  __int64 *v16; // rcx
  int *v17; // rax
  int *v18; // rdx
  __int32 v19; // r11d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // r10
  unsigned __int64 v24; // rbp
  int v25; // r9d
  unsigned __int64 v26; // rdx
  int *v27; // r8
  unsigned __int64 v28; // xmm0_8
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  signed int v31; // r12d
  int v32; // r13d
  __int64 (__fastcall *v33)(__int64, int, int); // rax
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  signed int v47; // ebp
  int v48; // r12d
  __int64 (__fastcall *v49)(__int64, int, int); // rax
  _QWORD *v50; // rcx
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  _DWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r10
  unsigned __int64 v59; // xmm0_8
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
  _QWORD *v93; // rdi
  __int64 v94; // rcx
  _DWORD *v95; // rdx
  _DWORD *v96; // rax
  unsigned __int64 v97; // r12
  __m128i v98; // xmm1
  __int64 v99; // rax
  unsigned __int64 v100; // rsi
  __m128i v101; // xmm7
  const __m128i *v102; // rdi
  __m128i v103; // xmm0
  __m128i *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 *v107; // r8
  __int64 v108; // rsi
  int v109; // edi
  __int32 *v110; // rax
  __int64 v111; // rsi
  __int64 (__fastcall *v112)(__int64); // rax
  __int64 v113; // rcx
  _DWORD *v114; // rax
  __int64 v115; // rdx
  __int64 (__fastcall *v116)(__int64); // rax
  int v117; // ecx
  _DWORD *v118; // rax
  __int64 v119; // rdx
  int v120; // r15d
  __int64 *v121; // r14
  _QWORD *v122; // rbx
  __int64 v123; // rax
  unsigned __int32 v124; // r11d
  __int64 v125; // r13
  int v126; // r12d
  __int64 v127; // rax
  __int64 v128; // r13
  __int64 v129; // rbx
  __int64 *v130; // rbp
  __int64 v131; // rcx
  _DWORD *v132; // rdx
  _DWORD *v133; // rax
  unsigned __int64 v134; // rdi
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rsi
  __int64 v139; // rcx
  __int64 *v140; // r12
  __int64 v141; // rax
  __int64 v142; // rsi
  _QWORD *v143; // rax
  __int64 *v144; // rbx
  __int64 v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rdx
  char v150; // r13
  unsigned __int64 v151; // rax
  _BYTE *v152; // rdx
  __int64 v153; // rax
  __m128i v154; // xmm1
  __m128i v155; // xmm0
  __m128i *v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rdx
  __m128i *v161; // rax
  int v162; // edi
  __int64 v163; // rdx
  __int64 v164; // rax
  __m128i v165; // xmm0
  __m128i *v166; // rdi
  unsigned int v167; // eax
  int v168; // eax
  __m128i v169; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v170; // [rsp+10h] [rbp-F8h]
  __int64 v171; // [rsp+18h] [rbp-F0h]
  __int64 v172; // [rsp+20h] [rbp-E8h]
  __int64 v173; // [rsp+28h] [rbp-E0h]
  __int64 *v174; // [rsp+30h] [rbp-D8h]
  __m128i *v175; // [rsp+38h] [rbp-D0h]
  __int64 v176; // [rsp+40h] [rbp-C8h]
  _QWORD *v177; // [rsp+48h] [rbp-C0h]
  __int64 *v178; // [rsp+50h] [rbp-B8h]
  unsigned int v179; // [rsp+58h] [rbp-B0h]
  int v180; // [rsp+5Ch] [rbp-ACh]
  __int64 *v181; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v182; // [rsp+68h] [rbp-A0h]
  __int32 v183; // [rsp+6Ch] [rbp-9Ch]
  int v184; // [rsp+78h] [rbp-90h] BYREF
  int v185; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v186; // [rsp+80h] [rbp-88h] BYREF
  __int64 v187; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v188; // [rsp+90h] [rbp-78h]
  __int128 v189; // [rsp+98h] [rbp-70h]
  unsigned __int64 v190; // [rsp+B0h] [rbp-58h]
  __int128 v191; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v192; // [rsp+C8h] [rbp-40h]

  v180 = a3;
  v174 = a4;
  v177 = a2;
  v181 = a6;
  v175 = a7;
  v192 = __readfsqword(0x28u);
  v12 = *(_QWORD *)a1;
  v13 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v13 == (char *)sub_60CC0 )
  {
    v14 = *(_DWORD *)(a1 + 56);
  }
  else
  {
    v14 = v13();
    v12 = *(_QWORD *)a1;
  }
  v169.m128i_i32[0] = v14;
  v182 = v14 + 1;
  (*(void (__fastcall **)(__int64, _QWORD))(v12 + 168))(a1, (unsigned int)(v14 + 1));
  v15 = v169.m128i_i32[0];
  v16 = v174;
  v17 = (int *)*v174;
  if ( 4 * v174[1] )
  {
    do
    {
      v18 = (int *)(*(_QWORD *)(a1 + 96) + 4LL * *v17);
      if ( *v18 >= 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(50414);
        goto LABEL_281;
      }
      *v18 = v15;
      ++v17;
    }
    while ( v17 != (int *)(*v16 + 4 * v16[1]) );
  }
  LODWORD(v170) = v15;
  sub_62EC0(a1);
  v188 = 0;
  v19 = v170;
  v189 = 0;
  v20 = *v174;
  v21 = v174[1];
  v190 = 0;
  v191 = 0;
  v169.m128i_i64[0] = v20;
  v179 = v180 - 7;
  v178 = &v186;
  if ( !(4 * v21) )
    goto LABEL_159;
  do
  {
    v22 = *(int *)v169.m128i_i64[0];
    v23 = (_QWORD *)(24 * v22 + *(_QWORD *)(a1 + 48));
    v176 = 24 * v22;
    v24 = (unsigned int)v23[1] - 1;
    v25 = v23[1];
    while ( (v24 & 0x80000000) == 0LL )
    {
      while ( 1 )
      {
        v29 = 4 * v24;
        v30 = *(unsigned int *)(*v23 + 4 * v24);
        v31 = *(_DWORD *)(*v23 + 4 * v24);
        v32 = v31;
        if ( v30 < *(_QWORD *)(a1 + 104) )
        {
          v32 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v30);
          if ( v32 < 0 )
            v32 = *(_DWORD *)(*v23 + 4 * v24);
        }
        v33 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
        if ( v33 == sub_676A0 )
          break;
        LODWORD(v173) = v19;
        LODWORD(v172) = v25;
        v171 = 4 * v24;
        v170 = (unsigned __int64)v23;
        v42 = v33((__int64)a5, v22, v31);
        v19 = v173;
        v25 = v172;
        v29 = 4 * v24;
        v23 = (_QWORD *)v170;
LABEL_46:
        if ( v42 != 5 )
        {
          v31 = *(_DWORD *)(*v23 + v29);
          goto LABEL_9;
        }
        if ( v32 != v19 )
        {
          if ( !under_debugger )
            sub_37DDE0(50917);
          goto LABEL_281;
        }
        --v24;
        --v25;
        if ( (v24 & 0x80000000) != 0LL )
          goto LABEL_50;
      }
      v34 = (_QWORD *)a5[1];
      if ( !v34 )
        goto LABEL_9;
      v35 = *v34 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v35 )
      {
        v36 = 24;
LABEL_103:
        v42 = *(_DWORD *)(v36 + 8);
        goto LABEL_46;
      }
      if ( (*(_BYTE *)(*v34 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_9;
      while ( 1 )
      {
        v36 = v35 + 24;
        if ( (int)v22 < *(_DWORD *)(v35 + 24) )
        {
LABEL_44:
          v35 = *(_QWORD *)(v35 + 8);
          goto LABEL_24;
        }
        if ( (_DWORD)v22 == *(_DWORD *)(v35 + 24) )
        {
          if ( v31 < *(_DWORD *)(v35 + 28) )
            goto LABEL_44;
          if ( v31 <= *(_DWORD *)(v35 + 28) )
            break;
        }
        v35 = *(_QWORD *)(v35 + 16);
LABEL_24:
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v26 = v189;
          if ( v24 < (unsigned __int64)v189 )
            goto LABEL_10;
          goto LABEL_26;
        }
      }
      if ( v34 != (_QWORD *)v35 )
        goto LABEL_103;
LABEL_9:
      v26 = v189;
      if ( v24 >= (unsigned __int64)v189 )
      {
LABEL_26:
        v37 = v25;
        v184 = -1;
        v170 = v25;
        if ( v25 < v26 )
          goto LABEL_35;
        if ( v26 < v170 )
        {
          v38 = v188;
          if ( (unsigned __int64)&v184 < v188 || (unsigned __int64)&v184 >= v188 + 4LL * *((_QWORD *)&v189 + 1) )
          {
            if ( *((_QWORD *)&v189 + 1) >= v170
              || (v183 = v19,
                  LODWORD(v173) = v25,
                  v172 = v29,
                  v171 = (__int64)v23,
                  v188 = qvector_reserve(),
                  v26 = v189,
                  v38 = v188,
                  v23 = (_QWORD *)v171,
                  v29 = v172,
                  v25 = v173,
                  v19 = v183,
                  (unsigned __int64)v189 < v170) )
            {
              v136 = v170;
              while ( 1 )
              {
                *(_DWORD *)(v38 + 4 * v26++) = -1;
                if ( v136 == v26 )
                  break;
                v38 = v188;
              }
            }
          }
          else if ( *((_QWORD *)&v189 + 1) >= v170
                 || (v183 = v19,
                     LODWORD(v173) = v25,
                     v172 = v29,
                     v171 = (__int64)v23,
                     v188 = qvector_reserve(),
                     v26 = v189,
                     v38 = v188,
                     v23 = (_QWORD *)v171,
                     v29 = v172,
                     v25 = v173,
                     v19 = v183,
                     (unsigned __int64)v189 < v170) )
          {
            v39 = v170;
            while ( 1 )
            {
              *(_DWORD *)(v38 + 4 * v26++) = -1;
              if ( v39 == v26 )
                break;
              v38 = v188;
            }
          }
          v37 = v170;
LABEL_35:
          *(_QWORD *)&v189 = v37;
        }
        v40 = v191;
        if ( v170 == (_QWORD)v191 )
          goto LABEL_10;
        v186 = 0;
        if ( v170 >= (unsigned __int64)v191 )
        {
          if ( (unsigned __int64)v178 < v190 || (unsigned __int64)v178 >= v190 + 8LL * *((_QWORD *)&v191 + 1) )
          {
            if ( *((_QWORD *)&v191 + 1) < v170 )
            {
              v183 = v19;
              LODWORD(v173) = v25;
              v172 = v29;
              v171 = (__int64)v23;
              v190 = qvector_reserve();
              v19 = v183;
              v40 = v191;
              v25 = v173;
              v29 = v172;
              v23 = (_QWORD *)v171;
            }
            v138 = v170;
            v139 = v186;
            if ( v40 < v170 )
            {
              do
                *(_QWORD *)(v190 + 8 * v40++) = v139;
              while ( v138 != v40 );
              *(_QWORD *)&v191 = v170;
              goto LABEL_10;
            }
          }
          else if ( *((_QWORD *)&v191 + 1) < v170 )
          {
            v183 = v19;
            LODWORD(v173) = v25;
            v172 = v29;
            v171 = (__int64)v23;
            v190 = qvector_reserve();
            v41 = v170;
            v40 = v191;
            v19 = v183;
            v25 = v173;
            v29 = v172;
            v23 = (_QWORD *)v171;
            if ( (unsigned __int64)v191 < v170 )
              goto LABEL_42;
          }
          else
          {
            v41 = v170;
            if ( (unsigned __int64)v191 < v170 )
            {
              do
LABEL_42:
                *(_QWORD *)(v190 + 8 * v40++) = 0;
              while ( v41 != v40 );
            }
          }
        }
        *(_QWORD *)&v191 = v170;
      }
LABEL_10:
      v27 = (int *)(v188 + v29);
      v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v31)).m128i_u64[0];
      if ( *v27 != -1 && v32 != *v27 && v179 > 1 )
      {
        if ( !under_debugger )
          sub_37DDE0(50413);
        goto LABEL_281;
      }
      *v27 = v32;
      --v25;
      *(_QWORD *)(v190 + 8 * v24--) = v28;
    }
LABEL_50:
    v43 = *(_QWORD *)(a1 + 72) + v176;
    v44 = (unsigned int)(*(_DWORD *)(v43 + 8) - 1);
    v45 = 4 * v44;
    if ( (int)v44 < 0 )
      goto LABEL_71;
    while ( 1 )
    {
LABEL_53:
      v46 = *(unsigned int *)(*(_QWORD *)v43 + v45);
      v47 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      v48 = v47;
      if ( v46 < *(_QWORD *)(a1 + 104) )
      {
        v48 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * (int)v46);
        if ( v48 < 0 )
          v48 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      }
      if ( v48 != v19 )
        goto LABEL_52;
      v49 = *(__int64 (__fastcall **)(__int64, int, int))(*a5 + 8LL);
      if ( v49 != sub_676A0 )
      {
        LODWORD(v172) = v19;
        v171 = v45;
        v170 = v43;
        v81 = v49((__int64)a5, v47, v22);
        v19 = v172;
        v45 = v171;
        v43 = v170;
        goto LABEL_111;
      }
      v50 = (_QWORD *)a5[1];
      if ( v50 )
      {
        v51 = *v50 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v51 )
        {
          v79 = 24;
          goto LABEL_198;
        }
        if ( (*(_BYTE *)(*v50 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
          break;
      }
LABEL_61:
      v52 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v47);
      v53 = (_DWORD *)*v52;
      v54 = *v52 + 4LL * v52[1];
      if ( *v52 == v54 )
        goto LABEL_272;
      v55 = (_DWORD *)*v52;
      while ( (_DWORD)v22 != *v55 )
      {
        if ( (_DWORD *)v54 == ++v55 )
          goto LABEL_272;
      }
      v56 = v55 - v53;
      if ( (_DWORD)v56 == -1 )
      {
LABEL_272:
        if ( !under_debugger )
          sub_37DDE0(50415);
        goto LABEL_281;
      }
      v57 = v189;
      v58 = (int)v56;
      if ( (int)v56 < (unsigned __int64)v189 )
        goto LABEL_67;
      v185 = -1;
      v82 = (int)v56 + 1;
      v170 = v82;
      if ( v82 >= (unsigned __int64)v189 )
      {
        if ( (unsigned __int64)v189 >= v170 )
          goto LABEL_127;
        v83 = v188;
        if ( (unsigned __int64)&v185 < v188 || (unsigned __int64)&v185 >= v188 + 4LL * *((_QWORD *)&v189 + 1) )
        {
          if ( *((_QWORD *)&v189 + 1) >= v170
            || (LODWORD(v176) = v19,
                v173 = v58,
                v172 = v45,
                v171 = v43,
                v188 = qvector_reserve(),
                v57 = v189,
                v83 = v188,
                v43 = v171,
                v45 = v172,
                v58 = v173,
                v19 = v176,
                (unsigned __int64)v189 < v170) )
          {
            v137 = v170;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v57++) = -1;
              if ( v137 == v57 )
                break;
              v83 = v188;
            }
            v82 = v170;
          }
          else
          {
            v82 = v170;
          }
        }
        else
        {
          if ( *((_QWORD *)&v189 + 1) >= v170
            || (LODWORD(v176) = v19,
                v173 = v58,
                v172 = v45,
                v171 = v43,
                v188 = qvector_reserve(),
                v57 = v189,
                v83 = v188,
                v43 = v171,
                v45 = v172,
                v58 = v173,
                v19 = v176,
                (unsigned __int64)v189 < v170) )
          {
            v84 = v170;
            while ( 1 )
            {
              *(_DWORD *)(v83 + 4 * v57++) = -1;
              if ( v84 == v57 )
                break;
              v83 = v188;
            }
          }
          v82 = v170;
        }
      }
      *(_QWORD *)&v189 = v82;
LABEL_127:
      v85 = v191;
      if ( v170 != (_QWORD)v191 )
      {
        v187 = 0;
        if ( v170 >= (unsigned __int64)v191 )
        {
          if ( (unsigned __int64)&v187 < v190 || (unsigned __int64)&v187 >= v190 + 8LL * *((_QWORD *)&v191 + 1) )
          {
            if ( *((_QWORD *)&v191 + 1) < v170 )
            {
              LODWORD(v176) = v19;
              v173 = v58;
              v172 = v45;
              v171 = v43;
              v190 = qvector_reserve();
              v19 = v176;
              v85 = v191;
              v58 = v173;
              v45 = v172;
              v43 = v171;
            }
            v87 = v170;
            v88 = v187;
            if ( v85 < v170 )
            {
              do
                *(_QWORD *)(v190 + 8 * v85++) = v88;
              while ( v87 != v85 );
              *(_QWORD *)&v191 = v170;
              goto LABEL_67;
            }
          }
          else
          {
            if ( *((_QWORD *)&v191 + 1) < v170 )
            {
              LODWORD(v176) = v19;
              v173 = v58;
              v172 = v45;
              v171 = v43;
              v190 = qvector_reserve();
              v19 = v176;
              v85 = v191;
              v58 = v173;
              v45 = v172;
              v43 = v171;
            }
            v86 = v170;
            if ( v85 < v170 )
            {
              do
                *(_QWORD *)(v190 + 8 * v85++) = 0;
              while ( v86 != v85 );
            }
          }
        }
        *(_QWORD *)&v191 = v170;
      }
LABEL_67:
      v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v22)).m128i_u64[0];
      v60 = (int *)(v188 + 4 * v58);
      if ( *v60 != -1 && v48 != *v60 && v179 > 1 )
      {
        if ( !under_debugger )
          sub_37DDE0(50413);
        goto LABEL_281;
      }
      *v60 = v48;
      LODWORD(v44) = v44 - 1;
      v45 -= 4;
      *(_QWORD *)(v190 + 8 * v58) = v59;
      if ( (_DWORD)v44 == -1 )
        goto LABEL_71;
    }
    while ( 2 )
    {
      v79 = v51 + 24;
      if ( v47 < *(_DWORD *)(v51 + 24) )
        goto LABEL_101;
      if ( v47 != *(_DWORD *)(v51 + 24) )
      {
LABEL_97:
        v51 = *(_QWORD *)(v51 + 16);
        goto LABEL_98;
      }
      if ( (int)v22 < *(_DWORD *)(v51 + 28) )
      {
LABEL_101:
        v51 = *(_QWORD *)(v51 + 8);
LABEL_98:
        if ( (*(_BYTE *)v51 & 2) != 0 )
          goto LABEL_61;
        continue;
      }
      break;
    }
    if ( (int)v22 > *(_DWORD *)(v51 + 28) )
      goto LABEL_97;
    if ( v50 == (_QWORD *)v51 )
      goto LABEL_61;
LABEL_198:
    v81 = *(_DWORD *)(v79 + 8);
LABEL_111:
    if ( v81 != 5 )
    {
      v47 = *(_DWORD *)(*(_QWORD *)v43 + v45);
      goto LABEL_61;
    }
LABEL_52:
    LODWORD(v44) = v44 - 1;
    v45 -= 4;
    if ( (_DWORD)v44 != -1 )
      goto LABEL_53;
LABEL_71:
    v169.m128i_i64[0] += 4;
    v61 = *v174 + 4 * v174[1];
    v170 = *v174;
  }
  while ( v169.m128i_i64[0] != v61 );
  if ( v170 != v169.m128i_i64[0] )
  {
    while ( 1 )
    {
      v62 = *(_DWORD *)v170;
      v63 = 24LL * *(int *)v170;
      v64 = v63 + *(_QWORD *)(a1 + 48);
      v65 = (unsigned int)(*(_DWORD *)(v64 + 8) - 1);
      if ( (int)v65 >= 0 )
      {
        v169.m128i_i32[0] = v19;
        v171 = (__int64)a5;
        v66 = 4 * v65;
        v67 = v63;
        do
        {
          LODWORD(v65) = v65 - 1;
          v68 = *(_DWORD *)(*(_QWORD *)v64 + v66);
          v66 -= 4;
          sub_68FA0(a1, v62, v68);
        }
        while ( (_DWORD)v65 != -1 );
        v19 = v169.m128i_i32[0];
        a5 = (_QWORD *)v171;
        v63 = v67;
      }
      v69 = *(_QWORD *)(a1 + 72) + v63;
      v70 = (unsigned int)(*(_DWORD *)(v69 + 8) - 1);
      v71 = 4 * v70;
      if ( (int)v70 >= 0 )
        break;
LABEL_141:
      v170 += 4LL;
      if ( v170 == *v174 + 4 * v174[1] )
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
      if ( v75 != sub_676A0 )
      {
        LODWORD(v171) = v19;
        v169.m128i_i32[0] = v74;
        v80 = v75((__int64)a5, v73, v62);
        v19 = v171;
        v74 = v169.m128i_i32[0];
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
        if ( v80 != 5 || v74 == v19 )
        {
          LODWORD(v73) = *(_DWORD *)(*(_QWORD *)v69 + v71);
          if ( v80 == 5 || v74 == v19 )
            goto LABEL_109;
          goto LABEL_80;
        }
        if ( !under_debugger )
          sub_37DDE0(50917);
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
          if ( v74 != v19 )
            goto LABEL_80;
LABEL_109:
          v169.m128i_i32[0] = v19;
          sub_68FA0(a1, v73, v62);
LABEL_81:
          LODWORD(v70) = v70 - 1;
          v19 = v169.m128i_i32[0];
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
      if ( v74 == v19 )
        goto LABEL_109;
LABEL_80:
      v169.m128i_i32[0] = v19;
      sub_6E8A0(a1, v175, v73, v62, v74, v19);
      goto LABEL_81;
    }
    goto LABEL_89;
  }
LABEL_142:
  if ( !(_QWORD)v189 )
    goto LABEL_159;
  v89 = 0;
  v90 = 0;
  v91 = 24LL * v19;
  while ( 2 )
  {
    v92 = *(int *)(v188 + 4 * v90);
    if ( (_DWORD)v92 == -1 )
      goto LABEL_158;
    v93 = (_QWORD *)(v91 + *(_QWORD *)(a1 + 48));
    v94 = v93[1];
    v95 = (_DWORD *)(*v93 + 4 * v94);
    if ( (_DWORD *)*v93 == v95 )
      goto LABEL_222;
    v96 = (_DWORD *)*v93;
    while ( (_DWORD)v92 != *v96 )
    {
      if ( v95 == ++v96 )
        goto LABEL_222;
    }
    if ( v95 == v96 )
    {
LABEL_222:
      if ( v93[2] < (unsigned __int64)(v94 + 1) )
      {
        LODWORD(v170) = v19;
        v169.m128i_i64[0] = (__int64)v93;
        v159 = qvector_reserve();
        v93 = (_QWORD *)v169.m128i_i64[0];
        v19 = v170;
        v160 = *(_QWORD *)(v169.m128i_i64[0] + 8);
        *(_QWORD *)v169.m128i_i64[0] = v159;
        v95 = (_DWORD *)(v159 + 4 * v160);
      }
      *v95 = v92;
      ++v93[1];
      v140 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v92);
      v141 = v140[1];
      v142 = *v140;
      if ( v140[2] < (unsigned __int64)(v141 + 1) )
      {
        v169.m128i_i32[0] = v19;
        v158 = qvector_reserve();
        *v140 = v158;
        v142 = v158;
        v19 = v169.m128i_i32[0];
        v141 = v140[1];
      }
      *(_DWORD *)(v142 + 4 * v141) = v19;
      ++v140[1];
    }
    if ( !v175 )
      goto LABEL_158;
    v97 = v175->m128i_i64[0];
    v98 = _mm_cvtsi32_si128(*(_DWORD *)(v188 + 4 * v90));
    v169 = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), v98),
             _mm_unpacklo_epi32(
               _mm_cvtsi32_si128(*(_DWORD *)(v190 + 8 * v90)),
               _mm_cvtsi32_si128(*(_DWORD *)(v190 + 8 * v90 + 4))));
    if ( !v97 )
    {
      LODWORD(v170) = v19;
      v164 = qalloc();
      v165 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v164, (__m128i)(unsigned __int64)v164);
      if ( !v164 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v166 = v175;
      *(_QWORD *)(v164 + 32) = 0;
      *(_OWORD *)(v164 + 16) = 0;
      v19 = v170;
      *(__m128i *)(v164 + 8) = v165;
      *(_QWORD *)v164 = v164 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v166->m128i_i64[0] = v164;
      *(_QWORD *)v164 = v164 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v164 & 3LL;
      *(__m128i *)(v166->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                               (__m128i)v166->m128i_u64[0],
                                               (__m128i)v166->m128i_u64[0]);
      *(_QWORD *)v166->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v166->m128i_i64[0] |= 2uLL;
      v97 = v166->m128i_i64[0];
LABEL_153:
      LODWORD(v170) = v19;
      v99 = qalloc();
      v100 = v99;
      if ( !v99 )
      {
        v8 = __cxa_allocate_exception(8u);
        *v8 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v8,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v101 = _mm_load_si128(&v169);
      v102 = v175;
      *(_OWORD *)(v99 + 16) = 0;
      v19 = v170;
      *(_OWORD *)v99 = 0;
      *(__m128i *)(v99 + 24) = v101;
      *(_QWORD *)v99 = v97 & 0xFFFFFFFFFFFFFFFCLL;
      v103 = _mm_loadl_epi64(v102);
      *(_QWORD *)v99 = v97 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v99 + 8) = _mm_unpacklo_epi64(v103, v103);
      if ( v102->m128i_i64[0] == v97 )
      {
LABEL_253:
        *(_QWORD *)v97 = v100 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v97 & 3LL;
        *(_QWORD *)(v102->m128i_i64[0] + 8) = v100;
        *(_QWORD *)(v102->m128i_i64[0] + 16) = v100;
        v163 = *(_QWORD *)v100 & 2LL;
        *(_QWORD *)v100 &= ~1uLL;
        v169.m128i_i64[0] = v102->m128i_i64[0];
        *(_QWORD *)v100 = v163 | v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_157;
      }
      v104 = v175;
      *(_QWORD *)(v97 + 8) = v100;
      v105 = v104->m128i_i64[0];
      if ( *(_QWORD *)(v105 + 8) != v97 )
        goto LABEL_156;
LABEL_247:
      *(_QWORD *)(v105 + 8) = v100;
      goto LABEL_156;
    }
    if ( !v175->m128i_i64[1] )
      goto LABEL_153;
    v150 = 1;
    v151 = *(_QWORD *)v97 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v151 & 2) != 0 )
      goto LABEL_241;
    while ( 2 )
    {
      if ( v19 < *(_DWORD *)(v151 + 24) )
        goto LABEL_251;
      if ( v19 != *(_DWORD *)(v151 + 24) )
      {
LABEL_239:
        v152 = *(_BYTE **)(v151 + 16);
        v150 = 0;
        if ( (*v152 & 2) != 0 )
          goto LABEL_240;
LABEL_252:
        v151 = (unsigned __int64)v152;
        continue;
      }
      break;
    }
    v162 = _mm_cvtsi128_si32(v98);
    if ( v162 < *(_DWORD *)(v151 + 28) )
    {
LABEL_251:
      v152 = *(_BYTE **)(v151 + 8);
      v150 = 1;
      if ( (*v152 & 2) != 0 )
      {
LABEL_240:
        v97 = v151;
        goto LABEL_241;
      }
      goto LABEL_252;
    }
    if ( v162 > *(_DWORD *)(v151 + 28) )
      goto LABEL_239;
    if ( v151 )
      goto LABEL_158;
    v97 = 0;
LABEL_241:
    LODWORD(v170) = v19;
    v153 = qalloc();
    v100 = v153;
    if ( !v153 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v154 = _mm_load_si128(&v169);
    v102 = v175;
    *(_OWORD *)(v153 + 16) = 0;
    v19 = v170;
    *(_OWORD *)v153 = 0;
    *(__m128i *)(v153 + 24) = v154;
    *(_QWORD *)v153 = v97 & 0xFFFFFFFFFFFFFFFCLL;
    v155 = _mm_loadl_epi64(v102);
    *(_QWORD *)v153 = v97 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v153 + 8) = _mm_unpacklo_epi64(v155, v155);
    if ( v97 == v102->m128i_i64[0] )
      goto LABEL_253;
    if ( v150 )
    {
      v161 = v175;
      *(_QWORD *)(v97 + 8) = v100;
      v105 = v161->m128i_i64[0];
      if ( v97 != *(_QWORD *)(v105 + 8) )
        goto LABEL_156;
      goto LABEL_247;
    }
    v156 = v175;
    *(_QWORD *)(v97 + 16) = v100;
    v157 = v156->m128i_i64[0];
    if ( v97 == *(_QWORD *)(v157 + 16) )
      *(_QWORD *)(v157 + 16) = v100;
LABEL_156:
    v169.m128i_i32[0] = v19;
    sub_6E4B0(v175, (__int64 *)v100);
    v19 = v169.m128i_i32[0];
LABEL_157:
    ++v175->m128i_i64[1];
LABEL_158:
    v90 = ++v89;
    if ( v89 < (unsigned __int64)v189 )
      continue;
    break;
  }
LABEL_159:
  if ( !v181 )
    goto LABEL_166;
  v106 = v181[1];
  if ( !v106 )
    goto LABEL_166;
  if ( v174[1] != 1 )
  {
    if ( !under_debugger )
      sub_37DDE0(51803);
    goto LABEL_281;
  }
  v107 = v181;
  v108 = *v181;
  v109 = *(_DWORD *)*v174;
  v110 = (__int32 *)*v181;
  if ( 8 * v106 )
  {
    do
    {
      if ( *v110 == v109 )
      {
        *v110 = v19;
        v106 = v107[1];
        v108 = *v107;
      }
      v110 += 2;
    }
    while ( v110 != (__int32 *)(v108 + 8 * v106) );
  }
LABEL_166:
  v111 = *(_QWORD *)a1;
  v112 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL);
  if ( v112 == sub_60CE0 )
  {
    v113 = *(unsigned int *)(a1 + 36);
  }
  else
  {
    v169.m128i_i32[0] = v19;
    v167 = v112(a1);
    v111 = *(_QWORD *)a1;
    v19 = v169.m128i_i32[0];
    v113 = v167;
  }
  v114 = (_DWORD *)*v174;
  v115 = *v174 + 4 * v174[1];
  if ( *v174 != v115 )
  {
    while ( (_DWORD)v113 != *v114 )
    {
      if ( (_DWORD *)v115 == ++v114 )
        goto LABEL_174;
    }
    if ( v114 != (_DWORD *)v115 )
      *(_DWORD *)(a1 + 36) = v19;
  }
LABEL_174:
  v116 = *(__int64 (__fastcall **)(__int64))(v111 + 88);
  if ( v116 == sub_60CF0 )
  {
    v117 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v169.m128i_i32[0] = v19;
    v168 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))v116)(
             a1,
             v111,
             sub_60CF0,
             v113);
    v19 = v169.m128i_i32[0];
    v117 = v168;
  }
  v118 = (_DWORD *)*v174;
  v119 = *v174 + 4 * v174[1];
  if ( *v174 != v119 )
  {
    while ( v117 != *v118 )
    {
      if ( (_DWORD *)v119 == ++v118 )
        goto LABEL_182;
    }
    if ( (_DWORD *)v119 != v118 )
      *(_DWORD *)(a1 + 40) = v19;
  }
LABEL_182:
  v120 = v180;
  v121 = v174;
  v169.m128i_i32[0] = v19;
  v122 = v177;
  sub_6C960(v177, v19, v174, v180);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v122 + 168LL))(v122, v182);
  v123 = v169.m128i_i32[0];
  *(_DWORD *)(v122[38] + 4LL * v169.m128i_i32[0]) = v120;
  v124 = v123;
  if ( v121[1] )
  {
    v125 = 3 * v123;
    v126 = 0;
    v127 = 0;
    v128 = 8 * v125;
    do
    {
      v129 = *(int *)(*v174 + 4 * v127);
      v130 = (__int64 *)(v128 + v177[6]);
      v131 = v130[1];
      v132 = (_DWORD *)(*v130 + 4 * v131);
      if ( (_DWORD *)*v130 == v132 )
        goto LABEL_227;
      v133 = (_DWORD *)*v130;
      while ( (_DWORD)v129 != *v133 )
      {
        if ( v132 == ++v133 )
          goto LABEL_227;
      }
      if ( v132 == v133 )
      {
LABEL_227:
        if ( v130[2] < (unsigned __int64)(v131 + 1) )
        {
          v169.m128i_i32[0] = v124;
          v148 = qvector_reserve();
          v149 = v130[1];
          v124 = v169.m128i_i32[0];
          *v130 = v148;
          v132 = (_DWORD *)(v148 + 4 * v149);
        }
        v143 = v177;
        *v132 = v129;
        ++v130[1];
        v144 = (__int64 *)(v143[9] + 24 * v129);
        v145 = v144[1];
        v146 = *v144;
        if ( v144[2] < (unsigned __int64)(v145 + 1) )
        {
          v169.m128i_i32[0] = v124;
          v147 = qvector_reserve();
          *v144 = v147;
          v146 = v147;
          v124 = v169.m128i_i32[0];
          v145 = v144[1];
        }
        *(_DWORD *)(v146 + 4 * v145) = v124;
        ++v144[1];
      }
      v127 = ++v126;
    }
    while ( v126 < (unsigned __int64)v174[1] );
  }
  v134 = v190;
  *((_DWORD *)v177 + 9) = v124;
  if ( v134 )
  {
    v169.m128i_i32[0] = v124;
    *(_QWORD *)&v191 = 0;
    qfree();
    v124 = v169.m128i_i32[0];
  }
  if ( v188 )
  {
    v169.m128i_i32[0] = v124;
    *(_QWORD *)&v189 = 0;
    qfree();
    return v169.m128i_u32[0];
  }
  return v124;
}

