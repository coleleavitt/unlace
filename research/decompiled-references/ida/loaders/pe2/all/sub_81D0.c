void __fastcall sub_81D0(_QWORD *a1)
{
  *a1 = off_354F0;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x260u);
}

