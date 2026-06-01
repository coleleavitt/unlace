__int64 __fastcall sub_3E2AD0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  size_t v3; // r15
  int v4; // r12d
  int v5; // ebx
  const char **v6; // rbp
  int v8; // eax

  v2 = strchr((const char *)a2, 94);
  if ( v2 )
  {
    v3 = (size_t)&v2[-a2];
    v4 = strtol(v2 + 1, nullptr, 10);
    if ( v3 - 2 > 1 )
      goto LABEL_3;
  }
  else
  {
    v4 = 0;
    v3 = strlen((const char *)a2);
    if ( v3 - 2 > 1 )
      goto LABEL_3;
  }
  if ( *(_BYTE *)a2 == 114 && (unsigned __int8)(*(_BYTE *)(a2 + 1) - 48) <= 9u )
  {
    v8 = *(char *)(a2 + 1) - 48;
    if ( v3 == 3 )
      v8 = *(char *)(a2 + 2) + 10 * v8 - 48;
    return (unsigned int)(v4 + 4 * v8 + 8);
  }
LABEL_3:
  v5 = 0;
  v6 = (const char **)&off_4B6260;
  do
  {
    if ( !strncmp((const char *)a2, *v6, v3) )
      return (unsigned int)(v4 + LODWORD((&off_4B6260)[2 * v5 + 1]));
    ++v5;
    v6 += 2;
  }
  while ( v5 != 22 );
  return 0xFFFFFFFFLL;
}

