void __fastcall sub_2B250(_QWORD *a1)
{
  *a1 = off_97CF0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

