void __fastcall sub_6ACF0(_QWORD *a1)
{
  *a1 = &off_8CB78;
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

