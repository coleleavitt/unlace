__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,false,false>>::_M_manager(
        _QWORD *a1,
        _WORD *a2,
        int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = a2;
    }
    else if ( a3 == 2 )
    {
      *(_WORD *)a1 = *a2;
    }
    return 0;
  }
  else
  {
    *a1 = &`typeinfo for'std::__detail::_CharMatcher<std::regex_traits<char>,false,false>;
    return 0;
  }
}

