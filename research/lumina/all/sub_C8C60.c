__int64 __fastcall sub_C8C60(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 42) )
  {
    if ( *(_BYTE *)(a1 + 43) )
      return result;
    return sub_C8B90(a1);
  }
  result = sub_C8A60((__int64 *)a1);
  if ( !*(_BYTE *)(a1 + 43) )
    return sub_C8B90(a1);
  return result;
}
