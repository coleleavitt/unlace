_BOOL8 __fastcall sub_EF50(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  __int16 v3; // dx
  __int16 v4; // ax

  if ( *(_BYTE *)(a2 + 1) == 4 )
  {
    v4 = *(_WORD *)(a2 + 6);
    if ( v4 == 3 || v4 == 30 )
      return 1;
  }
  result = 0;
  if ( *(_WORD *)a2 == 1280 && *(_BYTE *)(a1 + 81) == 1 )
  {
    v3 = *(_WORD *)(a1 + 24);
    if ( v3 == 37 || v3 == 70 )
    {
      result = 0;
      if ( *(_WORD *)(a1 + 86) == 3 && *(_BYTE *)(a1 + 121) == 1 )
        return *(_WORD *)(a1 + 126) != 3;
    }
  }
  return result;
}
