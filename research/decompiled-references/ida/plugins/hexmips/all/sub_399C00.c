__int64 __fastcall sub_399C00(__int64 a1)
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
  char v22; // r13
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 flags; // r13
  char v26; // al
  unsigned __int64 v27; // rdi
  __int64 (*v28)(); // rax
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // r14
  __int64 (*v31)(); // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // r14
  unsigned __int64 v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // r15
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __m128i *v41; // r12
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // r15
  __int64 *v46; // rbx
  unsigned __int64 *v47; // rsi
  char v48; // r8
  unsigned __int64 v49; // rdx
  char v50; // r9
  __int64 *v51; // rax
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __m128i v56; // xmm0
  unsigned __int64 v57; // rax
  __m128i v58; // xmm0
  unsigned __int64 v59; // rdi
  _QWORD *v60; // r14
  __int64 v61; // rax
  __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v67; // rax
  __int64 *v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 *v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 v78; // rax
  char v79; // dl
  unsigned __int64 v80; // rax
  _BYTE *v81; // rax
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rsi
  _QWORD *i; // rax
  unsigned __int64 v87; // rdi
  __int64 v88; // r13
  __int64 item_end; // rax
  _QWORD *v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rax
  unsigned __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rdi
  unsigned int v96; // eax
  unsigned int v97; // eax
  _BYTE *v98; // rax
  __int64 v99; // rcx
  char *v100; // rdi
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rax
  __m128i v104; // xmm0
  _QWORD *v105; // rdx
  unsigned __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rbx
  __int64 v109; // rdx
  _QWORD *v110; // rax
  _QWORD *v111; // r8
  __int64 v112; // rsi
  __int64 v113; // rbx
  __int64 v114; // rdx
  _QWORD *v115; // rsi
  __int64 v116; // r8
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rdx
  _QWORD *v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rax
  __m128i v122; // xmm1
  unsigned __int64 v123; // r14
  __int64 v124; // r13
  __int64 *v125; // rdi
  __int64 *v126; // rdi
  __int64 v127; // r13
  __int64 *v128; // rdi
  __int64 *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // [rsp+0h] [rbp-288h] BYREF
  char **v132; // [rsp+8h] [rbp-280h]
  __int64 v133; // [rsp+10h] [rbp-278h]
  __int64 *v134; // [rsp+18h] [rbp-270h]
  _QWORD *v135; // [rsp+20h] [rbp-268h]
  __int64 *v136; // [rsp+28h] [rbp-260h]
  unsigned __int64 v137; // [rsp+30h] [rbp-258h] BYREF
  unsigned __int64 *v138; // [rsp+38h] [rbp-250h] BYREF
  __int64 *v139; // [rsp+40h] [rbp-248h] BYREF
  __m128 *v140; // [rsp+48h] [rbp-240h] BYREF
  __int64 v141; // [rsp+50h] [rbp-238h]
  __int128 v142; // [rsp+58h] [rbp-230h]
  __m128 v143; // [rsp+70h] [rbp-218h] BYREF
  __m128i v144; // [rsp+80h] [rbp-208h] BYREF
  __int128 v145; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v146; // [rsp+A0h] [rbp-1E8h]
  __int64 v147; // [rsp+A8h] [rbp-1E0h] BYREF
  int v148; // [rsp+B0h] [rbp-1D8h]
  __int128 v149; // [rsp+B8h] [rbp-1D0h]
  __int64 v150; // [rsp+C8h] [rbp-1C0h]
  char v151; // [rsp+D0h] [rbp-1B8h]
  __int128 v152; // [rsp+E0h] [rbp-1A8h]
  __int64 v153; // [rsp+F0h] [rbp-198h]
  __int64 v154; // [rsp+F8h] [rbp-190h]
  __int64 v155; // [rsp+100h] [rbp-188h]
  char v156; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int64 v157; // [rsp+248h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v157 = __readfsqword(0x28u);
  v5 = a1;
  v6 = sub_1CA620(*(_QWORD *)(v4 + 8));
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  v9 = *(__m128i **)(v7 + 112);
  v133 = *(_QWORD *)(*(_QWORD *)(v7 + 216) + 112LL);
  sub_397CC0(v9->m128i_i64, v7, 0);
  v10 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v11 = *(__int64 **)(v10 + 8);
      if ( v11 != (__int64 *)v10 )
      {
        v131 = a1;
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
              v51 = (__int64 *)v11[2];
              if ( (*(_BYTE *)v51 & 2) != 0 )
              {
                v70 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                v71 = *v70;
                if ( (*v70 & 2) == 0 )
                {
                  while ( (__int64 *)v70[2] == v11 )
                  {
                    v11 = v70;
                    v72 = v71 & 0xFFFFFFFFFFFFFFFCLL;
                    v71 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v71 & 2) != 0 )
                    {
                      v11 = (__int64 *)v72;
                      goto LABEL_19;
                    }
                    v70 = (__int64 *)v72;
                  }
                }
                v11 = v70;
              }
              else
              {
                do
                {
                  v11 = v51;
                  v51 = (__int64 *)v51[1];
                }
                while ( (*(_BYTE *)v51 & 2) == 0 );
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
                v67 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v67 & 2) == 0 )
                {
                  v68 = v11;
                  do
                  {
                    if ( *(__int64 **)(v18 + 16) != v68 )
                      break;
                    v68 = (__int64 *)v18;
                    v69 = v67 & 0xFFFFFFFFFFFFFFFCLL;
                    v67 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
                    v18 = v69;
                  }
                  while ( (v67 & 2) == 0 );
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
            sub_3445A0((unsigned __int64 **)v9, v20);
          }
LABEL_19:
          if ( (__int64 *)v9->m128i_i64[0] == v11 )
          {
            v5 = v131;
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
  v141 = 0;
  v137 = -1;
  v146 = -1;
  v147 = 0;
  v148 = -1;
  v150 = -1;
  v151 = 1;
  v142 = 0;
  v145 = 0;
  v149 = 0;
  v21 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] && v9->m128i_i64[1] )
    v21 = *(_QWORD *)(v21 + 8);
  v143 = (__m128)(unsigned __int64)v8;
  v144 = 0;
  v150 = *v8;
  v134 = &v147;
  v22 = func_tail_iterator_set();
  if ( v22 )
    v151 = 0;
  v132 = (char **)&v145;
  LOBYTE(v135) = v22 | sub_32D520(&v145, (__int64)&v143.m128_i64[1]);
  if ( v143.m128_u64[1] )
  {
    v144.m128i_i64[0] = 0;
    qfree();
  }
  if ( !(_BYTE)v135 )
    goto LABEL_52;
  while ( 2 )
  {
    while ( 2 )
    {
      v23 = v137;
      if ( v151 )
        v24 = v146;
      else
        v24 = v150;
      v137 = v24;
      flags = get_flags_ex();
      if ( (~BYTE1(flags) & 6) != 0 )
        goto LABEL_48;
      v131 = v9->m128i_i64[0];
      if ( v131 != v21 && *(_QWORD *)(v21 + 24) == v137 )
        goto LABEL_98;
      v26 = netnode_charval();
      v27 = v137;
      if ( v26 == 1 )
      {
        v52 = *(_QWORD *)(v5 + 8) + 16LL;
        goto LABEL_84;
      }
      if ( v26 == 2 )
      {
        v52 = 1;
        goto LABEL_84;
      }
      if ( v26 != 3 || v131 == v21 || (v76 = *(__int64 **)(v21 + 32), v77 = &v76[*(_QWORD *)(v21 + 40)], v77 == v76) )
      {
LABEL_38:
        v28 = *(__int64 (**)())(*(_QWORD *)v133 + 280LL);
        if ( v28 == sub_D68F0 )
          goto LABEL_39;
        v27 = v137;
        if ( ((unsigned int (__fastcall *)(__int64, unsigned __int64))v28)(v133, v137) != 1 )
          goto LABEL_39;
        v115 = (_QWORD *)v9->m128i_i64[0];
        if ( !v9->m128i_i64[0] )
          goto LABEL_39;
        v116 = 24;
        v117 = *v115 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v117 )
          goto LABEL_233;
        if ( (*(_BYTE *)(*v115 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_39;
        while ( 1 )
        {
          v118 = *(_QWORD *)(v117 + 24);
          v116 = v117 + 24;
          if ( v23 >= v118 )
          {
            if ( v118 >= v23 )
            {
              if ( v115 != (_QWORD *)v117 )
              {
LABEL_233:
                v52 = **(_QWORD **)(v116 + 8);
                goto LABEL_84;
              }
LABEL_39:
              v29 = (unsigned __int64 *)&v156;
              v153 = -1;
              v154 = 0;
              v155 = 0;
              v152 = -1;
              do
              {
                *(_WORD *)v29 = 0;
                v29 += 5;
                *((_WORD *)v29 - 19) = 0;
                *((_WORD *)v29 - 18) = 0;
                *((_DWORD *)v29 - 2) = 0;
                *((_WORD *)v29 - 17) = 0;
                *((_OWORD *)v29 - 2) = 0;
                *(v29 - 2) = 0;
              }
              while ( &v157 != v29 );
              if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() )
              {
                v27 = v137;
                v52 = 1;
                goto LABEL_84;
              }
              v30 = v137;
              if ( v131 == v21
                || (v31 = *(__int64 (**)())(*(_QWORD *)v133 + 288LL), v31 == sub_334090)
                || (v30 = v137,
                    !((unsigned __int8 (__fastcall *)(__int64, unsigned __int64, double))v31)(v133, v137, 0.0)) )
              {
                if ( (flags & 0x10000) == 0 )
                  goto LABEL_45;
                v82 = v9->m128i_i64[0];
                v83 = (_QWORD *)v21;
                while ( 1 )
                {
                  v84 = 0;
                  if ( v82 )
                  {
                    v84 = v9->m128i_i64[0];
                    if ( v9->m128i_i64[1] )
                      v84 = *(_QWORD *)(v82 + 8);
                  }
                  if ( v83 == (_QWORD *)v84 )
                    break;
                  if ( (*v83 & 2) != 0 )
                  {
                    v83 = (_QWORD *)v83[2];
                  }
                  else
                  {
                    v85 = (_QWORD *)v83[1];
                    if ( (*(_BYTE *)v85 & 2) != 0 )
                    {
                      v90 = (_QWORD *)(*v83 & 0xFFFFFFFFFFFFFFFCLL);
                      v91 = *v90;
                      if ( (*v90 & 2) == 0 )
                      {
                        while ( v83 == (_QWORD *)v90[1] )
                        {
                          v83 = v90;
                          v93 = v91 & 0xFFFFFFFFFFFFFFFCLL;
                          v91 = *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v91 & 2) != 0 )
                          {
                            v83 = (_QWORD *)v93;
                            goto LABEL_147;
                          }
                          v90 = (_QWORD *)v93;
                        }
                      }
                      v83 = v90;
                    }
                    else
                    {
                      for ( i = (_QWORD *)v85[2]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[2] )
                        v85 = i;
                      v83 = v85;
                    }
                  }
LABEL_147:
                  if ( v83[3] < v30 )
                  {
                    v84 = (__int64)v83;
                    break;
                  }
                }
                if ( v84 == v82 )
                {
LABEL_45:
                  v32 = v142;
                  v33 = v141;
                  if ( *((_QWORD *)&v142 + 1) < (unsigned __int64)(v142 + 1) )
                  {
                    v141 = qvector_reserve();
                    v33 = v141;
                    v32 = v142;
                  }
                  *(_QWORD *)(v33 + 8 * v32) = v30;
                  *(_QWORD *)&v142 = v142 + 1;
                  goto LABEL_48;
                }
                v87 = *(_QWORD *)(v84 + 24);
                v88 = v84 + 24;
                while ( 1 )
                {
                  if ( v87 >= v30 )
                    goto LABEL_45;
                  item_end = get_item_end();
                  v27 = item_end;
                  if ( v137 == item_end )
                    break;
                  v131 = item_end;
                  v30 = v137;
                  v87 = item_end;
                  if ( (get_flags_ex() & 0x10000) == 0 )
                    goto LABEL_45;
                }
                if ( *(_QWORD *)(v88 + 16) )
                {
                  v52 = **(_QWORD **)(v88 + 8);
                  goto LABEL_84;
                }
                if ( !under_debugger )
                  sub_37E160(0xC733u, 0.0);
              }
              else
              {
                if ( *(_QWORD *)(v21 + 40) )
                {
                  v27 = v137;
                  v52 = **(_QWORD **)(v21 + 32);
                  goto LABEL_84;
                }
                if ( !under_debugger )
                  sub_37E160(0xC732u, 0.0);
              }
              BUG();
            }
            v117 = *(_QWORD *)(v117 + 16);
          }
          else
          {
            v117 = *(_QWORD *)(v117 + 8);
          }
          if ( (*(_BYTE *)v117 & 2) != 0 )
            goto LABEL_39;
        }
      }
      while ( 1 )
      {
        v52 = *v76;
        if ( *v76 != 1 && *(_DWORD *)(v52 + 8) == 77 )
          break;
        if ( v77 == ++v76 )
          goto LABEL_38;
      }
LABEL_84:
      v143 = (__m128)v27;
      v144 = 0;
      v53 = v9->m128i_i64[0];
      v140 = &v143;
      if ( !v53 )
      {
        v121 = qalloc();
        v122 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v121, (__m128i)(unsigned __int64)v121);
        if ( !v121 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v121 + 48) = 0;
        *(_OWORD *)(v121 + 16) = 0;
        *(_OWORD *)(v121 + 32) = 0;
        *(__m128i *)(v121 + 8) = v122;
        *(_QWORD *)v121 = v121 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v9->m128i_i64[0] = v121;
        *(_QWORD *)v121 = v121 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v121 & 3LL;
        *(__m128i *)(v9->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v9->m128i_u64[0], (__m128i)v9->m128i_u64[0]);
        *(_QWORD *)v9->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v9->m128i_i64[0] |= 2uLL;
        v53 = v9->m128i_i64[0];
LABEL_86:
        v54 = qalloc();
        v21 = v54;
        if ( !v54 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v54 + 48) = 0;
        *(_OWORD *)v54 = 0;
        *(_OWORD *)(v54 + 16) = 0;
        *(_OWORD *)(v54 + 32) = 0;
        *(_QWORD *)(v54 + 24) = v143.m128_u64[0];
        v55 = v143.m128_u64[1];
        v56 = _mm_load_si128(&v144);
        v143.m128_u64[1] = 0;
        *(_QWORD *)(v21 + 32) = v55;
        *(__m128i *)(v21 + 40) = v56;
        v144 = 0;
        v57 = v53 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 1LL;
        *(_QWORD *)v21 = v57;
        v58 = _mm_loadl_epi64(v9);
        *(_QWORD *)v21 = v57 | 1;
        *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v58, v58);
        if ( v53 == v9->m128i_i64[0] )
        {
          *(_QWORD *)v53 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v53 & 3LL;
          *(_QWORD *)(v9->m128i_i64[0] + 8) = v21;
          *(_QWORD *)(v9->m128i_i64[0] + 16) = v21;
          v120 = *(_QWORD *)v21 & 2LL;
          *(_QWORD *)v21 &= ~1uLL;
          *(_QWORD *)v21 = v120 | v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v53 + 8) = v21;
          if ( v53 == *(_QWORD *)(v9->m128i_i64[0] + 8) )
            *(_QWORD *)(v9->m128i_i64[0] + 8) = v21;
          sub_343A60(v9, (__int64 *)v21);
        }
        ++v9->m128i_i64[1];
        v59 = v143.m128_u64[1];
LABEL_92:
        if ( v59 )
        {
          v144.m128i_i64[0] = 0;
          qfree();
        }
        v60 = (_QWORD *)(v21 + 24);
        goto LABEL_95;
      }
      if ( !v9->m128i_i64[1] )
        goto LABEL_86;
      v21 = *(_QWORD *)v53 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v79 = 1;
LABEL_162:
        v92 = sub_343CA0(v9, (unsigned __int64 *)v53, v79, (const __m128i **)&v140);
        v59 = v143.m128_u64[1];
        v21 = v92;
        goto LABEL_92;
      }
      v79 = (char)v135;
      while ( 1 )
      {
        v80 = *(_QWORD *)(v21 + 24);
        v60 = (_QWORD *)(v21 + 24);
        if ( v27 < v80 )
        {
          v81 = *(_BYTE **)(v21 + 8);
          v79 = (char)v135;
          if ( (*v81 & 2) != 0 )
            goto LABEL_135;
          goto LABEL_222;
        }
        if ( v80 >= v27 )
          break;
        v81 = *(_BYTE **)(v21 + 16);
        v79 = 0;
        if ( (*v81 & 2) != 0 )
          goto LABEL_135;
LABEL_222:
        v21 = (unsigned __int64)v81;
      }
      if ( !v21 )
      {
LABEL_135:
        v53 = v21;
        goto LABEL_162;
      }
LABEL_95:
      v143.m128_u64[0] = v52;
      v61 = v60[2];
      v62 = v60[1];
      if ( v60[3] < (unsigned __int64)(v61 + 1) )
      {
        v78 = qvector_reserve();
        v60[1] = v78;
        v62 = v78;
        v61 = v60[2];
      }
      *(_QWORD *)(v62 + 8 * v61) = v52;
      ++v60[2];
LABEL_98:
      if ( (*(_QWORD *)v21 & 2) == 0 )
      {
        v63 = *(_QWORD *)(v21 + 16);
        if ( (*(_BYTE *)v63 & 2) != 0 )
        {
          v73 = (_QWORD *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFCLL);
          v74 = *v73;
          if ( (*v73 & 2) == 0 )
          {
            while ( v73[2] == v21 )
            {
              v21 = v74 & 0xFFFFFFFFFFFFFFFCLL;
              v74 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v74 & 2) != 0 )
                goto LABEL_48;
              v75 = v73;
              v73 = (_QWORD *)v21;
              v21 = (unsigned __int64)v75;
            }
          }
          v21 = (unsigned __int64)v73;
        }
        else
        {
          do
          {
            v21 = v63;
            v63 = *(_QWORD *)(v63 + 8);
          }
          while ( (*(_BYTE *)v63 & 2) == 0 );
        }
      }
LABEL_48:
      if ( !v151 )
      {
        if ( !(unsigned __int8)func_item_iterator_next() )
        {
          v151 = 1;
          break;
        }
        continue;
      }
      break;
    }
    if ( (unsigned __int8)sub_32D540(v132) )
      continue;
    break;
  }
LABEL_52:
  v34 = (unsigned int)(v142 - 1);
  v35 = 8 * v34;
  if ( (int)v34 < 0 )
    goto LABEL_60;
  while ( 2 )
  {
    v137 = *(_QWORD *)(v141 + v35);
    v36 = get_item_end();
    v37 = (_QWORD *)v9->m128i_i64[0];
    if ( !v9->m128i_i64[0] )
      goto LABEL_59;
    v38 = 24;
    v39 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v39 )
    {
LABEL_196:
      v106 = *(_QWORD *)(v38 + 16);
      if ( v106 )
      {
        v107 = 0;
        v108 = 0;
        while ( 1 )
        {
          v109 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8 * v108);
          if ( v109 != 1 && *(_DWORD *)(v109 + 8) == 77 )
            break;
          v108 = ++v107;
          if ( v107 >= v106 )
            goto LABEL_59;
        }
        v138 = &v137;
        v110 = (_QWORD *)sub_396E80(v9, &v137, (__int64 **)&v138);
        v111 = v110 + 3;
        v112 = v110[4];
        v113 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8 * v108);
        v114 = v110[5];
        if ( v110[6] < (unsigned __int64)(v114 + 1) )
        {
          v131 = (__int64)(v110 + 3);
          v130 = qvector_reserve();
          v111 = (_QWORD *)v131;
          v112 = v130;
          *(_QWORD *)(v131 + 8) = v130;
          v114 = v111[2];
        }
        *(_QWORD *)(v112 + 8 * v114) = v113;
        ++v111[2];
      }
      goto LABEL_59;
    }
    if ( (*(_BYTE *)(*v37 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_59;
    while ( 2 )
    {
      v40 = *(_QWORD *)(v39 + 24);
      v38 = v39 + 24;
      if ( v36 < v40 )
      {
        v39 = *(_QWORD *)(v39 + 8);
        goto LABEL_58;
      }
      if ( v40 < v36 )
      {
        v39 = *(_QWORD *)(v39 + 16);
LABEL_58:
        if ( (*(_BYTE *)v39 & 2) != 0 )
          goto LABEL_59;
        continue;
      }
      break;
    }
    if ( v37 != (_QWORD *)v39 )
      goto LABEL_196;
LABEL_59:
    LODWORD(v34) = v34 - 1;
    v35 -= 8;
    if ( (_DWORD)v34 != -1 )
      continue;
    break;
  }
LABEL_60:
  v41 = *(__m128i **)(*(_QWORD *)(v5 + 8) + 120LL);
  v42 = v41->m128i_i64[0];
  if ( !v41->m128i_i64[0] )
  {
LABEL_257:
    v41->m128i_i64[1] = 0;
    goto LABEL_63;
  }
  v43 = *(_QWORD *)v42;
  if ( v41->m128i_i64[1] )
  {
    v123 = v43 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_256:
      *(_QWORD *)v42 = v43 & 3 | v42 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v41->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v41->m128i_u64[0], (__m128i)v41->m128i_u64[0]);
      *(_QWORD *)v41->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v41->m128i_i64[0] |= 2uLL;
      goto LABEL_257;
    }
    v124 = *(_QWORD *)(v123 + 8);
    if ( (*(_BYTE *)v124 & 2) != 0 )
    {
      v127 = *(_QWORD *)(v123 + 16);
      if ( (*(_BYTE *)v127 & 2) != 0 )
        goto LABEL_259;
      goto LABEL_246;
    }
    v125 = *(__int64 **)(v124 + 8);
    if ( (*(_BYTE *)v125 & 2) != 0 )
    {
      v126 = *(__int64 **)(v124 + 16);
      if ( (*(_BYTE *)v126 & 2) != 0 )
      {
LABEL_267:
        if ( *(_QWORD *)(v124 + 32) )
        {
          *(_QWORD *)(v124 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v124 |= 2uLL;
LABEL_243:
        if ( v124 )
          qfree();
        v127 = *(_QWORD *)(v123 + 16);
        if ( (*(_BYTE *)v127 & 2) != 0 )
        {
LABEL_252:
          if ( (*(_BYTE *)v123 & 2) != 0 )
          {
LABEL_253:
            if ( v43 > 3 )
              qfree();
            v42 = v41->m128i_i64[0];
            v43 = *(_QWORD *)v41->m128i_i64[0];
            goto LABEL_256;
          }
LABEL_259:
          if ( *(_QWORD *)(v123 + 32) )
          {
            *(_QWORD *)(v123 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v123 |= 2uLL;
          goto LABEL_253;
        }
LABEL_246:
        v128 = *(__int64 **)(v127 + 8);
        if ( (*(_BYTE *)v128 & 2) != 0 )
        {
          v129 = *(__int64 **)(v127 + 16);
          if ( (*(_BYTE *)v129 & 2) != 0 )
            goto LABEL_263;
        }
        else
        {
          sub_380BC0(v128);
          v129 = *(__int64 **)(v127 + 16);
          if ( (*(_BYTE *)v129 & 2) != 0 )
            goto LABEL_249;
        }
        sub_380BC0(v129);
LABEL_249:
        if ( (*(_BYTE *)v127 & 2) != 0 )
        {
LABEL_250:
          if ( v127 )
            qfree();
          goto LABEL_252;
        }
LABEL_263:
        if ( *(_QWORD *)(v127 + 32) )
        {
          *(_QWORD *)(v127 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v127 |= 2uLL;
        goto LABEL_250;
      }
    }
    else
    {
      sub_380BC0(v125);
      v126 = *(__int64 **)(v124 + 16);
      if ( (*(_BYTE *)v126 & 2) != 0 )
        goto LABEL_242;
    }
    sub_380BC0(v126);
LABEL_242:
    if ( (*(_BYTE *)v124 & 2) != 0 )
      goto LABEL_243;
    goto LABEL_267;
  }
  *(_QWORD *)v42 = *(_QWORD *)v42 & 3LL | v42 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v41->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v41->m128i_u64[0], (__m128i)v41->m128i_u64[0]);
  *(_QWORD *)v41->m128i_i64[0] &= ~1uLL;
  *(_QWORD *)v41->m128i_i64[0] |= 2uLL;
LABEL_63:
  v44 = (_QWORD *)v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v45 = (_QWORD *)v44[1];
      if ( v44 != v45 )
      {
        while ( 1 )
        {
          v137 = v45[3];
          v131 = get_item_end();
          v46 = (__int64 *)v45[4];
          if ( 8LL * v45[5] )
            break;
LABEL_191:
          if ( (*v45 & 2) == 0 )
          {
            v105 = (_QWORD *)v45[2];
            if ( (*(_BYTE *)v105 & 2) != 0 )
            {
              v64 = (_QWORD *)(*v45 & 0xFFFFFFFFFFFFFFFCLL);
              v65 = *v64;
              if ( (*v64 & 2) != 0 || v45 != (_QWORD *)v64[2] )
              {
LABEL_103:
                v45 = v64;
              }
              else
              {
                while ( 1 )
                {
                  v45 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                  v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v65 & 2) != 0 )
                    break;
                  v119 = v64;
                  v64 = v45;
                  if ( v119 != (_QWORD *)v45[2] )
                    goto LABEL_103;
                }
              }
            }
            else
            {
              do
              {
                v45 = v105;
                v105 = (_QWORD *)v105[1];
              }
              while ( (*(_BYTE *)v105 & 2) == 0 );
            }
          }
          if ( (_QWORD *)v9->m128i_i64[0] == v45 )
            goto LABEL_105;
        }
LABEL_70:
        v47 = (unsigned __int64 *)v41->m128i_i64[0];
        v139 = v46;
        if ( !v47 )
        {
          v103 = qalloc();
          v104 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v103, (__m128i)(unsigned __int64)v103);
          if ( !v103 )
          {
            v1 = __cxa_allocate_exception(8u);
            *v1 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v1,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v103 + 64) = 0;
          *(_OWORD *)(v103 + 16) = 0;
          *(__m128i *)(v103 + 8) = v104;
          *(_OWORD *)(v103 + 32) = 0;
          *(_QWORD *)v103 = v103 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v103 + 48) = 0;
          v41->m128i_i64[0] = v103;
          *(_QWORD *)v103 = v103 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v103 & 3LL;
          *(__m128i *)(v41->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                  (__m128i)v41->m128i_u64[0],
                                                  (__m128i)v41->m128i_u64[0]);
          *(_QWORD *)v41->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v41->m128i_i64[0] |= 2uLL;
          v47 = (unsigned __int64 *)v41->m128i_i64[0];
LABEL_68:
          sub_399A80(v41, v47, 1, &v139);
          goto LABEL_69;
        }
        if ( !v41->m128i_i64[1] )
          goto LABEL_68;
        v48 = 1;
        v49 = *v47 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v49 & 2) != 0 )
        {
          v50 = 1;
LABEL_74:
          sub_399A80(v41, v47, v50, &v139);
          goto LABEL_69;
        }
        while ( 1 )
        {
          v94 = *(_QWORD *)(v49 + 24);
          v95 = *v46;
          v132 = (char **)(v49 + 24);
          if ( v94 == v95 )
          {
LABEL_187:
            if ( !v49 )
            {
LABEL_178:
              v50 = v48;
              v47 = (unsigned __int64 *)v49;
              goto LABEL_74;
            }
LABEL_69:
            v143 = _mm_loadh_ps((const double *)&v131);
            rangeset_t_add();
            if ( ++v46 == (__int64 *)(v45[4] + 8LL * v45[5]) )
              goto LABEL_191;
            goto LABEL_70;
          }
          if ( v95 == 1 || !v94 )
          {
            if ( v94 == 1 || !v95 )
              goto LABEL_187;
          }
          else
          {
            LOBYTE(v133) = v48;
            if ( v94 == 1
              || !v95
              || ((v136 = (__int64 *)v49,
                   v135 = (_QWORD *)v94,
                   v134 = (__int64 *)v95,
                   v96 = sub_254E20(v95, v94),
                   v49 = (unsigned __int64)v136,
                   v48 = v133,
                   v96)
                ? (v97 = v96 >> 31)
                : (LOBYTE(v97) = (unsigned __int64)*v134 < *v135),
                  (_BYTE)v97) )
            {
              v98 = *(_BYTE **)(v49 + 8);
              v48 = 1;
              goto LABEL_177;
            }
            v99 = *v46;
            v100 = *v132;
            if ( (char *)*v46 == *v132 || v100 == &byte_1 || !v99 )
              goto LABEL_187;
            LOBYTE(v135) = v133;
            if ( v99 != 1 && v100 )
            {
              v134 = v136;
              v133 = v99;
              v132 = (char **)v100;
              v101 = sub_254E20((__int64)v100, v99);
              v49 = (unsigned __int64)v134;
              v48 = (char)v135;
              if ( v101 )
                v102 = v101 >> 31;
              else
                LOBYTE(v102) = (unsigned __int64)*v132 < *(_QWORD *)v133;
              if ( !(_BYTE)v102 )
                goto LABEL_187;
            }
          }
          v98 = *(_BYTE **)(v49 + 16);
          v48 = 0;
LABEL_177:
          if ( (*v98 & 2) != 0 )
            goto LABEL_178;
          v49 = (unsigned __int64)v98;
        }
      }
    }
  }
LABEL_105:
  if ( v147 )
    lock_func_range();
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree();
  }
  return 0;
}

