__int64 __fastcall sub_E0AA0(__int64 a1, int a2)
{
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    if ( *(unsigned __int8 *)(a1 + 22) != a2 )
      return sub_E03B0(a1, a2);
  }
  else
  {
    *(_BYTE *)(a1 + 22) = a2;
  }
  return 0;
}
