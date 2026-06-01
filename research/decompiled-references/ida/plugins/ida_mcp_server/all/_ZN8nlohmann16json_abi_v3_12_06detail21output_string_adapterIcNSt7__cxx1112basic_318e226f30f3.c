__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) < a3 )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

