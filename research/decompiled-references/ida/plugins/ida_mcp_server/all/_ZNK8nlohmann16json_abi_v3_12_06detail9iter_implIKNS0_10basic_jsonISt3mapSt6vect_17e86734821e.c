char *__fastcall nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->(
        char **a1)
{
  char *result; // rax
  char v2; // dl
  void *exception; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+0h] [rbp-58h]
  int v9; // [rsp+8h] [rbp-50h]
  __int64 v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[5] = __readfsqword(0x28u);
  result = *a1;
  v2 = **a1;
  if ( v2 == 1 )
    return a1[1] + 64;
  if ( v2 == 2 )
    return a1[2];
  if ( a1[3] )
  {
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(v10, "cannot get value", v4, v5, v6, v7, v8, v9, v10[0]);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      214);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
  }
  return result;
}

