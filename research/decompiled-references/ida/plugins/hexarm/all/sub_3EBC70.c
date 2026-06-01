void __fastcall sub_3EBC70(_QWORD *a1)
{
  *a1 = &unk_4E7E10;
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x198u);
}

