__int64 __fastcall std::string::append(__int64 a1, const char *a2)
{
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < strlen(a2) )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

