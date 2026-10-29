__int64 __fastcall sub_11CA90(int a1, double a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  if ( a1 > 16 )
  {
    if ( !under_debugger )
      sub_383060(0xC474u, a2);
    BUG();
  }
  LODWORD(result) = a1 - 1;
  do
  {
    do
    {
      v3 = result;
      result = (unsigned int)(result + 1);
    }
    while ( v3 > 0xF );
  }
  while ( ((unsigned int)result & v3) != 0 );
  return result;
}

