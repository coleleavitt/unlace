__int64 __fastcall sub_1E4860(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  result = qfree();
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

