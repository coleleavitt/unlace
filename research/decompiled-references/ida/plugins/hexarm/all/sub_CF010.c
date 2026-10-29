void __fastcall sub_CF010(_QWORD *a1)
{
  *a1 = &off_4D72A0;
  qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

