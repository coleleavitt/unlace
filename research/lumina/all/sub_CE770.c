__int64 __fastcall sub_CE770(__int64 a1)
{
  unsigned int v1; // r11d
  int v3; // eax
  __int64 v4; // r9
  int v5; // r10d

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 4) & 0x4000400) != 0 )
    return v1;
  v3 = sub_CE6F0(*(_QWORD *)(a1 + 8));
  if ( !v3 )
    return v1;
  *(_BYTE *)v4 = -86;
  *(_DWORD *)(v4 + 4) = v3 | v5;
  return 1;
}
