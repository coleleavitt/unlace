__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[1],char const(&)[7],std::string,0>(
        __int64 a1,
        __int64 a2,
        size_t a3,
        const char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  const char *v8; // r12
  __int64 v9; // r14
  size_t v10; // rbx
  size_t v11; // rbp
  int v12; // eax
  __int64 v13; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v15; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  __int64 v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-78h]

  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
    goto LABEL_18;
  v8 = (const char *)a3;
  v18 = v6 + 8;
  v9 = v6 + 8;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 40);
      a3 = strlen(v8);
      v11 = a3;
      if ( v10 <= a3 )
        a3 = v10;
      if ( a3 )
      {
        v12 = memcmp(*(const void **)(v7 + 32), v8, a3);
        if ( v12 )
          goto LABEL_12;
      }
      v13 = v10 - v11;
      if ( v13 <= 0x7FFFFFFF )
        break;
LABEL_4:
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_14;
    }
    if ( v13 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_13;
    v12 = v13;
LABEL_12:
    if ( v12 >= 0 )
      goto LABEL_4;
LABEL_13:
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v7 );
LABEL_14:
  if ( v18 == v9 || std::string::compare(*(void **)(v9 + 32), *(_QWORD *)(v9 + 40), v8) > 0 )
  {
LABEL_18:
    std::string::basic_string<std::allocator<char>>((__int64 *)a1, a4, a3, (__int64)a4, a5, a6, (int)a4, v18, v19);
    return a1;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( *(_BYTE *)(v9 + 64) != 3 )
  {
    v15 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v15,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v15,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  return a1;
}

