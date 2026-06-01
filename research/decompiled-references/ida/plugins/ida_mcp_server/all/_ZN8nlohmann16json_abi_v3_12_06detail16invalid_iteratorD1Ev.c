// Alternative name is '_ZN8nlohmann16json_abi_v3_12_06detail16invalid_iteratorD2Ev'
void __fastcall nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator(
        nlohmann::json_abi_v3_12_0::detail::invalid_iterator *this)
{
  std::runtime_error *v2; // rdi

  v2 = (nlohmann::json_abi_v3_12_0::detail::invalid_iterator *)((char *)this + 16);
  *((_QWORD *)v2 - 2) = off_4444D0;
  std::runtime_error::~runtime_error(v2);
  std::exception::~exception(this);
}

