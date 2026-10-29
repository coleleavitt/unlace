void __fastcall __noreturn nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        char a12,
        int a13,
        int a14,
        __int64 a15)
{
  _BYTE *v15; // rbx
  void *exception; // rbp
  const char *v17; // rbx

  exception = __cxa_allocate_exception(0x20u);
  switch ( *v15 )
  {
    case 0:
      v17 = "null";
      break;
    case 1:
      v17 = "object";
      break;
    case 2:
      v17 = "array";
      break;
    case 3:
      v17 = "string";
      break;
    case 4:
      v17 = "boolean";
      break;
    case 8:
      v17 = "binary";
      break;
    case 9:
      v17 = "discarded";
      break;
    default:
      v17 = "number";
      break;
  }
  strlen(v17);
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

