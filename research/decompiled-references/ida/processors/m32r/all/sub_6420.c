__int64 __fastcall sub_6420(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  __int64 v6; // rax
  int v7; // r15d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v6 = *(_QWORD *)(v2 + 112) + 16LL * (v3 - v4);
    v7 = *(_DWORD *)(v6 + 8);
    *(_BYTE *)(a1 + 240) = ~*(_BYTE *)(v6 + 8);
    *(_BYTE *)(a1 + 240) &= 1u;
    if ( (v7 & 0x100) != 0 )
      sub_6130(a1, a2, a2 + 40, 1);
    if ( (v7 & 0x200) != 0 )
      sub_6130(a1, a2, a2 + 80, 1);
    if ( (v7 & 0x400) != 0 )
      sub_6130(a1, a2, a2 + 120, 1);
    if ( (v7 & 0x4000) != 0 )
      remember_problem();
    if ( (v7 & 4) != 0 )
      sub_6130(a1, a2, a2 + 40, 0);
    if ( (v7 & 8) != 0 )
      sub_6130(a1, a2, a2 + 80, 0);
    if ( (v7 & 0x10) != 0 )
    {
      sub_6130(a1, a2, a2 + 120, 0);
      if ( !*(_BYTE *)(a1 + 240) )
        return 1;
LABEL_20:
      add_cref();
      return 1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 240) = 1;
  }
  if ( *(_BYTE *)(a1 + 240) )
    goto LABEL_20;
  return 1;
}

