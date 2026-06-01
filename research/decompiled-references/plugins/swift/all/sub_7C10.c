void __fastcall sub_7C10(void *a1)
{
  void *v1; // r14
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 i; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_7C10(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 14);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[15];
        if ( v4 )
        {
          v5 = 0;
          for ( i = 0; i != v4; ++i )
          {
            v7 = (__int64 *)(v3 + v5);
            v8 = *(_QWORD *)(v3 + v5 + 24);
            if ( v8 )
            {
              v7[4] = 0;
              qfree(v8);
            }
            v9 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v9);
            }
            v3 = v2[14];
            v5 += 56;
          }
        }
        v2[15] = 0;
        qfree(v3);
      }
      v10 = v2[10];
      if ( v10 )
      {
        v2[11] = 0;
        qfree(v10);
      }
      v11 = v2[6];
      if ( v11 )
      {
        v2[7] = 0;
        qfree(v11);
      }
      operator delete(v2, 0xA0u);
    }
    while ( v1 );
  }
}
