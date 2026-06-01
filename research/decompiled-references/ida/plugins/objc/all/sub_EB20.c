unsigned __int64 __fastcall sub_EB20(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 12) & 8) == 0 )
    return a2;
  sub_E990();
  return a2 & 0xFFFFFFFFFFFFFFFELL;
}
