bool __fastcall std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>>::_M_invoke(
        __int64 a1,
        unsigned __int8 *a2)
{
  unsigned __int8 v3; // [rsp+0h] [rbp-18h]

  if ( (_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul )
    return std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)const::__nul != *a2;
  v3 = *a2;
  if ( __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul) )
  {
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)const::__nul = 0;
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul);
  }
  return std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)const::__nul != v3;
}

