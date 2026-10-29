void __fastcall ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name_at_address(
        __int64 a1,
        __int64 a2)
{
  void *v2; // r14
  void *v3; // r12
  void *exception; // r12
  void *v5; // r12
  const char *v6; // rbx
  const char *v7; // rbx
  size_t v8; // r13
  void *v9; // rbx
  size_t v10; // rax
  unsigned int v11; // r12d
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r13
  size_t v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  size_t v21; // rdx
  int v22; // eax
  _BYTE *v23; // rbx
  int *v24; // rax
  int *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r15
  size_t v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r15
  size_t v34; // rax
  int v35; // eax
  std::runtime_error *v36; // rbx
  __int64 v37; // [rsp+8h] [rbp-290h]
  size_t v38; // [rsp+90h] [rbp-208h]
  _BYTE *v39; // [rsp+90h] [rbp-208h]
  void *v40; // [rsp+160h] [rbp-138h]
  __int128 s2; // [rsp+168h] [rbp-130h] BYREF
  __int64 *v42; // [rsp+190h] [rbp-108h] BYREF
  __int64 v43; // [rsp+198h] [rbp-100h]
  __int64 v44; // [rsp+1A0h] [rbp-F8h] BYREF
  char s[32]; // [rsp+1F0h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+258h] [rbp-40h]

  v12 = (char *)&s2 + 8;
  v46 = __readfsqword(0x28u);
  v40 = (char *)&s2 + 8;
  strcpy((char *)&s2 + 8, "address");
  *(_QWORD *)&s2 = 7;
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
    LOBYTE(v44) = 0;
    v43 = 0;
    v42 = &v44;
    strlen(v6);
    std::string::reserve();
    std::string::append((__int64)&v42, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v42, v6);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(v13 + 16);
  v15 = v13 + 8;
  if ( v14 )
  {
    v16 = v13 + 8;
    do
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v14 + 40);
        if ( !v19 )
          break;
        v17 = 7;
        if ( v19 <= 7 )
          v17 = *(_QWORD *)(v14 + 40);
        v18 = memcmp(*(const void **)(v14 + 32), (char *)&s2 + 8, v17);
        if ( v18 || (v18 = v19 - 7, (__int64)(v19 - 7) <= 0x7FFFFFFF) )
        {
          if ( v18 < 0 )
            break;
        }
        v16 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v14 )
          goto LABEL_12;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v14 );
LABEL_12:
    if ( v15 != v16 )
    {
      v20 = *(_QWORD *)(v16 + 40);
      if ( v20 )
      {
        v21 = 7;
        if ( v20 <= 7 )
          v21 = *(_QWORD *)(v16 + 40);
        v22 = memcmp((char *)&s2 + 8, *(const void **)(v16 + 32), v21);
        if ( v22 || (v22 = 7 - v20, (__int64)(7 - v20) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v22 >= 0 )
            v15 = v16;
        }
      }
      else
      {
        v15 = v16;
      }
    }
  }
  v40 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v15 + 64) != 3 )
  {
    v3 = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v23 = v40;
  v24 = __errno_location();
  *v24 = 0;
  v25 = v24;
  v37 = __isoc23_strtoull();
  if ( v23 == v39 || *v39 || v37 == -1 && *v25 == 34 )
  {
    if ( v40 != (char *)&s2 + 8 )
      operator delete(v40, *((_QWORD *)&s2 + 1) + 1LL);
    v36 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v36, "Invalid address format");
    __cxa_throw(
      v36,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v40 != (char *)&s2 + 8 )
    operator delete(v40, *((_QWORD *)&s2 + 1) + 1LL);
  if ( *(_BYTE *)a2 != 1 )
  {
    v5 = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v5,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v26 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v26 + 16) )
  {
    v27 = v26 + 8;
    v28 = *(_QWORD *)(v26 + 16);
    v29 = v26 + 8;
    do
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(v28 + 40);
        if ( !v32 )
          break;
        v30 = 9;
        if ( v32 <= 9 )
          v30 = *(_QWORD *)(v28 + 40);
        v31 = memcmp(*(const void **)(v28 + 32), "long_form", v30);
        if ( v31 || (v31 = v32 - 9, (__int64)(v32 - 9) <= 0x7FFFFFFF) )
        {
          if ( v31 < 0 )
            break;
        }
        v27 = v28;
        v28 = *(_QWORD *)(v28 + 16);
        if ( !v28 )
          goto LABEL_37;
      }
      v28 = *(_QWORD *)(v28 + 24);
    }
    while ( v28 );
LABEL_37:
    v12 = (char *)&s2 + 8;
    if ( v29 != v27 )
    {
      v33 = *(_QWORD *)(v27 + 40);
      if ( !v33 )
        goto LABEL_49;
      v34 = 9;
      if ( v33 <= 9 )
        v34 = *(_QWORD *)(v27 + 40);
      v35 = memcmp(*(const void **)(v27 + 32), "long_form", v34);
      if ( v35 || (v35 = v33 - 9, (__int64)(v33 - 9) <= 0x7FFFFFFF) )
      {
        if ( v35 <= 0 )
        {
LABEL_49:
          if ( *(_BYTE *)(v27 + 64) != 4 )
          {
            v2 = __cxa_allocate_exception(0x20u);
            switch ( *(_BYTE *)(v27 + 64) )
            {
              case 0:
                v7 = "null";
                break;
              case 1:
                v7 = "object";
                break;
              case 2:
                v7 = "array";
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
            LOBYTE(v44) = 0;
            v42 = &v44;
            v43 = 0;
            v8 = strlen(v7);
            std::string::reserve();
            if ( (unsigned __int64)(v43 - 0x7FFFFFFFFFFFFFE2LL) > 0x1C )
            {
              std::string::_M_append();
              if ( 0x7FFFFFFFFFFFFFFELL - v43 >= v8 )
              {
                std::string::_M_append();
                nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                  (__int64)v2,
                  302);
                std::string::_M_dispose();
                __cxa_throw(
                  v2,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
              std::__throw_length_error("basic_string::append");
            }
            std::__throw_length_error("basic_string::append");
          }
        }
      }
    }
  }
  get_ea_name();
  v9 = __cxa_allocate_exception(0x10u);
  qsnprintf();
  v40 = (char *)&s2 + 8;
  v10 = strlen(s);
  v38 = v10;
  v11 = v10;
  if ( v10 > 0xF )
  {
    v40 = (void *)std::string::_M_create();
    v12 = (char *)v40;
    *((_QWORD *)&s2 + 1) = v38;
LABEL_79:
    qmemcpy(v12, s, v11);
    goto LABEL_80;
  }
  if ( v10 == 1 )
  {
    BYTE8(s2) = s[0];
  }
  else if ( v10 )
  {
    goto LABEL_79;
  }
LABEL_80:
  *(_QWORD *)&s2 = v38;
  *((_BYTE *)v40 + v38) = 0;
  std::string::insert();
  std::string::basic_string();
  std::runtime_error::runtime_error();
  std::string::_M_dispose();
  std::string::_M_dispose();
  __cxa_throw(
    v9,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (*)(void *))&std::runtime_error::~runtime_error);
}

