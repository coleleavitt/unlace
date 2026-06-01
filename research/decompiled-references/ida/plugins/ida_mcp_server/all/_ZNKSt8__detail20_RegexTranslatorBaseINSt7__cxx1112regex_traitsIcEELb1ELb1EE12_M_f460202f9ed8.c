__int64 __fastcall std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
        __int64 a1,
        char a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v2 )
    std::__throw_bad_cast();
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, (unsigned int)a2);
}

