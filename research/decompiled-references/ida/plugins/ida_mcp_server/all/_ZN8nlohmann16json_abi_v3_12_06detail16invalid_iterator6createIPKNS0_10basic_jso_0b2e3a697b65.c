__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        __int64 a1,
        int a2)
{
  char *v3; // [rsp+18h] [rbp-C0h]
  _BYTE v4[32]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v5[32]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v6; // [rsp+98h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>(v5, "");
  std::string::basic_string<std::allocator<char>>(v4, "invalid_iterator");
  nlohmann::json_abi_v3_12_0::detail::exception::name();
  nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
  std::string::_M_dispose();
  std::string::_M_dispose();
  std::string::_M_dispose();
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = off_4444D0;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 16), v3);
  *(_QWORD *)a1 = off_444520;
  std::string::_M_dispose();
  return a1;
}

