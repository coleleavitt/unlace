__int64 __fastcall boost::beast::http::token_list::exists(
        unsigned __int8 **a1,
        unsigned __int8 **a2,
        unsigned __int8 *i)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // edi
  int v14; // r8d
  bool j; // r8
  unsigned __int8 v16; // dl
  unsigned __int8 *v17; // rdi

  v4 = *a1;
  v5 = *a1;
  v6 = &a1[1][(_QWORD)*a1];
  while ( 1 )
  {
    if ( v6 == v5 )
    {
LABEL_6:
      v8 = &a1[1][(_QWORD)*a1];
      v4 = v8;
      goto LABEL_7;
    }
    while ( 1 )
    {
      LODWORD(i) = *v5;
      v7 = v5;
      if ( (_BYTE)i != 32 && (_BYTE)i != 9 )
        break;
      if ( v6 == ++v5 )
        goto LABEL_6;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[(unsigned __int8)i] )
      break;
    if ( (_BYTE)i != 44 )
      goto LABEL_6;
    ++v5;
  }
  v10 = v5 + 1;
  do
  {
    v8 = v10;
    if ( v10 == v6 )
      break;
    v11 = *v10++;
  }
  while ( boost::beast::http::detail::is_token_char(char)::tab[v11] );
  for ( i = (unsigned __int8 *)(v8 - v5); ; i = (unsigned __int8 *)(v17 - v5) )
  {
    if ( v6 == v8 )
    {
LABEL_34:
      if ( v4 == v6 )
        goto LABEL_7;
    }
    if ( a2[1] == i )
      break;
LABEL_28:
    v5 = v8;
    for ( j = v4 != v8; ; j = 0 )
    {
      if ( v6 == v5 )
        goto LABEL_33;
      while ( 1 )
      {
        v16 = *v5;
        v7 = v5;
        if ( *v5 != 32 && v16 != 9 )
          break;
        if ( v6 == ++v5 )
          goto LABEL_33;
      }
      if ( boost::beast::http::detail::is_token_char(char)::tab[v16] )
        break;
      if ( v16 != 44 )
        goto LABEL_33;
      ++v5;
    }
    if ( j )
    {
LABEL_33:
      v8 = v6;
      v4 = v6;
      i = nullptr;
      v7 = nullptr;
      goto LABEL_34;
    }
    v17 = v5;
    do
      ++v17;
    while ( v6 != v17 && boost::beast::http::detail::is_token_char(char)::tab[*v17] );
    v4 = v8;
    v8 = v17;
  }
  v5 = *a2;
  while ( i )
  {
    if ( *v5 != *v7 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (char)v5[v12];
        if ( (unsigned int)(v13 - 65) < 0x1A )
          LOBYTE(v13) = v13 + 32;
        v14 = (char)v7[v12];
        if ( (unsigned int)(v14 - 65) < 0x1A )
          LOBYTE(v14) = v14 + 32;
        if ( (_BYTE)v14 != (_BYTE)v13 )
          goto LABEL_28;
        if ( (unsigned __int8 *)++v12 == i )
          goto LABEL_7;
      }
    }
    ++v7;
    ++v5;
    --i;
  }
LABEL_7:
  LOBYTE(v5) = v8 == v4;
  LOBYTE(i) = v6 == v8;
  return (unsigned int)i & (unsigned int)v5 ^ 1;
}

