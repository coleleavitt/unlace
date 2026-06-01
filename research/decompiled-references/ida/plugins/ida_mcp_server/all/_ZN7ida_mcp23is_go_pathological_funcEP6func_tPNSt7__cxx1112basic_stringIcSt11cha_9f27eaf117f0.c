__int64 __fastcall ida_mcp::is_go_pathological_func(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  char *v4; // rdi
  char *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rbx
  __int64 v11; // r9
  __m128i si128; // xmm1
  __m128i v14; // xmm0
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // rdx
  const std::locale *v20; // r15
  int v21; // eax
  _QWORD *v22; // r14
  __int64 v23; // rax
  std::locale *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 inserted; // rax
  __int64 v28; // rdx
  char *v29; // r14
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  int v32; // r13d
  char *v33; // rdx
  char *v34; // rdi
  char *v35; // rax
  signed __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // rdi
  const char *v42; // r13
  char *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  std::locale *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 i; // rdx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rdi
  void **v58; // rax
  unsigned __int64 v59; // r15
  void *v60; // rdi
  __int64 j; // rax
  __int64 v62; // rax
  char *v63; // rax
  char *v64; // rax
  std::locale *v65; // rax
  int v66; // r8d
  int v67; // esi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // [rsp-10h] [rbp-360h]
  __int64 v73; // [rsp-8h] [rbp-358h]
  int v74; // [rsp+0h] [rbp-350h]
  _QWORD *v75; // [rsp+8h] [rbp-348h]
  __m128i v76; // [rsp+10h] [rbp-340h] BYREF
  __m128 v77; // [rsp+20h] [rbp-330h] BYREF
  std::locale *v78; // [rsp+30h] [rbp-320h]
  _QWORD *v79; // [rsp+38h] [rbp-318h]
  __int64 v80; // [rsp+48h] [rbp-308h] BYREF
  char *s; // [rsp+50h] [rbp-300h]
  __int128 v82; // [rsp+58h] [rbp-2F8h]
  char *haystack[4]; // [rsp+70h] [rbp-2E0h] BYREF
  __int64 v84[4]; // [rsp+90h] [rbp-2C0h] BYREF
  __int64 v85[6]; // [rsp+D0h] [rbp-280h] BYREF
  unsigned __int8 *v86; // [rsp+100h] [rbp-250h] BYREF
  _QWORD v87[9]; // [rsp+108h] [rbp-248h] BYREF
  _QWORD v88[2]; // [rsp+150h] [rbp-200h] BYREF
  __m128i v89; // [rsp+160h] [rbp-1F0h] BYREF
  __int64 v90; // [rsp+170h] [rbp-1E0h]
  __m128i v91; // [rsp+178h] [rbp-1D8h]
  const char *v92; // [rsp+188h] [rbp-1C8h]
  int v93; // [rsp+190h] [rbp-1C0h]
  int v94; // [rsp+194h] [rbp-1BCh]
  int v95; // [rsp+198h] [rbp-1B8h]
  __m128i *v96; // [rsp+1A0h] [rbp-1B0h]
  const char *v97; // [rsp+1A8h] [rbp-1A8h]
  char v98; // [rsp+1B0h] [rbp-1A0h]
  __m128i v99; // [rsp+1B8h] [rbp-198h]
  __int64 v100; // [rsp+1C8h] [rbp-188h]
  _QWORD v101[2]; // [rsp+1D0h] [rbp-180h] BYREF
  char v102; // [rsp+1E0h] [rbp-170h] BYREF
  void *v103; // [rsp+1F0h] [rbp-160h]
  __int64 v104; // [rsp+1F8h] [rbp-158h]
  __m128i v105; // [rsp+200h] [rbp-150h] BYREF
  _QWORD v106[2]; // [rsp+210h] [rbp-140h] BYREF
  char v107; // [rsp+220h] [rbp-130h] BYREF
  void *v108; // [rsp+230h] [rbp-120h]
  __int64 v109; // [rsp+238h] [rbp-118h]
  __m128i v110; // [rsp+240h] [rbp-110h]
  unsigned __int128 v111; // [rsp+250h] [rbp-100h]
  __int128 v112; // [rsp+260h] [rbp-F0h]
  unsigned __int128 v113; // [rsp+270h] [rbp-E0h]
  const std::locale *v114; // [rsp+280h] [rbp-D0h]
  __int64 v115; // [rsp+288h] [rbp-C8h]
  char v116[136]; // [rsp+290h] [rbp-C0h] BYREF
  unsigned __int64 v117; // [rsp+318h] [rbp-38h]

  v79 = a1;
  v117 = __readfsqword(0x28u);
  if ( !a1 )
  {
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  s = nullptr;
  v82 = 0;
  if ( get_func_name() <= 0 )
  {
    LODWORD(v10) = 0;
    goto LABEL_12;
  }
  if ( !(_BYTE)`guard variable for'ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11]
    && __cxa_guard_acquire(&`guard variable for'ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11]) )
  {
    v10 = ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11];
    v77 = _mm_loadh_ps((const double *)&off_443480);
    v76 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_443470), (__m128i)(unsigned __int64)"");
    v78 = (std::locale *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][2];
    std::locale::locale((std::locale *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][2]);
    *(_OWORD *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][4] = 0;
    LODWORD(v86) = 16;
    std::locale::locale(
      (std::locale *)haystack,
      (const std::locale *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][2]);
    v87[0] = 0x160000005ELL;
    si128 = _mm_load_si128((const __m128i *)&v77);
    v87[1] = 0x1700000024LL;
    v14 = _mm_load_si128(&v76);
    v87[3] = 0x140000002ALL;
    v87[4] = 0x150000002BLL;
    v87[5] = 0x120000003FLL;
    v87[6] = 0x130000007CLL;
    v87[7] = 0x130000000ALL;
    v87[8] = 0x1300000000LL;
    v88[0] = 0xA6E0C6608620030LL;
    v87[2] = 46;
    v88[1] = 0xB7609740D72LL;
    v90 = 192285044;
    v92 = ".[\\()*+?{|^$";
    v93 = 0;
    v94 = (int)v86;
    v89 = _mm_load_si128((const __m128i *)&xmmword_3E2400);
    v91 = si128;
    if ( ((unsigned __int8)v86 & 0x10) != 0 )
    {
      v96 = (__m128i *)v88;
      v15 = "^$\\.*+?()[]{}|";
    }
    else
    {
      v96 = &v89;
      v15 = ".[\\*^$";
      if ( ((unsigned __int8)v86 & 0x20) == 0 )
      {
        v15 = ".[\\()*+?{|^$";
        if ( ((unsigned __int8)v86 & 0x40) == 0 )
        {
          v15 = ".[\\*^$\n";
          if ( (BYTE1(v86) & 1) == 0 )
          {
            v15 = ".[\\()*+?{|^$\n";
            if ( (BYTE1(v86) & 2) == 0 )
            {
              v15 = nullptr;
              if ( ((unsigned __int8)v86 & 0x80) != 0 )
                v15 = ".[\\()*+?{|^$";
            }
          }
        }
      }
    }
    v97 = v15;
    v98 = 0;
    v99 = v14;
    v16 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
    v17 = *(_QWORD *)(*((_QWORD *)haystack[0] + 1) + 8 * v16);
    if ( !v17 )
      std::__throw_bad_cast();
    v100 = v17;
    v101[0] = &v102;
    v101[1] = 0;
    v102 = 0;
    if ( (v94 & 0x10) != 0 )
      v18 = std::__detail::_Scanner<char>::_M_eat_escape_ecma;
    else
      v18 = std::__detail::_Scanner<char>::_M_eat_escape_posix;
    v103 = v18;
    v75 = v87;
    v104 = 0;
    std::__detail::_Scanner<char>::_M_advance();
    std::locale::~locale((std::locale *)haystack);
    v105.m128i_i64[0] = 0;
    v19 = operator new(0x68u);
    *(_QWORD *)(v19 + 32) = 0;
    v20 = (const std::locale *)(v19 + 96);
    *(_QWORD *)(v19 + 8) = 0x100000001LL;
    *(_QWORD *)(v19 + 48) = 0;
    *(_QWORD *)(v19 + 56) = 0;
    *(_QWORD *)v19 = off_445320;
    v21 = (int)v86;
    *(_BYTE *)(v19 + 64) = 0;
    *(_DWORD *)(v19 + 40) = v21;
    *(_QWORD *)(v19 + 88) = 0;
    *(_OWORD *)(v19 + 16) = 0;
    *(_OWORD *)(v19 + 72) = 0;
    v78 = (std::locale *)v19;
    std::locale::locale((std::locale *)(v19 + 96));
    std::locale::locale(
      (std::locale *)&v80,
      (const std::locale *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][2]);
    std::locale::locale((std::locale *)haystack, v20);
    std::locale::operator=();
    std::locale::operator=();
    std::locale::~locale((std::locale *)haystack);
    std::locale::locale((std::locale *)haystack, (const std::locale *)&v80);
    std::locale::~locale((std::locale *)haystack);
    std::locale::~locale((std::locale *)&v80);
    v106[0] = &v107;
    v105.m128i_i64[1] = (__int64)v78;
    v105.m128i_i64[0] = (__int64)v78 + 16;
    v106[1] = 0;
    v107 = 0;
    v108 = nullptr;
    v109 = 8;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
    v108 = (void *)operator new(0x40u);
    v22 = v108;
    v78 = (std::locale *)((char *)v108 + 24);
    v23 = operator new(0x1F8u);
    v22[3] = v23;
    v24 = v78;
    *((_QWORD *)&v112 + 1) = v23;
    *(_QWORD *)&v112 = v23;
    v78 = (std::locale *)v101;
    v111 = __PAIR128__((unsigned __int64)v24, v23 + 504);
    v113 = __PAIR128__((unsigned __int64)v24, v23 + 504);
    v114 = v20;
    v77.m128_u64[0] = (unsigned __int64)v106;
    v110 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    v115 = std::use_facet<std::ctype<char>>();
    v78 = (std::locale *)v101;
    v25 = *(_QWORD *)(v105.m128i_i64[0] + 32);
    v77.m128_u64[0] = (unsigned __int64)v106;
    v26 = v105.m128i_i64[0];
    v76.m128i_i64[0] = v25;
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin();
    v28 = v76.m128i_i64[0];
    v76.m128i_i64[0] = inserted;
    *(_QWORD *)(*(_QWORD *)(v26 + 56) + 48 * v28 + 8) = inserted;
    v78 = (std::locale *)v101;
    v77.m128_u64[0] = (unsigned __int64)v106;
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction();
    if ( v95 != 27 )
    {
      v78 = (std::locale *)v101;
      v77.m128_u64[0] = (unsigned __int64)v106;
      std::__throw_regex_error();
      goto LABEL_25;
    }
    v78 = (std::locale *)v101;
    v77.m128_u64[0] = (unsigned __int64)v106;
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
    *(char **)(*(_QWORD *)(v26 + 56) + 48 * v76.m128i_i64[0] + 8) = haystack[1];
    v76.m128i_i64[0] = (__int64)haystack[2];
    v48 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end();
    v49 = v76.m128i_i64[0];
    v76.m128i_i64[0] = v48;
    *(_QWORD *)(*(_QWORD *)(v26 + 56) + 48 * v49 + 8) = v48;
    LODWORD(v85[0]) = 12;
    v85[1] = -1;
    v75 = (_QWORD *)std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state();
    std::__detail::_State<char>::~_State();
    v50 = v105.m128i_i64[0];
    *(_QWORD *)(*(_QWORD *)(v26 + 56) + 48 * v76.m128i_i64[0] + 8) = v75;
    v51 = *(_QWORD *)(v50 + 64);
    for ( i = *(_QWORD *)(v50 + 56); v51 != i; i += 48 )
    {
      v53 = *(_QWORD *)(i + 8);
      if ( v53 >= 0 )
      {
        v54 = *(_QWORD *)(v50 + 56);
        do
        {
          v55 = v54 + 48 * v53;
          if ( *(_DWORD *)v55 != 10 )
            break;
          v53 = *(_QWORD *)(v55 + 8);
          *(_QWORD *)(i + 8) = v53;
        }
        while ( v53 >= 0 );
      }
      if ( (unsigned int)(*(_DWORD *)i - 1) <= 1 || *(_DWORD *)i == 7 )
      {
        for ( j = *(_QWORD *)(i + 16); j >= 0; *(_QWORD *)(i + 16) = j )
        {
          v62 = *(_QWORD *)(v50 + 56) + 48 * j;
          if ( *(_DWORD *)v62 != 10 )
            break;
          j = *(_QWORD *)(v62 + 8);
        }
      }
    }
    v56 = _mm_load_si128(&v105);
    v57 = *(_QWORD *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][6];
    v105 = 0;
    *(__m128i *)&ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][4] = v56;
    if ( v57 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
    ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11][0] = 16;
    if ( v108 )
    {
      v58 = *((void ***)&v111 + 1);
      v59 = *((_QWORD *)&v113 + 1) + 8LL;
      if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(*((_QWORD *)&v113 + 1) + 8LL) )
      {
        do
        {
          v60 = *v58;
          v76.m128i_i64[0] = (__int64)v58;
          operator delete(v60, 0x1F8u);
          v58 = (void **)(v76.m128i_i64[0] + 8);
        }
        while ( v76.m128i_i64[0] + 8 < v59 );
      }
      operator delete(v108, 8 * v109);
    }
    std::string::_M_dispose();
    if ( v105.m128i_i64[1] )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
    std::string::_M_dispose();
    __cxa_atexit(
      (void (*)(void *))std::basic_regex<char,std::regex_traits<char>>::~basic_regex,
      ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11],
      &_dso_handle);
    __cxa_guard_release(&`guard variable for'ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11]);
  }
  if ( (_QWORD)v82 )
  {
    v78 = (std::locale *)s;
    v3 = strlen(s);
    LODWORD(v4) = (_DWORD)v78;
    LODWORD(v5) = (_DWORD)v78 + v3;
  }
  else
  {
    v5 = _qstring<char>::c_str(void)const::nullstr;
    v4 = _qstring<char>::c_str(void)const::nullstr;
  }
  memset(haystack, 0, sizeof(haystack));
  v6 = std::__detail::__regex_algo_impl<char const*,std::allocator<std::sub_match<char const*>>,char,std::regex_traits<char>>(
         (int)v4,
         (int)v5,
         (int)haystack,
         (int)ida_mcp::is_go_pathological_func(func_t *,std::string *)::go_generated[abi:cxx11],
         0,
         0,
         0);
  v9 = v72;
  LODWORD(v10) = v6;
  v11 = v73;
  if ( haystack[0] )
    operator delete(haystack[0], haystack[2] - haystack[0]);
  if ( (_BYTE)v10 )
  {
    if ( a2 )
    {
      std::string::basic_string<std::allocator<char>>(
        v85,
        "Go compiler-generated symbol: ",
        v7,
        v8,
        v9,
        v11,
        v74,
        (int)v75,
        v76.m128i_i64[0]);
      std::string::append();
      std::string::basic_string();
      std::string::operator=(a2, &v86);
      std::string::_M_dispose();
      std::string::_M_dispose();
    }
    goto LABEL_12;
  }
LABEL_25:
  v80 = 0;
  v77.m128_u64[0] = (unsigned __int64)&v80;
  if ( !(unsigned __int8)get_tinfo() )
    goto LABEL_26;
  memset(haystack, 0, 24);
  print_tinfo();
  v41 = haystack[0];
  if ( haystack[1] )
  {
    v78 = (std::locale *)haystack[1];
    v42 = haystack[0];
    v43 = strstr(haystack[0], "go.shape.");
    v47 = v78;
    if ( v43 && v43 - v42 != -1 || (v63 = strstr(v42, "go:itab."), v47 = v78, v63) && v63 - v42 != -1 )
    {
      if ( !a2 )
        goto LABEL_53;
    }
    else
    {
      v64 = strstr(v42, "go:info.");
      v47 = v78;
      if ( !v64 || v64 - v42 == -1 )
      {
        v41 = (char *)v42;
        v65 = (std::locale *)v42;
        v66 = 0;
        v67 = 0;
        do
        {
          if ( *(_BYTE *)v65 == 60 )
          {
            if ( v66 < ++v67 )
              v66 = v67;
          }
          else
          {
            v67 -= *(_BYTE *)v65 == 62;
          }
          v65 = (std::locale *)((char *)v65 + 1);
        }
        while ( v65 != (std::locale *)((char *)v78 + (_QWORD)v42) );
        if ( v66 <= 7 )
          goto LABEL_46;
        if ( a2 )
        {
          qsnprintf();
          std::string::basic_string<std::allocator<char>>(
            v84,
            "type signature has ",
            v68,
            v69,
            v70,
            v71,
            v74,
            (int)v75,
            v76.m128i_i64[0]);
          std::string::append();
          std::string::basic_string();
          std::string::append();
          std::string::basic_string();
          std::string::append();
          std::string::basic_string();
          std::string::operator=(a2, &v86);
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          v42 = haystack[0];
        }
        goto LABEL_52;
      }
      if ( !a2 )
      {
LABEL_52:
        if ( !v42 )
          goto LABEL_38;
LABEL_53:
        haystack[1] = nullptr;
        qfree();
        goto LABEL_38;
      }
    }
    std::string::basic_string<std::allocator<char>>(
      v85,
      "signature references Go shape/itab/info type: ",
      (__int64)v47,
      v44,
      v45,
      v46,
      v74,
      (int)v75,
      v76.m128i_i64[0]);
    std::string::append();
    std::string::basic_string();
    std::string::operator=(a2, &v86);
    std::string::_M_dispose();
    std::string::_M_dispose();
    v42 = haystack[0];
    goto LABEL_52;
  }
LABEL_46:
  if ( v41 )
  {
    haystack[1] = nullptr;
    qfree();
  }
LABEL_26:
  v78 = (std::locale *)v82;
  if ( (_QWORD)v82 )
  {
    v29 = s;
    v30 = v82;
  }
  else
  {
    v29 = _qstring<char>::c_str(void)const::nullstr;
    v30 = 0;
  }
  v31 = 0;
  v32 = 0;
LABEL_29:
  if ( v31 < (unsigned __int64)v78 )
  {
    v33 = (char *)v78 - v31;
    if ( (unsigned __int64)v78 - v31 > 3 )
    {
      v34 = &v29[v31];
      do
      {
        v35 = (char *)memchr(v34, 95, (size_t)(v33 - 3));
        if ( !v35 )
          break;
        if ( *(_DWORD *)v35 == 1599360095 )
        {
          v36 = v35 - v29;
          if ( v36 == -1 )
            break;
          ++v32;
          v31 = v36 + 4;
          if ( v32 == 8 )
          {
            if ( a2 )
            {
              qsnprintf();
              std::string::basic_string<std::allocator<char>>(
                v84,
                "Rust mangled name has ",
                v37,
                v38,
                v39,
                v40,
                v74,
                (int)v75,
                v76.m128i_i64[0]);
              std::string::append();
              std::string::basic_string();
              std::string::append();
              std::string::basic_string();
              std::string::append();
              std::string::basic_string();
              std::string::operator=(a2, &v86);
              std::string::_M_dispose();
              std::string::_M_dispose();
              std::string::_M_dispose();
              std::string::_M_dispose();
            }
            goto LABEL_38;
          }
          goto LABEL_29;
        }
        v34 = v35 + 1;
        v33 = (char *)(&v29[v30] - (v35 + 1));
      }
      while ( (unsigned __int64)v33 > 3 );
    }
  }
  if ( v79[1] - *v79 <= 0x4000u )
    goto LABEL_39;
  if ( a2 )
  {
    qsnprintf();
    strlen(v116);
    std::string::_M_replace();
  }
LABEL_38:
  LODWORD(v10) = 1;
LABEL_39:
  clear_tinfo_t();
LABEL_12:
  if ( s )
  {
    *(_QWORD *)&v82 = 0;
    qfree();
  }
  return (unsigned int)v10;
}

