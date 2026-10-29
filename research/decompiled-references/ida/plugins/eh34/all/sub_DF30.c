void *__fastcall sub_DF30(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbp
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 k; // r12
  _QWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 m; // rbp
  __int64 v22; // rax
  __int64 v23; // rbp
  void *v24; // rdi

  v2 = a1[92];
  *a1 = off_8B858;
  if ( v2 )
  {
    v3 = a1[93];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 32 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[92];
        }
      }
    }
    a1[93] = 0;
    qfree(v2);
  }
  qfree(a1[90]);
  v7 = a1[87];
  if ( v7 )
  {
    a1[88] = 0;
    qfree(v7);
  }
  qfree(a1[85]);
  v8 = a1[76];
  if ( v8 )
  {
    a1[77] = 0;
    qfree(v8);
  }
  v9 = a1[73];
  if ( v9 )
  {
    v10 = a1[74];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 32 * j);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v9 = a1[73];
        }
      }
    }
    a1[74] = 0;
    qfree(v9);
  }
  v14 = a1[70];
  if ( v14 )
  {
    v15 = a1[71];
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = (_QWORD *)(v14 + (k << 6));
        v18 = v17[5];
        if ( v18 )
        {
          v17[6] = 0;
          qfree(v18);
        }
        qfree(v17[3]);
        v14 = a1[70];
      }
    }
    a1[71] = 0;
    qfree(v14);
  }
  v19 = a1[67];
  if ( v19 )
  {
    v20 = a1[68];
    if ( v20 )
    {
      for ( m = 0; m != v20; ++m )
      {
        v22 = m;
        qfree(*(_QWORD *)(v19 + 16 * v22));
        v19 = a1[67];
      }
    }
    a1[68] = 0;
    qfree(v19);
  }
  v23 = a1[62];
  while ( v23 )
  {
    sub_DD60(*(_QWORD **)(v23 + 24));
    v24 = (void *)v23;
    v23 = *(_QWORD *)(v23 + 16);
    operator delete(v24, 0x28u);
  }
  return sub_D680(a1);
}

