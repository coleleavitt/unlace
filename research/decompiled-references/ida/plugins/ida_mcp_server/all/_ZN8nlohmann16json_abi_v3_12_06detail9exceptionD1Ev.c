// Alternative name is '_ZN8nlohmann16json_abi_v3_12_06detail9exceptionD2Ev'
void __fastcall nlohmann::json_abi_v3_12_0::detail::exception::~exception(
        nlohmann::json_abi_v3_12_0::detail::exception *this)
{
  std::runtime_error *v2; // rdi

  v2 = (nlohmann::json_abi_v3_12_0::detail::exception *)((char *)this + 16);
  *((_QWORD *)v2 - 2) = off_4444D0;
  std::runtime_error::~runtime_error(v2);
  std::exception::~exception(this);
}

