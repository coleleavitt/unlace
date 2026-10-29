// Alternative name is '_ZN8nlohmann16json_abi_v3_12_06detail10type_errorC2EiPKc'
void (__fastcall **__fastcall nlohmann::json_abi_v3_12_0::detail::type_error::type_error(
        nlohmann::json_abi_v3_12_0::detail::type_error *this,
        int a2,
        const char *a3))(nlohmann::json_abi_v3_12_0::detail::type_error *__hidden this)
{
  std::runtime_error *v4; // rdi

  v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)((char *)this + 16);
  *((_DWORD *)v4 - 2) = a2;
  *((_QWORD *)v4 - 2) = off_4444D0;
  std::runtime_error::runtime_error(v4, a3);
  *(_QWORD *)this = off_444548;
  return off_444548;
}

