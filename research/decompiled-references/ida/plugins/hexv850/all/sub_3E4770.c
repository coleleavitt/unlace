__int64 __fastcall sub_3E4770(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4BD320;
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[4];
  *a1 = &off_4AF718;
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

