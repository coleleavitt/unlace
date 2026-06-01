bool __fastcall std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>>::_M_invoke(
        _QWORD *a1,
        _BYTE *a2)
{
  return (*(_QWORD *)(*a1 + 8 * ((unsigned __int64)(unsigned __int8)*a2 >> 6) + 120) & (1LL << *a2)) != 0;
}

