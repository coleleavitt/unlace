__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression(int *a1)
{
  int v1; // edx
  int v3; // edx

  v1 = a1[38];
  if ( v1 != 10 && v1 != 9 )
    return 0;
  std::string::_M_assign();
  std::__detail::_Scanner<char>::_M_advance();
  v3 = *a1;
  if ( (*a1 & 1) != 0 )
  {
    if ( (v3 & 8) != 0 )
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,true>();
    else
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>();
  }
  else if ( (v3 & 8) != 0 )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>();
  }
  else
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>();
  }
  return 1;
}

