__int64 __fastcall ida_mcp::mcp::McpServer::handle_logging_set_level(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  void *v19; // rbp
  std::runtime_error *exception; // rbx
  __int64 v21; // r12
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rbp
  size_t v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r12
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v38[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_37;
  v21 = *(_QWORD *)(a3 + 8);
  v23 = *(_QWORD *)(v21 + 16);
  if ( !v23 )
    goto LABEL_37;
  v24 = v21 + 8;
  v25 = v24;
  do
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v23 + 40);
      if ( !v28 )
        break;
      v26 = 5;
      if ( v28 <= 5 )
        v26 = *(_QWORD *)(v23 + 40);
      v27 = memcmp(*(const void **)(v23 + 32), "level", v26);
      if ( v27 || (v27 = v28 - 5, (__int64)(v28 - 5) <= 0x7FFFFFFF) )
      {
        if ( v27 < 0 )
          break;
      }
      v25 = v23;
      v23 = *(_QWORD *)(v23 + 16);
      if ( !v23 )
        goto LABEL_12;
    }
    v23 = *(_QWORD *)(v23 + 24);
  }
  while ( v23 );
LABEL_12:
  if ( v24 == v25 )
    goto LABEL_37;
  v29 = *(_QWORD *)(v25 + 40);
  if ( v29 )
  {
    v30 = 5;
    if ( v29 <= 5 )
      v30 = *(_QWORD *)(v25 + 40);
    v31 = memcmp(*(const void **)(v25 + 32), "level", v30);
    if ( !v31 )
    {
      v31 = v29 - 5;
      if ( (__int64)(v29 - 5) > 0x7FFFFFFF )
        goto LABEL_37;
    }
    if ( v31 > 0 )
      goto LABEL_37;
  }
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_37:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing or invalid 'level' parameter");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v37) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::mcp::McpServer::handle_logging_set_level(
      a3,
      (__int64)"level",
      v32,
      v33,
      v34,
      v35,
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
  std::string::_M_assign();
  if ( !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>() )
  {
    v19 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)v38, "Invalid logging level: ", (__int64)&v37, 0);
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    __cxa_throw(
      v19,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  ida_mcp::mcp::McpServer::set_logging_level();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  return a1;
}

