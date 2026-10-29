void __fastcall ida_mcp::tools::frames::`anonymous namespace'::handle_get_stack_variable_name(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  const void *v7; // rdi
  size_t i; // r12
  size_t v9; // rdx
  signed __int64 v10; // rax
  size_t v11; // rcx
  size_t v12; // rdx
  int v13; // eax
  std::runtime_error *v14; // rax
  _QWORD *v15; // [rsp+20h] [rbp-1A8h]
  size_t v16; // [rsp+30h] [rbp-198h]
  void *s2; // [rsp+E0h] [rbp-E8h]
  size_t n[2]; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  s2 = (void *)std::string::_M_create();
  n[1] = 16;
  *(__m128i *)s2 = _mm_load_si128((const __m128i *)&xmmword_3E20D0);
  n[0] = 16;
  *((_BYTE *)s2 + 16) = 0;
  if ( *(_BYTE *)a2 != 1 )
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
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD **)(v4 + 16);
  v6 = (_QWORD *)(v4 + 8);
  v15 = (_QWORD *)(v4 + 8);
  if ( !v5 )
    goto LABEL_24;
  v7 = (const void *)v5[4];
  for ( i = v5[5]; ; i = v5[5] )
  {
    v9 = i;
    if ( n[0] <= i )
      v9 = n[0];
    if ( v9 )
    {
      LODWORD(v10) = memcmp(v7, s2, v9);
      if ( (_DWORD)v10 )
        goto LABEL_12;
    }
    v10 = i - n[0];
    if ( (__int64)(i - n[0]) > 0x7FFFFFFF )
      goto LABEL_4;
    if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_12:
      if ( (int)v10 >= 0 )
      {
LABEL_4:
        v6 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !v5 )
          goto LABEL_14;
        goto LABEL_5;
      }
    }
    v5 = (_QWORD *)v5[3];
    if ( !v5 )
    {
LABEL_14:
      if ( v15 != v6 )
      {
        v11 = v6[5];
        v12 = v11;
        if ( n[0] <= v11 )
          v12 = n[0];
        if ( v12 && (v16 = v6[5], v13 = memcmp(s2, (const void *)v6[4], v12), v11 = v16, v13) )
        {
LABEL_22:
          if ( v13 < 0 )
            v6 = v15;
        }
        else if ( (__int64)(n[0] - v11) <= 0x7FFFFFFF )
        {
          if ( (__int64)(n[0] - v11) >= (__int64)0xFFFFFFFF80000000LL )
          {
            v13 = LODWORD(n[0]) - v11;
            goto LABEL_22;
          }
          v6 = v15;
        }
      }
LABEL_24:
      if ( s2 != &n[1] )
        operator delete(s2, n[1] + 1);
      s2 = &n[1];
      n[0] = 0;
      LOBYTE(n[1]) = 0;
      if ( *((_BYTE *)v6 + 64) == 3 )
      {
        std::string::_M_assign();
        *__errno_location() = 0;
        __isoc23_strtoull();
        if ( s2 != &n[1] )
          operator delete(s2, n[1] + 1);
        v14 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
        std::runtime_error::runtime_error(v14, "Invalid function_address format");
        JUMPOUT(0x8B041);
      }
      v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v3,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v3,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
LABEL_5:
    v7 = (const void *)v5[4];
  }
}

