__int64 __fastcall sub_BF80(char *s2)
{
  const char *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v5; // rbx
  const char *v6; // rdi

  v2 = "ERI0";
  v3 = &qword_10CA0;
  while ( strcmp(v2, s2) )
  {
    v2 = (const char *)v3[4];
    v3 += 3;
    if ( !v2 )
    {
      v5 = &qword_115A0;
      v6 = byte_D3FB;
      while ( strcmp(v6, s2) )
      {
        v6 = (const char *)v5[4];
        v5 += 3;
        if ( !v6 )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}

