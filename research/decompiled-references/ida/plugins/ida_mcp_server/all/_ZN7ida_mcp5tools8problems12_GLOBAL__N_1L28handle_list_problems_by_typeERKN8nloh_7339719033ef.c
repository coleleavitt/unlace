void ida_mcp::tools::problems::`anonymous namespace'::handle_list_problems_by_type()
{
  std::runtime_error *exception; // rbx
  __int64 v1; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 v2; // [rsp+348h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  LOBYTE(v1) = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned char,0>();
  exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
  std::runtime_error::runtime_error(exception, "Problem type must be between 1 and 16");
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (*)(void *))&std::runtime_error::~runtime_error);
}

