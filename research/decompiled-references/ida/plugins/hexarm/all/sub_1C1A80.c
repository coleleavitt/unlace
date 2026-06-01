void __fastcall sub_1C1A80(_QWORD *a1)
{
  *a1 = off_4D8F00;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

