__int64 __fastcall sub_D990(__int64 a1, char **a2, __int64 *a3)
{
  char *v5; // rdx
  char v6; // si
  char v7; // dl
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // ecx

  v5 = *a2;
  v6 = **a2;
  if ( ((v6 - 43) & 0xFD) != 0 )
    return 0;
  v7 = v5[1];
  if ( v7 == 115 )
  {
    v18 = *(_DWORD *)(a1 + 8);
    v19 = v18 | 2;
    v20 = v18 & 0xFFFFFFFD;
    if ( v6 != 43 )
      v19 = v20;
    *(_DWORD *)(a1 + 8) = v19;
    return 1;
  }
  if ( v7 > 115 )
  {
    if ( v7 == 118 )
    {
      v11 = *(_DWORD *)(a1 + 8);
      v12 = v11 | 1;
      v13 = v11 & 0xFFFFFFFE;
      if ( v6 != 43 )
        v12 = v13;
      *(_DWORD *)(a1 + 8) = v12;
      return 1;
    }
  }
  else
  {
    if ( v7 == 104 )
    {
      v15 = *(_DWORD *)(a1 + 8);
      v16 = v15 | 4;
      v17 = v15 & 0xFFFFFFFB;
      if ( v6 != 43 )
        v16 = v17;
      *(_DWORD *)(a1 + 8) = v16;
      return 1;
    }
    if ( v7 == 108 )
    {
      v8 = *(_DWORD *)(a1 + 8);
      v9 = v8 | 8;
      v10 = v8 & 0xFFFFFFF7;
      if ( v6 != 43 )
        v9 = v10;
      *(_DWORD *)(a1 + 8) = v9;
      return 1;
    }
  }
  sub_D8D0(a3);
  return 1;
}
