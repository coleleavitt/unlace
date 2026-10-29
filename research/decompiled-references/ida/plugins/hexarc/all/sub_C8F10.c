void __fastcall sub_C8F10(_QWORD *a1)
{
  *a1 = &off_4A9420;
  qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

