void __fastcall sub_2BC450(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi

  *a1 = &off_4C21D0;
  a1[8] = 0;
  switch_dbctx();
  sub_13BF40(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4C2118;
  if ( v3 )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x58u);
}

