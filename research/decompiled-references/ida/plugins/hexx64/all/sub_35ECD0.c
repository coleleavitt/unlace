void __fastcall sub_35ECD0(_QWORD *a1, double a2)
{
  void *v3; // rdi
  void **v4; // rbx
  unsigned __int64 v5; // r12
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi

  if ( a1 )
  {
    v3 = (void *)a1[32];
    if ( v3 )
    {
      v4 = (void **)a1[37];
      v5 = a1[41] + 8LL;
      if ( (unsigned __int64)v4 < v5 )
      {
        do
        {
          v6 = *v4++;
          operator delete(v6, 0x200u);
        }
        while ( (unsigned __int64)v4 < v5 );
        v3 = (void *)a1[32];
      }
      operator delete(v3, 8LL * a1[33]);
    }
    v7 = a1[29];
    if ( v7 )
    {
      v8 = a1[30];
      if ( v8 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = (__int64 *)(v7 + 24 * i);
          v11 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v11);
            v7 = a1[29];
          }
        }
      }
      a1[30] = 0;
      qfree(v7);
    }
    sub_35DF10(a1 + 1, a2);
    operator delete(a1, 0x210u);
  }
}

