__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>(
        __int64 a1,
        const char *a2,
        const char **a3)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  strlen(a2);
  strlen(*a3);
  std::string::reserve();
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < strlen(a2) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < strlen(*a3) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  return a1;
}

