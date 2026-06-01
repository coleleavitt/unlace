__int64 __fastcall sub_296470(_DWORD *a1, __int64 a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v6; // rdi

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 != 81 )
  {
    v4 = a1[16];
    if ( v4 == 79 )
    {
      if ( (unsigned int)(v3 - 74) <= 2 )
      {
        a1[2] |= 1u;
        return 0;
      }
    }
    else if ( v4 == 78 && (unsigned int)(v3 - 74) <= 3 )
    {
      a1[2] |= 1u;
      return 0;
    }
    return 0;
  }
  v6 = *(_DWORD **)(a2 + 24);
  if ( *v6 != a1[17] )
    return 0;
  if ( v6 )
    j__qfree((__int64)v6);
  *(_DWORD *)(a2 + 8) = a1[16];
  return 0;
}

