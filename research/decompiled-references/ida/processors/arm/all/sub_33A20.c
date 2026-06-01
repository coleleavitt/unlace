__int64 __fastcall sub_33A20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  bool i; // al
  __int64 v9; // r13

  if ( *(_BYTE *)(a3 + 32) != 14 || *(_WORD *)(a3 + 24) != 3 )
    return 0;
  v5 = *(unsigned __int16 *)(a3 + 26);
  v6 = a2;
  v7 = a2;
  for ( i = sub_28300(a1, a3, a2, a4, 1); i; i = sub_28300(a1, a3, v7, a4, 1) )
  {
    if ( *(_BYTE *)(a3 + 32) != 14 )
      break;
    if ( *(_WORD *)(a3 + 24) != 3 )
      break;
    if ( (_WORD)v5 != *(_WORD *)(a3 + 26) )
      break;
    v9 = *(_QWORD *)(a3 + 56);
    if ( !(unsigned __int8)is_mapped() || (get_flags_ex(v9, 4) & 0x600) == 0x200 )
      break;
    v7 += v5;
  }
  if ( (int)((v7 - a2) / v5) <= 7 )
    return 0;
  while ( v6 < v7 )
  {
    v6 += v5;
    auto_mark_range();
  }
  return 1;
}
