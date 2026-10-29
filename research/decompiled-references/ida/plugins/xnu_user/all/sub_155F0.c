__int64 __fastcall sub_155F0(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 i; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 j; // rbx
  __int64 v16; // rax
  void **v17; // rdi

  *a1 = off_98FB8;
  if ( a1[263] )
  {
    a1[264] = 0;
    qfree();
  }
  v2 = a1[250];
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_13520(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree();
    }
    operator delete(v3, 0x48u);
  }
  v5 = a1[245];
  if ( v5 )
  {
    v6 = a1[246];
    if ( v6 )
    {
      v7 = 0;
      for ( i = 0; i != v6; ++i )
      {
        v9 = (_QWORD *)(v5 + v7);
        if ( *(_QWORD *)(v5 + v7 + 72) )
        {
          v9[10] = 0;
          qfree();
        }
        if ( v9[5] )
        {
          v9[6] = 0;
          qfree();
        }
        if ( v9[2] )
        {
          v9[3] = 0;
          qfree();
        }
        v5 = a1[245];
        v7 += 104;
      }
    }
    a1[246] = 0;
    qfree();
  }
  if ( a1[238] )
  {
    a1[239] = 0;
    qfree();
  }
  v10 = a1[231];
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_137E0(*(_QWORD **)(v10 + 24));
    v12 = *(_QWORD *)(v10 + 32);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[5] = 0;
      qfree();
    }
    operator delete(v11, 0x48u);
  }
  a1[213] = &off_98270;
  sub_2FA70(a1 + 213);
  v13 = a1[226];
  if ( v13 )
  {
    v14 = a1[227];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = 9 * j;
        sub_2F9D0(v13 + 8 * v16);
        v13 = a1[226];
      }
    }
    a1[227] = 0;
    qfree();
  }
  if ( a1[223] )
  {
    a1[224] = 0;
    qfree();
  }
  v17 = (void **)a1[219];
  a1[213] = &off_981E8;
  sub_12E90(v17);
  *a1 = off_99350;
  return sub_54C10(a1);
}

