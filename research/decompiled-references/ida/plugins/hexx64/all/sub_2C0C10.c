void __fastcall sub_2C0C10(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 *v3; // r13
  __int64 *i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  *a1 = (__int64 *)&off_4E2350;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  *a1 = (__int64 *)&off_4E2298;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (__int64 *)((char *)i + 1) )
      {
        v5 = (_QWORD *)(v2 + ((_QWORD)i << 6));
        *v5 = off_4E14B0;
        clear_tinfo_t();
        v6 = v5[2];
        if ( v6 )
        {
          v5[3] = 0;
          qfree(v6);
        }
        v2 = (__int64)a1[5];
      }
    }
    a1[6] = nullptr;
    qfree(v2);
  }
  operator delete(a1, 0x58u);
}

