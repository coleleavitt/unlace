unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned char,0>(
        unsigned __int8 *a1,
        _BYTE *a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v6 = __readfsqword(0x28u);
  if ( *a1 == 6 )
    goto LABEL_5;
  if ( v2 > 6u )
  {
    if ( v2 == 7 )
    {
      v3 = (int)*((double *)a1 + 1);
      goto LABEL_6;
    }
LABEL_9:
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  if ( v2 != 4 && v2 != 5 )
    goto LABEL_9;
LABEL_5:
  LOBYTE(v3) = a1[8];
LABEL_6:
  *a2 = v3;
  return v6 - __readfsqword(0x28u);
}

