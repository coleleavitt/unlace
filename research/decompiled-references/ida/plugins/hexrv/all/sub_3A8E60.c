__int64 __fastcall sub_3A8E60(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 10;
  *(v2 - 10) = (__int64)off_4B9D08;
  sub_38BED0(v2);
  v3 = a1[5];
  *a1 = off_4AE778;
  if ( v3 )
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

