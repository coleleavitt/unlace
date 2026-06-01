void __fastcall sub_1A740(_QWORD *a1)
{
  *a1 = off_45D08;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

