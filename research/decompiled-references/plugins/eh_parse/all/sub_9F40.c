char *__fastcall sub_9F40(char *s1)
{
  char v1; // dl
  char *v2; // rbx
  char *result; // rax
  int v4; // edx
  char s2[11]; // [rsp+2h] [rbp-26h] BYREF
  char v6[11]; // [rsp+Dh] [rbp-1Bh] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( !s1 )
    return nullptr;
  v1 = *s1;
  v2 = s1;
  result = s1;
  if ( *s1 )
  {
    if ( v1 == 46 )
    {
      v2 = s1 + 1;
      if ( s1[1] != 95 )
        goto LABEL_6;
    }
    else if ( v1 != 95 )
    {
      goto LABEL_6;
    }
    do
      ++v2;
    while ( *v2 == 95 );
LABEL_6:
    strcpy(s2, "cxxabiv1::");
    strcpy(v6, "cxxabiv2::");
    if ( !strncmp(v2, s2, 0xAu) || (v4 = strncmp(v2, v6, 0xAu), result = v2, !v4) )
    {
      for ( result = v2 + 10; *result == 95; ++result )
        ;
    }
  }
  return result;
}
