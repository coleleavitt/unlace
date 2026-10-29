__int64 __fastcall sub_1DC70(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[7] )
  {
    a1[8] = 0;
    result = qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    result = qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

