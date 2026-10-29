__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  std::string::reserve();
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8)) < *(_QWORD *)(a2 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8)) < *(_QWORD *)(a3 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8)) < *(_QWORD *)(a4 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  return a1;
}

