void __fastcall sub_1A9630(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdi

  if ( a1 )
  {
    v2 = a1 + 45;
    do
    {
      if ( *v2 )
      {
        v2[1] = 0;
        qfree();
      }
      v2 -= 3;
    }
    while ( v2 != a1 + 15 );
    if ( a1[14] )
    {
      a1[15] = 0;
      qfree();
    }
    v3 = a1[10];
    a1[5] = &off_4B1DD8;
    if ( v3 )
    {
      v4 = a1[11];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (_QWORD *)(v3 + 24 * i);
          if ( *v6 )
          {
            v6[1] = 0;
            qfree();
            v3 = a1[10];
          }
        }
      }
      a1[11] = 0;
      qfree();
    }
    v7 = a1[6];
    a1[5] = &off_4B6FB8;
    if ( v7 )
    {
      a1[7] = 0;
      qfree();
    }
    if ( a1[1] )
    {
      a1[2] = 0;
      qfree();
    }
    sub_314600(a1);
    operator delete(a1, 0x188u);
  }
}

