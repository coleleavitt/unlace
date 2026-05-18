__int64 __fastcall sub_D50B0(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(unsigned __int8 *)(a1 + 28) == a2 )
    return 0;
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    return 0;
  }
  else
  {
    if ( off_241330(*(const char **)(a1 + 40)) >= 0 )
    {
      *(_BYTE *)(a1 + 28) = 0;
      return 0;
    }
    v3 = *__errno_location();
    if ( v3 == 2 )
      return 0;
    *(_DWORD *)(a1 + 32) = v3;
    return 2058;
  }
}
