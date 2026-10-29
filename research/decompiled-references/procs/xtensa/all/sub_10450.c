__int64 __fastcall sub_10450(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 1);
  result = 172;
  if ( v1 != 4 )
  {
    result = 12;
    if ( v1 != 5 )
      return 0;
  }
  return result;
}
