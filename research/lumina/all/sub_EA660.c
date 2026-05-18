__int64 __fastcall sub_EA660(__int64 a1)
{
  char v1; // al

  if ( !a1 )
    return 7;
  v1 = *(_BYTE *)(a1 + 113);
  if ( v1 == 118 || v1 == -70 || v1 == 109 )
  {
    if ( !*(_BYTE *)(a1 + 103) )
      return (unsigned int)(*(_DWORD *)(a1 + 88) & *(_DWORD *)(a1 + 80));
    return 7;
  }
  if ( (unsigned int)sub_EA5B0() )
  {
    if ( *(_BYTE *)(a1 + 103) )
      return 7;
    else
      return (unsigned int)(*(_DWORD *)(a1 + 88) & *(_DWORD *)(a1 + 80));
  }
  else
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      172633,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
}
