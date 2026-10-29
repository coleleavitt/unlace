void __fastcall sub_61740(_QWORD *a1)
{
  *a1 = off_4AF5D8;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4AF4F8;
  qfree();
  operator delete(a1, 0x60u);
}

