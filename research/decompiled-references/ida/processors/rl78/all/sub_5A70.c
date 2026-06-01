__int64 __fastcall sub_5A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 sreg; // rdx
  __int64 v6; // rax

  if ( (*(_BYTE *)(a3 + 32) & 8) == 0 )
    return *(_QWORD *)(a3 + 16);
  sreg = get_sreg();
  v6 = ((_DWORD)sreg << 16) & 0xFF0000;
  if ( sreg == -1 )
    v6 = 983040;
  return *(_QWORD *)(a3 + 16) | v6;
}

