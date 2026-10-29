__int64 __fastcall boost::beast::http::validate_list<boost::beast::http::detail::opt_token_list_policy>(__int64 a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 *v2; // rcx
  unsigned __int8 v3; // dl
  unsigned __int8 *v5; // rax
  __int64 v6; // rdx
  unsigned __int8 *v7; // rsi
  bool v8; // r8
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // dl

  v1 = *(unsigned __int8 **)a1;
  v2 = (unsigned __int8 *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
  while ( 1 )
  {
    if ( v2 == v1 )
      return 1;
    while ( 1 )
    {
      v3 = *v1;
      if ( *v1 != 32 && v3 != 9 )
        break;
      if ( v2 == ++v1 )
        return 1;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v3] )
    {
      v5 = v1 + 1;
      do
      {
        v7 = v5;
        if ( v5 == v2 )
          break;
        v6 = *v5++;
      }
      while ( boost::beast::http::detail::is_token_char(char)::tab[v6] );
LABEL_14:
      v8 = *(_QWORD *)a1 != (_QWORD)v7;
      while ( v7 != v2 )
      {
        v9 = v7;
        while ( 1 )
        {
          v10 = *v9;
          v7 = v9;
          if ( *v9 != 32 && v10 != 9 )
            break;
          if ( v2 == ++v9 )
            return 1;
        }
        if ( boost::beast::http::detail::is_token_char(char)::tab[v10] )
        {
          if ( v8 )
            return 0;
          do
            ++v7;
          while ( v7 != v2 && boost::beast::http::detail::is_token_char(char)::tab[*v7] );
          goto LABEL_14;
        }
        if ( v10 != 44 )
          return 0;
        v7 = v9 + 1;
        v8 = 0;
      }
      return 1;
    }
    if ( v3 != 44 )
      return 0;
    ++v1;
  }
}

