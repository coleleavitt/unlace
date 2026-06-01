void __fastcall sub_131E0(_QWORD *a1)
{
  void **v2; // rdi

  *a1 = &off_46A40;
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
  *a1 = &off_469B8;
  sub_12FB0(v2);
  operator delete(a1, 0xE8u);
}

