_QWORD *__fastcall nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[26],std::string,char>(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  char v9; // r12
  __int64 v10; // rdx

  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
  strlen(a2);
  std::string::reserve();
  if ( 0x7FFFFFFFFFFFFFFELL - a1[1] < strlen(a2) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - a1[1]) < *(_QWORD *)(a3 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  v6 = *a1;
  v7 = a1[1];
  if ( a1 + 2 == (_QWORD *)*a1 )
    v8 = 15;
  else
    v8 = a1[2];
  v9 = *a4;
  if ( v8 < v7 + 1 )
  {
    std::string::_M_mutate();
    v6 = *a1;
  }
  *(_BYTE *)(v6 + v7) = v9;
  v10 = *a1;
  a1[1] = v7 + 1;
  *(_BYTE *)(v10 + v7 + 1) = 0;
  return a1;
}

