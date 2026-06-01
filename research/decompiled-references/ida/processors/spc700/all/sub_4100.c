__int64 __fastcall sub_4100(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  unsigned __int8 byte; // al
  __int64 *v6; // rax
  unsigned __int16 v7; // ax
  int v9; // r12d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 232) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 232) &= 1u;
    if ( (v9 & 0x100) != 0 )
      sub_3EA0(a1, a2, a2 + 40, 1);
    if ( (v9 & 0x200) != 0 )
      sub_3EA0(a1, a2, a2 + 80, 1);
    if ( (v9 & 4) != 0 )
      sub_3EA0(a1, a2, a2 + 40, 0);
    if ( (v9 & 8) != 0 )
      sub_3EA0(a1, a2, a2 + 80, 0);
    if ( (v9 & 0x4000) != 0 )
      remember_problem();
  }
  else
  {
    *(_BYTE *)(a1 + 232) = 1;
  }
  byte = get_byte();
  v6 = sub_38C0(byte);
  if ( *(_DWORD *)v6 == 64 && *((_DWORD *)v6 + 1) == 3 )
    remember_problem();
  if ( *(_BYTE *)(a1 + 232) )
    add_cref();
  v7 = *(_WORD *)(a2 + 24);
  if ( v7 == 64 )
    goto LABEL_23;
  if ( v7 <= 0x40u )
  {
    if ( v7 != 31 )
    {
      if ( v7 == 42 )
        split_sreg_range();
      return 1;
    }
LABEL_23:
    if ( *(_QWORD *)(a2 + 64) )
    {
      get_sreg();
      split_sreg_range();
    }
    return 1;
  }
  if ( v7 != 101 )
    return 1;
  split_sreg_range();
  return 1;
}

