char __fastcall sub_2CF00(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 > 0x50u )
    return v2 == 471;
  if ( v2 > 0x16u )
  {
    v3 = 1LL << ((unsigned __int8)v2 - 23);
    if ( (v3 & 0x200000000000105LL) != 0 )
    {
      if ( *(_WORD *)(a2 + 46) == 15
        && (unsigned __int8)netnode_charval() != 3
        && (*(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 14) )
      {
        return sub_2B170(a1, a2);
      }
    }
    else
    {
      if ( (v3 & 0x1800000) != 0 )
        return 1;
      if ( v2 == 41 && (unsigned __int16)(*(_WORD *)(a2 + 46) - 14) > 1u )
        return sub_2B170(a1, a2);
    }
    return 0;
  }
  if ( v2 == 3 )
    return sub_2B170(a1, a2);
  if ( v2 != 4 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v6 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
  if ( v6 != v5 )
  {
    v5 &= v6;
    if ( v6 == -1 )
      v5 = -1;
  }
  return sub_2C710(a1, a2, v5);
}

