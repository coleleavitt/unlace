__int64 *__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[4],char const(&)[12],std::string,0>(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        const char *a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r12
  size_t v8; // rbx
  size_t v9; // rdx
  size_t v10; // r15
  int v11; // eax
  __int64 v12; // rbx
  size_t v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  _BYTE *v17; // rbx
  size_t v18; // rax
  size_t v19; // r12
  __int64 v21; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v23; // r12
  __int64 v24; // [rsp+0h] [rbp-88h]
  size_t v26; // [rsp+18h] [rbp-70h]

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
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
    goto LABEL_25;
  v6 = v4 + 8;
  v24 = v6;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 40);
      v9 = strlen(a3);
      v10 = v9;
      if ( v8 <= v9 )
        v9 = v8;
      if ( v9 )
      {
        v11 = memcmp(*(const void **)(v5 + 32), a3, v9);
        if ( v11 )
          goto LABEL_12;
      }
      v12 = v8 - v10;
      if ( v12 <= 0x7FFFFFFF )
        break;
LABEL_4:
      v24 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_14;
    }
    if ( v12 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_13;
    v11 = v12;
LABEL_12:
    if ( v11 >= 0 )
      goto LABEL_4;
LABEL_13:
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_14:
  if ( v6 == v24 )
    goto LABEL_25;
  v13 = *(_QWORD *)(v24 + 40);
  v14 = v10;
  if ( v13 <= v10 )
    v14 = *(_QWORD *)(v24 + 40);
  if ( v14 )
  {
    v15 = memcmp(*(const void **)(v24 + 32), a3, v14);
    if ( v15 )
    {
LABEL_22:
      if ( v15 <= 0 )
        goto LABEL_23;
LABEL_25:
      v17 = a1 + 2;
      *a1 = (__int64)(a1 + 2);
      v18 = strlen(a4);
      v26 = v18;
      v19 = v18;
      if ( v18 > 0xF )
      {
        v21 = std::string::_M_create();
        *a1 = v21;
        v17 = (_BYTE *)v21;
        a1[2] = v26;
      }
      else
      {
        if ( v18 == 1 )
        {
          *((_BYTE *)a1 + 16) = *a4;
          goto LABEL_28;
        }
        if ( !v18 )
        {
LABEL_28:
          a1[1] = v18;
          v17[v18] = 0;
          return a1;
        }
      }
      memcpy(v17, a4, v19);
      v18 = v26;
      v17 = (_BYTE *)*a1;
      goto LABEL_28;
    }
  }
  v16 = v13 - v10;
  if ( v16 > 0x7FFFFFFF )
    goto LABEL_25;
  if ( v16 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v15 = v16;
    goto LABEL_22;
  }
LABEL_23:
  a1[1] = 0;
  *a1 = (__int64)(a1 + 2);
  *((_BYTE *)a1 + 16) = 0;
  if ( *(_BYTE *)(v24 + 64) != 3 )
  {
    v23 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v23,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v23,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  return a1;
}

