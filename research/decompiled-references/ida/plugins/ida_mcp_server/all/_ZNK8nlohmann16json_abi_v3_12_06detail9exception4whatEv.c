__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::exception::what(
        nlohmann::json_abi_v3_12_0::detail::exception *this)
{
  return std::runtime_error::what((nlohmann::json_abi_v3_12_0::detail::exception *)((char *)this + 16));
}

