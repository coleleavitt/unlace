__int64 __fastcall sub_71F30(char *s2, __int64 a2)
{
  int v2; // r13d
  const char **v3; // rbp
  unsigned int v4; // ebx

  if ( dbg )
  {
    v2 = *(_DWORD *)(dbg + 64LL);
    if ( v2 <= 0 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v3 = *(const char ***)(dbg + 56LL);
      v4 = 0;
      while ( strcmp(*v3, s2) )
      {
        ++v4;
        v3 += 4;
        if ( v4 == v2 )
          return 0xFFFFFFFFLL;
      }
      return v4;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_71FC0(10330, a2);
  }
}
