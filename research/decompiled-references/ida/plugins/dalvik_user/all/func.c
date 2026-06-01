void __fastcall func(_QWORD *a1)
{
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
}

