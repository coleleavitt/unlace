__int64 __fastcall sub_7E60(__int64 a1, unsigned int a2, char a3, double a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  const char *v6; // rdx

  v4 = a2;
  if ( a3 == 7 )
  {
    if ( (a2 & 1) != 0 )
      v4 = a2 & 0xFFFFFFDE | 0x20;
    return v4 + 64;
  }
  else
  {
    if ( a3 != 8 )
    {
      if ( a3 != 2 )
      {
        v5 = *(unsigned __int16 *)(a1 + 24);
        v6 = nullptr;
        if ( (unsigned __int16)v5 <= 0xE8u )
          v6 = (const char *)*(&off_16BA0 + 2 * v5);
        sub_7D90((__int64)"%a(%s): internal error in %s", a4, *(const char **)(a1 + 16), v6);
      }
      return v4 + 64;
    }
    if ( (a2 & 1) != 0 )
      v4 = a2 & 0xFFFFFFDE | 0x20;
    if ( (v4 & 2) == 0 )
      return v4 + 64;
    *(_WORD *)(a1 + 24) = 0;
    return v4 + 64;
  }
}
