void __fastcall sub_114B0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  *a1 = off_44D78;
  if ( a1[138] )
  {
    a1[139] = 0;
    qfree();
  }
  if ( a1[135] )
  {
    a1[136] = 0;
    qfree();
  }
  if ( a1[132] )
  {
    a1[133] = 0;
    qfree();
  }
  v1 = a1[129];
  if ( v1 )
  {
    v2 = a1[130];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[129];
        }
      }
    }
    a1[130] = 0;
    qfree();
  }
  operator delete(a1, 0x470u);
}

