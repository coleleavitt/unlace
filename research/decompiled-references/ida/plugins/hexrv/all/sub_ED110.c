__int64 __fastcall sub_ED110(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4AF900;
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v2 = a1[5];
  *a1 = off_4AE778;
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

