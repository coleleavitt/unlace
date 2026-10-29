__int64 __fastcall std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_main_dispatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        std::locale *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v19; // rax
  const __m128i **v20; // rdx
  char *v22; // rax
  char *v23; // rbx
  size_t v24; // rdx
  __int64 v25; // rax
  char *v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r14
  char *v32; // rax
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // r13
  __int64 v37; // rax
  char *v38; // r14
  void *v39; // rdi
  __int64 v40; // rsi
  char *v41; // rax
  _BYTE *v43; // rax
  __m128i *v44; // r14
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int8 v47; // r15
  __m128i v48; // xmm0
  __int8 *v49; // rax
  unsigned __int8 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // r14
  __int64 v54; // r15
  unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 v57; // r14
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rcx
  unsigned __int8 v61; // al
  __int64 (__fastcall *v62)(); // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // esi
  __int64 v66; // rax
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  char v70; // r14
  int v71; // eax
  int v72; // edx
  __int64 v73; // rax
  char *v74; // r12
  void *v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rbx
  void *v80; // rdi
  __int64 v81; // rsi
  unsigned __int8 v82; // al
  char *v83; // [rsp+0h] [rbp-A8h]
  __int64 v84; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v85; // [rsp+17h] [rbp-91h]
  __m128i v86; // [rsp+20h] [rbp-88h] BYREF
  __int64 v87; // [rsp+30h] [rbp-78h]
  int v88[2]; // [rsp+38h] [rbp-70h]
  __int64 v89; // [rsp+48h] [rbp-60h] BYREF
  __int64 v90[11]; // [rsp+50h] [rbp-58h] BYREF

  v19 = *(_QWORD *)(a1 + 128);
  v20 = *(const __m128i ***)(a1 + 64);
  v90[3] = __readfsqword(0x28u);
  v90[0] = v19;
  *(_QWORD *)v88 = a1 + 96;
  std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::emplace_back<long &,std::vector<std::sub_match<char const*>> const&>(
    a1 + 96,
    v90,
    v20);
  v85 = 0;
  v22 = *(char **)(a1 + 96);
  v23 = *(char **)(a1 + 104);
  *(_BYTE *)(a1 + 140) = 0;
  v83 = v22;
  if ( v22 == v23 )
    return v85;
  do
  {
    v24 = 0xAAAAAAAAAAAAAAABLL
        * ((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL) - *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL)) >> 4);
    if ( v24 )
      memset(*(void **)(a1 + 120), 0, v24);
    v25 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    *(_OWORD *)(a1 + 96) = 0;
    v84 = v25;
    v26 = v83;
    if ( v23 == v83 )
    {
      v73 = *(_QWORD *)(a1 + 24);
      v85 |= *(_BYTE *)(a1 + 140);
      if ( *(_QWORD *)(a1 + 40) != v73 )
      {
        *(_QWORD *)(a1 + 24) = v73 + 1;
        goto LABEL_16;
      }
      goto LABEL_83;
    }
    do
    {
      v27 = _mm_loadu_si128((const __m128i *)(v26 + 8));
      v28 = *((_QWORD *)v26 + 3);
      *((_QWORD *)v26 + 3) = 0;
      *(_OWORD *)(v26 + 8) = 0;
      v29 = *(__m128i **)a1;
      v30 = *(_QWORD *)(a1 + 16);
      *(__m128i *)a1 = v27;
      *(_QWORD *)(a1 + 16) = v28;
      if ( v29 )
        operator delete(v29, v30 - (_QWORD)v29);
      v31 = *(_QWORD *)v26;
      v32 = (char *)(*(_QWORD *)v26 + *(_QWORD *)(a1 + 120));
      v33 = *v32;
      if ( !*v32 )
      {
        v34 = *(_QWORD *)(a1 + 56);
        *v32 = 1;
        v35 = *(_QWORD *)(v34 + 56) + 48 * v31;
        v36 = v35;
        switch ( *(_DWORD *)v35 )
        {
          case 1:
            if ( (*(_BYTE *)(v34 + 24) & 0x10) != 0 )
            {
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
              if ( !*(_BYTE *)(a1 + 140) )
                goto LABEL_26;
            }
            else
            {
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
              v70 = *(_BYTE *)(a1 + 140);
              *(_BYTE *)(a1 + 140) = 0;
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
              *(_BYTE *)(a1 + 140) |= v70;
            }
            break;
          case 2:
            if ( !*(_BYTE *)(v35 + 24) )
            {
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_rep_once_more();
              goto LABEL_26;
            }
            if ( !*(_BYTE *)(a1 + 140) )
            {
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
              if ( !*(_BYTE *)(a1 + 140) )
                std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_rep_once_more();
            }
            break;
          case 3:
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_handle_backref();
            break;
          case 4:
            v63 = *(_QWORD *)(a1 + 24);
            if ( v63 == *(_QWORD *)(a1 + 32) )
            {
              v71 = *(_DWORD *)(a1 + 136);
              if ( (v71 & 1) == 0
                && ((v71 & 0x80u) == 0
                 || (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0
                 && (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_is_line_terminator()) )
              {
                goto LABEL_26;
              }
            }
            else
            {
              v64 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
              if ( (~*(_DWORD *)(v64 + 24) & 0x810) == 0 )
              {
                v65 = v64 + 80;
                v57 = *(_BYTE *)(v63 - 1);
                std::locale::locale((std::locale *)v90, (const std::locale *)(v64 + 80));
                v66 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
                v59 = *(_QWORD *)(*(_QWORD *)(v90[0] + 8) + 8 * v66);
                if ( !v59 )
                  std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_main_dispatch(
                    (int)&std::ctype<char>::id,
                    v65,
                    v66,
                    v67,
                    v68,
                    v69,
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
                    a19);
                goto LABEL_37;
              }
            }
            break;
          case 5:
            v55 = *(unsigned __int8 **)(a1 + 24);
            if ( v55 == *(unsigned __int8 **)(a1 + 40) )
            {
              if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
                goto LABEL_26;
            }
            else
            {
              v56 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
              if ( (~*(_DWORD *)(v56 + 24) & 0x810) != 0 )
                break;
              v57 = *v55;
              std::locale::locale((std::locale *)v90, (const std::locale *)(v56 + 80));
              v58 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
              v59 = *(_QWORD *)(*(_QWORD *)(v90[0] + 8) + 8 * v58);
              if ( !v59 )
                JUMPOUT(0xDCD89);
LABEL_37:
              std::locale::~locale((std::locale *)v90);
              v60 = v57;
              v61 = *(_BYTE *)(v59 + v57 + 313);
              if ( !v61 )
              {
                v62 = *(__int64 (__fastcall **)())(*(_QWORD *)v59 + 64LL);
                if ( v62 != std::ctype<char>::do_narrow )
                {
                  v86.m128i_i64[0] = v57;
                  v82 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v62)(v59, (unsigned int)(char)v57, 32);
                  v60 = v86.m128i_i64[0];
                  v57 = v82;
                }
                if ( v57 == 32 )
                  break;
                *(_BYTE *)(v59 + v60 + 313) = v57;
                v61 = v57;
              }
              if ( v61 == 10 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x10) != 0 && v61 == 13 )
                goto LABEL_26;
            }
            break;
          case 6:
            v49 = *(__int8 **)(a1 + 24);
            if ( v49 == *(__int8 **)(a1 + 32) )
            {
              v72 = *(_DWORD *)(a1 + 136);
              if ( (v72 & 4) == 0 )
              {
                if ( v49 != *(__int8 **)(a1 + 40) )
                {
                  if ( (v72 & 0x80) != 0 )
                  {
LABEL_29:
                    v50 = *(v49 - 1);
                    v86.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
                    v51 = std::regex_traits<char>::lookup_classname<char const*>();
                    v33 = std::regex_traits<char>::isctype(v86.m128i_i64[0], v50, v51, SBYTE2(v51));
                    v49 = *(__int8 **)(a1 + 24);
                    if ( v49 == *(__int8 **)(a1 + 40) )
                      goto LABEL_31;
                  }
                  v86.m128i_i8[0] = *v49;
                  v87 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
                  v52 = std::regex_traits<char>::lookup_classname<char const*>();
                  v33 ^= std::regex_traits<char>::isctype(v87, v86.m128i_u8[0], v52, SBYTE2(v52));
                  goto LABEL_31;
                }
                if ( (v72 & 8) == 0 && (v72 & 0x80) != 0 )
                  goto LABEL_29;
              }
            }
            else if ( v49 != *(__int8 **)(a1 + 40) || (*(_BYTE *)(a1 + 136) & 8) == 0 )
            {
              goto LABEL_29;
            }
LABEL_31:
            if ( *(_BYTE *)(v36 + 24) != v33 )
              goto LABEL_26;
            break;
          case 7:
            if ( (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_lookahead() != *(_BYTE *)(v35 + 24) )
LABEL_26:
              std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            break;
          case 8:
            v53 = (__int64 *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v35 + 16));
            v54 = *v53;
            *v53 = *(_QWORD *)(a1 + 24);
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            *v53 = v54;
            break;
          case 9:
            v44 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v35 + 16));
            v45 = *(_QWORD *)(a1 + 24);
            v46 = _mm_loadu_si128(v44);
            v47 = v44[1].m128i_i8[0];
            v44[1].m128i_i8[0] = 1;
            v44->m128i_i64[1] = v45;
            v86 = v46;
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            v48 = _mm_load_si128(&v86);
            v44[1].m128i_i8[0] = v47;
            *v44 = v48;
            break;
          case 0xB:
            v43 = *(_BYTE **)(a1 + 24);
            if ( v43 != *(_BYTE **)(a1 + 40) )
            {
              LOBYTE(v90[0]) = *v43;
              if ( !*(_QWORD *)(v35 + 32) )
                std::__throw_bad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v35 + 40))(v35 + 16, v90) )
              {
                v89 = *(_QWORD *)(v36 + 8);
                std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::emplace_back<long &,std::vector<std::sub_match<char const*>> const&>(
                  *(__int64 *)v88,
                  &v89,
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
              std::vector<std::sub_match<char const*>>::operator=(*(__int64 **)(a1 + 64), (const __m128i **)a1);
              break;
            }
            if ( (*(_BYTE *)(a1 + 136) & 0x20) == 0 && !*(_BYTE *)(a1 + 140) )
              goto LABEL_75;
            break;
          default:
            break;
        }
      }
      v26 += 32;
    }
    while ( v23 != v26 );
    v37 = *(_QWORD *)(a1 + 24);
    v85 |= *(_BYTE *)(a1 + 140);
    if ( v37 == *(_QWORD *)(a1 + 40) )
    {
      v74 = v83;
      do
      {
        while ( 1 )
        {
          v75 = *((void **)v74 + 1);
          if ( !v75 )
            break;
          v76 = *((_QWORD *)v74 + 3);
          v74 += 32;
          operator delete(v75, v76 - (_QWORD)v75);
          if ( v23 == v74 )
            goto LABEL_83;
        }
        v74 += 32;
      }
      while ( v23 != v74 );
LABEL_83:
      if ( v83 )
        operator delete(v83, v84 - (_QWORD)v83);
      v77 = *(_QWORD *)(a1 + 96);
      v78 = *(_QWORD *)(a1 + 104);
      if ( v78 != v77 )
      {
        v79 = *(_QWORD *)(a1 + 96);
        do
        {
          while ( 1 )
          {
            v80 = *(void **)(v79 + 8);
            if ( !v80 )
              break;
            v81 = *(_QWORD *)(v79 + 24);
            v79 += 32;
            operator delete(v80, v81 - (_QWORD)v80);
            if ( v79 == v78 )
            {
              *(_QWORD *)(a1 + 104) = v77;
              return v85;
            }
          }
          v79 += 32;
        }
        while ( v79 != v78 );
        *(_QWORD *)(a1 + 104) = v77;
      }
      return v85;
    }
    v38 = v83;
    *(_QWORD *)(a1 + 24) = v37 + 1;
    do
    {
      while ( 1 )
      {
        v39 = *((void **)v38 + 1);
        if ( !v39 )
          break;
        v40 = *((_QWORD *)v38 + 3);
        v38 += 32;
        operator delete(v39, v40 - (_QWORD)v39);
        if ( v23 == v38 )
          goto LABEL_16;
      }
      v38 += 32;
    }
    while ( v23 != v38 );
LABEL_16:
    if ( v83 )
      operator delete(v83, v84 - (_QWORD)v83);
    v41 = *(char **)(a1 + 96);
    v23 = *(char **)(a1 + 104);
    *(_BYTE *)(a1 + 140) = 0;
    v83 = v41;
  }
  while ( v23 != v41 );
  return v85;
}

