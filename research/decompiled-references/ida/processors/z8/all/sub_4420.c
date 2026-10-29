__int64 __fastcall sub_4420(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  __int16 v5; // ax
  int v7; // r12d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 )
  {
    *(_BYTE *)(a1 + 232) = 1;
    goto LABEL_3;
  }
  if ( v3 < *(_DWORD *)(v2 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 232) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 232) &= 1u;
    if ( (v7 & 0x100) != 0 )
      sub_4140(a1, a2, (unsigned __int8 *)(a2 + 40));
    if ( (v7 & 0x200) != 0 )
      sub_4140(a1, a2, (unsigned __int8 *)(a2 + 80));
    if ( (v7 & 0x4000) != 0 )
      remember_problem();
    if ( (v7 & 4) != 0 )
      sub_4140(a1, a2, (unsigned __int8 *)(a2 + 40));
    if ( (v7 & 8) != 0 )
      sub_4140(a1, a2, (unsigned __int8 *)(a2 + 80));
  }
  else
  {
    *(_BYTE *)(a1 + 232) = 1;
  }
  if ( *(_BYTE *)(a1 + 232) )
  {
LABEL_3:
    add_cref();
    v5 = *(_WORD *)(a2 + 24);
    if ( v5 == 41 )
      goto LABEL_10;
    goto LABEL_4;
  }
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 41 )
    goto LABEL_10;
LABEL_4:
  if ( v5 != 30 || *(_BYTE *)(a2 + 41) != 2 || *(_QWORD *)(a2 + 56) != 253 )
    return 1;
LABEL_10:
  split_sreg_range();
  return 1;
}

