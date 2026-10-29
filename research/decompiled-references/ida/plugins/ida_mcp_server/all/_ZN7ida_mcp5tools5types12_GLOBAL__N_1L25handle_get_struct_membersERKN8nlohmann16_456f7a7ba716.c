void __fastcall __noreturn ida_mcp::tools::types::`anonymous namespace'::handle_get_struct_members()
{
  __int64 v0; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  char *v2; // rax

  exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
  switch ( *(_BYTE *)(v0 - 697) )
  {
    case 1:
      v2 = "object";
      break;
    case 2:
      v2 = (char *)"array";
      break;
    case 3:
      v2 = "string";
      break;
    case 4:
      v2 = "boolean";
      break;
    case 8:
      v2 = "binary";
      break;
    case 9:
      v2 = "discarded";
      break;
    default:
      v2 = "number";
      break;
  }
  *(_QWORD *)(v0 - 544) = v2;
  nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
    exception,
    308);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

