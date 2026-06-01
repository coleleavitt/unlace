void __fastcall sub_2B210(_QWORD *a1)
{
  *a1 = &off_97E30;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

