char *__fastcall std::__detail::_Scanner<char>::_M_eat_class(_QWORD *a1, char a2)
{
  _BYTE *v2; // rax
  char *result; // rax
  char *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  char v9; // r13

  v2 = (_BYTE *)a1[25];
  a1[26] = 0;
  *v2 = 0;
  result = (char *)a1[22];
  v4 = (char *)a1[23];
  if ( result == v4 )
    goto LABEL_15;
  while ( *result != a2 )
  {
    v6 = a1[26];
    a1[22] = result + 1;
    v7 = (_QWORD *)a1[25];
    if ( v7 == a1 + 27 )
      v8 = 15;
    else
      v8 = a1[27];
    v9 = *result;
    if ( v8 >= v6 + 1 )
    {
      *((_BYTE *)v7 + v6) = v9;
    }
    else
    {
      std::string::_M_mutate();
      *(_BYTE *)(a1[25] + v6) = v9;
    }
    v5 = a1[25];
    a1[26] = v6 + 1;
    *(_BYTE *)(v5 + v6 + 1) = 0;
    result = (char *)a1[22];
    v4 = (char *)a1[23];
    if ( result == v4 )
      goto LABEL_15;
  }
  if ( result == v4
    || (a1[22] = result + 1, *result != a2)
    || result + 1 == v4
    || (a1[22] = result + 2, result[1] != 93) )
  {
LABEL_15:
    std::__throw_regex_error();
    return (char *)std::__detail::_Scanner<char>::_M_scan_in_bracket(a2 == 58);
  }
  return result;
}

