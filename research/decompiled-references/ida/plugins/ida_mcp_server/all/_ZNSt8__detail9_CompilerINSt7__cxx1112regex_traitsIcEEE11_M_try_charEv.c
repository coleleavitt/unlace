__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(__int64 a1)
{
  int v1; // eax
  char *v3; // r12
  char *v4; // r13
  int v5; // ebx
  _BOOL4 i; // eax
  bool v7; // of
  int v8; // eax
  int v9; // ebx
  char *v10; // r13
  char *v11; // r12
  int v12; // ebx
  _BOOL4 j; // eax
  int v14; // eax
  int v15; // ebx

  v1 = *(_DWORD *)(a1 + 152);
  if ( v1 == 2 )
  {
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    v3 = *(char **)(a1 + 272);
    v4 = &v3[*(_QWORD *)(a1 + 280)];
    if ( v3 != v4 )
    {
      v5 = 0;
      for ( i = 0; !i; i = v7 )
      {
        v8 = std::regex_traits<char>::value((unsigned int)*v3, 8);
        v7 = __OFADD__(v8, v5);
        v9 = v8 + v5;
        if ( v7 )
          break;
        if ( v4 == ++v3 )
          goto LABEL_11;
        v7 = (unsigned int)((unsigned __int64)v9 >> 29) != 0;
        v5 = 8 * v9;
      }
LABEL_22:
      std::__throw_regex_error();
    }
LABEL_11:
    std::string::_M_replace_aux();
    return 1;
  }
  if ( v1 == 3 )
  {
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    v10 = *(char **)(a1 + 272);
    v11 = &v10[*(_QWORD *)(a1 + 280)];
    if ( v10 != v11 )
    {
      v12 = 0;
      for ( j = 0; !j; j = v7 )
      {
        v14 = std::regex_traits<char>::value((unsigned int)*v10, 16);
        v7 = __OFADD__(v14, v12);
        v15 = v14 + v12;
        if ( v7 )
          break;
        if ( v11 == ++v10 )
          goto LABEL_11;
        v7 = (unsigned int)((unsigned __int64)v15 >> 28) != 0;
        v12 = 16 * v15;
      }
      goto LABEL_22;
    }
    goto LABEL_11;
  }
  if ( v1 != 1 )
    return 0;
  std::string::_M_assign();
  std::__detail::_Scanner<char>::_M_advance();
  return 1;
}

