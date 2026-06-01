__int64 __fastcall sub_10250(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 24) == 65 )
  {
    result = 100;
    if ( (*(_WORD *)(a1 + 46) & 0xFFDF) != 6 && (*(_WORD *)(a1 + 46) & 0xFFDF) != 3 )
      return 0;
  }
  return result;
}

