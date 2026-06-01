void __fastcall sub_39D5D0(_QWORD *a1)
{
  *a1 = &off_4BAA18;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

