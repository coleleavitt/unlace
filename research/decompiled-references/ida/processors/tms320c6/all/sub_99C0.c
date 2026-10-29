__int64 __fastcall sub_99C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned int dword; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx

  v2 = ((*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFE0LL) + 28) ^ *(_QWORD *)(a2 + 16);
  dword = get_dword();
  if ( v2 > 0x1F )
    return sub_94F0(a1, a2);
  v5 = dword;
  if ( (dword & 0xF0000000) != 0xE0000000 )
    return sub_94F0(a1, a2);
  v6 = (*(_QWORD *)(a2 + 16) >> 2) & 7LL;
  if ( v6 != 7 )
  {
    if ( _bittest((const int *)&v5, v6 + 21) )
      return sub_9880(a1, a2, dword);
    return sub_94F0(a1, a2);
  }
  *(_DWORD *)(a2 + 24) = 262454;
  *(_DWORD *)(a2 + 28) = dword;
  return 4;
}

