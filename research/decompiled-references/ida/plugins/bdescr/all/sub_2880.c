__int64 __fastcall sub_2880(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_6AD8;
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  v1 = a1 + 19;
  *a1 = &unk_6D00;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return qfree();
}

