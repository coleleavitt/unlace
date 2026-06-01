__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[5],int,0>(
        __int64 a1,
        const char *a2,
        unsigned int *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r14
  size_t v7; // rbp
  size_t v8; // rdx
  size_t v9; // r15
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12

  if ( *(_BYTE *)a1 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      306);
    goto LABEL_25;
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !v4 )
    return *a3;
  v5 = v3 + 8;
  v6 = v5;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 40);
      v8 = strlen(a2);
      v9 = v8;
      if ( v7 <= v8 )
        v8 = v7;
      if ( v8 )
      {
        v10 = memcmp(*(const void **)(v4 + 32), a2, v8);
        if ( v10 )
          goto LABEL_12;
      }
      v11 = v7 - v9;
      if ( v11 <= 0x7FFFFFFF )
        break;
LABEL_4:
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_14;
    }
    if ( v11 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_13;
    v10 = v11;
LABEL_12:
    if ( v10 >= 0 )
      goto LABEL_4;
LABEL_13:
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_14:
  if ( v5 == v6 || std::string::compare(*(void **)(v6 + 32), *(_QWORD *)(v6 + 40), a2) > 0 )
    return *a3;
  v12 = nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
  v13 = *(_BYTE *)v12;
  if ( *(_BYTE *)v12 == 6 )
    return *(unsigned int *)(v12 + 8);
  if ( v13 > 6u )
  {
    if ( v13 != 7 )
      goto LABEL_26;
    return (unsigned int)(int)*(double *)(v12 + 8);
  }
  else
  {
    if ( v13 != 4 )
    {
      if ( v13 == 5 )
        return *(unsigned int *)(v12 + 8);
LABEL_26:
      exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        exception,
        302);
LABEL_25:
      std::string::_M_dispose();
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    return *(unsigned __int8 *)(v12 + 8);
  }
}

