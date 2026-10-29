__int64 __fastcall sub_4F60(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  char v5; // al
  __int16 v6; // dx
  __int16 v7; // ax

  if ( !a4 || (result = 0, a3 <= 3) )
  {
    v5 = 2 * a3;
    v6 = a3 & 7;
    v7 = v5 & 6;
    if ( a4 )
      v6 = v7;
    *(_WORD *)(a2 + 24) = v6 + 48;
    return 1;
  }
  return result;
}

