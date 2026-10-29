__int64 __fastcall sub_3EE0(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 1);
  result = 161;
  if ( v1 != 4 )
  {
    result = 681;
    if ( v1 != 7 && v1 != 2 )
      return 0;
  }
  return result;
}

