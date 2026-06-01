__int64 __fastcall sub_2DF80(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // r14d
  unsigned int v15; // eax
  __int32 v16; // ebp
  int v17; // eax
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int16 v27; // ax
  unsigned int v28; // r14d
  __int16 v29; // ax
  __int64 v30; // r12
  _QWORD *v31; // rbx
  __int64 v32; // rbp
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // r14
  void *v38; // rax
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  const void *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  _QWORD *v47; // rsi
  __int64 v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rcx
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rcx
  size_t v59; // r9
  _QWORD *v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r13
  unsigned __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  _QWORD *v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rbp
  _QWORD *v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // rsi
  __int64 v74; // rcx
  _QWORD *v75; // rdx
  _QWORD *v76; // rax
  _QWORD *v77; // rsi
  __int64 v78; // rcx
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  __int64 v81; // r10
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r8
  __int64 v84; // r10
  __int64 v85; // rbp
  unsigned __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rsi
  unsigned __int64 v89; // r14
  __int64 v90; // rsi
  _QWORD *v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  _QWORD *v94; // rdx
  __int64 v95; // rbp
  _QWORD *v96; // rax
  __int64 v97; // r14
  unsigned __int64 v98; // rax
  __int64 v99; // r13
  __int64 v100; // rsi
  size_t v101; // r8
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // r13
  unsigned __int64 v105; // rax
  __int64 v106; // r8
  __int64 v107; // rsi
  __int64 v108; // r10
  unsigned __int64 v109; // r14
  __int64 v110; // rsi
  __int64 v111; // r13
  unsigned __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // rsi
  __int64 v115; // r10
  unsigned __int64 v116; // r14
  __int64 v117; // rsi
  __int64 v118; // r13
  unsigned __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rsi
  __int64 v122; // r10
  unsigned __int64 v123; // r14
  __int64 v124; // rsi
  __int64 v125; // r13
  unsigned __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // rsi
  __int64 v129; // r10
  unsigned __int64 v130; // r14
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdx
  unsigned __int64 v142; // rcx
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rax
  __int16 n; // [rsp+0h] [rbp-140h]
  size_t na; // [rsp+0h] [rbp-140h]
  size_t nb; // [rsp+0h] [rbp-140h]
  size_t nc; // [rsp+0h] [rbp-140h]
  __int64 v159; // [rsp+8h] [rbp-138h]
  const void **v160; // [rsp+8h] [rbp-138h]
  unsigned __int64 v161; // [rsp+8h] [rbp-138h]
  unsigned __int64 v162; // [rsp+10h] [rbp-130h]
  __int64 v164; // [rsp+20h] [rbp-120h]
  unsigned __int16 v165; // [rsp+2Ch] [rbp-114h]
  char v166; // [rsp+2Fh] [rbp-111h]
  _QWORD *v167; // [rsp+30h] [rbp-110h]
  _BYTE v168[3]; // [rsp+3Dh] [rbp-103h] BYREF
  __int64 v169; // [rsp+40h] [rbp-100h] BYREF
  __int32 v170; // [rsp+48h] [rbp-F8h] BYREF
  void *v171; // [rsp+50h] [rbp-F0h]
  __int128 v172; // [rsp+58h] [rbp-E8h]
  __int64 v173; // [rsp+68h] [rbp-D8h]
  __int32 v174; // [rsp+70h] [rbp-D0h]
  void *v175; // [rsp+78h] [rbp-C8h]
  __int128 v176; // [rsp+80h] [rbp-C0h]
  __int64 v177; // [rsp+90h] [rbp-B0h]
  __int128 v178; // [rsp+98h] [rbp-A8h]
  __int32 v179; // [rsp+A8h] [rbp-98h]
  __int64 v180; // [rsp+B0h] [rbp-90h]
  __m128i v181; // [rsp+B8h] [rbp-88h]
  __int64 v182; // [rsp+C8h] [rbp-78h]
  __int32 v183; // [rsp+D0h] [rbp-70h]
  __m128i v184; // [rsp+D8h] [rbp-68h]
  __int64 v185; // [rsp+E8h] [rbp-58h]
  __int64 v186; // [rsp+F0h] [rbp-50h]
  __int32 v187; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v188; // [rsp+100h] [rbp-40h]

  v5 = a1[1].m128i_i64[0];
  v188 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[9].m128i_i64[0];
  v172 = 0;
  v171 = nullptr;
  v167 = v6;
  v164 = *a3;
  v165 = *(_WORD *)(a2 + 26);
  v170 = a1->m128i_i32[0];
  if ( v5 )
  {
    v39 = (void *)qalloc_or_throw();
    v40 = (const void *)a1->m128i_i64[1];
    *((_QWORD *)&v172 + 1) = v5;
    v171 = v39;
    memcpy(v39, v40, 32 * v5);
    *(_QWORD *)&v172 = v5;
  }
  v7 = a1[2].m128i_i64[0];
  v8 = a1[3].m128i_i64[1];
  v175 = nullptr;
  v176 = 0;
  v173 = v7;
  v174 = a1[2].m128i_i32[2];
  if ( v8 )
  {
    v41 = (void *)qalloc_or_throw();
    v42 = (const void *)a1[3].m128i_i64[0];
    v175 = v41;
    *((_QWORD *)&v176 + 1) = v8;
    memcpy(v41, v42, 8 * v8);
    *(_QWORD *)&v176 = v8;
  }
  v9 = a1[5].m128i_i64[0];
  v177 = 0;
  v178 = 0;
  if ( v9 )
  {
    v177 = qalloc_or_throw();
    v34 = v177;
    v35 = 0;
    *((_QWORD *)&v178 + 1) = v9;
    do
    {
      while ( 1 )
      {
        v36 = a1[4].m128i_i64[1];
        *(_QWORD *)v34 = 0;
        *(_OWORD *)(v34 + 8) = 0;
        v37 = *(_QWORD *)(v36 + 24 * v35 + 8);
        if ( v37 )
          break;
        ++v35;
        v34 += 24;
        if ( v9 == v35 )
          goto LABEL_57;
      }
      v160 = (const void **)(v36 + 24 * v35);
      v38 = (void *)qalloc_or_throw();
      *(_QWORD *)v34 = v38;
      ++v35;
      *(_QWORD *)(v34 + 16) = v37;
      v34 += 24;
      memcpy(v38, *v160, 8 * v37);
      *(_QWORD *)(v34 - 16) = v37;
    }
    while ( v9 != v35 );
LABEL_57:
    *(_QWORD *)&v178 = v9;
  }
  v179 = a1[6].m128i_i32[0];
  v10 = a1[6].m128i_i64[1];
  v181 = _mm_loadu_si128(a1 + 7);
  v180 = v10;
  v11 = a1[8].m128i_i64[0];
  v184 = _mm_loadu_si128(a1 + 9);
  v182 = v11;
  v183 = a1[8].m128i_i32[2];
  v185 = a1[10].m128i_i64[0];
  v186 = a1[10].m128i_i64[1];
  v187 = a1[11].m128i_i32[0];
  v12 = a1[1].m128i_i64[0] - 1;
  if ( v12 < 0 )
  {
LABEL_11:
    v166 = 0;
  }
  else
  {
    while ( *(_WORD *)(a1->m128i_i64[1] + 32 * v12 + 24) != 5 )
    {
      if ( v12-- == 0 )
        goto LABEL_11;
    }
    v166 = 1;
  }
  if ( *(_BYTE *)(a2 + 41) == 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v24 = *(unsigned __int16 *)(a2 + 46);
      if ( (_WORD)v24 != 1 )
        goto LABEL_14;
      if ( !(unsigned __int8)sub_27390(a1, a2) )
        break;
      if ( !(unsigned __int8)sub_2D800(a1, a2, -1) || *(_WORD *)(a2 + 24) != 143 )
      {
LABEL_38:
        if ( v14 <= 0 )
          goto LABEL_30;
        v29 = *(_WORD *)(a2 + 24);
        if ( (unsigned __int16)(v29 - 36) <= 3u
          || v29 == 122
          && *(_BYTE *)(a2 + 41) == 1
          && *(_WORD *)(a2 + 46) == 5
          && *(_BYTE *)(a2 + 81) == 1
          && *(_WORD *)(a2 + 86) == 4 )
        {
          goto LABEL_40;
        }
        goto LABEL_29;
      }
      if ( !*(_WORD *)(a2 + 26) )
      {
LABEL_28:
        if ( v14 <= 0 )
          goto LABEL_30;
LABEL_29:
        if ( (unsigned __int8)get_byte() != 81 )
          goto LABEL_30;
LABEL_40:
        *a3 = *(_QWORD *)(a2 + 16);
        goto LABEL_41;
      }
LABEL_21:
      if ( *(_BYTE *)(a2 + 41) != 1 )
        goto LABEL_38;
    }
    v24 = *(unsigned __int16 *)(a2 + 46);
LABEL_14:
    v15 = sub_72FC0(v24, 1);
    v16 = a1[2].m128i_i32[2];
    if ( _bittest(&v16, sub_72FC0(v15, 1)) )
      goto LABEL_38;
    v17 = sub_23C00(a2);
    v14 += v17;
    v18 = v17;
    n = *(_WORD *)(a2 + 46);
    v159 = *(_QWORD *)(a2 + 16);
    v19 = sub_23F00((__int64)a1);
    v20 = a1->m128i_i64[1];
    v21 = v19;
    v22 = a1[1].m128i_i64[0];
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v22 + 1) )
    {
      v162 = v21;
      v25 = qvector_reserve();
      a1->m128i_i64[1] = v25;
      v20 = v25;
      v21 = v162;
      v22 = a1[1].m128i_i64[0];
    }
    v23 = 32 * v22 + v20;
    *(_QWORD *)(v23 + 8) = v21;
    *(_QWORD *)v23 = v159;
    *(_QWORD *)(v23 + 16) = v18;
    *(_WORD *)(v23 + 24) = n;
    *(_WORD *)(v23 + 26) = 0;
    ++a1[1].m128i_i64[0];
    if ( *(_WORD *)(a2 + 46) == 5 )
    {
      if ( v166 )
        sub_22B00((__int64)a1, (__int64)&v170);
      goto LABEL_66;
    }
    if ( !(unsigned __int8)sub_2D800(a1, a2, -1) || *(_WORD *)(a2 + 24) != 143 )
      goto LABEL_38;
    if ( !*(_WORD *)(a2 + 26) )
      goto LABEL_28;
    goto LABEL_21;
  }
LABEL_30:
  sub_22B00((__int64)a1, (__int64)&v170);
  v26 = v164 + v165;
  if ( !(unsigned int)decode_insn() )
    goto LABEL_37;
  while ( ((unsigned __int8)sub_27390(a1, a2) || (unsigned __int8)sub_2D330((__int64)a1, a2, nullptr))
       && (unsigned int)decode_insn() )
    ;
  v27 = *(_WORD *)(a2 + 24);
  if ( v27 == 143 )
  {
    if ( *(_BYTE *)(a2 + 41) == 1 && (unsigned int)*(unsigned __int16 *)(a2 + 46) - 29 <= 5 )
      goto LABEL_37;
LABEL_72:
    if ( !(unsigned int)decode_insn() )
      goto LABEL_37;
    if ( *(_WORD *)(a2 + 24) == 16 )
    {
      v44 = sub_80350(v167, a2, a2 + 40);
      v45 = sub_24700(v167, a2, v44, 0, v168, (__int64)a1);
      v46 = v45;
      if ( v45 > 0 && v168[0] )
      {
        v47 = (_QWORD *)a1[3].m128i_i64[0];
        v169 = v45 + 8;
        v48 = a1[3].m128i_i64[1];
        v49 = &v47[v48];
        if ( v47 != v49 )
        {
          v50 = v47;
          while ( v164 != *v50 )
          {
            if ( v49 == ++v50 )
              goto LABEL_170;
          }
          if ( v49 != v50 )
          {
            v51 = v47;
            goto LABEL_83;
          }
        }
LABEL_170:
        if ( a1[4].m128i_i64[0] < (unsigned __int64)(v48 + 1) )
        {
          v154 = qvector_reserve();
          a1[3].m128i_i64[0] = v154;
          v47 = (_QWORD *)v154;
        }
        v47[a1[3].m128i_i64[1]] = v164;
        v51 = (_QWORD *)a1[3].m128i_i64[0];
        v48 = a1[3].m128i_i64[1] + 1;
        v49 = &v51[v48];
        a1[3].m128i_i64[1] = v48;
        if ( v49 == v51 )
          goto LABEL_153;
        v47 = v51;
LABEL_83:
        while ( v26 != *v47 )
        {
          if ( ++v47 == v49 )
            goto LABEL_153;
        }
        if ( v47 == v49 )
        {
LABEL_153:
          if ( a1[4].m128i_i64[0] < (unsigned __int64)(v48 + 1) )
          {
            v148 = qvector_reserve();
            a1[3].m128i_i64[0] = v148;
            v51 = (_QWORD *)v148;
          }
          v51[a1[3].m128i_i64[1]++] = v26;
        }
        na = *(_QWORD *)(a2 + 16);
        v52 = sub_23F00((__int64)a1);
        v53 = a1[1].m128i_i64[0];
        if ( a1[1].m128i_i64[1] < (unsigned __int64)(v53 + 1) )
        {
          v161 = v52;
          a1->m128i_i64[1] = qvector_reserve();
          v52 = v161;
          v53 = a1[1].m128i_i64[0];
        }
        v54 = a1->m128i_i64[1] + 32 * v53;
        *(_QWORD *)(v54 + 8) = v52;
        *(_QWORD *)v54 = na;
        *(_QWORD *)(v54 + 16) = 4;
        *(_DWORD *)(v54 + 24) = 5;
        v55 = (_QWORD *)a1[3].m128i_i64[0];
        v56 = a1[3].m128i_i64[1];
        v57 = a1[1].m128i_i64[0] + 1;
        v58 = &v55[v56];
        a1[1].m128i_i64[0] = v57;
        v59 = *(_QWORD *)(a2 + 16);
        a1[2].m128i_i64[0] = v57;
        if ( v55 == v58 )
          goto LABEL_167;
        v60 = v55;
        while ( v59 != *v60 )
        {
          if ( v58 == ++v60 )
            goto LABEL_167;
        }
        if ( v58 == v60 )
        {
LABEL_167:
          if ( a1[4].m128i_i64[0] < (unsigned __int64)(v56 + 1) )
          {
            nc = v59;
            v153 = qvector_reserve();
            a1[3].m128i_i64[0] = v153;
            v55 = (_QWORD *)v153;
            v59 = nc;
          }
          v55[a1[3].m128i_i64[1]++] = v59;
        }
        v168[1] = 1;
        netnode_supset();
        v61 = *(_QWORD *)(a2 + 16);
        v62 = v46 + 4;
        v63 = sub_23F00((__int64)a1);
        v64 = a1[1].m128i_i64[0];
        if ( a1[1].m128i_i64[1] < (unsigned __int64)(v64 + 1) )
        {
          a1->m128i_i64[1] = qvector_reserve();
          v64 = a1[1].m128i_i64[0];
        }
        v65 = a1->m128i_i64[1] + 32 * v64;
        *(_QWORD *)v65 = v61;
        *(_QWORD *)(v65 + 8) = v63;
        *(_QWORD *)(v65 + 16) = v62;
        *(_DWORD *)(v65 + 24) = 0xFFFF;
        a1[11].m128i_i8[3] = 0;
        ++a1[1].m128i_i64[0];
        a1->m128i_i32[0] |= 1u;
      }
      goto LABEL_37;
    }
LABEL_41:
    v28 = 0;
    goto LABEL_42;
  }
  if ( v27 == 122 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) )
      goto LABEL_37;
    goto LABEL_72;
  }
  if ( v27 != 16 )
  {
LABEL_37:
    v28 = -1;
    goto LABEL_42;
  }
  v66 = sub_80350(v167, a2, a2 + 40);
  v67 = sub_24DD0(v167, a2, v66, &v169);
  if ( v67 == 1 )
  {
    v73 = (_QWORD *)a1[3].m128i_i64[0];
    v74 = a1[3].m128i_i64[1];
    v75 = &v73[v74];
    if ( v73 == v75 )
      goto LABEL_143;
    v76 = (_QWORD *)a1[3].m128i_i64[0];
    while ( v164 != *v76 )
    {
      if ( v75 == ++v76 )
        goto LABEL_143;
    }
    if ( v75 == v76 )
    {
LABEL_143:
      if ( a1[4].m128i_i64[0] < (unsigned __int64)(v74 + 1) )
      {
        v138 = qvector_reserve();
        v139 = a1[3].m128i_i64[1];
        a1[3].m128i_i64[0] = v138;
        v75 = (_QWORD *)(v138 + 8 * v139);
      }
      *v75 = v164;
      ++a1[3].m128i_i64[1];
    }
    if ( *(_QWORD *)(a2 + 16) != v26 )
    {
      v77 = (_QWORD *)a1[3].m128i_i64[0];
      v78 = a1[3].m128i_i64[1];
      v79 = &v77[v78];
      if ( v77 == v79 )
        goto LABEL_156;
      v80 = (_QWORD *)a1[3].m128i_i64[0];
      while ( v26 != *v80 )
      {
        if ( v79 == ++v80 )
          goto LABEL_156;
      }
      if ( v80 == v79 )
      {
LABEL_156:
        if ( a1[4].m128i_i64[0] < (unsigned __int64)(v78 + 1) )
        {
          v151 = qvector_reserve();
          v152 = a1[3].m128i_i64[1];
          a1[3].m128i_i64[0] = v151;
          v79 = (_QWORD *)(v151 + 8 * v152);
        }
        *v79 = v26;
        ++a1[3].m128i_i64[1];
      }
    }
    v81 = a1[10].m128i_i64[0];
    a1[11].m128i_i8[3] = 0;
    if ( v81 && (v82 = sub_23F00((__int64)a1), v84 == v82) )
    {
      if ( v83 )
      {
        v142 = 0;
        v143 = 0;
        while ( 1 )
        {
          v145 = a1->m128i_i64[1] + 32 * v142;
          if ( (*(_BYTE *)(v145 + 26) & 1) == 0 )
            break;
          v142 = ++v143;
          v144 = v143;
          if ( v143 >= v83 )
            goto LABEL_166;
        }
        if ( v142 < v83 && *(_WORD *)(v145 + 24) == 5 )
          v144 = v143 + 1;
        else
          v144 = v143;
      }
      else
      {
        v144 = 0;
      }
LABEL_166:
      a1[2].m128i_i64[0] = v144;
      sub_23F60(a1, *(_QWORD *)(a2 + 16), 5, 4);
      a1[11].m128i_i8[3] = 1;
    }
    else
    {
      v85 = *(_QWORD *)(a2 + 16);
      v86 = sub_23F00((__int64)a1);
      v88 = a1->m128i_i64[1];
      v89 = v86;
      if ( a1[1].m128i_i64[1] < (unsigned __int64)(v87 + 1) )
      {
        v132 = qvector_reserve();
        a1->m128i_i64[1] = v132;
        v87 = a1[1].m128i_i64[0];
        v88 = v132;
      }
      v90 = 32 * v87 + v88;
      *(_QWORD *)v90 = v85;
      *(_QWORD *)(v90 + 8) = v89;
      *(_QWORD *)(v90 + 16) = 4;
      *(_DWORD *)(v90 + 24) = 5;
      v91 = (_QWORD *)a1[3].m128i_i64[0];
      v92 = a1[3].m128i_i64[1];
      v93 = a1[1].m128i_i64[0] + 1;
      v94 = &v91[v92];
      a1[1].m128i_i64[0] = v93;
      v95 = *(_QWORD *)(a2 + 16);
      a1[2].m128i_i64[0] = v93;
      v96 = v91;
      if ( v91 == v94 )
        goto LABEL_150;
      while ( v95 != *v96 )
      {
        if ( v94 == ++v96 )
          goto LABEL_150;
      }
      if ( v94 == v96 )
      {
LABEL_150:
        if ( a1[4].m128i_i64[0] < (unsigned __int64)(v92 + 1) )
        {
          v149 = qvector_reserve();
          v150 = a1[3].m128i_i64[1];
          a1[3].m128i_i64[0] = v149;
          v94 = (_QWORD *)(v149 + 8 * v150);
        }
        *v94 = v95;
        ++a1[3].m128i_i64[1];
      }
      v168[2] = 1;
      netnode_supset();
      a1[10].m128i_i64[0] = 0;
    }
    v97 = *(_QWORD *)(a2 + 16);
    v98 = sub_23F00((__int64)a1);
    v99 = -16 - v169;
    v100 = a1->m128i_i64[1];
    v101 = v98;
    v102 = a1[1].m128i_i64[0];
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v102 + 1) )
    {
      nb = v101;
      v136 = qvector_reserve();
      a1->m128i_i64[1] = v136;
      v100 = v136;
      v101 = nb;
      v102 = a1[1].m128i_i64[0];
    }
    v103 = 32 * v102 + v100;
    *(_QWORD *)v103 = v97;
    *(_QWORD *)(v103 + 8) = v101;
    *(_QWORD *)(v103 + 16) = v99;
    *(_DWORD *)(v103 + 24) = 0xFFFF;
    ++a1[1].m128i_i64[0];
    v104 = *(_QWORD *)(a2 + 16);
    v105 = sub_23F00((__int64)a1);
    v107 = a1->m128i_i64[1];
    v109 = v105;
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v108 + 2) )
    {
      v135 = qvector_reserve();
      a1->m128i_i64[1] = v135;
      v106 = a1[1].m128i_i64[0];
      v107 = v135;
    }
    v110 = 32 * v106 + v107;
    *(_QWORD *)(v110 + 8) = v109;
    *(_QWORD *)v110 = v104;
    *(_QWORD *)(v110 + 16) = 4;
    *(_DWORD *)(v110 + 24) = 3;
    ++a1[1].m128i_i64[0];
    v111 = *(_QWORD *)(a2 + 16);
    v112 = sub_23F00((__int64)a1);
    v114 = a1->m128i_i64[1];
    v116 = v112;
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v115 + 2) )
    {
      v134 = qvector_reserve();
      a1->m128i_i64[1] = v134;
      v113 = a1[1].m128i_i64[0];
      v114 = v134;
    }
    v117 = 32 * v113 + v114;
    *(_QWORD *)(v117 + 8) = v116;
    *(_QWORD *)v117 = v111;
    *(_QWORD *)(v117 + 16) = 4;
    *(_DWORD *)(v117 + 24) = 6;
    ++a1[1].m128i_i64[0];
    v118 = *(_QWORD *)(a2 + 16);
    v119 = sub_23F00((__int64)a1);
    v121 = a1->m128i_i64[1];
    v123 = v119;
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v122 + 2) )
    {
      v133 = qvector_reserve();
      a1->m128i_i64[1] = v133;
      v120 = a1[1].m128i_i64[0];
      v121 = v133;
    }
    v124 = 32 * v120 + v121;
    *(_QWORD *)(v124 + 8) = v123;
    *(_QWORD *)v124 = v118;
    *(_QWORD *)(v124 + 16) = 4;
    *(_DWORD *)(v124 + 24) = 7;
    ++a1[1].m128i_i64[0];
    v125 = *(_QWORD *)(a2 + 16);
    v126 = sub_23F00((__int64)a1);
    v128 = a1->m128i_i64[1];
    v130 = v126;
    if ( a1[1].m128i_i64[1] < (unsigned __int64)(v129 + 2) )
    {
      v137 = qvector_reserve();
      a1->m128i_i64[1] = v137;
      v127 = a1[1].m128i_i64[0];
      v128 = v137;
    }
    v131 = 32 * v127 + v128;
    *(_QWORD *)v131 = v125;
    *(_QWORD *)(v131 + 8) = v130;
    *(_QWORD *)(v131 + 16) = 4;
    *(_DWORD *)(v131 + 24) = 0xFFFF;
    ++a1[1].m128i_i64[0];
    a1->m128i_i32[0] |= 1u;
    v43 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    if ( v67 != 5 )
      goto LABEL_37;
    v68 = (_QWORD *)a1[3].m128i_i64[0];
    v69 = a1[3].m128i_i64[1];
    v70 = *(_QWORD *)(a2 + 16);
    v71 = &v68[v69];
    if ( v68 != v71 )
    {
      v72 = (_QWORD *)a1[3].m128i_i64[0];
      while ( v70 != *v72 )
      {
        if ( v71 == ++v72 )
          goto LABEL_146;
      }
      if ( v72 != v71 )
        goto LABEL_104;
    }
LABEL_146:
    if ( a1[4].m128i_i64[0] < (unsigned __int64)(v69 + 1) )
    {
      v140 = qvector_reserve();
      v141 = a1[3].m128i_i64[1];
      a1[3].m128i_i64[0] = v140;
      v71 = (_QWORD *)(v140 + 8 * v141);
    }
    *v71 = v70;
    v68 = (_QWORD *)a1[3].m128i_i64[0];
    v69 = a1[3].m128i_i64[1] + 1;
    v71 = &v68[v69];
    a1[3].m128i_i64[1] = v69;
    if ( v68 == v71 )
    {
LABEL_106:
      if ( a1[4].m128i_i64[0] < (unsigned __int64)(v69 + 1) )
      {
        v146 = qvector_reserve();
        v147 = a1[3].m128i_i64[1];
        a1[3].m128i_i64[0] = v146;
        v71 = (_QWORD *)(v146 + 8 * v147);
      }
      *v71 = v164;
      ++a1[3].m128i_i64[1];
      goto LABEL_66;
    }
LABEL_104:
    while ( v164 != *v68 )
    {
      if ( ++v68 == v71 )
        goto LABEL_106;
    }
    if ( v68 == v71 )
      goto LABEL_106;
LABEL_66:
    v43 = *(_QWORD *)(a2 + 16);
  }
  v28 = 1;
  *a3 = v43;
LABEL_42:
  if ( v177 )
  {
    v30 = v178;
    v31 = (_QWORD *)v177;
    v32 = 0;
    if ( (_QWORD)v178 )
    {
      do
      {
        if ( *v31 )
        {
          v31[1] = 0;
          qfree();
        }
        ++v32;
        v31 += 3;
      }
      while ( v30 != v32 );
    }
    qfree();
  }
  if ( v175 )
    qfree();
  if ( v171 )
    qfree();
  return v28;
}

