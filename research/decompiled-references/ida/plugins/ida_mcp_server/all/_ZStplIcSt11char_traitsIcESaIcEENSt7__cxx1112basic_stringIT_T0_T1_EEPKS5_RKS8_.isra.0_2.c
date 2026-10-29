__int64 __fastcall std::operator+<char>(__int64 a1, const char *a2, __int64 a3, unsigned __int64 a4)
{
  size_t v5; // rax
  unsigned __int64 v6; // r13

  v5 = strlen(a2);
  *(_BYTE *)(a1 + 16) = 0;
  v6 = v5;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  std::string::reserve();
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v6 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < a4 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  return a1;
}

