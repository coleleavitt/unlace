void __fastcall sub_198C0(_QWORD *a1)
{
  *a1 = off_97188;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

