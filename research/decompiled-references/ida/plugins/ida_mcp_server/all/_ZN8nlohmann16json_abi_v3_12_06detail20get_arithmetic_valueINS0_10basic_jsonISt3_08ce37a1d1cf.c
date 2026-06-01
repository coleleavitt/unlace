unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,long,0>(
        char *a1,
        _QWORD *a2)
{
  char v2; // al
  __int64 v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v6 = __readfsqword(0x28u);
  if ( *a1 == 6 )
  {
LABEL_5:
    v3 = *((_QWORD *)a1 + 1);
    goto LABEL_6;
  }
  if ( v2 != 7 )
  {
    if ( v2 != 5 )
    {
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
    goto LABEL_5;
  }
  v3 = (unsigned int)(int)*((double *)a1 + 1);
LABEL_6:
  *a2 = v3;
  return v6 - __readfsqword(0x28u);
}

