void __fastcall sub_8030(_QWORD *a1)
{
  *a1 = &off_35518;
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  operator delete(a1, 0xA0u);
}

