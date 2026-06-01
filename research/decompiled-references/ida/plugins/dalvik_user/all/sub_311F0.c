void __fastcall sub_311F0(_QWORD *a1)
{
  *a1 = &off_7D900;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

