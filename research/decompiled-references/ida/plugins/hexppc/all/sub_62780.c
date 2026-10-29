void __fastcall sub_62780(_QWORD *a1)
{
  *a1 = off_4C8D58;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  qfree();
  qfree();
  *a1 = off_4C8C78;
  qfree();
  operator delete(a1, 0x60u);
}

