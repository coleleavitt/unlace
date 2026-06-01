_QWORD *__fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::rename_entry(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
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
        __int64 a37)
{
  std::runtime_error *v37; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v38; // r12
  char *v39; // rax
  std::runtime_error *exception; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v41; // r12
  char *v42; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v43; // r12
  char *v44; // rax
  void *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rbp
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  _BYTE *v56; // r13
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // r13
  __int64 v70; // r13
  __int64 v71; // r15
  __int64 v72; // r14
  size_t v73; // rdx
  int v74; // eax
  unsigned __int64 v75; // r13
  unsigned __int64 v76; // r15
  size_t v77; // rdx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // r14
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  const __m128i *v90; // rax
  const __m128i *v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  const __m128i *v104; // rax
  const __m128i *v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  const __m128i *v113; // rax
  const __m128i *v114; // rdx
  __int64 *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __m128i si128; // xmm0
  __int64 *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __m128i v140; // xmm0
  void *v142[2]; // [rsp+0h] [rbp-138h] BYREF
  const __m128i *v143; // [rsp+10h] [rbp-128h]
  _QWORD *v144; // [rsp+18h] [rbp-120h]
  __int8 *v145; // [rsp+20h] [rbp-118h]
  __int64 v146; // [rsp+28h] [rbp-110h]
  __int64 v147; // [rsp+30h] [rbp-108h]
  char *v148; // [rsp+38h] [rbp-100h]
  void *v149[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v150; // [rsp+50h] [rbp-E8h] BYREF
  void *v151; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v152; // [rsp+68h] [rbp-D0h] BYREF
  char v153; // [rsp+78h] [rbp-C0h]
  __m128i v154; // [rsp+80h] [rbp-B8h]
  void *v155; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v156; // [rsp+98h] [rbp-A0h] BYREF
  char v157; // [rsp+A8h] [rbp-90h]
  __m128i v158; // [rsp+B0h] [rbp-88h]
  __m128i v159; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v160; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v161[12]; // [rsp+D8h] [rbp-60h] BYREF

  v144 = a1;
  v161[4] = __readfsqword(0x28u);
  if ( *a2 != 1 )
    goto LABEL_55;
  v50 = *((_QWORD **)a2 + 1);
  v51 = (__int64)a2;
  a2 = "tree";
  a1 = v50;
  if ( v50 + 1 == (_QWORD *)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_55;
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "tree",
    a3,
    a4,
    a5,
    a6,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  a2 = (const char *)v159.m128i_i64[0];
  v55 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          v51,
          (const void *)v159.m128i_i64[0],
          v159.m128i_u64[1],
          v52,
          v53,
          v54,
          (__int64)v142[0],
          (char)v142[1],
          (int)v143,
          (int)v144,
          (int)v145,
          v146,
          v147);
  a1 = (_QWORD *)v159.m128i_i64[0];
  v56 = v55;
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
  {
    a2 = (const char *)(v160 + 1);
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
  }
  if ( *v56 != 3 )
LABEL_55:
    ida_mcp::tools::dirtree_tools::`anonymous namespace'::rename_entry(
      (__int64)a1,
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
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
      a37);
  if ( *(_BYTE *)v51 != 1 )
    goto LABEL_71;
  v57 = *(_QWORD *)(v51 + 8) + 8LL;
  if ( v57 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_71;
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "from",
    v58,
    v59,
    v60,
    v61,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  v69 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          v51,
          (const void *)v159.m128i_i64[0],
          v159.m128i_u64[1],
          v62,
          v63,
          v64,
          (__int64)v142[0],
          (char)v142[1],
          (int)v143,
          (int)v144,
          (int)v145,
          v146,
          v147);
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
  if ( *(_BYTE *)v69 != 3 )
  {
LABEL_71:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing required parameter: from");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)v51 != 1 )
    goto LABEL_60;
  v70 = *(_QWORD *)(v51 + 8);
  v71 = *(_QWORD *)(v70 + 16);
  if ( !v71 )
    goto LABEL_60;
  v143 = (const __m128i *)(v70 + 8);
  v72 = v70 + 8;
  do
  {
    while ( 1 )
    {
      v75 = *(_QWORD *)(v71 + 40);
      if ( !v75 )
        break;
      v73 = 2;
      if ( v75 <= 2 )
        v73 = *(_QWORD *)(v71 + 40);
      v74 = memcmp(*(const void **)(v71 + 32), "to", v73);
      if ( v74 || (v74 = v75 - 2, (__int64)(v75 - 2) <= 0x7FFFFFFF) )
      {
        if ( v74 < 0 )
          break;
      }
      v72 = v71;
      v71 = *(_QWORD *)(v71 + 16);
      if ( !v71 )
        goto LABEL_22;
    }
    v71 = *(_QWORD *)(v71 + 24);
  }
  while ( v71 );
LABEL_22:
  if ( v143 == (const __m128i *)v72 )
    goto LABEL_60;
  v76 = *(_QWORD *)(v72 + 40);
  if ( v76 )
  {
    v77 = 2;
    if ( v76 <= 2 )
      v77 = *(_QWORD *)(v72 + 40);
    v78 = memcmp(*(const void **)(v72 + 32), "to", v77);
    if ( !v78 )
    {
      v78 = v76 - 2;
      if ( (__int64)(v76 - 2) > 0x7FFFFFFF )
        goto LABEL_60;
    }
    if ( v78 > 0 )
      goto LABEL_60;
  }
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "to",
    v65,
    v66,
    v67,
    v68,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  v86 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          v51,
          (const void *)v159.m128i_i64[0],
          v159.m128i_u64[1],
          v79,
          v80,
          v81,
          (__int64)v142[0],
          (char)v142[1],
          (int)v143,
          (int)v144,
          (int)v145,
          v146,
          v147);
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
  if ( *(_BYTE *)v86 != 3 )
  {
LABEL_60:
    v37 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v37, "Missing required parameter: to");
    __cxa_throw(
      v37,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "tree",
    v82,
    v83,
    v84,
    v85,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  v90 = (const __m128i *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                           v51,
                           (const void *)v159.m128i_i64[0],
                           v159.m128i_u64[1],
                           v87,
                           v88,
                           v89,
                           (__int64)v142[0],
                           (char)v142[1],
                           (int)v143,
                           (int)v144,
                           (int)v145,
                           v146,
                           v147);
  v91 = v90;
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
  {
    v143 = v90;
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
    v91 = v143;
  }
  v156.m128i_i8[8] = 0;
  v155 = &v156.m128i_u64[1];
  v156.m128i_i64[0] = 0;
  if ( v91->m128i_i8[0] != 3 )
  {
    v143 = v91;
    v43 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( v143->m128i_i8[0] )
    {
      case 0:
        v44 = "null";
        break;
      case 1:
        v44 = "object";
        break;
      case 2:
        v44 = (char *)"array";
        break;
      case 3:
        v44 = "string";
        break;
      case 4:
        v44 = "boolean";
        break;
      case 8:
        v44 = "binary";
        break;
      case 9:
        v44 = "discarded";
        break;
      default:
        v44 = "number";
        break;
    }
    v148 = v44;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v43,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v43,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v92 = v91->m128i_i64[1];
  std::string::_M_assign();
  v146 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
           &v155,
           v92,
           v93,
           v94,
           v95,
           v96,
           (int)v142[0],
           (int)v142[1],
           (int)v143,
           (char)v144,
           (int)v145,
           v146,
           v147,
           (int)v148,
           (__int64)v149[0]);
  if ( v155 != &v156.m128i_u64[1] )
    operator delete(v155, v156.m128i_i64[1] + 1);
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "to",
    v97,
    v98,
    v99,
    v100,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  v104 = (const __m128i *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                            v51,
                            (const void *)v159.m128i_i64[0],
                            v159.m128i_u64[1],
                            v101,
                            v102,
                            v103,
                            (__int64)v142[0],
                            (char)v142[1],
                            (int)v143,
                            (int)v144,
                            (int)v145,
                            v146,
                            v147);
  v105 = v104;
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
  {
    v143 = v104;
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
    v105 = v143;
  }
  v155 = &v156.m128i_u64[1];
  v156.m128i_i64[0] = 0;
  v156.m128i_i8[8] = 0;
  if ( v105->m128i_i8[0] != 3 )
  {
    v143 = v105;
    v38 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( v143->m128i_i8[0] )
    {
      case 0:
        v39 = "null";
        break;
      case 1:
        v39 = "object";
        break;
      case 2:
        v39 = (char *)"array";
        break;
      case 3:
        v39 = "string";
        break;
      case 4:
        v39 = "boolean";
        break;
      case 8:
        v39 = "binary";
        break;
      case 9:
        v39 = "discarded";
        break;
      default:
        v39 = "number";
        break;
    }
    v148 = v39;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v38,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v38,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "from",
    v106,
    v107,
    v108,
    v109,
    (int)v155,
    (int)v142[1],
    (__int64)v143);
  v113 = (const __m128i *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                            v51,
                            (const void *)v159.m128i_i64[0],
                            v159.m128i_u64[1],
                            v110,
                            v111,
                            v112,
                            (__int64)v142[0],
                            (char)v142[1],
                            (int)v143,
                            (int)v144,
                            (int)v145,
                            v146,
                            v147);
  v114 = v113;
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
  {
    v143 = v113;
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
    v114 = v143;
  }
  v152.m128i_i8[8] = 0;
  v143 = (const __m128i *)&v151;
  v145 = &v152.m128i_i8[8];
  v151 = &v152.m128i_u64[1];
  v152.m128i_i64[0] = 0;
  if ( v114->m128i_i8[0] != 3 )
  {
    v142[0] = (void *)v114;
    v41 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)v142[0] )
    {
      case 0:
        v42 = "null";
        break;
      case 1:
        v42 = "object";
        break;
      case 2:
        v42 = (char *)"array";
        break;
      case 3:
        v42 = "string";
        break;
      case 4:
        v42 = "boolean";
        break;
      case 8:
        v42 = "binary";
        break;
      case 9:
        v42 = "discarded";
        break;
      default:
        v42 = "number";
        break;
    }
    v148 = v42;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v41,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v41,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  LODWORD(v142[0]) = dirtree_rename();
  if ( v151 != v145 )
    operator delete(v151, v152.m128i_i64[1] + 1);
  if ( v155 != &v156.m128i_u64[1] )
    operator delete(v155, v156.m128i_i64[1] + 1);
  if ( LODWORD(v142[0]) )
  {
    v45 = __cxa_allocate_exception(0x10u);
    dirtree_errstr();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v155,
      "rename failed: ",
      v46,
      v47,
      v48,
      v49,
      (int)v142[0],
      (int)v142[1],
      (__int64)v143);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v45,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v151) = 0;
  v152.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v151) = 3;
  v115 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v115,
    "from",
    v116,
    v117,
    v118,
    v119,
    (int)v115,
    (int)v142[1],
    (__int64)v143);
  v152 = _mm_loadl_epi64((const __m128i *)v142);
  std::string::basic_string<std::allocator<char>>(
    v159.m128i_i64,
    "from",
    v120,
    v121,
    v122,
    v123,
    (int)v142[0],
    (int)v142[1],
    (__int64)v143);
  si128 = _mm_unpacklo_epi64(
            (__m128i)0LL,
            (__m128i)(unsigned __int64)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                                         v51,
                                         (const void *)v159.m128i_i64[0],
                                         v159.m128i_u64[1],
                                         v124,
                                         v125,
                                         v126,
                                         (__int64)v142[0],
                                         (char)v142[1],
                                         (int)v143,
                                         (int)v144,
                                         (int)v145,
                                         v146,
                                         v147));
  if ( (__int64 *)v159.m128i_i64[0] != &v160 )
  {
    *(__m128i *)v142 = si128;
    operator delete((void *)v159.m128i_i64[0], v160 + 1);
    si128 = _mm_load_si128((const __m128i *)v142);
  }
  v153 = 0;
  v154 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v159,
    v143);
  v160 = 0;
  LOBYTE(v155) = 0;
  v156.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v155) = 3;
  v128 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v128,
    "to",
    v129,
    v130,
    v131,
    v132,
    (int)v128,
    (int)v142[1],
    (__int64)v143);
  v156 = _mm_loadl_epi64((const __m128i *)v142);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v149,
    "to",
    v133,
    v134,
    v135,
    v136,
    (int)v149,
    (int)v142[1],
    (__int64)v143);
  v140 = _mm_unpacklo_epi64(
           (__m128i)0LL,
           (__m128i)(unsigned __int64)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                                        v51,
                                        v149[0],
                                        (unsigned __int64)v149[1],
                                        v137,
                                        v138,
                                        v139,
                                        (__int64)v142[0],
                                        (char)v142[1],
                                        (int)v143,
                                        (int)v144,
                                        (int)v145,
                                        v146,
                                        v147));
  if ( v149[0] != &v150 )
  {
    *(__m128i *)v142 = v140;
    operator delete(v149[0], v150 + 1);
    v140 = _mm_load_si128((const __m128i *)v142);
  }
  v157 = 0;
  v158 = v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v161,
    (const __m128i *)&v155);
  v161[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v144,
    &v159);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v144;
}

