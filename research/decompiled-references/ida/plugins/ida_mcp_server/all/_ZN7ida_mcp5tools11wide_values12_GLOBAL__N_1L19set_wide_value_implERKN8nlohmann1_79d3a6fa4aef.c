_QWORD *__fastcall ida_mcp::tools::wide_values::`anonymous namespace'::set_wide_value_impl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        int a21,
        int a22,
        char a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        char a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        char a36,
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
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        __int64 a53)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  char *v54; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v55; // r13
  char *v56; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v57; // r14
  char *v58; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v59; // r13
  char *v60; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // r13
  __int64 v65; // r14
  size_t v66; // rdx
  int v67; // eax
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rbx
  size_t v70; // rdx
  int v71; // eax
  void *v72; // r13
  int *v73; // rax
  int *v74; // rbx
  int *p_s1; // rsi
  __int64 v76; // rdx
  unsigned __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  std::runtime_error *v80; // rbx
  char *v81; // rdi
  __int64 v82; // rax
  _QWORD *v83; // r15
  _QWORD *v84; // r13
  _QWORD *v85; // r12
  _QWORD *v86; // rbx
  size_t v87; // rdx
  int v88; // eax
  unsigned __int64 v89; // r14
  size_t v90; // rdx
  int v91; // eax
  _QWORD *v92; // rbp
  size_t v93; // rdx
  int v94; // eax
  unsigned __int64 v95; // r14
  unsigned __int64 v96; // r12
  size_t v97; // rdx
  int v98; // eax
  unsigned __int8 v99; // al
  __int64 v100; // r13
  __int64 v101; // rax
  size_t v102; // rax
  unsigned int v103; // r14d
  int *v104; // rdx
  _QWORD *v105; // rax
  int *v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rax
  __m128i *v111; // rbx
  int *v113; // rax
  _QWORD *v114; // r12
  size_t v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // r14
  size_t v119; // rdx
  int v120; // eax
  char *v121; // r12
  std::runtime_error *v122; // rbx
  unsigned __int64 v123; // rdx
  char *v124; // rax
  char *v125; // rbp
  unsigned int v126; // r14d
  unsigned int v127; // r14d
  unsigned int v128; // eax
  __int64 v129; // rcx
  unsigned int v130; // edi
  unsigned __int64 v131; // r8
  char *v132; // rcx
  char *v133; // r9
  unsigned int v134; // edx
  unsigned int v135; // ecx
  __int64 v136; // rdi
  __int64 v138; // [rsp+18h] [rbp-1A0h]
  int v139[2]; // [rsp+28h] [rbp-190h]
  int *v140; // [rsp+30h] [rbp-188h]
  __int64 v141; // [rsp+38h] [rbp-180h]
  int v142[2]; // [rsp+48h] [rbp-170h] BYREF
  void *v143; // [rsp+50h] [rbp-168h]
  int v144[2]; // [rsp+58h] [rbp-160h]
  int v145[4]; // [rsp+60h] [rbp-158h] BYREF
  int v146; // [rsp+70h] [rbp-148h] BYREF
  int v147[4]; // [rsp+78h] [rbp-140h]
  char v148; // [rsp+88h] [rbp-130h]
  __int128 v149; // [rsp+90h] [rbp-128h]
  char v150; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v151; // [rsp+A8h] [rbp-110h]
  char v152; // [rsp+B8h] [rbp-100h]
  __int64 v153; // [rsp+C0h] [rbp-F8h]
  __int64 v154; // [rsp+C8h] [rbp-F0h]
  void *v155; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v157; // [rsp+E8h] [rbp-D0h]
  __int64 v158; // [rsp+F0h] [rbp-C8h]
  __int64 v159; // [rsp+F8h] [rbp-C0h]
  __m128i v160; // [rsp+100h] [rbp-B8h] BYREF
  __int64 s1; // [rsp+110h] [rbp-A8h] BYREF
  _QWORD v162[3]; // [rsp+118h] [rbp-A0h] BYREF
  _QWORD v163[3]; // [rsp+130h] [rbp-88h] BYREF
  char v164[8]; // [rsp+148h] [rbp-70h] BYREF
  char s[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v166; // [rsp+178h] [rbp-40h]

  v166 = __readfsqword(0x28u);
  v155 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v54 = "null";
        break;
      case 1:
        v54 = "object";
        break;
      case 2:
        v54 = (char *)"array";
        break;
      case 3:
        v54 = "string";
        break;
      case 4:
        v54 = "boolean";
        break;
      case 8:
        v54 = "binary";
        break;
      case 9:
        v54 = "discarded";
        break;
      default:
        v54 = "number";
        break;
    }
    *(_QWORD *)v142 = v54;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v62 = *(_QWORD *)(a2 + 8);
  v63 = *(_QWORD *)(v62 + 16);
  v64 = v62 + 8;
  if ( v63 )
  {
    v65 = v62 + 8;
    do
    {
      while ( 1 )
      {
        v68 = *(_QWORD *)(v63 + 40);
        if ( !v68 )
          break;
        v66 = 7;
        if ( v68 <= 7 )
          v66 = *(_QWORD *)(v63 + 40);
        v67 = memcmp(*(const void **)(v63 + 32), (char *)&s2 + 8, v66);
        if ( v67 || (v67 = v68 - 7, (__int64)(v68 - 7) <= 0x7FFFFFFF) )
        {
          if ( v67 < 0 )
            break;
        }
        v65 = v63;
        v63 = *(_QWORD *)(v63 + 16);
        if ( !v63 )
          goto LABEL_12;
      }
      v63 = *(_QWORD *)(v63 + 24);
    }
    while ( v63 );
LABEL_12:
    if ( v64 != v65 )
    {
      v69 = *(_QWORD *)(v65 + 40);
      if ( v69 )
      {
        v70 = 7;
        if ( v69 <= 7 )
          v70 = *(_QWORD *)(v65 + 40);
        v71 = memcmp((char *)&s2 + 8, *(const void **)(v65 + 32), v70);
        if ( v71 || (v71 = 7 - v69, (__int64)(7 - v69) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v71 >= 0 )
            v64 = v65;
        }
      }
      else
      {
        v64 = v65;
      }
    }
  }
  v155 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v64 + 64) != 3 )
  {
    v57 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v64 + 64) )
    {
      case 0:
        v58 = "null";
        break;
      case 1:
        v58 = "object";
        break;
      case 2:
        v58 = (char *)"array";
        break;
      case 3:
        v58 = "string";
        break;
      case 4:
        v58 = "boolean";
        break;
      case 8:
        v58 = "binary";
        break;
      case 9:
        v58 = "discarded";
        break;
      default:
        v58 = "number";
        break;
    }
    *(_QWORD *)v142 = v58;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v57,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v57,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v72 = v155;
  v73 = __errno_location();
  *v73 = 0;
  v74 = v73;
  v140 = v73;
  p_s1 = v142;
  v138 = __isoc23_strtoull();
  v79 = v138;
  if ( v72 == *(void **)v142 || **(_BYTE **)v142 || *v74 == 34 && v138 == -1 )
  {
    if ( v155 != (char *)&s2 + 8 )
      operator delete(v155, *((_QWORD *)&s2 + 1) + 1LL);
    v80 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v80, "Invalid address format");
    __cxa_throw(
      v80,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v81 = (char *)v155;
  if ( v155 != (char *)&s2 + 8 )
  {
    p_s1 = (int *)(*((_QWORD *)&s2 + 1) + 1LL);
    operator delete(v155, *((_QWORD *)&s2 + 1) + 1LL);
  }
  v155 = (char *)&s2 + 8;
  DWORD2(s2) = 1970037110;
  WORD6(s2) = 101;
  *(_QWORD *)&s2 = 5;
  if ( *(_BYTE *)a2 != 1 )
  {
    v55 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v56 = "null";
        break;
      case 1:
        v56 = "object";
        break;
      case 2:
        v56 = (char *)"array";
        break;
      case 3:
        v56 = "string";
        break;
      case 4:
        v56 = "boolean";
        break;
      case 8:
        v56 = "binary";
        break;
      case 9:
        v56 = "discarded";
        break;
      default:
        v56 = "number";
        break;
    }
    *(_QWORD *)v142 = v56;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v55,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v55,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v82 = *(_QWORD *)(a2 + 8);
  v83 = *(_QWORD **)(v82 + 16);
  *(_QWORD *)v139 = v82;
  v84 = (_QWORD *)(v82 + 8);
  if ( v83 )
  {
    v85 = (_QWORD *)(v82 + 8);
    v86 = *(_QWORD **)(v82 + 16);
    do
    {
      while ( 1 )
      {
        v89 = v86[5];
        if ( !v89 )
          break;
        v87 = 5;
        v81 = (char *)v86[4];
        p_s1 = (int *)&s2 + 2;
        if ( v89 <= 5 )
          v87 = v86[5];
        v88 = memcmp(v81, (char *)&s2 + 8, v87);
        if ( v88 || (v88 = v89 - 5, (__int64)(v89 - 5) <= 0x7FFFFFFF) )
        {
          if ( v88 < 0 )
            break;
        }
        v85 = v86;
        v86 = (_QWORD *)v86[2];
        if ( !v86 )
          goto LABEL_41;
      }
      v86 = (_QWORD *)v86[3];
    }
    while ( v86 );
LABEL_41:
    if ( v85 != v84 )
    {
      v77 = v85[5];
      if ( !v77 )
        goto LABEL_92;
      v90 = 5;
      p_s1 = (int *)v85[4];
      v81 = (char *)&s2 + 8;
      v141 = v85[5];
      if ( v77 <= 5 )
        v90 = v85[5];
      v91 = memcmp((char *)&s2 + 8, p_s1, v90);
      if ( v91 || (v91 = 5 - v141, 5 - v141 >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v91 >= 0 )
        {
LABEL_92:
          if ( *((_BYTE *)v85 + 64) != 3 )
          {
            strcpy((char *)&s1, "value");
            goto LABEL_50;
          }
          strcpy((char *)&s1, "value");
          goto LABEL_95;
        }
      }
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)v139 + 72LL) == 3 )
  {
    strcpy((char *)&s1, "value");
    if ( !v83 )
    {
LABEL_111:
      v114 = v84;
LABEL_112:
      v155 = (char *)&s2 + 8;
      *(_QWORD *)&s2 = 0;
      BYTE8(s2) = 0;
      if ( *((_BYTE *)v114 + 64) != 3 )
      {
        v59 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( *((_BYTE *)v114 + 64) )
        {
          case 0:
            v60 = "null";
            break;
          case 1:
            v60 = "object";
            break;
          case 2:
            v60 = (char *)"array";
            break;
          case 3:
            v60 = "string";
            break;
          case 4:
            v60 = "boolean";
            break;
          case 8:
            v60 = "binary";
            break;
          case 9:
            v60 = "discarded";
            break;
          default:
            v60 = "number";
            break;
        }
        *(_QWORD *)v142 = v60;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          v59,
          302);
        std::string::_M_dispose();
        __cxa_throw(
          v59,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::string::_M_assign();
      v121 = (char *)v155;
      if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v155 == 48 && (*((_BYTE *)v155 + 1) & 0xDF) == 0x58 )
        v121 = (char *)v155 + 2;
      *v140 = 0;
      v100 = __isoc23_strtoull();
      if ( v121 == *(char **)v142 || **(_BYTE **)v142 || *v140 == 34 && v100 == -1 )
      {
        if ( v155 != (char *)&s2 + 8 )
          operator delete(v155, *((_QWORD *)&s2 + 1) + 1LL);
        v122 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
        std::runtime_error::runtime_error(v122, "Invalid value format");
        __cxa_throw(
          v122,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      if ( v155 != (char *)&s2 + 8 )
        operator delete(v155, *((_QWORD *)&s2 + 1) + 1LL);
      goto LABEL_72;
    }
LABEL_95:
    v114 = v84;
    do
    {
      while ( 1 )
      {
        v117 = v83[5];
        if ( !v117 )
          break;
        v115 = 5;
        if ( v117 <= 5 )
          v115 = v83[5];
        v116 = memcmp((const void *)v83[4], &s1, v115);
        if ( v116 || (v116 = v117 - 5, (__int64)(v117 - 5) <= 0x7FFFFFFF) )
        {
          if ( v116 < 0 )
            break;
        }
        v114 = v83;
        v83 = (_QWORD *)v83[2];
        if ( !v83 )
          goto LABEL_104;
      }
      v83 = (_QWORD *)v83[3];
    }
    while ( v83 );
LABEL_104:
    if ( v84 != v114 )
    {
      v118 = v114[5];
      if ( !v118 )
        goto LABEL_112;
      v119 = 5;
      if ( v118 <= 5 )
        v119 = v114[5];
      v120 = memcmp(&s1, (const void *)v114[4], v119);
      if ( v120 || (v120 = 5 - v118, (__int64)(5 - v118) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v120 >= 0 )
          goto LABEL_112;
      }
    }
    goto LABEL_111;
  }
  strcpy((char *)&s1, "value");
  if ( !v83 )
  {
LABEL_66:
    v92 = v84;
    goto LABEL_67;
  }
LABEL_50:
  v92 = v84;
  do
  {
    while ( 1 )
    {
      v95 = v83[5];
      if ( !v95 )
        break;
      v93 = 5;
      v81 = (char *)v83[4];
      p_s1 = (int *)&s1;
      if ( v95 <= 5 )
        v93 = v83[5];
      v94 = memcmp(v81, &s1, v93);
      if ( v94 || (v94 = v95 - 5, (__int64)(v95 - 5) <= 0x7FFFFFFF) )
      {
        if ( v94 < 0 )
          break;
      }
      v92 = v83;
      v83 = (_QWORD *)v83[2];
      if ( !v83 )
        goto LABEL_59;
    }
    v83 = (_QWORD *)v83[3];
  }
  while ( v83 );
LABEL_59:
  if ( v84 == v92 )
    goto LABEL_66;
  v96 = v92[5];
  if ( v96 )
  {
    v97 = 5;
    p_s1 = (int *)v92[4];
    v81 = (char *)&s1;
    if ( v96 <= 5 )
      v97 = v92[5];
    v98 = memcmp(&s1, p_s1, v97);
    if ( !v98 )
    {
      v98 = 5 - v96;
      if ( (__int64)(5 - v96) < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_66;
    }
    if ( v98 < 0 )
      goto LABEL_66;
  }
LABEL_67:
  v99 = *((_BYTE *)v92 + 64);
  if ( v99 == 6 )
  {
LABEL_71:
    v100 = v92[9];
    goto LABEL_72;
  }
  if ( v99 > 6u )
  {
    if ( v99 != 7 )
      goto LABEL_146;
    v100 = (unsigned int)(int)*((double *)v92 + 9);
  }
  else
  {
    if ( v99 != 4 )
    {
      if ( v99 == 5 )
        goto LABEL_71;
LABEL_146:
      ida_mcp::tools::wide_values::`anonymous namespace'::set_wide_value_impl(
        (__int64)v81,
        (__int64)p_s1,
        v76,
        v79,
        v77,
        v78,
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
        a47,
        a48,
        a49,
        a50,
        a51,
        a52,
        a53);
    }
    v100 = *((unsigned __int8 *)v92 + 72);
  }
LABEL_72:
  set_wide_value();
  LOBYTE(v146) = 0;
  *(_QWORD *)v147 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v146) = 3;
  v101 = operator new(0x20u);
  *(_QWORD *)v101 = v101 + 16;
  strcpy((char *)(v101 + 16), "address");
  *(_QWORD *)(v101 + 8) = 7;
  *(_OWORD *)v147 = (unsigned __int64)v101;
  qsnprintf();
  v143 = v145;
  v102 = strlen(s);
  *(_QWORD *)v142 = v102;
  v103 = v102;
  if ( v102 > 0xF )
  {
    v113 = (int *)std::string::_M_create();
    v143 = v113;
    *(_QWORD *)v145 = *(_QWORD *)v142;
  }
  else
  {
    if ( v102 == 1 )
    {
      LOBYTE(v145[0]) = s[0];
      goto LABEL_75;
    }
    if ( !v102 )
    {
LABEL_75:
      v104 = v145;
      goto LABEL_76;
    }
    v113 = v145;
  }
  if ( v103 >= 8 )
  {
    *(_QWORD *)v113 = *(_QWORD *)s;
    *(_QWORD *)((char *)v113 + v103 - 8) = *(_QWORD *)&v164[v103];
    v123 = (unsigned __int64)(v113 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v124 = (char *)v113 - v123;
    v125 = (char *)(s - v124);
    v126 = ((_DWORD)v124 + v103) & 0xFFFFFFF8;
    if ( v126 >= 8 )
    {
      v127 = v126 & 0xFFFFFFF8;
      v128 = 0;
      do
      {
        v129 = v128;
        v128 += 8;
        *(_QWORD *)(v123 + v129) = *(_QWORD *)&v125[v129];
      }
      while ( v128 < v127 );
    }
  }
  else if ( (v103 & 4) != 0 )
  {
    *v113 = *(_DWORD *)s;
    *(int *)((char *)v113 + v103 - 4) = *(_DWORD *)&v164[v103 + 4];
  }
  else if ( v103 )
  {
    *(_BYTE *)v113 = s[0];
    if ( (v103 & 2) != 0 )
      *(_WORD *)((char *)v113 + v103 - 2) = *(_WORD *)&v164[v103 + 6];
  }
  v102 = *(_QWORD *)v142;
  v104 = (int *)v143;
LABEL_76:
  *(_QWORD *)v144 = v102;
  *((_BYTE *)v104 + v102) = 0;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v105 = (_QWORD *)operator new(0x20u);
  v106 = (int *)v143;
  v107 = v105 + 2;
  v108 = *(_QWORD *)v144;
  *v105 = v105 + 2;
  if ( v106 == v145 )
  {
    v130 = v108 + 1;
    if ( (unsigned int)(v108 + 1) >= 8 )
    {
      v105[2] = *(_QWORD *)v145;
      *(_QWORD *)((char *)v107 + v130 - 8) = *(_QWORD *)((char *)v144 + v130);
      v131 = (unsigned __int64)(v105 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v132 = (char *)v107 - v131;
      v133 = (char *)((char *)v145 - v132);
      if ( (((_DWORD)v132 + v130) & 0xFFFFFFF8) >= 8 )
      {
        v134 = ((_DWORD)v132 + v130) & 0xFFFFFFF8;
        v135 = 0;
        do
        {
          v136 = v135;
          v135 += 8;
          *(_QWORD *)(v131 + v136) = *(_QWORD *)&v133[v136];
        }
        while ( v135 < v134 );
      }
    }
    else if ( (v130 & 4) != 0 )
    {
      *((_DWORD *)v105 + 4) = v145[0];
      *(_DWORD *)((char *)v107 + v130 - 4) = *(int *)((char *)&v144[1] + v130);
    }
    else if ( (_DWORD)v108 != -1 )
    {
      *((_BYTE *)v105 + 16) = v145[0];
      if ( (v130 & 2) != 0 )
        *(_WORD *)((char *)v107 + v130 - 2) = *(_WORD *)((char *)&v144[1] + v130 + 2);
    }
  }
  else
  {
    *v105 = v106;
    v105[2] = *(_QWORD *)v145;
  }
  v105[1] = v108;
  v143 = v145;
  *(_QWORD *)v144 = 0;
  LOBYTE(v145[0]) = 0;
  v149 = (unsigned __int64)v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v160,
    (const __m128i *)&v146,
    2,
    1);
  s1 = 0;
  v150 = 0;
  *(_QWORD *)&v151 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = 3;
  v109 = operator new(0x20u);
  *(_DWORD *)(v109 + 16) = 1970037110;
  *(_QWORD *)v109 = v109 + 16;
  *(_BYTE *)(v109 + 20) = 101;
  *(_QWORD *)(v109 + 8) = 5;
  *(_BYTE *)(v109 + 21) = 0;
  v152 = 5;
  v153 = v100;
  v154 = 0;
  v151 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v162,
    (const __m128i *)&v150,
    2,
    1);
  v162[2] = 0;
  LOBYTE(v155) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v155) = 3;
  v110 = operator new(0x20u);
  strcpy((char *)(v110 + 16), "success");
  *(_QWORD *)v110 = v110 + 16;
  *(_QWORD *)(v110 + 8) = 7;
  v157 = 4;
  v158 = 1;
  v159 = 0;
  s2 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v163,
    (const __m128i *)&v155,
    2,
    1);
  v163[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v160,
    3);
  v111 = (__m128i *)v164;
  do
  {
    v111 = (__m128i *)((char *)v111 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v111 != &v160 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v143 != v145 )
    operator delete(v143, *(_QWORD *)v145 + 1LL);
  return a1;
}

