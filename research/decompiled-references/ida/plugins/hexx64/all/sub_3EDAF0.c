__int64 __fastcall sub_3EDAF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // ecx
  int v7; // edx

  if ( !*(_BYTE *)(a1 + 3800) || *(_BYTE *)a4 != 1 )
    return 0;
  v6 = *(_DWORD *)(a4 + 8);
  v7 = *(_DWORD *)(a1 + 444);
  if ( v6 == v7 || v6 == v7 + 1 )
  {
    sub_63E80(a2, *(_DWORD *)(a1 + 688), 3, a5);
  }
  else if ( v6 == *(_DWORD *)(a1 + 524) )
  {
    sub_63E80(a2, 0, 5, a5);
  }
  return 0;
}

