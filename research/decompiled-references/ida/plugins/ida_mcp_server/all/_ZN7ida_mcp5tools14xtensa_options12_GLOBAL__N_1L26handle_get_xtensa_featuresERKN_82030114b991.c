void __fastcall __noreturn ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_get_xtensa_features(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        void *a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        int a25,
        int a26,
        __int64 a27)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13

  exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
  nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
    exception,
    305);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

