void __fastcall sub_37EF80(_QWORD *a1)
{
  *a1 = &off_4BA528;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

