__int64 __fastcall sub_42E80(__int64 a1, __int64 a2, _QWORD *a3, char a4, char a5)
{
  int v5; // ebx
  unsigned __int64 p_src; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD *v13; // r13
  __int64 v14; // rax
  char *v15; // r12
  _BOOL8 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdi
  __int64 v27; // rax
  const __m128i *v28; // r15
  char *v29; // r12
  size_t v30; // rax
  char *v31; // r8
  size_t v32; // r14
  __int8 v33; // al
  unsigned __int8 v34; // al
  size_t v35; // r14
  char *v36; // rax
  __int64 v37; // r12
  int *v38; // r14
  __int64 v39; // rax
  __m128i v40; // xmm0
  char *v41; // rax
  int *v42; // rbx
  char *v43; // rsi
  int *v44; // r15
  const char *v45; // rdi
  int v46; // eax
  int *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // rdi
  __int64 v51; // r15
  char *v52; // rax
  __m128i v53; // xmm0
  _QWORD *v54; // rax
  __int64 v55; // rdx
  void *v56; // rdi
  size_t v57; // rdx
  unsigned __int64 v58; // r14
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // r12
  unsigned __int64 *v62; // r12
  int v63; // r14d
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  char *v69; // rbx
  char *v70; // r14
  _QWORD *v71; // rax
  int *v72; // r15
  unsigned __int64 v73; // rbx
  __int64 v74; // r14
  size_t v75; // r15
  void *v76; // rax
  char v77; // al
  __int8 v78; // dl
  size_t v79; // rax
  __int8 v80; // dl
  char *v81; // r8
  char *v82; // rcx
  bool v83; // al
  __int16 v84; // si
  __int64 v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ebx
  __int64 v92; // r14
  unsigned __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // rbx
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r12
  __int64 v99; // rbx
  _QWORD *v100; // rax
  const char *v102; // rsi
  char *v103; // rax
  __int64 v104; // rax
  void *v105; // rdi
  char *v106; // rdx
  __int64 v107; // rax
  int v108; // r12d
  __int64 v109; // r15
  char v110; // [rsp+0h] [rbp-290h]
  int v111; // [rsp+1Ch] [rbp-274h]
  int v112; // [rsp+20h] [rbp-270h]
  __int64 v115; // [rsp+30h] [rbp-260h] BYREF
  char *v116; // [rsp+38h] [rbp-258h]
  char *v117; // [rsp+40h] [rbp-250h]
  __int64 v118; // [rsp+48h] [rbp-248h]
  _QWORD *v119; // [rsp+50h] [rbp-240h]
  __int64 v120; // [rsp+58h] [rbp-238h]
  int *v121; // [rsp+60h] [rbp-230h]
  __int64 v122; // [rsp+68h] [rbp-228h]
  char *s2; // [rsp+70h] [rbp-220h]
  unsigned __int8 (__fastcall **v124)(__int64, unsigned __int64); // [rsp+78h] [rbp-218h]
  __int64 v125; // [rsp+80h] [rbp-210h]
  __int64 v126; // [rsp+88h] [rbp-208h]
  _QWORD v127[2]; // [rsp+90h] [rbp-200h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-1F0h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-1E8h]
  unsigned __int64 v130; // [rsp+C0h] [rbp-1D0h] BYREF
  __int128 v131; // [rsp+C8h] [rbp-1C8h]
  void *dest; // [rsp+E0h] [rbp-1B0h] BYREF
  __int128 v133; // [rsp+E8h] [rbp-1A8h]
  bool v134; // [rsp+F8h] [rbp-198h]
  __int8 v135; // [rsp+F9h] [rbp-197h]
  void *src; // [rsp+100h] [rbp-190h] BYREF
  __m128i n[2]; // [rsp+108h] [rbp-188h] BYREF
  char v138[8]; // [rsp+130h] [rbp-160h] BYREF
  int v139; // [rsp+138h] [rbp-158h] BYREF
  _QWORD *v140; // [rsp+140h] [rbp-150h]
  int *v141; // [rsp+148h] [rbp-148h]
  int *v142; // [rsp+150h] [rbp-140h]
  __int64 v143; // [rsp+158h] [rbp-138h]
  __int64 v144; // [rsp+160h] [rbp-130h] BYREF
  int v145; // [rsp+168h] [rbp-128h] BYREF
  int *v146; // [rsp+170h] [rbp-120h]
  int *v147; // [rsp+178h] [rbp-118h]
  int *v148; // [rsp+180h] [rbp-110h]
  __int64 v149; // [rsp+188h] [rbp-108h]
  __int128 v150; // [rsp+190h] [rbp-100h]
  __int128 v151; // [rsp+1A0h] [rbp-F0h]
  __int64 v152; // [rsp+1B0h] [rbp-E0h]
  __int64 v153; // [rsp+1B8h] [rbp-D8h]
  __int64 selector; // [rsp+1C0h] [rbp-D0h]
  __int128 v155; // [rsp+1C8h] [rbp-C8h]
  __int128 v156; // [rsp+1D8h] [rbp-B8h]
  __int128 v157; // [rsp+1E8h] [rbp-A8h]
  __int128 v158; // [rsp+1F8h] [rbp-98h]
  __int128 v159; // [rsp+208h] [rbp-88h]
  __int128 v160; // [rsp+218h] [rbp-78h]
  __int128 v161; // [rsp+228h] [rbp-68h]
  __int128 v162; // [rsp+238h] [rbp-58h]
  unsigned __int64 v163; // [rsp+248h] [rbp-48h]
  unsigned __int64 v164; // [rsp+258h] [rbp-38h]

  v120 = a1;
  v118 = a2;
  v119 = a3;
  v164 = __readfsqword(0x28u);
  v111 = 4;
  if ( *(_BYTE *)(a1 + 13692) )
    v111 = 8;
  v141 = &v139;
  v142 = &v139;
  v139 = 0;
  v140 = nullptr;
  v143 = 0;
  v127[0] = -1;
  netnode_check();
  v128 = 0;
  v129 = 0;
  v126 = *(_QWORD *)(v118 + 312);
  v5 = v126 + 1;
  if ( (int)v126 + 1 < 256 )
    v5 = 256;
  p_src = 0;
  v128 = qvector_reserve();
  if ( (unsigned __int64)v129 < v5 )
  {
    v7 = v129 + 1;
    v8 = 24 * v129;
    v9 = 24 * v129 + v128;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    if ( v7 < v5 )
    {
      v10 = v8 + 24;
      do
      {
        ++v7;
        v11 = v10 + v128;
        v10 += 24;
        *(_QWORD *)v11 = 0;
        *(_OWORD *)(v11 + 8) = 0;
      }
      while ( v5 != v7 );
    }
  }
  *(_QWORD *)&v129 = v5;
  v121 = &v145;
  v147 = &v145;
  v148 = &v145;
  v130 = 0;
  v12 = v119[1] == 0;
  v145 = 0;
  v146 = nullptr;
  v149 = 0;
  v131 = 0;
  if ( v12 )
  {
    v112 = 0;
    goto LABEL_132;
  }
  v126 = 0;
  v122 = 0;
  v112 = 0;
  while ( 2 )
  {
    v13 = (_QWORD *)(*v119 + 40 * v122);
    v14 = v13[1];
    v15 = (char *)(v14 + v126);
    v125 = v14;
    v16 = __CFADD__(v14, v126);
    if ( v15 == (char *)v126 )
      goto LABEL_23;
    src = nullptr;
    n[0] = 0;
    if ( v16 )
    {
      v69 = v15;
      v70 = (char *)v126;
      do
      {
        v71 = (_QWORD *)(v130 + 24LL * (_QWORD)v69);
        if ( *v71 )
        {
          v71[1] = 0;
          qfree();
        }
        ++v69;
        v20 = (unsigned __int64)v70;
      }
      while ( v69 < v70 );
      goto LABEL_21;
    }
    p_src = v130;
    if ( (unsigned __int64)&src < v130 || (unsigned __int64)&src >= v130 + 24LL * *((_QWORD *)&v131 + 1) )
    {
      v73 = v126;
      if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)v15 )
      {
        v130 = qvector_reserve();
        v73 = v131;
      }
      while ( v73 < (unsigned __int64)v15 )
      {
        v74 = v130 + 24 * v73;
        *(_QWORD *)v74 = 0;
        *(_OWORD *)(v74 + 8) = 0;
        v75 = n[0].m128i_i64[0];
        if ( n[0].m128i_i64[0] )
        {
          v76 = (void *)qalloc_or_throw();
          *(_QWORD *)v74 = v76;
          *(_QWORD *)(v74 + 16) = v75;
          p_src = (unsigned __int64)src;
          memcpy(v76, src, v75);
          *(_QWORD *)(v74 + 8) = v75;
        }
        ++v73;
      }
      goto LABEL_22;
    }
    v17 = v126;
    if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)v15 )
    {
      v130 = qvector_reserve();
      v17 = v131;
    }
    if ( v17 < (unsigned __int64)v15 )
    {
      p_src = v126;
      v18 = 24 * v17;
      do
      {
        ++v17;
        v19 = v18 + v130;
        v18 += 24;
        *(_QWORD *)v19 = 0;
        *(_OWORD *)(v19 + 8) = 0;
      }
      while ( v15 != (char *)v17 );
      v20 = p_src;
LABEL_21:
      v126 = v20;
    }
LABEL_22:
    *(_QWORD *)&v131 = v15;
LABEL_23:
    if ( !v125 )
      goto LABEL_66;
    v21 = 0;
    v126 *= 24;
    v124 = (unsigned __int8 (__fastcall **)(__int64, unsigned __int64))&callui;
    do
    {
      if ( (*v124)(27, p_src) )
        sub_1A260((__int64)"Cancelled by user", p_src, v22, v23, v24, v25, v110);
      v26 = (_QWORD *)v13[3];
      if ( !v26 )
        goto LABEL_65;
      v27 = v26[2];
      if ( !v27 )
        goto LABEL_65;
      v28 = (const __m128i *)(*v13 + 16 * v21);
      p_src = v28->m128i_u32[0];
      if ( p_src >= v27 - 1 )
        goto LABEL_65;
      v29 = (char *)(*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      if ( !v29 || *v28 == 0 )
        goto LABEL_65;
      s2 = (char *)(v130 + v126);
      v30 = strlen(v29);
      v31 = s2;
      v32 = v30;
      if ( v30 )
      {
        v56 = *(void **)s2;
        v57 = v30 + 1;
        if ( *((_QWORD *)s2 + 2) < v30 + 1 )
        {
          v117 = (char *)(v30 + 1);
          v67 = qvector_reserve();
          v31 = s2;
          v57 = (size_t)v117;
          v56 = (void *)v67;
          *(_QWORD *)s2 = v67;
        }
        *((_QWORD *)v31 + 1) = v57;
        p_src = (unsigned __int64)v29;
        s2 = v31;
        memmove(v56, v29, v32);
        *(_BYTE *)(*(_QWORD *)s2 + v32) = 0;
      }
      else
      {
        *((_QWORD *)s2 + 1) = 0;
      }
      v33 = v28->m128i_i8[4];
      if ( (unsigned __int8)v33 > 0x1Fu )
        goto LABEL_65;
      v34 = v33 & 0xE;
      if ( v34 == 10 )
        goto LABEL_65;
      if ( v34 == 12 )
        goto LABEL_80;
      if ( v34 > 0xCu )
      {
        if ( v34 == 14 )
        {
          p_src = v120;
          v58 = *(_QWORD *)(*(_QWORD *)(v120 + 8) + 16LL) & (v28->m128i_i64[1] + *(_QWORD *)(v118 + 216));
          v59 = *(_QWORD *)(v118 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v118 + 8) + 16LL) == v59
            || v59 == -1
            || *(_QWORD *)(v118 + 184)
            && (p_src = *(_QWORD *)(*(_QWORD *)(v120 + 8) + 16LL) & (v28->m128i_i64[1] + *(_QWORD *)(v118 + 216)),
                rangeset_t_find_range()) )
          {
            if ( *v29 && !(unsigned __int8)sub_11500(v29) )
            {
              LOBYTE(s2) = 0;
              dest = nullptr;
              v133 = 0;
              v77 = segtype();
              v78 = (char)s2;
              if ( v77 == 2 )
                v78 = strncmp(v29, "__dtrace_probe$", 0xFu) != 0;
              v135 = v78;
              LOBYTE(s2) = v78;
              v79 = strlen(v29);
              v80 = (char)s2;
              v81 = (char *)v79;
              v82 = (char *)v79;
              if ( v79 )
              {
                v105 = dest;
                v106 = (char *)(v79 + 1);
                if ( *((_QWORD *)&v133 + 1) < v79 + 1 )
                {
                  v117 = (char *)v79;
                  s2 = (char *)(v79 + 1);
                  dest = (void *)qvector_reserve();
                  v81 = v117;
                  v105 = dest;
                  v106 = s2;
                }
                *(_QWORD *)&v133 = v106;
                s2 = v81;
                memmove(v105, v29, (size_t)v81);
                s2[(_QWORD)dest] = 0;
                v80 = v135;
                v82 = (char *)v133;
              }
              else
              {
                *(_QWORD *)&v133 = 0;
              }
              v83 = (v28->m128i_i8[4] & 0x11) == 1;
              v134 = v83;
              if ( v80 && (*(_BYTE *)(*(_QWORD *)v120 + 12LL) & 8) != 0 )
              {
                v84 = v28->m128i_i16[3];
                memset(n, 0, 24);
                if ( (v84 & 0xF) == 8 )
                  v58 |= 1u;
                src = (void *)v58;
                if ( v82 )
                {
                  s2 = v82;
                  n[0].m128i_i64[0] = qalloc_or_throw();
                  n[1].m128i_i64[0] = (__int64)s2;
                  memcpy((void *)n[0].m128i_i64[0], dest, (size_t)s2);
                  v83 = v134;
                  v80 = v135;
                  n[0].m128i_i64[1] = (__int64)s2;
                }
                p_src = (unsigned __int64)&src;
                n[1].m128i_i8[8] = v83;
                n[1].m128i_i8[9] = v80;
                sub_41540((__int64)&v138, (const __m128i *)&src);
                if ( n[0].m128i_i64[0] )
                  qfree();
                v58 &= ~1uLL;
              }
              else
              {
                src = (void *)v58;
                memset(n, 0, 24);
                if ( v82 )
                {
                  s2 = v82;
                  n[0].m128i_i64[0] = qalloc_or_throw();
                  n[1].m128i_i64[0] = (__int64)s2;
                  memcpy((void *)n[0].m128i_i64[0], dest, (size_t)s2);
                  v83 = v134;
                  v80 = v135;
                  n[0].m128i_i64[1] = (__int64)s2;
                }
                p_src = (unsigned __int64)&src;
                n[1].m128i_i8[8] = v83;
                n[1].m128i_i8[9] = v80;
                sub_41540((__int64)&v138, (const __m128i *)&src);
                if ( n[0].m128i_i64[0] )
                  qfree();
              }
              if ( dest )
              {
                *(_QWORD *)&v133 = 0;
                qfree();
              }
            }
            if ( !v122 )
            {
              p_src = v21;
              dest = (void *)v58;
              netnode_supset();
            }
          }
        }
        goto LABEL_65;
      }
      if ( !v34 )
      {
LABEL_80:
        if ( a4 )
        {
          v60 = v28->m128i_u8[7];
          ++v112;
          if ( (unsigned __int16)(v60 - 254) > 1u && v28->m128i_i8[7] && *(_QWORD *)(v118 + 312) < v60 )
            v61 = 0;
          else
            v61 = 24 * v60;
          v62 = (unsigned __int64 *)(v128 + v61);
          LODWORD(src) = v21;
          v63 = v21;
          v64 = v62[1];
          v65 = *v62;
          v66 = v62[2];
          p_src = v64 + 1;
          if ( (unsigned __int64)&src < *v62 || (unsigned __int64)&src >= v65 + 4 * v66 )
          {
            if ( v66 < p_src )
            {
              p_src = *v62;
              v68 = qvector_reserve();
              *v62 = v68;
              v65 = v68;
              v63 = (int)src;
              v64 = v62[1];
            }
          }
          else if ( v66 < p_src )
          {
            p_src = *v62;
            v104 = qvector_reserve();
            *v62 = v104;
            v65 = v104;
            v64 = v62[1];
          }
          *(_DWORD *)(v65 + 4 * v64) = v63;
          ++v62[1];
        }
        goto LABEL_65;
      }
      if ( v34 != 2 )
        goto LABEL_65;
      dest = nullptr;
      v133 = 0;
      v35 = strlen(v29);
      s2 = (char *)(v35 + 1);
      dest = (void *)qvector_reserve();
      *(_QWORD *)&v133 = s2;
      memmove(dest, v29, v35);
      *((_BYTE *)dest + v35) = 0;
      v36 = (char *)dest;
      v37 = v133;
      v38 = v121;
      dest = nullptr;
      s2 = v36;
      v39 = *((_QWORD *)&v133 + 1);
      v133 = 0;
      v40 = _mm_loadu_si128(v28);
      v115 = v39;
      n[1] = v40;
      if ( !v146 )
        goto LABEL_59;
      v41 = (char *)s1;
      if ( v37 )
        v41 = s2;
      v117 = (char *)v21;
      v38 = v121;
      v42 = v146;
      v116 = (char *)v126;
      v126 = (__int64)v41;
      while ( 1 )
      {
        v48 = *((_QWORD *)v42 + 5);
        if ( !v37 )
          break;
        if ( v48 )
          goto LABEL_52;
        v43 = s2;
        v44 = v42;
        v45 = s1;
LABEL_45:
        v46 = strcmp(v45, v43);
        v47 = *((int **)v42 + 2);
        v42 = *((int **)v42 + 3);
        if ( v46 >= 0 )
        {
          v38 = v44;
          v42 = v47;
        }
        if ( !v42 )
        {
          v21 = (unsigned __int64)v117;
          v126 = (__int64)v116;
          goto LABEL_54;
        }
      }
      if ( v48 )
      {
LABEL_52:
        v45 = *((const char **)v42 + 4);
        v43 = (char *)v126;
        v44 = v42;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v49 = *((_QWORD *)v42 + 2);
        if ( !v49 )
          break;
        v38 = v42;
        v42 = *((int **)v42 + 2);
        if ( *(_QWORD *)(v49 + 40) )
          goto LABEL_52;
      }
      v72 = v42;
      v21 = (unsigned __int64)v117;
      v38 = v72;
      v126 = (__int64)v116;
LABEL_54:
      if ( v38 == v121 )
        goto LABEL_59;
      if ( *((_QWORD *)v38 + 5) )
      {
        p_src = *((_QWORD *)v38 + 4);
        v50 = (char *)s1;
        if ( v37 )
          goto LABEL_57;
LABEL_58:
        if ( strcmp(v50, (const char *)p_src) < 0 )
        {
LABEL_59:
          v51 = operator new(0x48u);
          v52 = s2;
          p_src = (unsigned __int64)v38;
          *(__m128 *)(v51 + 40) = _mm_loadh_ps((const double *)&v115);
          v53 = _mm_loadu_si128(&n[1]);
          *(_QWORD *)(v51 + 32) = v52;
          *(__m128i *)(v51 + 56) = v53;
          v54 = sub_42CB0(&v144, v38, v51 + 32);
          if ( v55 )
          {
            if ( !v54 && (int *)v55 != v121 )
            {
              v102 = s1;
              if ( *(_QWORD *)(v55 + 40) )
                v102 = *(const char **)(v55 + 32);
              v103 = (char *)s1;
              if ( v37 )
                v103 = s2;
              v117 = (char *)v55;
              strcmp(v103, v102);
            }
            p_src = v51;
            std::_Rb_tree_insert_and_rebalance();
            ++v149;
          }
          else if ( v51 )
          {
            if ( s2 )
            {
              *(_QWORD *)(v51 + 40) = 0;
              qfree();
            }
            p_src = 72;
            operator delete((void *)v51, 0x48u);
          }
          goto LABEL_63;
        }
      }
      else
      {
        p_src = (unsigned __int64)s1;
        if ( v37 )
        {
LABEL_57:
          v50 = s2;
          goto LABEL_58;
        }
      }
      if ( s2 )
        qfree();
LABEL_63:
      if ( dest )
      {
        *(_QWORD *)&v133 = 0;
        qfree();
      }
LABEL_65:
      v126 += 24;
      ++v21;
    }
    while ( v125 != v21 );
LABEL_66:
    if ( (unsigned __int64)++v122 < v119[1] )
    {
      v126 = v131;
      continue;
    }
    break;
  }
LABEL_132:
  v85 = (__int64)v141;
  if ( v141 != &v139 )
  {
    v124 = (unsigned __int8 (__fastcall **)(__int64, unsigned __int64))&callui;
    do
    {
      v86 = (__int64)v124;
      if ( ((unsigned __int8 (__fastcall *)(__int64))*v124)(27) )
        sub_1A260((__int64)"Cancelled by user", v86, v87, v88, v89, v90, v110);
      if ( (*(_BYTE *)(*(_QWORD *)v120 + 12LL) & 8) != 0 && *(_BYTE *)(v85 + 65) )
        sub_1A010();
      if ( *(_BYTE *)(v85 + 64) && a5 )
      {
        add_entry();
      }
      else
      {
        set_name();
        if ( *(_BYTE *)(v85 + 65) )
        {
          auto_mark_range();
          auto_mark_range();
        }
      }
      v85 = std::_Rb_tree_increment();
    }
    while ( (int *)v85 != &v139 );
  }
  setinf();
  v91 = v149;
  if ( (_DWORD)v149 && (*(_BYTE *)(v118 + 364) & 0x50) == 0 && (*(_BYTE *)(v120 + 13689) & 8) == 0 )
  {
    v152 = 0;
    v150 = 0;
    v151 = 0;
    v153 = 0;
    selector = 0;
    v163 = 0xFFFFFFFF00000000LL;
    v155 = -1;
    v156 = -1;
    v157 = -1;
    v158 = -1;
    v159 = -1;
    v160 = -1;
    v161 = -1;
    v162 = -1;
    v107 = getinf();
    LOBYTE(v163) = 10;
    BYTE2(v153) = 4;
    *(_QWORD *)&v150 = (v107 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    LOWORD(v153) = 515;
    *((_QWORD *)&v150 + 1) = v150 + v91 * v111;
    LOBYTE(v126) = *(_BYTE *)(v120 + 13692);
    BYTE3(v153) = v126 + 1;
    selector = allocate_selector();
    sub_1CE50((__int64 *)&src, v118);
    sub_18750((__int64 *)&dest, "ABS", (__int64)&src);
    if ( src )
    {
      n[0].m128i_i64[0] = 0;
      qfree();
    }
    add_segm_ex();
    v108 = 0;
    v109 = v150;
    if ( v147 != v121 )
    {
      while ( 1 )
      {
        set_name();
        if ( *(_BYTE *)(v120 + 13692) )
          put_qword();
        else
          put_dword();
        v127[1] = v109;
        netnode_supset();
        v109 += v111;
        if ( (int *)std::_Rb_tree_increment() == v121 )
          break;
        ++v108;
      }
    }
    if ( dest )
    {
      *(_QWORD *)&v133 = 0;
      qfree();
    }
  }
  sub_418A0(v120, v118, v112, v111, &v128, &v130, (__int64)v127, "UNDEF");
  v92 = v127[0];
  sub_14EA0(v146);
  v93 = v130;
  if ( v130 )
  {
    v94 = v131;
    if ( (_QWORD)v131 )
    {
      v95 = 0;
      do
      {
        v96 = (_QWORD *)(v93 + 24 * v95);
        if ( *v96 )
        {
          v96[1] = 0;
          qfree();
          v93 = v130;
        }
        ++v95;
      }
      while ( v94 != v95 );
    }
    *(_QWORD *)&v131 = 0;
    qfree();
  }
  v97 = v128;
  if ( v128 )
  {
    v98 = v129;
    if ( (_QWORD)v129 )
    {
      v99 = 0;
      do
      {
        v100 = (_QWORD *)(v97 + 24 * v99);
        if ( *v100 )
        {
          v100[1] = 0;
          qfree();
          v97 = v128;
        }
        ++v99;
      }
      while ( v98 != v99 );
    }
    *(_QWORD *)&v129 = 0;
    qfree();
  }
  sub_15160(v140);
  return v92;
}

