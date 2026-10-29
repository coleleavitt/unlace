void __fastcall sub_124A0(_QWORD *a1)
{
  *a1 = off_45D08;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  operator delete(a1, 0x58u);
}

