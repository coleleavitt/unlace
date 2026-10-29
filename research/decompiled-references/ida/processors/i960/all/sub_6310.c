__int64 __fastcall sub_6310(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v6; // r12d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_BYTE *)(a1 + 2760) = 1;
    goto LABEL_4;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
  *(_BYTE *)(a1 + 2760) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
  *(_BYTE *)(a1 + 2760) &= 1u;
  if ( (v6 & 0x100) != 0 && !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 40, 1);
  if ( (v6 & 0x200) != 0 && !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 80, 1);
  if ( (v6 & 0x400) != 0 && !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 120, 1);
  if ( (v6 & 4) != 0 && !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 40, 0);
  if ( (v6 & 8) != 0 && !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 80, 0);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_4:
    if ( (unsigned __int8)segtype() != 1 )
      goto LABEL_5;
LABEL_30:
    *(_BYTE *)(a1 + 2760) = 0;
LABEL_6:
    if ( *(_WORD *)(a2 + 24) != 67 )
      return 1;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)is_forced_operand() )
    sub_6100(a1, a2, a2 + 120, 0);
  if ( (unsigned __int8)segtype() == 1 )
    goto LABEL_30;
LABEL_5:
  if ( !*(_BYTE *)(a1 + 2760) )
    goto LABEL_6;
  add_cref();
  if ( *(_WORD *)(a2 + 24) != 67 )
    return 1;
LABEL_9:
  if ( *(_BYTE *)(a2 + 41) == 5 && (get_flags_ex() & 0xF00000) == 0 && (unsigned __int8)is_mapped() )
  {
    get_default_reftype();
    op_offset();
  }
  return 1;
}

