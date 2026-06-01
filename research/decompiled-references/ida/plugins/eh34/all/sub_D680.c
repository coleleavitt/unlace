void *__fastcall sub_D680(_QWORD *a1)
{
  __int64 v2; // rbp
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbp
  void *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 i; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 j; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  void *result; // rax

  *a1 = off_8B798;
  qfree(a1[56]);
  v2 = a1[52];
  while ( v2 )
  {
    sub_CC80(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x38u);
  }
  v4 = a1[46];
  while ( v4 )
  {
    sub_CE50(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1[40];
  while ( v6 )
  {
    sub_D4B0(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  v8 = a1[35];
  if ( v8 )
  {
    a1[36] = 0;
    qfree(v8);
  }
  qfree(a1[31]);
  qfree(a1[29]);
  qfree(a1[27]);
  v9 = a1[19];
  *a1 = off_8B6D8;
  if ( v9 )
  {
    a1[20] = 0;
    qfree(v9);
  }
  v10 = a1[15];
  if ( v10 )
  {
    a1[16] = 0;
    qfree(v10);
  }
  v11 = a1[12];
  if ( v11 )
  {
    a1[13] = 0;
    qfree(v11);
  }
  v12 = a1[9];
  if ( v12 )
  {
    v13 = a1[10];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = (__int64 *)(v12 + 24 * i);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16);
          v12 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v12);
  }
  v17 = a1[6];
  if ( v17 )
  {
    v18 = a1[7];
    if ( v18 )
    {
      for ( j = 0; j != v18; ++j )
      {
        v20 = (__int64 *)(v17 + 24 * j);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21);
          v17 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v17);
  }
  v22 = a1[1];
  result = &unk_8C6B0;
  *a1 = &unk_8C6B0;
  if ( v22 )
  {
    a1[2] = 0;
    return (void *)qfree(v22);
  }
  return result;
}

