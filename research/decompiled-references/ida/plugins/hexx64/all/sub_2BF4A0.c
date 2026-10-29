__int64 (__fastcall **__fastcall sub_2BF4A0(__int64 **a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v4; // r12
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  *a1 = (__int64 *)&off_4E1C50;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  result = &off_4E1B98;
  *a1 = (__int64 *)&off_4E1B98;
  if ( v2 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; i = (__int64 *)((char *)i + 1) )
      {
        v6 = (_QWORD *)(48LL * (_QWORD)i + v2);
        v7 = v6[2];
        *v6 = off_4E1370;
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

