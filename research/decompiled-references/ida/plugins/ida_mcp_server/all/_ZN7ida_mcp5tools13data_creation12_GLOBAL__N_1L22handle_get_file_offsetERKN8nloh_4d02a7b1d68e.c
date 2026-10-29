void __fastcall __noreturn ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_file_offset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        int a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        char a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        char a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        char a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        __int64 a52,
        __int64 a53,
        char a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        int a69,
        int a70,
        int a71,
        int a72,
        __int64 a73)
{
  _BYTE *v73; // rbx
  void *exception; // r12
  const char *v75; // rbp

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v73 )
  {
    case 0:
      v75 = "null";
      break;
    case 1:
      v75 = "object";
      break;
    case 2:
      v75 = "array";
      break;
    case 3:
      v75 = "string";
      break;
    case 4:
      v75 = "boolean";
      break;
    case 8:
      v75 = "binary";
      break;
    case 9:
      v75 = "discarded";
      break;
    default:
      v75 = "number";
      break;
  }
  strlen(v75);
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

