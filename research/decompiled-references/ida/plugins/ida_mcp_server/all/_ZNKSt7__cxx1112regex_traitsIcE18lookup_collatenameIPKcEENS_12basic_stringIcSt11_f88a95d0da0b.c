__int64 __fastcall std::regex_traits<char>::lookup_collatename<char const*>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  _BYTE *v6; // rbp
  __int64 (__fastcall *v7)(__int64, unsigned int); // rax
  size_t v8; // r13
  size_t v9; // rax
  __int64 v10; // r13
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r15
  const char **v13; // r15
  const char *v14; // r12
  const char **v15; // rbx
  __int64 v16; // rbx
  __int64 (__fastcall *v18)(__int64, unsigned int); // rax
  const char **v19; // r13
  size_t n; // [rsp+28h] [rbp-60h]
  _QWORD v21[11]; // [rsp+30h] [rbp-58h] BYREF

  v21[3] = __readfsqword(0x28u);
  v6 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)a2 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v6 )
    std::__throw_bad_cast();
  LOBYTE(v21[0]) = 0;
  n = 0;
  if ( a3 == a4 )
    goto LABEL_24;
  do
  {
    v10 = *a3;
    v11 = v6[v10 + 313];
    v12 = *a3;
    if ( v11 )
    {
      v8 = n;
      v12 = v11;
    }
    else
    {
      v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 64LL);
      if ( v7 != std::ctype<char>::do_narrow )
        v12 = ((__int64 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v7)(v6, (unsigned int)(char)v10, 0);
      if ( v12 )
        v6[v10 + 313] = v12;
      v8 = n;
    }
    v9 = v8 + 1;
    if ( v8 + 1 > 0xF )
    {
      std::string::_M_mutate();
      v9 = v8 + 1;
    }
    *((_BYTE *)v21 + v8) = v12;
    ++a3;
    n = v9;
    *((_BYTE *)v21 + v9) = 0;
  }
  while ( a4 != a3 );
  if ( !v9 )
  {
LABEL_24:
    v19 = (const char **)std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames;
    while ( 1 )
    {
      v15 = v19;
      if ( !strlen(*v19) )
        break;
      if ( &DW_ref__ZTISt11regex_error == (_UNKNOWN **)++v19 )
      {
LABEL_27:
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = a1 + 16;
        *(_BYTE *)(a1 + 16) = 0;
        return a1;
      }
    }
  }
  else
  {
    v13 = (const char **)std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames;
    while ( 1 )
    {
      v14 = *v13;
      v15 = v13;
      if ( n == strlen(*v13) && !memcmp(v21, v14, n) )
        break;
      if ( &DW_ref__ZTISt11regex_error == (_UNKNOWN **)++v13 )
        goto LABEL_27;
    }
  }
  v16 = ((char *)v15
       - (char *)std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames) >> 3;
  if ( !v6[56] )
  {
    std::ctype<char>::_M_widen_init();
    v18 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
    if ( v18 != std::ctype<char>::do_widen )
      v18((__int64)v6, (char)v16);
  }
  *(_QWORD *)a1 = a1 + 16;
  std::string::_M_construct();
  return a1;
}

