void __fastcall sub_330D0(_QWORD *a1)
{
  *a1 = &off_46F70;
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  operator delete(a1, 0x68u);
}

