__int64 __fastcall sub_3E2220(__int64 a1, int a2)
{
  char **v2; // rax
  char *v3; // rdx

  v2 = &off_4B6260;
  do
  {
    if ( a2 == *((_DWORD *)v2 + 2) )
      return (unsigned int)*((char *)v2 + 12);
    v3 = v2[2];
    v2 += 2;
  }
  while ( *v3 );
  return (a2 & 3) == 0 ? 4 : 1;
}

