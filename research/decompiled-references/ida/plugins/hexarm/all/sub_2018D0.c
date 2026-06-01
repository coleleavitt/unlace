void __fastcall sub_2018D0(_QWORD *a1)
{
  *a1 = &off_4D94F0;
  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x78u);
}

