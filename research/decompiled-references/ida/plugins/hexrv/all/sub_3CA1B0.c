void __fastcall sub_3CA1B0(_QWORD *a1)
{
  *a1 = &off_4BB838;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

