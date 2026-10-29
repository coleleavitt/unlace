__int64 __fastcall sub_3E7750(__int64 a1, int a2, int a3)
{
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v5 = *(_DWORD *)(a1 + 352);
  v6 = *(_DWORD *)(a1 + 412);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( a2 >= v6 && a2 <= v5 )
    {
      v7 = *(_DWORD *)(a1 + 4408);
      if ( ((a2 - v6) & (v7 - 1)) == 0 && a3 <= v7 )
        return (unsigned int)(31 - (a2 - v6) / v7);
      return 0xFFFFFFFFLL;
    }
    v11 = *(_DWORD *)(a1 + 448);
    if ( a2 <= *(_DWORD *)(a1 + 416) && a2 >= v11 )
    {
      if ( (((_BYTE)a2 - (_BYTE)v11) & 7) == 0 && a3 <= 8 )
        return (unsigned int)(66 - (a2 - v11) / 8);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( a2 >= v5 && a2 <= v6 )
    {
      v9 = *(_DWORD *)(a1 + 4408);
      v10 = a2 - v5;
      if ( (v10 & (v9 - 1)) == 0 && a3 <= v9 )
        return (unsigned int)(v10 / v9);
      return 0xFFFFFFFFLL;
    }
    v12 = *(_DWORD *)(a1 + 416);
    if ( a2 <= *(_DWORD *)(a1 + 448) && a2 >= v12 )
    {
      if ( (((_BYTE)a2 - (_BYTE)v12) & 7) == 0 && a3 <= 8 )
        return (unsigned int)((a2 - v12) / 8 + 35);
      return 0xFFFFFFFFLL;
    }
  }
  if ( *(_DWORD *)(a1 + 452) == a2 )
    return 280;
  if ( *(_DWORD *)(a1 + 468) != a2 )
  {
    v13 = *(_DWORD *)(a1 + 472);
    if ( v13 <= a2 && *(_DWORD *)(a1 + 476) >= a2 )
      return (unsigned int)(a2 + 282 - v13);
    return 0xFFFFFFFFLL;
  }
  return 83;
}

