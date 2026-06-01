__int64 (__fastcall **__fastcall sub_6B10(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbp
  _QWORD *v9; // rax
  void *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbp
  void *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v18; // r14
  __int64 k; // r12
  _QWORD *v20; // rbp
  _QWORD *v21; // rbp
  _QWORD *v22; // rbx

  v1 = a1[1095];
  if ( v1 )
  {
    v3 = a1[1096];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v1 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v1 = a1[1095];
        }
      }
    }
    a1[1096] = 0;
    qfree();
  }
  if ( a1[1092] )
  {
    a1[1093] = 0;
    qfree();
  }
  v6 = a1[1089];
  if ( v6 )
  {
    v7 = a1[1090];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[1089];
        }
      }
    }
    a1[1090] = 0;
    qfree();
  }
  if ( a1[1086] )
  {
    a1[1087] = 0;
    qfree();
  }
  if ( a1[1083] )
  {
    a1[1084] = 0;
    qfree();
  }
  v10 = (void *)a1[562];
  a1[26] = off_1BA08;
  if ( v10 )
  {
    delete_dirtree();
    operator delete(v10, 8u);
  }
  v11 = a1[570];
  a1[569] = off_1B960;
  if ( v11 )
    qfclose();
  v12 = a1[565];
  while ( v12 )
  {
    sub_5060(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x30u);
  }
  v14 = a1 + 48;
  a1[26] = &unk_1BC90;
  while ( v14 != a1 + 36 )
  {
    v15 = *(v14 - 3);
    v14 -= 3;
    if ( v15 )
    {
      v14[1] = 0;
      qfree();
    }
  }
  v16 = a1[23];
  result = off_1BAC8;
  *a1 = off_1BAC8;
  if ( v16 )
  {
    v18 = a1[24];
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v20 = (_QWORD *)(v16 + 80 * k);
        if ( v20[6] )
        {
          v20[7] = 0;
          qfree();
        }
        if ( v20[3] )
        {
          v20[4] = 0;
          qfree();
        }
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
        }
        v16 = a1[23];
      }
    }
    a1[24] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  *a1 = &unk_1BC90;
  v21 = a1 + 19;
  v22 = a1 + 7;
  do
  {
    if ( *v21 )
    {
      v21[1] = 0;
      result = (__int64 (__fastcall **)())qfree();
    }
    v21 -= 3;
  }
  while ( v22 != v21 );
  return result;
}

