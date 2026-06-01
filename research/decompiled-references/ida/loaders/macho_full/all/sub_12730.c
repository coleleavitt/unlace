void __fastcall sub_12730(_QWORD *a1)
{
  *a1 = off_63F60;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

