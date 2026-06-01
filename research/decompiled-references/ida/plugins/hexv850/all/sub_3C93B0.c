void __fastcall sub_3C93B0(_QWORD *a1)
{
  *a1 = &off_4BC798;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

