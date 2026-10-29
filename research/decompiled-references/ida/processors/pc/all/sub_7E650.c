__int64 __fastcall sub_7E650(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 24) == 42 )
  {
    result = 5;
    if ( *(_BYTE *)(a2 + 5) )
      return 0;
  }
  return result;
}
