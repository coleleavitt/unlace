__int64 __fastcall sub_3EDD30(__int64 a1, int a2, __int32 a3, double a4)
{
  __int64 v5; // rcx

  v5 = a1;
  if ( (unsigned int)a3 > 7 )
  {
    if ( (*(_BYTE *)(a1 + 40LL * a3 + 65) & 0xF7) == 1 )
      return sub_3ED570(v5, a3, 0, a4);
    return 0xFFFFFFFFLL;
  }
  if ( (dword_411780[a3] & a2) != 0 || (*(_BYTE *)(a1 + 40LL * a3 + 65) & 0xF7) == 1 )
    return sub_3ED570(v5, a3, 0, a4);
  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  if ( sub_3EA630(*(unsigned __int16 *)(a1 + 48)) )
    return sub_3ED570(v5, a3, 0, a4);
  return 0xFFFFFFFFLL;
}

