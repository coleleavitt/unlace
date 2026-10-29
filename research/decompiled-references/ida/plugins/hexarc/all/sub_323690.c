__int64 __fastcall sub_323690(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( (unsigned int)(a2 - 1) > 0xF )
  {
    if ( !under_debugger )
      sub_37B760(50629);
    BUG();
  }
  result = a1;
  if ( a2 <= 7 )
  {
    v4 = 1LL << (8 * (unsigned __int8)a2 - 1);
    if ( a3 && (v4 & a1) != 0 )
      return (-2 * v4) | a1;
    else
      return (2 * v4 - 1) & a1;
  }
  return result;
}

