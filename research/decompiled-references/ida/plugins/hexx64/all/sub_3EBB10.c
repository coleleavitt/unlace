char **__fastcall sub_3EBB10(char *s2)
{
  char *i; // rbx
  __int64 v2; // rbp
  char **v3; // r14
  __int64 v4; // r12
  const char **v5; // r13

  for ( i = s2; *i == 95; ++i )
    ;
  v2 = 16;
  v3 = &off_4EA300;
  while ( v2 > 0 )
  {
    while ( 1 )
    {
      v4 = v2 >> 1;
      v5 = (const char **)&v3[5 * (v2 >> 1)];
      if ( strcmp(*v5, i) < 0 )
        break;
      v2 >>= 1;
      if ( v4 <= 0 )
        goto LABEL_7;
    }
    v3 = (char **)(v5 + 5);
    v2 = v2 - 1 - v4;
  }
LABEL_7:
  if ( v3 == (char **)&unk_4EA580 )
    return nullptr;
  if ( strcmp(*v3, i) )
    return nullptr;
  return v3;
}

