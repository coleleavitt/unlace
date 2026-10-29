void __fastcall sub_D71F0(_QWORD *a1)
{
  *a1 = off_4C9E90;
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  *a1 = off_4C8C78;
  qfree();
  operator delete(a1, 0x90u);
}

