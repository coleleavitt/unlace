void __fastcall sub_65BC0(_QWORD *a1)
{
  *a1 = off_4D62B8;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4D61D8;
  qfree();
  operator delete(a1, 0x60u);
}

