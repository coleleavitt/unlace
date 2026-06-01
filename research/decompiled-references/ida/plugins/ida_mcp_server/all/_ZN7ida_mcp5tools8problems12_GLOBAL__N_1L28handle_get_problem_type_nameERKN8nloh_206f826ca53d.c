void __fastcall __noreturn ida_mcp::tools::problems::`anonymous namespace'::handle_get_problem_type_name(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        char a13,
        char a14,
        int a15,
        char a16,
        int a17,
        int a18,
        char a19,
        char a20,
        int a21,
        char a22,
        int a23,
        int a24,
        char a25,
        int a26,
        int a27,
        __int64 a28,
        __int64 a29,
        char a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        __int64 a37)
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

