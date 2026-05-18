__int64 __fastcall sub_C7380(__int64 a1, const char *a2)
{
  const char **v2; // rbp
  __int64 v3; // rbx

  v2 = (const char **)&off_241160;
  v3 = 0;
  do
  {
    if ( !strcmp(a2, *v2) )
      return (__int64)*(&off_241160 + 3 * v3 + 1);
    v3 = (unsigned int)(v3 + 1);
    v2 += 3;
  }
  while ( (_DWORD)v3 != 29 );
  return 0;
}
