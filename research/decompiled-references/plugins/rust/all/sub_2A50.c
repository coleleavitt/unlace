void __fastcall sub_2A50(_QWORD *a1)
{
  *a1 = off_9A58;
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
  operator delete(a1, 0x50u);
}
