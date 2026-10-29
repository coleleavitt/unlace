void __fastcall sub_28FE0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  *a1 = off_C8098;
  v2 = a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  v3 = a1[7];
  if ( v3 )
  {
    v4 = a1[8];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 24);
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9);
        }
        v3 = a1[7];
        v5 += 56;
      }
    }
    a1[8] = 0;
    qfree(v3);
  }
  v10 = a1[4];
  if ( v10 )
  {
    a1[5] = 0;
    qfree(v10);
  }
  operator delete(a1, 0x78u);
}

