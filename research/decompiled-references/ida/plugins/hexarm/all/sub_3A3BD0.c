void __fastcall sub_3A3BD0(_QWORD *a1)
{
  *a1 = &off_4E1390;
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

