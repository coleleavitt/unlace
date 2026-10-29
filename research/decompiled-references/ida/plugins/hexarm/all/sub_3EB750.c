__int64 __fastcall sub_3EB750(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4E4088;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[4];
  *a1 = &off_4D63F8;
  if ( v2 )
  {
    a1[5] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  return j__qfree();
}

