__int64 __fastcall sub_31E7F0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4C3AA0;
  qfree();
  qfree();
  v2 = a1[5];
  *a1 = off_4BC478;
  if ( v2 )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return j__qfree();
}

