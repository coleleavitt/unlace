void __fastcall __noreturn ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decl_impl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r15
  const char *v6; // rbx

  *(_QWORD *)(v4 - 408) = a4;
  exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
  switch ( *(_BYTE *)(*(_QWORD *)(v4 - 408) + 64LL) )
  {
    case 0:
      v6 = "null";
      break;
    case 1:
      v6 = "object";
      break;
    case 2:
      v6 = "array";
      break;
    case 3:
      v6 = "string";
      break;
    case 4:
      v6 = "boolean";
      break;
    case 8:
      v6 = "binary";
      break;
    case 9:
      v6 = "discarded";
      break;
    default:
      v6 = "number";
      break;
  }
  *(_BYTE *)(v4 - 112) = 0;
  *(_QWORD *)(v4 - 120) = 0;
  *(_QWORD *)(v4 - 128) = v4 - 112;
  strlen(v6);
  std::string::reserve();
  std::string::append(v4 - 128, "type must be boolean, but is ");
  std::string::append(v4 - 128, v6);
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
    exception,
    302);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

