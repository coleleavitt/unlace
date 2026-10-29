void __fastcall sub_1C7D10(_QWORD *a1)
{
  *a1 = off_4D8F78;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x38u);
}

