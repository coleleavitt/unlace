__int64 __fastcall sub_FE750(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4BDBB0;
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  result = qfree();
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    result = qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

