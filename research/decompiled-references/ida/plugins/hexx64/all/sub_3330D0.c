const char **__fastcall sub_3330D0(const char **a1, const char **a2, const char *a3, double a4)
{
  const char **v4; // rbp
  __int64 i; // rbx
  __int64 v7; // r14
  const char **v8; // r15

  v4 = a1;
  for ( i = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1); i > 0; i = i - 1 - v7 )
  {
    while ( 1 )
    {
      v7 = i >> 1;
      v8 = &v4[5 * (i >> 1)];
      if ( strcmp(*v8, a3) < 0 )
        break;
      i >>= 1;
      if ( v7 <= 0 )
        goto LABEL_5;
    }
    v4 = v8 + 5;
  }
LABEL_5:
  if ( a2 == v4 || strcmp(*v4, a3) )
  {
    v4 = nullptr;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)v4 + 32) )
  {
    if ( (unsigned __int8)deserialize_tinfo() )
    {
      if ( (int)lower_type() >= 0 )
        goto LABEL_8;
      if ( !under_debugger )
        sub_383060(0xCB31u, a4);
    }
    else if ( !under_debugger )
    {
      sub_383060(0xC795u, a4);
    }
    BUG();
  }
LABEL_8:
  clear_tinfo_t();
  return v4;
}

