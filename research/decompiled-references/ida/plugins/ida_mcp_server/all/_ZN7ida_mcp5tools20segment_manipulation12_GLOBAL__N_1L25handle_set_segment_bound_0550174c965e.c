__int64 __fastcall ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_bounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24,
        __int64 a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        __int64 a47)
{
  void *v47; // rbp
  std::runtime_error *exception; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v49; // r14
  nlohmann::json_abi_v3_12_0::detail::type_error *v50; // rbp
  char v51; // bl
  char v52; // dl
  char v53; // bp
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  char *v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  _QWORD *v62; // rbp
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rbx
  size_t v69; // r13
  __int64 v70; // rax
  __int64 v71; // r14
  _QWORD *v72; // r15
  size_t v73; // r12
  size_t v74; // rdx
  int v75; // eax
  __int64 v76; // r12
  size_t v77; // rcx
  size_t v78; // rdx
  signed __int64 v79; // rax
  _QWORD *v81; // r10
  _QWORD *v82; // rax
  __int64 v83; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v85; // rdx
  _QWORD *v86; // r10
  __int64 v87; // rbx
  __int64 v88; // rbp
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // rbx
  size_t v92; // rdx
  int v93; // eax
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // r13
  size_t v96; // rdx
  int v97; // eax
  _BYTE *v98; // rax
  char v99; // dl
  char v100; // bp
  __int64 v101; // rbx
  __int64 v102; // r15
  size_t v103; // rdx
  int v104; // eax
  unsigned __int64 v105; // rbx
  _BYTE *v106; // rbx
  char v107; // dl
  char v108; // bl
  __int64 v109; // rax
  unsigned int v110; // edx
  __int64 v111; // rax
  unsigned int v112; // eax
  unsigned __int64 v113; // rsi
  char *v114; // rbx
  unsigned int v115; // eax
  unsigned int v116; // eax
  __int64 v117; // rdi
  unsigned __int64 v118; // rcx
  unsigned int v119; // edx
  unsigned int v120; // edx
  unsigned int v121; // esi
  __int64 v122; // rdi
  int v123; // [rsp+0h] [rbp-188h]
  int v124; // [rsp+0h] [rbp-188h]
  int v125; // [rsp+8h] [rbp-180h]
  __int64 v126; // [rsp+8h] [rbp-180h]
  __int64 v127; // [rsp+10h] [rbp-178h]
  char *v128; // [rsp+10h] [rbp-178h]
  _QWORD *v130; // [rsp+30h] [rbp-158h]
  __int64 v131; // [rsp+48h] [rbp-140h]
  size_t v132; // [rsp+50h] [rbp-138h]
  _QWORD *v133; // [rsp+50h] [rbp-138h]
  __int64 v134; // [rsp+98h] [rbp-F0h]
  __int64 v135; // [rsp+98h] [rbp-F0h]
  void *v136; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-E0h]
  _QWORD v138[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v139; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v140; // [rsp+C8h] [rbp-C0h]
  _QWORD v141[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void *s2; // [rsp+E0h] [rbp-A8h] BYREF
  size_t n; // [rsp+E8h] [rbp-A0h]
  _QWORD v144[2]; // [rsp+F0h] [rbp-98h] BYREF
  char v145[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v146; // [rsp+148h] [rbp-40h]

  v146 = __readfsqword(0x28u);
  LOBYTE(v144[0]) = 0;
  n = 0;
  v51 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  s2 = v144;
  if ( v51 != 3 )
    JUMPOUT(0x135F24);
  std::string::_M_assign();
  ida_mcp::parse_ea(s2, n);
  v53 = v52;
  if ( s2 != v144 )
    operator delete(s2, v144[0] + 1LL);
  if ( !v53 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( !getseg() )
  {
    v47 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v47,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v136, v145, v54, v55, v56, v57, v123, a1, (__int64)v144);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = (_QWORD *)operator new(0x20u);
  v61 = (__int64)(v58 + 2);
  v62 = v58;
  v63 = v137;
  *v58 = v58 + 2;
  if ( v136 == v138 )
  {
    v112 = v63 + 1;
    if ( (unsigned int)(v63 + 1) >= 8 )
    {
      v62[2] = v138[0];
      *(_QWORD *)(v61 + v112 - 8) = *(_QWORD *)((char *)&v138[-1] + v112);
      v113 = (unsigned __int64)(v62 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v61 -= v113;
      v114 = (char *)v138 - v61;
      v115 = (v61 + v112) & 0xFFFFFFF8;
      v59 = (char *)v138 - v61;
      if ( v115 >= 8 )
      {
        v116 = v115 & 0xFFFFFFF8;
        LODWORD(v61) = 0;
        do
        {
          v117 = (unsigned int)v61;
          v61 = (unsigned int)(v61 + 8);
          v60 = *(_QWORD *)&v114[v117];
          *(_QWORD *)(v113 + v117) = v60;
        }
        while ( (unsigned int)v61 < v116 );
      }
    }
    else if ( (v112 & 4) != 0 )
    {
      *((_DWORD *)v62 + 4) = v138[0];
      *(_DWORD *)(v61 + v112 - 4) = *(_DWORD *)((char *)&v137 + v112 + 4);
    }
    else if ( (_DWORD)v63 != -1 )
    {
      *((_BYTE *)v62 + 16) = v138[0];
      if ( (v112 & 2) != 0 )
        *(_WORD *)(v61 + v112 - 2) = *(_WORD *)((char *)&v137 + v112 + 6);
    }
  }
  else
  {
    *v58 = v136;
    v58[2] = v138[0];
  }
  v62[1] = v63;
  LOBYTE(v138[0]) = 0;
  v136 = v138;
  v137 = 0;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&s2,
    "address",
    v61,
    v63,
    (__int64)v59,
    v60,
    v124,
    v125,
    v127);
  if ( !*(_BYTE *)v126 )
  {
    *(_BYTE *)v126 = 1;
    v131 = operator new(0x30u);
    v69 = n;
    *(_DWORD *)(v131 + 8) = 0;
    v72 = (_QWORD *)(v131 + 8);
    *(_QWORD *)(v131 + 16) = 0;
    *(_QWORD *)(v131 + 24) = v131 + 8;
    *(_QWORD *)(v131 + 32) = v131 + 8;
    *(_QWORD *)(v131 + 40) = 0;
    v130 = (_QWORD *)(v131 + 8);
    *(_QWORD *)(v126 + 8) = v131;
    v68 = (char *)s2;
    goto LABEL_37;
  }
  if ( *(_BYTE *)v126 != 1 )
    ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_bounds(
      (__int64)&s2,
      (__int64)"address",
      v64,
      v65,
      v66,
      v67,
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
      a23,
      a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      a31,
      a32,
      a33,
      a34,
      a35,
      a36,
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47);
  v68 = (char *)s2;
  v69 = n;
  v70 = *(_QWORD *)(v126 + 8);
  v71 = *(_QWORD *)(v70 + 16);
  v72 = (_QWORD *)(v70 + 8);
  v131 = v70;
  v130 = (_QWORD *)(v70 + 8);
  if ( !v71 )
  {
LABEL_37:
    v81 = (_QWORD *)operator new(0x50u);
    v82 = v81 + 6;
    v81[4] = v81 + 6;
    if ( v68 == v128 )
    {
      v110 = v69 + 1;
      if ( (unsigned int)(v69 + 1) >= 8 )
      {
        v81[6] = *(_QWORD *)v128;
        *(_QWORD *)((char *)v82 + v110 - 8) = *(_QWORD *)&v128[v110 - 8];
        v118 = (unsigned __int64)(v81 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v119 = ((_DWORD)v82 - v118 + v110) & 0xFFFFFFF8;
        if ( v119 >= 8 )
        {
          v120 = v119 & 0xFFFFFFF8;
          v121 = 0;
          do
          {
            v122 = v121;
            v121 += 8;
            *(_QWORD *)(v118 + v122) = *(_QWORD *)(v128 - ((char *)v82 - v118) + v122);
          }
          while ( v121 < v120 );
        }
      }
      else if ( (v110 & 4) != 0 )
      {
        *((_DWORD *)v81 + 12) = *(_DWORD *)v128;
        *(_DWORD *)((char *)v82 + v110 - 4) = *(_DWORD *)&v128[v110 - 4];
      }
      else if ( (_DWORD)v69 != -1 )
      {
        *((_BYTE *)v81 + 48) = *v128;
        if ( (v110 & 2) != 0 )
          *(_WORD *)((char *)v82 + v110 - 2) = *(_WORD *)&v128[v110 - 2];
      }
      v68 = (char *)(v81 + 6);
    }
    else
    {
      v83 = v144[0];
      v81[4] = v68;
      v81[6] = v83;
    }
    v81[5] = v69;
    v81[8] = 0;
    v81[9] = 0;
    v133 = v81;
    s2 = v128;
    n = 0;
    LOBYTE(v144[0]) = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                               (_QWORD *)v131,
                               v72,
                               v68,
                               v69);
    v86 = v133;
    v72 = insert_hint_unique_pos;
    if ( v85 )
    {
      if ( !insert_hint_unique_pos && v130 != (_QWORD *)v85 )
      {
        std::string::compare(v68, v69, *(const void **)(v85 + 32), *(_QWORD *)(v85 + 40));
        v86 = v133;
      }
      v72 = v86;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v131 + 40);
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
      operator delete(v133, 0x50u);
    }
    v68 = (char *)s2;
    goto LABEL_30;
  }
  do
  {
    while ( 1 )
    {
      v73 = *(_QWORD *)(v71 + 40);
      v74 = v69;
      if ( v73 <= v69 )
        v74 = *(_QWORD *)(v71 + 40);
      if ( v74 )
      {
        v75 = memcmp(*(const void **)(v71 + 32), v68, v74);
        if ( v75 )
          goto LABEL_20;
      }
      v76 = v73 - v69;
      if ( v76 <= 0x7FFFFFFF )
        break;
LABEL_12:
      v72 = (_QWORD *)v71;
      v71 = *(_QWORD *)(v71 + 16);
      if ( !v71 )
        goto LABEL_22;
    }
    if ( v76 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_21;
    v75 = v76;
LABEL_20:
    if ( v75 >= 0 )
      goto LABEL_12;
LABEL_21:
    v71 = *(_QWORD *)(v71 + 24);
  }
  while ( v71 );
LABEL_22:
  if ( v130 == v72 )
    goto LABEL_37;
  v77 = v72[5];
  v78 = v77;
  if ( v69 <= v77 )
    v78 = v69;
  if ( v78 && (v132 = v72[5], LODWORD(v79) = memcmp(v68, (const void *)v72[4], v78), v77 = v132, (_DWORD)v79) )
  {
LABEL_29:
    if ( (int)v79 < 0 )
      goto LABEL_37;
  }
  else
  {
    v79 = v69 - v77;
    if ( (__int64)(v69 - v77) <= 0x7FFFFFFF )
    {
      if ( v79 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_29;
      goto LABEL_37;
    }
  }
LABEL_30:
  if ( v68 != v128 )
    operator delete(v68, v144[0] + 1LL);
  *((_BYTE *)v72 + 64) = 3;
  v72[9] = v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v136 != v138 )
    operator delete(v136, v138[0] + 1LL);
  if ( *(_BYTE *)a2 == 1 )
  {
    v87 = *(_QWORD *)(a2 + 8);
    v88 = *(_QWORD *)(v87 + 16);
    if ( v88 )
    {
      v89 = v87 + 8;
      v90 = *(_QWORD *)(v87 + 16);
      v91 = v87 + 8;
      do
      {
        while ( 1 )
        {
          v94 = *(_QWORD *)(v90 + 40);
          if ( !v94 )
            break;
          v92 = 9;
          if ( v94 <= 9 )
            v92 = *(_QWORD *)(v90 + 40);
          v93 = memcmp(*(const void **)(v90 + 32), "new_start", v92);
          if ( v93 || (v93 = v94 - 9, (__int64)(v94 - 9) <= 0x7FFFFFFF) )
          {
            if ( v93 < 0 )
              break;
          }
          v91 = v90;
          v90 = *(_QWORD *)(v90 + 16);
          if ( !v90 )
            goto LABEL_55;
        }
        v90 = *(_QWORD *)(v90 + 24);
      }
      while ( v90 );
LABEL_55:
      if ( v89 == v91 )
        goto LABEL_70;
      v95 = *(_QWORD *)(v91 + 40);
      if ( !v95 )
        goto LABEL_62;
      v96 = 9;
      if ( v95 <= 9 )
        v96 = *(_QWORD *)(v91 + 40);
      if ( (v97 = memcmp(*(const void **)(v91 + 32), "new_start", v96)) == 0
        && (v97 = v95 - 9, (__int64)(v95 - 9) > 0x7FFFFFFF)
        || v97 > 0 )
      {
LABEL_70:
        v102 = v89;
        do
        {
          while ( 1 )
          {
            v105 = *(_QWORD *)(v88 + 40);
            if ( !v105 )
              break;
            v103 = 7;
            if ( v105 <= 7 )
              v103 = *(_QWORD *)(v88 + 40);
            v104 = memcmp(*(const void **)(v88 + 32), "new_end", v103);
            if ( v104 || (v104 = v105 - 7, (__int64)(v105 - 7) <= 0x7FFFFFFF) )
            {
              if ( v104 < 0 )
                break;
            }
            v102 = v88;
            v88 = *(_QWORD *)(v88 + 16);
            if ( !v88 )
              goto LABEL_79;
          }
          v88 = *(_QWORD *)(v88 + 24);
        }
        while ( v88 );
LABEL_79:
        if ( v89 != v102 && std::string::compare(*(void **)(v102 + 32), *(_QWORD *)(v102 + 40), "new_end") <= 0 )
        {
          v106 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          n = 0;
          LOBYTE(v144[0]) = 0;
          s2 = v128;
          if ( *v106 != 3 )
          {
            v50 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
            nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
            nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
              v50,
              302);
            std::string::_M_dispose();
            __cxa_throw(
              v50,
              (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
              (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
          }
          std::string::_M_assign();
          ida_mcp::parse_ea(s2, n);
          v108 = v107;
          if ( s2 != v128 )
            operator delete(s2, v144[0] + 1LL);
          if ( v108 )
          {
            v134 = (unsigned __int8)set_segm_end();
            v109 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            *(_BYTE *)v109 = 4;
            *(_QWORD *)(v109 + 8) = v134;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
      }
      else
      {
LABEL_62:
        v98 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        LOBYTE(v141[0]) = 0;
        v139 = v141;
        v140 = 0;
        if ( *v98 != 3 )
        {
          v49 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v49,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v49,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        ida_mcp::parse_ea(v139, v140);
        v100 = v99;
        if ( v139 != v141 )
          operator delete(v139, v141[0] + 1LL);
        if ( v100 )
        {
          v135 = (unsigned __int8)set_segm_start();
          v111 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          *(_BYTE *)v111 = 4;
          *(_QWORD *)(v111 + 8) = v135;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        if ( *(_BYTE *)a2 == 1 )
        {
          v101 = *(_QWORD *)(a2 + 8);
          v88 = *(_QWORD *)(v101 + 16);
          if ( v88 )
          {
            v89 = v101 + 8;
            goto LABEL_70;
          }
        }
      }
    }
  }
  return v126;
}

