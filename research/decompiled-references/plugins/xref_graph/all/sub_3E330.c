double __fastcall sub_3E330(__int64 a1)
{
  double result; // xmm0_8

  if ( *(_DWORD *)a1 == 1 )
  {
    result = 12.0;
  }
  else
  {
    result = 11.0;
    if ( *(_DWORD *)a1 != 2 )
      result = 1.0;
  }
  if ( *(_BYTE *)(a1 + 8) )
    return result + 5.0;
  return result;
}
