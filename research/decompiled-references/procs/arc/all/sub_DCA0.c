__int64 __fastcall sub_DCA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int dword; // eax

  v2 = *(_DWORD *)(a1 + 5272);
  if ( !v2 )
  {
    if ( (a2 & 3) == 0 )
    {
      dword = get_dword(a2);
      return 4 * (unsigned int)(dword == 0 || dword == 0x7FFFFFFF);
    }
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  if ( (unsigned __int16)get_word(a2) != 30944 )
  {
    if ( (a2 & 3) == 0 && (unsigned __int16)get_word(a2) == 9802 )
      return 4 * (unsigned int)((unsigned __int16)get_word(a2 + 2) == 28672);
    return 0;
  }
  return 2;
}
