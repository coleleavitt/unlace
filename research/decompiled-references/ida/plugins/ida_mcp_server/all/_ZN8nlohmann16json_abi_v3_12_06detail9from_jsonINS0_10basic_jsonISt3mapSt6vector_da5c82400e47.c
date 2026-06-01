unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        _BYTE *a1,
        _BYTE *a2)
{
  const char *v3; // rdx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  struct _Unwind_Exception *v5; // [rsp+8h] [rbp-50h]
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  char v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *a1 != 4 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *a1 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = "array";
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
    v7 = 0;
    v6[0] = &v7;
    v6[1] = 0;
    v5 = (struct _Unwind_Exception *)v3;
    strlen(v3);
    std::string::reserve();
    std::string::append((__int64)v6, "type must be boolean, but is ");
    std::string::append((__int64)v6, (const char *)v5);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  *a2 = a1[8];
  return v8 - __readfsqword(0x28u);
}

