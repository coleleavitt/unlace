__int64 (__fastcall **__fastcall sub_2C0D90(__int64 **a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v4; // r13
  __int64 *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = (__int64 *)&off_4E2510;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  result = &off_4E2458;
  *a1 = (__int64 *)&off_4E2458;
  if ( v2 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = nullptr;
      do
      {
        v6 = (_QWORD *)(v2 + 192LL * (_QWORD)v5);
        *v6 = &off_4E1528;
        cleanup_argloc();
        v7 = v6[13];
        if ( v7 )
        {
          v6[14] = 0;
          qfree(v7);
        }
        clear_tinfo_t();
        v8 = v6[9];
        if ( v8 )
        {
          v6[10] = 0;
          qfree(v8);
        }
        v5 = (__int64 *)((char *)v5 + 1);
        cleanup_argloc();
        cleanup_argloc();
        v2 = (__int64)a1[5];
      }
      while ( v4 != v5 );
    }
    a1[6] = nullptr;
    return (__int64 (__fastcall **)())qfree(v2);
  }
  return result;
}

