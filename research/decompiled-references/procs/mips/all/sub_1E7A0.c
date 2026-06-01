bool __fastcall sub_1E7A0(__int64 a1, __int64 a2)
{
  bool result; // al
  unsigned __int16 v3; // ax

  result = 0;
  if ( *(_DWORD *)(a1 + 260) != 2 )
  {
    v3 = *(_WORD *)(a2 + 24);
    if ( v3 == 202 )
    {
      return (*(_BYTE *)(a2 + 33) & 4) == 0;
    }
    else if ( v3 <= 0xCAu )
    {
      return (unsigned __int16)(v3 - 115) <= 1u;
    }
    else
    {
      return v3 == 518;
    }
  }
  return result;
}
