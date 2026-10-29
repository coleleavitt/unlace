__int64 __fastcall sub_D7990(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  qfree();
  result = qfree();
  if ( a1[14] )
  {
    a1[15] = 0;
    result = qfree();
  }
  if ( a1[11] )
  {
    a1[12] = 0;
    result = qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

