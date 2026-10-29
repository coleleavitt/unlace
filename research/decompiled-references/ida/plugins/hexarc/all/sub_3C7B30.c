void __fastcall sub_3C7B30(_QWORD *a1)
{
  *a1 = &off_4B5618;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

