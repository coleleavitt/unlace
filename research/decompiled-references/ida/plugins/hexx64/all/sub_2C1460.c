void __fastcall sub_2C1460(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 *v3; // r13
  __int64 *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = (__int64 *)&off_4E2788;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  *a1 = (__int64 *)&off_4E26D0;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = nullptr;
      do
      {
        v5 = (_QWORD *)(v2 + 192LL * (_QWORD)v4);
        *v5 = &off_4E1528;
        cleanup_argloc();
        v6 = v5[13];
        if ( v6 )
        {
          v5[14] = 0;
          qfree(v6);
        }
        clear_tinfo_t();
        v7 = v5[9];
        if ( v7 )
        {
          v5[10] = 0;
          qfree(v7);
        }
        v4 = (__int64 *)((char *)v4 + 1);
        cleanup_argloc();
        cleanup_argloc();
        v2 = (__int64)a1[5];
      }
      while ( v3 != v4 );
    }
    a1[6] = nullptr;
    qfree(v2);
  }
  operator delete(a1, 0x58u);
}

