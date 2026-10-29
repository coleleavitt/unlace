void __fastcall __noreturn ida_mcp::tools::comments::`anonymous namespace'::get_func_cmt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        int a26,
        int a27,
        char a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
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
        char a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        char a59,
        int a60,
        int a61,
        char a62,
        int a63,
        int a64,
        char a65,
        int a66,
        int a67,
        char a68,
        int a69,
        int a70,
        char a71,
        char a72,
        int a73,
        char a74,
        int a75,
        int a76,
        char a77,
        char a78,
        int a79,
        __int64 a80,
        __int64 a81,
        char a82,
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
        char a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        __int64 a105)
{
  _BYTE *v105; // r14
  void *exception; // r12
  const char *v107; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v105 )
  {
    case 0:
      v107 = "null";
      break;
    case 1:
      v107 = "object";
      break;
    case 2:
      v107 = "array";
      break;
    case 3:
      v107 = "string";
      break;
    case 4:
      v107 = "boolean";
      break;
    case 8:
      v107 = "binary";
      break;
    case 9:
      v107 = "discarded";
      break;
    default:
      v107 = "number";
      break;
  }
  strlen(v107);
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

