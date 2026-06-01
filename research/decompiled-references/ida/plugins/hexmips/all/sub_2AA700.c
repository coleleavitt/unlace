void __fastcall sub_2AA700(_QWORD *a1)
{
  *a1 = &off_4C16F0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

