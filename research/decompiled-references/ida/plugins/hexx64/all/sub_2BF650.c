__int64 (__fastcall **__fastcall sub_2BF650(__int64 **a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v4; // r12
  __int64 v5; // r15
  __int64 *v6; // r14
  _QWORD *v7; // rbx

  *a1 = (__int64 *)&off_4E2190;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  result = &off_4E20D8;
  *a1 = (__int64 *)&off_4E20D8;
  if ( v2 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      v6 = nullptr;
      do
      {
        v7 = (_QWORD *)(v2 + v5);
        v6 = (__int64 *)((char *)v6 + 1);
        v5 += 264;
        *v7 = off_4E1460;
        sub_11CDA0((__int64)(v7 + 28));
        sub_11CDA0((__int64)(v7 + 26));
        sub_11CDA0((__int64)(v7 + 24));
        sub_11CDA0((__int64)(v7 + 12));
        sub_11CDA0((__int64)(v7 + 10));
        sub_11CDA0((__int64)(v7 + 8));
        v2 = (__int64)a1[5];
      }
      while ( v4 != v6 );
    }
    a1[6] = nullptr;
    return (__int64 (__fastcall **)())qfree(v2);
  }
  return result;
}

