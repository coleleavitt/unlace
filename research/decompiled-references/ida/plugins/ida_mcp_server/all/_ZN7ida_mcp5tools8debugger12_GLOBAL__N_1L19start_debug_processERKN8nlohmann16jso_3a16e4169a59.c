void __fastcall __noreturn ida_mcp::tools::debugger::`anonymous namespace'::start_debug_process(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        char a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12

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

