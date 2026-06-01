void __fastcall sub_1C3450(_QWORD *a1)
{
  *a1 = off_4B2298;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x38u);
}

