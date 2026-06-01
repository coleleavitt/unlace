__int64 __fastcall std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
        __int64 a1,
        std::locale *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int32 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        int a11)
{
  __int64 v11; // rbp
  __m128i *v12; // r12
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __m128i si128; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r12
  unsigned __int64 v26; // r12
  char *v27; // rax
  char *v28; // rdx
  unsigned __int64 v29; // rbp
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rcx
  __m128 v35; // xmm4
  __m128 v36; // xmm0
  __m128 v37; // xmm5
  char *v38; // r13
  _QWORD *v39; // rbp
  unsigned __int64 v40; // r12
  size_t v41; // rdx
  char *v42; // r14
  __m128i v43; // xmm0
  __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // rsi
  char *v47; // rbx
  void *v48; // rdi
  __int64 v49; // rsi
  char v50; // r12
  _QWORD *v51; // rbx
  void *v52; // rdi
  __int64 v53; // rsi
  void *v54; // rdi
  _QWORD *v55; // rbx
  void *v56; // rdi
  __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __m128i *v60; // rax
  unsigned __int64 v61; // rcx
  void *v62; // rdx
  void *v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  __int64 v70; // r12
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  void *v73; // rax
  void *v74; // rdi
  __m128i *v75; // rdx
  const __m128i *v76; // rcx
  __int64 v77; // rsi
  std::locale *v78; // rdi
  __m128i *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  std::locale *v83; // rax
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  __m128i *v87; // rbx
  __int64 v88; // rbp
  signed __int64 v89; // rbp
  __int64 v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // rdx
  __int64 v93; // rbx
  bool v94; // zf
  std::locale *v95; // rax
  std::locale *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  int v102; // eax
  __m128i v103; // xmm0
  __int64 v104; // rax
  __int64 v105; // rdx
  _QWORD *i; // rbx
  void *v107; // rdi
  __int64 v108; // rsi
  __m128i v109; // [rsp+0h] [rbp-138h] BYREF
  __int64 v110; // [rsp+10h] [rbp-128h]
  std::locale *v111; // [rsp+18h] [rbp-120h] BYREF
  __m128 v112; // [rsp+20h] [rbp-118h] BYREF
  int v113; // [rsp+30h] [rbp-108h]
  int v114; // [rsp+34h] [rbp-104h]
  unsigned __int64 v115; // [rsp+38h] [rbp-100h]
  __m128 v116; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v117; // [rsp+50h] [rbp-E8h]
  __int64 v118; // [rsp+58h] [rbp-E0h]
  void *v119[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v120; // [rsp+70h] [rbp-C8h]
  __m128 v121; // [rsp+80h] [rbp-B8h]
  __int64 v122; // [rsp+90h] [rbp-A8h]
  __int64 v123; // [rsp+98h] [rbp-A0h]
  const __m128i **v124; // [rsp+A0h] [rbp-98h]
  void *v125; // [rsp+A8h] [rbp-90h]
  char *v126; // [rsp+B0h] [rbp-88h]
  char *v127; // [rsp+B8h] [rbp-80h]
  void *v128[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v129; // [rsp+D0h] [rbp-68h]
  void *s; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v131; // [rsp+E0h] [rbp-58h]
  int v132; // [rsp+E8h] [rbp-50h]
  char v133; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v134; // [rsp+F8h] [rbp-40h]

  v110 = a1;
  v111 = a2;
  v114 = a11;
  v134 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a4 + 16);
  if ( !v11 )
    return 0;
  v12 = *(__m128i **)a3;
  v13 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 24) = a1;
  v15 = *(_QWORD *)(v11 + 40);
  v18 = v13 - (_QWORD)v12;
  *(_OWORD *)v119 = 0;
  *(_QWORD *)&v120 = 0;
  v19 = (unsigned int)(v15 + 3);
  if ( 0xAAAAAAAAAAAAAAABLL * (v18 >> 3) >= v19 )
  {
    v18 = *(_QWORD *)(a3 + 8);
    v58 = 0xAAAAAAAAAAAAAAABLL * ((v18 - (__int64)v12) >> 3);
    if ( v58 < v19 )
    {
      while ( (__m128i *)v18 != v12 )
      {
        v12 = (__m128i *)((char *)v12 + 24);
        v12[-2].m128i_i64[1] = (__int64)v119[0];
        v63 = v119[1];
        v12[-1].m128i_i8[8] = 0;
        v12[-1].m128i_i64[0] = (__int64)v63;
      }
      v64 = v19 - v58 - 1;
      v65 = v18;
      v66 = v64;
      do
      {
        v65 += 24;
        *(__m128i *)(v65 - 24) = _mm_load_si128((const __m128i *)v119);
        *(_QWORD *)(v65 - 8) = v120;
      }
      while ( v66-- != 0 );
      *(_QWORD *)(a3 + 8) = v18 + 24 * v64 + 24;
    }
    else
    {
      if ( v19 )
      {
        v59 = 3 * v19;
        v60 = v12;
        v61 = 8 * v59;
        do
        {
          v60 = (__m128i *)((char *)v60 + 24);
          v60[-2].m128i_i64[1] = (__int64)v119[0];
          v62 = v119[1];
          v60[-1].m128i_i8[8] = 0;
          v60[-1].m128i_i64[0] = (__int64)v62;
        }
        while ( &v12->m128i_i8[v61] != (__int8 *)v60 );
        v12 = (__m128i *)((char *)v12 + 24 * ((0xAAAAAAAAAAAAAABLL * ((v61 >> 3) - 3)) & 0x1FFFFFFFFFFFFFFFLL) + 24);
      }
      if ( (__m128i *)v18 != v12 )
        *(_QWORD *)(a3 + 8) = v12;
    }
  }
  else
  {
    v112.m128_i32[0] = a6;
    v115 = v18;
    v109.m128i_i64[0] = 24 * v19;
    v20 = operator new(24 * v19);
    si128 = _mm_load_si128((const __m128i *)v119);
    v22 = v120;
    v23 = v20;
    a6 = v112.m128_i32[0];
    v24 = v20 + v109.m128i_i64[0];
    do
    {
      *(_QWORD *)(v20 + 16) = v22;
      v20 += 24;
      *(__m128i *)(v20 - 24) = si128;
    }
    while ( v20 != v24 );
    *(_QWORD *)a3 = v23;
    *(_QWORD *)(a3 + 8) = v20;
    *(_QWORD *)(a3 + 16) = v20;
    if ( v12 )
    {
      v109.m128i_i32[0] = a6;
      operator delete(v12, v18);
      v11 = *(_QWORD *)(a4 + 16);
      a6 = v109.m128i_i32[0];
    }
  }
  if ( (*(_BYTE *)(a4 + 1) & 4) == 0 && (a6 != 1 || *(_BYTE *)(v11 + 48)) )
  {
    v121 = _mm_loadh_ps((const double *)&v111);
    v68 = *(_QWORD *)(v11 + 64) - *(_QWORD *)(v11 + 56);
    *(_QWORD *)&v120 = 0;
    v122 = a4;
    v69 = 0xAAAAAAAAAAAAAAABLL * (v68 >> 4);
    v123 = v11;
    v124 = (const __m128i **)a3;
    *(_OWORD *)v119 = 0;
    if ( v69 )
    {
      v70 = 2 * v69;
      v71 = (_QWORD *)operator new(16 * v69);
      v72 = &v71[v70];
      v125 = v71;
      v127 = (char *)&v71[v70];
      do
      {
        *v71 = 0;
        v71 += 2;
        *((_DWORD *)v71 - 2) = 0;
      }
      while ( v71 != v72 );
    }
    else
    {
      v125 = nullptr;
      v71 = nullptr;
      v127 = nullptr;
    }
    v126 = (char *)v71;
    v73 = *(void **)(v11 + 32);
    v128[1] = nullptr;
    v128[0] = v73;
    if ( (a5 & 0x80u) != 0 )
      a5 &= 0xFFFFFFFA;
    LODWORD(v129) = a5;
    if ( (_BYTE)v114 )
    {
      BYTE4(v129) = 0;
      *((_QWORD *)&v120 + 1) = v121.m128_u64[0];
      std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
        (__int64 *)v119,
        (const __m128i **)a3);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
      v50 = BYTE4(v129);
      goto LABEL_65;
    }
    BYTE4(v129) = 0;
    *((_QWORD *)&v120 + 1) = v121.m128_u64[0];
    std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
      (__int64 *)v119,
      (const __m128i **)a3);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
    v50 = BYTE4(v129);
    if ( BYTE4(v129) )
    {
LABEL_119:
      v74 = v125;
      v50 = 1;
      if ( v125 )
        goto LABEL_66;
      if ( v119[0] )
      {
        operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
        goto LABEL_70;
      }
      v75 = *(__m128i **)(a3 + 8);
      v76 = *(const __m128i **)a3;
      v77 = (__int64)v75->m128i_i64 - *(_QWORD *)a3;
      if ( v75 != *(__m128i **)a3 )
      {
LABEL_71:
        v78 = v111;
        v79 = (__m128i *)v76;
        do
        {
          if ( !v79[1].m128i_i8[0] )
          {
            v79->m128i_i64[1] = (__int64)v78;
            v79->m128i_i64[0] = (__int64)v78;
          }
          v79 = (__m128i *)((char *)v79 + 24);
        }
        while ( v75 != v79 );
        goto LABEL_75;
      }
      v80 = (__int64)v76[-3].m128i_i64 + v77;
      v81 = (__int64)&v76[-1] + v77 - 8;
      goto LABEL_95;
    }
    v102 = v129;
    if ( (v129 & 0x40) == 0 )
    {
      LOBYTE(v102) = v129 | 0x80;
      LODWORD(v129) = v102;
      while ( v121.m128_u64[0] != v121.m128_u64[1] )
      {
        BYTE4(v129) = 0;
        *((_QWORD *)&v120 + 1) = ++v121.m128_u64[0];
        v128[1] = nullptr;
        std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
          (__int64 *)v119,
          v124);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
        if ( BYTE4(v129) )
          goto LABEL_119;
      }
    }
    v74 = v125;
    if ( v125 )
      goto LABEL_66;
    v103 = _mm_loadl_epi64((const __m128i *)&v111);
    v86 = _mm_unpacklo_epi64(v103, v103);
    if ( v119[0] )
    {
      v109 = v86;
      operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
      v86 = _mm_load_si128(&v109);
    }
    goto LABEL_79;
  }
  v121 = _mm_loadh_ps((const double *)&v111);
  *(_OWORD *)v119 = 0;
  v120 = 0;
  v25 = (__int64)(*(_QWORD *)(v11 + 64) - *(_QWORD *)(v11 + 56)) >> 4;
  v122 = a4;
  v26 = 0xAAAAAAAAAAAAAAABLL * v25;
  v123 = v11;
  v124 = (const __m128i **)a3;
  if ( v26 )
  {
    v27 = (char *)operator new(16 * v26);
    v28 = &v27[16 * v26];
    v125 = v27;
    v127 = v28;
    do
    {
      *(_QWORD *)v27 = 0;
      v27 += 16;
      *((_DWORD *)v27 - 2) = 0;
    }
    while ( v27 != v28 );
  }
  else
  {
    v125 = nullptr;
    v27 = nullptr;
    v127 = nullptr;
  }
  v29 = *(_QWORD *)(v11 + 32);
  v126 = v27;
  v129 = 0;
  *(_OWORD *)v128 = 0;
  v30 = (void *)operator new[](v26);
  v34 = v30;
  if ( v26 )
  {
    v18 = 0;
    v34 = memset(v30, 0, v26);
  }
  s = v34;
  v131 = v29;
  if ( (a5 & 0x80u) != 0 )
    a5 &= 0xFFFFFFFA;
  v132 = a5;
  if ( !(_BYTE)v114 )
  {
    v50 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
            (__int64)v119,
            v18,
            v31,
            (__int64)v34,
            v32,
            v33,
            v109.m128i_i64[0],
            v109.m128i_i64[1],
            v110,
            v111,
            v112.m128_i32[0],
            v112.m128_i32[2],
            v113,
            v115,
            v116.m128_i32[0],
            v116.m128_i64[1],
            v117,
            v118,
            (int)v119[0],
            (int)v119[1],
            v120,
            v121.m128_i32[0],
            v121.m128_i64[0]);
    if ( !v50 )
    {
      v101 = v132;
      if ( (v132 & 0x40) != 0 )
        goto LABEL_38;
      LOBYTE(v101) = v132 | 0x80;
      v132 = v101;
      do
      {
        if ( v121.m128_u64[0] == v121.m128_u64[1] )
          goto LABEL_38;
      }
      while ( !(unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
                                  (__int64)v119,
                                  v18,
                                  v97,
                                  v98,
                                  v99,
                                  v100,
                                  v109.m128i_i64[0],
                                  v109.m128i_i64[1],
                                  v110,
                                  v111,
                                  v112.m128_i32[0],
                                  v112.m128_i32[2],
                                  v113,
                                  v115,
                                  v116.m128_i32[0],
                                  v116.m128_i64[1],
                                  v117,
                                  v118,
                                  (int)v119[0],
                                  (int)v119[1],
                                  v120,
                                  v121.m128_i32[0] + 1,
                                  v121.m128_u64[0] + 1) );
    }
    v50 = 1;
LABEL_38:
    v54 = s;
    if ( !s )
      goto LABEL_40;
    goto LABEL_39;
  }
  v116.m128_u64[0] = v29;
  v115 = (unsigned __int64)&v116;
  *((_QWORD *)&v120 + 1) = v121.m128_u64[0];
  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
    (__int64)v128,
    &v116,
    (const __m128i **)a3);
  v36 = (__m128)_mm_load_si128((const __m128i *)v128);
  v133 = 0;
  v38 = (char *)v36.m128_u64[0];
  v39 = (_QWORD *)_mm_movehl_ps(v37, v36).m128_u64[0];
  v40 = (unsigned __int64)v39;
  if ( v39 == (_QWORD *)v36.m128_u64[0] )
  {
    v50 = 0;
    goto LABEL_131;
  }
  v39 = v128[0];
  v109.m128i_i64[0] = (__int64)v128[1];
  while ( 1 )
  {
    while ( 1 )
    {
      v41 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v123 + 64) - *(_QWORD *)(v123 + 56)) >> 4);
      if ( v41 )
      {
        v112 = v36;
        memset(s, 0, v41);
        v36 = (__m128)_mm_load_si128((const __m128i *)&v112);
      }
      v116 = v36;
      v42 = v38;
      *(_OWORD *)v128 = 0;
      v112.m128_u64[0] = v129;
      v117 = v129;
      v129 = 0;
      if ( (char *)v40 != v38 )
        break;
      if ( *((_QWORD *)&v120 + 1) == v121.m128_u64[1] )
        goto LABEL_122;
      ++*((_QWORD *)&v120 + 1);
LABEL_30:
      if ( v38 )
        goto LABEL_31;
LABEL_87:
      v133 = 0;
      v36 = (__m128)_mm_load_si128((const __m128i *)v128);
      v39 = v128[0];
      v109.m128i_i64[0] = (__int64)v128[1];
      v35 = _mm_movehl_ps(v35, v36);
      v38 = (char *)v36.m128_u64[0];
      v40 = v35.m128_u64[0];
      if ( v35.m128_u64[0] == v36.m128_u64[0] )
      {
LABEL_32:
        v50 = 0;
        goto LABEL_33;
      }
    }
    do
    {
      v43 = _mm_loadu_si128((const __m128i *)(v42 + 8));
      v44 = *((_QWORD *)v42 + 3);
      *((_QWORD *)v42 + 3) = 0;
      *(_OWORD *)(v42 + 8) = 0;
      v45 = v119[0];
      v46 = v120;
      *(__m128i *)v119 = v43;
      *(_QWORD *)&v120 = v44;
      if ( v45 )
        operator delete(v45, v46 - (_QWORD)v45);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
      v42 += 32;
    }
    while ( (char *)v40 != v42 );
    if ( *((_QWORD *)&v120 + 1) == v121.m128_u64[1] )
      break;
    v47 = v38;
    ++*((_QWORD *)&v120 + 1);
    do
    {
      while ( 1 )
      {
        v48 = *((void **)v47 + 1);
        if ( !v48 )
          break;
        v49 = *((_QWORD *)v47 + 3);
        v47 += 32;
        operator delete(v48, v49 - (_QWORD)v48);
        if ( v42 == v47 )
          goto LABEL_30;
      }
      v47 += 32;
    }
    while ( v42 != v47 );
    if ( !v38 )
      goto LABEL_87;
LABEL_31:
    operator delete(v38, v112.m128_u64[0] - (_QWORD)v38);
    v36 = (__m128)_mm_load_si128((const __m128i *)v128);
    v133 = 0;
    v39 = v128[0];
    a10 = _mm_movehl_ps(a10, v36);
    v38 = (char *)v36.m128_u64[0];
    v109.m128i_i64[0] = (__int64)v128[1];
    v40 = a10.m128_u64[0];
    if ( a10.m128_u64[0] == v36.m128_u64[0] )
      goto LABEL_32;
  }
LABEL_122:
  for ( i = v39; i != (_QWORD *)v109.m128i_i64[0]; i += 4 )
  {
    while ( 1 )
    {
      v107 = (void *)i[1];
      if ( !v107 )
        break;
      v108 = i[3];
      i += 4;
      operator delete(v107, v108 - (_QWORD)v107);
      if ( (_QWORD *)v109.m128i_i64[0] == i )
        goto LABEL_125;
    }
  }
LABEL_125:
  if ( v39 )
    operator delete(v39, v112.m128_u64[0] - (_QWORD)v39);
  v39 = v128[0];
  v50 = v133;
  v109.m128i_i64[0] = (__int64)v128[1];
LABEL_33:
  if ( v39 != (_QWORD *)v109.m128i_i64[0] )
  {
    v51 = v39;
    do
    {
      while ( 1 )
      {
        v52 = (void *)v51[1];
        if ( !v52 )
          break;
        v53 = v51[3];
        v51 += 4;
        operator delete(v52, v53 - (_QWORD)v52);
        if ( v51 == (_QWORD *)v109.m128i_i64[0] )
          goto LABEL_37;
      }
      v51 += 4;
    }
    while ( v51 != (_QWORD *)v109.m128i_i64[0] );
LABEL_37:
    v128[1] = v39;
    goto LABEL_38;
  }
LABEL_131:
  v54 = s;
  if ( s )
  {
LABEL_39:
    operator delete[](v54);
LABEL_40:
    v55 = v128[1];
    v39 = v128[0];
    if ( v128[1] != v128[0] )
    {
      do
      {
        while ( 1 )
        {
          v56 = (void *)v39[1];
          if ( !v56 )
            break;
          v57 = v39[3];
          v39 += 4;
          operator delete(v56, v57 - (_QWORD)v56);
          if ( v55 == v39 )
            goto LABEL_43;
        }
        v39 += 4;
      }
      while ( v55 != v39 );
LABEL_43:
      v39 = v128[0];
    }
  }
  if ( v39 )
    operator delete(v39, v129 - (_QWORD)v39);
LABEL_65:
  v74 = v125;
  if ( v125 )
LABEL_66:
    operator delete(v74, v127 - (_BYTE *)v74);
  if ( v119[0] )
    operator delete(v119[0], v120 - (unsigned __int64)v119[0]);
  if ( !v50 )
  {
    v85 = _mm_loadl_epi64((const __m128i *)&v111);
    v86 = _mm_unpacklo_epi64(v85, v85);
LABEL_79:
    v87 = *(__m128i **)a3;
    v88 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)&v120 = 0;
    v89 = v88 - (_QWORD)v87;
    if ( v89 > 48 )
    {
      v104 = *(_QWORD *)(a3 + 8);
      v105 = v104 - (_QWORD)v87;
      if ( v104 - (__int64)v87 > 48 )
      {
        v87[1].m128i_i8[0] = 0;
        v87[2].m128i_i8[8] = 0;
        v87[4].m128i_i8[0] = 0;
        *v87 = v86;
        *(__m128i *)((char *)v87 + 24) = v86;
        v87[3] = v86;
        if ( (unsigned __int64 *)v104 != &v87[4].m128i_u64[1] )
          *(_QWORD *)(a3 + 8) = (char *)v87 + 72;
      }
      else
      {
        for ( ; (__m128i *)v104 != v87; *(__m128i *)((char *)v87 - 24) = v86 )
        {
          v87[1].m128i_i8[0] = 0;
          v87 = (__m128i *)((char *)v87 + 24);
        }
        *(__m128i *)v119 = v86;
        *(__m128i *)v104 = v86;
        *(_QWORD *)(v104 + 16) = v120;
        if ( v105 != 48 )
        {
          *(__m128i *)(v104 + 24) = _mm_load_si128((const __m128i *)v119);
          *(_QWORD *)(v104 + 40) = v120;
          if ( v105 != 24 )
          {
            *(__m128i *)(v104 + 48) = _mm_load_si128((const __m128i *)v119);
            *(_QWORD *)(v104 + 64) = v120;
          }
        }
        *(_QWORD *)(a3 + 8) = v104 + 24 * (2 - 0xAAAAAAAAAAAAAAABLL * (v105 >> 3)) + 24;
      }
    }
    else
    {
      v109 = v86;
      v90 = operator new(0x48u);
      v91 = _mm_load_si128(&v109);
      v92 = v120;
      *(_QWORD *)a3 = v90;
      *(_QWORD *)(v90 + 16) = v92;
      *(_QWORD *)(v90 + 40) = v92;
      *(_QWORD *)(v90 + 64) = v92;
      *(_QWORD *)(a3 + 8) = v90 + 72;
      *(_QWORD *)(a3 + 16) = v90 + 72;
      *(__m128i *)v119 = v91;
      *(__m128i *)v90 = v91;
      *(__m128i *)(v90 + 24) = v91;
      *(__m128i *)(v90 + 48) = v91;
      if ( v87 )
        operator delete(v87, v89);
    }
    return 0;
  }
LABEL_70:
  v75 = *(__m128i **)(a3 + 8);
  v76 = *(const __m128i **)a3;
  v77 = (__int64)v75->m128i_i64 - *(_QWORD *)a3;
  if ( v75 != *(__m128i **)a3 )
    goto LABEL_71;
LABEL_75:
  v80 = (__int64)v76[-3].m128i_i64 + v77;
  v81 = (__int64)&v76[-1] + v77 - 8;
  if ( (_BYTE)v114 )
  {
    v82 = v110;
    *(_BYTE *)(v80 + 16) = 0;
    *(_QWORD *)v80 = v82;
    *(_QWORD *)(v80 + 8) = v82;
    v83 = v111;
    *(_BYTE *)(v81 + 16) = 0;
    *(_QWORD *)v81 = v83;
    *(_QWORD *)(v81 + 8) = v83;
    return 1;
  }
LABEL_95:
  v93 = v110;
  *(_QWORD *)v80 = v110;
  v94 = v76->m128i_i64[0] == v93;
  *(_QWORD *)(v80 + 8) = v76->m128i_i64[0];
  *(_BYTE *)(v80 + 16) = !v94;
  v95 = (std::locale *)v76->m128i_i64[1];
  v96 = v111;
  v94 = v95 == v111;
  *(_QWORD *)v81 = v95;
  *(_QWORD *)(v81 + 8) = v96;
  *(_BYTE *)(v81 + 16) = !v94;
  return 1;
}

