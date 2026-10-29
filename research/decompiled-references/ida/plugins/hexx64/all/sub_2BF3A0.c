__int64 (__fastcall **__fastcall sub_2BF3A0(__int64 **a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v4; // r13
  __int64 v5; // r12
  __int64 *i; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax

  *a1 = (__int64 *)&off_4E18D0;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  result = &off_4E1818;
  *a1 = (__int64 *)&off_4E1818;
  if ( v2 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      for ( i = nullptr; i != v4; i = (__int64 *)((char *)i + 1) )
      {
        v7 = (_QWORD *)(v5 + v2);
        v8 = v7[4];
        *v7 = off_4E12A8;
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8);
        }
        v2 = (__int64)a1[5];
        v5 += 88;
      }
    }
    a1[6] = nullptr;
    return (__int64 (__fastcall **)())qfree(v2);
  }
  return result;
}

