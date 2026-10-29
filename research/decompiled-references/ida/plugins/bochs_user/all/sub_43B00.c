void __fastcall sub_43B00(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 i; // rbx
  __int64 v12; // rax

  v2 = a1[27];
  while ( v2 )
  {
    sub_428D0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[20];
  while ( v4 )
  {
    sub_42530(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1[13];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_42AA0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree();
    }
    operator delete(v7, 0x40u);
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  v9 = *a1;
  if ( *a1 )
  {
    v10 = a1[1];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = v9 + 40 * i;
        if ( *(_QWORD *)(v12 + 8) )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree();
          v9 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

