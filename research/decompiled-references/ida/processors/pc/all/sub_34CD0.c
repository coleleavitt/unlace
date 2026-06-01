__int64 sub_34CD0()
{
  unsigned int v0; // r14d
  __int64 v1; // rbp
  const char *v2; // r13
  char *v3; // rax
  char v5; // al

  v0 = 0;
  if ( get_ea_name() > 0 )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = off_16BD20[v1];
      v3 = strstr(0, v2);
      if ( v3 )
        break;
      if ( ++v1 == 4 )
        return 0;
    }
    v5 = *(v3 - 1);
    if ( v5 == 95 || (v0 = 0, v5 == 64) )
    {
      strlen(v2);
      return (unsigned int)(v1 + 1);
    }
  }
  return v0;
}
