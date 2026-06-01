__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back(
        __int64 a1,
        const __m128i *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( !*(_BYTE *)a1 )
  {
    *(_BYTE *)a1 = 2;
    v2 = operator new(0x18u);
    *(_QWORD *)(v2 + 16) = 0;
    *(_QWORD *)(a1 + 8) = v2;
    *(_OWORD *)v2 = 0;
    return std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  }
  if ( *(_BYTE *)a1 != 2 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      exception,
      308);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) == v5 )
    return std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  v6 = _mm_loadu_si128(a2);
  v7 = v5 + 16;
  a2->m128i_i8[0] = 0;
  a2->m128i_i64[1] = 0;
  *(__m128i *)(v7 - 16) = v6;
  *(_QWORD *)(v4 + 8) = v7;
  return v9 - __readfsqword(0x28u);
}

