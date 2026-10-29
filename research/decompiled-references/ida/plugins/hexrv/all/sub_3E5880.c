__int64 __fastcall sub_3E5880(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4BC370;
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[4];
  *a1 = &off_4AE7B8;
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

