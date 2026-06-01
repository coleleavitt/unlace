bool __fastcall sub_1CEF00(char *s1)
{
  bool result; // al
  char *v2; // rbx
  char i; // r12
  const char **v4; // rbp
  const char *v5; // rbx
  int v6; // edx

  result = 0;
  if ( s1 )
  {
    v2 = s1;
    for ( i = *s1; i == 95; ++v2 )
      i = v2[1];
    v4 = (const char **)off_4BF100;
    do
    {
      if ( !strcmp(v2, *v4) )
        return 1;
      ++v4;
    }
    while ( v4 != (const char **)off_4BF140 );
    v5 = &v2[i == 83];
    v6 = strncmp(v5, "EH_prolog", 9u);
    result = 1;
    if ( v6 )
      return strncmp(v5, "EH_epilog", 9u) == 0;
  }
  return result;
}

