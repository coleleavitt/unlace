__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<unsigned long,char const(&)[6],unsigned long,0>(
        __int64 a1,
        const char *a2,
        __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r12
  size_t v7; // rbp
  size_t v8; // rdx
  size_t v9; // r15
  int v10; // eax
  __int64 v11; // rbp
  size_t v12; // rbx
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  const char *v17; // rbx
  size_t v18; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12

  if ( *(_BYTE *)a1 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a1 )
    {
      case 0:
        v17 = "null";
        break;
      case 1:
        v17 = "object";
        break;
      case 2:
        v17 = "array";
        break;
      case 3:
        v17 = "string";
        break;
      case 4:
        v17 = "boolean";
        break;
      case 8:
        v17 = "binary";
        break;
      case 9:
        v17 = "discarded";
        break;
      default:
        v17 = "number";
        break;
    }
    v18 = strlen(v17);
    std::string::reserve();
    std::string::_M_append();
    if ( v18 <= 0x7FFFFFFFFFFFFFFELL )
    {
      std::string::_M_append();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        exception,
        306);
      std::string::_M_dispose();
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    std::__throw_length_error("basic_string::append");
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !v4 )
    return *(_QWORD *)a3;
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
  if ( v5 == v6 )
    return *(_QWORD *)a3;
  v12 = *(_QWORD *)(v6 + 40);
  v13 = v9;
  if ( v12 <= v9 )
    v13 = *(_QWORD *)(v6 + 40);
  if ( v13 )
  {
    v14 = memcmp(*(const void **)(v6 + 32), a2, v13);
    if ( v14 )
    {
LABEL_22:
      if ( v14 <= 0 )
        goto LABEL_23;
      return *(_QWORD *)a3;
    }
  }
  v15 = v12 - v9;
  if ( v15 > 0x7FFFFFFF )
    return *(_QWORD *)a3;
  if ( v15 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v14 = v15;
    goto LABEL_22;
  }
LABEL_23:
  nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
  return 0;
}

