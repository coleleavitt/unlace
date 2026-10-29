void __fastcall sub_2C09A0(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 *v3; // r12
  __int64 *i; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  *a1 = (__int64 *)&off_4E1C50;
  a1[8] = nullptr;
  switch_dbctx();
  sub_140140(a1 + 9);
  v2 = (__int64)a1[5];
  *a1 = (__int64 *)&off_4E1B98;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (__int64 *)((char *)i + 1) )
      {
        v5 = (_QWORD *)(48LL * (_QWORD)i + v2);
        v6 = v5[2];
        *v5 = off_4E1370;
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

