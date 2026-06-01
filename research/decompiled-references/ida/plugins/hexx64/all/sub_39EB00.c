__int64 __fastcall sub_39EB00(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *exception; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r13
  __m128i *v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 *v20; // rsi
  unsigned __int64 v21; // rbx
  __m128 v22; // xmm0
  char v23; // r13
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdi
  __int64 flags; // r13
  char v27; // al
  unsigned __int64 v28; // rdi
  __int64 (*v29)(); // rax
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // r14
  __int64 (*v32)(); // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // r15
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __m128i *v42; // r12
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbx
  _QWORD *v45; // rax
  _QWORD *v46; // r15
  __int64 *v47; // rbx
  unsigned __int64 *v48; // rsi
  char v49; // r8
  unsigned __int64 v50; // rdx
  char v51; // r9
  __int64 *v52; // rax
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm0
  unsigned __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rdi
  _QWORD *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rsi
  unsigned __int64 v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v68; // rax
  __int64 *v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 *v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // rcx
  __int64 *v77; // rax
  __int64 *v78; // rdx
  __int64 v79; // rax
  char v80; // dl
  unsigned __int64 v81; // rax
  _BYTE *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // rsi
  _QWORD *i; // rax
  unsigned __int64 v88; // rdi
  __int64 v89; // r13
  __int64 item_end; // rax
  _QWORD *v91; // rdx
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rdi
  unsigned int v97; // eax
  unsigned int v98; // eax
  _BYTE *v99; // rax
  __int64 v100; // rcx
  char *v101; // rdi
  unsigned int v102; // eax
  unsigned int v103; // eax
  __int64 v104; // rax
  __m128i v105; // xmm0
  _QWORD *v106; // rdx
  unsigned __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // rbx
  __int64 v110; // rdx
  _QWORD *v111; // rax
  _QWORD *v112; // r8
  __int64 v113; // rsi
  __int64 v114; // rbx
  __int64 v115; // rdx
  _QWORD *v116; // rsi
  __int64 v117; // r8
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rdx
  _QWORD *v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  __m128i v123; // xmm1
  unsigned __int64 v124; // r14
  __int64 v125; // r13
  __int64 *v126; // rdi
  __int64 *v127; // rdi
  __int64 v128; // r13
  __int64 *v129; // rdi
  __int64 *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rdi
  __int64 v133; // rdi
  __int64 v134; // rdi
  __int64 v135; // [rsp+0h] [rbp-288h] BYREF
  char **v136; // [rsp+8h] [rbp-280h]
  __int64 v137; // [rsp+10h] [rbp-278h]
  __int64 *v138; // [rsp+18h] [rbp-270h]
  _QWORD *v139; // [rsp+20h] [rbp-268h]
  __int64 *v140; // [rsp+28h] [rbp-260h]
  unsigned __int64 v141; // [rsp+30h] [rbp-258h] BYREF
  unsigned __int64 *v142; // [rsp+38h] [rbp-250h] BYREF
  __int64 *v143; // [rsp+40h] [rbp-248h] BYREF
  const __m128i *v144; // [rsp+48h] [rbp-240h] BYREF
  __int64 v145; // [rsp+50h] [rbp-238h] BYREF
  __int128 v146; // [rsp+58h] [rbp-230h]
  __int128 v147; // [rsp+70h] [rbp-218h] BYREF
  __m128i v148; // [rsp+80h] [rbp-208h] BYREF
  __int128 v149; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v150; // [rsp+A0h] [rbp-1E8h]
  __int64 v151; // [rsp+A8h] [rbp-1E0h] BYREF
  int v152; // [rsp+B0h] [rbp-1D8h]
  __int128 v153; // [rsp+B8h] [rbp-1D0h]
  __int64 v154; // [rsp+C8h] [rbp-1C0h]
  char v155; // [rsp+D0h] [rbp-1B8h]
  __int128 v156; // [rsp+E0h] [rbp-1A8h]
  __int64 v157; // [rsp+F0h] [rbp-198h]
  __int64 v158; // [rsp+F8h] [rbp-190h]
  __int64 v159; // [rsp+100h] [rbp-188h]
  char v160; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int64 v161; // [rsp+248h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v161 = __readfsqword(0x28u);
  v5 = a1;
  v6 = sub_1CE9E0(*(_QWORD *)(v4 + 8));
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  v9 = *(__m128i **)(v7 + 112);
  v137 = *(_QWORD *)(*(_QWORD *)(v7 + 216) + 112LL);
  sub_39CBC0(v9->m128i_i64, v7, 0);
  v10 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v11 = *(__int64 **)(v10 + 8);
      if ( v11 != (__int64 *)v10 )
      {
        v135 = a1;
        while ( 1 )
        {
          v12 = v11[5];
          v13 = v11[4];
          v14 = v13;
          if ( 8 * v12 )
            break;
LABEL_14:
          v16 = *v11;
          v17 = *v11 & 2;
          if ( v12 )
          {
            if ( !v17 )
            {
              v52 = (__int64 *)v11[2];
              if ( (*(_BYTE *)v52 & 2) != 0 )
              {
                v71 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                v72 = *v71;
                if ( (*v71 & 2) == 0 )
                {
                  while ( (__int64 *)v71[2] == v11 )
                  {
                    v11 = v71;
                    v73 = v72 & 0xFFFFFFFFFFFFFFFCLL;
                    v72 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v72 & 2) != 0 )
                    {
                      v11 = (__int64 *)v73;
                      goto LABEL_19;
                    }
                    v71 = (__int64 *)v73;
                  }
                }
                v11 = v71;
              }
              else
              {
                do
                {
                  v11 = v52;
                  v52 = (__int64 *)v52[1];
                }
                while ( (*(_BYTE *)v52 & 2) == 0 );
              }
            }
          }
          else
          {
            v18 = (unsigned __int64)v11;
            if ( !v17 )
            {
              v19 = v11[2];
              if ( (*(_BYTE *)v19 & 2) != 0 )
              {
                v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                v68 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v68 & 2) == 0 )
                {
                  v69 = v11;
                  do
                  {
                    if ( *(__int64 **)(v18 + 16) != v69 )
                      break;
                    v69 = (__int64 *)v18;
                    v70 = v68 & 0xFFFFFFFFFFFFFFFCLL;
                    v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
                    v18 = v70;
                  }
                  while ( (v68 & 2) == 0 );
                }
              }
              else
              {
                do
                {
                  v18 = v19;
                  v19 = *(_QWORD *)(v19 + 8);
                }
                while ( (*(_BYTE *)v19 & 2) == 0 );
              }
            }
            v20 = v11;
            v11 = (__int64 *)v18;
            sub_3494A0((unsigned __int64 **)v9, v20);
          }
LABEL_19:
          if ( (__int64 *)v9->m128i_i64[0] == v11 )
          {
            v5 = v135;
            goto LABEL_21;
          }
        }
        while ( 1 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)v14 + 8LL);
          if ( (unsigned int)(v15 - 78) <= 1 || v15 == 81 )
          {
            get_item_end();
            if ( (get_flags_ex() & 0x10000) != 0 )
            {
              memmove((void *)v14, (const void *)(v14 + 8), v11[4] + 8 * v11[5] - v14 - 8);
              v13 = v11[4];
              v12 = v11[5] - 1;
              v11[5] = v12;
              goto LABEL_9;
            }
            v13 = v11[4];
          }
          v12 = v11[5];
          v14 += 8;
LABEL_9:
          if ( v14 == v13 + 8 * v12 )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_21:
  v145 = 0;
  v141 = -1;
  v150 = -1;
  v151 = 0;
  v152 = -1;
  v154 = -1;
  v155 = 1;
  v146 = 0;
  v149 = 0;
  v153 = 0;
  v21 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] && v9->m128i_i64[1] )
    v21 = *(_QWORD *)(v21 + 8);
  v22.m128_u64[0] = 0;
  v147 = (unsigned __int64)v8;
  v148 = 0;
  v154 = *v8;
  v138 = &v151;
  v23 = func_tail_iterator_set();
  if ( v23 )
    v155 = 0;
  v136 = (char **)&v149;
  LOBYTE(v139) = v23 | sub_332560(&v149, (__int64)&v147 + 8);
  if ( *((_QWORD *)&v147 + 1) )
  {
    v148.m128i_i64[0] = 0;
    qfree(*((__int64 *)&v147 + 1));
  }
  if ( !(_BYTE)v139 )
    goto LABEL_52;
  while ( 2 )
  {
    while ( 2 )
    {
      v24 = v141;
      if ( v155 )
        v25 = v150;
      else
        v25 = v154;
      v141 = v25;
      flags = get_flags_ex();
      if ( (~BYTE1(flags) & 6) != 0 )
        goto LABEL_48;
      v135 = v9->m128i_i64[0];
      if ( v135 != v21 && *(_QWORD *)(v21 + 24) == v141 )
        goto LABEL_98;
      v27 = netnode_charval();
      v28 = v141;
      if ( v27 == 1 )
      {
        v53 = *(_QWORD *)(v5 + 8) + 16LL;
        goto LABEL_84;
      }
      if ( v27 == 2 )
      {
        v53 = 1;
        goto LABEL_84;
      }
      if ( v27 != 3 || v135 == v21 || (v77 = *(__int64 **)(v21 + 32), v78 = &v77[*(_QWORD *)(v21 + 40)], v78 == v77) )
      {
LABEL_38:
        v29 = *(__int64 (**)())(*(_QWORD *)v137 + 280LL);
        if ( v29 == sub_DAAF0 )
          goto LABEL_39;
        v28 = v141;
        if ( ((unsigned int (__fastcall *)(__int64, unsigned __int64))v29)(v137, v141) != 1 )
          goto LABEL_39;
        v116 = (_QWORD *)v9->m128i_i64[0];
        if ( !v9->m128i_i64[0] )
          goto LABEL_39;
        v117 = 24;
        v118 = *v116 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v118 )
          goto LABEL_233;
        if ( (*(_BYTE *)(*v116 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_39;
        while ( 1 )
        {
          v119 = *(_QWORD *)(v118 + 24);
          v117 = v118 + 24;
          if ( v24 >= v119 )
          {
            if ( v119 >= v24 )
            {
              if ( v116 != (_QWORD *)v118 )
              {
LABEL_233:
                v53 = **(_QWORD **)(v117 + 8);
                goto LABEL_84;
              }
LABEL_39:
              v30 = (unsigned __int64 *)&v160;
              v157 = -1;
              v158 = 0;
              v22.m128_u64[0] = 0;
              v159 = 0;
              v156 = -1;
              do
              {
                *(_WORD *)v30 = 0;
                v30 += 5;
                *((_WORD *)v30 - 19) = 0;
                *((_WORD *)v30 - 18) = 0;
                *((_DWORD *)v30 - 2) = 0;
                *((_WORD *)v30 - 17) = 0;
                *((_OWORD *)v30 - 2) = 0;
                *(v30 - 2) = 0;
              }
              while ( &v161 != v30 );
              if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() )
              {
                v28 = v141;
                v53 = 1;
                goto LABEL_84;
              }
              v31 = v141;
              if ( v135 == v21
                || (v32 = *(__int64 (**)())(*(_QWORD *)v137 + 288LL), v32 == sub_3392D0)
                || (v31 = v141,
                    !((unsigned __int8 (__fastcall *)(__int64, unsigned __int64, double))v32)(v137, v141, 0.0)) )
              {
                if ( (flags & 0x10000) == 0 )
                  goto LABEL_45;
                v83 = v9->m128i_i64[0];
                v84 = (_QWORD *)v21;
                while ( 1 )
                {
                  v85 = 0;
                  if ( v83 )
                  {
                    v85 = v9->m128i_i64[0];
                    if ( v9->m128i_i64[1] )
                      v85 = *(_QWORD *)(v83 + 8);
                  }
                  if ( v84 == (_QWORD *)v85 )
                    break;
                  if ( (*v84 & 2) != 0 )
                  {
                    v84 = (_QWORD *)v84[2];
                  }
                  else
                  {
                    v86 = (_QWORD *)v84[1];
                    if ( (*(_BYTE *)v86 & 2) != 0 )
                    {
                      v91 = (_QWORD *)(*v84 & 0xFFFFFFFFFFFFFFFCLL);
                      v92 = *v91;
                      if ( (*v91 & 2) == 0 )
                      {
                        while ( v84 == (_QWORD *)v91[1] )
                        {
                          v84 = v91;
                          v94 = v92 & 0xFFFFFFFFFFFFFFFCLL;
                          v92 = *(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v92 & 2) != 0 )
                          {
                            v84 = (_QWORD *)v94;
                            goto LABEL_147;
                          }
                          v91 = (_QWORD *)v94;
                        }
                      }
                      v84 = v91;
                    }
                    else
                    {
                      for ( i = (_QWORD *)v86[2]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[2] )
                        v86 = i;
                      v84 = v86;
                    }
                  }
LABEL_147:
                  if ( v84[3] < v31 )
                  {
                    v85 = (__int64)v84;
                    break;
                  }
                }
                if ( v85 == v83 )
                {
LABEL_45:
                  v33 = v146;
                  v34 = v145;
                  if ( *((_QWORD *)&v146 + 1) < (unsigned __int64)(v146 + 1) )
                  {
                    v145 = qvector_reserve((__int64)&v145, v145, v146 + 1, 8);
                    v34 = v145;
                    v33 = v146;
                  }
                  *(_QWORD *)(v34 + 8 * v33) = v31;
                  *(_QWORD *)&v146 = v146 + 1;
                  goto LABEL_48;
                }
                v88 = *(_QWORD *)(v85 + 24);
                v89 = v85 + 24;
                while ( 1 )
                {
                  if ( v88 >= v31 )
                    goto LABEL_45;
                  item_end = get_item_end();
                  v28 = item_end;
                  if ( v141 == item_end )
                    break;
                  v135 = item_end;
                  v31 = v141;
                  v88 = item_end;
                  if ( (get_flags_ex() & 0x10000) == 0 )
                    goto LABEL_45;
                }
                if ( *(_QWORD *)(v89 + 16) )
                {
                  v53 = **(_QWORD **)(v89 + 8);
                  goto LABEL_84;
                }
                if ( !under_debugger )
                  sub_383060(0xC733u, 0.0);
              }
              else
              {
                if ( *(_QWORD *)(v21 + 40) )
                {
                  v28 = v141;
                  v53 = **(_QWORD **)(v21 + 32);
                  goto LABEL_84;
                }
                if ( !under_debugger )
                  sub_383060(0xC732u, 0.0);
              }
              BUG();
            }
            v118 = *(_QWORD *)(v118 + 16);
          }
          else
          {
            v118 = *(_QWORD *)(v118 + 8);
          }
          if ( (*(_BYTE *)v118 & 2) != 0 )
            goto LABEL_39;
        }
      }
      while ( 1 )
      {
        v53 = *v77;
        if ( *v77 != 1 && *(_DWORD *)(v53 + 8) == 77 )
          break;
        if ( v78 == ++v77 )
          goto LABEL_38;
      }
LABEL_84:
      v22.m128_u64[0] = 0;
      v147 = v28;
      v148 = 0;
      v54 = v9->m128i_i64[0];
      v144 = (const __m128i *)&v147;
      if ( !v54 )
      {
        v122 = qalloc();
        v123 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v122, (__m128i)(unsigned __int64)v122);
        if ( !v122 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v122 + 48) = 0;
        *(_OWORD *)(v122 + 16) = 0;
        *(_OWORD *)(v122 + 32) = 0;
        *(__m128i *)(v122 + 8) = v123;
        *(_QWORD *)v122 = v122 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v9->m128i_i64[0] = v122;
        *(_QWORD *)v122 = v122 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v122 & 3LL;
        *(__m128i *)(v9->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v9->m128i_u64[0], (__m128i)v9->m128i_u64[0]);
        *(_QWORD *)v9->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v9->m128i_i64[0] |= 2uLL;
        v54 = v9->m128i_i64[0];
LABEL_86:
        v55 = qalloc();
        v21 = v55;
        if ( !v55 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v55 + 48) = 0;
        *(_OWORD *)v55 = 0;
        *(_OWORD *)(v55 + 16) = 0;
        *(_OWORD *)(v55 + 32) = 0;
        *(_QWORD *)(v55 + 24) = v147;
        v56 = *((_QWORD *)&v147 + 1);
        v57 = _mm_load_si128(&v148);
        *((_QWORD *)&v147 + 1) = 0;
        *(_QWORD *)(v21 + 32) = v56;
        *(__m128i *)(v21 + 40) = v57;
        v148 = 0;
        v58 = v54 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 1LL;
        *(_QWORD *)v21 = v58;
        v59 = _mm_loadl_epi64(v9);
        *(_QWORD *)v21 = v58 | 1;
        v22 = (__m128)_mm_unpacklo_epi64(v59, v59);
        *(__m128 *)(v21 + 8) = v22;
        if ( v54 == v9->m128i_i64[0] )
        {
          *(_QWORD *)v54 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v54 & 3LL;
          *(_QWORD *)(v9->m128i_i64[0] + 8) = v21;
          *(_QWORD *)(v9->m128i_i64[0] + 16) = v21;
          v121 = *(_QWORD *)v21 & 2LL;
          *(_QWORD *)v21 &= ~1uLL;
          *(_QWORD *)v21 = v121 | v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v54 + 8) = v21;
          if ( v54 == *(_QWORD *)(v9->m128i_i64[0] + 8) )
            *(_QWORD *)(v9->m128i_i64[0] + 8) = v21;
          sub_348960(v9, (__int64 *)v21);
        }
        ++v9->m128i_i64[1];
        v60 = *((_QWORD *)&v147 + 1);
LABEL_92:
        if ( v60 )
        {
          v148.m128i_i64[0] = 0;
          qfree(v60);
        }
        v61 = (_QWORD *)(v21 + 24);
        goto LABEL_95;
      }
      if ( !v9->m128i_i64[1] )
        goto LABEL_86;
      v21 = *(_QWORD *)v54 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v80 = 1;
LABEL_162:
        v93 = sub_348BA0(v9, (unsigned __int64 *)v54, v80, &v144);
        v60 = *((_QWORD *)&v147 + 1);
        v21 = v93;
        goto LABEL_92;
      }
      v80 = (char)v139;
      while ( 1 )
      {
        v81 = *(_QWORD *)(v21 + 24);
        v61 = (_QWORD *)(v21 + 24);
        if ( v28 < v81 )
        {
          v82 = *(_BYTE **)(v21 + 8);
          v80 = (char)v139;
          if ( (*v82 & 2) != 0 )
            goto LABEL_135;
          goto LABEL_222;
        }
        if ( v81 >= v28 )
          break;
        v82 = *(_BYTE **)(v21 + 16);
        v80 = 0;
        if ( (*v82 & 2) != 0 )
          goto LABEL_135;
LABEL_222:
        v21 = (unsigned __int64)v82;
      }
      if ( !v21 )
      {
LABEL_135:
        v54 = v21;
        goto LABEL_162;
      }
LABEL_95:
      *(_QWORD *)&v147 = v53;
      v62 = v61[2];
      v63 = v61[1];
      if ( v61[3] < (unsigned __int64)(v62 + 1) )
      {
        v79 = qvector_reserve(v21 + 32, v63, v62 + 1, 8);
        v61[1] = v79;
        v63 = v79;
        v62 = v61[2];
      }
      *(_QWORD *)(v63 + 8 * v62) = v53;
      ++v61[2];
LABEL_98:
      if ( (*(_QWORD *)v21 & 2) == 0 )
      {
        v64 = *(_QWORD *)(v21 + 16);
        if ( (*(_BYTE *)v64 & 2) != 0 )
        {
          v74 = (_QWORD *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFCLL);
          v75 = *v74;
          if ( (*v74 & 2) == 0 )
          {
            while ( v74[2] == v21 )
            {
              v21 = v75 & 0xFFFFFFFFFFFFFFFCLL;
              v75 = *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v75 & 2) != 0 )
                goto LABEL_48;
              v76 = v74;
              v74 = (_QWORD *)v21;
              v21 = (unsigned __int64)v76;
            }
          }
          v21 = (unsigned __int64)v74;
        }
        else
        {
          do
          {
            v21 = v64;
            v64 = *(_QWORD *)(v64 + 8);
          }
          while ( (*(_BYTE *)v64 & 2) == 0 );
        }
      }
LABEL_48:
      if ( !v155 )
      {
        if ( !(unsigned __int8)func_item_iterator_next() )
        {
          v155 = 1;
          break;
        }
        continue;
      }
      break;
    }
    if ( (unsigned __int8)sub_332580(v136) )
      continue;
    break;
  }
LABEL_52:
  v35 = (unsigned int)(v146 - 1);
  v36 = 8 * v35;
  if ( (int)v35 < 0 )
    goto LABEL_60;
  while ( 2 )
  {
    v141 = *(_QWORD *)(v145 + v36);
    v37 = get_item_end();
    v38 = (_QWORD *)v9->m128i_i64[0];
    if ( !v9->m128i_i64[0] )
      goto LABEL_59;
    v39 = 24;
    v40 = *v38 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v40 )
    {
LABEL_196:
      v107 = *(_QWORD *)(v39 + 16);
      if ( v107 )
      {
        v108 = 0;
        v109 = 0;
        while ( 1 )
        {
          v110 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 8 * v109);
          if ( v110 != 1 && *(_DWORD *)(v110 + 8) == 77 )
            break;
          v109 = ++v108;
          if ( v108 >= v107 )
            goto LABEL_59;
        }
        v142 = &v141;
        v111 = (_QWORD *)sub_39BD80(v9, &v141, (__int64 **)&v142);
        v112 = v111 + 3;
        v113 = v111[4];
        v114 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 8 * v109);
        v115 = v111[5];
        if ( v111[6] < (unsigned __int64)(v115 + 1) )
        {
          v135 = (__int64)(v111 + 3);
          v131 = qvector_reserve((__int64)(v111 + 4), v113, v115 + 1, 8);
          v112 = (_QWORD *)v135;
          v113 = v131;
          *(_QWORD *)(v135 + 8) = v131;
          v115 = v112[2];
        }
        *(_QWORD *)(v113 + 8 * v115) = v114;
        ++v112[2];
      }
      goto LABEL_59;
    }
    if ( (*(_BYTE *)(*v38 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_59;
    while ( 2 )
    {
      v41 = *(_QWORD *)(v40 + 24);
      v39 = v40 + 24;
      if ( v37 < v41 )
      {
        v40 = *(_QWORD *)(v40 + 8);
        goto LABEL_58;
      }
      if ( v41 < v37 )
      {
        v40 = *(_QWORD *)(v40 + 16);
LABEL_58:
        if ( (*(_BYTE *)v40 & 2) != 0 )
          goto LABEL_59;
        continue;
      }
      break;
    }
    if ( v38 != (_QWORD *)v40 )
      goto LABEL_196;
LABEL_59:
    LODWORD(v35) = v35 - 1;
    v36 -= 8;
    if ( (_DWORD)v35 != -1 )
      continue;
    break;
  }
LABEL_60:
  v42 = *(__m128i **)(*(_QWORD *)(v5 + 8) + 120LL);
  v43 = v42->m128i_i64[0];
  if ( !v42->m128i_i64[0] )
  {
LABEL_257:
    v42->m128i_i64[1] = 0;
    goto LABEL_63;
  }
  v44 = *(_QWORD *)v43;
  if ( v42->m128i_i64[1] )
  {
    v124 = v44 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v44 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_256:
      *(_QWORD *)v43 = v44 & 3 | v43 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = (__m128)_mm_unpacklo_epi64((__m128i)v42->m128i_u64[0], (__m128i)v42->m128i_u64[0]);
      *(__m128 *)(v42->m128i_i64[0] + 8) = v22;
      *(_QWORD *)v42->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v42->m128i_i64[0] |= 2uLL;
      goto LABEL_257;
    }
    v125 = *(_QWORD *)(v124 + 8);
    if ( (*(_BYTE *)v125 & 2) != 0 )
    {
      v128 = *(_QWORD *)(v124 + 16);
      if ( (*(_BYTE *)v128 & 2) != 0 )
        goto LABEL_259;
      goto LABEL_246;
    }
    v126 = *(__int64 **)(v125 + 8);
    if ( (*(_BYTE *)v126 & 2) != 0 )
    {
      v127 = *(__int64 **)(v125 + 16);
      if ( (*(_BYTE *)v127 & 2) != 0 )
      {
LABEL_267:
        v134 = *(_QWORD *)(v125 + 32);
        if ( v134 )
        {
          *(_QWORD *)(v125 + 40) = 0;
          qfree(v134);
        }
        *(_QWORD *)v125 |= 2uLL;
LABEL_243:
        if ( v125 )
          qfree(v125);
        v128 = *(_QWORD *)(v124 + 16);
        if ( (*(_BYTE *)v128 & 2) != 0 )
        {
LABEL_252:
          if ( (*(_BYTE *)v124 & 2) != 0 )
          {
LABEL_253:
            if ( v44 > 3 )
              qfree(v44 & 0xFFFFFFFFFFFFFFFCLL);
            v43 = v42->m128i_i64[0];
            v44 = *(_QWORD *)v42->m128i_i64[0];
            goto LABEL_256;
          }
LABEL_259:
          v132 = *(_QWORD *)(v124 + 32);
          if ( v132 )
          {
            *(_QWORD *)(v124 + 40) = 0;
            qfree(v132);
          }
          *(_QWORD *)v124 |= 2uLL;
          goto LABEL_253;
        }
LABEL_246:
        v129 = *(__int64 **)(v128 + 8);
        if ( (*(_BYTE *)v129 & 2) != 0 )
        {
          v130 = *(__int64 **)(v128 + 16);
          if ( (*(_BYTE *)v130 & 2) != 0 )
            goto LABEL_263;
        }
        else
        {
          sub_385AC0(v129);
          v130 = *(__int64 **)(v128 + 16);
          if ( (*(_BYTE *)v130 & 2) != 0 )
            goto LABEL_249;
        }
        sub_385AC0(v130);
LABEL_249:
        if ( (*(_BYTE *)v128 & 2) != 0 )
        {
LABEL_250:
          if ( v128 )
            qfree(v128);
          goto LABEL_252;
        }
LABEL_263:
        v133 = *(_QWORD *)(v128 + 32);
        if ( v133 )
        {
          *(_QWORD *)(v128 + 40) = 0;
          qfree(v133);
        }
        *(_QWORD *)v128 |= 2uLL;
        goto LABEL_250;
      }
    }
    else
    {
      sub_385AC0(v126);
      v127 = *(__int64 **)(v125 + 16);
      if ( (*(_BYTE *)v127 & 2) != 0 )
        goto LABEL_242;
    }
    sub_385AC0(v127);
LABEL_242:
    if ( (*(_BYTE *)v125 & 2) != 0 )
      goto LABEL_243;
    goto LABEL_267;
  }
  *(_QWORD *)v43 = *(_QWORD *)v43 & 3LL | v43 & 0xFFFFFFFFFFFFFFFCLL;
  v22 = (__m128)_mm_unpacklo_epi64((__m128i)v42->m128i_u64[0], (__m128i)v42->m128i_u64[0]);
  *(__m128 *)(v42->m128i_i64[0] + 8) = v22;
  *(_QWORD *)v42->m128i_i64[0] &= ~1uLL;
  *(_QWORD *)v42->m128i_i64[0] |= 2uLL;
LABEL_63:
  v45 = (_QWORD *)v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v46 = (_QWORD *)v45[1];
      if ( v45 != v46 )
      {
        while ( 1 )
        {
          v141 = v46[3];
          v135 = get_item_end();
          v47 = (__int64 *)v46[4];
          if ( 8LL * v46[5] )
            break;
LABEL_191:
          if ( (*v46 & 2) == 0 )
          {
            v106 = (_QWORD *)v46[2];
            if ( (*(_BYTE *)v106 & 2) != 0 )
            {
              v65 = (_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFFCLL);
              v66 = *v65;
              if ( (*v65 & 2) != 0 || v46 != (_QWORD *)v65[2] )
              {
LABEL_103:
                v46 = v65;
              }
              else
              {
                while ( 1 )
                {
                  v46 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                  v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v66 & 2) != 0 )
                    break;
                  v120 = v65;
                  v65 = v46;
                  if ( v120 != (_QWORD *)v46[2] )
                    goto LABEL_103;
                }
              }
            }
            else
            {
              do
              {
                v46 = v106;
                v106 = (_QWORD *)v106[1];
              }
              while ( (*(_BYTE *)v106 & 2) == 0 );
            }
          }
          if ( (_QWORD *)v9->m128i_i64[0] == v46 )
            goto LABEL_105;
        }
LABEL_70:
        v48 = (unsigned __int64 *)v42->m128i_i64[0];
        v143 = v47;
        if ( !v48 )
        {
          v104 = qalloc();
          v105 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, (__m128i)(unsigned __int64)v104);
          if ( !v104 )
          {
            v1 = __cxa_allocate_exception(8u);
            *v1 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v1,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v104 + 64) = 0;
          *(_OWORD *)(v104 + 16) = 0;
          *(__m128i *)(v104 + 8) = v105;
          *(_OWORD *)(v104 + 32) = 0;
          *(_QWORD *)v104 = v104 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v104 + 48) = 0;
          v42->m128i_i64[0] = v104;
          *(_QWORD *)v104 = v104 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v104 & 3LL;
          *(__m128i *)(v42->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                  (__m128i)v42->m128i_u64[0],
                                                  (__m128i)v42->m128i_u64[0]);
          *(_QWORD *)v42->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v42->m128i_i64[0] |= 2uLL;
          v48 = (unsigned __int64 *)v42->m128i_i64[0];
LABEL_68:
          sub_39E980(v42, v48, 1, &v143);
          goto LABEL_69;
        }
        if ( !v42->m128i_i64[1] )
          goto LABEL_68;
        v49 = 1;
        v50 = *v48 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v50 & 2) != 0 )
        {
          v51 = 1;
LABEL_74:
          sub_39E980(v42, v48, v51, &v143);
          goto LABEL_69;
        }
        while ( 1 )
        {
          v95 = *(_QWORD *)(v50 + 24);
          v96 = *v47;
          v136 = (char **)(v50 + 24);
          if ( v95 == v96 )
          {
LABEL_187:
            if ( !v50 )
            {
LABEL_178:
              v51 = v49;
              v48 = (unsigned __int64 *)v50;
              goto LABEL_74;
            }
LABEL_69:
            v22 = _mm_loadh_ps((const double *)&v135);
            v147 = (__int128)v22;
            rangeset_t_add();
            if ( ++v47 == (__int64 *)(v46[4] + 8LL * v46[5]) )
              goto LABEL_191;
            goto LABEL_70;
          }
          if ( v96 == 1 || !v95 )
          {
            if ( v95 == 1 || !v96 )
              goto LABEL_187;
          }
          else
          {
            LOBYTE(v137) = v49;
            if ( v95 == 1
              || !v96
              || ((v140 = (__int64 *)v50,
                   v139 = (_QWORD *)v95,
                   v138 = (__int64 *)v96,
                   v97 = sub_2596A0(v96, v95, *(double *)v22.m128_u64),
                   v50 = (unsigned __int64)v140,
                   v49 = v137,
                   v97)
                ? (v98 = v97 >> 31)
                : (LOBYTE(v98) = (unsigned __int64)*v138 < *v139),
                  (_BYTE)v98) )
            {
              v99 = *(_BYTE **)(v50 + 8);
              v49 = 1;
              goto LABEL_177;
            }
            v100 = *v47;
            v101 = *v136;
            if ( (char *)*v47 == *v136 || v101 == &byte_1 || !v100 )
              goto LABEL_187;
            LOBYTE(v139) = v137;
            if ( v100 != 1 && v101 )
            {
              v138 = v140;
              v137 = v100;
              v136 = (char **)v101;
              v102 = sub_2596A0((__int64)v101, v100, *(double *)v22.m128_u64);
              v50 = (unsigned __int64)v138;
              v49 = (char)v139;
              if ( v102 )
                v103 = v102 >> 31;
              else
                LOBYTE(v103) = (unsigned __int64)*v136 < *(_QWORD *)v137;
              if ( !(_BYTE)v103 )
                goto LABEL_187;
            }
          }
          v99 = *(_BYTE **)(v50 + 16);
          v49 = 0;
LABEL_177:
          if ( (*v99 & 2) != 0 )
            goto LABEL_178;
          v50 = (unsigned __int64)v99;
        }
      }
    }
  }
LABEL_105:
  if ( v151 )
    lock_func_range();
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145);
  }
  return 0;
}

