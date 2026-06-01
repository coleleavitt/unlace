void __fastcall sub_155F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi

  *a1 = off_C7478;
  v2 = a1[138];
  if ( v2 )
  {
    a1[139] = 0;
    qfree(v2);
  }
  v3 = a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    qfree(v3);
  }
  v4 = a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    qfree(v4);
  }
  v5 = a1[129];
  if ( v5 )
  {
    v6 = a1[130];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = a1[129];
        }
      }
    }
    a1[130] = 0;
    qfree(v5);
  }
  operator delete(a1, 0x480u);
}

