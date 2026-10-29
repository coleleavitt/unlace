__int64 __fastcall std::__detail::__regex_algo_impl<char const*,std::allocator<std::sub_match<char const*>>,char,std::regex_traits<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        int a11)
{
  __int64 v11; // rbp
  __m128i *v12; // r12
  __int64 v13; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r12
  unsigned __int64 v25; // r12
  char *v26; // rax
  char *v27; // rdx
  unsigned __int64 v28; // rbp
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rcx
  __m128 v34; // xmm4
  __m128 si128; // xmm0
  __m128 v36; // xmm5
  char *v37; // r13
  std::locale *v38; // rbp
  unsigned __int64 v39; // r12
  size_t v40; // rdx
  char *v41; // r15
  __m128i v42; // xmm0
  __int64 v43; // rax
  void *v44; // rdi
  __int64 v45; // rsi
  char *v46; // rbx
  void *v47; // rdi
  __int64 v48; // rsi
  char v49; // r12
  std::locale *v50; // rbx
  void *v51; // rdi
  __int64 v52; // rsi
  void *v53; // rdi
  std::locale *v54; // rbx
  void *v55; // rdi
  __int64 v56; // rsi
  __m128i *v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __m128i *v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // r12
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  void *v68; // rdi
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __m128i v72; // xmm1
  __m128i *v73; // rdx
  const __m128i *v74; // rcx
  __int8 *v75; // rsi
  __m128i *v76; // rax
  __m128i *v77; // rdx
  __m128i *v78; // rax
  int v80; // eax
  __m128i v81; // xmm0
  __m128i *v82; // rbx
  __int64 v83; // rbp
  signed __int64 v84; // rbp
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rdx
  __m128i *v88; // rax
  __int64 v89; // rdx
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __int64 v93; // rbx
  bool v94; // zf
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rdx
  __m128i v104; // xmm0
  __m128i v105; // xmm1
  std::locale *i; // rbx
  void *v107; // rdi
  __int64 v108; // rsi
  __m128i v109; // [rsp+0h] [rbp-138h] BYREF
  std::locale *v110; // [rsp+10h] [rbp-128h]
  __int64 v111; // [rsp+18h] [rbp-120h] BYREF
  unsigned __int64 v112[2]; // [rsp+20h] [rbp-118h] BYREF
  int v113; // [rsp+30h] [rbp-108h]
  int v114; // [rsp+34h] [rbp-104h]
  __m128 *v115; // [rsp+38h] [rbp-100h]
  __m128 v116; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v117; // [rsp+50h] [rbp-E8h]
  __int64 v118; // [rsp+58h] [rbp-E0h]
  void *v119[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v120; // [rsp+70h] [rbp-C8h]
  __m128i v121; // [rsp+78h] [rbp-C0h]
  __int64 v122; // [rsp+88h] [rbp-B0h]
  __int64 v123; // [rsp+90h] [rbp-A8h]
  __int64 v124; // [rsp+98h] [rbp-A0h]
  const __m128i **v125; // [rsp+A0h] [rbp-98h]
  void *v126; // [rsp+A8h] [rbp-90h]
  char *v127; // [rsp+B0h] [rbp-88h]
  char *v128; // [rsp+B8h] [rbp-80h]
  void *v129[2]; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v130; // [rsp+D0h] [rbp-68h]
  void *s; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v132; // [rsp+E0h] [rbp-58h]
  int v133; // [rsp+E8h] [rbp-50h]
  char v134; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v135; // [rsp+F8h] [rbp-40h]

  v109.m128i_i64[0] = a1;
  v111 = a2;
  v114 = a11;
  v135 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a4 + 16);
  if ( !v11 )
    return 0;
  v12 = *(__m128i **)a3;
  v13 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 24) = a1;
  v18 = v13 - (_QWORD)v12;
  v19 = (unsigned int)*(_QWORD *)(v11 + 40) + 3;
  if ( 0xAAAAAAAAAAAAAAABLL * (v18 >> 3) >= v19 )
  {
    v57 = *(__m128i **)(a3 + 8);
    v58 = 0xAAAAAAAAAAAAAAABLL * (((char *)v57 - (char *)v12) >> 3);
    if ( v58 < v19 )
    {
      for ( ; v57 != v12; *(__m128i *)((char *)&v12[-2] + 8) = 0 )
      {
        v12[1].m128i_i8[0] = 0;
        v12 = (__m128i *)((char *)v12 + 24);
      }
      v18 = v19 - v58 - 1;
      v88 = v57;
      v89 = v18;
      do
      {
        v88[1].m128i_i8[0] = 0;
        v88 = (__m128i *)((char *)v88 + 24);
        *(__m128i *)((char *)&v88[-2] + 8) = 0;
      }
      while ( v89-- != 0 );
      *(_QWORD *)(a3 + 8) = (char *)v57 + 24 * v18 + 24;
    }
    else
    {
      if ( (unsigned int)*(_QWORD *)(v11 + 40) != -3 )
      {
        v59 = 3 * v19;
        v60 = v12;
        v61 = v59;
        v18 = (__int64)&v12->m128i_i64[v61];
        do
        {
          v60[1].m128i_i8[0] = 0;
          v60 = (__m128i *)((char *)v60 + 24);
          *(__m128i *)((char *)&v60[-2] + 8) = 0;
        }
        while ( (__m128i *)v18 != v60 );
        v12 = (__m128i *)((char *)v12 + 24 * ((0xAAAAAAAAAAAAAABLL * (((v61 * 8) >> 3) - 3)) & 0x1FFFFFFFFFFFFFFFLL)
                                      + 24);
      }
      if ( v57 != v12 )
        *(_QWORD *)(a3 + 8) = v12;
    }
  }
  else
  {
    v112[0] = v18;
    v110 = (std::locale *)(24 * v19);
    v20 = operator new(24 * v19);
    v21 = v20;
    v22 = (char *)v110 + v20;
    do
    {
      *(_BYTE *)(v20 + 16) = 0;
      v20 += 24;
      *(_OWORD *)(v20 - 24) = 0;
    }
    while ( (char *)v20 != v22 );
    *(_QWORD *)a3 = v21;
    *(_QWORD *)(a3 + 8) = v20;
    *(_QWORD *)(a3 + 16) = v20;
    if ( v12 )
    {
      operator delete(v12, v18);
      v11 = *(_QWORD *)(a4 + 16);
    }
  }
  if ( (*(_BYTE *)(a4 + 1) & 4) == 0 && (a6 != 1 || *(_BYTE *)(v11 + 48)) )
  {
    v62 = *(_QWORD *)(v11 + 64);
    v120 = 0;
    v63 = v62 - *(_QWORD *)(v11 + 56);
    v123 = a4;
    v121.m128i_i64[1] = v109.m128i_i64[0];
    v124 = v11;
    v122 = v111;
    v64 = 0xAAAAAAAAAAAAAAABLL * (v63 >> 4);
    v125 = (const __m128i **)a3;
    *(_OWORD *)v119 = 0;
    if ( v64 )
    {
      v65 = 2 * v64;
      v66 = (_QWORD *)operator new(16 * v64);
      v67 = &v66[v65];
      v126 = v66;
      v128 = (char *)&v66[v65];
      do
      {
        *v66 = 0;
        v66 += 2;
        *((_DWORD *)v66 - 2) = 0;
      }
      while ( v66 != v67 );
    }
    else
    {
      v126 = nullptr;
      v66 = nullptr;
      v128 = nullptr;
    }
    v127 = (char *)v66;
    v129[0] = *(void **)(v11 + 32);
    if ( (a5 & 0x80u) != 0 )
      a5 &= 0xFFFFFFFA;
    LODWORD(v130) = a5;
    if ( (_BYTE)v114 )
    {
      BYTE4(v130) = 0;
      v129[1] = nullptr;
      v121.m128i_i64[0] = v109.m128i_i64[0];
      std::vector<std::sub_match<char const*>>::operator=((__int64 *)v119, (const __m128i **)a3);
      std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
      v49 = BYTE4(v130);
      goto LABEL_60;
    }
    BYTE4(v130) = 0;
    v129[1] = nullptr;
    v121.m128i_i64[0] = v109.m128i_i64[0];
    std::vector<std::sub_match<char const*>>::operator=((__int64 *)v119, (const __m128i **)a3);
    std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
    v49 = BYTE4(v130);
    if ( !BYTE4(v130) )
    {
      v80 = v130;
      if ( (v130 & 0x40) == 0 )
      {
        LOBYTE(v80) = v130 | 0x80;
        LODWORD(v130) = v80;
        while ( v121.m128i_i64[1] != v122 )
        {
          BYTE4(v130) = 0;
          v129[1] = nullptr;
          v121 = _mm_unpacklo_epi64(
                   (__m128i)(unsigned __int64)(v121.m128i_i64[1] + 1),
                   (__m128i)(unsigned __int64)(v121.m128i_i64[1] + 1));
          std::vector<std::sub_match<char const*>>::operator=((__int64 *)v119, v125);
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
          if ( BYTE4(v130) )
            goto LABEL_119;
        }
      }
      v68 = v126;
      if ( v126 )
        goto LABEL_61;
      v81 = _mm_loadl_epi64((const __m128i *)&v111);
      v70 = _mm_unpacklo_epi64(v81, v81);
      if ( v119[0] )
      {
        v109 = v70;
        operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
        v70 = _mm_load_si128(&v109);
      }
      goto LABEL_82;
    }
LABEL_119:
    v68 = v126;
    v49 = 1;
    if ( v126 )
      goto LABEL_61;
    if ( v119[0] )
    {
      operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
      v104 = _mm_loadl_epi64((const __m128i *)&v111);
      v105 = _mm_loadl_epi64(&v109);
      v70 = _mm_unpacklo_epi64(v104, v104);
      v72 = _mm_unpacklo_epi64(v105, v105);
LABEL_66:
      v73 = *(__m128i **)(a3 + 8);
      v74 = *(const __m128i **)a3;
      v75 = &v73->m128i_i8[-*(_QWORD *)a3];
      if ( v73 == *(__m128i **)a3 )
      {
LABEL_71:
        v77 = (__m128i *)&v75[(_QWORD)v74 - 48];
        v78 = (__m128i *)&v75[(_QWORD)v74 - 24];
        if ( (_BYTE)v114 )
        {
          v77[1].m128i_i8[0] = 0;
          *v77 = v72;
          v78[1].m128i_i8[0] = 0;
          *v78 = v70;
          return 1;
        }
LABEL_103:
        v93 = v109.m128i_i64[0];
        v77->m128i_i64[0] = v109.m128i_i64[0];
        v94 = v74->m128i_i64[0] == v93;
        v77->m128i_i64[1] = v74->m128i_i64[0];
        v77[1].m128i_i8[0] = !v94;
        v95 = v74->m128i_i64[1];
        v96 = v111;
        v94 = v95 == v111;
        v78->m128i_i64[0] = v95;
        v78->m128i_i64[1] = v96;
        v78[1].m128i_i8[0] = !v94;
        return 1;
      }
    }
    else
    {
      v73 = *(__m128i **)(a3 + 8);
      v74 = *(const __m128i **)a3;
      v91 = _mm_loadl_epi64((const __m128i *)&v111);
      v92 = _mm_loadl_epi64(&v109);
      v75 = &v73->m128i_i8[-*(_QWORD *)a3];
      v70 = _mm_unpacklo_epi64(v91, v91);
      v72 = _mm_unpacklo_epi64(v92, v92);
      if ( *(__m128i **)a3 == v73 )
      {
        v77 = (__m128i *)&v75[(_QWORD)v74 - 48];
        v78 = (__m128i *)&v75[(_QWORD)v74 - 24];
        goto LABEL_103;
      }
    }
    v76 = (__m128i *)v74;
    do
    {
      if ( !v76[1].m128i_i8[0] )
        *v76 = v70;
      v76 = (__m128i *)((char *)v76 + 24);
    }
    while ( v73 != v76 );
    goto LABEL_71;
  }
  v23 = *(_QWORD *)(v11 + 64);
  v120 = 0;
  v24 = v23 - *(_QWORD *)(v11 + 56);
  v123 = a4;
  v121.m128i_i64[1] = v109.m128i_i64[0];
  v124 = v11;
  v122 = v111;
  v25 = 0xAAAAAAAAAAAAAAABLL * (v24 >> 4);
  v125 = (const __m128i **)a3;
  *(_OWORD *)v119 = 0;
  if ( v25 )
  {
    v26 = (char *)operator new(16 * v25);
    v27 = &v26[16 * v25];
    v126 = v26;
    v128 = v27;
    do
    {
      *(_QWORD *)v26 = 0;
      v26 += 16;
      *((_DWORD *)v26 - 2) = 0;
    }
    while ( v26 != v27 );
  }
  else
  {
    v126 = nullptr;
    v26 = nullptr;
    v128 = nullptr;
  }
  v28 = *(_QWORD *)(v11 + 32);
  v127 = v26;
  v130 = 0;
  *(_OWORD *)v129 = 0;
  v29 = (void *)operator new[](v25);
  v33 = v29;
  if ( v25 )
  {
    v18 = 0;
    v33 = memset(v29, 0, v25);
  }
  s = v33;
  v132 = v28;
  if ( (a5 & 0x80u) != 0 )
    a5 &= 0xFFFFFFFA;
  v133 = a5;
  if ( !(_BYTE)v114 )
  {
    v121.m128i_i64[0] = v109.m128i_i64[0];
    v49 = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_main_dispatch(
            (__int64)v119,
            v18,
            v30,
            (__int64)v33,
            v31,
            v32,
            v109.m128i_i64[0],
            v109.m128i_i32[2],
            v110,
            v111,
            v112[0],
            v112[1],
            v113,
            (int)v115,
            v116.m128_i32[0],
            v116.m128_i64[1],
            v117,
            v118,
            (__int64)v119[0]);
    if ( !v49 )
    {
      v101 = v133;
      if ( (v133 & 0x40) != 0 )
        goto LABEL_38;
      LOBYTE(v101) = v133 | 0x80;
      v133 = v101;
      do
      {
        if ( v121.m128i_i64[1] == v122 )
          goto LABEL_38;
        v121 = _mm_unpacklo_epi64(
                 (__m128i)(unsigned __int64)(v121.m128i_i64[1] + 1),
                 (__m128i)(unsigned __int64)(v121.m128i_i64[1] + 1));
      }
      while ( !(unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_main_dispatch(
                                  (__int64)v119,
                                  v18,
                                  v97,
                                  v98,
                                  v99,
                                  v100,
                                  v109.m128i_i64[0],
                                  v109.m128i_i32[2],
                                  v110,
                                  v111,
                                  v112[0],
                                  v112[1],
                                  v113,
                                  (int)v115,
                                  v116.m128_i32[0],
                                  v116.m128_i64[1],
                                  v117,
                                  v118,
                                  (__int64)v119[0]) );
    }
    v49 = 1;
LABEL_38:
    v53 = s;
    if ( !s )
      goto LABEL_40;
    goto LABEL_39;
  }
  v116.m128_u64[0] = v28;
  v115 = &v116;
  v121.m128i_i64[0] = v109.m128i_i64[0];
  std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::emplace_back<long &,std::vector<std::sub_match<char const*>> const&>(
    (__int64)v129,
    &v116,
    (const __m128i **)a3);
  si128 = (__m128)_mm_load_si128((const __m128i *)v129);
  v134 = 0;
  v37 = (char *)si128.m128_u64[0];
  v38 = (std::locale *)_mm_movehl_ps(v36, si128).m128_u64[0];
  v39 = (unsigned __int64)v38;
  if ( v38 == (std::locale *)si128.m128_u64[0] )
  {
    v49 = 0;
    goto LABEL_131;
  }
  v38 = (std::locale *)v129[0];
  v110 = (std::locale *)v129[1];
  while ( 1 )
  {
    while ( 1 )
    {
      v40 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v124 + 64) - *(_QWORD *)(v124 + 56)) >> 4);
      if ( v40 )
      {
        *(__m128 *)v112 = si128;
        memset(s, 0, v40);
        si128 = (__m128)_mm_load_si128((const __m128i *)v112);
      }
      v116 = si128;
      v41 = v37;
      *(_OWORD *)v129 = 0;
      v112[0] = v130;
      v117 = v130;
      v130 = 0;
      if ( (char *)v39 != v37 )
        break;
      if ( v122 == v121.m128i_i64[0] )
        goto LABEL_122;
      ++v121.m128i_i64[0];
LABEL_30:
      if ( v37 )
        goto LABEL_31;
LABEL_95:
      v134 = 0;
      si128 = (__m128)_mm_load_si128((const __m128i *)v129);
      v38 = (std::locale *)v129[0];
      v110 = (std::locale *)v129[1];
      v34 = _mm_movehl_ps(v34, si128);
      v37 = (char *)si128.m128_u64[0];
      v39 = v34.m128_u64[0];
      if ( v34.m128_u64[0] == si128.m128_u64[0] )
      {
LABEL_32:
        v49 = 0;
        goto LABEL_33;
      }
    }
    do
    {
      v42 = _mm_loadu_si128((const __m128i *)(v41 + 8));
      v43 = *((_QWORD *)v41 + 3);
      *((_QWORD *)v41 + 3) = 0;
      *(_OWORD *)(v41 + 8) = 0;
      v44 = v119[0];
      v45 = v120;
      *(__m128i *)v119 = v42;
      v120 = v43;
      if ( v44 )
        operator delete(v44, v45 - (_QWORD)v44);
      std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
      v41 += 32;
    }
    while ( (char *)v39 != v41 );
    if ( v121.m128i_i64[0] == v122 )
      break;
    v46 = v37;
    ++v121.m128i_i64[0];
    do
    {
      while ( 1 )
      {
        v47 = *((void **)v46 + 1);
        if ( !v47 )
          break;
        v48 = *((_QWORD *)v46 + 3);
        v46 += 32;
        operator delete(v47, v48 - (_QWORD)v47);
        if ( v41 == v46 )
          goto LABEL_30;
      }
      v46 += 32;
    }
    while ( v41 != v46 );
    if ( !v37 )
      goto LABEL_95;
LABEL_31:
    operator delete(v37, v112[0] - (_QWORD)v37);
    si128 = (__m128)_mm_load_si128((const __m128i *)v129);
    v134 = 0;
    v38 = (std::locale *)v129[0];
    a10 = _mm_movehl_ps(a10, si128);
    v37 = (char *)si128.m128_u64[0];
    v110 = (std::locale *)v129[1];
    v39 = a10.m128_u64[0];
    if ( a10.m128_u64[0] == si128.m128_u64[0] )
      goto LABEL_32;
  }
LABEL_122:
  for ( i = v38; i != v110; i = (std::locale *)((char *)i + 32) )
  {
    while ( 1 )
    {
      v107 = *((void **)i + 1);
      if ( !v107 )
        break;
      v108 = *((_QWORD *)i + 3);
      i = (std::locale *)((char *)i + 32);
      operator delete(v107, v108 - (_QWORD)v107);
      if ( v110 == i )
        goto LABEL_125;
    }
  }
LABEL_125:
  if ( v38 )
    operator delete(v38, v112[0] - (_QWORD)v38);
  v38 = (std::locale *)v129[0];
  v49 = v134;
  v110 = (std::locale *)v129[1];
LABEL_33:
  if ( v38 != v110 )
  {
    v50 = v38;
    do
    {
      while ( 1 )
      {
        v51 = *((void **)v50 + 1);
        if ( !v51 )
          break;
        v52 = *((_QWORD *)v50 + 3);
        v50 = (std::locale *)((char *)v50 + 32);
        operator delete(v51, v52 - (_QWORD)v51);
        if ( v50 == v110 )
          goto LABEL_37;
      }
      v50 = (std::locale *)((char *)v50 + 32);
    }
    while ( v50 != v110 );
LABEL_37:
    v129[1] = v38;
    goto LABEL_38;
  }
LABEL_131:
  v53 = s;
  if ( s )
  {
LABEL_39:
    operator delete[](v53);
LABEL_40:
    v54 = (std::locale *)v129[1];
    v38 = (std::locale *)v129[0];
    if ( v129[1] != v129[0] )
    {
      do
      {
        while ( 1 )
        {
          v55 = *((void **)v38 + 1);
          if ( !v55 )
            break;
          v56 = *((_QWORD *)v38 + 3);
          v38 = (std::locale *)((char *)v38 + 32);
          operator delete(v55, v56 - (_QWORD)v55);
          if ( v54 == v38 )
            goto LABEL_43;
        }
        v38 = (std::locale *)((char *)v38 + 32);
      }
      while ( v54 != v38 );
LABEL_43:
      v38 = (std::locale *)v129[0];
    }
  }
  if ( v38 )
    operator delete(v38, v130 - (_QWORD)v38);
LABEL_60:
  v68 = v126;
  if ( v126 )
LABEL_61:
    operator delete(v68, v128 - (_BYTE *)v68);
  if ( v119[0] )
    operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
  v69 = _mm_loadl_epi64((const __m128i *)&v111);
  v70 = _mm_unpacklo_epi64(v69, v69);
  if ( v49 )
  {
    v71 = _mm_loadl_epi64(&v109);
    v72 = _mm_unpacklo_epi64(v71, v71);
    goto LABEL_66;
  }
LABEL_82:
  v82 = *(__m128i **)a3;
  v83 = *(_QWORD *)(a3 + 16);
  v120 = 0;
  v84 = v83 - (_QWORD)v82;
  if ( v84 > 48 )
  {
    v102 = *(_QWORD *)(a3 + 8);
    v103 = v102 - (_QWORD)v82;
    if ( v102 - (__int64)v82 > 48 )
    {
      v82[1].m128i_i8[0] = 0;
      v82[2].m128i_i8[8] = 0;
      v82[4].m128i_i8[0] = 0;
      *v82 = v70;
      *(__m128i *)((char *)v82 + 24) = v70;
      v82[3] = v70;
      if ( (unsigned __int64 *)v102 != &v82[4].m128i_u64[1] )
        *(_QWORD *)(a3 + 8) = (char *)v82 + 72;
    }
    else
    {
      for ( ; (__m128i *)v102 != v82; *(__m128i *)((char *)v82 - 24) = v70 )
      {
        v82[1].m128i_i8[0] = 0;
        v82 = (__m128i *)((char *)v82 + 24);
      }
      *(__m128i *)v119 = v70;
      *(__m128i *)v102 = v70;
      *(_QWORD *)(v102 + 16) = v120;
      if ( v103 != 48 )
      {
        *(__m128i *)(v102 + 24) = _mm_load_si128((const __m128i *)v119);
        *(_QWORD *)(v102 + 40) = v120;
        if ( v103 != 24 )
        {
          *(__m128i *)(v102 + 48) = _mm_load_si128((const __m128i *)v119);
          *(_QWORD *)(v102 + 64) = v120;
        }
      }
      *(_QWORD *)(a3 + 8) = v102 + 24 * (2 - 0xAAAAAAAAAAAAAAABLL * (v103 >> 3)) + 24;
    }
  }
  else
  {
    v109 = v70;
    v85 = operator new(0x48u);
    v86 = _mm_load_si128(&v109);
    v87 = v120;
    *(_QWORD *)a3 = v85;
    *(_QWORD *)(v85 + 16) = v87;
    *(_QWORD *)(v85 + 40) = v87;
    *(_QWORD *)(v85 + 64) = v87;
    *(_QWORD *)(a3 + 8) = v85 + 72;
    *(_QWORD *)(a3 + 16) = v85 + 72;
    *(__m128i *)v119 = v86;
    *(__m128i *)v85 = v86;
    *(__m128i *)(v85 + 24) = v86;
    *(__m128i *)(v85 + 48) = v86;
    if ( v82 )
      operator delete(v82, v84);
  }
  return 0;
}

