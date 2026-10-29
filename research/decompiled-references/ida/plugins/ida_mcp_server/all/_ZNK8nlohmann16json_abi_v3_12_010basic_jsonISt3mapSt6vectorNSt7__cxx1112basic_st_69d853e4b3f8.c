_QWORD *__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  const void *v9; // rdi
  size_t i; // rbx
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  size_t v14; // rbx
  size_t v15; // rdx
  int v16; // eax
  _QWORD *v18; // rdi
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  _QWORD *v20; // [rsp+8h] [rbp-A0h]
  size_t v21; // [rsp+18h] [rbp-90h]
  _QWORD *s2; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+28h] [rbp-80h]
  _QWORD v24[15]; // [rsp+30h] [rbp-78h] BYREF

  v24[7] = __readfsqword(0x28u);
  s2 = v24;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v3 = strlen(a2);
  v21 = v3;
  v4 = v3;
  if ( v3 > 0xF )
  {
    s2 = (_QWORD *)std::string::_M_create();
    v18 = s2;
    v24[0] = v21;
    goto LABEL_36;
  }
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_5;
    v18 = v24;
LABEL_36:
    memcpy(v18, a2, v4);
    v3 = v21;
    v5 = s2;
    goto LABEL_6;
  }
  LOBYTE(v24[0]) = *a2;
LABEL_5:
  v5 = v24;
LABEL_6:
  n = v3;
  *((_BYTE *)v5 + v3) = 0;
  if ( *(_BYTE *)a1 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(v6 + 16);
  v8 = (_QWORD *)(v6 + 8);
  v20 = (_QWORD *)(v6 + 8);
  if ( !v7 )
    goto LABEL_30;
  v9 = (const void *)v7[4];
  for ( i = v7[5]; ; i = v7[5] )
  {
    v11 = i;
    if ( n <= i )
      v11 = n;
    if ( !v11 || (v12 = memcmp(v9, s2, v11)) == 0 )
    {
      v13 = i - n;
      if ( v13 > 0x7FFFFFFF )
        goto LABEL_9;
      if ( v13 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v12 = v13;
    }
    if ( v12 < 0 )
      break;
LABEL_9:
    v8 = v7;
    v7 = (_QWORD *)v7[2];
    if ( !v7 )
      goto LABEL_20;
LABEL_10:
    v9 = (const void *)v7[4];
  }
  v7 = (_QWORD *)v7[3];
  if ( v7 )
    goto LABEL_10;
LABEL_20:
  if ( v20 != v8 )
  {
    v14 = v8[5];
    v15 = v14;
    if ( n <= v14 )
      v15 = n;
    if ( v15 && (v16 = memcmp(s2, (const void *)v8[4], v15)) != 0 )
    {
LABEL_28:
      if ( v16 < 0 )
        v8 = v20;
    }
    else if ( (__int64)(n - v14) <= 0x7FFFFFFF )
    {
      if ( (__int64)(n - v14) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v16 = n - v14;
        goto LABEL_28;
      }
      v8 = v20;
    }
  }
LABEL_30:
  if ( s2 != v24 )
    operator delete(s2, v24[0] + 1LL);
  return v8 + 8;
}

