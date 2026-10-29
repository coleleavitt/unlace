void __fastcall sub_7DB00(__int64 *a1)
{
  void *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v2 = (void *)a1[18];
  if ( v2 )
  {
    sub_7D470(a1[18]);
    operator delete(v2, 0x360u);
  }
  v3 = a1[25];
  a1[18] = 0;
  if ( v3 )
  {
    v4 = a1[26];
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
        v3 = a1[25];
        v5 += 56;
      }
    }
    a1[26] = 0;
    qfree(v3);
  }
  v10 = a1[22];
  if ( v10 )
  {
    v11 = a1[23];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14);
          v10 = a1[22];
        }
      }
    }
    a1[23] = 0;
    qfree(v10);
  }
  v15 = a1[19];
  if ( v15 )
  {
    a1[20] = 0;
    qfree(v15);
  }
  v16 = a1[12];
  if ( v16 )
  {
    a1[13] = 0;
    qfree(v16);
  }
  v17 = a1[6];
  if ( v17 )
  {
    a1[7] = 0;
    qfree(v17);
  }
  v18 = a1[3];
  if ( v18 )
  {
    a1[4] = 0;
    qfree(v18);
  }
  v19 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v19);
  }
}

