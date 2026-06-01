void __fastcall sub_2C210(_QWORD *a1)
{
  *a1 = &off_38238;
  a1[8] = 0;
  a1[10] = 0;
  sub_2C150(a1, -1);
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x68u);
}

