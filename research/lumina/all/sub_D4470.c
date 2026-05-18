int __fastcall sub_D4470(__int64 a1, const char *a2, void *a3)
{
  __int64 v4; // rbx
  const char **i; // rbp
  int result; // eax
  _UNKNOWN **v7; // rdx
  __int64 (__fastcall **v8)(); // rax
  __int64 (__fastcall *v9)(); // rdx

  if ( a2 )
  {
    v4 = 0;
    for ( i = (const char **)&off_241160; ; i += 3 )
    {
      result = strcmp(a2, *i);
      if ( !result )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (_DWORD)v4 == 29 )
        return 12;
    }
    v7 = &off_241160 + 3 * v4;
    if ( !v7[2] )
      v7[2] = v7[1];
    if ( !a3 )
      a3 = *(&off_241160 + 3 * v4 + 2);
    *(&off_241160 + 3 * v4 + 1) = a3;
  }
  else
  {
    v8 = &off_241168;
    do
    {
      v9 = v8[1];
      if ( v9 )
        *v8 = v9;
      v8 += 3;
    }
    while ( v8 != (__int64 (__fastcall **)())&unk_241420 );
    return 0;
  }
  return result;
}
