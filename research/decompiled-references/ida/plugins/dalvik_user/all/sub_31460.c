void __fastcall sub_31460(_QWORD *a1)
{
  *a1 = &off_7D548;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0xA0u);
}

