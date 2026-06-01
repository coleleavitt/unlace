void __fastcall func(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi

  v2 = a1[4];
  if ( v2 )
  {
    v3 = a1[5];
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
          v2 = a1[4];
        }
      }
    }
    a1[5] = 0;
    qfree(v2);
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = a1[2];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = v7 + 32 * j;
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 16) = 0;
          qfree(v11);
          v7 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v7);
  }
}
