void __fastcall sub_2C0CD0(__int64 **a1)
{
  __int64 v2; // rdi

  *a1 = (__int64 *)&off_4E1A90;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  *a1 = (__int64 *)&off_4E19D8;
  if ( v2 )
  {
    a1[6] = nullptr;
    qfree(v2);
  }
  operator delete(a1, 0x58u);
}

