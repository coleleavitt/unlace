__int64 __fastcall sub_201B30(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4D9568;
  if ( a1[20] )
  {
    a1[21] = 0;
    qfree();
  }
  qfree();
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  result = qfree();
  if ( a1[10] )
  {
    a1[11] = 0;
    return qfree();
  }
  return result;
}

