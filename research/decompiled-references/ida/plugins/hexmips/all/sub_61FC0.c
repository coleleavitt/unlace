void __fastcall sub_61FC0(_QWORD *a1)
{
  *a1 = off_4BC378;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4BC298;
  qfree();
  operator delete(a1, 0x60u);
}

