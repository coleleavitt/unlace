__int64 (__fastcall **__fastcall sub_2BF730(__int64 **a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v4; // r13
  __int64 *i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi

  *a1 = (__int64 *)&off_4E2350;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  result = &off_4E2298;
  *a1 = (__int64 *)&off_4E2298;
  if ( v2 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; i = (__int64 *)((char *)i + 1) )
      {
        v6 = (_QWORD *)(v2 + ((_QWORD)i << 6));
        *v6 = off_4E14B0;
        clear_tinfo_t();
        v7 = v6[2];
        if ( v7 )
        {
          v6[3] = 0;
          qfree(v7);
        }
        v2 = (__int64)a1[5];
      }
    }
    a1[6] = nullptr;
    return (__int64 (__fastcall **)())qfree(v2);
  }
  return result;
}

