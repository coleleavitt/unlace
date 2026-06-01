void __fastcall __noreturn ida_mcp::tools::navigation::get_func_limits(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        __int64 a32,
        __int64 a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        char a52,
        int a53,
        int a54,
        char a55,
        int a56,
        int a57,
        char a58,
        int a59,
        int a60,
        char a61,
        int a62,
        int a63,
        char a64,
        int a65,
        int a66,
        char a67,
        int a68,
        int a69,
        char a70,
        int a71,
        int a72,
        char a73,
        int a74,
        int a75,
        char a76,
        int a77,
        int a78,
        char a79,
        char a80,
        int a81,
        __int64 a82,
        __int64 a83,
        char a84,
        int a85,
        int a86,
        int a87,
        int a88,
        int a89,
        int a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        char a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        __int64 a103)
{
  _BYTE *v103; // rbx
  void *exception; // r12
  const char *v105; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v103 )
  {
    case 0:
      v105 = "null";
      break;
    case 1:
      v105 = "object";
      break;
    case 2:
      v105 = "array";
      break;
    case 3:
      v105 = "string";
      break;
    case 4:
      v105 = "boolean";
      break;
    case 8:
      v105 = "binary";
      break;
    case 9:
      v105 = "discarded";
      break;
    default:
      v105 = "number";
      break;
  }
  strlen(v105);
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

