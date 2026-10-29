__int64 __fastcall sub_12E70(__int64 a1, const char *a2, const char *a3)
{
  if ( (dword_24468 & 2) == 0 )
    return 0;
  if ( !*(_QWORD *)(a1 + 248) )
  {
    if ( strcmp(src, a2) )
      goto LABEL_4;
LABEL_8:
    make_script_ns();
    a3 = src;
    if ( src )
      return sub_12E10(a1, a3);
    return 0;
  }
  if ( !strcmp(*(const char **)(a1 + 240), a2) )
    goto LABEL_8;
LABEL_4:
  if ( !a3 )
    return 0;
  return sub_12E10(a1, a3);
}

