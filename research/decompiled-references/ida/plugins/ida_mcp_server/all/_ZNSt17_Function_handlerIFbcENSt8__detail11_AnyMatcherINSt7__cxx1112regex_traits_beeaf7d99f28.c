bool __fastcall std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>>::_M_invoke(
        __int64 *a1,
        char *a2)
{
  char v3; // bl
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi

  v3 = *a2;
  if ( !(_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul
    && __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul) )
  {
    v7 = *a1;
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL)
                   + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
    if ( !v8 )
      std::__throw_bad_cast();
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)const::__nul = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 0);
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul);
  }
  v4 = *a1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v5 )
    std::__throw_bad_cast();
  return std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)const::__nul != (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, (unsigned int)v3);
}

