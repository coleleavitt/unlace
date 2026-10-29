void __fastcall __noreturn ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_data_value(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        __int64 a23,
        __int64 a24,
        char a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        int a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        char a44,
        int a45,
        char a46,
        int a47,
        int a48,
        char a49,
        char a50,
        int a51,
        char a52,
        int a53,
        int a54,
        char a55,
        char a56,
        int a57,
        char a58,
        int a59,
        int a60,
        char a61,
        char a62,
        int a63,
        char a64,
        int a65,
        int a66,
        char a67,
        char a68,
        int a69,
        char a70,
        int a71,
        int a72,
        char a73,
        char a74,
        int a75,
        __int64 a76,
        __int64 a77,
        char a78,
        int a79,
        int a80,
        int a81,
        int a82,
        int a83,
        int a84,
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
        int a103,
        int a104,
        int a105,
        int a106,
        __int64 a107)
{
  void *exception; // r12
  const char *v108; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *a2 )
  {
    case 0:
      v108 = "null";
      break;
    case 1:
      v108 = "object";
      break;
    case 2:
      v108 = "array";
      break;
    case 3:
      v108 = "string";
      break;
    case 4:
      v108 = "boolean";
      break;
    case 8:
      v108 = "binary";
      break;
    case 9:
      v108 = "discarded";
      break;
    default:
      v108 = "number";
      break;
  }
  strlen(v108);
  std::string::reserve();
  std::string::append();
  std::string::append();
  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
    (__int64)exception,
    305);
  std::string::_M_dispose();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
}

