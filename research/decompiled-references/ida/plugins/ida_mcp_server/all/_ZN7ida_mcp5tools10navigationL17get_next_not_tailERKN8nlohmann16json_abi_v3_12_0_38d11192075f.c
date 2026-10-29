void __fastcall __noreturn ida_mcp::tools::navigation::get_next_not_tail(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        char a33,
        char a34,
        int a35,
        char a36,
        int a37,
        int a38,
        char a39,
        char a40,
        int a41,
        char a42,
        char a43,
        int a44,
        char a45,
        int a46,
        int a47,
        __int64 a48,
        __int64 a49,
        char a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        __int64 a57)
{
  _BYTE *v57; // rbx
  void *exception; // r13
  const char *v59; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v57 )
  {
    case 0:
      v59 = "null";
      break;
    case 1:
      v59 = "object";
      break;
    case 2:
      v59 = "array";
      break;
    case 3:
      v59 = "string";
      break;
    case 4:
      v59 = "boolean";
      break;
    case 8:
      v59 = "binary";
      break;
    case 9:
      v59 = "discarded";
      break;
    default:
      v59 = "number";
      break;
  }
  strlen(v59);
  std::string::reserve();
  std::string::append();
  std::string::append();
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
    (__int64)exception,
    302);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

