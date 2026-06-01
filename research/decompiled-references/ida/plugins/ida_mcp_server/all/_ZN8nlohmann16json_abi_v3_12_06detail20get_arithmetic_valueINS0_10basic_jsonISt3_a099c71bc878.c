unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>(
        char *a1,
        unsigned __int64 *a2)
{
  char v2; // al
  double v3; // xmm0_8
  unsigned __int64 v4; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v7 = __readfsqword(0x28u);
  if ( *a1 == 6 )
  {
LABEL_6:
    v4 = *((_QWORD *)a1 + 1);
    goto LABEL_7;
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
    goto LABEL_6;
  }
  v3 = *((double *)a1 + 1);
  if ( v3 < 9.223372036854776e18 )
    v4 = (unsigned int)(int)v3;
  else
    v4 = (unsigned int)(int)(v3 - 9.223372036854776e18) ^ 0x8000000000000000LL;
LABEL_7:
  *a2 = v4;
  return v7 - __readfsqword(0x28u);
}

