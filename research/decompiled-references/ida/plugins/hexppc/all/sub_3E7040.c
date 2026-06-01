__int64 __fastcall sub_3E7040(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // ecx

  if ( *(_BYTE *)a4 != 1 )
    return 0;
  v5 = *(_DWORD *)(a1 + 468);
  v6 = *(_DWORD *)(a4 + 8);
  if ( v5 > v6 || v6 >= v5 + 4 )
    return 0;
  sub_60440(a2, *(_DWORD *)(a1 + 472), 32);
  return 0;
}

