void __fastcall sub_2C0A60(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 *v3; // r13
  __int64 v4; // r12
  __int64 *i; // rbp
  _QWORD *v6; // rdi
  __int64 v7; // rax

  *a1 = (__int64 *)&off_4E1E10;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  *a1 = (__int64 *)&off_4E1D58;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; i = (__int64 *)((char *)i + 1) )
      {
        v6 = (_QWORD *)(v4 + v2);
        v7 = v6[2];
        *v6 = off_4E13C0;
        if ( v7 )
        {
          v6[3] = 0;
          qfree(v7);
        }
        v2 = (__int64)a1[5];
        v4 += 56;
      }
    }
    a1[6] = nullptr;
    qfree(v2);
  }
  operator delete(a1, 0x58u);
}

