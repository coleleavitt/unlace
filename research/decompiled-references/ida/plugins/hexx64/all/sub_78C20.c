__int64 __fastcall sub_78C20(__m128i *a1, __m128i *a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i v12; // kr00_16
  char v13; // al
  void (__fastcall *v14)(__m128i *, unsigned __int64); // r12
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  signed int *v19; // r13
  int *i; // r15
  __int64 (__fastcall *v21)(__int64); // rax
  __int32 v22; // eax
  unsigned __int64 v23; // rcx
  signed int v24; // edx
  signed int v25; // esi
  _DWORD *v26; // rcx
  _DWORD *v27; // rdi
  _DWORD *v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  __int64 (__fastcall *v33)(__int64); // rax
  int v34; // eax
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 (__fastcall *v41)(__int64); // rax
  int v42; // r10d
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 (__fastcall *v45)(__int64); // rax
  unsigned __int64 v46; // r15
  int v47; // r13d
  int v48; // eax
  char v49; // al
  __int64 v50; // rax
  _QWORD *v51; // r12
  int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __m128i *v59; // rdi
  unsigned __int64 v60; // rdi
  char v61; // al
  int v62; // r13d
  __int64 v63; // rax
  signed int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned int *v67; // rdx
  unsigned int v68; // r8d
  unsigned int v69; // r9d
  __int64 v70; // r12
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // r12
  int v76; // eax
  int v77; // edx
  _DWORD *v78; // rax
  _DWORD *v79; // rcx
  unsigned int v80; // r13d
  int v81; // eax
  __int64 (__fastcall *v82)(__int64, int); // rax
  int v83; // eax
  __int64 (__fastcall *v84)(__int64, int, int); // rax
  unsigned int v85; // r12d
  bool v86; // r11
  __int64 (__fastcall *v87)(__int64); // rax
  __int32 v88; // eax
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rbx
  __int64 v99; // rax
  __m128i v100; // xmm0
  _QWORD *v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rsi
  __int64 v105; // rax
  _QWORD *v106; // r12
  int v107; // r13d
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rdx
  _QWORD *v111; // rcx
  __int64 *v112; // r14
  __int64 v113; // rdx
  __int64 *v114; // rdi
  __int64 *v115; // rdi
  __int64 v116; // rax
  __m128i v117; // xmm0
  unsigned __int64 v118; // r12
  __int64 *v119; // rax
  __int64 v120; // rdx
  __int64 *v121; // r14
  __int64 *v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 *v125; // rdi
  __int64 *v126; // rdi
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rcx
  unsigned __int64 v130; // rsi
  __int64 *v131; // rdi
  __int64 *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rax
  unsigned __int64 v136; // [rsp+18h] [rbp-198h]
  int j; // [rsp+20h] [rbp-190h]
  char v138; // [rsp+26h] [rbp-18Ah]
  unsigned __int8 v139; // [rsp+27h] [rbp-189h]
  bool v140; // [rsp+28h] [rbp-188h]
  int v141; // [rsp+30h] [rbp-180h]
  int v142; // [rsp+34h] [rbp-17Ch]
  __int64 v143; // [rsp+38h] [rbp-178h]
  __int64 v144; // [rsp+58h] [rbp-158h]
  unsigned __int64 *v145; // [rsp+60h] [rbp-150h]
  unsigned __int64 v146; // [rsp+68h] [rbp-148h]
  int k; // [rsp+68h] [rbp-148h]
  int v148; // [rsp+68h] [rbp-148h]
  __m128i v149; // [rsp+70h] [rbp-140h] BYREF
  __int64 v150; // [rsp+80h] [rbp-130h] BYREF
  __int128 v151; // [rsp+88h] [rbp-128h]
  __int64 v152; // [rsp+A0h] [rbp-110h] BYREF
  __int128 v153; // [rsp+A8h] [rbp-108h]
  __int64 (__fastcall **v154)(); // [rsp+C0h] [rbp-F0h] BYREF
  __int64 v155; // [rsp+C8h] [rbp-E8h]
  __int64 v156; // [rsp+D0h] [rbp-E0h]
  __int64 v157; // [rsp+E0h] [rbp-D0h] BYREF
  __int128 v158; // [rsp+E8h] [rbp-C8h]
  __int64 v159; // [rsp+100h] [rbp-B0h] BYREF
  __int128 v160; // [rsp+108h] [rbp-A8h]
  __int64 v161; // [rsp+118h] [rbp-98h]
  __int128 v162; // [rsp+120h] [rbp-90h]
  __int64 v163; // [rsp+130h] [rbp-80h] BYREF
  __int128 v164; // [rsp+138h] [rbp-78h]
  __int64 v165; // [rsp+148h] [rbp-68h]
  __int128 v166; // [rsp+150h] [rbp-60h]
  __int64 v167; // [rsp+160h] [rbp-50h]
  __int128 v168; // [rsp+168h] [rbp-48h]
  unsigned __int64 v169; // [rsp+178h] [rbp-38h]

  v6 = a2[17].m128i_i64[1];
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v169 = __readfsqword(0x28u);
  v8 = *(_QWORD *)a3;
  *(_QWORD *)a3 = v6;
  v9 = a2[18].m128i_i64[0];
  v150 = 0;
  *(_QWORD *)(a3 + 8) = v9;
  v10 = a2[18].m128i_i64[1];
  v152 = 0;
  *(_QWORD *)(a3 + 16) = v10;
  a2[18] = v7;
  a2[17].m128i_i64[1] = v8;
  v154 = off_4DBC70;
  v151 = 0;
  v153 = 0;
  v155 = 0;
  v11 = a1[9].m128i_i64[1];
  v156 = 0;
  v163 = 0;
  v165 = 0;
  v167 = 0;
  v159 = 0;
  v161 = 0;
  v164 = 0;
  v166 = 0;
  v168 = 0;
  v160 = 0;
  v162 = 0;
  if ( v11 )
  {
    a1[10].m128i_i64[0] = 0;
    qfree(v11);
    a1[9].m128i_i64[1] = 0;
    a1[10].m128i_i64[1] = 0;
  }
  a1[2].m128i_i8[0] = 1;
  if ( (a4 & 2) == 0 )
  {
    v149 = 0u;
    sub_780E0(a1, &v149, a2, (__m128)0LL);
    v12 = v149;
LABEL_5:
    v149 = v12;
    v13 = sub_785E0((__int64)a1, &v149, a2);
    v144 = v149.m128i_i64[1];
    v145 = (unsigned __int64 *)v149.m128i_i64[0];
    if ( (a4 & 2) == 0 || !v13 )
      goto LABEL_7;
    goto LABEL_191;
  }
  sub_3C9E90((__int64)a2, a1, "initial graph", 0, 0);
  v149 = 0u;
  v49 = sub_780E0(a1, &v149, a2, (__m128)0LL);
  v12 = v149;
  if ( !v49 )
    goto LABEL_5;
  v50 = a2[14].m128i_i64[0];
  v157 = 0;
  v158 = 0;
  if ( v50 )
  {
    if ( a2[14].m128i_i64[1] )
    {
      v51 = *(_QWORD **)(v50 + 8);
      if ( v51 != (_QWORD *)v50 )
      {
        v52 = *((_DWORD *)v51 + 7);
        v53 = 1;
        v54 = 0;
LABEL_69:
        v157 = qvector_reserve((__int64)&v157, v54, v53, 4);
        v55 = v158;
        v54 = v157;
        while ( 1 )
        {
          *(_DWORD *)(v54 + 4 * v55) = v52;
          v55 = v158 + 1;
          *(_QWORD *)&v158 = v158 + 1;
          if ( (*v51 & 2) == 0 )
          {
            v56 = (_QWORD *)v51[2];
            if ( (*(_BYTE *)v56 & 2) != 0 )
            {
              v102 = (_QWORD *)(*v51 & 0xFFFFFFFFFFFFFFFCLL);
              v103 = *v102;
              if ( (*v102 & 2) == 0 )
              {
                while ( (_QWORD *)v102[2] == v51 )
                {
                  v51 = v102;
                  v104 = v103 & 0xFFFFFFFFFFFFFFFCLL;
                  v103 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v103 & 2) != 0 )
                  {
                    v51 = (_QWORD *)v104;
                    goto LABEL_67;
                  }
                  v102 = (_QWORD *)v104;
                }
              }
              v51 = v102;
            }
            else
            {
              do
              {
                v51 = v56;
                v56 = (_QWORD *)v56[1];
              }
              while ( (*(_BYTE *)v56 & 2) == 0 );
            }
          }
LABEL_67:
          if ( (_QWORD *)a2[14].m128i_i64[0] == v51 )
            break;
          v53 = v55 + 1;
          v52 = *((_DWORD *)v51 + 7);
          v54 = v157;
          if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v55 + 1) )
            goto LABEL_69;
        }
      }
    }
  }
  sub_3C9E90((__int64)a2, a1, "gotos removed", 0, (__int64)&v157);
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree(v157);
  }
  v61 = sub_785E0((__int64)a1, &v149, a2);
  v144 = v149.m128i_i64[1];
  v145 = (unsigned __int64 *)v149.m128i_i64[0];
  if ( v61 )
  {
LABEL_191:
    v105 = a2[15].m128i_i64[0];
    v157 = 0;
    v158 = 0;
    if ( v105 )
    {
      if ( a2[15].m128i_i64[1] )
      {
        v106 = *(_QWORD **)(v105 + 8);
        if ( v106 != (_QWORD *)v105 )
        {
          v107 = *((_DWORD *)v106 + 6);
          v108 = 0;
          v109 = 1;
LABEL_200:
          v157 = qvector_reserve((__int64)&v157, v108, v109, 4);
          v110 = v158;
          v108 = v157;
          while ( 1 )
          {
            *(_DWORD *)(v108 + 4 * v110) = v107;
            v110 = v158 + 1;
            *(_QWORD *)&v158 = v158 + 1;
            if ( (*v106 & 2) == 0 )
            {
              v111 = (_QWORD *)v106[2];
              if ( (*(_BYTE *)v111 & 2) != 0 )
              {
                v128 = (_QWORD *)(*v106 & 0xFFFFFFFFFFFFFFFCLL);
                v129 = *v128;
                if ( (*v128 & 2) == 0 )
                {
                  while ( (_QWORD *)v128[2] == v106 )
                  {
                    v106 = v128;
                    v130 = v129 & 0xFFFFFFFFFFFFFFFCLL;
                    v129 = *(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v129 & 2) != 0 )
                    {
                      v106 = (_QWORD *)v130;
                      goto LABEL_198;
                    }
                    v128 = (_QWORD *)v130;
                  }
                }
                v106 = v128;
              }
              else
              {
                do
                {
                  v106 = v111;
                  v111 = (_QWORD *)v111[1];
                }
                while ( (*(_BYTE *)v111 & 2) == 0 );
              }
            }
LABEL_198:
            if ( v106 == (_QWORD *)a2[15].m128i_i64[0] )
              break;
            v109 = v110 + 1;
            v107 = *((_DWORD *)v106 + 6);
            v108 = v157;
            if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v110 + 1) )
              goto LABEL_200;
          }
        }
      }
    }
    sub_3C9E90((__int64)a2, a1, "nway normalization result", (__int64)&v157, 0);
    if ( v157 )
    {
      *(_QWORD *)&v158 = 0;
      qfree(v157);
    }
  }
LABEL_7:
  sub_6FA10(a1);
  v142 = a1[10].m128i_i32[0] + 1;
  v14 = *(void (__fastcall **)(__m128i *, unsigned __int64))(a2->m128i_i64[0] + 168);
  v15 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
  if ( v15 == sub_65050 )
  {
    v16 = a1[9].m128i_u32[0];
    if ( (char *)v14 == (char *)sub_6C320 )
      goto LABEL_9;
LABEL_239:
    v14(a2, v16);
    goto LABEL_11;
  }
  v16 = (unsigned int)v15((__int64)a1);
  if ( (char *)v14 != (char *)sub_6C320 )
    goto LABEL_239;
LABEL_9:
  sub_673C0((__int64)a2, v16, 0.0);
  v17 = a2[19].m128i_u64[1];
  v16 = (int)v16;
  LODWORD(v157) = 0;
  v18 = v16;
  if ( (int)v16 < v17 )
  {
    a2[19].m128i_i64[1] = (int)v16;
    goto LABEL_11;
  }
  if ( v17 < (int)v16 )
  {
    v57 = a2[19].m128i_u64[0];
    v58 = a2[20].m128i_u64[0];
    v59 = a2 + 19;
    if ( (unsigned __int64)&v157 < v57 || (unsigned __int64)&v157 >= v57 + 4 * v58 )
    {
      if ( v58 < v18 )
      {
        v133 = qvector_reserve((__int64)v59, v57, v18, 4);
        a2[19].m128i_i64[0] = v133;
        v57 = v133;
        v17 = a2[19].m128i_u64[1];
        if ( v17 >= v18 )
          goto LABEL_78;
      }
      v60 = v18;
      while ( 1 )
      {
        *(_DWORD *)(v57 + 4 * v17++) = 0;
        if ( v18 == v17 )
          break;
        v57 = a2[19].m128i_u64[0];
      }
    }
    else
    {
      if ( v58 < v18 )
      {
        v134 = qvector_reserve((__int64)v59, v57, v18, 4);
        a2[19].m128i_i64[0] = v134;
        v57 = v134;
        v60 = v18;
        v17 = a2[19].m128i_u64[1];
        if ( v17 >= v18 )
          goto LABEL_78;
      }
      else
      {
        v60 = v18;
      }
      while ( 1 )
      {
        *(_DWORD *)(v57 + 4 * v17++) = 0;
        if ( v60 == v17 )
          break;
        v57 = a2[19].m128i_u64[0];
      }
    }
    v18 = v60;
LABEL_78:
    a2[19].m128i_i64[1] = v18;
  }
LABEL_11:
  v19 = (signed int *)a2[12].m128i_i64[1];
  for ( i = &v19[2 * a2[13].m128i_i64[0]]; i != v19; v19 += 2 )
  {
    v21 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
    if ( v21 == sub_65050 )
      v22 = a1[9].m128i_i32[0];
    else
      v22 = v21((__int64)a1);
    v23 = *v19;
    v24 = v19[1];
    v25 = *v19;
    if ( v23 < v22 && v24 < (unsigned __int64)v22 )
    {
      *(_DWORD *)(a2[17].m128i_i64[1] + 4 * v23) &= 0xFFFFFFE7;
      v26 = (_DWORD *)a1[9].m128i_i64[1];
      v25 = *v19;
      v27 = &v26[a1[10].m128i_i64[0]];
      if ( v26 == v27 )
      {
        v24 = v19[1];
      }
      else
      {
        v28 = (_DWORD *)a1[9].m128i_i64[1];
        while ( v25 != *v28 )
        {
          if ( v27 == ++v28 )
            goto LABEL_21;
        }
        if ( v27 != v28 )
        {
          sub_6D0A0((__int64)"failed to force goto for (%d,%d)\n", v25, v19[1]);
          continue;
        }
LABEL_21:
        v24 = v19[1];
        while ( v24 != *v26 )
        {
          if ( v27 == ++v26 )
            goto LABEL_25;
        }
        if ( v27 != v26 )
          goto LABEL_93;
      }
LABEL_25:
      v29 = a1[3].m128i_i64[0] + 24LL * v25;
      v30 = *(_DWORD **)v29;
      v31 = *(_QWORD *)v29 + 4LL * *(_QWORD *)(v29 + 8);
      if ( v30 != (_DWORD *)v31 )
      {
        while ( *v30 != v24 )
        {
          if ( (_DWORD *)v31 == ++v30 )
            goto LABEL_93;
        }
        if ( (_DWORD *)v31 != v30 )
        {
          v149.m128i_i64[0] = (__int64)v145;
          v149.m128i_i64[1] = v144;
          v32 = sub_75060(a1->m128i_i64, &v149, a2, (__int64)&v150, v25, v24, 1);
          if ( v32 )
          {
            sub_731C0((__int64)a1, a2, v32, &v150, &v154, nullptr, 0.0, &v149);
            v144 = v149.m128i_i64[1];
            v145 = (unsigned __int64 *)v149.m128i_i64[0];
          }
          else
          {
            sub_6D0A0((__int64)"failed to force goto for (%d,%d)\n", *v19, v19[1]);
          }
          continue;
        }
      }
    }
LABEL_93:
    sub_6D0A0((__int64)"failed to force goto for (%d,%d)\n", v25, v24);
  }
  v157 = 0;
  v158 = 0;
LABEL_34:
  while ( 2 )
  {
    v33 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
    if ( v33 == sub_65050 )
      v34 = a1[9].m128i_i32[0];
    else
      v34 = v33((__int64)a1);
    if ( v142 < v34 )
    {
      v35 = v164;
      v36 = 0;
      if ( (_QWORD)v164 )
      {
        do
        {
          v37 = v36 + 1;
          qfree(*(_QWORD *)(v163 + 16 * v36));
          v36 = v37;
        }
        while ( v35 != v37 );
      }
      v38 = v166;
      *(_QWORD *)&v164 = 0;
      v39 = 0;
      if ( (_QWORD)v166 )
      {
        do
        {
          v40 = v39 + 1;
          qfree(*(_QWORD *)(v165 + 16 * v39));
          v39 = v40;
        }
        while ( v38 != v40 );
      }
      *(_QWORD *)&v166 = 0;
      *(_QWORD *)&v168 = 0;
      *(_QWORD *)&v153 = 0;
      sub_6E0C0((__int64)a1, &v159, (__int64)&v154, 0.0);
      v41 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
      if ( v41 == sub_65050 )
        v141 = a1[9].m128i_i32[0];
      else
        v141 = v41((__int64)a1);
      if ( v141 > 0 )
      {
        v146 = 0;
        while ( 1 )
        {
          v45 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
          if ( v45 == sub_65050 )
          {
            if ( v142 >= a1[9].m128i_i32[0] )
              goto LABEL_84;
          }
          else if ( v142 >= (int)v45((__int64)a1) )
          {
LABEL_84:
            LODWORD(v46) = v146;
            goto LABEL_85;
          }
          LODWORD(v46) = v146 + 1;
          if ( v146 >= (unsigned __int64)v160 )
            goto LABEL_85;
          v47 = *(_DWORD *)(v159 + 4 * v146);
          if ( v47 == -1 )
            goto LABEL_85;
          if ( (unsigned __int64)(unsigned int)v47 >= a1[6].m128i_i64[1]
            || (v48 = *(_DWORD *)(a1[6].m128i_i64[0] + 4LL * v47), v48 < 0)
            || v47 == v48 )
          {
            v149.m128i_i64[0] = (__int64)v145;
            v149.m128i_i64[1] = v144;
            v42 = sub_75980(
                    a1->m128i_i64,
                    &v149,
                    v47,
                    (unsigned __int64 *)&v157,
                    a2,
                    &v150,
                    (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v154,
                    &v163,
                    1);
            if ( v42 || (_QWORD)v158 )
              goto LABEL_89;
            v43 = v153;
            v44 = v152;
            if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)(v153 + 1) )
            {
              v152 = qvector_reserve((__int64)&v152, v152, v153 + 1, 4);
              v44 = v152;
              v43 = v153;
            }
            *(_DWORD *)(v44 + 4 * v43) = v47;
            *(_QWORD *)&v153 = v153 + 1;
          }
          if ( ++v146 == v141 )
            goto LABEL_85;
        }
      }
      LODWORD(v46) = 0;
LABEL_85:
      if ( (_QWORD)v153 )
      {
        v62 = 0;
        v63 = 0;
        while ( 1 )
        {
          v64 = *(_DWORD *)(v152 + 4 * v63);
          v149.m128i_i64[0] = (__int64)v145;
          v149.m128i_i64[1] = v144;
          v42 = sub_776E0(a1->m128i_i64, &v149, v64, a2, &v150, &v154, 0.0, &v163);
          if ( v42 )
            break;
          v63 = ++v62;
          if ( v62 >= (unsigned __int64)v153 )
            goto LABEL_121;
        }
LABEL_89:
        if ( !v42 )
          goto LABEL_117;
LABEL_90:
        v149.m128i_i64[0] = (__int64)v145;
        v149.m128i_i64[1] = v144;
        sub_731C0((__int64)a1, a2, v42, &v150, &v154, &v157, 0.0, &v149);
        v144 = v149.m128i_i64[1];
        v145 = (unsigned __int64 *)v149.m128i_i64[0];
        v65 = v158;
        v66 = v158;
        if ( (_QWORD)v158 )
          goto LABEL_91;
        if ( (a4 & 1) == 0 )
          continue;
        v70 = v164;
        v71 = 0;
        if ( (_QWORD)v164 )
        {
          v143 = v158;
          do
          {
            v72 = v71++;
            qfree(*(_QWORD *)(v163 + 16 * v72));
          }
          while ( v70 != v71 );
          v66 = v143;
        }
        v73 = v166;
        *(_QWORD *)&v164 = 0;
        v74 = v66;
        if ( (_QWORD)v166 )
        {
          do
          {
            v75 = v74 + 1;
            qfree(*(_QWORD *)(v165 + 16 * v74));
            v74 = v75;
          }
          while ( v73 != v75 );
        }
        *(_QWORD *)&v166 = 0;
        *(_QWORD *)&v168 = 0;
        if ( v141 <= (int)v46 )
          continue;
        v46 = (int)v46;
        while ( 1 )
        {
          if ( v46 >= (unsigned __int64)v160 )
            goto LABEL_34;
          v77 = *(_DWORD *)(v159 + 4 * v46);
          if ( v77 == -1 )
            goto LABEL_34;
          if ( (unsigned __int64)(unsigned int)v77 >= a1[6].m128i_i64[1]
            || (v76 = *(_DWORD *)(a1[6].m128i_i64[0] + 4LL * v77), v76 < 0)
            || v77 == v76 )
          {
            v78 = (_DWORD *)a2[16].m128i_i64[0];
            v79 = &v78[a2[16].m128i_i64[1]];
            if ( v78 == v79 )
              goto LABEL_114;
            while ( v77 != *v78 )
            {
              if ( v79 == ++v78 )
                goto LABEL_114;
            }
            if ( v79 == v78 )
            {
LABEL_114:
              v149.m128i_i64[0] = (__int64)v145;
              v149.m128i_i64[1] = v144;
              v42 = sub_75980(
                      a1->m128i_i64,
                      &v149,
                      v77,
                      (unsigned __int64 *)&v157,
                      a2,
                      &v150,
                      (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v154,
                      &v163,
                      0);
              if ( v42 || (_QWORD)v158 )
              {
                LODWORD(v46) = v46 + 1;
                if ( !v42 )
                {
LABEL_117:
                  v65 = v158;
                  if ( !(_QWORD)v158 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCA5Du, 0.0);
                    goto LABEL_265;
                  }
LABEL_91:
                  v67 = (unsigned int *)(v157 + 8 * v65 - 8);
                  v68 = *v67;
                  v69 = v67[1];
                  *(_QWORD *)&v158 = v65 - 1;
                  v149.m128i_i64[0] = (__int64)v145;
                  v149.m128i_i64[1] = v144;
                  v42 = sub_75060(a1->m128i_i64, &v149, a2, (__int64)&v150, v68, v69, 0);
                  if ( !v42 )
                  {
                    *(_QWORD *)&v158 = 0;
                    goto LABEL_34;
                  }
                }
                goto LABEL_90;
              }
            }
          }
          if ( v141 <= (int)++v46 )
            goto LABEL_34;
        }
      }
LABEL_121:
      if ( v141 > 0 )
      {
        for ( j = 0; ; j = 1 )
        {
          v138 = 0;
          v136 = 0;
          v139 = j ^ 1;
          do
          {
            if ( v136 < (unsigned __int64)v160 )
            {
              v80 = *(_DWORD *)(v159 + 4 * v136);
              if ( v80 != -1 )
              {
                for ( k = 0; ; ++k )
                {
                  v82 = *(__int64 (__fastcall **)(__int64, int))(a1->m128i_i64[0] + 104);
                  if ( v82 == sub_650B0 )
                  {
                    v83 = 0;
                    if ( a1[5].m128i_i64[0] )
                      v83 = *(_DWORD *)(a1[4].m128i_i64[1] + 24LL * (int)v80 + 8);
                    if ( k >= v83 )
                      break;
                  }
                  else if ( k >= (int)v82((__int64)a1, v80) )
                  {
                    break;
                  }
                  v84 = *(__int64 (__fastcall **)(__int64, int, int))(a1->m128i_i64[0] + 120);
                  if ( v84 == sub_650F0 )
                    v85 = *(_DWORD *)(*(_QWORD *)(a1[4].m128i_i64[1] + 24LL * (int)v80) + 4LL * k);
                  else
                    v85 = v84((__int64)a1, v80, k);
                  v86 = sub_70810((__int64)a1, (__int64)a2, v85, 0.0);
                  v140 = v86;
                  if ( (v86 & v139) != 0 )
                  {
                    v138 = v86 & v139;
                  }
                  else
                  {
                    v149.m128i_i64[0] = (__int64)v145;
                    v149.m128i_i64[1] = v144;
                    v81 = sub_75060(a1->m128i_i64, &v149, a2, (__int64)&v150, v85, v80, j);
                    v42 = v81;
                    if ( v81 )
                    {
                      if ( v140 )
                      {
                        v148 = v81;
                        sub_6D0A0((__int64)"### removed eh34 edge %d->%d\n", v85, v80);
                        v42 = v148;
                      }
                      LODWORD(v46) = v136;
                      goto LABEL_89;
                    }
                  }
                }
              }
            }
            ++v136;
          }
          while ( v141 != v136 );
          if ( !v138 || j == 1 )
            break;
        }
      }
    }
    break;
  }
  sub_3CA330((__int64)a2);
  v87 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 64);
  if ( v87 == sub_65050 )
    v88 = a1[9].m128i_i32[0];
  else
    v88 = v87((__int64)a1);
  if ( v142 != v88 )
  {
    if ( !under_debugger )
      sub_383060(0xC4BDu, 0.0);
LABEL_265:
    BUG();
  }
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree(v157);
  }
  if ( v145 )
  {
    if ( !v144
      || (v118 = *v145, v119 = (__int64 *)(*v145 & 0xFFFFFFFFFFFFFFFCLL), v120 = *v119, v121 = v119, (*v119 & 2) != 0) )
    {
LABEL_148:
      qfree((__int64)v145);
      goto LABEL_149;
    }
    v122 = (__int64 *)v119[1];
    v123 = *v122;
    if ( (*v122 & 2) != 0 )
    {
      v124 = v121[2];
      if ( (*(_BYTE *)v124 & 2) != 0 )
      {
LABEL_252:
        *v121 = v120 | 2;
LABEL_220:
        if ( v118 > 3 )
          qfree((__int64)v121);
        goto LABEL_148;
      }
      goto LABEL_213;
    }
    v131 = (__int64 *)v122[1];
    if ( (*(_BYTE *)v131 & 2) != 0 )
    {
      v132 = (__int64 *)v122[2];
      if ( (*(_BYTE *)v132 & 2) != 0 )
      {
LABEL_257:
        *v122 = v123 | 2;
LABEL_248:
        if ( v122 )
          qfree((__int64)v122);
        v124 = v121[2];
        if ( (*(_BYTE *)v124 & 2) != 0 )
        {
LABEL_219:
          v120 = *v121;
          if ( (*v121 & 2) != 0 )
            goto LABEL_220;
          goto LABEL_252;
        }
LABEL_213:
        v125 = *(__int64 **)(v124 + 8);
        if ( (*(_BYTE *)v125 & 2) != 0 )
        {
          v126 = *(__int64 **)(v124 + 16);
          if ( (*(_BYTE *)v126 & 2) != 0 )
          {
            v127 = *(_QWORD *)v124;
LABEL_260:
            *(_QWORD *)v124 = v127 | 2;
LABEL_217:
            if ( v124 )
              qfree(v124);
            goto LABEL_219;
          }
        }
        else
        {
          sub_6BAA0(v125);
          v126 = *(__int64 **)(v124 + 16);
          if ( (*(_BYTE *)v126 & 2) != 0 )
            goto LABEL_216;
        }
        sub_6BAA0(v126);
LABEL_216:
        v127 = *(_QWORD *)v124;
        if ( (*(_QWORD *)v124 & 2) != 0 )
          goto LABEL_217;
        goto LABEL_260;
      }
    }
    else
    {
      sub_6BAA0(v131);
      v132 = (__int64 *)v122[2];
      if ( (*(_BYTE *)v132 & 2) != 0 )
        goto LABEL_247;
    }
    sub_6BAA0(v132);
LABEL_247:
    v123 = *v122;
    if ( (*v122 & 2) != 0 )
      goto LABEL_248;
    goto LABEL_257;
  }
LABEL_149:
  if ( v161 )
  {
    *(_QWORD *)&v162 = 0;
    qfree(v161);
  }
  if ( v159 )
  {
    *(_QWORD *)&v160 = 0;
    qfree(v159);
  }
  if ( v167 )
  {
    *(_QWORD *)&v168 = 0;
    qfree(v167);
  }
  v89 = v165;
  if ( v165 )
  {
    if ( (_QWORD)v166 )
    {
      v90 = 0;
      v91 = v166;
      do
      {
        v92 = v90++;
        qfree(*(_QWORD *)(v89 + 16 * v92));
        v89 = v165;
      }
      while ( v91 != v90 );
    }
    *(_QWORD *)&v166 = 0;
    qfree(v89);
  }
  v93 = v163;
  if ( v163 )
  {
    if ( (_QWORD)v164 )
    {
      v94 = 0;
      v95 = v164;
      do
      {
        v96 = v94++;
        qfree(*(_QWORD *)(v93 + 16 * v96));
        v93 = v163;
      }
      while ( v95 != v94 );
    }
    *(_QWORD *)&v164 = 0;
    qfree(v93);
  }
  v154 = off_4DBC70;
  v97 = v155;
  if ( v155 )
  {
    v98 = *(_QWORD *)v155;
    if ( !v156 )
    {
      *(_QWORD *)v155 = *(_QWORD *)v155 & 3LL | v155 & 0xFFFFFFFFFFFFFFFCLL;
      v99 = v155;
      v100 = (__m128i)(unsigned __int64)v155;
      *(_QWORD *)v155 &= ~1uLL;
      *(__m128i *)(v99 + 8) = _mm_unpacklo_epi64(v100, v100);
      *(_QWORD *)v155 |= 2uLL;
      goto LABEL_168;
    }
    v112 = (__int64 *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
    v113 = *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v113 & 2) != 0 )
    {
LABEL_209:
      *(_QWORD *)v97 = v98 & 3 | v97 & 0xFFFFFFFFFFFFFFFCLL;
      v116 = v155;
      v117 = (__m128i)(unsigned __int64)v155;
      *(_QWORD *)v155 &= ~1uLL;
      *(__m128i *)(v116 + 8) = _mm_unpacklo_epi64(v117, v117);
      *(_QWORD *)v155 |= 2uLL;
      v156 = 0;
LABEL_168:
      if ( v155 )
        qfree(v155);
      goto LABEL_170;
    }
    v114 = (__int64 *)v112[1];
    if ( (*(_BYTE *)v114 & 2) != 0 )
    {
      v115 = (__int64 *)v112[2];
      if ( (*(_BYTE *)v115 & 2) != 0 )
        goto LABEL_243;
    }
    else
    {
      sub_6BF90(v114);
      v115 = (__int64 *)v112[2];
      if ( (*(_BYTE *)v115 & 2) != 0 )
        goto LABEL_205;
    }
    sub_6BF90(v115);
LABEL_205:
    v113 = *v112;
    if ( (*v112 & 2) != 0 )
    {
LABEL_206:
      if ( v98 > 3 )
        qfree(v98 & 0xFFFFFFFFFFFFFFFCLL);
      v97 = v155;
      v98 = *(_QWORD *)v155;
      goto LABEL_209;
    }
LABEL_243:
    *v112 = v113 | 2;
    goto LABEL_206;
  }
LABEL_170:
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree(v152);
  }
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree(v150);
  }
  return 1;
}

