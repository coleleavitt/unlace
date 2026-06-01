__int64 __fastcall sub_3C9C50(_QWORD *a1)
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

  *a1 = off_4E8860;
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  v2 = a1[19];
  *a1 = off_4E7B78;
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
  *a1 = &unk_4E86E8;
  if ( v11 )
  {
    a1[2] = 0;
    qfree();
  }
  return j__qfree();
}

