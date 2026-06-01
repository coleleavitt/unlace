void __fastcall sub_B1D0(_QWORD *a1)
{
  *a1 = off_1CB88;
  if ( a1[108] )
  {
    a1[109] = 0;
    qfree();
  }
  if ( a1[105] )
  {
    a1[106] = 0;
    qfree();
  }
  if ( a1[102] )
  {
    a1[103] = 0;
    qfree();
  }
  operator delete(a1, 0x390u);
}

