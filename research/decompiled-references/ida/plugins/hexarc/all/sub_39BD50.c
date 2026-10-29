void __fastcall sub_39BD50(_QWORD *a1)
{
  *a1 = &off_4B3898;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

