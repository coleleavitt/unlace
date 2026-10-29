void __fastcall sub_37FD80(_QWORD *a1)
{
  *a1 = &off_4B95C8;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

