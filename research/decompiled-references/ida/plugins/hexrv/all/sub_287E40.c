__int64 __fastcall sub_287E40(__int64 *a1)
{
  if ( *(_DWORD *)(a1[3] + 8) != 52 )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  sub_250C50(a1, a1[3]);
  sub_250C50(a1, a1[3]);
  return 1;
}

