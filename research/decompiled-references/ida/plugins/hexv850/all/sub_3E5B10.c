char __fastcall sub_3E5B10(__int64 a1, int a2, double a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char result; // al

  if ( *(_DWORD *)(a1 + 488) <= a2 )
    return 1;
  if ( a2 < *(_DWORD *)(a1 + 352) )
    return 0;
  v3 = *(_DWORD *)(a1 + 80);
  if ( a2 > v3 + *(_DWORD *)(a1 + 476) - 1 )
    return 0;
  v4 = **(_DWORD **)(a1 + 536);
  if ( a2 >= v4 && a2 < v3 + v4 )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 55 )
      sub_3E4090(a3);
    return (unsigned int)sub_CB3B0() != 1;
  }
  v5 = **(_DWORD **)(a1 + 544);
  if ( a2 >= v5 && a2 < v3 + v5 )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 55 )
      sub_3E40B0(a3);
    return (unsigned int)sub_CB3B0() != 1;
  }
  v6 = **(_DWORD **)(a1 + 552);
  if ( a2 >= v6 && a2 < v3 + v6 )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 55 )
      sub_3E40D0(a3);
    return (unsigned int)sub_CB3B0() != 1;
  }
  v7 = *(_DWORD *)(a1 + 60);
  result = 1;
  if ( a2 >= v7 )
    return a2 >= v7 + v3;
  return result;
}

