void __fastcall sub_61E40(_QWORD *a1)
{
  *a1 = off_4AE678;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4AE598;
  qfree();
  operator delete(a1, 0x60u);
}

