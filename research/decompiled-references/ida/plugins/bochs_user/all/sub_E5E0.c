void __fastcall sub_E5E0(_QWORD *a1)
{
  *a1 = off_70C58;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x260u);
}

