void __fastcall sub_31870(_QWORD *a1)
{
  *a1 = &off_7D6B8;
  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x78u);
}

