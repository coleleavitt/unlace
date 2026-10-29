bool __fastcall std::regex_traits<char>::isctype(__int64 a1, unsigned __int8 a2, unsigned __int16 a3, char a4)
{
  __int64 v6; // r12
  bool result; // al
  char v8; // al
  __int64 (__fastcall *v9)(__int64, unsigned int); // rdx

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v6 )
    std::regex_traits<char>::isctype();
  result = 1;
  if ( (*(_WORD *)(*(_QWORD *)(v6 + 48) + 2LL * a2) & a3) == 0 )
  {
    result = 0;
    if ( (a4 & 1) != 0 )
    {
      if ( *(_BYTE *)(v6 + 56) )
      {
        v8 = *(_BYTE *)(v6 + 152);
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
        v8 = 95;
        if ( v9 != std::ctype<char>::do_widen )
          v8 = v9(v6, 95u);
      }
      return a2 == (unsigned __int8)v8;
    }
  }
  return result;
}

