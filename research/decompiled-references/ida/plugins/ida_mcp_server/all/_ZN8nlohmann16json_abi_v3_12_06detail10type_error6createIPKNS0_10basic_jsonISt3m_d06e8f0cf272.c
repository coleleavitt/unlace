nlohmann::json_abi_v3_12_0::detail::type_error *__fastcall nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        nlohmann::json_abi_v3_12_0::detail::type_error *this,
        int a2)
{
  char *v3; // [rsp+18h] [rbp-C0h]
  _BYTE v4[32]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v5[32]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v6; // [rsp+98h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>(v5, "");
  std::string::basic_string<std::allocator<char>>(v4, "type_error");
  nlohmann::json_abi_v3_12_0::detail::exception::name();
  nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
  std::string::_M_dispose();
  std::string::_M_dispose();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::detail::type_error::type_error(this, a2, v3);
  std::string::_M_dispose();
  return this;
}

