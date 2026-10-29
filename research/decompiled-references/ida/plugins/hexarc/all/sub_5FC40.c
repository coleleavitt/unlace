void __fastcall sub_5FC40(_QWORD *a1)
{
  *a1 = off_4A8438;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4A8358;
  qfree();
  operator delete(a1, 0x60u);
}

