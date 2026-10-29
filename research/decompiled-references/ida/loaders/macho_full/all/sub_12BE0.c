void __fastcall sub_12BE0(_QWORD *a1)
{
  *a1 = off_62AC0;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x48u);
}

