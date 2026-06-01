__int64 __fastcall sub_123C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
  {
    result = 192;
    if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
      return 196;
  }
  else
  {
    result = 160;
    if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
      return 164;
  }
  return result;
}

