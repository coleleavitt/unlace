__int64 __fastcall sub_9710(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 sreg; // rax
  __int64 v9; // r8

  if ( *(_QWORD *)(a4 + 8) == -1 )
    return 0;
  if ( (*(_BYTE *)(a4 + 25) & 1) != 0 )
    return 0;
  sreg = get_sreg();
  if ( sreg == -1 )
    return 0;
  v9 = (sreg << 14) + (a5 & 0x3FFF) + *(_QWORD *)(a4 + 8) - *(_QWORD *)(a4 + 16);
  if ( *(_QWORD *)a4 != v9 && *(_QWORD *)a4 != -1 )
    return 0;
  *a1 = v9;
  *a2 = *(_QWORD *)(a4 + 8);
  return 1;
}

