__int64 __fastcall sub_1FC3B0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B2848;
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

