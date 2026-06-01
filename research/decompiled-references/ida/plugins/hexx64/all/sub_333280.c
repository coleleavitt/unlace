const char **__fastcall sub_333280(const char *a1, double a2)
{
  const char *v2; // rdx

  v2 = a1;
  if ( !a1 )
    return nullptr;
  while ( *v2 == 95 )
    ++v2;
  return sub_3330D0((const char **)&xmmword_4EEC80, (const char **)&dword_4EF950, v2, a2);
}

