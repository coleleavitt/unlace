__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        std::locale *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int64 a23)
{
  __int64 v23; // rax
  const __m128i **v24; // rdx
  char *v26; // rax
  char *v27; // rbx
  size_t v28; // rdx
  __int64 v29; // rax
  char *v30; // r12
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r14
  char *v36; // rax
  char v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r10
  __int64 v40; // r13
  __int64 v41; // rax
  char *v42; // r14
  void *v43; // rdi
  __int64 v44; // rsi
  char *v45; // rax
  _BYTE *v47; // rax
  __m128i *v48; // r14
  __int64 v49; // rax
  __int8 v50; // r15
  __int64 v51; // rax
  unsigned __int8 *v52; // rax
  unsigned __int8 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // r14
  __int64 v57; // r15
  unsigned __int8 *v58; // rdx
  __int64 v59; // rcx
  unsigned __int8 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rcx
  unsigned __int8 v64; // al
  __int64 (__fastcall *v65)(__int64, unsigned int); // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // esi
  __int64 v69; // rax
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  char v73; // r14
  int v74; // eax
  int v75; // edx
  __int64 v76; // rax
  char *v77; // r12
  void *v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // r13
  __int64 v81; // r12
  __int64 v82; // rbx
  void *v83; // rdi
  __int64 v84; // rsi
  unsigned __int8 v85; // al
  char *v86; // [rsp+8h] [rbp-C0h]
  __int64 v87; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v88; // [rsp+1Fh] [rbp-A9h]
  __int64 v89; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v90; // [rsp+28h] [rbp-A0h]
  __int64 v91; // [rsp+30h] [rbp-98h]
  __int64 v92; // [rsp+38h] [rbp-90h]
  __int64 v93[5]; // [rsp+48h] [rbp-80h] BYREF
  int v94[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v95; // [rsp+80h] [rbp-48h]
  __int64 v96; // [rsp+88h] [rbp-40h]

  v23 = *(_QWORD *)(a1 + 128);
  v24 = *(const __m128i ***)(a1 + 64);
  v96 = __readfsqword(0x28u);
  *(_QWORD *)v94 = v23;
  v92 = a1 + 96;
  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
    a1 + 96,
    v94,
    v24);
  v88 = 0;
  v26 = *(char **)(a1 + 96);
  v27 = *(char **)(a1 + 104);
  *(_BYTE *)(a1 + 140) = 0;
  v86 = v26;
  if ( v26 == v27 )
    return v88;
  do
  {
    v28 = 0xAAAAAAAAAAAAAAABLL
        * ((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL) - *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL)) >> 4);
    if ( v28 )
      memset(*(void **)(a1 + 120), 0, v28);
    v29 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    *(_OWORD *)(a1 + 96) = 0;
    v87 = v29;
    v30 = v86;
    if ( v27 == v86 )
    {
      v76 = *(_QWORD *)(a1 + 24);
      v88 |= *(_BYTE *)(a1 + 140);
      if ( *(_QWORD *)(a1 + 40) != v76 )
      {
        *(_QWORD *)(a1 + 24) = v76 + 1;
        goto LABEL_16;
      }
      goto LABEL_83;
    }
    do
    {
      v31 = _mm_loadu_si128((const __m128i *)(v30 + 8));
      v32 = *((_QWORD *)v30 + 3);
      *((_QWORD *)v30 + 3) = 0;
      *(_OWORD *)(v30 + 8) = 0;
      v33 = *(__m128i **)a1;
      v34 = *(_QWORD *)(a1 + 16);
      *(__m128i *)a1 = v31;
      *(_QWORD *)(a1 + 16) = v32;
      if ( v33 )
        operator delete(v33, v34 - (_QWORD)v33);
      v35 = *(_QWORD *)v30;
      v36 = (char *)(*(_QWORD *)v30 + *(_QWORD *)(a1 + 120));
      v37 = *v36;
      if ( !*v36 )
      {
        v38 = *(_QWORD *)(a1 + 56);
        *v36 = 1;
        v39 = *(_QWORD *)(v38 + 56) + 48 * v35;
        v40 = v39;
        switch ( *(_DWORD *)v39 )
        {
          case 1:
            if ( (*(_BYTE *)(v38 + 24) & 0x10) != 0 )
            {
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
              if ( !*(_BYTE *)(a1 + 140) )
                goto LABEL_26;
            }
            else
            {
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
              v73 = *(_BYTE *)(a1 + 140);
              *(_BYTE *)(a1 + 140) = 0;
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
              *(_BYTE *)(a1 + 140) |= v73;
            }
            break;
          case 2:
            if ( !*(_BYTE *)(v39 + 24) )
            {
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more();
              goto LABEL_26;
            }
            if ( !*(_BYTE *)(a1 + 140) )
            {
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
              if ( !*(_BYTE *)(a1 + 140) )
                std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more();
            }
            break;
          case 3:
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref();
            break;
          case 4:
            v66 = *(_QWORD *)(a1 + 24);
            if ( v66 == *(_QWORD *)(a1 + 32) )
            {
              v74 = *(_DWORD *)(a1 + 136);
              if ( (v74 & 1) == 0
                && ((v74 & 0x80u) == 0
                 || (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0
                 && (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_line_terminator()) )
              {
                goto LABEL_26;
              }
            }
            else
            {
              v67 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
              if ( (~*(_DWORD *)(v67 + 24) & 0x810) == 0 )
              {
                v68 = v67 + 80;
                v60 = *(_BYTE *)(v66 - 1);
                std::locale::locale((std::locale *)v94, (const std::locale *)(v67 + 80));
                v69 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
                v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v94 + 8LL) + 8 * v69);
                if ( !v62 )
                  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
                    (int)&std::ctype<char>::id,
                    v68,
                    v69,
                    v70,
                    v71,
                    v72,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    a12,
                    a13,
                    a14,
                    a15,
                    a16,
                    a17,
                    a18,
                    a19,
                    a20,
                    a21,
                    a22,
                    a23);
                goto LABEL_37;
              }
            }
            break;
          case 5:
            v58 = *(unsigned __int8 **)(a1 + 24);
            if ( v58 == *(unsigned __int8 **)(a1 + 40) )
            {
              if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
                goto LABEL_26;
            }
            else
            {
              v59 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
              if ( (~*(_DWORD *)(v59 + 24) & 0x810) != 0 )
                break;
              v60 = *v58;
              std::locale::locale((std::locale *)v94, (const std::locale *)(v59 + 80));
              v61 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
              v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v94 + 8LL) + 8 * v61);
              if ( !v62 )
                JUMPOUT(0x15A0E6);
LABEL_37:
              std::locale::~locale((std::locale *)v94);
              v63 = v60;
              v64 = *(_BYTE *)(v62 + v60 + 313);
              if ( !v64 )
              {
                v65 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v62 + 64LL);
                if ( v65 != std::ctype<char>::do_narrow )
                {
                  v85 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v65)(v62, (unsigned int)(char)v60, 32);
                  v63 = v60;
                  v60 = v85;
                }
                if ( v60 == 32 )
                  break;
                *(_BYTE *)(v62 + v63 + 313) = v60;
                v64 = v60;
              }
              if ( v64 == 10 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x10) != 0 && v64 == 13 )
                goto LABEL_26;
            }
            break;
          case 6:
            v52 = *(unsigned __int8 **)(a1 + 24);
            if ( v52 == *(unsigned __int8 **)(a1 + 32) )
            {
              v75 = *(_DWORD *)(a1 + 136);
              if ( (v75 & 4) == 0 )
              {
                if ( v52 != *(unsigned __int8 **)(a1 + 40) )
                {
                  if ( (v75 & 0x80) != 0 )
                  {
LABEL_29:
                    v53 = *(v52 - 1);
                    v89 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
                    v54 = std::regex_traits<char>::lookup_classname<char const*>();
                    v37 = std::regex_traits<char>::isctype(v89, v53, v54, SBYTE2(v54));
                    v52 = *(unsigned __int8 **)(a1 + 24);
                    if ( v52 == *(unsigned __int8 **)(a1 + 40) )
                      goto LABEL_31;
                  }
                  v90 = *v52;
                  v91 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
                  v55 = std::regex_traits<char>::lookup_classname<char const*>();
                  v37 ^= std::regex_traits<char>::isctype(v91, v90, v55, SBYTE2(v55));
                  goto LABEL_31;
                }
                if ( (v75 & 8) == 0 && (v75 & 0x80) != 0 )
                  goto LABEL_29;
              }
            }
            else if ( v52 != *(unsigned __int8 **)(a1 + 40) || (*(_BYTE *)(a1 + 136) & 8) == 0 )
            {
              goto LABEL_29;
            }
LABEL_31:
            if ( *(_BYTE *)(v40 + 24) != v37 )
              goto LABEL_26;
            break;
          case 7:
            if ( (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead() != *(_BYTE *)(v39 + 24) )
LABEL_26:
              std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            break;
          case 8:
            v56 = (__int64 *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v39 + 16));
            v57 = *v56;
            *v56 = *(_QWORD *)(a1 + 24);
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            *v56 = v57;
            break;
          case 9:
            v48 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v39 + 16));
            *(__m128i *)v94 = _mm_loadu_si128(v48);
            v95 = v48[1].m128i_i64[0];
            v49 = *(_QWORD *)(a1 + 24);
            v50 = v48[1].m128i_i8[0];
            v48[1].m128i_i8[0] = 1;
            v48->m128i_i64[1] = v49;
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            v48->m128i_i64[0] = *(_QWORD *)v94;
            v51 = *(_QWORD *)&v94[2];
            v48[1].m128i_i8[0] = v50;
            v48->m128i_i64[1] = v51;
            break;
          case 0xB:
            v47 = *(_BYTE **)(a1 + 24);
            if ( v47 != *(_BYTE **)(a1 + 40) )
            {
              LOBYTE(v94[0]) = *v47;
              if ( !*(_QWORD *)(v39 + 32) )
                std::__throw_bad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(v39 + 40))(v39 + 16, v94) )
              {
                v93[0] = *(_QWORD *)(v40 + 8);
                std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
                  v92,
                  v93,
                  (const __m128i **)a1);
              }
            }
            break;
          case 0xC:
            if ( *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 32) )
            {
              if ( *(_BYTE *)(a1 + 140) )
                break;
LABEL_75:
              *(_BYTE *)(a1 + 140) = 1;
              std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
                *(__int64 **)(a1 + 64),
                (const __m128i **)a1);
              break;
            }
            if ( (*(_BYTE *)(a1 + 136) & 0x20) == 0 && !*(_BYTE *)(a1 + 140) )
              goto LABEL_75;
            break;
          default:
            break;
        }
      }
      v30 += 32;
    }
    while ( v27 != v30 );
    v41 = *(_QWORD *)(a1 + 24);
    v88 |= *(_BYTE *)(a1 + 140);
    if ( v41 == *(_QWORD *)(a1 + 40) )
    {
      v77 = v86;
      do
      {
        while ( 1 )
        {
          v78 = *((void **)v77 + 1);
          if ( !v78 )
            break;
          v79 = *((_QWORD *)v77 + 3);
          v77 += 32;
          operator delete(v78, v79 - (_QWORD)v78);
          if ( v27 == v77 )
            goto LABEL_83;
        }
        v77 += 32;
      }
      while ( v27 != v77 );
LABEL_83:
      if ( v86 )
        operator delete(v86, v87 - (_QWORD)v86);
      v80 = *(_QWORD *)(a1 + 96);
      v81 = *(_QWORD *)(a1 + 104);
      if ( v80 != v81 )
      {
        v82 = *(_QWORD *)(a1 + 96);
        do
        {
          while ( 1 )
          {
            v83 = *(void **)(v82 + 8);
            if ( !v83 )
              break;
            v84 = *(_QWORD *)(v82 + 24);
            v82 += 32;
            operator delete(v83, v84 - (_QWORD)v83);
            if ( v82 == v81 )
            {
              *(_QWORD *)(a1 + 104) = v80;
              return v88;
            }
          }
          v82 += 32;
        }
        while ( v82 != v81 );
        *(_QWORD *)(a1 + 104) = v80;
      }
      return v88;
    }
    v42 = v86;
    *(_QWORD *)(a1 + 24) = v41 + 1;
    do
    {
      while ( 1 )
      {
        v43 = *((void **)v42 + 1);
        if ( !v43 )
          break;
        v44 = *((_QWORD *)v42 + 3);
        v42 += 32;
        operator delete(v43, v44 - (_QWORD)v43);
        if ( v27 == v42 )
          goto LABEL_16;
      }
      v42 += 32;
    }
    while ( v27 != v42 );
LABEL_16:
    if ( v86 )
      operator delete(v86, v87 - (_QWORD)v86);
    v45 = *(char **)(a1 + 96);
    v27 = *(char **)(a1 + 104);
    *(_BYTE *)(a1 + 140) = 0;
    v86 = v45;
  }
  while ( v27 != v45 );
  return v88;
}

