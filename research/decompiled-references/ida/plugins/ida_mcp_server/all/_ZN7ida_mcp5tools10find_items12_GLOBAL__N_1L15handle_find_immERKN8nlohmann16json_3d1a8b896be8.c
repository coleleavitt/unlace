ida_mcp::tools::find_items::_anonymous_namespace_ *__fastcall ida_mcp::tools::find_items::`anonymous namespace'::handle_find_imm(
        ida_mcp::tools::find_items::_anonymous_namespace_ *a1,
        __int64 a2)
{
  void *exception; // r13
  void *v3; // r13
  const char *v4; // rbp
  void *v5; // rbp
  const char *v6; // rbp
  void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r14
  size_t v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbp
  size_t v16; // rdx
  int v17; // eax
  int *v18; // rax
  int *v19; // r14
  std::runtime_error *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbp
  size_t v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  size_t v29; // rdx
  int v30; // eax
  __int64 v31; // rbp
  __int64 imm; // rax
  std::runtime_error *v34; // rax
  int *v35; // [rsp+18h] [rbp-B0h]
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+28h] [rbp-A0h]
  char *v38; // [rsp+38h] [rbp-90h]
  char s2[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE *v40; // [rsp+60h] [rbp-68h] BYREF
  __int64 v41; // [rsp+68h] [rbp-60h]
  _BYTE v42[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  strcpy(s2, "address");
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v6 = "null";
        break;
      case 1:
        v6 = "object";
        break;
      case 2:
        v6 = "array";
        break;
      case 3:
        v6 = "string";
        break;
      case 4:
        v6 = "boolean";
        break;
      case 8:
        v6 = "binary";
        break;
      case 9:
        v6 = "discarded";
        break;
      default:
        v6 = "number";
        break;
    }
    v42[0] = 0;
    v40 = v42;
    v41 = 0;
    strlen(v6);
    std::string::reserve();
    std::string::append((__int64)&v40, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v40, v6);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = v8 + 8;
  if ( v9 )
  {
    v11 = v8 + 8;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v9 + 40);
        if ( !v14 )
          break;
        v12 = 7;
        if ( v14 <= 7 )
          v12 = *(_QWORD *)(v9 + 40);
        v13 = memcmp(*(const void **)(v9 + 32), s2, v12);
        if ( v13 || (v13 = v14 - 7, (__int64)(v14 - 7) <= 0x7FFFFFFF) )
        {
          if ( v13 < 0 )
            break;
        }
        v11 = v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_12;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v9 );
LABEL_12:
    if ( v10 != v11 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( v15 )
      {
        v16 = 7;
        if ( v15 <= 7 )
          v16 = *(_QWORD *)(v11 + 40);
        v17 = memcmp(s2, *(const void **)(v11 + 32), v16);
        if ( v17 || (v17 = 7 - v15, (__int64)(7 - v15) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v17 >= 0 )
            v10 = v11;
        }
      }
      else
      {
        v10 = v11;
      }
    }
  }
  s2[0] = 0;
  if ( *(_BYTE *)(v10 + 64) != 3 )
  {
    v7 = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v7,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v35 = v18;
  v36 = __isoc23_strtoull();
  if ( s2 == v38 || *v38 || *v19 == 34 && v36 == -1 )
  {
    v20 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v20, "Invalid address");
    __cxa_throw(
      v20,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  strcpy(s2, "value");
  if ( *(_BYTE *)a2 != 1 )
  {
    v3 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = "array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v42[0] = 0;
    v40 = v42;
    v41 = 0;
    strlen(v4);
    std::string::reserve();
    std::string::append((__int64)&v40, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v40, v4);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v3,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v21 = *(_QWORD *)(a2 + 8);
  v22 = *(_QWORD *)(v21 + 16);
  v23 = v21 + 8;
  if ( v22 )
  {
    v24 = v21 + 8;
    do
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(v22 + 40);
        if ( !v27 )
          break;
        v25 = 5;
        if ( v27 <= 5 )
          v25 = *(_QWORD *)(v22 + 40);
        v26 = memcmp(*(const void **)(v22 + 32), s2, v25);
        if ( v26 || (v26 = v27 - 5, (__int64)(v27 - 5) <= 0x7FFFFFFF) )
        {
          if ( v26 < 0 )
            break;
        }
        v24 = v22;
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v22 )
          goto LABEL_37;
      }
      v22 = *(_QWORD *)(v22 + 24);
    }
    while ( v22 );
LABEL_37:
    if ( v23 != v24 )
    {
      v28 = *(_QWORD *)(v24 + 40);
      if ( v28 )
      {
        v29 = 5;
        v37 = *(_QWORD *)(v24 + 40);
        if ( v28 <= 5 )
          v29 = *(_QWORD *)(v24 + 40);
        v30 = memcmp(s2, *(const void **)(v24 + 32), v29);
        if ( v30 || (v30 = 5 - v37, 5 - v37 >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v30 >= 0 )
            v23 = v24;
        }
      }
      else
      {
        v23 = v24;
      }
    }
  }
  s2[0] = 0;
  if ( *(_BYTE *)(v23 + 64) != 3 )
  {
    v5 = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v5,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  *v35 = 0;
  v31 = __isoc23_strtoull();
  if ( s2 == v38 || *v38 || *v35 == 34 && v31 == -1 )
  {
    v34 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v34, "Invalid value");
    ida_mcp::tools::find_items::`anonymous namespace'::handle_find_imm();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[10],int,0>();
  imm = find_imm();
  ida_mcp::tools::find_items::`anonymous namespace'::make_result(a1, imm, "immediate_value");
  return a1;
}

