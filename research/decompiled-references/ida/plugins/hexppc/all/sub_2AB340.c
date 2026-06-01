void __fastcall sub_2AB340(_QWORD *a1)
{
  *a1 = &off_4CEAF8;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

