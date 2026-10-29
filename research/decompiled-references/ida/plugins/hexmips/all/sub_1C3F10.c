void __fastcall sub_1C3F10(_QWORD *a1)
{
  *a1 = off_4BF038;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x38u);
}

