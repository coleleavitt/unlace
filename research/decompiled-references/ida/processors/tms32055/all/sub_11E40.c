__int64 __fastcall sub_11E40(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r13
  __int64 sreg; // rax
  __int64 v6; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_WORD *)(a2 + 8) == 137 )
  {
    v3 = (unsigned __int16)v3;
    sreg = get_sreg();
    v2 = sreg;
    if ( sreg == -1 )
      return -1;
  }
  if ( *(_WORD *)(a2 + 10) != 136 )
    return 2 * (v3 | (v2 << 16) & 0x7F0000);
  v6 = get_sreg();
  if ( v6 != -1 )
  {
    v3 = v6 + (unsigned __int16)v3;
    return 2 * (v3 | (v2 << 16) & 0x7F0000);
  }
  return -1;
}

