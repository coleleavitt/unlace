unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,double,0>(
        char *a1,
        double *a2)
{
  char v2; // al
  double v3; // xmm0_8
  __int64 v5; // rax
  __int64 v6; // rdx
  void *exception; // r14
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v8 = __readfsqword(0x28u);
  if ( *a1 == 6 )
  {
    v5 = *((_QWORD *)a1 + 1);
    if ( v5 < 0 )
    {
      v6 = *((_QWORD *)a1 + 1) & 1LL | (*((_QWORD *)a1 + 1) >> 1);
      v3 = (double)(int)v6 + (double)(int)v6;
    }
    else
    {
      v3 = (double)(int)v5;
    }
  }
  else if ( v2 == 7 )
  {
    v3 = *((double *)a1 + 1);
  }
  else
  {
    if ( v2 != 5 )
    {
      exception = __cxa_allocate_exception(0x20u);
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        (__int64)exception,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v3 = (double)(int)*((_QWORD *)a1 + 1);
  }
  *a2 = v3;
  return v8 - __readfsqword(0x28u);
}

