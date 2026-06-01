bool __fastcall std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,true,false>>::_M_invoke(
        __int64 *a1,
        char *a2)
{
  __int64 v2; // r12
  char v3; // bp
  char v4; // bl
  __int64 v5; // rdi

  v2 = *a1;
  v3 = *((_BYTE *)a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v5 )
    std::__throw_bad_cast();
  return v3 == (*(char (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, (unsigned int)v4);
}

