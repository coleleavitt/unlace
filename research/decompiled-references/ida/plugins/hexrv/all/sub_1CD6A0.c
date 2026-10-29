void __fastcall sub_1CD6A0(_QWORD *a1)
{
  *a1 = &off_4B13D8;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

