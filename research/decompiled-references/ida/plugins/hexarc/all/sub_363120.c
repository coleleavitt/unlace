__int64 __fastcall sub_363120(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4B2A48;
  a1[8] = off_4A8538;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
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

