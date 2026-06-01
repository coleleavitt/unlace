__int64 __fastcall sub_362E70(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4B2A88;
  if ( a1[8] )
  {
    a1[9] = 0;
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

