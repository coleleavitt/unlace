char *__fastcall sub_575D0(_DWORD *a1)
{
  _DWORD *v2; // rdi
  int v3; // r12d
  int v4; // r13d
  char *v5; // rbx
  const char *v6; // rax
  const char *v7; // r8

  v2 = a1 + 2;
  v3 = v2[66];
  v4 = v2[67];
  v5 = (char *)&unk_CB460 + 1024 * (__int64)dword_CC860;
  dword_CC860 = (dword_CC860 + 1) % 5;
  v6 = (const char *)sub_81C40(v2);
  v7 = "simple";
  if ( a1[68] )
  {
    v7 = "cmplex";
    if ( v3 != 2 )
    {
      v7 = "subrtn";
      if ( v3 != 3 )
      {
        v7 = "refrnc";
        if ( v3 != 1 )
          v7 = "UNKNWN";
      }
    }
  }
  qsnprintf(v5, 1024, "%p: %s node; DIE=%s; ordinal=#%u", a1, v7, v6, v4);
  return v5;
}

