void __fastcall sub_1CB70(_QWORD *a1)
{
  void **v2; // rdi

  *a1 = &off_8C258;
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  if ( a1[21] )
  {
    a1[22] = 0;
    qfree();
  }
  v2 = (void **)a1[6];
  *a1 = &off_8C1D0;
  sub_18C00(v2);
  operator delete(a1, 0xE8u);
}

