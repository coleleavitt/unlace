void __fastcall __noreturn ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_exec_snippet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32,
        char a33,
        int a34,
        char a35,
        char a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        int a48,
        int a49,
        char *a50,
        __int64 a51,
        char a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        __int64 a59)
{
  _BYTE *v59; // rbp
  void *exception; // r12
  const char *v61; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v59 )
  {
    case 0:
      v61 = "null";
      break;
    case 1:
      v61 = "object";
      break;
    case 2:
      v61 = "array";
      break;
    case 3:
      v61 = "string";
      break;
    case 4:
      v61 = "boolean";
      break;
    case 8:
      v61 = "binary";
      break;
    case 9:
      v61 = "discarded";
      break;
    default:
      v61 = "number";
      break;
  }
  a52 = 0;
  a50 = &a52;
  a51 = 0;
  strlen(v61);
  std::string::reserve();
  std::string::append((__int64)&a50, "type must be string, but is ");
  std::string::append((__int64)&a50, v61);
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
    (__int64)exception,
    302);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

