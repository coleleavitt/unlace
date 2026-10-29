void __fastcall sub_19D40(_QWORD *a1)
{
  __int64 v2; // rdi
  void **v3; // rdi

  *a1 = off_8CFB8;
  if ( a1[251] )
  {
    a1[252] = 0;
    qfree();
  }
  if ( a1[248] )
  {
    a1[249] = 0;
    qfree();
  }
  if ( a1[245] )
  {
    a1[246] = 0;
    qfree();
  }
  if ( a1[242] )
  {
    a1[243] = 0;
    qfree();
  }
  v2 = a1[239];
  a1[213] = &off_8C258;
  if ( v2 )
  {
    a1[240] = 0;
    qfree();
  }
  if ( a1[234] )
  {
    a1[235] = 0;
    qfree();
  }
  v3 = (void **)a1[219];
  a1[213] = &off_8C1D0;
  sub_18C00(v3);
  *a1 = off_8D350;
  sub_49E50(a1);
  operator delete(a1, 0x7F8u);
}

