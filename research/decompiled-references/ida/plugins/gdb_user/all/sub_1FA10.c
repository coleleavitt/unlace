__int64 __fastcall sub_1FA10(__int64 a1, __int64 a2, const char *a3, const char *a4, int a5, const char *a6)
{
  __int64 v10; // r15

  if ( a2 )
  {
    v10 = 0;
    while ( strcasecmp(*(const char **)a1, a4) )
    {
      ++v10;
      a1 += 32;
      if ( a2 == v10 )
        goto LABEL_6;
    }
    sub_DBE0((__int64)"%s.cfg: guessing that register \"%s\" is %s register\n", a3, a4, a6);
    *(_DWORD *)(a1 + 8) |= a5;
    return (unsigned int)v10;
  }
  else
  {
LABEL_6:
    sub_DBE0((__int64)"%s.cfg: %s register not found\n", a3, a6);
    return 0xFFFFFFFFLL;
  }
}

