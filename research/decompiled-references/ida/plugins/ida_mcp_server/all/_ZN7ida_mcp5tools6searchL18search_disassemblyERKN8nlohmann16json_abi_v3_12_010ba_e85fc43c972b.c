void __fastcall __noreturn ida_mcp::tools::search::search_disassembly()
{
  __int64 v0; // rbp
  _BYTE *v1; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  char *v3; // rax

  exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
  switch ( *v1 )
  {
    case 0:
      v3 = "null";
      break;
    case 1:
      v3 = "object";
      break;
    case 2:
      v3 = (char *)"array";
      break;
    case 3:
      v3 = "string";
      break;
    case 4:
      v3 = "boolean";
      break;
    case 8:
      v3 = "binary";
      break;
    case 9:
      v3 = "discarded";
      break;
    default:
      v3 = "number";
      break;
  }
  *(_QWORD *)(v0 - 560) = v3;
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

