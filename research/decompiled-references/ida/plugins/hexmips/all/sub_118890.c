__int64 __fastcall sub_118890(int a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  if ( a1 > 16 )
  {
    if ( !under_debugger )
      sub_37E160(50292);
    BUG();
  }
  LODWORD(result) = a1 - 1;
  do
  {
    do
    {
      v2 = result;
      result = (unsigned int)(result + 1);
    }
    while ( v2 > 0xF );
  }
  while ( ((unsigned int)result & v2) != 0 );
  return result;
}

