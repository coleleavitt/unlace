char __fastcall sub_11570(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // cx
  char result; // al

  v3 = *(_WORD *)(a2 + 24);
  result = v3 == 28 || (unsigned __int16)(v3 - 112) <= 1u || (unsigned __int16)(v3 - 81) <= 1u;
  if ( !result )
  {
    if ( v3 == 78 )
    {
      if ( *(_BYTE *)(a2 + 121) != 1 || *(_WORD *)(a2 + 126) != 31 )
        return sub_22000(a1, a2);
    }
    else
    {
      if ( v3 != 44 )
      {
        result = (a3 ^ 1) & (v3 == 77);
        if ( result )
          return result;
        return sub_22000(a1, a2);
      }
      if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 31 )
        return sub_22000(a1, a2);
    }
    return 1;
  }
  return result;
}
