void __fastcall sub_2A7C00(_QWORD *a1)
{
  *a1 = &off_4AD7B0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

