__int64 __fastcall sub_EDB90(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4C9FE0;
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v2 = a1[5];
  *a1 = off_4C8E58;
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

