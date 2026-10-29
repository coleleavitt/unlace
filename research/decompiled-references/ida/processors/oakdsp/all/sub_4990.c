__int64 __fastcall sub_4990(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax

  result = 0;
  if ( a3 != 7 )
  {
    *(_WORD *)(a2 + 24) = (a3 & (a4 == 0 ? 15 : 7)) + 18;
    return 1;
  }
  return result;
}

