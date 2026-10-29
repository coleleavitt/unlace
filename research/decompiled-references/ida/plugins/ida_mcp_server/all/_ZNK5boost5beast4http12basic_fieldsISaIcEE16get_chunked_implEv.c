__int64 boost::beast::http::basic_fields<std::allocator<char>>::get_chunked_impl()
{
  unsigned __int8 *v0; // rax
  unsigned __int8 *v1; // rsi
  __int64 v2; // rdx
  unsigned __int8 *v3; // rcx
  unsigned __int8 v4; // dl
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  unsigned __int8 *v8; // r9
  unsigned __int8 *v9; // rax
  bool i; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // rdx

  v0 = (unsigned __int8 *)boost::beast::http::basic_fields<std::allocator<char>>::operator[]();
  v1 = v0;
  v3 = &v0[v2];
  while ( 1 )
  {
    if ( v3 == v0 )
      return 0;
    while ( 1 )
    {
      v4 = *v0;
      if ( *v0 != 32 && v4 != 9 )
        break;
      if ( v3 == ++v0 )
        return 0;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v4] )
      break;
    if ( v4 != 44 )
      return 0;
    ++v0;
  }
  v6 = v0 + 1;
  do
  {
    v8 = v6;
    if ( v6 == v3 )
      break;
    v7 = *v6++;
  }
  while ( boost::beast::http::detail::is_token_char(char)::tab[v7] );
  if ( v3 == v8 )
    goto LABEL_29;
  do
  {
    do
    {
      v9 = v8;
      for ( i = v1 != v8; ; i = 0 )
      {
        if ( v3 == v9 )
          return boost::beast::iequals();
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 != 9 && v11 != 32 )
            break;
          if ( v3 == ++v9 )
            return boost::beast::iequals();
        }
        if ( boost::beast::http::detail::is_token_char(char)::tab[v11] )
          break;
        if ( v11 != 44 )
          return boost::beast::iequals();
        ++v9;
      }
      if ( i )
        return boost::beast::iequals();
      v12 = v9;
      while ( v3 != ++v12 )
      {
        if ( !boost::beast::http::detail::is_token_char(char)::tab[*v12] )
          goto LABEL_28;
      }
      if ( v8 == v3 )
        return boost::beast::iequals();
LABEL_28:
      v1 = v8;
      v8 = v12;
    }
    while ( v3 != v12 );
LABEL_29:
    ;
  }
  while ( v1 != v3 );
  return 0;
}

