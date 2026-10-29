void __fastcall __noreturn nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp

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

