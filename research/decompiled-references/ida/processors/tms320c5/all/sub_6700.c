__int64 __fastcall sub_6700(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int16 v6; // ax
  int v8; // r12d

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 )
  {
    *(_BYTE *)(a1 + 132) = 1;
LABEL_3:
    if ( (unsigned __int8)sub_65E0(a1, a2) )
      add_cref();
    goto LABEL_5;
  }
  if ( v4 < *(_DWORD *)(v3 + 108) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 132) = ~*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 132) &= 1u;
    if ( (v8 & 0x100) != 0 )
      sub_6130(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( (v8 & 0x200) != 0 )
      sub_6130(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( (v8 & 0x4000) != 0 )
      remember_problem();
    if ( (v8 & 4) != 0 )
      sub_6130(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( (v8 & 8) != 0 )
      sub_6130(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
  }
  else
  {
    *(_BYTE *)(a1 + 132) = 1;
  }
  if ( *(_BYTE *)(a1 + 132) )
    goto LABEL_3;
LABEL_5:
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 == 54 || (unsigned __int16)(v6 - 191) <= 1u )
  {
    get_item_end();
    split_sreg_range();
  }
  return 1;
}

