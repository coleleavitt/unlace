__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>>::_M_invoke(
        __int64 *a1,
        char *a2)
{
  __int64 v3; // r12
  char v4; // bp
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r12
  unsigned __int8 v8; // bp
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // edx

  v3 = *a1;
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v5
    || (v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, (unsigned int)v4),
        v7 = *a1,
        v8 = v6,
        (v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id))) == 0)
    || (v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, 10),
        v11 = *a1,
        v12 = v10,
        (v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL)
                         + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id))) == 0) )
  {
    std::__throw_bad_cast();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, 13);
  v15 = v14;
  LOBYTE(v14) = v12 != (char)v8;
  LOBYTE(v15) = (_BYTE)v15 != v8;
  return v15 & v14;
}

