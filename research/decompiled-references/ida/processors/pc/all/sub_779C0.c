__int64 __fastcall sub_779C0(__int64 a1)
{
  unsigned int v1; // r12d
  const char **v2; // rbx

  v1 = cleanup_name();
  if ( (_BYTE)v1 )
  {
    v2 = (const char **)&off_16CD40;
    while ( !(unsigned int)sub_690D0(a1, 0, *v2, 0, 0) )
    {
      if ( ++v2 == (const char **)algn_16CD90 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
