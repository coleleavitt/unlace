void __fastcall sub_1A610(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 i; // rbx
  _QWORD *v10; // rbp

  v2 = a1[11];
  while ( v2 )
  {
    sub_189A0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[5];
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_180B0(*(_QWORD **)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 32);
    v4 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v5[5] = 0;
      qfree();
    }
    operator delete(v5, 0x40u);
  }
  v7 = *a1;
  if ( *a1 )
  {
    v8 = a1[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (_QWORD *)(v7 + 72 * i);
        if ( v10[5] )
        {
          v10[6] = 0;
          qfree();
        }
        if ( v10[2] )
        {
          v10[3] = 0;
          qfree();
        }
        v7 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

