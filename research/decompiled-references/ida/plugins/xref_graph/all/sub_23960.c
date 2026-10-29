__int64 __fastcall sub_23960(__int64 a1, volatile signed __int32 **a2, __int64 a3, int a4, int a5, unsigned __int64 a6)
{
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  volatile signed __int32 **v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char *v18; // r15
  int *v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // r12
  _OWORD *v22; // rcx
  volatile signed __int32 **v23; // rsi
  __int64 v24; // rax
  volatile signed __int32 *v25; // r14
  __int64 v26; // rdx
  __int64 *v27; // rcx
  size_t v28; // rdx
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  char *v33; // r14
  __int64 v34; // rax
  void ***v35; // rax
  __m128i v36; // xmm2
  __int64 v37; // rdi
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 **v39; // r12
  _QWORD *v40; // rbp
  int *v41; // rsi
  const __m128i *v42; // rdi
  __m128i *v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // rcx
  __m128i *v46; // rdx
  __m128i *v47; // rcx
  __int64 v48; // rdx
  volatile signed __int32 *v49; // rbp
  __int64 v50; // r14
  __int64 v51; // rbx
  _BOOL8 v52; // rdi
  __int64 v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // r12
  __int64 *v56; // rdx
  __int64 *v57; // r13
  __int64 v58; // rax
  void *v59; // rbp
  volatile signed __int32 *v60; // rax
  int *v61; // rsi
  const __m128i *v62; // rdi
  __m128i *v63; // rax
  __m128i *v64; // rdx
  __m128i *v65; // rcx
  __m128i *v66; // rdx
  __m128i *v67; // rcx
  __int64 v68; // rdx
  void **v69; // rax
  char *v70; // rbp
  char *v71; // rbx
  _QWORD *v72; // r12
  _BOOL8 v73; // rdi
  char *v74; // r14
  __int64 v75; // rax
  _QWORD *v76; // r15
  __int64 *v77; // rdx
  __int64 *v78; // r13
  __int64 v79; // rax
  _QWORD *v80; // rdi
  __int64 v81; // rax
  __m128i *v82; // rdx
  bool v84; // zf
  __m128i *v85; // rax
  __m128i *v86; // rcx
  void *v87; // rbx
  void *v88; // rbp
  __int64 v89; // rbx
  void *v90; // rdi
  void *v91; // rbp
  __int64 v92; // rbx
  void *v93; // rdi
  _QWORD *v94; // rax
  _QWORD *v95; // rbx
  volatile signed __int32 *v96; // rax
  __int64 v97; // rax
  void *v98; // rbp
  __int64 v99; // rbx
  const __m128i *v100; // rdi
  __m128i *v101; // rax
  __m128i *v102; // rdx
  __m128i *v103; // rcx
  __m128i *v104; // rdx
  __m128i *v105; // rcx
  __int64 v106; // rdx
  volatile signed __int32 *v107; // rbp
  __int64 v108; // rbx
  void *v109; // rdi
  void *v110; // rbp
  int v112; // [rsp+14h] [rbp-14Ch]
  __m128i v113; // [rsp+18h] [rbp-148h] BYREF
  void **v114; // [rsp+28h] [rbp-138h]
  __int64 *v115; // [rsp+30h] [rbp-130h]
  unsigned int v116; // [rsp+38h] [rbp-128h]
  int v117; // [rsp+3Ch] [rbp-124h]
  unsigned __int64 v118; // [rsp+40h] [rbp-120h]
  volatile signed __int32 **v119; // [rsp+48h] [rbp-118h]
  _OWORD *v120; // [rsp+50h] [rbp-110h]
  __int64 v121; // [rsp+58h] [rbp-108h] BYREF
  volatile signed __int32 **v122; // [rsp+60h] [rbp-100h] BYREF
  void *v123; // [rsp+68h] [rbp-F8h] BYREF
  void *v124; // [rsp+70h] [rbp-F0h] BYREF
  void *src[2]; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v126; // [rsp+88h] [rbp-D8h]
  char v127; // [rsp+98h] [rbp-C8h] BYREF
  int v128; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i *v129; // [rsp+A8h] [rbp-B8h]
  __m128i *v130; // [rsp+B0h] [rbp-B0h]
  __m128i *v131; // [rsp+B8h] [rbp-A8h]
  __int64 v132; // [rsp+C0h] [rbp-A0h]
  __int64 v133; // [rsp+C8h] [rbp-98h] BYREF
  int v134; // [rsp+D0h] [rbp-90h] BYREF
  __m128i *v135; // [rsp+D8h] [rbp-88h]
  __m128i *v136; // [rsp+E0h] [rbp-80h]
  __m128i *v137; // [rsp+E8h] [rbp-78h]
  __int64 v138; // [rsp+F0h] [rbp-70h]
  __int128 v139; // [rsp+F8h] [rbp-68h] BYREF
  __m128i v140; // [rsp+108h] [rbp-58h]
  unsigned __int64 v141; // [rsp+120h] [rbp-40h]

  v122 = a2;
  v121 = a3;
  v117 = a5;
  v118 = a6;
  v141 = __readfsqword(0x28u);
  v123 = nullptr;
  v139 = 0;
  v112 = a4 & sub_1FA80(a1 + 80);
  v6 = (_QWORD *)operator new(0x18u);
  *v6 = a1;
  v7 = _mm_loadl_epi64((const __m128i *)off_4BC58);
  v6[1] = &v123;
  v8 = (volatile signed __int32 **)&v139;
  v9 = v121;
  v6[2] = &v121;
  *(_QWORD *)&v139 = v6;
  v140 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)sub_21260);
  sub_1FBE0(v9, v112, (__int64)&v139);
  if ( v140.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v140.m128i_i64[0])(&v139, &v139, 3);
  v13 = (char *)v123;
  v116 = 0;
  v113 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BC60), (__m128i)(unsigned __int64)sub_210E0);
  if ( !v123 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v14 = *((_QWORD *)v13 + 6);
    if ( v14 <= 0 || v117 == v116 )
      break;
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
      v16 = v14 + *(_QWORD *)(v15 + 48);
    else
      v16 = *((_QWORD *)v13 + 6);
    v17 = *v122;
    if ( *v122 )
      v16 += *((_QWORD *)v17 + 6);
    if ( v16 >= v118 )
      goto LABEL_108;
    v124 = nullptr;
    v114 = src;
    v126 = 0;
    *(_OWORD *)src = 0;
    sub_21990(src, v14, (__int64)v17, v10, v11, v12);
    v18 = *((char **)v13 + 4);
    v19 = (int *)src[0];
    v115 = (__int64 *)(v13 + 16);
    v20 = (__int64 *)src[1];
    v21 = v126;
    if ( v13 + 16 != v18 )
    {
      while ( 1 )
      {
        v25 = *((volatile signed __int32 **)v18 + 4);
        if ( !v19 )
          goto LABEL_13;
        if ( *v19 > 1 )
          break;
        while ( 1 )
        {
          v32 = ((unsigned __int64)v19 + 31) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *((_QWORD *)v19 + 1) - ((__int64)((__int64)v20 - v32) >> 3) == v21 )
          {
            if ( v21 || v20 == (__int64 *)v32 )
              goto LABEL_19;
            *(v20 - 1) = (__int64)v25;
            v21 = 1;
            --v20;
          }
          else
          {
            v20[v21++] = (__int64)v25;
          }
LABEL_30:
          if ( *v19 > 1 )
            break;
          v31 = std::_Rb_tree_increment(v18);
          v18 = (char *)v31;
          if ( v115 == (__int64 *)v31 )
            goto LABEL_37;
          v25 = *(volatile signed __int32 **)(v31 + 32);
          if ( *v19 > 1 )
            goto LABEL_19;
        }
LABEL_16:
        src[0] = v19;
        src[1] = v20;
        v126 = v21;
        sub_23580((__int64)v114, 0, 0, 0, v11, v12);
        v19 = (int *)src[0];
        v20 = (__int64 *)src[1];
        v24 = std::_Rb_tree_increment(v18);
        v21 = v126;
        v18 = (char *)v24;
        if ( v115 == (__int64 *)v24 )
          goto LABEL_37;
      }
LABEL_19:
      if ( *v19 <= 1 )
      {
        v26 = (__int64)((__int64)v20 - (((unsigned __int64)v19 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
        if ( *((_QWORD *)v19 + 1) - v21 - v26 > 0 )
        {
          v30 = &v20[v21];
LABEL_29:
          *v30 = (__int64)v25;
          ++v21;
          goto LABEL_30;
        }
        if ( (__int64)((__int64)v20 - (((unsigned __int64)v19 + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0
          && 3 * v21 < 2LL * *((_QWORD *)v19 + 1) )
        {
          v27 = &v20[-v26];
          v28 = 8 * v21;
          if ( v21 && v20 != v27 && v20 && v27 )
          {
            v119 = (volatile signed __int32 **)(8 * v21);
            v29 = (__int64 *)memmove(v27, v20, v28);
            v28 = (size_t)v119;
            v27 = v29;
          }
          v30 = (__int64 *)((char *)v27 + v28);
          v20 = v27;
          goto LABEL_29;
        }
      }
LABEL_13:
      src[0] = v19;
      src[1] = v20;
      v126 = v21;
      sub_23580((__int64)v114, 0, 1, 0, v11, v12);
      v20 = (__int64 *)src[1];
      v22 = (_OWORD *)v126;
      v19 = (int *)src[0];
      v23 = (volatile signed __int32 **)((char *)src[1] + 8 * v21);
      if ( v21 < v126 )
      {
        v120 = (_OWORD *)v126;
        v119 = (volatile signed __int32 **)((char *)src[1] + 8 * v21);
        memmove(v23 + 1, v23, 8 * (v126 - v21));
        v22 = v120;
        v23 = v119;
      }
      *v23 = v25;
      v21 = (__int64)v22 + 1;
      if ( !v19 )
        goto LABEL_16;
      goto LABEL_30;
    }
LABEL_37:
    if ( (v19 && *v19 <= 1
       || (src[0] = v19,
           src[1] = v20,
           v126 = v21,
           sub_23580((__int64)v114, 0, 0, 0, v11, v12),
           v19 = (int *)src[0],
           v20 = (__int64 *)src[1],
           v21 = v126,
           src[0]))
      && *v19 <= 1 )
    {
      v33 = (char *)&v20[v21];
      v115 = v20;
      if ( v20 == (__int64 *)v33 )
        goto LABEL_45;
    }
    else
    {
      src[0] = v19;
      src[1] = v20;
      v126 = v21;
      sub_23580((__int64)v114, 0, 0, 0, v11, v12);
      v19 = (int *)src[0];
      v33 = (char *)src[1] + 8 * v126;
      v115 = (__int64 *)src[1];
      if ( v20 == (__int64 *)v33 )
        goto LABEL_44;
    }
    do
    {
      v34 = *v20;
      v140 = 0u;
      v133 = v34;
      v139 = 0;
      v35 = (void ***)operator new(0x28u);
      v35[3] = &v124;
      v36 = _mm_load_si128(&v113);
      v35[2] = (void **)&v122;
      *v35 = &v123;
      v35[4] = (void **)&v133;
      v37 = v133;
      v35[1] = (void **)a1;
      *(_QWORD *)&v139 = v35;
      v140 = v36;
      sub_1FBE0(v37, v112, (__int64)v8);
      if ( v140.m128i_i64[0] )
        ((void (__fastcall *)(volatile signed __int32 **, volatile signed __int32 **, __int64))v140.m128i_i64[0])(
          v8,
          v8,
          3);
      ++v20;
    }
    while ( v33 != (char *)v20 );
LABEL_44:
    if ( !v19 )
      goto LABEL_46;
LABEL_45:
    if ( _InterlockedSub(v19, 1u) )
    {
LABEL_46:
      v38 = (volatile signed __int32 *)v123;
      if ( v123 )
        goto LABEL_47;
      goto LABEL_64;
    }
    free(v19);
    v38 = (volatile signed __int32 *)v123;
    if ( v123 )
    {
LABEL_47:
      if ( !*((_QWORD *)v38 + 6) )
        goto LABEL_99;
      v39 = v122;
      sub_20C00(v122);
      v40 = v123;
      v41 = &v128;
      v132 = 0;
      v130 = (__m128i *)&v128;
      v131 = (__m128i *)&v128;
      v42 = *((const __m128i **)v123 + 3);
      v128 = 0;
      v129 = nullptr;
      v115 = (__int64 *)&v128;
      if ( v42 )
      {
        v43 = sub_1F7D0(v42, (__int64)&v128);
        v44 = v43;
        do
        {
          v45 = v44;
          v44 = (__m128i *)v44[1].m128i_i64[0];
        }
        while ( v44 );
        v130 = v45;
        v46 = v43;
        do
        {
          v47 = v46;
          v46 = (__m128i *)v46[1].m128i_i64[1];
        }
        while ( v46 );
        v48 = v40[6];
        v131 = v47;
        v129 = v43;
        v132 = v48;
      }
      v49 = *v39;
      v50 = *((_QWORD *)*v39 + 4);
      v51 = (__int64)(*v39 + 4);
      if ( v50 != v51 )
      {
        v119 = v39;
        v114 = (void **)&v127;
        v120 = v8;
        do
        {
          v53 = v50;
          v54 = std::_Rb_tree_increment(v50, v41);
          v41 = *(int **)(v50 + 32);
          v50 = v54;
          v55 = sub_1EDC0((__int64)v114, (unsigned __int64)v41);
          v57 = v56;
          if ( v56 )
          {
            v58 = std::_Rb_tree_rebalance_for_erase(v53, v51);
            --*((_QWORD *)v49 + 6);
            v41 = (int *)v58;
            v52 = v55 || v57 == v115 || *(_QWORD *)(v58 + 32) < (unsigned __int64)v57[4];
            std::_Rb_tree_insert_and_rebalance(v52, v58, v57, v115);
            ++v132;
          }
        }
        while ( v51 != v50 );
        v8 = (volatile signed __int32 **)v120;
        v49 = *v119;
        v51 = (__int64)(*v119 + 4);
      }
      sub_1F600(*((_QWORD **)v49 + 3));
      *((_QWORD *)v49 + 3) = 0;
      v84 = v129 == nullptr;
      *((_QWORD *)v49 + 4) = v51;
      *((_QWORD *)v49 + 5) = v51;
      *((_QWORD *)v49 + 6) = 0;
      if ( !v84 )
      {
        v85 = (__m128i *)v115;
        *((_DWORD *)v49 + 4) = v128;
        v86 = v129;
        *((_QWORD *)v49 + 3) = v129;
        *((_QWORD *)v49 + 4) = v130;
        *((_QWORD *)v49 + 5) = v131;
        v86->m128i_i64[1] = v51;
        v129 = nullptr;
        *((_QWORD *)v49 + 6) = v132;
        v130 = v85;
        v131 = v85;
        v132 = 0;
      }
      sub_1F600(nullptr);
      v38 = (volatile signed __int32 *)v123;
      if ( v123 )
      {
LABEL_99:
        if ( *v38 == 1 )
        {
          sub_1F600(*((_QWORD **)v38 + 3));
          *((_QWORD *)v38 + 3) = 0;
          *((_QWORD *)v38 + 4) = v38 + 4;
          *((_QWORD *)v38 + 5) = v38 + 4;
          *((_QWORD *)v38 + 6) = 0;
        }
        else
        {
          if ( v38 )
          {
            if ( !_InterlockedSub(v38, 1u) )
            {
              v87 = v123;
              if ( v123 )
              {
                sub_1F600(*((_QWORD **)v123 + 3));
                operator delete(v87, 0x38u);
              }
            }
          }
          v123 = nullptr;
        }
      }
    }
LABEL_64:
    v59 = v124;
    v60 = (volatile signed __int32 *)v124;
    if ( v124 )
    {
      if ( !*((_QWORD *)v124 + 6) )
        goto LABEL_87;
      if ( !v123 )
      {
        v94 = (_QWORD *)operator new(0x38u);
        *(_DWORD *)v94 = 0;
        v95 = v94;
        v94 += 2;
        *(_DWORD *)v94 = 0;
        v94[1] = 0;
        v95[4] = v94;
        v95[5] = v94;
        v96 = (volatile signed __int32 *)v123;
        v95[6] = 0;
        if ( v96 )
        {
          if ( !_InterlockedSub(v96, 1u) )
          {
            v110 = v123;
            if ( v123 )
            {
              sub_1F600(*((_QWORD **)v123 + 3));
              operator delete(v110, 0x38u);
            }
          }
        }
        v123 = v95;
        if ( v95 )
          _InterlockedAdd((volatile signed __int32 *)v95, 1u);
LABEL_123:
        v59 = v124;
        goto LABEL_68;
      }
      if ( *(_DWORD *)v123 == 1 )
        goto LABEL_68;
      v97 = operator new(0x38u);
      v98 = v123;
      *(_DWORD *)v97 = 0;
      v99 = v97;
      *(_DWORD *)(v97 + 16) = 0;
      *(_QWORD *)(v97 + 24) = 0;
      *(_QWORD *)(v97 + 32) = v97 + 16;
      *(_QWORD *)(v97 + 40) = v97 + 16;
      *(_QWORD *)(v97 + 48) = 0;
      v100 = *((const __m128i **)v98 + 3);
      if ( v100 )
      {
        v101 = sub_1F7D0(v100, v97 + 16);
        v102 = v101;
        do
        {
          v103 = v102;
          v102 = (__m128i *)v102[1].m128i_i64[0];
        }
        while ( v102 );
        *(_QWORD *)(v99 + 32) = v103;
        v104 = v101;
        do
        {
          v105 = v104;
          v104 = (__m128i *)v104[1].m128i_i64[1];
        }
        while ( v104 );
        *(_QWORD *)(v99 + 40) = v105;
        v106 = *((_QWORD *)v98 + 6);
        *(_QWORD *)(v99 + 24) = v101;
        *(_QWORD *)(v99 + 48) = v106;
      }
      if ( v99 )
        _InterlockedAdd((volatile signed __int32 *)v99, 1u);
      v107 = (volatile signed __int32 *)v123;
      v123 = (void *)v99;
      if ( !v107 || _InterlockedSub(v107, 1u) )
        goto LABEL_123;
      v108 = *((_QWORD *)v107 + 3);
      while ( v108 )
      {
        sub_1F600(*(_QWORD **)(v108 + 24));
        v109 = (void *)v108;
        v108 = *(_QWORD *)(v108 + 16);
        operator delete(v109, 0x30u);
      }
      operator delete((void *)v107, 0x38u);
      v59 = v124;
LABEL_68:
      v61 = &v134;
      v134 = 0;
      v135 = nullptr;
      v136 = (__m128i *)&v134;
      v137 = (__m128i *)&v134;
      v138 = 0;
      v62 = *((const __m128i **)v59 + 3);
      v115 = (__int64 *)&v134;
      if ( v62 )
      {
        v63 = sub_1F7D0(v62, (__int64)&v134);
        v64 = v63;
        do
        {
          v65 = v64;
          v64 = (__m128i *)v64[1].m128i_i64[0];
        }
        while ( v64 );
        v136 = v65;
        v66 = v63;
        do
        {
          v67 = v66;
          v66 = (__m128i *)v66[1].m128i_i64[1];
        }
        while ( v66 );
        v137 = v67;
        v68 = *((_QWORD *)v59 + 6);
        v135 = v63;
        v138 = v68;
      }
      v69 = (void **)v123;
      v70 = *((char **)v123 + 4);
      v71 = (char *)v123 + 16;
      if ( v70 != (char *)v123 + 16 )
      {
        v119 = v8;
        v72 = v123;
        v114 = (void **)&v133;
        do
        {
          v74 = v70;
          v75 = std::_Rb_tree_increment(v70, v61);
          v61 = *((int **)v70 + 4);
          v70 = (char *)v75;
          v76 = sub_1EDC0((__int64)v114, (unsigned __int64)v61);
          v78 = v77;
          if ( v77 )
          {
            v79 = std::_Rb_tree_rebalance_for_erase(v74, v71);
            --v72[6];
            v61 = (int *)v79;
            v73 = v76 || v78 == v115 || *(_QWORD *)(v79 + 32) < (unsigned __int64)v78[4];
            std::_Rb_tree_insert_and_rebalance(v73, v79, v78, v115);
            ++v138;
          }
        }
        while ( v71 != v70 );
        v69 = (void **)v123;
        v8 = v119;
        v71 = (char *)v123 + 16;
      }
      v80 = v69[3];
      v114 = v69;
      sub_1F600(v80);
      v81 = (__int64)v114;
      v114[3] = nullptr;
      *(_QWORD *)(v81 + 32) = v71;
      *(_QWORD *)(v81 + 40) = v71;
      *(_QWORD *)(v81 + 48) = 0;
      if ( v135 )
      {
        *(_DWORD *)(v81 + 16) = v134;
        v82 = v135;
        *(_QWORD *)(v81 + 24) = v135;
        *(_QWORD *)(v81 + 32) = v136;
        *(_QWORD *)(v81 + 40) = v137;
        v82->m128i_i64[1] = (__int64)v71;
        *(_QWORD *)(v81 + 48) = v138;
        v135 = nullptr;
        v136 = (__m128i *)v115;
        v137 = (__m128i *)v115;
        v138 = 0;
      }
      sub_1F600(nullptr);
      v60 = (volatile signed __int32 *)v124;
      if ( !v124 )
        goto LABEL_88;
LABEL_87:
      if ( _InterlockedSub(v60, 1u) )
        goto LABEL_88;
      v91 = v124;
      if ( !v124 )
        goto LABEL_88;
      v92 = *((_QWORD *)v124 + 3);
      while ( v92 )
      {
        sub_1F600(*(_QWORD **)(v92 + 24));
        v93 = (void *)v92;
        v92 = *(_QWORD *)(v92 + 16);
        operator delete(v93, 0x30u);
      }
      operator delete(v91, 0x38u);
      v13 = (char *)v123;
      ++v116;
      if ( !v123 )
        return (unsigned int)-1;
    }
    else
    {
LABEL_88:
      v13 = (char *)v123;
      ++v116;
      if ( !v123 )
        return (unsigned int)-1;
    }
  }
  v116 = -1;
LABEL_108:
  if ( !_InterlockedSub((volatile signed __int32 *)v13, 1u) )
  {
    v88 = v123;
    if ( v123 )
    {
      v89 = *((_QWORD *)v123 + 3);
      while ( v89 )
      {
        sub_1F600(*(_QWORD **)(v89 + 24));
        v90 = (void *)v89;
        v89 = *(_QWORD *)(v89 + 16);
        operator delete(v90, 0x30u);
      }
      operator delete(v88, 0x38u);
    }
  }
  return v116;
}

