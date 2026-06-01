void __fastcall sub_3B6D80(_QWORD *a1)
{
  *a1 = &off_4D4688;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

