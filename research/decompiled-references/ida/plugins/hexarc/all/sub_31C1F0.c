__int64 __fastcall sub_31C1F0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4AFB88;
  qfree();
  qfree();
  v2 = a1[5];
  *a1 = off_4A8538;
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

