__int64 __fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::remove_directory(int a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r12
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  char *v5; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v7; // rax
  std::runtime_error *v8; // rbx
  std::runtime_error *v9; // rbx
  void *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // r13
  size_t v25; // r12
  const void *v26; // rdi
  size_t i; // rbx
  size_t v28; // rdx
  signed __int64 v29; // rax
  size_t v30; // r15
  size_t v31; // rdx
  int v32; // eax
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  _BYTE *v63; // rdx
  int v64; // r14d
  __int64 *v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __m128i v77; // xmm0
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v82; // [rsp+0h] [rbp-C8h]
  __int64 v83; // [rsp+0h] [rbp-C8h]
  int v84; // [rsp+0h] [rbp-C8h]
  __int64 v85; // [rsp+0h] [rbp-C8h]
  _QWORD *v86; // [rsp+0h] [rbp-C8h]
  int v87; // [rsp+0h] [rbp-C8h]
  __int64 v88; // [rsp+0h] [rbp-C8h]
  __int64 *v89; // [rsp+0h] [rbp-C8h]
  __int64 *v90; // [rsp+0h] [rbp-C8h]
  __int64 v91; // [rsp+0h] [rbp-C8h]
  _QWORD *v92; // [rsp+0h] [rbp-C8h]
  _BYTE *v93; // [rsp+8h] [rbp-C0h]
  int v94; // [rsp+8h] [rbp-C0h]
  char v95; // [rsp+8h] [rbp-C0h]
  int v96; // [rsp+8h] [rbp-C0h]
  char v97; // [rsp+8h] [rbp-C0h]
  int v98; // [rsp+8h] [rbp-C0h]
  int v99; // [rsp+8h] [rbp-C0h]
  char v100; // [rsp+8h] [rbp-C0h]
  int v101; // [rsp+8h] [rbp-C0h]
  int v102; // [rsp+8h] [rbp-C0h]
  char v103; // [rsp+8h] [rbp-C0h]
  _QWORD *v104; // [rsp+8h] [rbp-C0h]
  __int64 v105; // [rsp+8h] [rbp-C0h]
  __m128i v106; // [rsp+10h] [rbp-B8h] BYREF
  int v107; // [rsp+20h] [rbp-A8h]
  char *v108; // [rsp+28h] [rbp-A0h]
  void *s2; // [rsp+30h] [rbp-98h] BYREF
  size_t n; // [rsp+38h] [rbp-90h]
  __int64 v111; // [rsp+40h] [rbp-88h] BYREF
  int v112; // [rsp+48h] [rbp-80h]
  void *v113; // [rsp+50h] [rbp-78h] BYREF
  __int128 v114; // [rsp+58h] [rbp-70h] BYREF
  int v115; // [rsp+68h] [rbp-60h]
  __m128i v116; // [rsp+70h] [rbp-58h]
  unsigned __int64 v117; // [rsp+88h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_84;
  v16 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v16 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_84;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&s2,
    "tree",
    v17,
    v18,
    v19,
    v20,
    (int)&s2,
    a1,
    v106.m128i_i64[0]);
  v21 = (__int64 *)s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = (char *)"array";
        break;
      case 3:
        v7 = "string";
        break;
      case 4:
        v7 = "boolean";
        break;
      case 8:
        v7 = "binary";
        break;
      case 9:
        v7 = "discarded";
        break;
      default:
        v7 = "number";
        break;
    }
    v108 = v7;
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
  v22 = *(_QWORD *)(a2 + 8);
  v23 = *(_QWORD **)(v22 + 16);
  v24 = v22 + 8;
  v106.m128i_i64[0] = v22 + 8;
  if ( !v23 )
    goto LABEL_26;
  v25 = n;
  v26 = (const void *)v23[4];
  for ( i = v23[5]; ; i = v23[5] )
  {
    v28 = i;
    if ( v25 <= i )
      v28 = v25;
    if ( !v28 || (LODWORD(v29) = memcmp(v26, v21, v28), !(_DWORD)v29) )
    {
      v29 = i - v25;
      if ( (__int64)(i - v25) > 0x7FFFFFFF )
        goto LABEL_6;
      if ( v29 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v29 < 0 )
      break;
LABEL_6:
    v24 = (__int64)v23;
    v23 = (_QWORD *)v23[2];
    if ( !v23 )
      goto LABEL_16;
LABEL_7:
    v26 = (const void *)v23[4];
  }
  v23 = (_QWORD *)v23[3];
  if ( v23 )
    goto LABEL_7;
LABEL_16:
  if ( v106.m128i_i64[0] != v24 )
  {
    v30 = *(_QWORD *)(v24 + 40);
    v31 = v30;
    if ( v25 <= v30 )
      v31 = v25;
    if ( v31 && (v32 = memcmp(v21, *(const void **)(v24 + 32), v31)) != 0 )
    {
LABEL_24:
      if ( v32 < 0 )
        v24 = v106.m128i_i64[0];
    }
    else if ( (__int64)(v25 - v30) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v25 - v30) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v32 = v25 - v30;
        goto LABEL_24;
      }
      v24 = v106.m128i_i64[0];
    }
  }
LABEL_26:
  if ( v21 != &v111 )
    operator delete(v21, v111 + 1);
  if ( *(_BYTE *)(v24 + 64) != 3 )
  {
LABEL_84:
    v8 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v8, "Missing required parameter: tree");
    __cxa_throw(
      v8,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_85;
  v33 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v33 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_85;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v113,
    "path",
    v34,
    v35,
    v36,
    v37,
    v82,
    v94,
    v106.m128i_i64[0]);
  v45 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v113,
          v114,
          v38,
          v39,
          v40,
          v83,
          v95,
          v106.m128i_i32[0],
          v106.m128i_i32[2],
          v107,
          (int)v108,
          (__int64)s2);
  if ( v113 != (char *)&v114 + 8 )
    operator delete(v113, *((_QWORD *)&v114 + 1) + 1LL);
  if ( *(_BYTE *)v45 != 3 )
  {
LABEL_85:
    v9 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v9, "Missing required parameter: path");
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v113,
    "tree",
    v41,
    v42,
    v43,
    v44,
    v84,
    v96,
    v106.m128i_i64[0]);
  v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v113,
          v114,
          v46,
          v47,
          v48,
          v85,
          v97,
          v106.m128i_i32[0],
          v106.m128i_i32[2],
          v107,
          (int)v108,
          (__int64)s2);
  if ( v113 != (char *)&v114 + 8 )
    operator delete(v113, *((_QWORD *)&v114 + 1) + 1LL);
  s2 = &v111;
  n = 0;
  LOBYTE(v111) = 0;
  if ( *(_BYTE *)v49 != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)v49 )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
        break;
      case 3:
        v5 = "string";
        break;
      case 4:
        v5 = "boolean";
        break;
      case 8:
        v5 = "binary";
        break;
      case 9:
        v5 = "discarded";
        break;
      default:
        v5 = "number";
        break;
    }
    v108 = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v50 = v49[1];
  std::string::_M_assign();
  ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
    v86,
    v50,
    v51,
    v52,
    v53,
    v54,
    (int)v86,
    v98,
    v106.m128i_i32[0],
    v106.m128i_i8[8],
    v107,
    (int)v108,
    (int)s2,
    n,
    v111);
  if ( s2 != &v111 )
    operator delete(s2, v111 + 1);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v113,
    "path",
    v55,
    v56,
    v57,
    v58,
    v87,
    v99,
    v106.m128i_i64[0]);
  v62 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v113,
          v114,
          v59,
          v60,
          v61,
          v88,
          v100,
          v106.m128i_i32[0],
          v106.m128i_i32[2],
          v107,
          (int)v108,
          (__int64)s2);
  v63 = v62;
  if ( v113 != (char *)&v114 + 8 )
  {
    v106.m128i_i64[0] = (__int64)v62;
    operator delete(v113, *((_QWORD *)&v114 + 1) + 1LL);
    v63 = (_BYTE *)v106.m128i_i64[0];
  }
  s2 = &v111;
  n = 0;
  LOBYTE(v111) = 0;
  if ( *v63 != 3 )
  {
    v93 = v63;
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v93 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
        break;
      case 3:
        v3 = "string";
        break;
      case 4:
        v3 = "boolean";
        break;
      case 8:
        v3 = "binary";
        break;
      case 9:
        v3 = "discarded";
        break;
      default:
        v3 = "number";
        break;
    }
    v108 = v3;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v64 = dirtree_rmdir();
  if ( s2 != &v111 )
    operator delete(s2, v111 + 1);
  if ( v64 )
  {
    v10 = __cxa_allocate_exception(0x10u);
    dirtree_errstr();
    std::string::basic_string<std::allocator<char>>(
      v89,
      "rmdir failed: ",
      v11,
      v12,
      v13,
      v14,
      (int)v89,
      v101,
      v106.m128i_i64[0]);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v113) = 0;
  *(_QWORD *)&v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v113) = 3;
  v65 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v65, "removed", v66, v67, v68, v69, (int)v89, v101, v106.m128i_i64[0]);
  v114 = (unsigned __int64)v65;
  std::string::basic_string<std::allocator<char>>(v90, "path", v70, v71, v72, v73, (int)v90, v102, v106.m128i_i64[0]);
  v77 = _mm_unpacklo_epi64(
          (__m128i)0LL,
          (__m128i)(unsigned __int64)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                                       a2,
                                       s2,
                                       n,
                                       v74,
                                       v75,
                                       v76,
                                       v91,
                                       v103,
                                       v106.m128i_i32[0],
                                       v106.m128i_i32[2],
                                       v107,
                                       (int)v108,
                                       (__int64)s2));
  if ( s2 != &v111 )
  {
    v106 = v77;
    operator delete(s2, v111 + 1);
    v77 = _mm_load_si128(&v106);
  }
  LOBYTE(v115) = 0;
  v116 = v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v92,
    (const __m128i *)&v113);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v104,
    (__int64)v92,
    1,
    v78,
    v79,
    v80,
    (int)v92,
    (__int64)v104,
    v106.m128i_i32[0],
    v106.m128i_i32[2],
    v107,
    (int)v108,
    (__int64)s2,
    n,
    0,
    v112,
    (int)v113,
    v114,
    *((__int64 *)&v114 + 1),
    v115,
    v116.m128i_i64[0]);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v105;
}

