void __fastcall sub_6FFF0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 j; // rbx
  _QWORD *v8; // rax

  v1 = a1[9];
  if ( v1 )
  {
    v2 = a1[10];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  v5 = a1[3];
  if ( v5 )
  {
    v6 = a1[4];
    if ( v6 )
    {
      for ( j = 0; j != v6; ++j )
      {
        v8 = (_QWORD *)(v5 + 24 * j);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
}

