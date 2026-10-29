void __fastcall sub_19290(_QWORD *a1)
{
  *a1 = off_8B7D0;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

