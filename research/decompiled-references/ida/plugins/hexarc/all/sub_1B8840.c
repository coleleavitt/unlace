__int64 __fastcall sub_1B8840(_QWORD *a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // eax
  char v5; // r13
  int v6; // r12d
  _QWORD *v7; // rbp
  __int64 v8; // rax
  int *v9; // r15
  __int64 v10; // r14
  int v11; // ecx
  char v12; // si
  int *v13; // rax
  unsigned int v14; // ebp
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ebx
  int *v25; // rdx
  int *v26; // rax
  int dtype_size; // r12d
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  int v35; // ecx
  __int64 v36; // rax
  __int64 *v37; // rbp
  int v38; // eax
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 head; // r15
  _QWORD *v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  char *v47; // r9
  __int64 v48; // rax
  int v49; // edx
  char *v50; // rcx
  char *v51; // rax
  void *v52; // rsi
  int v53; // eax
  __int64 **v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // r9d
  _QWORD *v63; // rbx
  __int64 v64; // rsi
  __m128i si128; // xmm0
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // r14
  int v70; // edx
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // r12
  __int64 *v74; // rdi
  __int64 *v75; // rdi
  unsigned int i; // r12d
  char j; // al
  _QWORD *v78; // rax
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rbp
  unsigned __int64 v81; // r12
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  signed __int64 v86; // rdx
  int v87; // edx
  int v88; // esi
  unsigned int v89; // ecx
  int v90; // edx
  int v91; // r12d
  int v92; // r9d
  __int64 v93; // rax
  unsigned __int64 v94; // r15
  __int64 v95; // r14
  void *v96; // rax
  unsigned __int64 v97; // r12
  __int64 *v98; // rax
  unsigned int v99; // r12d
  unsigned int v100; // eax
  unsigned __int64 v101; // xmm0_8
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r12
  unsigned int k; // eax
  unsigned int *v106; // r15
  __int64 v107; // r12
  __int64 v108; // r12
  _QWORD *v109; // r12
  __int64 v110; // rax
  signed int v111; // r15d
  __int64 v112; // r12
  __int64 v113; // r15
  __int64 v114; // r12
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // r15
  signed int v118; // eax
  int v119; // [rsp+0h] [rbp-1C0h]
  _QWORD *v120; // [rsp+0h] [rbp-1C0h]
  __int64 v121; // [rsp+0h] [rbp-1C0h]
  _QWORD *v122; // [rsp+0h] [rbp-1C0h]
  __int64 v124; // [rsp+10h] [rbp-1B0h]
  int v125; // [rsp+10h] [rbp-1B0h]
  int *v126; // [rsp+10h] [rbp-1B0h]
  char *v127; // [rsp+10h] [rbp-1B0h]
  int n; // [rsp+20h] [rbp-1A0h]
  size_t na; // [rsp+20h] [rbp-1A0h]
  size_t nb; // [rsp+20h] [rbp-1A0h]
  __int64 nd; // [rsp+20h] [rbp-1A0h]
  unsigned int nc; // [rsp+20h] [rbp-1A0h]
  char v136; // [rsp+38h] [rbp-188h]
  _QWORD *v137; // [rsp+38h] [rbp-188h]
  char v138; // [rsp+38h] [rbp-188h]
  __int64 v139; // [rsp+40h] [rbp-180h]
  unsigned __int64 v140; // [rsp+48h] [rbp-178h]
  unsigned __int64 v141; // [rsp+48h] [rbp-178h]
  unsigned __int64 v142; // [rsp+48h] [rbp-178h]
  char *v143; // [rsp+48h] [rbp-178h]
  unsigned int v144; // [rsp+50h] [rbp-170h]
  int v145; // [rsp+5Ch] [rbp-164h]
  __int128 v146; // [rsp+68h] [rbp-158h] BYREF
  __int64 v147; // [rsp+78h] [rbp-148h] BYREF
  __int64 v148; // [rsp+80h] [rbp-140h]
  __int64 v149; // [rsp+88h] [rbp-138h] BYREF
  __int64 v150; // [rsp+90h] [rbp-130h]
  __int64 v151; // [rsp+98h] [rbp-128h]
  __int128 v152; // [rsp+A0h] [rbp-120h]
  unsigned __int64 v153; // [rsp+B8h] [rbp-108h] BYREF
  __int128 v154; // [rsp+C0h] [rbp-100h]
  int *v155; // [rsp+D0h] [rbp-F0h]
  __int128 v156; // [rsp+D8h] [rbp-E8h]
  int v157; // [rsp+F0h] [rbp-D0h] BYREF
  int *v158; // [rsp+F8h] [rbp-C8h]
  int *v159; // [rsp+100h] [rbp-C0h]
  int *v160; // [rsp+108h] [rbp-B8h]
  __int64 v161; // [rsp+110h] [rbp-B0h]
  void *src; // [rsp+118h] [rbp-A8h] BYREF
  __int128 v163; // [rsp+120h] [rbp-A0h]
  __int64 v164; // [rsp+130h] [rbp-90h]
  unsigned __int64 v165; // [rsp+138h] [rbp-88h] BYREF
  __int64 v166; // [rsp+140h] [rbp-80h]
  unsigned __int64 v167; // [rsp+148h] [rbp-78h] BYREF
  __int64 v168; // [rsp+150h] [rbp-70h]
  __int64 v169; // [rsp+158h] [rbp-68h] BYREF
  __int64 v170; // [rsp+160h] [rbp-60h]
  __int128 *v171; // [rsp+168h] [rbp-58h]
  char v172; // [rsp+170h] [rbp-50h]
  unsigned __int64 v173; // [rsp+180h] [rbp-40h]

  v4 = a3[8];
  v173 = __readfsqword(0x28u);
  v154 = 0;
  v153 = 0;
  v155 = nullptr;
  v151 = 0;
  v156 = 0;
  v152 = 0;
  if ( (v4 & 0x40000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
      *((_QWORD *)a3 + 10) = 0;
    else
      *((_QWORD *)a3 + 6) = 0;
  }
  v5 = calc_switch_cases();
  if ( !v5 || a3[24] == -1 || !(_QWORD)v152 )
  {
    v63 = (_QWORD *)a1[1];
    v64 = v63[62];
    if ( v63[64] <= 0x2Du )
    {
      v85 = qvector_reserve();
      v63[62] = v85;
      v64 = v85;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FA170);
    v63[63] = 46;
    *(__m128i *)v64 = si128;
    *(__m128i *)(v64 + 16) = _mm_load_si128((const __m128i *)&xmmword_3FA180);
    *(__m128i *)(v64 + 29) = _mm_load_si128((const __m128i *)&xmmword_3FA190);
    *(_BYTE *)(v63[62] + 45LL) = 0;
    goto LABEL_19;
  }
  v157 = 0;
  v158 = nullptr;
  v159 = &v157;
  v160 = &v157;
  v161 = 0;
  n = 0;
  v124 = 0;
  do
  {
    v6 = 0;
    v7 = (_QWORD *)(v153 + 24 * v124);
    v8 = 0;
    if ( v7[1] )
    {
      do
      {
        v9 = v158;
        v10 = *(_QWORD *)(*v7 + 8 * v8);
        if ( v158 )
        {
          while ( 1 )
          {
            v11 = v9[8];
            v12 = 0;
            v13 = *((int **)v9 + 3);
            if ( (int)v10 < v11 )
            {
              v13 = *((int **)v9 + 2);
              v12 = v5;
            }
            if ( !v13 )
              break;
            v9 = v13;
          }
          if ( !v12 )
            goto LABEL_16;
          if ( v159 != v9 )
            goto LABEL_45;
        }
        else if ( v159 != &v157 )
        {
LABEL_45:
          v11 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_16:
          if ( (int)v10 <= v11 )
            goto LABEL_17;
        }
        *(_DWORD *)(operator new(0x28u) + 32) = v10;
        ++v6;
        std::_Rb_tree_insert_and_rebalance();
        v8 = v6;
        ++v161;
      }
      while ( (unsigned __int64)v6 < v7[1] );
    }
    v20 = *(_QWORD *)(v151 + 8 * v124);
    v21 = a1[1];
    v22 = (__int64)sub_60B30(v21, v20);
    if ( v22 )
    {
      if ( v20 != *(_QWORD *)(v22 + 32) )
      {
        v23 = *(_QWORD *)(v22 + 48);
        if ( !v23 || v20 != *(_QWORD *)(v23 + 24) )
        {
LABEL_17:
          sub_652F0((__int64 *)(a1[1] + 496LL));
LABEL_18:
          sub_1B23B0(v158);
LABEL_19:
          v14 = -7;
          *(_QWORD *)(a1[1] + 488LL) = a2;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v22 = sub_62A50(v21, a2, v20, 1);
      if ( !v22 )
        goto LABEL_17;
    }
    v24 = *(_DWORD *)(v22 + 72);
    v25 = &v155[v156];
    if ( v155 != v25 )
    {
      v26 = v155;
      while ( v24 != *v26 )
      {
        if ( v25 == ++v26 )
          goto LABEL_51;
      }
      if ( v25 != v26 )
      {
        if ( !under_debugger )
          sub_37B760(52924);
        goto LABEL_266;
      }
    }
LABEL_51:
    if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
    {
      v155 = (int *)qvector_reserve();
      v25 = &v155[v156];
    }
    ++n;
    *v25 = v24;
    v124 = n;
    *(_QWORD *)&v156 = v156 + 1;
  }
  while ( n < (unsigned __int64)v152 );
  v146 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  DWORD2(v146) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 1504LL) + 168LL))(
                   *(_QWORD *)(a1[1] + 1504LL),
                   (unsigned int)a3[24]);
  v28 = a1[1];
  LOBYTE(v146) = 1;
  DWORD1(v146) = dtype_size;
  if ( SDWORD2(v146) < 0 || dtype_size <= 0 )
    goto LABEL_160;
  v29 = *((_QWORD *)a3 + 7);
  if ( v29 == -1 )
  {
    v53 = a3[6];
    if ( v53 == 1 )
    {
      a3[6] = 2;
    }
    else if ( v53 != 2 )
    {
      goto LABEL_101;
    }
    v125 = -1;
    goto LABEL_112;
  }
  v30 = (__int64)sub_60B30(v28, *((_QWORD *)a3 + 7));
  if ( !v30 )
  {
    v30 = sub_62A50(v28, a2, v29, 1);
    if ( v30 )
      goto LABEL_61;
    goto LABEL_160;
  }
  if ( v29 != *(_QWORD *)(v30 + 32) )
  {
    v31 = *(_QWORD *)(v30 + 48);
    if ( !v31 || v29 != *(_QWORD *)(v31 + 24) )
    {
LABEL_160:
      sub_652F0((__int64 *)(v28 + 496));
      sub_1166E0((__int64)&v146);
      goto LABEL_18;
    }
  }
LABEL_61:
  v32 = *(unsigned int *)(v30 + 72);
  v33 = v156;
  v119 = *(_DWORD *)(v30 + 72);
  if ( !(_QWORD)v156 )
  {
    v81 = v154;
    v79 = v154;
    if ( (_QWORD)v154 == 1 )
    {
      v125 = 0;
      v34 = (__int64)v155;
    }
    else
    {
      v125 = 0;
      v80 = 1;
LABEL_145:
      src = nullptr;
      v163 = 0;
      if ( v80 < v79 )
      {
        v97 = v80;
        do
        {
          v98 = (__int64 *)(v153 + 24 * v97);
          v32 = *v98;
          if ( *v98 )
          {
            v98[1] = 0;
            qfree();
          }
          ++v97;
        }
        while ( v97 < v79 );
      }
      else if ( (unsigned __int64)&src < v153 || (unsigned __int64)&src >= v153 + 24LL * *((_QWORD *)&v154 + 1) )
      {
        if ( *((_QWORD *)&v154 + 1) < v80 )
        {
          v32 = (__int64)&v153;
          v153 = qvector_reserve();
          v81 = v154;
        }
        while ( v81 < v80 )
        {
          v94 = v153 + 24 * v81;
          *(_QWORD *)v94 = 0;
          *(_OWORD *)(v94 + 8) = 0;
          v95 = v163;
          if ( (_QWORD)v163 )
          {
            nd = 8 * v163;
            v96 = (void *)qalloc_or_throw();
            *(_QWORD *)v94 = v96;
            v32 = (__int64)v96;
            *(_QWORD *)(v94 + 16) = v95;
            memcpy(v96, src, nd);
            *(_QWORD *)(v94 + 8) = v95;
          }
          ++v81;
        }
      }
      else
      {
        if ( *((_QWORD *)&v154 + 1) < v80 )
        {
          v32 = (__int64)&v153;
          v153 = qvector_reserve();
          v79 = v154;
        }
        v82 = 24 * v79;
        if ( v79 < v80 )
        {
          do
          {
            ++v79;
            v83 = v82 + v153;
            v82 += 24;
            *(_QWORD *)v83 = 0;
            *(_OWORD *)(v83 + 8) = 0;
          }
          while ( v79 != v80 );
        }
      }
      *(_QWORD *)&v154 = v80;
      v33 = v156;
      v81 = v80;
      v34 = (__int64)v155;
LABEL_153:
      if ( v33 >= v81 )
      {
        if ( v33 != v81 )
          *(_QWORD *)&v156 = v81;
LABEL_156:
        *(_DWORD *)(v34 + 4 * v81 - 4) = v119;
        v84 = a3[6];
        if ( v84 == 1 )
        {
LABEL_111:
          a3[6] = 2;
          goto LABEL_112;
        }
        if ( v84 != 2 )
        {
LABEL_142:
          if ( v125 == -1 )
            goto LABEL_101;
          goto LABEL_69;
        }
LABEL_112:
        v66 = *a3;
        if ( *(_DWORD *)(a1[2] + 72LL) != *a3 )
        {
          if ( !under_debugger )
            sub_37B760(51755);
          goto LABEL_266;
        }
        v67 = *((_QWORD *)a3 + 2);
        v68 = *((_QWORD *)a3 + 1);
        if ( v67 )
          nb = *(_QWORD *)(v67 + 8);
        else
          nb = *(_QWORD *)(v68 + 48);
        v69 = *(_QWORD *)(v68 + 64);
        v70 = *(_DWORD *)(v68 + 72);
        v147 = 0;
        *((_QWORD *)&v163 + 1) = a4;
        v148 = 0;
        v165 = nb;
        *(_QWORD *)&v163 = v69;
        LODWORD(v164) = v70;
        LODWORD(v166) = v66;
        v167 = 0;
        v168 = 0;
        v169 = 0;
        v170 = 0;
        src = &off_4AB040;
        v171 = &v146;
        v172 = 0;
        sub_1B7CE0((const __m128i *)&src);
        v34 = (__int64)&v169;
        sub_5E350(&v147, &v169);
        v136 = v172;
        src = &off_4AB028;
        qfree();
        v71 = v167;
        if ( !v167 )
        {
LABEL_128:
          if ( !v136 )
          {
LABEL_141:
            v32 = v147;
            qfree();
            goto LABEL_142;
          }
          v149 = 0;
          v150 = 0;
          for ( i = sub_5E3E0(&v147, 0); i != (_DWORD)v148; i = sub_5E3E0(&v147, i + 1) )
          {
            if ( *(_DWORD *)(v68 + 72) != i )
            {
              if ( i >= *(_DWORD *)(v69 + 64) )
              {
                if ( !under_debugger )
                  sub_37B760(52719);
                goto LABEL_266;
              }
              for ( j = xrefblk_t_first_to(); j; j = xrefblk_t_next_to() )
              {
                v78 = sub_60B30(v69, (unsigned __int64)src);
                if ( v78 )
                {
                  v137 = v78;
                  if ( !sub_5E3B0(&v147, *((_DWORD *)v78 + 18)) )
                    sub_5DC10(&v149, *((_DWORD *)v137 + 18));
                }
              }
            }
          }
          v166 = 0;
          v165 = 0xFFFFFFFF00000000LL;
          v167 = 0xFFFFFFFF00000000LL;
          v168 = 0;
          v169 = 0xFFFFFFFF00000000LL;
          v170 = 0;
          sub_329320(&src, -1);
          LODWORD(src) = 4;
          sub_116350((char *)&v165, (char *)&v146);
          v99 = HIDWORD(v165);
          v100 = sub_131A80((_QWORD *)v69, SHIDWORD(v165), 1);
          v101 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v99), _mm_cvtsi32_si128(v100)).m128i_u64[0];
          if ( v100 != -1 )
          {
            LOBYTE(v146) = 1;
            *(_QWORD *)((char *)&v146 + 4) = v101;
            sub_11EAC0((__int64)&v169, (unsigned __int8 *)&v146);
            if ( nb )
              v102 = *(_QWORD *)(nb + 16);
            else
              v102 = *(_QWORD *)(v68 + 56);
            if ( v102 )
              v103 = *(_QWORD *)(v102 + 24);
            else
              v103 = *(_QWORD *)(v68 + 32);
            v121 = v102;
            v164 = v103;
            v104 = j__qalloc_or_throw();
            *(_OWORD *)(v104 + 8) = 0;
            *(_QWORD *)(v104 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v104 + 40) = 0;
            *(_QWORD *)(v104 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v104 + 56) = 0;
            *(_QWORD *)(v104 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v104 + 72) = 0;
            sub_11ECE0(v104, (__int64)&src);
            sub_9CAA0(v68, (_QWORD *)v104, v121);
            v34 = 0;
            for ( k = sub_5E3E0(&v149, 0); ; k = sub_5E3E0(&v149, v34) )
            {
              nc = k;
              if ( k == (_DWORD)v150 )
                break;
              if ( k >= *(_DWORD *)(v69 + 64) )
              {
                if ( !under_debugger )
                  sub_37B760(52719);
                goto LABEL_266;
              }
              v106 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(v69 + 528) + 8LL * k) + 56LL);
              v122 = *(_QWORD **)(*(_QWORD *)(v69 + 528) + 8LL * k);
              if ( v106 )
              {
                v164 = *((_QWORD *)v106 + 3);
                if ( (unsigned __int8)sub_327800(*v106, *((_BYTE *)v106 + 64) == 0) )
                {
                  if ( *v106 - 56 <= 1 )
                  {
                    v108 = sub_61A50(v69, *((_QWORD *)v106 + 3), 2);
                    if ( *v106 == 57 )
                      sub_119B60((__int64)v122, (int)v106, (__int64)(v106 + 12), 0);
                    sub_9CD00((__int64)v122, (__int64)v106);
                    sub_AEC00(v122, *((_QWORD *)v106 + 3), *(_DWORD *)(v108 + 72));
                    sub_9CAA0(v108, v106, 0);
                    v109 = (_QWORD *)sub_61A50(v69, *((_QWORD *)v106 + 3), 2);
                    sub_AEC00(v109, *((_QWORD *)v106 + 3), *(_DWORD *)(v122[1] + 72LL));
                    v122 = v109;
                    v106 = nullptr;
                  }
                  else
                  {
                    v106 = *((unsigned int **)v106 + 2);
                  }
                }
              }
              else
              {
                v164 = v122[4];
              }
              v107 = j__qalloc_or_throw();
              *(_OWORD *)(v107 + 8) = 0;
              *(_QWORD *)(v107 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v107 + 40) = 0;
              *(_QWORD *)(v107 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v107 + 56) = 0;
              *(_QWORD *)(v107 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v107 + 72) = 0;
              sub_11ECE0(v107, (__int64)&src);
              sub_9CAA0((__int64)v122, (_QWORD *)v107, (__int64)v106);
              v34 = nc + 1;
            }
            sub_1166E0((__int64)&v169);
            sub_1166E0((__int64)&v167);
            sub_1166E0((__int64)&v165);
            qfree();
            goto LABEL_141;
          }
          if ( !under_debugger )
            sub_37B760(52598);
LABEL_266:
          BUG();
        }
        v72 = *(_QWORD *)v167;
        if ( !v168 )
        {
          *(_QWORD *)v167 = *(_QWORD *)v167 & 3LL | v167 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(v167 + 8) = _mm_unpacklo_epi64((__m128i)v167, (__m128i)v167);
          *(_QWORD *)v167 &= ~1uLL;
          *(_QWORD *)v167 |= 2uLL;
LABEL_126:
          if ( v167 )
            qfree();
          goto LABEL_128;
        }
        v73 = v72 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v72 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        {
LABEL_125:
          *(_QWORD *)v71 = v72 & 3 | v71 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(v167 + 8) = _mm_unpacklo_epi64((__m128i)v167, (__m128i)v167);
          *(_QWORD *)v167 &= ~1uLL;
          *(_QWORD *)v167 |= 2uLL;
          v168 = 0;
          goto LABEL_126;
        }
        v74 = *(__int64 **)(v73 + 8);
        if ( (*(_BYTE *)v74 & 2) != 0 )
        {
          v75 = *(__int64 **)(v73 + 16);
          if ( (*(_BYTE *)v75 & 2) != 0 )
            goto LABEL_239;
        }
        else
        {
          v140 = *(_QWORD *)v167;
          sub_1B2280(v74);
          v75 = *(__int64 **)(v73 + 16);
          v72 = v140;
          if ( (*(_BYTE *)v75 & 2) != 0 )
            goto LABEL_121;
        }
        v141 = v72;
        sub_1B2280(v75);
        v72 = v141;
LABEL_121:
        if ( (*(_BYTE *)v73 & 2) != 0 )
        {
LABEL_122:
          if ( v72 > 3 )
            qfree();
          v71 = v167;
          v72 = *(_QWORD *)v167;
          goto LABEL_125;
        }
LABEL_239:
        if ( *(_QWORD *)(v73 + 32) )
        {
          v142 = v72;
          *(_QWORD *)(v73 + 40) = 0;
          qfree();
          v72 = v142;
        }
        *(_QWORD *)v73 |= 2uLL;
        goto LABEL_122;
      }
    }
    v93 = v34;
    if ( *((_QWORD *)&v156 + 1) < v81 )
    {
      v93 = qvector_reserve();
      v155 = (int *)v93;
      v33 = v156;
    }
    v32 = v93 + 4 * v33;
    memset((void *)v32, 0, 4 * (v81 - v33));
    *(_QWORD *)&v156 = v81;
    v34 = (__int64)v155;
    goto LABEL_156;
  }
  v34 = (__int64)v155;
  v35 = 0;
  v36 = 0;
  while ( (_DWORD)v32 != v155[v36] )
  {
    v36 = ++v35;
    if ( v35 >= (unsigned __int64)v156 )
    {
      v79 = v154;
      v125 = v156;
      v80 = (int)v156 + 1;
      v81 = v154;
      if ( v80 != (_QWORD)v154 )
        goto LABEL_145;
      goto LABEL_153;
    }
  }
  v125 = v35;
  v37 = (__int64 *)(v153 + 24 * v36);
  v32 = *v37;
  if ( *v37 )
  {
    v37[1] = 0;
    qfree();
    *v37 = 0;
    v37[2] = 0;
  }
  v38 = a3[6];
  if ( v38 == 1 )
    goto LABEL_111;
  if ( v38 == 2 )
    goto LABEL_112;
LABEL_69:
  v120 = (_QWORD *)a1[2];
  v126 = &v155[v125];
  if ( !v120[6] )
    goto LABEL_101;
  v39 = v120[8];
  v40 = (unsigned int)*v126;
  if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 64) )
    sub_1B1950(v32, v34);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v40) + 76LL) == 6 )
    goto LABEL_101;
  head = a2;
  do
  {
    na = head;
    head = prev_head();
  }
  while ( head != -1 && get_first_fcref_from() != *((_QWORD *)a3 + 7) );
  v42 = (_QWORD *)v120[7];
  if ( v42[3] < na )
    goto LABEL_101;
  src = nullptr;
  v163 = 0;
  v43 = *(_QWORD *)(v39 + 1504);
  if ( !v42 )
    goto LABEL_101;
  while ( 2 )
  {
    if ( !sub_1181E0(*(unsigned int *)v42) )
      goto LABEL_93;
    if ( *((_BYTE *)v42 + 64) == 1 && !(unsigned __int8)sub_119EE0(v42, v43, 0, v44, v45, v46) )
    {
      if ( *((_BYTE *)v42 + 64) == 1 && *((_DWORD *)v42 + 18) >= *(_DWORD *)(v43 + 68)
        || sub_5E3B0((_QWORD *)(v43 + 104), *((_DWORD *)v42 + 18)) )
      {
        goto LABEL_93;
      }
      v47 = (char *)src + 8 * v163;
      v48 = (8 * (__int64)v163) >> 5;
      if ( v48 > 0 )
      {
        v49 = *((_DWORD *)v42 + 18);
        v50 = (char *)src;
        v51 = (char *)src + 32 * v48;
        while ( 1 )
        {
          if ( v49 == *(_DWORD *)(*(_QWORD *)v50 + 72LL) )
          {
            v51 = v50;
            goto LABEL_90;
          }
          if ( v49 == *(_DWORD *)(*((_QWORD *)v50 + 1) + 72LL) )
            break;
          if ( v49 == *(_DWORD *)(*((_QWORD *)v50 + 2) + 72LL) )
          {
            v51 = v50 + 16;
            goto LABEL_90;
          }
          if ( v49 == *(_DWORD *)(*((_QWORD *)v50 + 3) + 72LL) )
          {
            v51 = v50 + 24;
            goto LABEL_90;
          }
          v50 += 32;
          if ( v51 == v50 )
            goto LABEL_167;
        }
        v51 = v50 + 8;
LABEL_90:
        if ( v47 != v51 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v51 + 68LL) < *((_DWORD *)v42 + 17) )
            *(_QWORD *)v51 = v42;
          goto LABEL_93;
        }
LABEL_172:
        if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
        {
          src = (void *)qvector_reserve();
          v47 = (char *)src + 8 * v163;
        }
        *(_QWORD *)v47 = v42;
        *(_QWORD *)&v163 = v163 + 1;
LABEL_93:
        v42 = (_QWORD *)v42[2];
        if ( v42 && v42[3] >= na )
          continue;
        if ( (_QWORD)v163 )
        {
          v110 = sub_32B470(v39, na);
          v139 = sub_61A50(v39, v110, 2);
          sub_AEC00((_QWORD *)v139, *(_QWORD *)(v139 + 32), *v126);
          *v126 = *(_DWORD *)(v139 + 72);
          v52 = src;
          v143 = (char *)src + 8 * v163;
          if ( src != v143 )
          {
            v127 = (char *)src;
            do
            {
              v114 = *(_QWORD *)v127;
              v144 = *(_DWORD *)(*(_QWORD *)v127 + 72LL);
              if ( v144 == DWORD2(v146) && (unsigned __int8)netnode_charval() != 3 )
              {
                v115 = sub_60B30(v39, *((_QWORD *)a3 + 8));
                if ( v115 )
                {
                  if ( v115[6] )
                  {
                    v116 = v115[7];
                    if ( *(_DWORD *)v116 == 42 )
                    {
                      v117 = *(_QWORD *)(v116 + 16);
                      if ( v117 )
                      {
                        while ( *(_QWORD *)(v117 + 24) >= *((_QWORD *)a3 + 8) )
                        {
                          if ( (unsigned int)(*(_DWORD *)v117 - 29) <= 0xC
                            && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v39 + 1504) + 240LL))(
                                 *(_QWORD *)(v39 + 1504),
                                 (unsigned int)a3[24]) == 2 )
                          {
                            v118 = DWORD1(v146);
                            v138 = v5;
                            if ( *(_DWORD *)(v114 + 68) >= SDWORD1(v146) )
                              v118 = *(_DWORD *)(v114 + 68);
                            v111 = v118;
                            goto LABEL_248;
                          }
                          v117 = *(_QWORD *)(v117 + 16);
                          if ( !v117 )
                            break;
                        }
                      }
                    }
                  }
                }
              }
              v138 = 0;
              v111 = *(_DWORD *)(v114 + 68);
LABEL_248:
              v145 = sub_131A80((_QWORD *)v39, v111, 1);
              if ( v145 == -1 )
                break;
              v112 = j__qalloc_or_throw();
              *(_QWORD *)(v112 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v112 + 40) = 0;
              *(_QWORD *)(v112 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v112 + 56) = 0;
              *(_QWORD *)(v112 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v112 + 72) = 0;
              sub_329320(v112, na);
              *(_BYTE *)(v112 + 32) = 1;
              *(_BYTE *)(v112 + 64) = 1;
              *(_DWORD *)v112 = 4;
              *(_DWORD *)(v112 + 72) = v145;
              *(_DWORD *)(v112 + 68) = v111;
              *(_QWORD *)(v112 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v111), _mm_cvtsi32_si128(v144)).m128i_u64[0];
              v42 = sub_9CAA0((__int64)v120, (_QWORD *)v112, (__int64)v42);
              if ( v138 )
                sub_11EAC0((__int64)&v146, (unsigned __int8 *)(v112 + 64));
              v113 = j__qalloc_or_throw();
              *(_QWORD *)(v113 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v113 + 40) = 0;
              *(_QWORD *)(v113 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v113 + 56) = 0;
              *(_QWORD *)(v113 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v113 + 72) = 0;
              *(_OWORD *)(v113 + 8) = 0;
              sub_11ECE0(v113, v112);
              *(_QWORD *)(v113 + 24) = *(_QWORD *)(v139 + 32);
              sub_116350((char *)(v113 + 64), (char *)(v113 + 32));
              sub_9CAA0(v139, (_QWORD *)v113, 0);
              v127 += 8;
            }
            while ( v143 != v127 );
            goto LABEL_96;
          }
        }
        else
        {
LABEL_96:
          v52 = src;
        }
        if ( !v52 )
          goto LABEL_101;
        goto LABEL_98;
      }
      v51 = (char *)src;
LABEL_167:
      v86 = v47 - v51;
      if ( v47 - v51 == 16 )
      {
        v87 = *((_DWORD *)v42 + 18);
      }
      else
      {
        if ( v86 != 24 )
        {
          if ( v86 != 8 )
            goto LABEL_172;
          v87 = *((_DWORD *)v42 + 18);
          goto LABEL_171;
        }
        v87 = *((_DWORD *)v42 + 18);
        if ( v87 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
          goto LABEL_90;
        v51 += 8;
      }
      if ( v87 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
        goto LABEL_90;
      v51 += 8;
LABEL_171:
      if ( *(_DWORD *)(*(_QWORD *)v51 + 72LL) == v87 )
        goto LABEL_90;
      goto LABEL_172;
    }
    break;
  }
  if ( src )
  {
LABEL_98:
    *(_QWORD *)&v163 = 0;
    qfree();
  }
LABEL_101:
  if ( (_QWORD)v154 == 1 )
  {
    sub_AEC00((_QWORD *)a1[2], a2, *v155);
  }
  else
  {
    if ( (_QWORD)v154 != 2 )
      goto LABEL_106;
    v54 = (__int64 **)v153;
    v55 = *(_QWORD *)(v153 + 8);
    if ( !v55 )
    {
      v55 = *(_QWORD *)(v153 + 32);
      v56 = 1;
      v54 = (__int64 **)(v153 + 24);
      v57 = 0;
      goto LABEL_105;
    }
    v56 = *(_QWORD *)(v153 + 32);
    if ( v56 )
      goto LABEL_106;
    v57 = 1;
LABEL_105:
    if ( v55 == 1 )
    {
      v88 = v155[v57];
      v89 = v155[v56];
      v90 = *(_DWORD *)(a1[2] + 72LL) + 1;
      if ( v88 == v90 )
      {
        v91 = 44;
      }
      else
      {
        if ( v90 != v89 )
          goto LABEL_106;
        v89 = v88;
        v91 = 43;
      }
      v149 = 0xFFFFFFFF00000007LL;
      v150 = v89;
      src = (void *)0xFFFFFFFF00000000LL;
      *(_QWORD *)&v163 = 0;
      sub_11A350((__int64)&src, *(_QWORD *)(a1[100] + 112LL), **v54, SDWORD1(v146), a2, 0);
      sub_1CF350((_DWORD)a1, v91, (unsigned int)&v146, (unsigned int)&src, (unsigned int)&v149, v92);
      sub_1166E0((__int64)&src);
      sub_1166E0((__int64)&v149);
    }
    else
    {
LABEL_106:
      v58 = j__qalloc_or_throw();
      *(_QWORD *)v58 = 0;
      v59 = v153;
      *(_OWORD *)(v58 + 8) = 0;
      *(_QWORD *)v58 = v59;
      v60 = v154;
      *(_QWORD *)(v58 + 24) = 0;
      *(_QWORD *)(v58 + 8) = v60;
      v61 = *((_QWORD *)&v154 + 1);
      *(_OWORD *)(v58 + 32) = 0;
      *(_QWORD *)(v58 + 16) = v61;
      v153 = 0;
      *(_QWORD *)(v58 + 24) = v155;
      v155 = nullptr;
      *(_QWORD *)(v58 + 32) = v156;
      v154 = 0;
      *(_QWORD *)(v58 + 40) = *((_QWORD *)&v156 + 1);
      src = (void *)-4294967284LL;
      *(_QWORD *)&v163 = v58;
      v156 = 0;
      sub_1CF350((_DWORD)a1, 53, (unsigned int)&v146, (unsigned int)&src, 0, v62);
      sub_1166E0((__int64)&src);
    }
  }
  v14 = 0;
  sub_1166E0((__int64)&v146);
  sub_1B23B0(v158);
LABEL_20:
  if ( v151 )
  {
    *(_QWORD *)&v152 = 0;
    qfree();
  }
  if ( v155 )
  {
    *(_QWORD *)&v156 = 0;
    qfree();
  }
  v15 = v153;
  if ( v153 )
  {
    v16 = v154;
    if ( (_QWORD)v154 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 24 * v17);
        if ( *v18 )
        {
          v18[1] = 0;
          qfree();
          v15 = v153;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v154 = 0;
    qfree();
  }
  return v14;
}

