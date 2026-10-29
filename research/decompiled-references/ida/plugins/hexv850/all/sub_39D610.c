void __fastcall sub_39D610(_QWORD *a1)
{
  *a1 = &off_4BA650;
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

