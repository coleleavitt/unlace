__int64 __fastcall sub_29610(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 8;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v2 = *(_BYTE *)(a1 + 17);
    result = 4;
    if ( v2 != 1 )
    {
      result = 2;
      if ( v2 != 2 )
        return v2 == 3;
    }
  }
  return result;
}
