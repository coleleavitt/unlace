__int64 __fastcall sub_F3C70(__int64 a1, __int64 a2, double a3)
{
  if ( (*(_BYTE *)(a2 + 5) & 2) != 0 )
    return sub_F3B40(a1, *(unsigned __int8 **)(a2 + 24), *(unsigned __int8 **)(a2 + 16), a3);
  else
    return sub_F3B40(a1, *(unsigned __int8 **)(a2 + 16), *(unsigned __int8 **)(a2 + 24), a3);
}
