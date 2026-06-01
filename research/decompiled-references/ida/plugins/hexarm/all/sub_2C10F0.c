void __fastcall sub_2C10F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi

  *a1 = &off_4DC690;
  a1[8] = 0;
  switch_dbctx();
  sub_13FB80(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4DC5D8;
  if ( v3 )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x58u);
}

