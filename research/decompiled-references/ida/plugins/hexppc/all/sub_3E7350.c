__int64 __fastcall sub_3E7350(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4D6BC8;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  v2 = a1[4];
  *a1 = &off_4C8E98;
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

