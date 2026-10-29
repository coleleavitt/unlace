void *__fastcall sub_3C3270(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdi
  void *result; // rax

  *a1 = off_4BF758;
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
  }
  v2 = a1[19];
  *a1 = off_4BEAD8;
  if ( v2 )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  v7 = a1[6];
  if ( v7 )
  {
    v8 = a1[7];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 24 * j);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree();
  }
  v11 = a1[1];
  result = &unk_4BF6A0;
  *a1 = &unk_4BF6A0;
  if ( v11 )
  {
    a1[2] = 0;
    return (void *)qfree();
  }
  return result;
}

