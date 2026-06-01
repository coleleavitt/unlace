void __fastcall sub_8970(_QWORD *a1)
{
  *a1 = off_14C60;
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
  operator delete(a1, 0x398u);
}
