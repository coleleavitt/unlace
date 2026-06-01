void __fastcall sub_1CADC0(_QWORD *a1)
{
  *a1 = &off_4AB198;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

