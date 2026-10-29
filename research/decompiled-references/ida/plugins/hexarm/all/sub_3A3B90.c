void __fastcall sub_3A3B90(_QWORD *a1)
{
  *a1 = &off_4E1758;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

