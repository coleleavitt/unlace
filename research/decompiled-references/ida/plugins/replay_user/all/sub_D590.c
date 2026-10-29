__int64 __fastcall sub_D590(__int64 a1, __int64 a2, int a3)
{
  bool v3; // zf
  int v4; // eax

  if ( a3 == 1 )
  {
    v3 = *(_BYTE *)(a1 + 1040) == 0;
    *(_BYTE *)(a1 + 1028) = 1;
    v4 = *(_DWORD *)(a1 + 1032);
    if ( v3 && v4 > 0 )
    {
      *(_DWORD *)(a1 + 1032) = v4 - 1;
      return 1;
    }
    if ( v4 >= 0 )
      return 1;
  }
  return 0xFFFFFFFFLL;
}

