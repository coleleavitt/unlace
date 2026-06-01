unsigned __int8 *__fastcall boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment(
        __int64 a1)
{
  unsigned __int8 *v1; // rcx
  __int64 v2; // rdx
  unsigned __int8 *result; // rax
  bool v4; // r9
  unsigned __int8 *v5; // rcx
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // rdx
  __int64 v8; // r9
  unsigned __int8 *v9; // r8

  v1 = **(unsigned __int8 ***)a1;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  *(_QWORD *)(a1 + 16) = 0;
  result = *(unsigned __int8 **)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  v4 = result != v1;
  v5 = &v1[v2];
  while ( 1 )
  {
    if ( v5 == result )
    {
LABEL_6:
      *(_QWORD *)(a1 + 8) = 0;
      return result;
    }
    while ( 1 )
    {
      v6 = *result;
      if ( *result != 9 && v6 != 32 )
        break;
      *(_QWORD *)(a1 + 8) = ++result;
      if ( v5 == result )
        goto LABEL_6;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v6] )
      break;
    if ( v6 != 44 )
      goto LABEL_11;
    ++result;
    v4 = 0;
    *(_QWORD *)(a1 + 8) = result;
  }
  if ( v4 )
  {
LABEL_11:
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 32) = 1;
    return result;
  }
  v7 = result + 1;
  do
  {
    *(_QWORD *)(a1 + 8) = v7;
    v9 = v7;
    if ( v5 == v7 )
      break;
    v8 = *v7++;
  }
  while ( boost::beast::http::detail::is_token_char(char)::tab[v8] );
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = v9 - result;
  return result;
}

